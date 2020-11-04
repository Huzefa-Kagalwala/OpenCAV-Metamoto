# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "neobotix_usboard_msgs: 8 messages, 0 services")

set(MSG_I_FLAGS "-Ineobotix_usboard_msgs:/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(neobotix_usboard_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" "std_msgs/Header"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" ""
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" "std_msgs/Header:neobotix_usboard_msgs/SensorData"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" NAME_WE)
add_custom_target(_neobotix_usboard_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "neobotix_usboard_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_cpp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(neobotix_usboard_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(neobotix_usboard_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(neobotix_usboard_msgs_generate_messages neobotix_usboard_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_cpp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neobotix_usboard_msgs_gencpp)
add_dependencies(neobotix_usboard_msgs_gencpp neobotix_usboard_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neobotix_usboard_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_eus(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(neobotix_usboard_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(neobotix_usboard_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(neobotix_usboard_msgs_generate_messages neobotix_usboard_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_eus _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neobotix_usboard_msgs_geneus)
add_dependencies(neobotix_usboard_msgs_geneus neobotix_usboard_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neobotix_usboard_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_lisp(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(neobotix_usboard_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(neobotix_usboard_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(neobotix_usboard_msgs_generate_messages neobotix_usboard_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_lisp _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neobotix_usboard_msgs_genlisp)
add_dependencies(neobotix_usboard_msgs_genlisp neobotix_usboard_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neobotix_usboard_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_nodejs(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(neobotix_usboard_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(neobotix_usboard_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(neobotix_usboard_msgs_generate_messages neobotix_usboard_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neobotix_usboard_msgs_gennodejs)
add_dependencies(neobotix_usboard_msgs_gennodejs neobotix_usboard_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neobotix_usboard_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)
_generate_msg_py(neobotix_usboard_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(neobotix_usboard_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(neobotix_usboard_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(neobotix_usboard_msgs_generate_messages neobotix_usboard_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg" NAME_WE)
add_dependencies(neobotix_usboard_msgs_generate_messages_py _neobotix_usboard_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(neobotix_usboard_msgs_genpy)
add_dependencies(neobotix_usboard_msgs_genpy neobotix_usboard_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS neobotix_usboard_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/neobotix_usboard_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(neobotix_usboard_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/neobotix_usboard_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(neobotix_usboard_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/neobotix_usboard_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(neobotix_usboard_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/neobotix_usboard_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(neobotix_usboard_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/neobotix_usboard_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(neobotix_usboard_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
