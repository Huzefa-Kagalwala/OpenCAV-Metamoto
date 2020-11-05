#pragma once

#include <deque>

#include "metamoto/messages/data_bus_message.pb.h"
#include "metamoto/types/test_case.pb.h"
#include "metamoto/types/vehicle_info.pb.h"
#include "metamoto/types/waypoint.pb.h"
#include "map_client.h"

#include "ros/ros.h"
#include "sensor_msgs/Image.h"
#include "sensor_msgs/PointCloud2.h"
#include "geometry_msgs/TwistStamped.h"
#include "nmea_msgs/Sentence.h"
#include "autoware_msgs/ControlCommandStamped.h"


class DataConversions {
 private:
  std::string _imageOrigin = "lower_left";
  float _minLidarAngle = -30.67;
  float _maxLidarAngle = 10.67;
  int _lidarChannels = 32;

 public:
  float startTimeS = 7200;

  metamoto::types::VehicleInfo egoVehicleInfo;
  MapClient* map = nullptr;

  // To avoid allocating these large memory chunks on every frame:
  sensor_msgs::Image image;
  sensor_msgs::PointCloud2 pointCloud;

  // car_msgs::CarState ConvertState(const metamoto::messages::DataBusMessage& vehicleState);
  bool WriteWaypoints(const std::vector<metamoto::types::Waypoint>& waypoints, const std::string& filename);
  bool WriteSensorCalibration(const metamoto::types::TestCase& testCase, const std::string& filename);
  void ConvertImage(const metamoto::messages::DataBusMessage& camera);
  void ConvertLidar(const std::vector<metamoto::messages::DataBusMessage>& lidars);
  geometry_msgs::TwistStamped ConvertState(const metamoto::messages::DataBusMessage& vehicleState);
  nmea_msgs::Sentence ConvertGps(const metamoto::messages::DataBusMessage& gps);
  nmea_msgs::Sentence ConvertOrientation(const metamoto::messages::DataBusMessage& state);
  metamoto::messages::DataBusMessage ConvertControls(const autoware_msgs::ControlCommandStamped& ctrlCmd);
};
