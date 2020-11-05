#pragma once

#include <string>
#include <thread>
#include "metamoto/services/ray_tracer.grpc.pb.h"

class SUTConnectorClient;

class RayTracerService final : public metamoto::services::RayTracer::Service {
  public:
    RayTracerService(SUTConnectorClient *connector);
                 
    ::grpc::Status SetPatterns(::grpc::ServerContext* context, const ::metamoto::services::RayTracerSetPatternsRequest* request, ::metamoto::services::RayTracerSetPatternsReply* response);
    ::grpc::Status Trace(::grpc::ServerContext* context, const ::metamoto::services::RayTracerTraceRequest* request, ::metamoto::services::RayTracerTraceReply* response);

  private:
    SUTConnectorClient *_connector;
};
