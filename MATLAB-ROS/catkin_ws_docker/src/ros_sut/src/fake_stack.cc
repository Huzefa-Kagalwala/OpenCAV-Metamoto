#include <sstream>

#include "ros/ros.h"
#include "rosgraph_msgs/Clock.h"
#include "ros_sut/ControlCommand.h"
#include "ros_sut/SixChannelControlCommand.h"

using namespace std;

ros::Publisher publisher;
int n = 0;

void PublishCtrlCmd(const rosgraph_msgs::Clock& clockMsg) {
  cout << "Received clock time: " << clockMsg.clock << endl;

  // fake control message: 
  // first 50 messages accelerate and turn left
  // next 50 messages brake and turn right
  // thereafter coast straight
  n++;
  ros_sut::ControlCommand cmdMsg;
  cmdMsg.header.stamp = clockMsg.clock;
  if (n <= 50) {
    cmdMsg.acceleration = 1.0;
    cmdMsg.steer = -0.1;
  } else if (n <= 100) {
    cmdMsg.acceleration = -1.0;
    cmdMsg.steer = 0.1;
  } else {
    cmdMsg.acceleration = 0.0;
    cmdMsg.steer = 0.0;
  }

  cout << "Sending accel = " << cmdMsg.acceleration << ", steer = " << cmdMsg.steer << endl;

  publisher.publish(cmdMsg);
}

void PublishSixChannelCtrlCmd(const rosgraph_msgs::Clock& clockMsg) {
  cout << "Received clock time: " << clockMsg.clock << endl;

  // fake control message: 
  // first 50 messages go forward and turn right
  // next 50 messages go backward and turn left
  // thereafter go forward straight
  n++;
  ros_sut::SixChannelControlCommand cmdMsg;
  cmdMsg.header.stamp = clockMsg.clock;
  if (n <= 50) {
    cmdMsg.fl_rpm = cmdMsg.fr_rpm = cmdMsg.rl_rpm = cmdMsg.rr_rpm = 60.;
    cmdMsg.fl_steer = cmdMsg.fr_steer = -20.;
  } else if (n <= 100) {
    cmdMsg.fl_rpm = cmdMsg.fr_rpm = cmdMsg.rl_rpm = cmdMsg.rr_rpm = -60.;
    cmdMsg.fl_steer = cmdMsg.fr_steer = 20.;
  } else {
    cmdMsg.fl_rpm = cmdMsg.fr_rpm = cmdMsg.rl_rpm = cmdMsg.rr_rpm = 30.;
    cmdMsg.fl_steer = cmdMsg.fr_steer = 0.;
  }

  cout << "Sending rpm = " << cmdMsg.fl_rpm << ", steer = " << cmdMsg.fl_steer << endl;

  publisher.publish(cmdMsg);
}


int main(int argc, char** argv) {
  ros::init(argc, argv, "fake_stack");
  ros::NodeHandle node;
  ros::Subscriber subscriber;

  bool sixCh = false;

  for (int i = 1; i < argc; ++i) {
    string arg(argv[i]);
    if (arg.compare("-6ch") == 0) {
      sixCh = true;
    }
  }

  if (sixCh) {
    publisher = node.advertise<ros_sut::SixChannelControlCommand>("/6_ch_control_cmd", 1000);
    subscriber = node.subscribe("/clock", 1000, PublishSixChannelCtrlCmd);
  } else {
    publisher = node.advertise<ros_sut::ControlCommand>("/control_cmd", 1000);
    subscriber = node.subscribe("/clock", 1000, PublishCtrlCmd);
  }

  cout << "Fake Stack listening for /clock messages" << endl;

  ros::spin();
  return 0;
}
