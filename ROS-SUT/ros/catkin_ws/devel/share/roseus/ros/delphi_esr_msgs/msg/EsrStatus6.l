;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrStatus6)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrStatus6 (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRSTATUS6")
  (make-package "DELPHI_ESR_MSGS::ESRSTATUS6"))

(in-package "ROS")
;;//! \htmlinclude EsrStatus6.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrStatus6
  :super ros::object
  :slots (_header _canmsg _supply_1p_8v _supply_n_5v _wave_diff_a2d _sw_version_dsp_3rd_byte _vertical_algin_updated _system_power_mode _found_target _recommend_unconverge _factory_algin_status1 _factory_algin_status2 _factory_mis_alginment _serv_algin_updates_done _vertical_mis_alginment ))

(defmethod delphi_esr_msgs::EsrStatus6
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:supply_1p_8v __supply_1p_8v) 0)
    ((:supply_n_5v __supply_n_5v) 0)
    ((:wave_diff_a2d __wave_diff_a2d) 0)
    ((:sw_version_dsp_3rd_byte __sw_version_dsp_3rd_byte) 0)
    ((:vertical_algin_updated __vertical_algin_updated) nil)
    ((:system_power_mode __system_power_mode) 0)
    ((:found_target __found_target) nil)
    ((:recommend_unconverge __recommend_unconverge) nil)
    ((:factory_algin_status1 __factory_algin_status1) 0)
    ((:factory_algin_status2 __factory_algin_status2) 0)
    ((:factory_mis_alginment __factory_mis_alginment) 0.0)
    ((:serv_algin_updates_done __serv_algin_updates_done) 0)
    ((:vertical_mis_alginment __vertical_mis_alginment) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _supply_1p_8v (round __supply_1p_8v))
   (setq _supply_n_5v (round __supply_n_5v))
   (setq _wave_diff_a2d (round __wave_diff_a2d))
   (setq _sw_version_dsp_3rd_byte (round __sw_version_dsp_3rd_byte))
   (setq _vertical_algin_updated __vertical_algin_updated)
   (setq _system_power_mode (round __system_power_mode))
   (setq _found_target __found_target)
   (setq _recommend_unconverge __recommend_unconverge)
   (setq _factory_algin_status1 (round __factory_algin_status1))
   (setq _factory_algin_status2 (round __factory_algin_status2))
   (setq _factory_mis_alginment (float __factory_mis_alginment))
   (setq _serv_algin_updates_done (round __serv_algin_updates_done))
   (setq _vertical_mis_alginment (float __vertical_mis_alginment))
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
  (:supply_1p_8v
   (&optional __supply_1p_8v)
   (if __supply_1p_8v (setq _supply_1p_8v __supply_1p_8v)) _supply_1p_8v)
  (:supply_n_5v
   (&optional __supply_n_5v)
   (if __supply_n_5v (setq _supply_n_5v __supply_n_5v)) _supply_n_5v)
  (:wave_diff_a2d
   (&optional __wave_diff_a2d)
   (if __wave_diff_a2d (setq _wave_diff_a2d __wave_diff_a2d)) _wave_diff_a2d)
  (:sw_version_dsp_3rd_byte
   (&optional __sw_version_dsp_3rd_byte)
   (if __sw_version_dsp_3rd_byte (setq _sw_version_dsp_3rd_byte __sw_version_dsp_3rd_byte)) _sw_version_dsp_3rd_byte)
  (:vertical_algin_updated
   (&optional __vertical_algin_updated)
   (if __vertical_algin_updated (setq _vertical_algin_updated __vertical_algin_updated)) _vertical_algin_updated)
  (:system_power_mode
   (&optional __system_power_mode)
   (if __system_power_mode (setq _system_power_mode __system_power_mode)) _system_power_mode)
  (:found_target
   (&optional __found_target)
   (if __found_target (setq _found_target __found_target)) _found_target)
  (:recommend_unconverge
   (&optional __recommend_unconverge)
   (if __recommend_unconverge (setq _recommend_unconverge __recommend_unconverge)) _recommend_unconverge)
  (:factory_algin_status1
   (&optional __factory_algin_status1)
   (if __factory_algin_status1 (setq _factory_algin_status1 __factory_algin_status1)) _factory_algin_status1)
  (:factory_algin_status2
   (&optional __factory_algin_status2)
   (if __factory_algin_status2 (setq _factory_algin_status2 __factory_algin_status2)) _factory_algin_status2)
  (:factory_mis_alginment
   (&optional __factory_mis_alginment)
   (if __factory_mis_alginment (setq _factory_mis_alginment __factory_mis_alginment)) _factory_mis_alginment)
  (:serv_algin_updates_done
   (&optional __serv_algin_updates_done)
   (if __serv_algin_updates_done (setq _serv_algin_updates_done __serv_algin_updates_done)) _serv_algin_updates_done)
  (:vertical_mis_alginment
   (&optional __vertical_mis_alginment)
   (if __vertical_mis_alginment (setq _vertical_mis_alginment __vertical_mis_alginment)) _vertical_mis_alginment)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _supply_1p_8v
    1
    ;; uint8 _supply_n_5v
    1
    ;; uint8 _wave_diff_a2d
    1
    ;; uint8 _sw_version_dsp_3rd_byte
    1
    ;; bool _vertical_algin_updated
    1
    ;; uint8 _system_power_mode
    1
    ;; bool _found_target
    1
    ;; bool _recommend_unconverge
    1
    ;; uint8 _factory_algin_status1
    1
    ;; uint8 _factory_algin_status2
    1
    ;; float32 _factory_mis_alginment
    4
    ;; uint8 _serv_algin_updates_done
    1
    ;; float32 _vertical_mis_alginment
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
     ;; uint8 _supply_1p_8v
       (write-byte _supply_1p_8v s)
     ;; uint8 _supply_n_5v
       (write-byte _supply_n_5v s)
     ;; uint8 _wave_diff_a2d
       (write-byte _wave_diff_a2d s)
     ;; uint8 _sw_version_dsp_3rd_byte
       (write-byte _sw_version_dsp_3rd_byte s)
     ;; bool _vertical_algin_updated
       (if _vertical_algin_updated (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _system_power_mode
       (write-byte _system_power_mode s)
     ;; bool _found_target
       (if _found_target (write-byte -1 s) (write-byte 0 s))
     ;; bool _recommend_unconverge
       (if _recommend_unconverge (write-byte -1 s) (write-byte 0 s))
     ;; uint8 _factory_algin_status1
       (write-byte _factory_algin_status1 s)
     ;; uint8 _factory_algin_status2
       (write-byte _factory_algin_status2 s)
     ;; float32 _factory_mis_alginment
       (sys::poke _factory_mis_alginment (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _serv_algin_updates_done
       (write-byte _serv_algin_updates_done s)
     ;; float32 _vertical_mis_alginment
       (sys::poke _vertical_mis_alginment (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _supply_1p_8v
     (setq _supply_1p_8v (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _supply_n_5v
     (setq _supply_n_5v (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _wave_diff_a2d
     (setq _wave_diff_a2d (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _sw_version_dsp_3rd_byte
     (setq _sw_version_dsp_3rd_byte (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _vertical_algin_updated
     (setq _vertical_algin_updated (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _system_power_mode
     (setq _system_power_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _found_target
     (setq _found_target (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _recommend_unconverge
     (setq _recommend_unconverge (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; uint8 _factory_algin_status1
     (setq _factory_algin_status1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _factory_algin_status2
     (setq _factory_algin_status2 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _factory_mis_alginment
     (setq _factory_mis_alginment (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _serv_algin_updates_done
     (setq _serv_algin_updates_done (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _vertical_mis_alginment
     (setq _vertical_mis_alginment (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrStatus6 :md5sum-) "d0f0f9e72f36d0edc6c699e8188282b7")
(setf (get delphi_esr_msgs::EsrStatus6 :datatype-) "delphi_esr_msgs/EsrStatus6")
(setf (get delphi_esr_msgs::EsrStatus6 :definition-)
      "std_msgs/Header header

# ESR status6
string      canmsg
uint8       supply_1p_8v
uint8       supply_n_5v
uint8       wave_diff_a2d
uint8       sw_version_dsp_3rd_byte
bool        vertical_algin_updated
uint8       system_power_mode
bool        found_target
bool        recommend_unconverge
uint8       factory_algin_status1
uint8       factory_algin_status2
float32     factory_mis_alginment
uint8       serv_algin_updates_done
float32     vertical_mis_alginment

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



(provide :delphi_esr_msgs/EsrStatus6 "d0f0f9e72f36d0edc6c699e8188282b7")


