;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::IFVStatusCompensated)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'IFVStatusCompensated (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::IFVSTATUSCOMPENSATED")
  (make-package "DELPHI_MRR_MSGS::IFVSTATUSCOMPENSATED"))

(in-package "ROS")
;;//! \htmlinclude IFVStatusCompensated.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::IFVStatusCompensated
  :super ros::object
  :slots (_header _can_yaw_rate_calc_qf _can_yaw_rate_calc _can_yaw_rate_bias _can_vehicle_speed_calc _can_veh_spd_comp_factor ))

(defmethod delphi_mrr_msgs::IFVStatusCompensated
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_yaw_rate_calc_qf __can_yaw_rate_calc_qf) 0)
    ((:can_yaw_rate_calc __can_yaw_rate_calc) 0.0)
    ((:can_yaw_rate_bias __can_yaw_rate_bias) 0.0)
    ((:can_vehicle_speed_calc __can_vehicle_speed_calc) 0.0)
    ((:can_veh_spd_comp_factor __can_veh_spd_comp_factor) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_yaw_rate_calc_qf (round __can_yaw_rate_calc_qf))
   (setq _can_yaw_rate_calc (float __can_yaw_rate_calc))
   (setq _can_yaw_rate_bias (float __can_yaw_rate_bias))
   (setq _can_vehicle_speed_calc (float __can_vehicle_speed_calc))
   (setq _can_veh_spd_comp_factor (float __can_veh_spd_comp_factor))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_yaw_rate_calc_qf
   (&optional __can_yaw_rate_calc_qf)
   (if __can_yaw_rate_calc_qf (setq _can_yaw_rate_calc_qf __can_yaw_rate_calc_qf)) _can_yaw_rate_calc_qf)
  (:can_yaw_rate_calc
   (&optional __can_yaw_rate_calc)
   (if __can_yaw_rate_calc (setq _can_yaw_rate_calc __can_yaw_rate_calc)) _can_yaw_rate_calc)
  (:can_yaw_rate_bias
   (&optional __can_yaw_rate_bias)
   (if __can_yaw_rate_bias (setq _can_yaw_rate_bias __can_yaw_rate_bias)) _can_yaw_rate_bias)
  (:can_vehicle_speed_calc
   (&optional __can_vehicle_speed_calc)
   (if __can_vehicle_speed_calc (setq _can_vehicle_speed_calc __can_vehicle_speed_calc)) _can_vehicle_speed_calc)
  (:can_veh_spd_comp_factor
   (&optional __can_veh_spd_comp_factor)
   (if __can_veh_spd_comp_factor (setq _can_veh_spd_comp_factor __can_veh_spd_comp_factor)) _can_veh_spd_comp_factor)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _can_yaw_rate_calc_qf
    1
    ;; float32 _can_yaw_rate_calc
    4
    ;; float32 _can_yaw_rate_bias
    4
    ;; float32 _can_vehicle_speed_calc
    4
    ;; float32 _can_veh_spd_comp_factor
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _can_yaw_rate_calc_qf
       (write-byte _can_yaw_rate_calc_qf s)
     ;; float32 _can_yaw_rate_calc
       (sys::poke _can_yaw_rate_calc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_yaw_rate_bias
       (sys::poke _can_yaw_rate_bias (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_vehicle_speed_calc
       (sys::poke _can_vehicle_speed_calc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_veh_spd_comp_factor
       (sys::poke _can_veh_spd_comp_factor (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _can_yaw_rate_calc_qf
     (setq _can_yaw_rate_calc_qf (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _can_yaw_rate_calc
     (setq _can_yaw_rate_calc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_yaw_rate_bias
     (setq _can_yaw_rate_bias (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_vehicle_speed_calc
     (setq _can_vehicle_speed_calc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_veh_spd_comp_factor
     (setq _can_veh_spd_comp_factor (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::IFVStatusCompensated :md5sum-) "273b2128306b82c1d31a3b67f601a030")
(setf (get delphi_mrr_msgs::IFVStatusCompensated :datatype-) "delphi_mrr_msgs/IFVStatusCompensated")
(setf (get delphi_mrr_msgs::IFVStatusCompensated :definition-)
      "std_msgs/Header header

uint8 can_yaw_rate_calc_qf
float32 can_yaw_rate_calc
float32 can_yaw_rate_bias
float32 can_vehicle_speed_calc
float32 can_veh_spd_comp_factor

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



(provide :delphi_mrr_msgs/IFVStatusCompensated "273b2128306b82c1d31a3b67f601a030")


