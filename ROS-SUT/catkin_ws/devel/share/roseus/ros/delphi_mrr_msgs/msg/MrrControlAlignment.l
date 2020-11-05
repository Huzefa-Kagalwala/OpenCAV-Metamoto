;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::MrrControlAlignment)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'MrrControlAlignment (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::MRRCONTROLALIGNMENT")
  (make-package "DELPHI_MRR_MSGS::MRRCONTROLALIGNMENT"))

(in-package "ROS")
;;//! \htmlinclude MrrControlAlignment.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::MrrControlAlignment
  :super ros::object
  :slots (_header _can_fac_align_cmd3 _can_fac_align_cmd2 _can_fac_align_cmd1 ))

(defmethod delphi_mrr_msgs::MrrControlAlignment
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_fac_align_cmd3 __can_fac_align_cmd3) nil)
    ((:can_fac_align_cmd2 __can_fac_align_cmd2) nil)
    ((:can_fac_align_cmd1 __can_fac_align_cmd1) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_fac_align_cmd3 __can_fac_align_cmd3)
   (setq _can_fac_align_cmd2 __can_fac_align_cmd2)
   (setq _can_fac_align_cmd1 __can_fac_align_cmd1)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_fac_align_cmd3
   (&optional __can_fac_align_cmd3)
   (if __can_fac_align_cmd3 (setq _can_fac_align_cmd3 __can_fac_align_cmd3)) _can_fac_align_cmd3)
  (:can_fac_align_cmd2
   (&optional __can_fac_align_cmd2)
   (if __can_fac_align_cmd2 (setq _can_fac_align_cmd2 __can_fac_align_cmd2)) _can_fac_align_cmd2)
  (:can_fac_align_cmd1
   (&optional __can_fac_align_cmd1)
   (if __can_fac_align_cmd1 (setq _can_fac_align_cmd1 __can_fac_align_cmd1)) _can_fac_align_cmd1)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _can_fac_align_cmd3
    1
    ;; bool _can_fac_align_cmd2
    1
    ;; bool _can_fac_align_cmd1
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _can_fac_align_cmd3
       (if _can_fac_align_cmd3 (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_fac_align_cmd2
       (if _can_fac_align_cmd2 (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_fac_align_cmd1
       (if _can_fac_align_cmd1 (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _can_fac_align_cmd3
     (setq _can_fac_align_cmd3 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_fac_align_cmd2
     (setq _can_fac_align_cmd2 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_fac_align_cmd1
     (setq _can_fac_align_cmd1 (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::MrrControlAlignment :md5sum-) "022c142d4c445433eb445902d2e2f141")
(setf (get delphi_mrr_msgs::MrrControlAlignment :datatype-) "delphi_mrr_msgs/MrrControlAlignment")
(setf (get delphi_mrr_msgs::MrrControlAlignment :definition-)
      "std_msgs/Header header

bool can_fac_align_cmd3
bool can_fac_align_cmd2
bool can_fac_align_cmd1

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



(provide :delphi_mrr_msgs/MrrControlAlignment "022c142d4c445433eb445902d2e2f141")


