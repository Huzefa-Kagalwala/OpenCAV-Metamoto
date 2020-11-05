#include <iostream>
#include "data_bus_service.h"

using namespace std;
using namespace metamoto::messages;
using namespace metamoto::services;
using namespace metamoto::types;

unique_ptr<DataBusMessage> DataBusService::GenerateVehicleStateMessage() {
  using metamoto::messages::VehicleState;
  using metamoto::types::Vehicle_LightState;
  using metamoto::types::Vehicle_SignalLightState;

  unique_ptr<DataBusMessage> message(new DataBusMessage());
  VehicleState* vehicleState = message->mutable_vehicle_state();

  Pose* pose = vehicleState->mutable_pose();
  pose->mutable_position()->set_x(11.11f);
  pose->mutable_position()->set_y(22.22f);
  pose->mutable_position()->set_z(33.33f);

  vehicleState->set_brake(0.123f);
  vehicleState->set_head_lights(Vehicle::OFF);
  vehicleState->set_rpm(1234);
  vehicleState->set_speed(12.3f);
  vehicleState->set_throttle(0.23f);
  vehicleState->set_steer_angle(.0123f);
  vehicleState->set_turn_signal(Vehicle::HAZARD);

  return message;
}

grpc::Status DataBusService::Publish(grpc::ServerContext* context, 
                                     const DataBusPublishRequest* request, 
                                     DataBusPublishReply* response) {
  cout << "Data Bus: Publish" << endl
       << "  Topic: " << request->topic() << endl
       << "  Writer: " << request->writer_name() << endl
       << "  Latency: " << request->latency().DebugString() << endl;

  return grpc::Status();
}

grpc::Status DataBusService::Subscribe(grpc::ServerContext* context, 
                                       const DataBusSubscribeRequest* request, 
                                       DataBusSubscribeReply* response) {
  cout << "Data Bus: Subscribe" << endl
       << "  Topic: " << request->topic() << endl
       << "  Reader: " << request->reader_name() << endl
       << "  Latency: " << request->latency().DebugString() << endl;

  return grpc::Status();
}

grpc::Status DataBusService::Write(grpc::ServerContext* context, 
                                   const DataBusWriteRequest* request, 
                                   DataBusWriteReply* response) {
  cout << "Data Bus: Write" << endl
       << "  Topic: " << request->topic() << endl
       << "  Writer: " << request->writer_name() << endl
       << "  Message: " << endl
       << "----------" << endl
       << request->message().vehicle_controls().DebugString() << endl
       << "----------" << endl;

  return grpc::Status();
}

grpc::Status DataBusService::Read(grpc::ServerContext* context, 
                                  const DataBusReadRequest* request, 
                                  DataBusReadReply* response) {
  auto stateMessage = GenerateVehicleStateMessage();
  stateMessage->mutable_header()->set_time(request->time());
  response->mutable_message()->CopyFrom(*stateMessage);

  cout << "Data Bus: Read" << endl
       << "  Topic: " << request->topic() << endl
       << "  Reader: " << request->reader_name() << endl
       << "  Message: " << endl
       << "----------" << endl
       << stateMessage->DebugString() << endl
       << "----------" << endl;

  return grpc::Status();
}

grpc::Status DataBusService::ReadAll(grpc::ServerContext* context, 
                                     const DataBusReadAllRequest* request, 
                                     DataBusReadAllReply* response) {
  auto stateMessage = GenerateVehicleStateMessage();
  stateMessage->mutable_header()->set_time(request->time());
  response->mutable_messages()->Add()->CopyFrom(*stateMessage);

  cout << "Data Bus: ReadAll" << endl
       << "  Topic: " << request->topic() << endl
       << "  Reader: " << request->reader_name() << endl
       << "  Message: " << endl
       << "----------" << endl
       << stateMessage->DebugString() << endl
       << "----------" << endl;

  return grpc::Status();
}

grpc::Status DataBusService::ReadLast(grpc::ServerContext* context, 
                                      const DataBusReadLastRequest* request, 
                                      DataBusReadLastReply* response) {
  auto stateMessage = GenerateVehicleStateMessage();
  stateMessage->mutable_header()->set_time(request->time());
  response->mutable_message()->CopyFrom(*stateMessage);

  cout << "Data Bus: ReadLast" << endl
       << "  Topic: " << request->topic() << endl
       << "  Reader: " << request->reader_name() << endl
       << "  Message: " << endl
       << "----------" << endl
       << stateMessage->DebugString() << endl
       << "----------" << endl;

  return grpc::Status();
}

