;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::LrosFordSpecific)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'LrosFordSpecific (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::LROSFORDSPECIFIC")
  (make-package "DELPHI_MRR_MSGS::LROSFORDSPECIFIC"))

(in-package "ROS")
;;//! \htmlinclude LrosFordSpecific.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::LrosFordSpecific
  :super ros::object
  :slots (_header _can_globalrealtime_ford _can_veh_speed_ford _can_veh_yaw_ford ))

(defmethod delphi_mrr_msgs::LrosFordSpecific
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_globalrealtime_ford __can_globalrealtime_ford) 0.0)
    ((:can_veh_speed_ford __can_veh_speed_ford) 0.0)
    ((:can_veh_yaw_ford __can_veh_yaw_ford) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_globalrealtime_ford (float __can_globalrealtime_ford))
   (setq _can_veh_speed_ford (float __can_veh_speed_ford))
   (setq _can_veh_yaw_ford (float __can_veh_yaw_ford))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_globalrealtime_ford
   (&optional __can_globalrealtime_ford)
   (if __can_globalrealtime_ford (setq _can_globalrealtime_ford __can_globalrealtime_ford)) _can_globalrealtime_ford)
  (:can_veh_speed_ford
   (&optional __can_veh_speed_ford)
   (if __can_veh_speed_ford (setq _can_veh_speed_ford __can_veh_speed_ford)) _can_veh_speed_ford)
  (:can_veh_yaw_ford
   (&optional __can_veh_yaw_ford)
   (if __can_veh_yaw_ford (setq _can_veh_yaw_ford __can_veh_yaw_ford)) _can_veh_yaw_ford)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _can_globalrealtime_ford
    4
    ;; float32 _can_veh_speed_ford
    4
    ;; float32 _can_veh_yaw_ford
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _can_globalrealtime_ford
       (sys::poke _can_globalrealtime_ford (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_veh_speed_ford
       (sys::poke _can_veh_speed_ford (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_veh_yaw_ford
       (sys::poke _can_veh_yaw_ford (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _can_globalrealtime_ford
     (setq _can_globalrealtime_ford (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_veh_speed_ford
     (setq _can_veh_speed_ford (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_veh_yaw_ford
     (setq _can_veh_yaw_ford (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::LrosFordSpecific :md5sum-) "100e89430c762eb19217e3aa8f0775b9")
(setf (get delphi_mrr_msgs::LrosFordSpecific :datatype-) "delphi_mrr_msgs/LrosFordSpecific")
(setf (get delphi_mrr_msgs::LrosFordSpecific :definition-)
      "std_msgs/Header header

float32 can_globalrealtime_ford
float32 can_veh_speed_ford
float32 can_veh_yaw_ford

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



(provide :delphi_mrr_msgs/LrosFordSpecific "100e89430c762eb19217e3aa8f0775b9")


