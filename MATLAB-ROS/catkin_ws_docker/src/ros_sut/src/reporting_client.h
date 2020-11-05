#pragma once

#include <memory>
#include <string>
#include <grpc++/grpc++.h>
#include "metamoto/services/reporting.grpc.pb.h"
#include "metamoto/messages/data_bus_message.pb.h"

class ReportingClient {
 private:
  std::unique_ptr<metamoto::services::Reporting::Stub> _stub;
  float _nextDropTime = 0;
  metamoto::messages::Visualization _pathVisual;

  bool ReportVisualization(const metamoto::messages::Visualization& visual);

 public:
  ReportingClient(std::shared_ptr<grpc::Channel> channel) : 
    _stub(metamoto::services::Reporting::NewStub(channel)) {}

  bool PublishTimeSeries(const std::string& name, const std::string& units, const std::string& description);
  bool AddTimeSeriesValue(const std::string& name, double time, float value);
  bool ReportVehicleBounds(const metamoto::messages::GroundTruth& groundTruth, double time);
  bool ReportPath(const metamoto::messages::VehicleState& vehicleState, double time);
  bool ReportEvent(const std::string& description, metamoto::types::Action action, double time);
  bool ReportLog(metamoto::messages::LogMessage::Level level, 
                 const std::string& method, 
                 const std::string& message, 
                 double time);
};
