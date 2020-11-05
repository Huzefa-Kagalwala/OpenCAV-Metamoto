"""
Data Bus Message file parsing (Python)

Copyright Metamoto Inc, 2018
"""

import sys, time

import ground_truth
import lidar

if __name__ == '__main__':
  start_time = time.time()

  arg = 0
  while arg < len(sys.argv):
    if sys.argv[arg].lower() == "-groundtruthdbm2csv":
      filename = sys.argv[arg + 1]

      ground_truth.ground_truth_dbm_to_csv(filename)
      break

    elif sys.argv[arg].lower() == "-lidardbm2pcd":
      filename = sys.argv[arg + 1]

      lidar.lidar_dbm_to_point_cloud(filename)
      break

    elif sys.argv[arg].lower() == "-lidardat2pcd":
      filename = sys.argv[arg + 1]

      lidar.metamoto_point_cloud_to_pcd(filename)
      break
    
    else:
      arg += 1

  end_time = time.time()
  print("Total elapsed time:", end_time - start_time, "sec")