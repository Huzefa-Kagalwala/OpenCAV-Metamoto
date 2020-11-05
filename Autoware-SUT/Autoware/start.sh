#!/bin/bash +x

CWD=/metamoto

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib/nvidia
export PATH=$PATH:/usr/local/cuda/bin

source $CWD/catkin_ws/devel/setup.bash
source /home/autoware/Autoware/install/setup.bash
roscore &
sleep 5
rosparam load $CWD/launch/params.yaml

scene_dir=/userfiles
if [ ! -d "/userfiles" ]; then
  scene_dir=/home/autoware/shared_dir/scenes
  rm -rf $CWD/results
  mkdir -p $CWD/results
fi

if [ ! "$1" == "-t" ]; then
  rosrun ros_sut metamoto_controller --scene-dir $scene_dir --cwd $CWD $@
fi
