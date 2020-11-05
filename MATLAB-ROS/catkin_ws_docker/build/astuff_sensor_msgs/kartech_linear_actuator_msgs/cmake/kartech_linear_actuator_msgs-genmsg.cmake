# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "kartech_linear_actuator_msgs: 22 messages, 0 services")

set(MSG_I_FLAGS "-Ikartech_linear_actuator_msgs:/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(kartech_linear_actuator_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" "kartech_linear_actuator_msgs/ReportIndex:std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" ""
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" "kartech_linear_actuator_msgs/ReportIndex:std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" NAME_WE)
add_custom_target(_kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "kartech_linear_actuator_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_cpp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(kartech_linear_actuator_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(kartech_linear_actuator_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(kartech_linear_actuator_msgs_generate_messages kartech_linear_actuator_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(kartech_linear_actuator_msgs_gencpp)
add_dependencies(kartech_linear_actuator_msgs_gencpp kartech_linear_actuator_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS kartech_linear_actuator_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_eus(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(kartech_linear_actuator_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(kartech_linear_actuator_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(kartech_linear_actuator_msgs_generate_messages kartech_linear_actuator_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(kartech_linear_actuator_msgs_geneus)
add_dependencies(kartech_linear_actuator_msgs_geneus kartech_linear_actuator_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS kartech_linear_actuator_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_lisp(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(kartech_linear_actuator_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(kartech_linear_actuator_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(kartech_linear_actuator_msgs_generate_messages kartech_linear_actuator_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(kartech_linear_actuator_msgs_genlisp)
add_dependencies(kartech_linear_actuator_msgs_genlisp kartech_linear_actuator_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS kartech_linear_actuator_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_nodejs(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(kartech_linear_actuator_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(kartech_linear_actuator_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(kartech_linear_actuator_msgs_generate_messages kartech_linear_actuator_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(kartech_linear_actuator_msgs_gennodejs)
add_dependencies(kartech_linear_actuator_msgs_gennodejs kartech_linear_actuator_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS kartech_linear_actuator_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg"
  "${MSG_I_FLAGS}"
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)
_generate_msg_py(kartech_linear_actuator_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(kartech_linear_actuator_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(kartech_linear_actuator_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(kartech_linear_actuator_msgs_generate_messages kartech_linear_actuator_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportPollReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/UniqueDeviceIdRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKpKiCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignReportIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReportIndex.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ResetCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/SoftwareVersionReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsKdFreqDeadbandCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/AutoZeroCalCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PriorityConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/EnhancedPositionRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ZeroingMessageRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorCurrentRpt.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/MotorOverCurrentConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ConfigureOutputsPwmFreqCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/ActuatorUniqueIdReq.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/kartech_linear_actuator_msgs/msg/PositionReachErrorTimeConfigCmd.msg" NAME_WE)
add_dependencies(kartech_linear_actuator_msgs_generate_messages_py _kartech_linear_actuator_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(kartech_linear_actuator_msgs_genpy)
add_dependencies(kartech_linear_actuator_msgs_genpy kartech_linear_actuator_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS kartech_linear_actuator_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/kartech_linear_actuator_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(kartech_linear_actuator_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/kartech_linear_actuator_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(kartech_linear_actuator_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/kartech_linear_actuator_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(kartech_linear_actuator_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/kartech_linear_actuator_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(kartech_linear_actuator_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/kartech_linear_actuator_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(kartech_linear_actuator_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
