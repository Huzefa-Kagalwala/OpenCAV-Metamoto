;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemAlignment2)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemAlignment2 (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMALIGNMENT2")
  (make-package "DELPHI_MRR_MSGS::SYSTEMALIGNMENT2"))

(in-package "ROS")
;;//! \htmlinclude SystemAlignment2.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemAlignment2
  :super ros::object
  :slots (_header _can_serv_align_updates_need _can_serv_align_type _can_radar_height _can_radar_fov_mr _can_radar_fov_rr _can_align_enable _can_angle_mounting_hoffset _can_aalign_avg_ctr_total ))

(defmethod delphi_mrr_msgs::SystemAlignment2
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_serv_align_updates_need __can_serv_align_updates_need) 0)
    ((:can_serv_align_type __can_serv_align_type) nil)
    ((:can_radar_height __can_radar_height) 0)
    ((:can_radar_fov_mr __can_radar_fov_mr) 0)
    ((:can_radar_fov_rr __can_radar_fov_rr) 0)
    ((:can_align_enable __can_align_enable) 0)
    ((:can_angle_mounting_hoffset __can_angle_mounting_hoffset) 0.0)
    ((:can_aalign_avg_ctr_total __can_aalign_avg_ctr_total) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_serv_align_updates_need (round __can_serv_align_updates_need))
   (setq _can_serv_align_type __can_serv_align_type)
   (setq _can_radar_height (round __can_radar_height))
   (setq _can_radar_fov_mr (round __can_radar_fov_mr))
   (setq _can_radar_fov_rr (round __can_radar_fov_rr))
   (setq _can_align_enable (round __can_align_enable))
   (setq _can_angle_mounting_hoffset (float __can_angle_mounting_hoffset))
   (setq _can_aalign_avg_ctr_total (round __can_aalign_avg_ctr_total))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_serv_align_updates_need
   (&optional __can_serv_align_updates_need)
   (if __can_serv_align_updates_need (setq _can_serv_align_updates_need __can_serv_align_updates_need)) _can_serv_align_updates_need)
  (:can_serv_align_type
   (&optional __can_serv_align_type)
   (if __can_serv_align_type (setq _can_serv_align_type __can_serv_align_type)) _can_serv_align_type)
  (:can_radar_height
   (&optional __can_radar_height)
   (if __can_radar_height (setq _can_radar_height __can_radar_height)) _can_radar_height)
  (:can_radar_fov_mr
   (&optional __can_radar_fov_mr)
   (if __can_radar_fov_mr (setq _can_radar_fov_mr __can_radar_fov_mr)) _can_radar_fov_mr)
  (:can_radar_fov_rr
   (&optional __can_radar_fov_rr)
   (if __can_radar_fov_rr (setq _can_radar_fov_rr __can_radar_fov_rr)) _can_radar_fov_rr)
  (:can_align_enable
   (&optional __can_align_enable)
   (if __can_align_enable (setq _can_align_enable __can_align_enable)) _can_align_enable)
  (:can_angle_mounting_hoffset
   (&optional __can_angle_mounting_hoffset)
   (if __can_angle_mounting_hoffset (setq _can_angle_mounting_hoffset __can_angle_mounting_hoffset)) _can_angle_mounting_hoffset)
  (:can_aalign_avg_ctr_total
   (&optional __can_aalign_avg_ctr_total)
   (if __can_aalign_avg_ctr_total (setq _can_aalign_avg_ctr_total __can_aalign_avg_ctr_total)) _can_aalign_avg_ctr_total)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _can_serv_align_updates_need
    1
    ;; bool _can_serv_align_type
    1
    ;; uint8 _can_radar_height
    1
    ;; uint8 _can_radar_fov_mr
    1
    ;; uint8 _can_radar_fov_rr
    1
    ;; uint8 _can_align_enable
    1
    ;; float32 _can_angle_mounting_hoffset
    4
    ;; uint8 _can_aalign_avg_ctr_total
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _can_serv_align_updates_need
       (write-byte _can_serv_align_updates_need s)
     ;; bool _can_serv_align_type
       (if _can_serv_align_type (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _can_radar_height
       (write-byte _can_radar_height s)
     ;; uint8 _can_radar_fov_mr
       (write-byte _can_radar_fov_mr s)
     ;; uint8 _can_radar_fov_rr
       (write-byte _can_radar_fov_rr s)
     ;; uint8 _can_align_enable
       (write-byte _can_align_enable s)
     ;; float32 _can_angle_mounting_hoffset
       (sys::poke _can_angle_mounting_hoffset (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_aalign_avg_ctr_total
       (write-byte _can_aalign_avg_ctr_total s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _can_serv_align_updates_need
     (setq _can_serv_align_updates_need (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _can_serv_align_type
     (setq _can_serv_align_type (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _can_radar_height
     (setq _can_radar_height (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_radar_fov_mr
     (setq _can_radar_fov_mr (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_radar_fov_rr
     (setq _can_radar_fov_rr (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_align_enable
     (setq _can_align_enable (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _can_angle_mounting_hoffset
     (setq _can_angle_mounting_hoffset (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_aalign_avg_ctr_total
     (setq _can_aalign_avg_ctr_total (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemAlignment2 :md5sum-) "fab1b79e32d15c3fd6d3030b565850a5")
(setf (get delphi_mrr_msgs::SystemAlignment2 :datatype-) "delphi_mrr_msgs/SystemAlignment2")
(setf (get delphi_mrr_msgs::SystemAlignment2 :definition-)
      "std_msgs/Header header

uint8 	 can_serv_align_updates_need
bool     can_serv_align_type
uint8 	 can_radar_height
uint8 	 can_radar_fov_mr
uint8 	 can_radar_fov_rr
uint8 	 can_align_enable
float32  can_angle_mounting_hoffset
uint8 	 can_aalign_avg_ctr_total

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



(provide :delphi_mrr_msgs/SystemAlignment2 "fab1b79e32d15c3fd6d3030b565850a5")


