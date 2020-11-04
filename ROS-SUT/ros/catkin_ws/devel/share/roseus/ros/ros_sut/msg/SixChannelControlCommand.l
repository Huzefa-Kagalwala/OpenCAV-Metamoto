;; Auto-generated. Do not edit!


(when (boundp 'ros_sut::SixChannelControlCommand)
  (if (not (find-package "ROS_SUT"))
    (make-package "ROS_SUT"))
  (shadow 'SixChannelControlCommand (find-package "ROS_SUT")))
(unless (find-package "ROS_SUT::SIXCHANNELCONTROLCOMMAND")
  (make-package "ROS_SUT::SIXCHANNELCONTROLCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude SixChannelControlCommand.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_sut::SixChannelControlCommand
  :super ros::object
  :slots (_header _fl_rpm _fr_rpm _rl_rpm _rr_rpm _fl_steer _fr_steer _brake _throttle ))

(defmethod ros_sut::SixChannelControlCommand
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:fl_rpm __fl_rpm) 0.0)
    ((:fr_rpm __fr_rpm) 0.0)
    ((:rl_rpm __rl_rpm) 0.0)
    ((:rr_rpm __rr_rpm) 0.0)
    ((:fl_steer __fl_steer) 0.0)
    ((:fr_steer __fr_steer) 0.0)
    ((:brake __brake) 0.0)
    ((:throttle __throttle) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _fl_rpm (float __fl_rpm))
   (setq _fr_rpm (float __fr_rpm))
   (setq _rl_rpm (float __rl_rpm))
   (setq _rr_rpm (float __rr_rpm))
   (setq _fl_steer (float __fl_steer))
   (setq _fr_steer (float __fr_steer))
   (setq _brake (float __brake))
   (setq _throttle (float __throttle))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:fl_rpm
   (&optional __fl_rpm)
   (if __fl_rpm (setq _fl_rpm __fl_rpm)) _fl_rpm)
  (:fr_rpm
   (&optional __fr_rpm)
   (if __fr_rpm (setq _fr_rpm __fr_rpm)) _fr_rpm)
  (:rl_rpm
   (&optional __rl_rpm)
   (if __rl_rpm (setq _rl_rpm __rl_rpm)) _rl_rpm)
  (:rr_rpm
   (&optional __rr_rpm)
   (if __rr_rpm (setq _rr_rpm __rr_rpm)) _rr_rpm)
  (:fl_steer
   (&optional __fl_steer)
   (if __fl_steer (setq _fl_steer __fl_steer)) _fl_steer)
  (:fr_steer
   (&optional __fr_steer)
   (if __fr_steer (setq _fr_steer __fr_steer)) _fr_steer)
  (:brake
   (&optional __brake)
   (if __brake (setq _brake __brake)) _brake)
  (:throttle
   (&optional __throttle)
   (if __throttle (setq _throttle __throttle)) _throttle)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _fl_rpm
    4
    ;; float32 _fr_rpm
    4
    ;; float32 _rl_rpm
    4
    ;; float32 _rr_rpm
    4
    ;; float32 _fl_steer
    4
    ;; float32 _fr_steer
    4
    ;; float32 _brake
    4
    ;; float32 _throttle
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _fl_rpm
       (sys::poke _fl_rpm (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _fr_rpm
       (sys::poke _fr_rpm (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rl_rpm
       (sys::poke _rl_rpm (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _rr_rpm
       (sys::poke _rr_rpm (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _fl_steer
       (sys::poke _fl_steer (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _fr_steer
       (sys::poke _fr_steer (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _brake
       (sys::poke _brake (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _throttle
       (sys::poke _throttle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _fl_rpm
     (setq _fl_rpm (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _fr_rpm
     (setq _fr_rpm (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rl_rpm
     (setq _rl_rpm (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _rr_rpm
     (setq _rr_rpm (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _fl_steer
     (setq _fl_steer (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _fr_steer
     (setq _fr_steer (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _brake
     (setq _brake (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _throttle
     (setq _throttle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ros_sut::SixChannelControlCommand :md5sum-) "0f55685654ce18486e93ee8817c0a1ab")
(setf (get ros_sut::SixChannelControlCommand :datatype-) "ros_sut/SixChannelControlCommand")
(setf (get ros_sut::SixChannelControlCommand :definition-)
      "std_msgs/Header header

# 4 wheel speeds in rpm
float32 fl_rpm
float32 fr_rpm
float32 rl_rpm
float32 rr_rpm

# front 2 wheel steer angles in degrees, left is positive
float32 fl_steer
float32 fr_steer

# Brake value from 0 to 1
float32 brake

# Throttle value from 0 to 1
float32 throttle

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

")



(provide :ros_sut/SixChannelControlCommand "0f55685654ce18486e93ee8817c0a1ab")


