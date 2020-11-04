#!/bin/bash +x

source /metamoto/catkin_ws/devel/setup.bash
export ROS_IP=`hostname -I`

if [ ! -z $1 ] && [[ $1 == "http"* ]]; then
  export ROS_MASTER_URI=$1
else
  roscore &
  sleep 10
fi

rosparam set use_sim_time true
rosrun ros_sut fake_stack $@
