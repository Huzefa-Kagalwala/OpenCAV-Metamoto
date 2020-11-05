#pragma once

#include <fstream>

#include "metamoto/services/controller.grpc.pb.h"

#include "queue.h"
#include "data_bus_client.h"
#include "reporting_client.h"
#include "data_conversions.h"

#include "ros/ros.h"
#include "rosgraph_msgs/Clock.h"
#include "autoware_msgs/NDTStat.h"


class ControllerService final : public metamoto::services::Controller::Service {
 private:
  std::string _name = "Demo Controller";
  std::string _writeTopic;

  DataBusClient* _dataBus = nullptr;
  ReportingClient* _reporting = nullptr;

  std::shared_ptr<std::map<std::string, ros::Publisher>> _rosPublishers;
  std::shared_ptr<Queue<autoware_msgs::ControlCommandStamped>> _controlMsgs;
  std::shared_ptr<autoware_msgs::NDTStat> _ndtStat;
  int _lastNdtStatSeq = 0;

  DataConversions _dataConversions;
  bool _saveRosbag = false;

  std::string _sceneDir;
  std::string _cwd;

 public:
  ControllerService(std::shared_ptr<std::map<std::string, ros::Publisher>> publishers, 
                    std::shared_ptr<Queue<autoware_msgs::ControlCommandStamped>> controlMsgs,
                    std::shared_ptr<autoware_msgs::NDTStat> ndtStat,
                    std::string sceneDir, std::string cwd) 
    : _rosPublishers(publishers),
      _controlMsgs(controlMsgs),
      _ndtStat(ndtStat),
      _sceneDir(sceneDir),
      _cwd(cwd) {}

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
