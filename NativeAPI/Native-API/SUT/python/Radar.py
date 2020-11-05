#!/usr/bin/env python3
"""
Metamoto System Under Test (SUT) Example
Python/TensorFlow Vehicle Detector

Vehicle Detector Controller class

Metamoto, 2019
"""

import time, sys, math, os, argparse
from concurrent import futures
import grpc

from processor import Processor
from databus_client import DataBusClient
from reporting_client import ReportingClient

from metamoto.services import controller_pb2
from metamoto.services import controller_pb2_grpc
from metamoto.messages import data_bus_message_pb2
from metamoto.messages import log_message_pb2
from metamoto.messages import vehicle_controls_pb2
from metamoto.messages import visualization_pb2
from metamoto.types import enumerations_pb2
from metamoto.types import result_metadata_pb2
from metamoto.types import visual_path_pb2

class Controller(controller_pb2_grpc.ControllerServicer):
  """
  Controller Service Class for Vehicle Detector.

  TestEngine will call Initialize() once and then Update() until the test is complete
  and Close() to end the test. 
  Controller listens on port passed from command line (or default port) and gets service URIs from Initialize call.
  """

  # Image processor crops image to 720x720
  IMAGE_AREA = 518400.0

  def __init__(self):
    self.databus_client = None
    self.reporting_client = None
    self.process = None
    self.path = None
    self.next_path_time = -1
    self.closed = False
    self.speed_limit_square = 225  # TODO: Get speed limit from road network
    self.queue = list()
    self.last_slow_time = 0.0
    self.last_steer_time = -3.0
    self.last_ratio = 0.0
    self.last_throttle = 0.0
    self.last_brake = 0
    self.responsiveness = 0.5
    self.directory = ""
    self.ego_vehicle_id = None

  def Initialize(self, request, context):
    print('\nInitialize() called')
    
    self.ego_vehicle_id = request.ego_vehicle_id
    
    # Initialize services
    for service in request.services:
      print("{}: {}".format(service.name, service.uri))
      if service.name.lower() == 'databus':
        self.databus_client = DataBusClient(service.uri, 'VehicleDetector', self.ego_vehicle_id)
      if service.name.lower() == 'reporting':
        self.reporting_client = ReportingClient(service.uri, self.ego_vehicle_id)

    # Process parameters
    for key in request.parameters.fields:
      value = request.parameters.fields[key]
      if key.lower() == 'responsiveness':
        self.responsiveness = value.number_value

    # Initialize the Data Bus
    self.databus_client.publish('VehicleControls')
    self.databus_client.subscribe('VehicleState')
    self.databus_client.subscribe('Camera')
    self.databus_client.subscribe('Radar')

    # Setup results directory for storing images
    if os.path.exists(request.results_directory):
      self.directory = request.results_directory
    else: 
      self.directory = os.path.abspath(os.path.dirname(__file__))
    
    if not os.path.exists(self.directory + '/images'):
      os.mkdir(self.directory + '/images')

    # Initialize image processor
    self.process = Processor(self.directory)
    self.process.load_frozen_graph()

    self.path = visual_path_pb2.VisualPath()

    # Return reply
    return controller_pb2.ControllerInitializeReply(name='Vehicle Detector', version='0.1a', update_rate=30)

  def Update(self, request, context):
    print('\nUpdate() called @ {}'.format(request.time))

    closest_car = self.radar_data_processing(request.time)

    # Process image to get new maximum ratio
    #max_ratio = self.process_image(request.time)

    # Read vehicle state and get vehicle controls
    vehicle_state = self.databus_client.read_last('VehicleState', request.time).message.vehicle_state

    vehicle_controls = self.get_vehicle_controls(vehicle_state, closest_car, request.time)

    #vehicle_controls = self.get_vehicle_controls(vehicle_state, max_ratio, request.time)

    # Send vehicle controls message
    hdr = data_bus_message_pb2.Header(time=request.time)
    message = data_bus_message_pb2.DataBusMessage(header=hdr, vehicle_controls=vehicle_controls)
    self.databus_client.write('VehicleControls', message)

    # Update path visualization
    self.create_path_visualization(vehicle_state.pose.position, request.time)

    return controller_pb2.ControllerUpdateReply()

  def Close(self, request, context):
    print('\nClose() called')
  
    # Generate video from images and then delete images
    print("Encoding video from vehicle detector images.")
    try:
      os.system('ffmpeg -f image2 -r 30 -i ' + self.directory + '/images/%d.png -vcodec mpeg4 -b:v 3200k -y ' + self.directory + '/tensorCam.mp4')
    except:
      print("Failed to encode video. Check that ffmpeg is installed.")

    os.system('rm -rf %s/*' % (self.directory + '/images'))
    
    # Send result_metadata describing the video
    reply = controller_pb2.ControllerCloseReply()
    result = result_metadata_pb2.ResultMetadata(name='tensorCam', type='video', format='mp4', path='tensorCam.mp4')
    reply.results.extend([result])

    self.closed = True
    return reply


  def radar_data_processing(self, time):
    range = 1000  #random high value till we find the closest car
    try:
      radar_reply = self.databus_client.read_last('Radar', time)
      for radar_object in radar_reply.message.radar.objects:
        #print(str(radar_object.object_type) + ": " + str(radar_object.range))
        if radar_object.object_type == 2 :
          if range > radar_object.range:
            range = radar_object.range
    except:
      print("radar_raw: exception occurred")

    if range<1000:
      print("closest car "+str(range))
      return range
    else:
      print("no car detected")
      return None


  def process_image(self, time):
    # Read Camera Data Bus message and pass image data and dimensions to detector
    reply = self.databus_client.read_last('Camera', time)
    image = reply.message.camera.image

    labels = self.process.label_image(image.data, image.width, image.height)
    max_ratio = 0.0
    if labels is not None:
      for label in labels:
        center = self.process.get_center(label[1:])

        # Set ratio of box area to image area
        ratio = abs(label[3]*label[4]) / self.IMAGE_AREA
        if label[0] == 'car' and self.process.is_in_crash_zone(center):
          if ratio > max_ratio:
            max_ratio = ratio

        # Log some info about the detected object to the reporting service
        description = (label[0] + ' ' + str(int(label[5] * 100)) + '%\n' +
                                'ratio: ' + str(ratio) + '\n' +
                                'pos: (' + str(label[1]) + ',' + str(label[2]) + ') \n' +
                                'dim: (' + str(abs(label[3])) + 'x' + str(abs(label[4])) + ') \n')
        message = log_message_pb2.LogMessage(time=time,
                                             level=log_message_pb2._LOGMESSAGE_LEVEL.values_by_name['LEVEL_INFO'].number,
                                             class_name='Controller', method='Update',
                                             message=self.process.graph_name + ' detected a ' + description)
        self.reporting_client.log(message) 
    else:
      print("No image data from Camera.")

    return max_ratio


  def get_vehicle_controls(self, vehicle_state, closest_car, time):
    vehicle_controls = vehicle_controls_pb2.VehicleControls()
    speed = math.sqrt(math.pow(vehicle_state.velocity.linear.x, 2) +
                  math.pow(vehicle_state.velocity.linear.y, 2) +
                  math.pow(vehicle_state.velocity.linear.z, 2))
    print("Current vehicle speed "+str(speed))
    safe_threshold1 = 20
    safe_threshold2 = 5
    if closest_car is not None:
      if closest_car<safe_threshold1:
        vehicle_controls.throttle.value = 0
        vehicle_controls.brake.value = 0.3
        print("Emergency stop")
        if closest_car < safe_threshold2:
          vehicle_controls.throttle.value = 0
          vehicle_controls.brake.value = 1
      """else:
        vehicle_controls.acceleration.value = 0
        vehicle_controls.brake.value = 0"""
    else:      
      """throttle = max(1 - (speed * speed / self.speed_limit_square), 0)
      vehicle_controls.throttle.value = 0"""
      vehicle_controls.brake.value = 0
      vehicle_controls.acceleration.value = 0
  
    return vehicle_controls



  '''def get_vehicle_controls(self, vehicle_state, max_ratio, time):
    speed = math.sqrt(math.pow(vehicle_state.velocity.linear.x, 2) +
                      math.pow(vehicle_state.velocity.linear.y, 2) +
                      math.pow(vehicle_state.velocity.linear.z, 2))
    steer_angle = vehicle_state.steer_angle
    
    vehicle_controls = vehicle_controls_pb2.VehicleControls()
    
    # Use a queue of ratios to calculate an average
    if len(self.queue) > 0 and time - self.queue[0][1] > 0.1:
      self.queue = self.queue[1:]
    self.queue.append([max_ratio, time])
    
    avg_ratio = 0.0
    if len(self.queue) > 0:
      for i in self.queue:
        avg_ratio = avg_ratio + i[0]
      avg_ratio = avg_ratio / len(self.queue)

    delta_ratio = avg_ratio - self.last_ratio
    response = -(self.responsiveness - 0.5)
    
    throttle = max(1 - (speed * speed / self.speed_limit_square), 0)
    vehicle_controls.throttle.value = throttle
    vehicle_controls.brake.value = 0

    # Take action depending on the relative area of the vehicle box
    if max_ratio > 0.1:
      # vehicle is too close, stop throttling
      # brake hard until full stop
      self.last_slow_time = time
      vehicle_controls.throttle.value = 0
      if speed < 0.01:
        vehicle_controls.brake.value = self.last_brake * 0.9
      else:
        vehicle_controls.brake.value = 1
    elif max_ratio > 0.01:
      # the vehicle area is small (so vehicle is far away)
      # use change in avg ratio (delta_ratio) to determine throttle/braking
      if delta_ratio > 0.0001 + response/10000:
        self.last_slow_time = time 
        vehicle_controls.throttle.value = self.last_throttle * max((.0005 - delta_ratio) * 2000, 0)
      elif delta_ratio > 0.001 + response/1000:
        self.last_slow_time = time
        vehicle_controls.throttle.value = 0
        vehicle_controls.brake.value = min(max_ratio * speed, 1)
      else:
        vehicle_controls.brake.value = 0
    elif time - self.last_slow_time < 0.2:
      # there are no close cars in view, but vehicle had to slow down recently
      # maintain past throttle and brake values
      vehicle_controls.throttle.value = self.last_throttle
      vehicle_controls.brake.value = self.last_brake

    if abs(steer_angle) > 3:
      self.last_steer_time = time
    if time - self.last_steer_time < 0.4 - response/10 and speed > 5:
      vehicle_controls.brake.value = throttle / 2

    # Save state
    self.last_ratio = avg_ratio
    self.last_brake = vehicle_controls.brake.value
    self.last_throttle = vehicle_controls.throttle.value
    
    return vehicle_controls   '''


  def create_path_visualization(self, pos, time):
    if self.reporting_client is None:
      return
      
    # Create a path_point at the current vehicle position, and add it to the trailing path visualization
    point = visual_path_pb2.VisualPathPoint(
      position=pos,
      normal=visual_path_pb2.metamoto_dot_types_dot_vector3__pb2.Vector3(y=1),
      smoothness=8,
      color='#389f2b',
      glue=True,
      transparency=0.5
    )

    # add path_point to permanent path every second,
    # otherwise add path_point to temporary path
    if self.next_path_time <= time:
      self.next_path_time = time + 1
      self.path.path_points.add().CopyFrom(point)
      path = self.path
    else:
      path = visual_path_pb2.VisualPath()
      path.CopyFrom(self.path)
      path.path_points.add().CopyFrom(point)

    # Results Analyzer should display this visual at request.time in World Reference Frame
    visualization = visualization_pb2.Visualization(
      time=time,
      frame=enumerations_pb2.REFERENCE_FRAME_WORLD,
      path=path,
      description='trailing path',
      duration=0.033,
    )

    # Send visualization message
    self.reporting_client.visualize(visualization)


if __name__ == '__main__':
  parser = argparse.ArgumentParser(description='Vehicle Detector Example SUT')
  parser.add_argument('--port', '-port', type=int, default=50001)
  run_args = parser.parse_args()
  
  server = grpc.server(futures.ThreadPoolExecutor(max_workers=1))
  controller = Controller()
  controller_pb2_grpc.add_ControllerServicer_to_server(controller, server)
  server.add_insecure_port('0.0.0.0:' + str(run_args.port))
  server.start()
  print("\nVehicle Detector gRPC server started. Listening on port {}.".format(run_args.port))
  
  try:
    while True:
      time.sleep(30)
      if controller.closed:
        raise KeyboardInterrupt
  except KeyboardInterrupt:
    server.stop(0)
    print("\nVehicle Detector gRPC server stopped.")
