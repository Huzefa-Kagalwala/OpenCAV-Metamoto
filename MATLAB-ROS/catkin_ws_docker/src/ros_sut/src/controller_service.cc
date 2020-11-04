#include <fstream>
#include <string>
#include <ctype.h>
#include <stdio.h>
#include "controller_service.h"

using namespace std;
using namespace metamoto::types;
using namespace metamoto::messages;
using namespace metamoto::services;


grpc::Status ControllerService::Initialize(grpc::ServerContext* context,
                                           const ControllerInitializeRequest* request,
                                           ControllerInitializeReply* reply) {
  cout << "Controller initialize called." << endl;

  reply->set_name(_name);
  reply->set_version("0.1");

  // This controller requests to be called at 10Hz. This should be the same as the Lidar revolution rate.
  reply->set_update_rate(10);

  if (request->publish_topics_size() > 0) {
    _writeTopic = request->publish_topics(0);
  }
  if (request->has_ego_vehicle_info()) {
    _dataConversions.egoVehicleInfo = request->ego_vehicle_info();
  }

  vector<Waypoint> path(request->ego_vehicle_path().begin(), request->ego_vehicle_path().end());
  _dataConversions.DoSomethingWithWaypoints(path);

  _dataConversions.WriteSensorCalibration(request->test_case(), "");

  // Get the URI of the 'databus' service.
  for (auto& service : request->services()) {
    if (service.name() == "dataBus") {
      cout << "DATABUS: " << service.uri() << endl;
      grpc::ChannelArguments chArgs;
      chArgs.SetMaxReceiveMessageSize(-1);  // Unlimited receive size (for large images).
      _dataBus = new DataBusClient(grpc::CreateCustomChannel(service.uri(), grpc::InsecureChannelCredentials(), chArgs));
    } else if (service.name() == "reporting") {
      _reporting = new ReportingClient(grpc::CreateChannel(service.uri(), grpc::InsecureChannelCredentials()));
    } else if (service.name() == "map") {
      _dataConversions.map = new MapClient(grpc::CreateChannel(service.uri(), grpc::InsecureChannelCredentials()));
    }
  }

  if (_dataBus == nullptr) {
    cout << "Initialize error." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'databus' service in request 'services'.");
  }

  if (!_dataBus->Publish(_writeTopic, _name) ||
      !_dataBus->Subscribe("VehicleState", _name) ||
      !_dataBus->Subscribe("Lidar", _name) ||
      !_dataBus->Subscribe("Camera", _name) ||
      !_dataBus->Subscribe("Radar", _name) ||
      !_dataBus->Subscribe("IMU", _name) ||
      !_dataBus->Subscribe("GPS", _name)) {
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not Publish or Subscribe from DataBus.");
  }

  if (_reporting == nullptr) {
    cout << "Reporting initialize error." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'reporting' service in request 'services'.");
  }

  if (_dataConversions.map == nullptr) {
    cout << "Map initialize error." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'map' service in request 'services'.");
  }

  // Example of passing a controller parameter to the SUT:
  auto someParam = request->parameters().fields().find("someParam");
  if (someParam == request->parameters().fields().end()) {
    // cout << "Missing 'someParam' parameter." << endl;
    // return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'someParam' parameter in controller.");
  }

  // Example of adding time series to the results:
  // _timeSeriesName1 = "ClientEvent1";
  // _timeSeriesUnits1 = "m/s";

  // _timeSeriesName2 = "ClientEvent2";
  // _timeSeriesUnits2 = "Hz";

  // _reporting->PublishTimeSeries(_timeSeriesName1, _timeSeriesUnits1, _description);
  // _reporting->PublishTimeSeries(_timeSeriesName2, _timeSeriesUnits2, _description);

  cout << "Controller initialization completed." << endl;
  return grpc::Status::OK;
}


