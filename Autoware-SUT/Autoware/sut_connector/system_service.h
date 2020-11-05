#pragma once

#include <string>
#include <thread>
#include "metamoto/services/system.grpc.pb.h"

class SUTConnectorClient;

class SystemService final : public metamoto::services::System::Service {
  public:
    SystemService(SUTConnectorClient *connector);

    ::grpc::Status GetResultsSize(::grpc::ServerContext* context, const ::metamoto::services::SystemGetResultsSizeRequest* request, ::metamoto::services::SystemGetResultsSizeReply* response);

  private:
    SUTConnectorClient *_connector;
};
