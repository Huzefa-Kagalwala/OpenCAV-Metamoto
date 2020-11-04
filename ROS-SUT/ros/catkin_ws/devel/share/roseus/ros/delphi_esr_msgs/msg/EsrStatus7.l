;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus7)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus7 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS7")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS7"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus7.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus7
  :super ros::object
  :slots (_header _canmsg _active_fault0 _active_fault1 _active_fault2 _active_fault3 _active_fault4 _active_fault5 _active_fault6 _active_fault7 ))

(defmethod delphi_esr_msgs::EsrStatus7
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:active_fault0 __active_fault0) 0)
    ((:active_fault1 __active_fault1) 0)
    ((:active_fault2 __active_fault2) 0)
    ((:active_fault3 __active_fault3) 0)
    ((:active_fault4 __active_fault4) 0)
    ((:active_fault5 __active_fault5) 0)
    ((:active_fault6 __active_fault6) 0)
    ((:active_fault7 __active_fault7) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _active_fault0 (round __active_fault0))
   (setq _active_fault1 (round __active_fault1))
   (setq _active_fault2 (round __active_fault2))
   (setq _active_fault3 (round __active_fault3))
   (setq _active_fault4 (round __active_fault4))
   (setq _active_fault5 (round __active_fault5))
   (setq _active_fault6 (round __active_fault6))
   (setq _active_fault7 (round __active_fault7))
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
  (:active_fault0
   (&optional __active_fault0)
   (if __active_fault0 (setq _active_fault0 __active_fault0)) _active_fault0)
  (:active_fault1
   (&optional __active_fault1)
   (if __active_fault1 (setq _active_fault1 __active_fault1)) _active_fault1)
  (:active_fault2
   (&optional __active_fault2)
   (if __active_fault2 (setq _active_fault2 __active_fault2)) _active_fault2)
  (:active_fault3
   (&optional __active_fault3)
   (if __active_fault3 (setq _active_fault3 __active_fault3)) _active_fault3)
  (:active_fault4
   (&optional __active_fault4)
   (if __active_fault4 (setq _active_fault4 __active_fault4)) _active_fault4)
  (:active_fault5
   (&optional __active_fault5)
   (if __active_fault5 (setq _active_fault5 __active_fault5)) _active_fault5)
  (:active_fault6
   (&optional __active_fault6)
   (if __active_fault6 (setq _active_fault6 __active_fault6)) _active_fault6)
  (:active_fault7
   (&optional __active_fault7)
   (if __active_fault7 (setq _active_fault7 __active_fault7)) _active_fault7)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _active_fault0
    1
    ;; uint8 _active_fault1
    1
    ;; uint8 _active_fault2
    1
    ;; uint8 _active_fault3
    1
    ;; uint8 _active_fault4
    1
    ;; uint8 _active_fault5
    1
    ;; uint8 _active_fault6
    1
    ;; uint8 _active_fault7
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _canmsg
       (write-long (length _canmsg) s) (princ _canmsg s)
     ;; uint8 _active_fault0
       (write-byte _active_fault0 s)
     ;; uint8 _active_fault1
       (write-byte _active_fault1 s)
     ;; uint8 _active_fault2
       (write-byte _active_fault2 s)
     ;; uint8 _active_fault3
       (write-byte _active_fault3 s)
     ;; uint8 _active_fault4
       (write-byte _active_fault4 s)
     ;; uint8 _active_fault5
       (write-byte _active_fault5 s)
     ;; uint8 _active_fault6
       (write-byte _active_fault6 s)
     ;; uint8 _active_fault7
       (write-byte _active_fault7 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _active_fault0
     (setq _active_fault0 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault1
     (setq _active_fault1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault2
     (setq _active_fault2 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault3
     (setq _active_fault3 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault4
     (setq _active_fault4 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault5
     (setq _active_fault5 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault6
     (setq _active_fault6 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _active_fault7
     (setq _active_fault7 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus7 :md5sum-) "b42bcace404e10fd5ee3631fdf186959")
(setf (get delphi_esr_msgs::EsrStatus7 :datatype-) "delphi_esr_msgs/EsrStatus7")
(setf (get delphi_esr_msgs::EsrStatus7 :definition-)
      "std_msgs/Header header

# ESR status7
string      canmsg
uint8       active_fault0
uint8       active_fault1
uint8       active_fault2
uint8       active_fault3
uint8       active_fault4
uint8       active_fault5
uint8       active_fault6
uint8       active_fault7

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



(provide :delphi_esr_msgs/EsrStatus7 "b42bcace404e10fd5ee3631fdf186959")


