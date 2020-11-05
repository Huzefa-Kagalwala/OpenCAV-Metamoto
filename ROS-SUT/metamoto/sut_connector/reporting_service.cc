#include "sut_connector_client.h"
#include "reporting_service.h"

#include <iostream>
#include <sstream>

using namespace metamoto::services;
using namespace grpc;
using namespace std;

ReportingService::ReportingService(SUTConnectorClient *connector)
  : _connector(connector)
{
}

Status ReportingService::AddTimeSeriesValue(ServerContext* context, const ReportingAddTimeSeriesValueRequest* request, ReportingAddTimeSeriesValueReply* response) {
  _connector->Trace("Reporting::AddTimeSeriesValue");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_reporting_add_time_series_value((ReportingAddTimeSeriesValueRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_reporting_add_time_series_value();

  if (lcReply.has_reporting_add_time_series_value()) {
    response->CopyFrom(*lcReply.mutable_reporting_add_time_series_value());
  }

  return status;
}

Status ReportingService::Log(ServerContext* context, const ReportingLogRequest* request, ReportingLogReply* response) {
  _connector->Trace("Reporting::Log");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_reporting_log((ReportingLogRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_reporting_log();

  if (lcReply.has_reporting_log()) {
    response->CopyFrom(*lcReply.mutable_reporting_log());
  }

  return status;
}

Status ReportingService::ReportEvent(ServerContext* context, const ReportingReportEventRequest* request, ReportingReportEventReply* response) {
  _connector->Trace("Reporting::ReportEvent");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_reporting_report_event((ReportingReportEventRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_reporting_report_event();

  if (lcReply.has_reporting_report_event()) {
    response->CopyFrom(*lcReply.mutable_reporting_report_event());
  }

  return status;
}

Status ReportingService::Visualize(ServerContext* context, const ReportingVisualizeRequest* request, ReportingVisualizeReply* response) {
  _connector->Trace("Reporting::Visualize");

  SUTConnectorRequest lcRequest;
  SUTConnectorReply lcReply;

  lcRequest.set_allocated_reporting_visualize((ReportingVisualizeRequest*)request);
  Status status = _connector->Request(lcRequest, lcReply);
  lcRequest.release_reporting_visualize();

  if (lcReply.has_reporting_visualize()) {
    response->CopyFrom(*lcReply.mutable_reporting_visualize());
  }

  return status;
}





