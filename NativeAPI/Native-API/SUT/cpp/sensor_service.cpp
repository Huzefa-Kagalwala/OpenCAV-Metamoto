#include <fstream>
#include <string>
#include <cmath>
#include <ctype.h>
#include <stdio.h>
#include "sensor_service.h"

using namespace std;
using namespace metamoto::types;
using namespace metamoto::messages;
using namespace metamoto::services;

grpc::Status SensorService::Initialize(grpc::ServerContext* context,
                                       const SensorInitializeRequest* request,
                                       SensorInitializeReply* reply) {
  cout << "Initialize called." << endl;

  // Parse the sensor parameters
  grpc::Status setParamsStatus = _parameters.SetParameters(request);
  if (!setParamsStatus.ok()) {
    cout << setParamsStatus.error_message() << endl;
    return setParamsStatus;
  }

  cout << "The parsed sensor parameters are:" << endl;
  cout << "   Example Int Paramater: " << _parameters.Get().exampleIntParam << endl;
  cout << "   Example Float Paramater: " << _parameters.Get().exampleFloatParam << endl;
  cout << "   Example String Paramater: " << _parameters.Get().exampleStringParam << endl;
  cout << "   Example Bool Paramater: " << _parameters.Get().exampleBoolParam << endl;

  // Set the initialize reply
  reply->set_name("Demo Sensor");
  reply->set_version("0.1");
  reply->set_update_rate(10);  // This sensor requests to be called at 10Hz.
  reply->set_requires_ray_tracing(false);

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
    }
  }

  if (_dataBus == nullptr) {
    cout << "Initialize error." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'databus' service in request 'services'.");
  }

  if (!_dataBus->Publish(_writeTopic, _name) ||
      !_dataBus->Subscribe(_databusReadVS_topic, _name) ||
      !_dataBus->Subscribe(_databusReadGT_topic, _name)) {
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not Publish or Subscribe from DataBus.");
  }

  cout << "Initialization completed." << endl;
  return grpc::Status::OK;
}


grpc::Status SensorService::Update(grpc::ServerContext* context,
                                   const SensorUpdateRequest* request,
                                   SensorUpdateReply* reply) {
  unique_ptr<DataBusMessage> vehicleState = _dataBus->ReadLast(_databusReadVS_topic, _name, request->time());
  if (vehicleState == nullptr) {
    cout << "Read VehicleState error." << endl;
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not read VehicleState topic.");
  }

  unique_ptr<DataBusMessage> groundTruth = _dataBus->ReadLast(_databusReadGT_topic, _name, request->time());
  if (groundTruth == nullptr) {
    cout << "Read GroundTruth error." << endl;
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not read GroundTruth topic.");
  }

  DataBusMessage message;

  message.mutable_header()->set_time(request->time());
  _dataBus->Write(_writeTopic, _name, message);

  cout << "Sensor Update Done. Time: " << request->time() << " sec." << endl;
  return grpc::Status::OK;
}

grpc::Status SensorService::Close(grpc::ServerContext* context,
                                  const SensorCloseRequest* request,
                                  SensorCloseReply* reply) {
  cout << "Sensor Close called." << endl;

  delete _dataBus;

  cout << "Sensor Close finished." << endl;

  *_shutDownFlag = true;
  return grpc::Status::OK;
}
