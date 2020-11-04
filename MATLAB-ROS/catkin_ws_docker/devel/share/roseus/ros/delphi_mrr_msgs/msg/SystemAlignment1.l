;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemAlignment1)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemAlignment1 (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMALIGNMENT1")
  (make-package "DELPHI_MRR_MSGS::SYSTEMALIGNMENT1"))

(in-package "ROS")
;;//! \htmlinclude SystemAlignment1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemAlignment1
  :super ros::object
  :slots (_header _can_mrr_upside_down _can_blockage_filter_output _can_angle_misalignment_hdr _can_use_angle_misalignment _can_blockage_disable _can_scan_index_ack ))

(defmethod delphi_mrr_msgs::SystemAlignment1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_mrr_upside_down __can_mrr_upside_down) nil)
    ((:can_blockage_filter_output __can_blockage_filter_output) 0)
    ((:can_angle_misalignment_hdr __can_angle_misalignment_hdr) 0.0)
    ((:can_use_angle_misalignment __can_use_angle_misalignment) nil)
    ((:can_blockage_disable __can_blockage_disable) nil)
    ((:can_scan_index_ack __can_scan_index_ack) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_mrr_upside_down __can_mrr_upside_down)
   (setq _can_blockage_filter_output (round __can_blockage_filter_output))
   (setq _can_angle_misalignment_hdr (float __can_angle_misalignment_hdr))
   (setq _can_use_angle_misalignment __can_use_angle_misalignment)
   (setq _can_blockage_disable __can_blockage_disable)
   (setq _can_scan_index_ack (round __can_scan_index_ack))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_mrr_upside_down
   (&optional __can_mrr_upside_down)
   (if __can_mrr_upside_down (setq _can_mrr_upside_down __can_mrr_upside_down)) _can_mrr_upside_down)
  (:can_blockage_filter_output
   (&optional __can_blockage_filter_output)
   (if __can_blockage_filter_output (setq _can_blockage_filter_output __can_blockage_filter_output)) _can_blockage_filter_output)
  (:can_angle_misalignment_hdr
   (&optional __can_angle_misalignment_hdr)
   (if __can_angle_misalignment_hdr (setq _can_angle_misalignment_hdr __can_angle_misalignment_hdr)) _can_angle_misalignment_hdr)
  (:can_use_angle_misalignment
   (&optional __can_use_angle_misalignment)
   (if __can_use_angle_misalignment (setq _can_use_angle_misalignment __can_use_angle_misalignment)) _can_use_angle_misalignment)
  (:can_blockage_disable
   (&optional __can_blockage_disable)
   (if __can_blockage_disable (setq _can_blockage_disable __can_blockage_disable)) _can_blockage_disable)
  (:can_scan_index_ack
   (&optional __can_scan_index_ack)
   (if __can_scan_index_ack (setq _can_scan_index_ack __can_scan_index_ack)) _can_scan_index_ack)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _can_mrr_upside_down
    1
    ;; uint8 _can_blockage_filter_output
    1
    ;; float32 _can_angle_misalignment_hdr
    4
    ;; bool _can_use_angle_misalignment
    1
    ;; bool _can_blockage_disable
    1
    ;; uint16 _can_scan_index_ack
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _can_mrr_upside_down
       (if _can_mrr_upside_down (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _can_blockage_filter_output
       (write-byte _can_blockage_filter_output s)
     ;; float32 _can_angle_misalignment_hdr
       (sys::poke _can_angle_misalignment_hdr (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; bool _can_use_angle_misalignment
       (if _can_use_angle_misalignment (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_blockage_disable
       (if _can_blockage_disable (write-byte -1 s) (write-byte 0 s))
     ;; uint16 _can_scan_index_ack
       (write-word _can_scan_index_ack s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _can_mrr_upside_down
     (setq _can_mrr_upside_down (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _can_blockage_filter_output
     (setq _can_blockage_filter_output (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _can_angle_misalignment_hdr
     (setq _can_angle_misalignment_hdr (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; bool _can_use_angle_misalignment
     (setq _can_use_angle_misalignment (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_blockage_disable
     (setq _can_blockage_disable (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint16 _can_scan_index_ack
     (setq _can_scan_index_ack (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemAlignment1 :md5sum-) "4e20533dd9d1d3391832af45ebd7eff2")
(setf (get delphi_mrr_msgs::SystemAlignment1 :datatype-) "delphi_mrr_msgs/SystemAlignment1")
(setf (get delphi_mrr_msgs::SystemAlignment1 :definition-)
      "std_msgs/Header header

bool     can_mrr_upside_down
uint8 	 can_blockage_filter_output
float32  can_angle_misalignment_hdr
bool     can_use_angle_misalignment
bool     can_blockage_disable
uint16   can_scan_index_ack 

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



(provide :delphi_mrr_msgs/SystemAlignment1 "4e20533dd9d1d3391832af45ebd7eff2")


