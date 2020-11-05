#pragma once

#include <string>
#include <thread>
#include "metamoto/services/data_bus.grpc.pb.h"

class SUTConnectorClient;

class DataBusService final : public metamoto::services::DataBus::Service {
  public:
    DataBusService(SUTConnectorClient *connector);
                 
    ::grpc::Status Publish(::grpc::ServerContext* context, const ::metamoto::services::DataBusPublishRequest* request, ::metamoto::services::DataBusPublishReply* response);
    ::grpc::Status Subscribe(::grpc::ServerContext* context, const ::metamoto::services::DataBusSubscribeRequest* request, ::metamoto::services::DataBusSubscribeReply* response);
    ::grpc::Status Write(::grpc::ServerContext* context, const ::metamoto::services::DataBusWriteRequest* request, ::metamoto::services::DataBusWriteReply* response);
    ::grpc::Status Read(::grpc::ServerContext* context, const ::metamoto::services::DataBusReadRequest* request, ::metamoto::services::DataBusReadReply* response);
    ::grpc::Status ReadAll(::grpc::ServerContext* context, const ::metamoto::services::DataBusReadAllRequest* request, ::metamoto::services::DataBusReadAllReply* response);
    ::grpc::Status ReadLast(::grpc::ServerContext* context, const ::metamoto::services::DataBusReadLastRequest* request, ::metamoto::services::DataBusReadLastReply* response);

  private:
    SUTConnectorClient *_connector;
};
