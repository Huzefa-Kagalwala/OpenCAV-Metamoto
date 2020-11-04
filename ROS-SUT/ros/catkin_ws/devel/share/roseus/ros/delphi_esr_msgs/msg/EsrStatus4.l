;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus4)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus4 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS4")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS4"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus4.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus4
  :super ros::object
  :slots (_header _canmsg _rolling_count3 _mrlr_mode _patial_blockage _side_lobe_blockage _lr_only_grating_lobe_det _truck_target_det _path_id_acc _path_id_cmmb_move _path_id_cmmb_stat _path_id_fcw_move _path_id_fcw_stat _path_id_acc_stat _auto_algin_angle ))

(defmethod delphi_esr_msgs::EsrStatus4
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:rolling_count3 __rolling_count3) 0)
    ((:mrlr_mode __mrlr_mode) 0)
    ((:patial_blockage __patial_blockage) nil)
    ((:side_lobe_blockage __side_lobe_blockage) nil)
    ((:lr_only_grating_lobe_det __lr_only_grating_lobe_det) nil)
    ((:truck_target_det __truck_target_det) nil)
    ((:path_id_acc __path_id_acc) 0)
    ((:path_id_cmmb_move __path_id_cmmb_move) 0)
    ((:path_id_cmmb_stat __path_id_cmmb_stat) 0)
    ((:path_id_fcw_move __path_id_fcw_move) 0)
    ((:path_id_fcw_stat __path_id_fcw_stat) 0)
    ((:path_id_acc_stat __path_id_acc_stat) 0)
    ((:auto_algin_angle __auto_algin_angle) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _rolling_count3 (round __rolling_count3))
   (setq _mrlr_mode (round __mrlr_mode))
   (setq _patial_blockage __patial_blockage)
   (setq _side_lobe_blockage __side_lobe_blockage)
   (setq _lr_only_grating_lobe_det __lr_only_grating_lobe_det)
   (setq _truck_target_det __truck_target_det)
   (setq _path_id_acc (round __path_id_acc))
   (setq _path_id_cmmb_move (round __path_id_cmmb_move))
   (setq _path_id_cmmb_stat (round __path_id_cmmb_stat))
   (setq _path_id_fcw_move (round __path_id_fcw_move))
   (setq _path_id_fcw_stat (round __path_id_fcw_stat))
   (setq _path_id_acc_stat (round __path_id_acc_stat))
   (setq _auto_algin_angle (float __auto_algin_angle))
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
  (:rolling_count3
   (&optional __rolling_count3)
   (if __rolling_count3 (setq _rolling_count3 __rolling_count3)) _rolling_count3)
  (:mrlr_mode
   (&optional __mrlr_mode)
   (if __mrlr_mode (setq _mrlr_mode __mrlr_mode)) _mrlr_mode)
  (:patial_blockage
   (&optional __patial_blockage)
   (if __patial_blockage (setq _patial_blockage __patial_blockage)) _patial_blockage)
  (:side_lobe_blockage
   (&optional __side_lobe_blockage)
   (if __side_lobe_blockage (setq _side_lobe_blockage __side_lobe_blockage)) _side_lobe_blockage)
  (:lr_only_grating_lobe_det
   (&optional __lr_only_grating_lobe_det)
   (if __lr_only_grating_lobe_det (setq _lr_only_grating_lobe_det __lr_only_grating_lobe_det)) _lr_only_grating_lobe_det)
  (:truck_target_det
   (&optional __truck_target_det)
   (if __truck_target_det (setq _truck_target_det __truck_target_det)) _truck_target_det)
  (:path_id_acc
   (&optional __path_id_acc)
   (if __path_id_acc (setq _path_id_acc __path_id_acc)) _path_id_acc)
  (:path_id_cmmb_move
   (&optional __path_id_cmmb_move)
   (if __path_id_cmmb_move (setq _path_id_cmmb_move __path_id_cmmb_move)) _path_id_cmmb_move)
  (:path_id_cmmb_stat
   (&optional __path_id_cmmb_stat)
   (if __path_id_cmmb_stat (setq _path_id_cmmb_stat __path_id_cmmb_stat)) _path_id_cmmb_stat)
  (:path_id_fcw_move
   (&optional __path_id_fcw_move)
   (if __path_id_fcw_move (setq _path_id_fcw_move __path_id_fcw_move)) _path_id_fcw_move)
  (:path_id_fcw_stat
   (&optional __path_id_fcw_stat)
   (if __path_id_fcw_stat (setq _path_id_fcw_stat __path_id_fcw_stat)) _path_id_fcw_stat)
  (:path_id_acc_stat
   (&optional __path_id_acc_stat)
   (if __path_id_acc_stat (setq _path_id_acc_stat __path_id_acc_stat)) _path_id_acc_stat)
  (:auto_algin_angle
   (&optional __auto_algin_angle)
   (if __auto_algin_angle (setq _auto_algin_angle __auto_algin_angle)) _auto_algin_angle)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _rolling_count3
    1
    ;; uint8 _mrlr_mode
    1
    ;; bool _patial_blockage
    1
    ;; bool _side_lobe_blockage
    1
    ;; bool _lr_only_grating_lobe_det
    1
    ;; bool _truck_target_det
    1
    ;; uint8 _path_id_acc
    1
    ;; uint8 _path_id_cmmb_move
    1
    ;; uint8 _path_id_cmmb_stat
    1
    ;; uint8 _path_id_fcw_move
    1
    ;; uint8 _path_id_fcw_stat
    1
    ;; uint8 _path_id_acc_stat
    1
    ;; float32 _auto_algin_angle
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
     ;; uint8 _rolling_count3
       (write-byte _rolling_count3 s)
     ;; uint8 _mrlr_mode
       (write-byte _mrlr_mode s)
     ;; bool _patial_blockage
       (if _patial_blockage (write-byte -1 s) (write-byte 0 s))
     ;; bool _side_lobe_blockage
       (if _side_lobe_blockage (write-byte -1 s) (write-byte 0 s))
     ;; bool _lr_only_grating_lobe_det
       (if _lr_only_grating_lobe_det (write-byte -1 s) (write-byte 0 s))
     ;; bool _truck_target_det
       (if _truck_target_det (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _path_id_acc
       (write-byte _path_id_acc s)
     ;; uint8 _path_id_cmmb_move
       (write-byte _path_id_cmmb_move s)
     ;; uint8 _path_id_cmmb_stat
       (write-byte _path_id_cmmb_stat s)
     ;; uint8 _path_id_fcw_move
       (write-byte _path_id_fcw_move s)
     ;; uint8 _path_id_fcw_stat
       (write-byte _path_id_fcw_stat s)
     ;; uint8 _path_id_acc_stat
       (write-byte _path_id_acc_stat s)
     ;; float32 _auto_algin_angle
       (sys::poke _auto_algin_angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _rolling_count3
     (setq _rolling_count3 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _mrlr_mode
     (setq _mrlr_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _patial_blockage
     (setq _patial_blockage (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _side_lobe_blockage
     (setq _side_lobe_blockage (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _lr_only_grating_lobe_det
     (setq _lr_only_grating_lobe_det (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _truck_target_det
     (setq _truck_target_det (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _path_id_acc
     (setq _path_id_acc (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _path_id_cmmb_move
     (setq _path_id_cmmb_move (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _path_id_cmmb_stat
     (setq _path_id_cmmb_stat (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _path_id_fcw_move
     (setq _path_id_fcw_move (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _path_id_fcw_stat
     (setq _path_id_fcw_stat (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _path_id_acc_stat
     (setq _path_id_acc_stat (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _auto_algin_angle
     (setq _auto_algin_angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus4 :md5sum-) "f7cf3bcce6d7e6a3b7b68f3a7c2726e4")
(setf (get delphi_esr_msgs::EsrStatus4 :datatype-) "delphi_esr_msgs/EsrStatus4")
(setf (get delphi_esr_msgs::EsrStatus4 :definition-)
      "std_msgs/Header header

# ESR status4
string      canmsg
uint8       rolling_count3
uint8       mrlr_mode
bool        patial_blockage
bool        side_lobe_blockage
bool        lr_only_grating_lobe_det
bool        truck_target_det
uint8       path_id_acc
uint8       path_id_cmmb_move
uint8       path_id_cmmb_stat
uint8       path_id_fcw_move
uint8       path_id_fcw_stat
uint8       path_id_acc_stat
float32     auto_algin_angle



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



(provide :delphi_esr_msgs/EsrStatus4 "f7cf3bcce6d7e6a3b7b68f3a7c2726e4")


