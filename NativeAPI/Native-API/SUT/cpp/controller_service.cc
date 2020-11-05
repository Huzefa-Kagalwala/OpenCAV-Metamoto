#include <fstream>
#include <string>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include "controller_service.h"

using namespace std;
using namespace metamoto::types;
using namespace metamoto::messages;
using namespace metamoto::services;

grpc::Status ControllerService::Initialize(grpc::ServerContext* context,
                                           const ControllerInitializeRequest* request,
                                           ControllerInitializeReply* reply) {
  cout << "Controller initialize called." << endl;

  reply->set_name("Demo Controller");
  reply->set_version("0.1");
  reply->set_update_rate(10);  // This controller requests to be called at 10Hz.

  if (request->publish_topics_size() > 0) {
    _writeTopic = request->publish_topics(0);
  }
  if (request->has_ego_vehicle_info()) {
    _egoVehicleInfo = request->ego_vehicle_info();  
  }

  // Get the URI of the 'databus' service.
  for (auto& service : request->services()) {
    if (service.name() == "dataBus") {
      _dataBus = new DataBusClient(grpc::CreateChannel(service.uri(), grpc::InsecureChannelCredentials()),
                                   request->ego_vehicle_id());
    } else if (service.name() == "reporting") {
      _reporting = new ReportingClient(grpc::CreateChannel(service.uri(), grpc::InsecureChannelCredentials()),
                                       request->ego_vehicle_id());
    }
  }

  if (_dataBus == nullptr) {
    cout << "Initialize error." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'databus' service in request 'services'.");
  }

  if (!_dataBus->Publish(_writeTopic, _name) ||
      !_dataBus->Subscribe("VehicleState", _name) ||
      !_dataBus->Subscribe("GroundTruth", _name)) {
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not Publish or Subscribe from DataBus.");
  }

  if (_reporting == nullptr) {
    cout << "Reporting initialize error." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'reporting' service in request 'services'.");
  }
  
  _frame = 0; 
  _description = "sample time series event.";

  _timeSeriesName1 = "ClientEvent1";
  _timeSeriesUnits1 = "m/s";

  _timeSeriesName2 = "ClientEvent2";
  _timeSeriesUnits2 = "Hz";

  _reporting->PublishTimeSeries(_timeSeriesName1, _timeSeriesUnits1, _description);
  _reporting->PublishTimeSeries(_timeSeriesName2, _timeSeriesUnits2, _description);

  cout << "Controller initialization completed." << endl;
  return grpc::Status::OK;
}


grpc::Status ControllerService::Update(grpc::ServerContext* context, 
                                       const ControllerUpdateRequest* request,
                                       ControllerUpdateReply* reply) {
  cout << "Controller Update called, time: " << to_string(request->time()) << endl;

  unique_ptr<DataBusMessage> vehicleState = _dataBus->ReadLast("VehicleState", _name, request->time());
  if (vehicleState == nullptr) {
    cout << "Read VehicleState error." << endl;
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not read VehicleState topic.");
  }

  unique_ptr<DataBusMessage> groundTruth = _dataBus->ReadLast("GroundTruth", _name, request->time());
  if (groundTruth == nullptr) {
    cout << "Read GroundTruth error." << endl;
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not read GroundTruth topic.");
  }

  DataBusMessage message;
  VehicleControls vehicleControls;

  
  // Set controls here.
  vehicleControls.mutable_brake()->set_value(0);
  vehicleControls.set_turn_signal(Vehicle::HAZARD);
  if (request->time() < 10) {
    _reporting->ReportLog(LogMessage::LEVEL_INFO, "Update", "Accelerating.", request->time());
    vehicleControls.mutable_throttle()->set_value(0.8f);
  } else if (request->time() > 10 && request->time() < 11) {
    _reporting->ReportLog(LogMessage::LEVEL_WARNING, "Update", "Braking hard.", request->time());
    vehicleControls.mutable_brake()->set_value(1.0);
    vehicleControls.mutable_throttle()->set_value(0.0);
    vehicleControls.mutable_steer()->set_value(0.5);
    // report events for a short period of time 
    _reporting->ReportEvent("Ego vehicle at max deceleration!", ACTION_FAIL, request->time());
  } else if (request->time() > 11 && request->time() < 12.5) {
    _reporting->ReportLog(LogMessage::LEVEL_INFO, "Update", "Accelerating and steering.", request->time());
    vehicleControls.mutable_throttle()->set_value(0.6f);
    vehicleControls.mutable_steer()->set_value(-0.5);
  } else {
    _reporting->ReportLog(LogMessage::LEVEL_INFO, "Update", "Coasting.", request->time());
    vehicleControls.mutable_throttle()->set_value(0);
  }

  message.mutable_header()->set_time(request->time());
  message.mutable_vehicle_controls()->CopyFrom(vehicleControls);
  _dataBus->Write(_writeTopic, _name, message);

  _reporting->AddTimeSeriesValue(_timeSeriesName1, request->time(), ++_frame);
  _reporting->AddTimeSeriesValue(_timeSeriesName2, request->time(), _frame);
  _reporting->ReportPath(vehicleState->vehicle_state(), request->time());
  _reporting->ReportVehicleBounds(groundTruth->ground_truth(), request->time());

  cout << "Controller Update finished." << endl;
  return grpc::Status::OK;
}

grpc::Status ControllerService::Close(grpc::ServerContext* context, 
                                      const ControllerCloseRequest* request,
                                      ControllerCloseReply* reply) {
  cout << "Controller Close called." << endl;

  delete _dataBus;
  delete _reporting;

  cout << "Controller Close finished." << endl;

  *_shutDownFlag = true;
  return grpc::Status::OK;
}
