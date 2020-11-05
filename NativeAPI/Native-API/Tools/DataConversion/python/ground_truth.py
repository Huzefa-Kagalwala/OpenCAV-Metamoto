"""
Ground Truth Data Bus Message extractor
Data Bus Message file parsing (Python)

Copyright Metamoto Inc, 2018
"""

from utilities import *

def ground_truth_dbm_to_csv(filename):
  messages = read_data_bus_message_file(filename)
  print("number of messages read from file '", filename, "': ", len(messages))

  with open(filename[:-4] + ".csv", "w") as f:
    
    for message in messages:
      gt = message.ground_truth
  
      # first write general information about the scene at this time (i.e. number of vehicles, pedestrians ,etc.)
      f.write("time: " + str(message.header.time) + "," +
              str(len(gt.vehicles)) + "," +
              str(len(gt.pedestrians)) + "," +
              str(len(gt.traffic_lights)) + "," +
              str(len(gt.traffic_signs)) + "\n")
  
      # write the information of the ego vehicle
      for ego in gt.ego_vehicles:
        f.write("ego vehicle: " + str(ego.id) + "," +
                str(ego.pose.position.x) + "," + str(ego.pose.position.y) + "," + str(ego.pose.position.z) + "," +
                str(ego.pose.orientation.x) + "," + str(ego.pose.orientation.y) + "," +
                str(ego.pose.orientation.z) + "," + str(ego.pose.orientation.w) + "," +
                str(ego.shape.dimensions[0]) + "," + str(ego.shape.dimensions[1]) + "," + str(ego.shape.dimensions[2]) 
                + "\n")
  
      # write traffic vehicle information
      for veh in gt.vehicles:
        f.write("traffic vehicle: " + str(veh.id) + "," +
                str(veh.pose.position.x) + "," + str(veh.pose.position.y) + "," + str(veh.pose.position.z) + "," +
                str(veh.pose.orientation.x) + "," + str(veh.pose.orientation.y) + "," +
                str(veh.pose.orientation.z) + "," + str(veh.pose.orientation.w) + "," +
                str(veh.shape.dimensions[0]) + "," + str(veh.shape.dimensions[1]) + "," + str(veh.shape.dimensions[2]) 
                + "\n")
  
      # write pedestrian information
      for ped in gt.pedestrians:
        f.write("pedestrian: " + str(ped.id) + "," +
                str(ped.pose.position.x) + "," + str(ped.pose.position.y) + "," + str(ped.pose.position.z) + "," +
                str(ped.pose.orientation.x) + "," + str(ped.pose.orientation.y) + "," +
                str(ped.pose.orientation.z) + "," + str(ped.pose.orientation.w) + "," +
                str(ped.shape.dimensions[0]) + "," + str(ped.shape.dimensions[1]) + "," + str(ped.shape.dimensions[2]) 
                + "\n")