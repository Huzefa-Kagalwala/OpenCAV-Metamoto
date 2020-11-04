;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::XCPMrrCtoReq)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'XCPMrrCtoReq (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::XCPMRRCTOREQ")
  (make-package "DELPHI_MRR_MSGS::XCPMRRCTOREQ"))

(in-package "ROS")
;;//! \htmlinclude XCPMrrCtoReq.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::XCPMrrCtoReq
  :super ros::object
  :slots (_header _mrr_xcp_cto_cmd_byte7 _mrr_xcp_cto_cmd_byte6 _mrr_xcp_cto_cmd_byte5 _mrr_xcp_cto_cmd_byte4 _mrr_xcp_cto_cmd_byte3 _mrr_xcp_cto_cmd_byte2 _mrr_xcp_cto_cmd_byte1 _mrr_xcp_cto_cmd_byte0 ))

(defmethod delphi_mrr_msgs::XCPMrrCtoReq
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:mrr_xcp_cto_cmd_byte7 __mrr_xcp_cto_cmd_byte7) 0)
    ((:mrr_xcp_cto_cmd_byte6 __mrr_xcp_cto_cmd_byte6) 0)
    ((:mrr_xcp_cto_cmd_byte5 __mrr_xcp_cto_cmd_byte5) 0)
    ((:mrr_xcp_cto_cmd_byte4 __mrr_xcp_cto_cmd_byte4) 0)
    ((:mrr_xcp_cto_cmd_byte3 __mrr_xcp_cto_cmd_byte3) 0)
    ((:mrr_xcp_cto_cmd_byte2 __mrr_xcp_cto_cmd_byte2) 0)
    ((:mrr_xcp_cto_cmd_byte1 __mrr_xcp_cto_cmd_byte1) 0)
    ((:mrr_xcp_cto_cmd_byte0 __mrr_xcp_cto_cmd_byte0) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _mrr_xcp_cto_cmd_byte7 (round __mrr_xcp_cto_cmd_byte7))
   (setq _mrr_xcp_cto_cmd_byte6 (round __mrr_xcp_cto_cmd_byte6))
   (setq _mrr_xcp_cto_cmd_byte5 (round __mrr_xcp_cto_cmd_byte5))
   (setq _mrr_xcp_cto_cmd_byte4 (round __mrr_xcp_cto_cmd_byte4))
   (setq _mrr_xcp_cto_cmd_byte3 (round __mrr_xcp_cto_cmd_byte3))
   (setq _mrr_xcp_cto_cmd_byte2 (round __mrr_xcp_cto_cmd_byte2))
   (setq _mrr_xcp_cto_cmd_byte1 (round __mrr_xcp_cto_cmd_byte1))
   (setq _mrr_xcp_cto_cmd_byte0 (round __mrr_xcp_cto_cmd_byte0))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:mrr_xcp_cto_cmd_byte7
   (&optional __mrr_xcp_cto_cmd_byte7)
   (if __mrr_xcp_cto_cmd_byte7 (setq _mrr_xcp_cto_cmd_byte7 __mrr_xcp_cto_cmd_byte7)) _mrr_xcp_cto_cmd_byte7)
  (:mrr_xcp_cto_cmd_byte6
   (&optional __mrr_xcp_cto_cmd_byte6)
   (if __mrr_xcp_cto_cmd_byte6 (setq _mrr_xcp_cto_cmd_byte6 __mrr_xcp_cto_cmd_byte6)) _mrr_xcp_cto_cmd_byte6)
  (:mrr_xcp_cto_cmd_byte5
   (&optional __mrr_xcp_cto_cmd_byte5)
   (if __mrr_xcp_cto_cmd_byte5 (setq _mrr_xcp_cto_cmd_byte5 __mrr_xcp_cto_cmd_byte5)) _mrr_xcp_cto_cmd_byte5)
  (:mrr_xcp_cto_cmd_byte4
   (&optional __mrr_xcp_cto_cmd_byte4)
   (if __mrr_xcp_cto_cmd_byte4 (setq _mrr_xcp_cto_cmd_byte4 __mrr_xcp_cto_cmd_byte4)) _mrr_xcp_cto_cmd_byte4)
  (:mrr_xcp_cto_cmd_byte3
   (&optional __mrr_xcp_cto_cmd_byte3)
   (if __mrr_xcp_cto_cmd_byte3 (setq _mrr_xcp_cto_cmd_byte3 __mrr_xcp_cto_cmd_byte3)) _mrr_xcp_cto_cmd_byte3)
  (:mrr_xcp_cto_cmd_byte2
   (&optional __mrr_xcp_cto_cmd_byte2)
   (if __mrr_xcp_cto_cmd_byte2 (setq _mrr_xcp_cto_cmd_byte2 __mrr_xcp_cto_cmd_byte2)) _mrr_xcp_cto_cmd_byte2)
  (:mrr_xcp_cto_cmd_byte1
   (&optional __mrr_xcp_cto_cmd_byte1)
   (if __mrr_xcp_cto_cmd_byte1 (setq _mrr_xcp_cto_cmd_byte1 __mrr_xcp_cto_cmd_byte1)) _mrr_xcp_cto_cmd_byte1)
  (:mrr_xcp_cto_cmd_byte0
   (&optional __mrr_xcp_cto_cmd_byte0)
   (if __mrr_xcp_cto_cmd_byte0 (setq _mrr_xcp_cto_cmd_byte0 __mrr_xcp_cto_cmd_byte0)) _mrr_xcp_cto_cmd_byte0)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _mrr_xcp_cto_cmd_byte7
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte6
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte5
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte4
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte3
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte2
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte1
    1
    ;; uint8 _mrr_xcp_cto_cmd_byte0
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _mrr_xcp_cto_cmd_byte7
       (write-byte _mrr_xcp_cto_cmd_byte7 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte6
       (write-byte _mrr_xcp_cto_cmd_byte6 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte5
       (write-byte _mrr_xcp_cto_cmd_byte5 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte4
       (write-byte _mrr_xcp_cto_cmd_byte4 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte3
       (write-byte _mrr_xcp_cto_cmd_byte3 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte2
       (write-byte _mrr_xcp_cto_cmd_byte2 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte1
       (write-byte _mrr_xcp_cto_cmd_byte1 s)
     ;; uint8 _mrr_xcp_cto_cmd_byte0
       (write-byte _mrr_xcp_cto_cmd_byte0 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _mrr_xcp_cto_cmd_byte7
     (setq _mrr_xcp_cto_cmd_byte7 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte6
     (setq _mrr_xcp_cto_cmd_byte6 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte5
     (setq _mrr_xcp_cto_cmd_byte5 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte4
     (setq _mrr_xcp_cto_cmd_byte4 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte3
     (setq _mrr_xcp_cto_cmd_byte3 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte2
     (setq _mrr_xcp_cto_cmd_byte2 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte1
     (setq _mrr_xcp_cto_cmd_byte1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrr_xcp_cto_cmd_byte0
     (setq _mrr_xcp_cto_cmd_byte0 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::XCPMrrCtoReq :md5sum-) "f545e57f047f86264c43b7d6b7456576")
(setf (get delphi_mrr_msgs::XCPMrrCtoReq :datatype-) "delphi_mrr_msgs/XCPMrrCtoReq")
(setf (get delphi_mrr_msgs::XCPMrrCtoReq :definition-)
      "std_msgs/Header header

uint8 mrr_xcp_cto_cmd_byte7
uint8 mrr_xcp_cto_cmd_byte6
uint8 mrr_xcp_cto_cmd_byte5
uint8 mrr_xcp_cto_cmd_byte4
uint8 mrr_xcp_cto_cmd_byte3
uint8 mrr_xcp_cto_cmd_byte2
uint8 mrr_xcp_cto_cmd_byte1
uint8 mrr_xcp_cto_cmd_byte0

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



(provide :delphi_mrr_msgs/XCPMrrCtoReq "f545e57f047f86264c43b7d6b7456576")


