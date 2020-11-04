;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::LrosSignalsActualValues)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'LrosSignalsActualValues (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::LROSSIGNALSACTUALVALUES")
  (make-package "DELPHI_MRR_MSGS::LROSSIGNALSACTUALVALUES"))

(in-package "ROS")
;;//! \htmlinclude LrosSignalsActualValues.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::LrosSignalsActualValues
  :super ros::object
  :slots (_header _can_power_supp_ford _can_power_motive_ford _can_cruise_status_ford _can_veh_batt_volt _can_gear_position _can_ambient_temp _can_ign_status ))

(defmethod delphi_mrr_msgs::LrosSignalsActualValues
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_power_supp_ford __can_power_supp_ford) 0)
    ((:can_power_motive_ford __can_power_motive_ford) 0)
    ((:can_cruise_status_ford __can_cruise_status_ford) 0.0)
    ((:can_veh_batt_volt __can_veh_batt_volt) 0)
    ((:can_gear_position __can_gear_position) 0)
    ((:can_ambient_temp __can_ambient_temp) 0.0)
    ((:can_ign_status __can_ign_status) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_power_supp_ford (round __can_power_supp_ford))
   (setq _can_power_motive_ford (round __can_power_motive_ford))
   (setq _can_cruise_status_ford (float __can_cruise_status_ford))
   (setq _can_veh_batt_volt (round __can_veh_batt_volt))
   (setq _can_gear_position (round __can_gear_position))
   (setq _can_ambient_temp (float __can_ambient_temp))
   (setq _can_ign_status (round __can_ign_status))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_power_supp_ford
   (&optional __can_power_supp_ford)
   (if __can_power_supp_ford (setq _can_power_supp_ford __can_power_supp_ford)) _can_power_supp_ford)
  (:can_power_motive_ford
   (&optional __can_power_motive_ford)
   (if __can_power_motive_ford (setq _can_power_motive_ford __can_power_motive_ford)) _can_power_motive_ford)
  (:can_cruise_status_ford
   (&optional __can_cruise_status_ford)
   (if __can_cruise_status_ford (setq _can_cruise_status_ford __can_cruise_status_ford)) _can_cruise_status_ford)
  (:can_veh_batt_volt
   (&optional __can_veh_batt_volt)
   (if __can_veh_batt_volt (setq _can_veh_batt_volt __can_veh_batt_volt)) _can_veh_batt_volt)
  (:can_gear_position
   (&optional __can_gear_position)
   (if __can_gear_position (setq _can_gear_position __can_gear_position)) _can_gear_position)
  (:can_ambient_temp
   (&optional __can_ambient_temp)
   (if __can_ambient_temp (setq _can_ambient_temp __can_ambient_temp)) _can_ambient_temp)
  (:can_ign_status
   (&optional __can_ign_status)
   (if __can_ign_status (setq _can_ign_status __can_ign_status)) _can_ign_status)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _can_power_supp_ford
    1
    ;; uint8 _can_power_motive_ford
    1
    ;; float32 _can_cruise_status_ford
    4
    ;; uint8 _can_veh_batt_volt
    1
    ;; uint16 _can_gear_position
    2
    ;; float32 _can_ambient_temp
    4
    ;; uint8 _can_ign_status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _can_power_supp_ford
       (write-byte _can_power_supp_ford s)
     ;; uint8 _can_power_motive_ford
       (write-byte _can_power_motive_ford s)
     ;; float32 _can_cruise_status_ford
       (sys::poke _can_cruise_status_ford (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_veh_batt_volt
       (write-byte _can_veh_batt_volt s)
     ;; uint16 _can_gear_position
       (write-word _can_gear_position s)
     ;; float32 _can_ambient_temp
       (sys::poke _can_ambient_temp (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _can_ign_status
       (write-byte _can_ign_status s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _can_power_supp_ford
     (setq _can_power_supp_ford (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_power_motive_ford
     (setq _can_power_motive_ford (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _can_cruise_status_ford
     (setq _can_cruise_status_ford (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_veh_batt_volt
     (setq _can_veh_batt_volt (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint16 _can_gear_position
     (setq _can_gear_position (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32 _can_ambient_temp
     (setq _can_ambient_temp (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _can_ign_status
     (setq _can_ign_status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::LrosSignalsActualValues :md5sum-) "0716096f6271f8e0b8822fbc1fb61142")
(setf (get delphi_mrr_msgs::LrosSignalsActualValues :datatype-) "delphi_mrr_msgs/LrosSignalsActualValues")
(setf (get delphi_mrr_msgs::LrosSignalsActualValues :definition-)
      "std_msgs/Header header

uint8 	  can_power_supp_ford
uint8 	  can_power_motive_ford
float32   can_cruise_status_ford
uint8 	  can_veh_batt_volt
uint16 	  can_gear_position
float32   can_ambient_temp
uint8 	  can_ign_status

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



(provide :delphi_mrr_msgs/LrosSignalsActualValues "0716096f6271f8e0b8822fbc1fb61142")


