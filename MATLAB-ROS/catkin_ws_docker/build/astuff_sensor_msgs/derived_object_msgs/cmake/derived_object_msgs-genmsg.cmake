# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "derived_object_msgs: 7 messages, 0 services")

set(MSG_I_FLAGS "-Iderived_object_msgs:/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Ishape_msgs:/opt/ros/kinetic/share/shape_msgs/cmake/../msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(derived_object_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" ""
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" "std_msgs/Header:derived_object_msgs/Lane"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" "geometry_msgs/Accel:geometry_msgs/Twist:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point32:derived_object_msgs/SolidPrimitiveWithCovariance:geometry_msgs/Point:geometry_msgs/Vector3:derived_object_msgs/ObjectWithCovariance:geometry_msgs/Polygon:geometry_msgs/PoseWithCovariance:geometry_msgs/Pose:geometry_msgs/TwistWithCovariance:geometry_msgs/AccelWithCovariance"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" "geometry_msgs/Accel:geometry_msgs/Twist:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point32:derived_object_msgs/SolidPrimitiveWithCovariance:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Polygon:geometry_msgs/PoseWithCovariance:geometry_msgs/Pose:geometry_msgs/TwistWithCovariance:geometry_msgs/AccelWithCovariance"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" ""
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" "geometry_msgs/Accel:geometry_msgs/Twist:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point32:geometry_msgs/Vector3:geometry_msgs/Point:shape_msgs/SolidPrimitive:geometry_msgs/Polygon:geometry_msgs/Pose"
)

get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" NAME_WE)
add_custom_target(_derived_object_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "derived_object_msgs" "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" "geometry_msgs/Accel:geometry_msgs/Twist:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point32:geometry_msgs/Point:geometry_msgs/Vector3:shape_msgs/SolidPrimitive:geometry_msgs/Polygon:derived_object_msgs/Object:geometry_msgs/Pose"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_cpp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(derived_object_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(derived_object_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(derived_object_msgs_generate_messages derived_object_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_cpp _derived_object_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(derived_object_msgs_gencpp)
add_dependencies(derived_object_msgs_gencpp derived_object_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS derived_object_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_eus(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(derived_object_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(derived_object_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(derived_object_msgs_generate_messages derived_object_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_eus _derived_object_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(derived_object_msgs_geneus)
add_dependencies(derived_object_msgs_geneus derived_object_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS derived_object_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_lisp(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(derived_object_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(derived_object_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(derived_object_msgs_generate_messages derived_object_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_lisp _derived_object_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(derived_object_msgs_genlisp)
add_dependencies(derived_object_msgs_genlisp derived_object_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS derived_object_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_nodejs(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(derived_object_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(derived_object_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(derived_object_msgs_generate_messages derived_object_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_nodejs _derived_object_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(derived_object_msgs_gennodejs)
add_dependencies(derived_object_msgs_gennodejs derived_object_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS derived_object_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/TwistWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/AccelWithCovariance.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)
_generate_msg_py(derived_object_msgs
  "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Accel.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point32.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/kinetic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(derived_object_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(derived_object_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(derived_object_msgs_generate_messages derived_object_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Lane.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/LaneModels.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovarianceArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/SolidPrimitiveWithCovariance.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/Object.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/metamoto/catkin_ws/src/astuff_sensor_msgs/derived_object_msgs/msg/ObjectArray.msg" NAME_WE)
add_dependencies(derived_object_msgs_generate_messages_py _derived_object_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(derived_object_msgs_genpy)
add_dependencies(derived_object_msgs_genpy derived_object_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS derived_object_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/derived_object_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(derived_object_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET shape_msgs_generate_messages_cpp)
  add_dependencies(derived_object_msgs_generate_messages_cpp shape_msgs_generate_messages_cpp)
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(derived_object_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/derived_object_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(derived_object_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET shape_msgs_generate_messages_eus)
  add_dependencies(derived_object_msgs_generate_messages_eus shape_msgs_generate_messages_eus)
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(derived_object_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/derived_object_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(derived_object_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET shape_msgs_generate_messages_lisp)
  add_dependencies(derived_object_msgs_generate_messages_lisp shape_msgs_generate_messages_lisp)
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(derived_object_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/derived_object_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(derived_object_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET shape_msgs_generate_messages_nodejs)
  add_dependencies(derived_object_msgs_generate_messages_nodejs shape_msgs_generate_messages_nodejs)
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(derived_object_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/derived_object_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(derived_object_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET shape_msgs_generate_messages_py)
  add_dependencies(derived_object_msgs_generate_messages_py shape_msgs_generate_messages_py)
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(derived_object_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
