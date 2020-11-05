#pragma once

#include <string>
#include <thread>
#include "metamoto/services/reporting.grpc.pb.h"

class SUTConnectorClient;

class ReportingService final : public metamoto::services::Reporting::Service {
  public:
    ReportingService(SUTConnectorClient *connector);
                 
    ::grpc::Status AddTimeSeriesValue(::grpc::ServerContext* context, const ::metamoto::services::ReportingAddTimeSeriesValueRequest* request, ::metamoto::services::ReportingAddTimeSeriesValueReply* response);
    ::grpc::Status Log(::grpc::ServerContext* context, const ::metamoto::services::ReportingLogRequest* request, ::metamoto::services::ReportingLogReply* response);
    ::grpc::Status ReportEvent(::grpc::ServerContext* context, const ::metamoto::services::ReportingReportEventRequest* request, ::metamoto::services::ReportingReportEventReply* response);
    ::grpc::Status Visualize(::grpc::ServerContext* context, const ::metamoto::services::ReportingVisualizeRequest* request, ::metamoto::services::ReportingVisualizeReply* response);

  private:
    SUTConnectorClient *_connector;
};
