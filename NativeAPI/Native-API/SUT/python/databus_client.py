# Metamoto, Inc., 2018
# System Under Test (SUT) Example
# TensorFlow/Python Vehicle Detector
#
# DataBusClient class
# ==============================================================================

import grpc

from metamoto.services import data_bus_pb2
from metamoto.services import data_bus_pb2_grpc


class DataBusClient:

  def __init__(self, uri, name, ego_vehicle_id):
    self._channel = grpc.insecure_channel(uri)
    self._stub = data_bus_pb2_grpc.DataBusStub(self._channel)
    self._name = name
    self._ego_vehicle_id = ego_vehicle_id

  def publish(self, topic):
    self._stub.Publish(data_bus_pb2.DataBusPublishRequest(topic=topic,
                                                          writer_name=self._name,
                                                          ego_vehicle_id=self._ego_vehicle_id))

  def subscribe(self, topic):
    self._stub.Subscribe(data_bus_pb2.DataBusSubscribeRequest(topic=topic,
                                                              reader_name=self._name,
                                                              ego_vehicle_id=self._ego_vehicle_id))

  def write(self, topic, message):
    self._stub.Write(data_bus_pb2.DataBusWriteRequest(topic=topic,
                                                      writer_name=self._name,
                                                      message=message,
                                                      ego_vehicle_id=self._ego_vehicle_id))

  def read_last(self, topic, time):
    return self._stub.ReadLast(data_bus_pb2.DataBusReadLastRequest(topic=topic,
                                                                   reader_name=self._name,
                                                                   time=time,
                                                                   ego_vehicle_id=self._ego_vehicle_id))
