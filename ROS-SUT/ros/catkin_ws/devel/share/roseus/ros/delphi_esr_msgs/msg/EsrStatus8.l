;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus8)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus8 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS8")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS8"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus8.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus8
  :super ros::object
  :slots (_header _canmsg _history_fault0 _history_fault1 _history_fault2 _history_fault3 _history_fault4 _history_fault5 _history_fault6 _history_fault7 ))

(defmethod delphi_esr_msgs::EsrStatus8
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:history_fault0 __history_fault0) 0)
    ((:history_fault1 __history_fault1) 0)
    ((:history_fault2 __history_fault2) 0)
    ((:history_fault3 __history_fault3) 0)
    ((:history_fault4 __history_fault4) 0)
    ((:history_fault5 __history_fault5) 0)
    ((:history_fault6 __history_fault6) 0)
    ((:history_fault7 __history_fault7) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _history_fault0 (round __history_fault0))
   (setq _history_fault1 (round __history_fault1))
   (setq _history_fault2 (round __history_fault2))
   (setq _history_fault3 (round __history_fault3))
   (setq _history_fault4 (round __history_fault4))
   (setq _history_fault5 (round __history_fault5))
   (setq _history_fault6 (round __history_fault6))
   (setq _history_fault7 (round __history_fault7))
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
  (:history_fault0
   (&optional __history_fault0)
   (if __history_fault0 (setq _history_fault0 __history_fault0)) _history_fault0)
  (:history_fault1
   (&optional __history_fault1)
   (if __history_fault1 (setq _history_fault1 __history_fault1)) _history_fault1)
  (:history_fault2
   (&optional __history_fault2)
   (if __history_fault2 (setq _history_fault2 __history_fault2)) _history_fault2)
  (:history_fault3
   (&optional __history_fault3)
   (if __history_fault3 (setq _history_fault3 __history_fault3)) _history_fault3)
  (:history_fault4
   (&optional __history_fault4)
   (if __history_fault4 (setq _history_fault4 __history_fault4)) _history_fault4)
  (:history_fault5
   (&optional __history_fault5)
   (if __history_fault5 (setq _history_fault5 __history_fault5)) _history_fault5)
  (:history_fault6
   (&optional __history_fault6)
   (if __history_fault6 (setq _history_fault6 __history_fault6)) _history_fault6)
  (:history_fault7
   (&optional __history_fault7)
   (if __history_fault7 (setq _history_fault7 __history_fault7)) _history_fault7)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _history_fault0
    1
    ;; uint8 _history_fault1
    1
    ;; uint8 _history_fault2
    1
    ;; uint8 _history_fault3
    1
    ;; uint8 _history_fault4
    1
    ;; uint8 _history_fault5
    1
    ;; uint8 _history_fault6
    1
    ;; uint8 _history_fault7
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
     ;; uint8 _history_fault0
       (write-byte _history_fault0 s)
     ;; uint8 _history_fault1
       (write-byte _history_fault1 s)
     ;; uint8 _history_fault2
       (write-byte _history_fault2 s)
     ;; uint8 _history_fault3
       (write-byte _history_fault3 s)
     ;; uint8 _history_fault4
       (write-byte _history_fault4 s)
     ;; uint8 _history_fault5
       (write-byte _history_fault5 s)
     ;; uint8 _history_fault6
       (write-byte _history_fault6 s)
     ;; uint8 _history_fault7
       (write-byte _history_fault7 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _history_fault0
     (setq _history_fault0 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault1
     (setq _history_fault1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault2
     (setq _history_fault2 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault3
     (setq _history_fault3 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault4
     (setq _history_fault4 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault5
     (setq _history_fault5 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault6
     (setq _history_fault6 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _history_fault7
     (setq _history_fault7 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus8 :md5sum-) "12cc314f728c579155b83fab509b20f4")
(setf (get delphi_esr_msgs::EsrStatus8 :datatype-) "delphi_esr_msgs/EsrStatus8")
(setf (get delphi_esr_msgs::EsrStatus8 :definition-)
      "std_msgs/Header header

# ESR status8
string      canmsg
uint8       history_fault0
uint8       history_fault1
uint8       history_fault2
uint8       history_fault3
uint8       history_fault4
uint8       history_fault5
uint8       history_fault6
uint8       history_fault7

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



(provide :delphi_esr_msgs/EsrStatus8 "12cc314f728c579155b83fab509b20f4")


