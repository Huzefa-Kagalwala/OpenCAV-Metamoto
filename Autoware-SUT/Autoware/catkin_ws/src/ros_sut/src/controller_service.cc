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
      !_dataBus->Subscribe("Camera", _name) ||
      //!_dataBus->Subscribe("Radar", _name) ||
      !_dataBus->Subscribe("Lidar", _name) ||
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

  string resultsDir = request->results_directory();
  if (_sceneDir.find("/userfiles") != 0) {
    // Being run locally - use local results directory.
    resultsDir = _cwd + "/results";
  }

  cout << "Current working directory: " << _cwd << endl;
  cout << "Results directory: " << resultsDir << endl;

  vector<Waypoint> path(request->ego_vehicle_path().begin(), request->ego_vehicle_path().end());
  if (!_dataConversions.WriteWaypoints(path, resultsDir + "/path.csv")) {
    return grpc::Status(grpc::StatusCode::INTERNAL, "GetPath failed, try different path.");
  }

  _dataConversions.WriteSensorCalibration(request->test_case(), resultsDir + "/camera_calibration.yml");

  // Start the roslaunch scripts for Autoware.
  // First read the 'scene' parameter to know which pointcloud to load.
  auto scene = request->parameters().fields().find("scene");
  if (scene == request->parameters().fields().end()) {
    cout << "Missing 'scene' parameter." << endl;
    return grpc::Status(grpc::StatusCode::INVALID_ARGUMENT, "Missing 'scene' parameter in controller.");
  }

  string scenePath = _sceneDir + "/" + scene->second.string_value();
  setenv("SCENE", scenePath.c_str(), 1);
  setenv("RESULTS", resultsDir.c_str(), 1);
  setenv("ROS_LOG_DIR", resultsDir.c_str(), 1);

  ifstream pcd(scenePath + ".pcd");
  if (pcd.good()) {
    cout << "Scene pointcloud found: " << scenePath << ".pcd" << endl;
  } else {
    cout << "Scene pointcloud not found: " << scenePath + ".pcd" << endl;
    return grpc::Status(grpc::StatusCode::NOT_FOUND, "Scene pointcloud not found: " + scenePath + ".pcd");
  }

  // Read 'rosbagSave' parameter to know whether to save rosbag file.
  auto saveRosbag = request->parameters().fields().find("rosbagSave");
  if (saveRosbag == request->parameters().fields().end()) {
    cout << "Missing 'rosbagSave' parameter. Rosbag will not be recorded." << endl;
  } else {
    //start recording rosbag if option "rosbag_save" is set to true
    _saveRosbag = saveRosbag->second.bool_value();
    if (_saveRosbag) {
      cout << "'rosbagSave' parameter is set to true. Start recording rosbag..." << endl;
      string launchCmd = "roslaunch " + _cwd + "/launch/rosbag_record.launch &";
      system(launchCmd.c_str());
    } else {
      cout << "'rosbagSave' parameter is set to false. Rosbag will not be recorded." << endl;
    }
  }

  string launchCmd = "roslaunch " + _cwd + "/launch/startup.launch &";
  system(launchCmd.c_str());

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

  geometry_msgs::TwistStamped twist = _dataConversions.ConvertState(*vehicleState);
  //cout << "Publishing Twist message." << endl;
  (*_rosPublishers)["twist"].publish(twist);

  unique_ptr<DataBusMessage> camera = _dataBus->ReadLast("Camera", _name, request->time());
  if (camera != nullptr) {
    cout << "Received Camera, width: " << camera->camera().image().width() << endl;
    _dataConversions.ConvertImage(*camera);
    //cout << "Publishing Image message." << endl;
    (*_rosPublishers)["camera"].publish(_dataConversions.image);
  }

  unique_ptr<vector<DataBusMessage>> lidars = _dataBus->ReadAll("Lidar", _name, request->time());
  if (lidars != nullptr) {
    cout << "Received Lidar, time: " << (*lidars)[0].header().time() << endl;
    _dataConversions.ConvertLidar(*lidars);
    //cout << "Publishing PointCloud2 message." << endl;
    (*_rosPublishers)["lidar"].publish(_dataConversions.pointCloud);
  }

  unique_ptr<DataBusMessage> gps = _dataBus->ReadLast("GPS", _name, request->time());
  if (gps != nullptr) {
    cout << "Received GPS, longitude: " << gps->gps().coordinate().longitude() << endl;
    nmea_msgs::Sentence nmea = _dataConversions.ConvertGps(*gps);
    //cout << "Publishing NMEA Sentence message: " << nmea.sentence <<  endl;
    (*_rosPublishers)["gps"].publish(nmea);

    nmea = _dataConversions.ConvertOrientation(*vehicleState);
    //cout << "Publishing NMEA Sentence message: " << nmea.sentence <<  endl;
    (*_rosPublishers)["gps"].publish(nmea);
  }

  // Wait up to 500ms for NDT (localization) to occur.
  int maxWait = 500;
  int wait = 0;
  do {
    if (_ndtStat->header.seq > _lastNdtStatSeq) {
      cout << "NDT SCORE: " << _ndtStat->score << endl;
      _lastNdtStatSeq = _ndtStat->header.seq;
      break;
    }
    wait += 10;
    this_thread::sleep_for(chrono::milliseconds(10));
  } while (wait < maxWait);

  if (wait >= maxWait) {
    cout << "NDT not converged (waited " << maxWait << "ms)." << endl;
  }

  // Wait 10ms for any controls command.
  autoware_msgs::ControlCommandStamped ctrlCmd;
  this_thread::sleep_for(chrono::milliseconds(10));

  // Repeat sending all available controls.
  while (_controlMsgs->TryPop(ctrlCmd)) {
    auto controls = _dataConversions.ConvertControls(ctrlCmd);
    cout << "Received control command message. Publishing VehicleControls, accel: "
         << controls.vehicle_controls().acceleration().value()
         << ", steer: " << controls.vehicle_controls().steer().value()
         << endl;

    _dataBus->Write(_writeTopic, _name, controls);
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

  system("rosnode kill -a");
  // kill the trafficlight_recognizer because it doesn't die.
  system("kill -9 `ps aux | grep trafficlight_recognizer | awk '{ print $2 }' | head -n 1`");

  cout << "Controller Close finished." << endl;

  ros::shutdown();
  return grpc::Status::OK;
}
