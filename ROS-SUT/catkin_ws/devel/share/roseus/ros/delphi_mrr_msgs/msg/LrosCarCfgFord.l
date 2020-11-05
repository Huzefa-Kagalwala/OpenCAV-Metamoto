;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::LrosCarCfgFord)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'LrosCarCfgFord (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::LROSCARCFGFORD")
  (make-package "DELPHI_MRR_MSGS::LROSCARCFGFORD"))

(in-package "ROS")
;;//! \htmlinclude LrosCarCfgFord.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::LrosCarCfgFord
  :super ros::object
  :slots (_header _k_radar_azimuth_polarity _can_fa_vert_ground_offset _can_fa_vert_lower_limit _can_fa_vert_upper_limit _can_lros_carcfgvehtype_ford _can_lros_carcfgengine_ford ))

(defmethod delphi_mrr_msgs::LrosCarCfgFord
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:k_radar_azimuth_polarity __k_radar_azimuth_polarity) 0)
    ((:can_fa_vert_ground_offset __can_fa_vert_ground_offset) 0.0)
    ((:can_fa_vert_lower_limit __can_fa_vert_lower_limit) 0.0)
    ((:can_fa_vert_upper_limit __can_fa_vert_upper_limit) 0.0)
    ((:can_lros_carcfgvehtype_ford __can_lros_carcfgvehtype_ford) 0)
    ((:can_lros_carcfgengine_ford __can_lros_carcfgengine_ford) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _k_radar_azimuth_polarity (round __k_radar_azimuth_polarity))
   (setq _can_fa_vert_ground_offset (float __can_fa_vert_ground_offset))
   (setq _can_fa_vert_lower_limit (float __can_fa_vert_lower_limit))
   (setq _can_fa_vert_upper_limit (float __can_fa_vert_upper_limit))
   (setq _can_lros_carcfgvehtype_ford (round __can_lros_carcfgvehtype_ford))
   (setq _can_lros_carcfgengine_ford (round __can_lros_carcfgengine_ford))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:k_radar_azimuth_polarity
   (&optional __k_radar_azimuth_polarity)
   (if __k_radar_azimuth_polarity (setq _k_radar_azimuth_polarity __k_radar_azimuth_polarity)) _k_radar_azimuth_polarity)
  (:can_fa_vert_ground_offset
   (&optional __can_fa_vert_ground_offset)
   (if __can_fa_vert_ground_offset (setq _can_fa_vert_ground_offset __can_fa_vert_ground_offset)) _can_fa_vert_ground_offset)
  (:can_fa_vert_lower_limit
   (&optional __can_fa_vert_lower_limit)
   (if __can_fa_vert_lower_limit (setq _can_fa_vert_lower_limit __can_fa_vert_lower_limit)) _can_fa_vert_lower_limit)
  (:can_fa_vert_upper_limit
   (&optional __can_fa_vert_upper_limit)
   (if __can_fa_vert_upper_limit (setq _can_fa_vert_upper_limit __can_fa_vert_upper_limit)) _can_fa_vert_upper_limit)
  (:can_lros_carcfgvehtype_ford
   (&optional __can_lros_carcfgvehtype_ford)
   (if __can_lros_carcfgvehtype_ford (setq _can_lros_carcfgvehtype_ford __can_lros_carcfgvehtype_ford)) _can_lros_carcfgvehtype_ford)
  (:can_lros_carcfgengine_ford
   (&optional __can_lros_carcfgengine_ford)
   (if __can_lros_carcfgengine_ford (setq _can_lros_carcfgengine_ford __can_lros_carcfgengine_ford)) _can_lros_carcfgengine_ford)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int8 _k_radar_azimuth_polarity
    1
    ;; float32 _can_fa_vert_ground_offset
    4
    ;; float32 _can_fa_vert_lower_limit
    4
    ;; float32 _can_fa_vert_upper_limit
    4
    ;; uint8 _can_lros_carcfgvehtype_ford
    1
    ;; uint8 _can_lros_carcfgengine_ford
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int8 _k_radar_azimuth_polarity
       (write-byte _k_radar_azimuth_polarity s)
     ;; float32 _can_fa_vert_ground_offset
       (sys::poke _can_fa_vert_ground_offset (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_fa_vert_lower_limit
       (sys::poke _can_fa_vert_lower_limit (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_fa_vert_upper_limit
       (sys::poke _can_fa_vert_upper_limit (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_lros_carcfgvehtype_ford
       (write-byte _can_lros_carcfgvehtype_ford s)
     ;; uint8 _can_lros_carcfgengine_ford
       (write-byte _can_lros_carcfgengine_ford s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int8 _k_radar_azimuth_polarity
     (setq _k_radar_azimuth_polarity (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _k_radar_azimuth_polarity 127) (setq _k_radar_azimuth_polarity (- _k_radar_azimuth_polarity 256)))
   ;; float32 _can_fa_vert_ground_offset
     (setq _can_fa_vert_ground_offset (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_fa_vert_lower_limit
     (setq _can_fa_vert_lower_limit (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_fa_vert_upper_limit
     (setq _can_fa_vert_upper_limit (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_lros_carcfgvehtype_ford
     (setq _can_lros_carcfgvehtype_ford (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_lros_carcfgengine_ford
     (setq _can_lros_carcfgengine_ford (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::LrosCarCfgFord :md5sum-) "6b40261fec542e406fc60f9b9b2d121a")
(setf (get delphi_mrr_msgs::LrosCarCfgFord :datatype-) "delphi_mrr_msgs/LrosCarCfgFord")
(setf (get delphi_mrr_msgs::LrosCarCfgFord :definition-)
      "std_msgs/Header header

int8 	    k_radar_azimuth_polarity
float32  	can_fa_vert_ground_offset
float32  	can_fa_vert_lower_limit
float32  	can_fa_vert_upper_limit
uint8 	  can_lros_carcfgvehtype_ford
uint8 	  can_lros_carcfgengine_ford

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



(provide :delphi_mrr_msgs/LrosCarCfgFord "6b40261fec542e406fc60f9b9b2d121a")


