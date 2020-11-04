;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus3)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus3 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS3")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS3"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus3.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus3
  :super ros::object
  :slots (_header _canmsg _hw_version _interface_version _sw_version_pld _sw_version_host _serial_num ))

(defmethod delphi_esr_msgs::EsrStatus3
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:hw_version __hw_version) 0)
    ((:interface_version __interface_version) 0)
    ((:sw_version_pld __sw_version_pld) 0)
    ((:sw_version_host __sw_version_host) "")
    ((:serial_num __serial_num) "")
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _hw_version (round __hw_version))
   (setq _interface_version (round __interface_version))
   (setq _sw_version_pld (round __sw_version_pld))
   (setq _sw_version_host (string __sw_version_host))
   (setq _serial_num (string __serial_num))
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
  (:hw_version
   (&optional __hw_version)
   (if __hw_version (setq _hw_version __hw_version)) _hw_version)
  (:interface_version
   (&optional __interface_version)
   (if __interface_version (setq _interface_version __interface_version)) _interface_version)
  (:sw_version_pld
   (&optional __sw_version_pld)
   (if __sw_version_pld (setq _sw_version_pld __sw_version_pld)) _sw_version_pld)
  (:sw_version_host
   (&optional __sw_version_host)
   (if __sw_version_host (setq _sw_version_host __sw_version_host)) _sw_version_host)
  (:serial_num
   (&optional __serial_num)
   (if __serial_num (setq _serial_num __serial_num)) _serial_num)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _hw_version
    1
    ;; uint8 _interface_version
    1
    ;; uint8 _sw_version_pld
    1
    ;; string _sw_version_host
    4 (length _sw_version_host)
    ;; string _serial_num
    4 (length _serial_num)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _canmsg
       (write-long (length _canmsg) s) (princ _canmsg s)
     ;; uint8 _hw_version
       (write-byte _hw_version s)
     ;; uint8 _interface_version
       (write-byte _interface_version s)
     ;; uint8 _sw_version_pld
       (write-byte _sw_version_pld s)
     ;; string _sw_version_host
       (write-long (length _sw_version_host) s) (princ _sw_version_host s)
     ;; string _serial_num
       (write-long (length _serial_num) s) (princ _serial_num s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _hw_version
     (setq _hw_version (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _interface_version
     (setq _interface_version (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _sw_version_pld
     (setq _sw_version_pld (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; string _sw_version_host
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _sw_version_host (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _serial_num
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _serial_num (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus3 :md5sum-) "60e72509c2610c2d5c20ae20e41b7178")
(setf (get delphi_esr_msgs::EsrStatus3 :datatype-) "delphi_esr_msgs/EsrStatus3")
(setf (get delphi_esr_msgs::EsrStatus3 :definition-)
      "std_msgs/Header header

# ESR status3
string      canmsg
uint8       hw_version
uint8       interface_version
uint8       sw_version_pld
string      sw_version_host
string      serial_num

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



(provide :delphi_esr_msgs/EsrStatus3 "60e72509c2610c2d5c20ae20e41b7178")


