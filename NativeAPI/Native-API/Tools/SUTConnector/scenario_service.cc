#include "sut_connector_client.h"
#include "scenario_service.h"

#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace grpc;
using namespace std;

ScenarioService::ScenarioService(SUTConnectorClient *connector)
  : _connector(connector) {
}

Status ScenarioService::Setup(ServerContext* context, const ScenarioSetupRequest* request, ScenarioSetupReply* response) {
  _connector->Trace("Scenario::Setup");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_scenario_setup((ScenarioSetupRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_scenario_setup();

  if (lcReply.has_scenario_setup()) {
    response->CopyFrom(*lcReply.mutable_scenario_setup());
  }

  return status;
}

Status ScenarioService::Update(ServerContext* context, const ScenarioUpdateRequest* request, ScenarioUpdateReply* response) {
  _connector->Trace("Scenario::Update");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_scenario_update((ScenarioUpdateRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_scenario_update();

  if (lcReply.has_scenario_update()) {
    response->CopyFrom(*lcReply.mutable_scenario_update());
  }

  return status;
}

Status ScenarioService::GetVehicleWaypoints(ServerContext* context, const ScenarioGetVehicleWaypointsRequest* request, ScenarioGetVehicleWaypointsReply* response) {
  _connector->Trace("Scenario::GetVehicleWaypoints");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_scenario_get_vehicle_waypoints((ScenarioGetVehicleWaypointsRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_scenario_get_vehicle_waypoints();

  if (lcReply.has_scenario_get_vehicle_waypoints()) {
    response->CopyFrom(*lcReply.mutable_scenario_get_vehicle_waypoints());
  }

  return status;
}

Status ScenarioService::SetVehicleWaypoints(ServerContext* context, const ScenarioSetVehicleWaypointsRequest* request, ScenarioSetVehicleWaypointsReply* response) {
  _connector->Trace("Scenario::SetVehicleWaypoints");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_scenario_set_vehicle_waypoints((ScenarioSetVehicleWaypointsRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_scenario_set_vehicle_waypoints();

  if (lcReply.has_scenario_set_vehicle_waypoints()) {
    response->CopyFrom(*lcReply.mutable_scenario_set_vehicle_waypoints());
  }

  return status;
}

Status ScenarioService::SetDriverModel(ServerContext* context, const ScenarioSetDriverModelRequest* request, ScenarioSetDriverModelReply* response) {
  _connector->Trace("Scenario::SetDriverModel");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_scenario_set_driver_model((ScenarioSetDriverModelRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_scenario_set_driver_model();

  if (lcReply.has_scenario_set_driver_model()) {
    response->CopyFrom(*lcReply.mutable_scenario_set_driver_model());
  }

  return status;
}
