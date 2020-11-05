#pragma once

#include <memory>
#include <string>
#include <grpc++/grpc++.h>
#include "metamoto/services/data_bus.grpc.pb.h"


class DataBusClient {
 private:
  std::unique_ptr<metamoto::services::DataBus::Stub> _stub;
  std::string _egoVehicleId;

 public:
  DataBusClient(std::shared_ptr<grpc::Channel> channel, const std::string& egoVehicleId) : 
    _stub(metamoto::services::DataBus::NewStub(channel)),
    _egoVehicleId(egoVehicleId) {}

  bool Publish(const std::string& topic, const std::string& writerName);
  bool Subscribe(const std::string& topic, const std::string& readerName);
  bool Write(const std::string& topic,
             const std::string& writerName, 
             const metamoto::messages::DataBusMessage& message);
  std::unique_ptr<metamoto::messages::DataBusMessage> Read(const std::string& topic, 
                                                           const std::string& readerName, 
                                                           double time);
  std::unique_ptr<std::vector<metamoto::messages::DataBusMessage>> ReadAll(const std::string& topic, 
                                                                           const std::string& readerName, 
                                                                           double time);
  std::unique_ptr<metamoto::messages::DataBusMessage> ReadLast(const std::string& topic, 
                                                               const std::string& readerName, 
                                                               double time);
};
