;; Auto-generated. Do not edit!


(when (boundp 'ros_sut::ControlCommand)
  (if (not (find-package "ROS_SUT"))
    (make-package "ROS_SUT"))
  (shadow 'ControlCommand (find-package "ROS_SUT")))
(unless (find-package "ROS_SUT::CONTROLCOMMAND")
  (make-package "ROS_SUT::CONTROLCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude ControlCommand.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass ros_sut::ControlCommand
  :super ros::object
  :slots (_header _acceleration _steer _brake _throttle ))

(defmethod ros_sut::ControlCommand
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:acceleration __acceleration) 0.0)
    ((:steer __steer) 0.0)
    ((:brake __brake) 0.0)
    ((:throttle __throttle) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _acceleration (float __acceleration))
   (setq _steer (float __steer))
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
  (:acceleration
   (&optional __acceleration)
   (if __acceleration (setq _acceleration __acceleration)) _acceleration)
  (:steer
   (&optional __steer)
   (if __steer (setq _steer __steer)) _steer)
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
    ;; float32 _acceleration
    4
    ;; float32 _steer
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
     ;; float32 _acceleration
       (sys::poke _acceleration (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steer
       (sys::poke _steer (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
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
   ;; float32 _acceleration
     (setq _acceleration (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steer
     (setq _steer (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _brake
     (setq _brake (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _throttle
     (setq _throttle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ros_sut::ControlCommand :md5sum-) "577031b6ea92951f4b5af9c05d9314e9")
(setf (get ros_sut::ControlCommand :datatype-) "ros_sut/ControlCommand")
(setf (get ros_sut::ControlCommand :definition-)
      "std_msgs/Header header
float32 acceleration
float32 steer
float32 brake
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



(provide :ros_sut/ControlCommand "577031b6ea92951f4b5af9c05d9314e9")


