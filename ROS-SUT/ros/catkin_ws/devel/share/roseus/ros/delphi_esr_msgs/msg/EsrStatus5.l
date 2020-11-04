;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus5)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus5 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS5")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS5"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus5.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus5
  :super ros::object
  :slots (_header _canmsg _swbatt_a2d _ignp_a2d _temp1_a2d _temp2_a2d _supply_5v_a _supply_5v_dx _supply_53p_3v _supply_10_v ))

(defmethod delphi_esr_msgs::EsrStatus5
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:swbatt_a2d __swbatt_a2d) 0)
    ((:ignp_a2d __ignp_a2d) 0)
    ((:temp1_a2d __temp1_a2d) 0)
    ((:temp2_a2d __temp2_a2d) 0)
    ((:supply_5v_a __supply_5v_a) 0)
    ((:supply_5v_dx __supply_5v_dx) 0)
    ((:supply_53p_3v __supply_53p_3v) 0)
    ((:supply_10_v __supply_10_v) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _swbatt_a2d (round __swbatt_a2d))
   (setq _ignp_a2d (round __ignp_a2d))
   (setq _temp1_a2d (round __temp1_a2d))
   (setq _temp2_a2d (round __temp2_a2d))
   (setq _supply_5v_a (round __supply_5v_a))
   (setq _supply_5v_dx (round __supply_5v_dx))
   (setq _supply_53p_3v (round __supply_53p_3v))
   (setq _supply_10_v (round __supply_10_v))
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
  (:swbatt_a2d
   (&optional __swbatt_a2d)
   (if __swbatt_a2d (setq _swbatt_a2d __swbatt_a2d)) _swbatt_a2d)
  (:ignp_a2d
   (&optional __ignp_a2d)
   (if __ignp_a2d (setq _ignp_a2d __ignp_a2d)) _ignp_a2d)
  (:temp1_a2d
   (&optional __temp1_a2d)
   (if __temp1_a2d (setq _temp1_a2d __temp1_a2d)) _temp1_a2d)
  (:temp2_a2d
   (&optional __temp2_a2d)
   (if __temp2_a2d (setq _temp2_a2d __temp2_a2d)) _temp2_a2d)
  (:supply_5v_a
   (&optional __supply_5v_a)
   (if __supply_5v_a (setq _supply_5v_a __supply_5v_a)) _supply_5v_a)
  (:supply_5v_dx
   (&optional __supply_5v_dx)
   (if __supply_5v_dx (setq _supply_5v_dx __supply_5v_dx)) _supply_5v_dx)
  (:supply_53p_3v
   (&optional __supply_53p_3v)
   (if __supply_53p_3v (setq _supply_53p_3v __supply_53p_3v)) _supply_53p_3v)
  (:supply_10_v
   (&optional __supply_10_v)
   (if __supply_10_v (setq _supply_10_v __supply_10_v)) _supply_10_v)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _swbatt_a2d
    1
    ;; uint8 _ignp_a2d
    1
    ;; uint8 _temp1_a2d
    1
    ;; uint8 _temp2_a2d
    1
    ;; uint8 _supply_5v_a
    1
    ;; uint8 _supply_5v_dx
    1
    ;; uint8 _supply_53p_3v
    1
    ;; uint8 _supply_10_v
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
     ;; uint8 _swbatt_a2d
       (write-byte _swbatt_a2d s)
     ;; uint8 _ignp_a2d
       (write-byte _ignp_a2d s)
     ;; uint8 _temp1_a2d
       (write-byte _temp1_a2d s)
     ;; uint8 _temp2_a2d
       (write-byte _temp2_a2d s)
     ;; uint8 _supply_5v_a
       (write-byte _supply_5v_a s)
     ;; uint8 _supply_5v_dx
       (write-byte _supply_5v_dx s)
     ;; uint8 _supply_53p_3v
       (write-byte _supply_53p_3v s)
     ;; uint8 _supply_10_v
       (write-byte _supply_10_v s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _swbatt_a2d
     (setq _swbatt_a2d (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _ignp_a2d
     (setq _ignp_a2d (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _temp1_a2d
     (setq _temp1_a2d (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _temp2_a2d
     (setq _temp2_a2d (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _supply_5v_a
     (setq _supply_5v_a (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _supply_5v_dx
     (setq _supply_5v_dx (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _supply_53p_3v
     (setq _supply_53p_3v (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _supply_10_v
     (setq _supply_10_v (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus5 :md5sum-) "e6dd803ab75c77da3bbe6f55a701a0ea")
(setf (get delphi_esr_msgs::EsrStatus5 :datatype-) "delphi_esr_msgs/EsrStatus5")
(setf (get delphi_esr_msgs::EsrStatus5 :definition-)
      "std_msgs/Header header

# ESR status5
string      canmsg
uint8       swbatt_a2d
uint8       ignp_a2d
uint8       temp1_a2d
uint8       temp2_a2d
uint8       supply_5v_a
uint8       supply_5v_dx
uint8       supply_53p_3v
uint8       supply_10_v



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



(provide :delphi_esr_msgs/EsrStatus5 "e6dd803ab75c77da3bbe6f55a701a0ea")