grpc::Status ControllerService::Update(grpc::ServerContext* context, 
                                       const ControllerUpdateRequest* request,
                                       ControllerUpdateReply* reply) {
  cout << "Controller Update called, time: " << to_string(request->time()) << endl;

  unique_ptr<DataBusMessage> vehicleState = _dataBus->ReadLast("VehicleState", _name, request->time());
  if (vehicleState == nullptr) {
    cout << "Read VehicleState error." << endl;
    return grpc::Status(grpc::StatusCode::INTERNAL, "Could not read VehicleState topic.");
  }

  cout << "Received VehicleState, publishing /clock time: " << vehicleState->header().time() << endl;
  rosgraph_msgs::Clock clock;
  clock.clock.fromSec(vehicleState->header().time() + _dataConversions.startTimeS);
  (*_rosPublishers)["clock"].publish(clock);

  tf2_msgs::TFMessage tf = _dataConversions.ConvertTF(*vehicleState);
  cout << "Publishing TF message." << endl;
  (*_rosPublishers)["tf"].publish(tf);

  nav_msgs::Odometry odom = _dataConversions.ConvertOdometry(*vehicleState);
  cout << "Publishing Odometry message." << endl;
  (*_rosPublishers)["odometry"].publish(odom);

  unique_ptr<DataBusMessage> camera = _dataBus->ReadLast("Camera", _name, request->time());
  if (camera != nullptr) {
    cout << "Received Camera, width: " << camera->camera().image().width() << endl;
    _dataConversions.ConvertImage(*camera);
    cout << "Publishing Image message." << endl;
    (*_rosPublishers)["camera"].publish(_dataConversions.image);
  }

  unique_ptr<vector<DataBusMessage>> lidars = _dataBus->ReadAll("Lidar", _name, request->time());
  if (lidars != nullptr) {
    cout << "Received Lidar, time: " << (*lidars)[0].header().time() << endl;
    _dataConversions.ConvertLidar(*lidars);
    cout << "Publishing PointCloud2 message." << endl;
    (*_rosPublishers)["lidar"].publish(_dataConversions.pointCloud);
  }

  unique_ptr<DataBusMessage> gps = _dataBus->ReadLast("GPS", _name, request->time());
  if (gps != nullptr) {
    //cout << "Received GPS, longitude: " << gps->gps().coordinate().longitude() << endl;
    nmea_msgs::Sentence nmea = _dataConversions.ConvertGps(*gps);
    cout << "Publishing NMEA Sentence message: " << nmea.sentence << endl;
    (*_rosPublishers)["gps"].publish(nmea);
    gps_msgs::gps gps_processed = _dataConversions.GPSProcessed(*gps);
    cout << "Publishing Longitude: " << gps_processed.longitude << endl;
    cout << "Publishing Latitude: " << gps_processed.latitude << endl;
    (*_rosPublishers)["gpsprocessed"].publish(gps_processed);
  }

  unique_ptr<DataBusMessage> imu = _dataBus->ReadLast("IMU", _name, request->time());
  if (imu != nullptr) {
    cout << "Received IMU, time: " << imu->header().time() << endl;
    sensor_msgs::Imu imuMsg = _dataConversions.ConvertImu(*imu);
    cout << "Publishing IMU message." << endl;
    (*_rosPublishers)["imu"].publish(imuMsg);
  }

  unique_ptr<DataBusMessage> radar = _dataBus->ReadLast("Radar", _name, request->time());
  if (radar != nullptr) {
    cout << "Received RADAR, time: " << radar->header().time() << endl;
    radar_msgs::RadarTrackArray radarMsg = _dataConversions.ConvertRadar(*radar);
    cout << "Publishing RADAR message." << endl;
    (*_rosPublishers)["radar"].publish(radarMsg);
    radar_msgs::RadarProcessedArray radarProcessedMsg = _dataConversions.ProcessedRadarData(*radar);
    cout << "Publishing RADAR Processed message." << endl;
    (*_rosPublishers)["radarprocessed"].publish(radarProcessedMsg);

  }

/*
  unique_ptr<DataBusMessage> radar_processed = _dataBus->ReadLast("Radar", _name, request->time());
  if (radar_processed != nullptr) {
    cout << "Received RADAR processed data, time: " << radar_processed->header().time() << endl;
    radar_msgs::RadarProcessedArray radarProcessedMsg = _dataConversions.ProcessedRadarData(*radar_processed);
    cout << "Publishing RADAR Processed message." << endl;
    (*_rosPublishers)["radarprocessed"].publish(radarProcessedMsg);
  }
*/


  // Wait 10ms for any controls command.
  DataBusMessage ctrlMsg;
  this_thread::sleep_for(chrono::milliseconds(10));

  // Repeat sending all available controls.
  while (_controlMsgs->TryPop(ctrlMsg)) {
    if (!ctrlMsg.has_header()) {
      ctrlMsg.mutable_header()->set_time(vehicleState->header().time());
    }
    cout << "Received control command message. Publishing VehicleControls... "; 
    if (ctrlMsg.vehicle_controls().has_acceleration()) {
      cout << "accel: " << ctrlMsg.vehicle_controls().acceleration().value() 
           << ", steer: " << ctrlMsg.vehicle_controls().steer().value() << endl;
    } else if (ctrlMsg.vehicle_controls().wheel_controls_size() > 0) {
      cout << "wheel vel: " << ctrlMsg.vehicle_controls().wheel_controls(0).angular_velocity().value()
           << ", steer: " << ctrlMsg.vehicle_controls().wheel_controls(0).steer_angle().value() << endl;
    }

    _dataBus->Write(_writeTopic, _name, ctrlMsg);
  }


  // _reporting->AddTimeSeriesValue(_timeSeriesName1, request->time(), ++_frame);
  // _reporting->AddTimeSeriesValue(_timeSeriesName2, request->time(), _frame);
  // _reporting->ReportPath(vehicleState->vehicle_state(), request->time());
  // _reporting->ReportVehicleBounds(groundTruth->ground_truth(), request->time());

  cout << "Controller Update finished." << endl << endl;
  return grpc::Status::OK;
}


grpc::Status ControllerService::Close(grpc::ServerContext* context, 
                                      const ControllerCloseRequest* request,
                                      ControllerCloseReply* reply) {
  cout << "Controller Close called." << endl;

  delete _dataBus;
  delete _reporting;

  cout << "Controller Close finished." << endl;

  ros::shutdown();
  return grpc::Status::OK;
}

