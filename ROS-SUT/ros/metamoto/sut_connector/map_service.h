#pragma once

#include <string>
#include <thread>
#include "metamoto/services/map.grpc.pb.h"

class SUTConnectorClient;

class MapService final : public metamoto::services::Map::Service {
  public:
    MapService(SUTConnectorClient *connector);
                 
    ::grpc::Status GetRoadNetwork(::grpc::ServerContext* context, const ::metamoto::services::MapGetRoadNetworkRequest* request, ::metamoto::services::MapGetRoadNetworkReply* response);
    ::grpc::Status ToRoadPoint(::grpc::ServerContext* context, const ::metamoto::services::MapToRoadPointRequest* request, ::metamoto::services::MapToRoadPointReply* response);
    ::grpc::Status ToWorldPoint(::grpc::ServerContext* context, const ::metamoto::services::MapToWorldPointRequest* request, ::metamoto::services::MapToWorldPointReply* response);
    ::grpc::Status GetPath(::grpc::ServerContext* context, const ::metamoto::services::MapGetPathRequest* request, ::metamoto::services::MapGetPathReply* response);
    ::grpc::Status GetHeading(::grpc::ServerContext* context, const ::metamoto::services::MapGetHeadingRequest* request, ::metamoto::services::MapGetHeadingReply* response);

  private:
    SUTConnectorClient *_connector;
};
