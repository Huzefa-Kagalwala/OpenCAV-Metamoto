;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::WheelSpeedMsg)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'WheelSpeedMsg (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::WHEELSPEEDMSG")
  (make-package "DELPHI_MRR_MSGS::WHEELSPEEDMSG"))

(in-package "ROS")
;;//! \htmlinclude WheelSpeedMsg.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::WheelSpeedMsg
  :super ros::object
  :slots (_header _can_speed_front_left_wheel _can_speed_front_right_wheel _can_speed_rear_left_wheel _can_speed_rear_right_wheel ))

(defmethod delphi_mrr_msgs::WheelSpeedMsg
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_speed_front_left_wheel __can_speed_front_left_wheel) 0)
    ((:can_speed_front_right_wheel __can_speed_front_right_wheel) 0)
    ((:can_speed_rear_left_wheel __can_speed_rear_left_wheel) 0)
    ((:can_speed_rear_right_wheel __can_speed_rear_right_wheel) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_speed_front_left_wheel (round __can_speed_front_left_wheel))
   (setq _can_speed_front_right_wheel (round __can_speed_front_right_wheel))
   (setq _can_speed_rear_left_wheel (round __can_speed_rear_left_wheel))
   (setq _can_speed_rear_right_wheel (round __can_speed_rear_right_wheel))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_speed_front_left_wheel
   (&optional __can_speed_front_left_wheel)
   (if __can_speed_front_left_wheel (setq _can_speed_front_left_wheel __can_speed_front_left_wheel)) _can_speed_front_left_wheel)
  (:can_speed_front_right_wheel
   (&optional __can_speed_front_right_wheel)
   (if __can_speed_front_right_wheel (setq _can_speed_front_right_wheel __can_speed_front_right_wheel)) _can_speed_front_right_wheel)
  (:can_speed_rear_left_wheel
   (&optional __can_speed_rear_left_wheel)
   (if __can_speed_rear_left_wheel (setq _can_speed_rear_left_wheel __can_speed_rear_left_wheel)) _can_speed_rear_left_wheel)
  (:can_speed_rear_right_wheel
   (&optional __can_speed_rear_right_wheel)
   (if __can_speed_rear_right_wheel (setq _can_speed_rear_right_wheel __can_speed_rear_right_wheel)) _can_speed_rear_right_wheel)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint16 _can_speed_front_left_wheel
    2
    ;; uint16 _can_speed_front_right_wheel
    2
    ;; uint16 _can_speed_rear_left_wheel
    2
    ;; uint16 _can_speed_rear_right_wheel
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint16 _can_speed_front_left_wheel
       (write-word _can_speed_front_left_wheel s)
     ;; uint16 _can_speed_front_right_wheel
       (write-word _can_speed_front_right_wheel s)
     ;; uint16 _can_speed_rear_left_wheel
       (write-word _can_speed_rear_left_wheel s)
     ;; uint16 _can_speed_rear_right_wheel
       (write-word _can_speed_rear_right_wheel s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint16 _can_speed_front_left_wheel
     (setq _can_speed_front_left_wheel (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _can_speed_front_right_wheel
     (setq _can_speed_front_right_wheel (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _can_speed_rear_left_wheel
     (setq _can_speed_rear_left_wheel (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _can_speed_rear_right_wheel
     (setq _can_speed_rear_right_wheel (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::WheelSpeedMsg :md5sum-) "3d1c063361bae8e65f8f42586fc8121c")
(setf (get delphi_mrr_msgs::WheelSpeedMsg :datatype-) "delphi_mrr_msgs/WheelSpeedMsg")
(setf (get delphi_mrr_msgs::WheelSpeedMsg :definition-)
      "std_msgs/Header header

uint16 can_speed_front_left_wheel
uint16 can_speed_front_right_wheel
uint16 can_speed_rear_left_wheel
uint16 can_speed_rear_right_wheel

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



(provide :delphi_mrr_msgs/WheelSpeedMsg "3d1c063361bae8e65f8f42586fc8121c")


