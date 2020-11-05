# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "delphi_srr_msgs: 11 messages, 0 services")

set(MSG_I_FLAGS "-Idelphi_srr_msgs:/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(delphi_srr_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" NAME_WE)
add_custom_target(_delphi_srr_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "delphi_srr_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_cpp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(delphi_srr_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(delphi_srr_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(delphi_srr_msgs_generate_messages delphi_srr_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_cpp _delphi_srr_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(delphi_srr_msgs_gencpp)
add_dependencies(delphi_srr_msgs_gencpp delphi_srr_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS delphi_srr_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_eus(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(delphi_srr_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(delphi_srr_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(delphi_srr_msgs_generate_messages delphi_srr_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_eus _delphi_srr_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(delphi_srr_msgs_geneus)
add_dependencies(delphi_srr_msgs_geneus delphi_srr_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS delphi_srr_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_lisp(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(delphi_srr_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(delphi_srr_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(delphi_srr_msgs_generate_messages delphi_srr_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_lisp _delphi_srr_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(delphi_srr_msgs_genlisp)
add_dependencies(delphi_srr_msgs_genlisp delphi_srr_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS delphi_srr_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_nodejs(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(delphi_srr_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(delphi_srr_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(delphi_srr_msgs_generate_messages delphi_srr_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_nodejs _delphi_srr_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(delphi_srr_msgs_gennodejs)
add_dependencies(delphi_srr_msgs_gennodejs delphi_srr_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS delphi_srr_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)
_generate_msg_py(delphi_srr_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(delphi_srr_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(delphi_srr_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(delphi_srr_msgs_generate_messages delphi_srr_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg" NAME_WE)
add_dependencies(delphi_srr_msgs_generate_messages_py _delphi_srr_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(delphi_srr_msgs_genpy)
add_dependencies(delphi_srr_msgs_genpy delphi_srr_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS delphi_srr_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/delphi_srr_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(delphi_srr_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/delphi_srr_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(delphi_srr_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/delphi_srr_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(delphi_srr_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/delphi_srr_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(delphi_srr_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/delphi_srr_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(delphi_srr_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
