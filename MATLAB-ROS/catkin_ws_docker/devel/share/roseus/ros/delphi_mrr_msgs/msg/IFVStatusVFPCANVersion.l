;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::IFVStatusVFPCANVersion)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'IFVStatusVFPCANVersion (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::IFVSTATUSVFPCANVERSION")
  (make-package "DELPHI_MRR_MSGS::IFVSTATUSVFPCANVERSION"))

(in-package "ROS")
;;//! \htmlinclude IFVStatusVFPCANVersion.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::IFVStatusVFPCANVersion
  :super ros::object
  :slots (_header _can_pcan_minor_ifv_vfp _can_pcan_major_ifv_vfp ))

(defmethod delphi_mrr_msgs::IFVStatusVFPCANVersion
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_pcan_minor_ifv_vfp __can_pcan_minor_ifv_vfp) 0)
    ((:can_pcan_major_ifv_vfp __can_pcan_major_ifv_vfp) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_pcan_minor_ifv_vfp (round __can_pcan_minor_ifv_vfp))
   (setq _can_pcan_major_ifv_vfp (round __can_pcan_major_ifv_vfp))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_pcan_minor_ifv_vfp
   (&optional __can_pcan_minor_ifv_vfp)
   (if __can_pcan_minor_ifv_vfp (setq _can_pcan_minor_ifv_vfp __can_pcan_minor_ifv_vfp)) _can_pcan_minor_ifv_vfp)
  (:can_pcan_major_ifv_vfp
   (&optional __can_pcan_major_ifv_vfp)
   (if __can_pcan_major_ifv_vfp (setq _can_pcan_major_ifv_vfp __can_pcan_major_ifv_vfp)) _can_pcan_major_ifv_vfp)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _can_pcan_minor_ifv_vfp
    1
    ;; uint8 _can_pcan_major_ifv_vfp
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _can_pcan_minor_ifv_vfp
       (write-byte _can_pcan_minor_ifv_vfp s)
     ;; uint8 _can_pcan_major_ifv_vfp
       (write-byte _can_pcan_major_ifv_vfp s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _can_pcan_minor_ifv_vfp
     (setq _can_pcan_minor_ifv_vfp (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_pcan_major_ifv_vfp
     (setq _can_pcan_major_ifv_vfp (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::IFVStatusVFPCANVersion :md5sum-) "ce4ce31a8f45ccd449a2f0c9af78d24c")
(setf (get delphi_mrr_msgs::IFVStatusVFPCANVersion :datatype-) "delphi_mrr_msgs/IFVStatusVFPCANVersion")
(setf (get delphi_mrr_msgs::IFVStatusVFPCANVersion :definition-)
      "std_msgs/Header header

uint8 can_pcan_minor_ifv_vfp
uint8 can_pcan_major_ifv_vfp

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



(provide :delphi_mrr_msgs/IFVStatusVFPCANVersion "ce4ce31a8f45ccd449a2f0c9af78d24c")


