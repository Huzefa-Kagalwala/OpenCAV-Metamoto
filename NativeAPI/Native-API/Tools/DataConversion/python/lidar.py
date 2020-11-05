"""
Lidar Data Bus Message and PCD converter
Data Bus Message file parsing (Python)

Copyright Metamoto Inc, 2018
"""

from utilities import *
import numpy as np

def lidar_dbm_to_point_cloud(filename):
  messages = read_data_bus_message_file(filename)
  print("number of messages read from file '", filename, "': ", len(messages))

  # get the number of points
  num_points = 0
  for message in messages:
    for group in message.lidar.groups:
      for laserReturn in group.returns:
        num_points += len(laserReturn.ranges)

  print("number of points in the point cloud file: ", num_points)

  with open(filename[:-4] + ".pcd", "w") as f:
    # write the header
    f.write("VERSION .7\n")
    f.write("FIELDS x y z rgb\n")
    f.write("SIZE 4 4 4 4\n")
    f.write("TYPE F F F F\n")
    f.write("COUNT 1 1 1 1\n")
    f.write("WIDTH " + str(num_points) + "\n")
    f.write("HEIGHT 1\n")
    f.write("VIEWPOINT 0 0 0 1 0 0 0\n")
    f.write("POINTS " + str(num_points) + "\n")
    f.write("DATA ascii\n")

    x_axis = (1, 0, 0)
    y_axis = (0, 1, 0)
    z_axis = (0, 0, 1)
  
    # write lidar point cloud data
    for message in messages:
      for group in message.lidar.groups:
        origin = [group.pose.position.x, group.pose.position.y, group.pose.position.z]
        orientation = [group.pose.orientation.x, group.pose.orientation.y, group.pose.orientation.z, group.pose.orientation.w]
        sensor_right = quaternion_vector_multiply(orientation, x_axis)
        sensor_up = quaternion_vector_multiply(orientation, y_axis)
        sensor_forward = quaternion_vector_multiply(orientation, z_axis)
        group_orientation = axis_angle_to_quaternion(sensor_up, np.deg2rad(group.azimuth_angle))
        group_direction = quaternion_vector_multiply(group_orientation, sensor_forward)
        group_right = quaternion_vector_multiply(group_orientation, sensor_right)
  
        for laserReturn in group.returns:
          elevation = np.deg2rad(laserReturn.elevation_angle)
          ray_direction = quaternion_vector_multiply(axis_angle_to_quaternion(group_right, -elevation), group_direction)
  
          for i in range(len(laserReturn.ranges)):
            hit_point = origin + np.multiply(laserReturn.ranges[i], ray_direction)
            f.write("{:.4f}".format(hit_point[0]) + " {:.4f}".format(hit_point[1]) + " {:.4f}".format(hit_point[2]) +
                    " {:.6f}".format(laserReturn.intensities[i]) + "\n")

  print("point cloud data written to '" + f.name + "'.'")
