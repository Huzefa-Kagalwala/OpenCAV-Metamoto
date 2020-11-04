#include <cmath>
#include <exception>
#include "reporting_client.h"

using namespace std;
using namespace metamoto::types;
using namespace metamoto::services;
using namespace metamoto::messages;

bool ReportingClient::PublishTimeSeries(const string& name, const string& units, 
                                        const string& description) {
  ReportingAddTimeSeriesValueRequest request;
  ReportingAddTimeSeriesValueReply reply; 
  
  grpc::ClientContext context;

  request.set_name(name);
  request.set_units(units);
  request.set_description(description);
  
  grpc::Status status;
  
  try {
    status = _stub->AddTimeSeriesValue(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return false;
  }
  
  if (status.ok()) {
    cout << "TimeSeries Publish." << endl;
    return true;
  } else {
    cout << "TimeSeries Publish failed: " << status.error_message() << endl;
    return false;
  }
}

bool ReportingClient::AddTimeSeriesValue(const string& name, double time, float value) {
  ReportingAddTimeSeriesValueRequest request;
  ReportingAddTimeSeriesValueReply reply; 

  grpc::ClientContext context; 

  request.set_name(name);
  request.set_time(time);
  request.set_value(value);

  grpc::Status status;

  try {
    status = _stub->AddTimeSeriesValue(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return false;
  }

  if (status.ok()) {
    cout << "TimeSeries Add." << endl;
    return true;
  } else {
    cout << "TimeSeries Add failed: " << status.error_message() << endl;
    return false; 
  }
}

bool ReportingClient::ReportVisualization(const Visualization& visual) {
  ReportingVisualizeRequest request;
  ReportingVisualizeReply reply; 

  grpc::ClientContext context;

  request.mutable_visualization()->CopyFrom(visual);
  grpc::Status status;

  try {
    status = _stub->Visualize(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return false; 
  }

  if (status.ok()) {
    cout << "Report Visualization." << endl;
    return true;
  } else {
    cout << "Report Visualization failed: " << status.error_message() << endl;
    return false;
  }
}

bool ReportingClient::ReportVehicleBounds(const GroundTruth& groundTruth, double time) {
  bool ret = true;
  for (auto& vehicle : groundTruth.vehicles()) {
    Visualization visual;
    BoundingBox* box = visual.mutable_box();
    box->mutable_center()->CopyFrom(vehicle.pose().position());
    box->mutable_orientation()->CopyFrom(vehicle.pose().orientation());
    box->mutable_extents()->set_x(vehicle.shape().dimensions(0));
    box->mutable_extents()->set_y(vehicle.shape().dimensions(1));
    box->mutable_extents()->set_z(vehicle.shape().dimensions(2));
    box->set_color("#1FC7E8FF");
    visual.set_frame(REFERENCE_FRAME_WORLD);
    visual.set_time(time);
    visual.set_duration(0.1);
    visual.set_description("bounding volume");
    visual.set_label("item #" + vehicle.id());
    ret = ReportVisualization(visual) && ret;
  }
  return ret;
}

bool ReportingClient::ReportPath(const VehicleState& vehicleState, double time) {
  // publish a growing path every second
  if (_nextDropTime == 0) {
    _pathVisual.set_frame(ReferenceFrame::REFERENCE_FRAME_WORLD);
    _pathVisual.set_description("the road less traveled");
    _pathVisual.set_label("PATH");
    _pathVisual.set_duration(1);
  }
  if (_nextDropTime > time) {
    return true;
  }

  _nextDropTime = time + 1.5;
  
  VisualPath* path = _pathVisual.mutable_path();
  VisualPathPoint* point = path->add_path_points();

  auto pose = vehicleState.pose();
  float length = pose.position().x() * pose.position().x() 
                 + pose.position().y() * pose.position().y() 
                 + pose.position().z() * pose.position().z();
  length = sqrt(length);
  string intensity = to_string((int)fmax(time * 10 + 10, 99));
  point->set_color("#" + intensity + "1033");
  point->set_transparency(0.5);
  point->mutable_position()->CopyFrom(pose.position());
  point->set_glue(true);
  point->set_smoothness(8);
  point->set_width(pose.position().x() / length * 1.5);
  point->mutable_normal()->set_y(1);

  _pathVisual.set_time(time);
  return ReportVisualization(_pathVisual);
}

bool ReportingClient::ReportEvent(const string& description, Action action, double time) {
  ReportingReportEventRequest request;
  ReportingReportEventReply reply; 

  grpc::ClientContext context; 

  request.set_time(time);
  request.set_action(action);
  request.set_description(description);
  grpc::Status status;

  try {
    status = _stub->ReportEvent(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return false;
  }

  if (status.ok()) {
    cout << "Report Event." << endl;
    return true;
  } else {
    cout << "Report Event failed: " << status.error_message() << endl;
    return false; 
  }
}

bool ReportingClient::ReportLog(LogMessage::Level level, const string& method, const string& message, double time) {
  ReportingLogRequest request;
  ReportingLogReply reply; 

  grpc::ClientContext context; 

  LogMessage* log = request.mutable_log_message();
  log->set_time(time);
  log->set_level(level);
  log->set_filename("controller_service.cc");
  log->set_class_name("ControllerService");
  log->set_method(method);
  log->set_message(message);

  grpc::Status status;

  try {
    status = _stub->Log(&context, request, &reply);
  } catch (exception& e) {
    cout << e.what() << endl;
    return false;
  }

  if (status.ok()) {
    cout << "Report Log." << endl;
    return true;
  } else {
    cout << "Report Log failed: " << status.error_message() << endl;
    return false; 
  }
}
