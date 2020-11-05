#include "sut_connector_client.h"
#include "ray_tracer_service.h"

#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace grpc;
using namespace std;

RayTracerService::RayTracerService(SUTConnectorClient *connector)
  : _connector(connector)
{
}

Status RayTracerService::SetPatterns(ServerContext* context, const RayTracerSetPatternsRequest* request, RayTracerSetPatternsReply* response) {
  _connector->Trace("RayTracer::SetPatterns");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_ray_tracer_set_patterns((RayTracerSetPatternsRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_ray_tracer_set_patterns();

  if (lcReply.has_ray_tracer_set_patterns()) {
    response->CopyFrom(*lcReply.mutable_ray_tracer_set_patterns());
  }

  return status;
}

Status RayTracerService::Trace(ServerContext* context, const RayTracerTraceRequest* request, RayTracerTraceReply* response) {
  _connector->Trace("RayTracer::Trace");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_ray_tracer_trace((RayTracerTraceRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_ray_tracer_trace();

  if (lcReply.has_ray_tracer_trace()) {
    response->CopyFrom(*lcReply.mutable_ray_tracer_trace());
  }

  return status;
}



