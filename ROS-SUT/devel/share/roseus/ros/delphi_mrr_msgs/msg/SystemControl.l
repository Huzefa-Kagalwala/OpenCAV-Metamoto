;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemControl)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemControl (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMCONTROL")
  (make-package "DELPHI_MRR_MSGS::SYSTEMCONTROL"))

(in-package "ROS")
;;//! \htmlinclude SystemControl.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemControl
  :super ros::object
  :slots (_header _can_inst_mode ))

(defmethod delphi_mrr_msgs::SystemControl
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_inst_mode __can_inst_mode) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_inst_mode (round __can_inst_mode))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_inst_mode
   (&optional __can_inst_mode)
   (if __can_inst_mode (setq _can_inst_mode __can_inst_mode)) _can_inst_mode)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint16 _can_inst_mode
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint16 _can_inst_mode
       (write-word _can_inst_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint16 _can_inst_mode
     (setq _can_inst_mode (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemControl :md5sum-) "1e72efc4c43d994919ce3a728dcb56f3")
(setf (get delphi_mrr_msgs::SystemControl :datatype-) "delphi_mrr_msgs/SystemControl")
(setf (get delphi_mrr_msgs::SystemControl :definition-)
      "std_msgs/Header header

uint16 can_inst_mode

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



(provide :delphi_mrr_msgs/SystemControl "1e72efc4c43d994919ce3a728dcb56f3")


