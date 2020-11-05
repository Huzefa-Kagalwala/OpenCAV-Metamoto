#include <chrono>
#include <thread>
#include <sstream>

#include "queue.h"
#include "controller_service.h"

#include "ros/ros.h"

using namespace std;
using namespace metamoto::messages;


shared_ptr<Queue<autoware_msgs::ControlCommandStamped>> _controlMsgs(new Queue<autoware_msgs::ControlCommandStamped>());
shared_ptr<autoware_msgs::NDTStat> _ndtStat(new autoware_msgs::NDTStat());

void OnReceiveControlCmd(const autoware_msgs::ControlCommandStamped& controlCmd) {
  _controlMsgs->Push(controlCmd);
}

void OnReceiveNdtStat(const autoware_msgs::NDTStat& ndtStat) {
  *_ndtStat = ndtStat;
}


int main(int argc, char** argv) {
  ros::init(argc, argv, "metamoto_controller");
  ros::NodeHandle node;

  shared_ptr<map<string, ros::Publisher>> publishers = make_shared<map<string, ros::Publisher>>();

  (*publishers)["clock"] = node.advertise<rosgraph_msgs::Clock>("/clock", 1000);
  (*publishers)["twist"] = node.advertise<geometry_msgs::TwistStamped>("/vehicle/twist", 1000);
  (*publishers)["camera"] = node.advertise<sensor_msgs::Image>("/image_raw", 1000);
  (*publishers)["lidar"] = node.advertise<sensor_msgs::PointCloud2>("/points_raw", 1000);
  (*publishers)["gps"] = node.advertise<nmea_msgs::Sentence>("/nmea_sentence", 1000);

  ros::Subscriber commandSub = node.subscribe("/ctrl_cmd", 1000, OnReceiveControlCmd);
  ros::Subscriber ndtSub = node.subscribe("/ndt_stat", 1000, OnReceiveNdtStat);

  string port = "50001";
  string sceneDir = "/userfiles";
  string cwd = "/metamoto";

  ostringstream usage;
  usage << "usage: see start.sh" << endl;

  // Get commandline parameters.
  for (int i = 1; i < argc; ++i) {
    string arg(argv[i]);
    ++i;

    if (i >= argc) {
      cout << "Value missing for argument '" << arg << "'." << endl;
      cout << usage.str();
      return -1;
    }

    if (arg.compare("--port") == 0) {
      port = argv[i];
    }

    if (arg.compare("--scene-dir") == 0) {
      sceneDir = argv[i];
    }

    if (arg.compare("--cwd") == 0) {
      cwd = argv[i];
    }
  }

  string serverAddress("0.0.0.0:" + port);
  grpc::ServerBuilder builder;
  builder.AddListeningPort(serverAddress, grpc::InsecureServerCredentials());

  ControllerService service(publishers, _controlMsgs, _ndtStat, sceneDir, cwd);

  builder.RegisterService(&service);
  unique_ptr<grpc::Server> server(builder.BuildAndStart());

  cout << "Controller Server listening on " << serverAddress << endl;

  ros::Rate loopRate(100);
  while (ros::ok()) {
    ros::spinOnce();
    loopRate.sleep();
  }

  this_thread::sleep_for(chrono::seconds(1));
  return 0;
}
