;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemStatus)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemStatus (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMSTATUS")
  (make-package "DELPHI_MRR_MSGS::SYSTEMSTATUS"))

(in-package "ROS")
;;//! \htmlinclude SystemStatus.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemStatus
  :super ros::object
  :slots (_header _can_vehicle_stat _can_day_night_status _can_wiper_status _can_yaw_rate_validity _can_yaw_rate _can_vehicle_speed_validity _can_vehicle_speed_direction _can_vehicle_speed ))

(defmethod delphi_mrr_msgs::SystemStatus
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_vehicle_stat __can_vehicle_stat) nil)
    ((:can_day_night_status __can_day_night_status) nil)
    ((:can_wiper_status __can_wiper_status) nil)
    ((:can_yaw_rate_validity __can_yaw_rate_validity) nil)
    ((:can_yaw_rate __can_yaw_rate) 0.0)
    ((:can_vehicle_speed_validity __can_vehicle_speed_validity) nil)
    ((:can_vehicle_speed_direction __can_vehicle_speed_direction) nil)
    ((:can_vehicle_speed __can_vehicle_speed) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_vehicle_stat __can_vehicle_stat)
   (setq _can_day_night_status __can_day_night_status)
   (setq _can_wiper_status __can_wiper_status)
   (setq _can_yaw_rate_validity __can_yaw_rate_validity)
   (setq _can_yaw_rate (float __can_yaw_rate))
   (setq _can_vehicle_speed_validity __can_vehicle_speed_validity)
   (setq _can_vehicle_speed_direction __can_vehicle_speed_direction)
   (setq _can_vehicle_speed (float __can_vehicle_speed))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_vehicle_stat
   (&optional __can_vehicle_stat)
   (if __can_vehicle_stat (setq _can_vehicle_stat __can_vehicle_stat)) _can_vehicle_stat)
  (:can_day_night_status
   (&optional __can_day_night_status)
   (if __can_day_night_status (setq _can_day_night_status __can_day_night_status)) _can_day_night_status)
  (:can_wiper_status
   (&optional __can_wiper_status)
   (if __can_wiper_status (setq _can_wiper_status __can_wiper_status)) _can_wiper_status)
  (:can_yaw_rate_validity
   (&optional __can_yaw_rate_validity)
   (if __can_yaw_rate_validity (setq _can_yaw_rate_validity __can_yaw_rate_validity)) _can_yaw_rate_validity)
  (:can_yaw_rate
   (&optional __can_yaw_rate)
   (if __can_yaw_rate (setq _can_yaw_rate __can_yaw_rate)) _can_yaw_rate)
  (:can_vehicle_speed_validity
   (&optional __can_vehicle_speed_validity)
   (if __can_vehicle_speed_validity (setq _can_vehicle_speed_validity __can_vehicle_speed_validity)) _can_vehicle_speed_validity)
  (:can_vehicle_speed_direction
   (&optional __can_vehicle_speed_direction)
   (if __can_vehicle_speed_direction (setq _can_vehicle_speed_direction __can_vehicle_speed_direction)) _can_vehicle_speed_direction)
  (:can_vehicle_speed
   (&optional __can_vehicle_speed)
   (if __can_vehicle_speed (setq _can_vehicle_speed __can_vehicle_speed)) _can_vehicle_speed)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _can_vehicle_stat
    1
    ;; bool _can_day_night_status
    1
    ;; bool _can_wiper_status
    1
    ;; bool _can_yaw_rate_validity
    1
    ;; float32 _can_yaw_rate
    4
    ;; bool _can_vehicle_speed_validity
    1
    ;; bool _can_vehicle_speed_direction
    1
    ;; float32 _can_vehicle_speed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _can_vehicle_stat
       (if _can_vehicle_stat (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_day_night_status
       (if _can_day_night_status (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_wiper_status
       (if _can_wiper_status (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_yaw_rate_validity
       (if _can_yaw_rate_validity (write-byte -1 s) (write-byte 0 s))
     ;; float32 _can_yaw_rate
       (sys::poke _can_yaw_rate (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; bool _can_vehicle_speed_validity
       (if _can_vehicle_speed_validity (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_vehicle_speed_direction
       (if _can_vehicle_speed_direction (write-byte -1 s) (write-byte 0 s))
     ;; float32 _can_vehicle_speed
       (sys::poke _can_vehicle_speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _can_vehicle_stat
     (setq _can_vehicle_stat (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_day_night_status
     (setq _can_day_night_status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_wiper_status
     (setq _can_wiper_status (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_yaw_rate_validity
     (setq _can_yaw_rate_validity (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float32 _can_yaw_rate
     (setq _can_yaw_rate (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; bool _can_vehicle_speed_validity
     (setq _can_vehicle_speed_validity (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_vehicle_speed_direction
     (setq _can_vehicle_speed_direction (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float32 _can_vehicle_speed
     (setq _can_vehicle_speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemStatus :md5sum-) "f95e8b91cc7c4107288a89a3d6af6f1d")
(setf (get delphi_mrr_msgs::SystemStatus :datatype-) "delphi_mrr_msgs/SystemStatus")
(setf (get delphi_mrr_msgs::SystemStatus :definition-)
      "std_msgs/Header header

bool    can_vehicle_stat
bool    can_day_night_status
bool    can_wiper_status
bool    can_yaw_rate_validity
float32 can_yaw_rate
bool    can_vehicle_speed_validity
bool    can_vehicle_speed_direction
float32 can_vehicle_speed

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



(provide :delphi_mrr_msgs/SystemStatus "f95e8b91cc7c4107288a89a3d6af6f1d")


