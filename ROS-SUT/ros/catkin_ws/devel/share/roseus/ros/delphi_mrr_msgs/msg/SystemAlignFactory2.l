;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemAlignFactory2)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemAlignFactory2 (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMALIGNFACTORY2")
  (make-package "DELPHI_MRR_MSGS::SYSTEMALIGNFACTORY2"))

(in-package "ROS")
;;//! \htmlinclude SystemAlignFactory2.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemAlignFactory2
  :super ros::object
  :slots (_header _can_lateral_mounting_offset _can_fac_plate_tilt_number _can_fac_plate_tilt_angle _can_fac_plate_positions_total _can_fac_align_max_nt ))

(defmethod delphi_mrr_msgs::SystemAlignFactory2
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_lateral_mounting_offset __can_lateral_mounting_offset) 0.0)
    ((:can_fac_plate_tilt_number __can_fac_plate_tilt_number) 0)
    ((:can_fac_plate_tilt_angle __can_fac_plate_tilt_angle) 0.0)
    ((:can_fac_plate_positions_total __can_fac_plate_positions_total) 0)
    ((:can_fac_align_max_nt __can_fac_align_max_nt) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_lateral_mounting_offset (float __can_lateral_mounting_offset))
   (setq _can_fac_plate_tilt_number (round __can_fac_plate_tilt_number))
   (setq _can_fac_plate_tilt_angle (float __can_fac_plate_tilt_angle))
   (setq _can_fac_plate_positions_total (round __can_fac_plate_positions_total))
   (setq _can_fac_align_max_nt (round __can_fac_align_max_nt))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_lateral_mounting_offset
   (&optional __can_lateral_mounting_offset)
   (if __can_lateral_mounting_offset (setq _can_lateral_mounting_offset __can_lateral_mounting_offset)) _can_lateral_mounting_offset)
  (:can_fac_plate_tilt_number
   (&optional __can_fac_plate_tilt_number)
   (if __can_fac_plate_tilt_number (setq _can_fac_plate_tilt_number __can_fac_plate_tilt_number)) _can_fac_plate_tilt_number)
  (:can_fac_plate_tilt_angle
   (&optional __can_fac_plate_tilt_angle)
   (if __can_fac_plate_tilt_angle (setq _can_fac_plate_tilt_angle __can_fac_plate_tilt_angle)) _can_fac_plate_tilt_angle)
  (:can_fac_plate_positions_total
   (&optional __can_fac_plate_positions_total)
   (if __can_fac_plate_positions_total (setq _can_fac_plate_positions_total __can_fac_plate_positions_total)) _can_fac_plate_positions_total)
  (:can_fac_align_max_nt
   (&optional __can_fac_align_max_nt)
   (if __can_fac_align_max_nt (setq _can_fac_align_max_nt __can_fac_align_max_nt)) _can_fac_align_max_nt)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _can_lateral_mounting_offset
    4
    ;; uint8 _can_fac_plate_tilt_number
    1
    ;; float32 _can_fac_plate_tilt_angle
    4
    ;; uint8 _can_fac_plate_positions_total
    1
    ;; uint8 _can_fac_align_max_nt
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _can_lateral_mounting_offset
       (sys::poke _can_lateral_mounting_offset (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_fac_plate_tilt_number
       (write-byte _can_fac_plate_tilt_number s)
     ;; float32 _can_fac_plate_tilt_angle
       (sys::poke _can_fac_plate_tilt_angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_fac_plate_positions_total
       (write-byte _can_fac_plate_positions_total s)
     ;; uint8 _can_fac_align_max_nt
       (write-byte _can_fac_align_max_nt s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _can_lateral_mounting_offset
     (setq _can_lateral_mounting_offset (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_fac_plate_tilt_number
     (setq _can_fac_plate_tilt_number (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _can_fac_plate_tilt_angle
     (setq _can_fac_plate_tilt_angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_fac_plate_positions_total
     (setq _can_fac_plate_positions_total (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_fac_align_max_nt
     (setq _can_fac_align_max_nt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemAlignFactory2 :md5sum-) "2a675dbc2b977f155eb8d12a8fa7811e")
(setf (get delphi_mrr_msgs::SystemAlignFactory2 :datatype-) "delphi_mrr_msgs/SystemAlignFactory2")
(setf (get delphi_mrr_msgs::SystemAlignFactory2 :definition-)
      "std_msgs/Header header

float32 can_lateral_mounting_offset 
uint8   can_fac_plate_tilt_number
float32 can_fac_plate_tilt_angle
uint8   can_fac_plate_positions_total
uint8   can_fac_align_max_nt

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



(provide :delphi_mrr_msgs/SystemAlignFactory2 "2a675dbc2b977f155eb8d12a8fa7811e")


