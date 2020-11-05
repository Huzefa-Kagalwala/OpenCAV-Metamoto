# Install script for directory: /metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/metamoto/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/delphi_srr_msgs/msg" TYPE FILE FILES
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug3.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug4.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrDebug5.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureAlert.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrFeatureSwVersion.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus1.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus2.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus3.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus4.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrStatus5.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/msg/SrrTrack.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/delphi_srr_msgs/cmake" TYPE FILE FILES "/metamoto/catkin_ws/build/astuff_sensor_msgs/delphi_srr_msgs/catkin_generated/installspace/delphi_srr_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/include/delphi_srr_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/share/roseus/ros/delphi_srr_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/share/common-lisp/ros/delphi_srr_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/share/gennodejs/ros/delphi_srr_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/metamoto/catkin_ws/devel/lib/python2.7/dist-packages/delphi_srr_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/lib/python2.7/dist-packages/delphi_srr_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/metamoto/catkin_ws/build/astuff_sensor_msgs/delphi_srr_msgs/catkin_generated/installspace/delphi_srr_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/delphi_srr_msgs/cmake" TYPE FILE FILES "/metamoto/catkin_ws/build/astuff_sensor_msgs/delphi_srr_msgs/catkin_generated/installspace/delphi_srr_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/delphi_srr_msgs/cmake" TYPE FILE FILES
    "/metamoto/catkin_ws/build/astuff_sensor_msgs/delphi_srr_msgs/catkin_generated/installspace/delphi_srr_msgsConfig.cmake"
    "/metamoto/catkin_ws/build/astuff_sensor_msgs/delphi_srr_msgs/catkin_generated/installspace/delphi_srr_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/delphi_srr_msgs" TYPE FILE FILES "/metamoto/catkin_ws/src/astuff_sensor_msgs/delphi_srr_msgs/package.xml")
endif()

