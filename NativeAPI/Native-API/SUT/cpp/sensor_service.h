#pragma once

#include <fstream>
#include "data_bus_client.h"
#include "sensor_parameters.h"

class SensorService final : public metamoto::services::Sensor::Service {
private:
  std::string _name = "Demo Sensor";
  std::string _writeTopic;
  metamoto::types::VehicleInfo _egoVehicleInfo;
  DataBusClient* _dataBus = nullptr;
  bool* _shutDownFlag;
  SensorParameters _parameters;

  std::string _databusReadVS_topic = "VehicleState";
  std::string _databusReadGT_topic = "GroundTruth";

public:
  SensorService(bool* shutDownFlag) : _shutDownFlag(shutDownFlag) {}

  grpc::Status Initialize(grpc::ServerContext* context,
                          const metamoto::services::SensorInitializeRequest* request,
                          metamoto::services::SensorInitializeReply* reply);

  grpc::Status Update(grpc::ServerContext* context,
                      const metamoto::services::SensorUpdateRequest* request,
                      metamoto::services::SensorUpdateReply* reply);

  grpc::Status Close(grpc::ServerContext* context,
                     const metamoto::services::SensorCloseRequest* request,
                     metamoto::services::SensorCloseReply* reply);
};
