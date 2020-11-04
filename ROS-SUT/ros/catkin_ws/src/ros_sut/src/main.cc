#include <chrono>
#include <thread>
#include <sstream>

#include "queue.h"
#include "controller_service.h"
#include "ros_sut/ControlCommand.h"
#include "ros_sut/SixChannelControlCommand.h"

#include "ros/ros.h"

using namespace std;
using namespace metamoto::messages;


shared_ptr<Queue<DataBusMessage>> _controlMsgs(new Queue<DataBusMessage>());


template<typename T>
void OnReceiveControlCmd(const T& controlCmd) {
  _controlMsgs->Push(DataConversions::ConvertControls(controlCmd));
}


int main(int argc, char** argv) {
  ros::init(argc, argv, "metamoto_controller");
  ros::NodeHandle node;

  shared_ptr<map<string, ros::Publisher>> publishers = make_shared<map<string, ros::Publisher>>();

  (*publishers)["clock"] = node.advertise<rosgraph_msgs::Clock>("/clock", 1000);
  (*publishers)["tf"] = node.advertise<tf2_msgs::TFMessage>("/tf", 1000);
  (*publishers)["odometry"] = node.advertise<nav_msgs::Odometry>("/odom", 1000);
  (*publishers)["camera"] = node.advertise<sensor_msgs::Image>("/image", 1000);
  (*publishers)["lidar"] = node.advertise<sensor_msgs::PointCloud2>("/pointcloud", 1000);
  (*publishers)["gps"] = node.advertise<nmea_msgs::Sentence>("/nmea_sentence", 1000);
  (*publishers)["imu"] = node.advertise<sensor_msgs::Imu>("/imu", 1000);
  (*publishers)["radar"] = node.advertise<radar_msgs::RadarTrackArray>("/radar_track_array", 1000);
  (*publishers)["radarprocessed"] = node.advertise<radar_msgs::RadarProcessedArray>("/radar_processed_array", 1000);


  
  ros::Subscriber subscriber = node.subscribe("/control_cmd", 1000, OnReceiveControlCmd<ros_sut::ControlCommand>);
  ros::Subscriber subscriberSixChannel = node.subscribe("/6_ch_control_cmd", 1000, OnReceiveControlCmd<ros_sut::SixChannelControlCommand>);

  string port = "50001";

  ostringstream usage;
  usage
    << "usage:" << endl
    << "$ source catkin_ws/devel/setup.bash" << endl
    << "$ roscore &" << endl
    << "$ rosrun ros_sut metamoto_controller [OPTIONS]" << endl
    << "  --port <sut-port> (default: 50001)" << endl;
  
  // Get commandline parameters.
  for (int i = 1; i < argc; ++i) {
    string arg(argv[i]);

    if (arg.compare("--port") == 0 || arg.compare("-port") == 0) {
      if (++i >= argc) {
        cout << "Value missing for argument '" << arg << "'." << endl;
        cout << usage.str();
        return -1;
      }

      port = argv[i];
      break;
    }
  }

  string serverAddress("0.0.0.0:" + port);
  grpc::ServerBuilder builder;
  builder.AddListeningPort(serverAddress, grpc::InsecureServerCredentials());

  ControllerService service(publishers, _controlMsgs);

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
