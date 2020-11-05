;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::MrrStatusSerialNumber)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'MrrStatusSerialNumber (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::MRRSTATUSSERIALNUMBER")
  (make-package "DELPHI_MRR_MSGS::MRRSTATUSSERIALNUMBER"))

(in-package "ROS")
;;//! \htmlinclude MrrStatusSerialNumber.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::MrrStatusSerialNumber
  :super ros::object
  :slots (_header _can_sequence_number _can_serial_number ))

(defmethod delphi_mrr_msgs::MrrStatusSerialNumber
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_sequence_number __can_sequence_number) 0)
    ((:can_serial_number __can_serial_number) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_sequence_number (round __can_sequence_number))
   (setq _can_serial_number (round __can_serial_number))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_sequence_number
   (&optional __can_sequence_number)
   (if __can_sequence_number (setq _can_sequence_number __can_sequence_number)) _can_sequence_number)
  (:can_serial_number
   (&optional __can_serial_number)
   (if __can_serial_number (setq _can_serial_number __can_serial_number)) _can_serial_number)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint16 _can_sequence_number
    2
    ;; uint8 _can_serial_number
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint16 _can_sequence_number
       (write-word _can_sequence_number s)
     ;; uint8 _can_serial_number
       (write-byte _can_serial_number s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint16 _can_sequence_number
     (setq _can_sequence_number (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _can_serial_number
     (setq _can_serial_number (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::MrrStatusSerialNumber :md5sum-) "393ac814c9f7793e6ea633966013ddd8")
(setf (get delphi_mrr_msgs::MrrStatusSerialNumber :datatype-) "delphi_mrr_msgs/MrrStatusSerialNumber")
(setf (get delphi_mrr_msgs::MrrStatusSerialNumber :definition-)
      "std_msgs/Header header

uint16 	can_sequence_number
uint8 	can_serial_number

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



(provide :delphi_mrr_msgs/MrrStatusSerialNumber "393ac814c9f7793e6ea633966013ddd8")


