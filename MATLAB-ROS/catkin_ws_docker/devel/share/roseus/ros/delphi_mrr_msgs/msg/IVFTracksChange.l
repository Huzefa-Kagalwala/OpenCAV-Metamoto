;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::IVFTracksChange)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'IVFTracksChange (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::IVFTRACKSCHANGE")
  (make-package "DELPHI_MRR_MSGS::IVFTRACKSCHANGE"))

(in-package "ROS")
;;//! \htmlinclude IVFTracksChange.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::IVFTracksChange
  :super ros::object
  :slots (_header _f_radar_unreasonable ))

(defmethod delphi_mrr_msgs::IVFTracksChange
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:f_radar_unreasonable __f_radar_unreasonable) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _f_radar_unreasonable __f_radar_unreasonable)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:f_radar_unreasonable
   (&optional __f_radar_unreasonable)
   (if __f_radar_unreasonable (setq _f_radar_unreasonable __f_radar_unreasonable)) _f_radar_unreasonable)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _f_radar_unreasonable
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _f_radar_unreasonable
       (if _f_radar_unreasonable (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _f_radar_unreasonable
     (setq _f_radar_unreasonable (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::IVFTracksChange :md5sum-) "b96e48ec2e50e5161b12a9d85bb23f2a")
(setf (get delphi_mrr_msgs::IVFTracksChange :datatype-) "delphi_mrr_msgs/IVFTracksChange")
(setf (get delphi_mrr_msgs::IVFTracksChange :definition-)
      "std_msgs/Header header

bool f_radar_unreasonable

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



(provide :delphi_mrr_msgs/IVFTracksChange "b96e48ec2e50e5161b12a9d85bb23f2a")


