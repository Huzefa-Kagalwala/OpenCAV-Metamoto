#include "sut_connector_client.h"
#include "system_service.h"

#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace grpc;
using namespace std;

SystemService::SystemService(SUTConnectorClient *connector)
  : _connector(connector) {
}

Status SystemService::GetResultsSize(::grpc::ServerContext* context, const SystemGetResultsSizeRequest* request, SystemGetResultsSizeReply* response) {
  _connector->Trace("System::GetResultsSize");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_system_get_results_size((SystemGetResultsSizeRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_system_get_results_size();

  if (lcReply.has_system_get_results_size()) {
    response->CopyFrom(*lcReply.mutable_system_get_results_size());
  }

  return status;
}
