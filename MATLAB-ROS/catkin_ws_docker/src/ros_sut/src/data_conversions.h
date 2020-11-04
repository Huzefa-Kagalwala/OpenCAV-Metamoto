#pragma once

#include "metamoto/messages/data_bus_message.pb.h"
#include "metamoto/types/test_case.pb.h"
#include "metamoto/types/vehicle_info.pb.h"
#include "metamoto/types/waypoint.pb.h"
#include "map_client.h"

#include "ros_sut/ControlCommand.h"
#include "ros_sut/SixChannelControlCommand.h"

#include "ros/ros.h"
#include "geometry_msgs/Point.h"
#include "tf2_msgs/TFMessage.h"
#include "nav_msgs/Odometry.h"
#include "sensor_msgs/Image.h"
#include "sensor_msgs/Imu.h"
#include "sensor_msgs/PointCloud2.h"
#include "nmea_msgs/Sentence.h"


#include "radar_msgs/RadarTrackArray.h"
#include "radar_msgs/RadarTrack.h"
#include "geometry_msgs/Point32.h"
#include "radar_msgs/RadarProcessed.h"
#include "radar_msgs/RadarProcessedArray.h"
#include "gps_msgs/gps.h"

class DataConversions {
 private:
  std::string _imageOrigin = "lower_left";
  float _minLidarAngle = -30.67;
  float _maxLidarAngle = 10.67;
  int _lidarChannels = 32;

 public:
  static constexpr float startTimeS = 7200;  // arbitrary non-zero starting clock time

  metamoto::types::VehicleInfo egoVehicleInfo;
  MapClient* map = nullptr;

  // To avoid allocating these large memory chunks on every frame:
  sensor_msgs::Image image;
  sensor_msgs::PointCloud2 pointCloud;

  bool DoSomethingWithWaypoints(const std::vector<metamoto::types::Waypoint>& waypoints);
  bool WriteSensorCalibration(const metamoto::types::TestCase& testCase, const std::string& filename);
  void ConvertImage(const metamoto::messages::DataBusMessage& camera);
  void ConvertLidar(const std::vector<metamoto::messages::DataBusMessage>& lidars);
  tf2_msgs::TFMessage ConvertTF(const metamoto::messages::DataBusMessage& vehicleState);
  nav_msgs::Odometry ConvertOdometry(const metamoto::messages::DataBusMessage& vehicleState);
  nmea_msgs::Sentence ConvertGps(const metamoto::messages::DataBusMessage& gps);
  sensor_msgs::Imu ConvertImu(const metamoto::messages::DataBusMessage& imu);
  gps_msgs::gps GPSProcessed(const  metamoto::messages::DataBusMessage& gps);
  radar_msgs::RadarTrackArray ConvertRadar(const metamoto::messages::DataBusMessage& radar);
  radar_msgs::RadarProcessedArray ProcessedRadarData(const metamoto::messages::DataBusMessage& radar);
  static metamoto::messages::DataBusMessage ConvertControls(const ros_sut::ControlCommand& ctrlCmd);
  static metamoto::messages::DataBusMessage ConvertControls(const ros_sut::SixChannelControlCommand& ctrlCmd);
};
