;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::MrrStatusTempVolt)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'MrrStatusTempVolt (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::MRRSTATUSTEMPVOLT")
  (make-package "DELPHI_MRR_MSGS::MRRSTATUSTEMPVOLT"))

(in-package "ROS")
;;//! \htmlinclude MrrStatusTempVolt.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::MrrStatusTempVolt
  :super ros::object
  :slots (_header _can_mmic_temp1 _can_processor_thermistor _can_processor_temp1 _can_12_5v _can_5v _can_3v3_raw _can_3v3_dac _can_batt_volts ))

(defmethod delphi_mrr_msgs::MrrStatusTempVolt
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_mmic_temp1 __can_mmic_temp1) 0)
    ((:can_processor_thermistor __can_processor_thermistor) 0)
    ((:can_processor_temp1 __can_processor_temp1) 0)
    ((:can_12_5v __can_12_5v) 0.0)
    ((:can_5v __can_5v) 0.0)
    ((:can_3v3_raw __can_3v3_raw) 0.0)
    ((:can_3v3_dac __can_3v3_dac) 0.0)
    ((:can_batt_volts __can_batt_volts) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_mmic_temp1 (round __can_mmic_temp1))
   (setq _can_processor_thermistor (round __can_processor_thermistor))
   (setq _can_processor_temp1 (round __can_processor_temp1))
   (setq _can_12_5v (float __can_12_5v))
   (setq _can_5v (float __can_5v))
   (setq _can_3v3_raw (float __can_3v3_raw))
   (setq _can_3v3_dac (float __can_3v3_dac))
   (setq _can_batt_volts (float __can_batt_volts))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_mmic_temp1
   (&optional __can_mmic_temp1)
   (if __can_mmic_temp1 (setq _can_mmic_temp1 __can_mmic_temp1)) _can_mmic_temp1)
  (:can_processor_thermistor
   (&optional __can_processor_thermistor)
   (if __can_processor_thermistor (setq _can_processor_thermistor __can_processor_thermistor)) _can_processor_thermistor)
  (:can_processor_temp1
   (&optional __can_processor_temp1)
   (if __can_processor_temp1 (setq _can_processor_temp1 __can_processor_temp1)) _can_processor_temp1)
  (:can_12_5v
   (&optional __can_12_5v)
   (if __can_12_5v (setq _can_12_5v __can_12_5v)) _can_12_5v)
  (:can_5v
   (&optional __can_5v)
   (if __can_5v (setq _can_5v __can_5v)) _can_5v)
  (:can_3v3_raw
   (&optional __can_3v3_raw)
   (if __can_3v3_raw (setq _can_3v3_raw __can_3v3_raw)) _can_3v3_raw)
  (:can_3v3_dac
   (&optional __can_3v3_dac)
   (if __can_3v3_dac (setq _can_3v3_dac __can_3v3_dac)) _can_3v3_dac)
  (:can_batt_volts
   (&optional __can_batt_volts)
   (if __can_batt_volts (setq _can_batt_volts __can_batt_volts)) _can_batt_volts)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _can_mmic_temp1
    1
    ;; uint8 _can_processor_thermistor
    1
    ;; uint8 _can_processor_temp1
    1
    ;; float32 _can_12_5v
    4
    ;; float32 _can_5v
    4
    ;; float32 _can_3v3_raw
    4
    ;; float32 _can_3v3_dac
    4
    ;; float32 _can_batt_volts
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _can_mmic_temp1
       (write-byte _can_mmic_temp1 s)
     ;; uint8 _can_processor_thermistor
       (write-byte _can_processor_thermistor s)
     ;; uint8 _can_processor_temp1
       (write-byte _can_processor_temp1 s)
     ;; float32 _can_12_5v
       (sys::poke _can_12_5v (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_5v
       (sys::poke _can_5v (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_3v3_raw
       (sys::poke _can_3v3_raw (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_3v3_dac
       (sys::poke _can_3v3_dac (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _can_batt_volts
       (sys::poke _can_batt_volts (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _can_mmic_temp1
     (setq _can_mmic_temp1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_processor_thermistor
     (setq _can_processor_thermistor (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_processor_temp1
     (setq _can_processor_temp1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _can_12_5v
     (setq _can_12_5v (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_5v
     (setq _can_5v (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_3v3_raw
     (setq _can_3v3_raw (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_3v3_dac
     (setq _can_3v3_dac (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _can_batt_volts
     (setq _can_batt_volts (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::MrrStatusTempVolt :md5sum-) "52765a7a5dd3bd215b60d1ecc9a70758")
(setf (get delphi_mrr_msgs::MrrStatusTempVolt :datatype-) "delphi_mrr_msgs/MrrStatusTempVolt")
(setf (get delphi_mrr_msgs::MrrStatusTempVolt :definition-)
      "std_msgs/Header header

uint8    can_mmic_temp1
uint8    can_processor_thermistor
uint8    can_processor_temp1
float32  can_12_5v
float32  can_5v
float32  can_3v3_raw
float32  can_3v3_dac
float32  can_batt_volts

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



(provide :delphi_mrr_msgs/MrrStatusTempVolt "52765a7a5dd3bd215b60d1ecc9a70758")


