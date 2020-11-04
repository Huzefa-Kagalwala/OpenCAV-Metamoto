;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::LrosVinPart1)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'LrosVinPart1 (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::LROSVINPART1")
  (make-package "DELPHI_MRR_MSGS::LROSVINPART1"))

(in-package "ROS")
;;//! \htmlinclude LrosVinPart1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::LrosVinPart1
  :super ros::object
  :slots (_header _vin_part1 ))

(defmethod delphi_mrr_msgs::LrosVinPart1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:vin_part1 __vin_part1) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _vin_part1 (round __vin_part1))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:vin_part1
   (&optional __vin_part1)
   (if __vin_part1 (setq _vin_part1 __vin_part1)) _vin_part1)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _vin_part1
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _vin_part1
       (write-byte _vin_part1 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _vin_part1
     (setq _vin_part1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::LrosVinPart1 :md5sum-) "ff22ba3036cf1a56cdd735e84c556020")
(setf (get delphi_mrr_msgs::LrosVinPart1 :datatype-) "delphi_mrr_msgs/LrosVinPart1")
(setf (get delphi_mrr_msgs::LrosVinPart1 :definition-)
      "std_msgs/Header header

uint8 vin_part1

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



(provide :delphi_mrr_msgs/LrosVinPart1 "ff22ba3036cf1a56cdd735e84c556020")


