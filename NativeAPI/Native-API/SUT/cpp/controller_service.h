#pragma once

#include <fstream>
#include "metamoto/services/controller.grpc.pb.h"
#include "data_bus_client.h"
#include "reporting_client.h"


class ControllerService final : public metamoto::services::Controller::Service {
 private:
  int _frame;
  std::string _name = "Demo Controller";
  std::string _writeTopic;
  std::string _timeSeriesName1;
  std::string _timeSeriesUnits1;
  std::string _timeSeriesName2;
  std::string _timeSeriesUnits2;
  std::string _description;
  metamoto::types::VehicleInfo _egoVehicleInfo;
  DataBusClient* _dataBus = nullptr;
  ReportingClient* _reporting = nullptr;
  bool* _shutDownFlag;

 public:
  ControllerService(bool* shutDownFlag) : _shutDownFlag(shutDownFlag) {}

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
