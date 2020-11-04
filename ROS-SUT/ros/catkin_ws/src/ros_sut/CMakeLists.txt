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
  message_generation
  geometry_msgs
  radar_msgs
)

add_message_files(
  FILES
  ControlCommand.msg
  SixChannelControlCommand.msg
 )

generate_messages(
  DEPENDENCIES
  std_msgs
  geometry_msgs
 
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
  CATKIN_DEPENDS message_runtime geometry_msgs
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations


##### MS
include_directories(
# include
  ../../../metamoto/generated
  ${catkin_INCLUDE_DIRS}
)
link_directories(
  ../../../metamoto/bin
)

add_executable(
  metamoto_controller src/main.cc src/controller_service.cc src/data_bus_client.cc 
  src/reporting_client.cc src/map_client.cc src/data_conversions.cc
)
add_dependencies(metamoto_controller ${ros_sut_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(
  metamoto_controller ${catkin_LIBRARIES} grpc grpc++ protobuf dl pthread libmetamoto.so
)

add_executable(
  fake_stack src/fake_stack.cc
)
add_dependencies(fake_stack ${ros_sut_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(fake_stack ${catkin_LIBRARIES})

add_executable(
  radar_stack src/radar_stack.cc
)
add_dependencies(radar_stack ${ros_sut_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(radar_stack ${catkin_LIBRARIES})
