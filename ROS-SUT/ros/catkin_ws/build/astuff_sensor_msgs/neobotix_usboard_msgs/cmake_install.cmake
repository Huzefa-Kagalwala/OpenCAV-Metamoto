# Install script for directory: /metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/neobotix_usboard_msgs/msg" TYPE FILE FILES
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnalogIn.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsParasetToEEPROM.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsToCmdConnect.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/AnsWriteParaset.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Command.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/SensorData.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Sensors.msg"
    "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/msg/Paraset.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/neobotix_usboard_msgs/cmake" TYPE FILE FILES "/metamoto/catkin_ws/build/astuff_sensor_msgs/neobotix_usboard_msgs/catkin_generated/installspace/neobotix_usboard_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/include/neobotix_usboard_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/share/roseus/ros/neobotix_usboard_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/share/common-lisp/ros/neobotix_usboard_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/share/gennodejs/ros/neobotix_usboard_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/metamoto/catkin_ws/devel/lib/python2.7/dist-packages/neobotix_usboard_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/metamoto/catkin_ws/devel/lib/python2.7/dist-packages/neobotix_usboard_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/metamoto/catkin_ws/build/astuff_sensor_msgs/neobotix_usboard_msgs/catkin_generated/installspace/neobotix_usboard_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/neobotix_usboard_msgs/cmake" TYPE FILE FILES "/metamoto/catkin_ws/build/astuff_sensor_msgs/neobotix_usboard_msgs/catkin_generated/installspace/neobotix_usboard_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/neobotix_usboard_msgs/cmake" TYPE FILE FILES
    "/metamoto/catkin_ws/build/astuff_sensor_msgs/neobotix_usboard_msgs/catkin_generated/installspace/neobotix_usboard_msgsConfig.cmake"
    "/metamoto/catkin_ws/build/astuff_sensor_msgs/neobotix_usboard_msgs/catkin_generated/installspace/neobotix_usboard_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/neobotix_usboard_msgs" TYPE FILE FILES "/metamoto/catkin_ws/src/astuff_sensor_msgs/neobotix_usboard_msgs/package.xml")
endif()

