;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemAlignFactory1)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemAlignFactory1 (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMALIGNFACTORY1")
  (make-package "DELPHI_MRR_MSGS::SYSTEMALIGNFACTORY1"))

(in-package "ROS")
;;//! \htmlinclude SystemAlignFactory1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemAlignFactory1
  :super ros::object
  :slots (_header _can_fac_tgt_range_r2m _can_fac_tgt_range_m2t _can_fac_tgt_range1 _can_fac_tgt_mtg_space_hor _can_fac_tgt_mtg_offset _can_fac_align_samp_req ))

(defmethod delphi_mrr_msgs::SystemAlignFactory1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_fac_tgt_range_r2m __can_fac_tgt_range_r2m) 0.0)
    ((:can_fac_tgt_range_m2t __can_fac_tgt_range_m2t) 0.0)
    ((:can_fac_tgt_range1 __can_fac_tgt_range1) 0.0)
    ((:can_fac_tgt_mtg_space_hor __can_fac_tgt_mtg_space_hor) 0)
    ((:can_fac_tgt_mtg_offset __can_fac_tgt_mtg_offset) 0)
    ((:can_fac_align_samp_req __can_fac_align_samp_req) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_fac_tgt_range_r2m (float __can_fac_tgt_range_r2m))
   (setq _can_fac_tgt_range_m2t (float __can_fac_tgt_range_m2t))
   (setq _can_fac_tgt_range1 (float __can_fac_tgt_range1))
   (setq _can_fac_tgt_mtg_space_hor (round __can_fac_tgt_mtg_space_hor))
   (setq _can_fac_tgt_mtg_offset (round __can_fac_tgt_mtg_offset))
   (setq _can_fac_align_samp_req (round __can_fac_align_samp_req))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_fac_tgt_range_r2m
   (&optional __can_fac_tgt_range_r2m)
   (if __can_fac_tgt_range_r2m (setq _can_fac_tgt_range_r2m __can_fac_tgt_range_r2m)) _can_fac_tgt_range_r2m)
  (:can_fac_tgt_range_m2t
   (&optional __can_fac_tgt_range_m2t)
   (if __can_fac_tgt_range_m2t (setq _can_fac_tgt_range_m2t __can_fac_tgt_range_m2t)) _can_fac_tgt_range_m2t)
  (:can_fac_tgt_range1
   (&optional __can_fac_tgt_range1)
   (if __can_fac_tgt_range1 (setq _can_fac_tgt_range1 __can_fac_tgt_range1)) _can_fac_tgt_range1)
  (:can_fac_tgt_mtg_space_hor
   (&optional __can_fac_tgt_mtg_space_hor)
   (if __can_fac_tgt_mtg_space_hor (setq _can_fac_tgt_mtg_space_hor __can_fac_tgt_mtg_space_hor)) _can_fac_tgt_mtg_space_hor)
  (:can_fac_tgt_mtg_offset
   (&optional __can_fac_tgt_mtg_offset)
   (if __can_fac_tgt_mtg_offset (setq _can_fac_tgt_mtg_offset __can_fac_tgt_mtg_offset)) _can_fac_tgt_mtg_offset)
  (:can_fac_align_samp_req
   (&optional __can_fac_align_samp_req)
   (if __can_fac_align_samp_req (setq _can_fac_align_samp_req __can_fac_align_samp_req)) _can_fac_align_samp_req)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _can_fac_tgt_range_r2m
    4
    ;; float32 _can_fac_tgt_range_m2t
    4
    ;; float32 _can_fac_tgt_range1
    4
    ;; uint8 _can_fac_tgt_mtg_space_hor
    1
    ;; uint8 _can_fac_tgt_mtg_offset
    1
    ;; uint8 _can_fac_align_samp_req
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _can_fac_tgt_range_r2m
       (sys::poke _can_fac_tgt_range_r2m (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_fac_tgt_range_m2t
       (sys::poke _can_fac_tgt_range_m2t (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_fac_tgt_range1
       (sys::poke _can_fac_tgt_range1 (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_fac_tgt_mtg_space_hor
       (write-byte _can_fac_tgt_mtg_space_hor s)
     ;; uint8 _can_fac_tgt_mtg_offset
       (write-byte _can_fac_tgt_mtg_offset s)
     ;; uint8 _can_fac_align_samp_req
       (write-byte _can_fac_align_samp_req s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _can_fac_tgt_range_r2m
     (setq _can_fac_tgt_range_r2m (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_fac_tgt_range_m2t
     (setq _can_fac_tgt_range_m2t (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_fac_tgt_range1
     (setq _can_fac_tgt_range1 (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_fac_tgt_mtg_space_hor
     (setq _can_fac_tgt_mtg_space_hor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_fac_tgt_mtg_offset
     (setq _can_fac_tgt_mtg_offset (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_fac_align_samp_req
     (setq _can_fac_align_samp_req (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemAlignFactory1 :md5sum-) "33dc19c198faf55bc08750372fc54a34")
(setf (get delphi_mrr_msgs::SystemAlignFactory1 :datatype-) "delphi_mrr_msgs/SystemAlignFactory1")
(setf (get delphi_mrr_msgs::SystemAlignFactory1 :definition-)
      "std_msgs/Header header

float32 can_fac_tgt_range_r2m
float32 can_fac_tgt_range_m2t
float32 can_fac_tgt_range1
uint8  can_fac_tgt_mtg_space_hor
uint8  can_fac_tgt_mtg_offset
uint8  can_fac_align_samp_req

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



(provide :delphi_mrr_msgs/SystemAlignFactory1 "33dc19c198faf55bc08750372fc54a34")


