cmake_minimum_required(VERSION 2.8.3)
project(ros_sut)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
  autoware_msgs
)


###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if your package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES ros_sut
#  CATKIN_DEPENDS roscpp std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations


##### MS
include_directories(
  /metamoto/generated
  ${catkin_INCLUDE_DIRS}
)
link_directories(
  /metamoto/bin
  /usr/local/lib
)

add_executable(
  metamoto_controller src/main.cc src/controller_service.cc src/data_bus_client.cc
  src/reporting_client.cc src/map_client.cc src/data_conversions.cc
)
add_dependencies(
  metamoto_controller sensor_msgs_generate_messages_cpp autoware_msgs_generate_messages_cpp
)
target_link_libraries(
  metamoto_controller ${catkin_LIBRARIES} grpc grpc++ dl pthread protobuf metamoto
)
