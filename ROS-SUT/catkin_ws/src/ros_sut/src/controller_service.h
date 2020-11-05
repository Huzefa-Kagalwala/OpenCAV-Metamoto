#pragma once

#include <fstream>

#include "metamoto/services/controller.grpc.pb.h"

#include "queue.h"
#include "data_bus_client.h"
#include "reporting_client.h"
#include "data_conversions.h"

#include "ros/ros.h"
#include "rosgraph_msgs/Clock.h"


#include "radar_msgs/RadarTrackArray.h"
#include "radar_msgs/RadarTrack.h"
#include "geometry_msgs/Point32.h"
#include "radar_msgs/RadarProcessed.h"
#include "radar_msgs/RadarProcessedArray.h"


class ControllerService final : public metamoto::services::Controller::Service {
 private:
  std::string _name = "Demo Controller";
  std::string _writeTopic;

  DataBusClient* _dataBus = nullptr;
  ReportingClient* _reporting = nullptr;

  std::shared_ptr<std::map<std::string, ros::Publisher>> _rosPublishers;
  std::shared_ptr<Queue<metamoto::messages::DataBusMessage>> _controlMsgs;

  DataConversions _dataConversions;

 public:
  ControllerService(std::shared_ptr<std::map<std::string, ros::Publisher>> publishers, 
                    std::shared_ptr<Queue<metamoto::messages::DataBusMessage>> controlMsgs) 
    : _rosPublishers(publishers),
      _controlMsgs(controlMsgs) {}

  grpc::Status Initialize(grpc::ServerContext* context,
                          const metamoto::services::ControllerInitializeRequest* request,
                          metamoto::services::ControllerInitializeReply* reply);

  grpc::Status Update(grpc::ServerContext* context,
                      const metamoto::services::ControllerUpdateRequest* request,
                      metamoto::services::ControllerUpdateReply* reply);

  grpc::Status Close(grpc::ServerContext* context,
                    const metamoto::services::ControllerCloseRequest* request,
                    metamoto::services::ControllerCloseReply* reply);
};
