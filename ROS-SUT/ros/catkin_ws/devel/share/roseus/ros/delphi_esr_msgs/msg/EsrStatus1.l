;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus1)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus1 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS1")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS1"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus1.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus1
  :super ros::object
  :slots (_header _canmsg _time_stamp _rolling_count _comm_error _curvature _scan_id _yaw_rate _vehicle_speed_calc ))

(defmethod delphi_esr_msgs::EsrStatus1
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:time_stamp __time_stamp) 0)
    ((:rolling_count __rolling_count) 0)
    ((:comm_error __comm_error) nil)
    ((:curvature __curvature) 0)
    ((:scan_id __scan_id) 0)
    ((:yaw_rate __yaw_rate) 0.0)
    ((:vehicle_speed_calc __vehicle_speed_calc) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _time_stamp (round __time_stamp))
   (setq _rolling_count (round __rolling_count))
   (setq _comm_error __comm_error)
   (setq _curvature (round __curvature))
   (setq _scan_id (round __scan_id))
   (setq _yaw_rate (float __yaw_rate))
   (setq _vehicle_speed_calc (float __vehicle_speed_calc))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:canmsg
   (&optional __canmsg)
   (if __canmsg (setq _canmsg __canmsg)) _canmsg)
  (:time_stamp
   (&optional __time_stamp)
   (if __time_stamp (setq _time_stamp __time_stamp)) _time_stamp)
  (:rolling_count
   (&optional __rolling_count)
   (if __rolling_count (setq _rolling_count __rolling_count)) _rolling_count)
  (:comm_error
   (&optional __comm_error)
   (if __comm_error (setq _comm_error __comm_error)) _comm_error)
  (:curvature
   (&optional __curvature)
   (if __curvature (setq _curvature __curvature)) _curvature)
  (:scan_id
   (&optional __scan_id)
   (if __scan_id (setq _scan_id __scan_id)) _scan_id)
  (:yaw_rate
   (&optional __yaw_rate)
   (if __yaw_rate (setq _yaw_rate __yaw_rate)) _yaw_rate)
  (:vehicle_speed_calc
   (&optional __vehicle_speed_calc)
   (if __vehicle_speed_calc (setq _vehicle_speed_calc __vehicle_speed_calc)) _vehicle_speed_calc)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _time_stamp
    1
    ;; uint8 _rolling_count
    1
    ;; bool _comm_error
    1
    ;; int16 _curvature
    2
    ;; uint16 _scan_id
    2
    ;; float32 _yaw_rate
    4
    ;; float32 _vehicle_speed_calc
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _canmsg
       (write-long (length _canmsg) s) (princ _canmsg s)
     ;; uint8 _time_stamp
       (write-byte _time_stamp s)
     ;; uint8 _rolling_count
       (write-byte _rolling_count s)
     ;; bool _comm_error
       (if _comm_error (write-byte -1 s) (write-byte 0 s))
     ;; int16 _curvature
       (write-word _curvature s)
     ;; uint16 _scan_id
       (write-word _scan_id s)
     ;; float32 _yaw_rate
       (sys::poke _yaw_rate (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _vehicle_speed_calc
       (sys::poke _vehicle_speed_calc (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _time_stamp
     (setq _time_stamp (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _rolling_count
     (setq _rolling_count (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _comm_error
     (setq _comm_error (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int16 _curvature
     (setq _curvature (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _scan_id
     (setq _scan_id (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float32 _yaw_rate
     (setq _yaw_rate (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _vehicle_speed_calc
     (setq _vehicle_speed_calc (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus1 :md5sum-) "8f96a58d642c579a639b0c54f121d1ed")
(setf (get delphi_esr_msgs::EsrStatus1 :datatype-) "delphi_esr_msgs/EsrStatus1")
(setf (get delphi_esr_msgs::EsrStatus1 :definition-)
      "std_msgs/Header header

# ESR status1
string      canmsg
uint8       time_stamp
uint8       rolling_count
bool        comm_error
int16       curvature
uint16      scan_id
float32     yaw_rate
float32     vehicle_speed_calc


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



(provide :delphi_esr_msgs/EsrStatus1 "8f96a58d642c579a639b0c54f121d1ed")


