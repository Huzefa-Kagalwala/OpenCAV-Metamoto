#pragma once

#include <string>
#include <thread>
#include "metamoto/services/scenario_service.grpc.pb.h"

class SUTConnectorClient;

class ScenarioService final : public metamoto::services::Scenario::Service {
  public:
    ScenarioService(SUTConnectorClient *connector);

    ::grpc::Status Setup(::grpc::ServerContext* context, const ::metamoto::services::ScenarioSetupRequest* request, ::metamoto::services::ScenarioSetupReply* response);
    ::grpc::Status Update(::grpc::ServerContext* context, const ::metamoto::services::ScenarioUpdateRequest* request, ::metamoto::services::ScenarioUpdateReply* response);
    ::grpc::Status GetVehicleWaypoints(::grpc::ServerContext* context, const ::metamoto::services::ScenarioGetVehicleWaypointsRequest* request, ::metamoto::services::ScenarioGetVehicleWaypointsReply* response);
    ::grpc::Status SetVehicleWaypoints(::grpc::ServerContext* context, const ::metamoto::services::ScenarioSetVehicleWaypointsRequest* request, ::metamoto::services::ScenarioSetVehicleWaypointsReply* response);
    ::grpc::Status SetDriverModel(::grpc::ServerContext* context, const ::metamoto::services::ScenarioSetDriverModelRequest* request, ::metamoto::services::ScenarioSetDriverModelReply* response);

  private:
    SUTConnectorClient *_connector;
};
