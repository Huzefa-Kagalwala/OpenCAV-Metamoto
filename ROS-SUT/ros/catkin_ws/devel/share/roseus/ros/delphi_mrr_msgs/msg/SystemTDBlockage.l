;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::SystemTDBlockage)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'SystemTDBlockage (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::SYSTEMTDBLOCKAGE")
  (make-package "DELPHI_MRR_MSGS::SYSTEMTDBLOCKAGE"))

(in-package "ROS")
;;//! \htmlinclude SystemTDBlockage.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::SystemTDBlockage
  :super ros::object
  :slots (_header _can_number_of_tracks_stat _can_number_of_tracks_mov _can_td_scan_counter _can_found_target _can_blockage_td ))

(defmethod delphi_mrr_msgs::SystemTDBlockage
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:can_number_of_tracks_stat __can_number_of_tracks_stat) 0)
    ((:can_number_of_tracks_mov __can_number_of_tracks_mov) 0)
    ((:can_td_scan_counter __can_td_scan_counter) 0)
    ((:can_found_target __can_found_target) nil)
    ((:can_blockage_td __can_blockage_td) nil)
    )
   (send-super :init)
   (setq _header __header)
   (setq _can_number_of_tracks_stat (round __can_number_of_tracks_stat))
   (setq _can_number_of_tracks_mov (round __can_number_of_tracks_mov))
   (setq _can_td_scan_counter (round __can_td_scan_counter))
   (setq _can_found_target __can_found_target)
   (setq _can_blockage_td __can_blockage_td)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:can_number_of_tracks_stat
   (&optional __can_number_of_tracks_stat)
   (if __can_number_of_tracks_stat (setq _can_number_of_tracks_stat __can_number_of_tracks_stat)) _can_number_of_tracks_stat)
  (:can_number_of_tracks_mov
   (&optional __can_number_of_tracks_mov)
   (if __can_number_of_tracks_mov (setq _can_number_of_tracks_mov __can_number_of_tracks_mov)) _can_number_of_tracks_mov)
  (:can_td_scan_counter
   (&optional __can_td_scan_counter)
   (if __can_td_scan_counter (setq _can_td_scan_counter __can_td_scan_counter)) _can_td_scan_counter)
  (:can_found_target
   (&optional __can_found_target)
   (if __can_found_target (setq _can_found_target __can_found_target)) _can_found_target)
  (:can_blockage_td
   (&optional __can_blockage_td)
   (if __can_blockage_td (setq _can_blockage_td __can_blockage_td)) _can_blockage_td)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _can_number_of_tracks_stat
    1
    ;; uint8 _can_number_of_tracks_mov
    1
    ;; uint8 _can_td_scan_counter
    1
    ;; bool _can_found_target
    1
    ;; bool _can_blockage_td
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _can_number_of_tracks_stat
       (write-byte _can_number_of_tracks_stat s)
     ;; uint8 _can_number_of_tracks_mov
       (write-byte _can_number_of_tracks_mov s)
     ;; uint8 _can_td_scan_counter
       (write-byte _can_td_scan_counter s)
     ;; bool _can_found_target
       (if _can_found_target (write-byte -1 s) (write-byte 0 s))
     ;; bool _can_blockage_td
       (if _can_blockage_td (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _can_number_of_tracks_stat
     (setq _can_number_of_tracks_stat (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_number_of_tracks_mov
     (setq _can_number_of_tracks_mov (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _can_td_scan_counter
     (setq _can_td_scan_counter (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _can_found_target
     (setq _can_found_target (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _can_blockage_td
     (setq _can_blockage_td (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::SystemTDBlockage :md5sum-) "550b50a6768c4163e9261901e2c34d80")
(setf (get delphi_mrr_msgs::SystemTDBlockage :datatype-) "delphi_mrr_msgs/SystemTDBlockage")
(setf (get delphi_mrr_msgs::SystemTDBlockage :definition-)
      "std_msgs/Header header

uint8 	can_number_of_tracks_stat
uint8 	can_number_of_tracks_mov
uint8 	can_td_scan_counter
bool   	can_found_target
bool    can_blockage_td

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



(provide :delphi_mrr_msgs/SystemTDBlockage "550b50a6768c4163e9261901e2c34d80")


