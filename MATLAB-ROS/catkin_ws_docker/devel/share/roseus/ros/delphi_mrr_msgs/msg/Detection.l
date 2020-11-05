;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::Detection)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'Detection (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::DETECTION")
  (make-package "DELPHI_MRR_MSGS::DETECTION"))

(in-package "ROS")
;;//! \htmlinclude Detection.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::Detection
  :super ros::object
  :slots (_header _detection_id _confid_azimuth _super_res_target _nd_target _host_veh_clutter _valid_level _azimuth _range _range_rate _amplitude _index2lsb ))

(defmethod delphi_mrr_msgs::Detection
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:detection_id __detection_id) 0)
    ((:confid_azimuth __confid_azimuth) 0)
    ((:super_res_target __super_res_target) nil)
    ((:nd_target __nd_target) nil)
    ((:host_veh_clutter __host_veh_clutter) nil)
    ((:valid_level __valid_level) nil)
    ((:azimuth __azimuth) 0.0)
    ((:range __range) 0)
    ((:range_rate __range_rate) 0)
    ((:amplitude __amplitude) 0)
    ((:index2lsb __index2lsb) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _detection_id (round __detection_id))
   (setq _confid_azimuth (round __confid_azimuth))
   (setq _super_res_target __super_res_target)
   (setq _nd_target __nd_target)
   (setq _host_veh_clutter __host_veh_clutter)
   (setq _valid_level __valid_level)
   (setq _azimuth (float __azimuth))
   (setq _range (round __range))
   (setq _range_rate (round __range_rate))
   (setq _amplitude (round __amplitude))
   (setq _index2lsb (round __index2lsb))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:detection_id
   (&optional __detection_id)
   (if __detection_id (setq _detection_id __detection_id)) _detection_id)
  (:confid_azimuth
   (&optional __confid_azimuth)
   (if __confid_azimuth (setq _confid_azimuth __confid_azimuth)) _confid_azimuth)
  (:super_res_target
   (&optional __super_res_target)
   (if __super_res_target (setq _super_res_target __super_res_target)) _super_res_target)
  (:nd_target
   (&optional __nd_target)
   (if __nd_target (setq _nd_target __nd_target)) _nd_target)
  (:host_veh_clutter
   (&optional __host_veh_clutter)
   (if __host_veh_clutter (setq _host_veh_clutter __host_veh_clutter)) _host_veh_clutter)
  (:valid_level
   (&optional __valid_level)
   (if __valid_level (setq _valid_level __valid_level)) _valid_level)
  (:azimuth
   (&optional __azimuth)
   (if __azimuth (setq _azimuth __azimuth)) _azimuth)
  (:range
   (&optional __range)
   (if __range (setq _range __range)) _range)
  (:range_rate
   (&optional __range_rate)
   (if __range_rate (setq _range_rate __range_rate)) _range_rate)
  (:amplitude
   (&optional __amplitude)
   (if __amplitude (setq _amplitude __amplitude)) _amplitude)
  (:index2lsb
   (&optional __index2lsb)
   (if __index2lsb (setq _index2lsb __index2lsb)) _index2lsb)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8 _detection_id
    1
    ;; uint8 _confid_azimuth
    1
    ;; bool _super_res_target
    1
    ;; bool _nd_target
    1
    ;; bool _host_veh_clutter
    1
    ;; bool _valid_level
    1
    ;; float64 _azimuth
    8
    ;; uint16 _range
    2
    ;; uint16 _range_rate
    2
    ;; uint8 _amplitude
    1
    ;; uint8 _index2lsb
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8 _detection_id
       (write-byte _detection_id s)
     ;; uint8 _confid_azimuth
       (write-byte _confid_azimuth s)
     ;; bool _super_res_target
       (if _super_res_target (write-byte -1 s) (write-byte 0 s))
     ;; bool _nd_target
       (if _nd_target (write-byte -1 s) (write-byte 0 s))
     ;; bool _host_veh_clutter
       (if _host_veh_clutter (write-byte -1 s) (write-byte 0 s))
     ;; bool _valid_level
       (if _valid_level (write-byte -1 s) (write-byte 0 s))
     ;; float64 _azimuth
       (sys::poke _azimuth (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint16 _range
       (write-word _range s)
     ;; uint16 _range_rate
       (write-word _range_rate s)
     ;; uint8 _amplitude
       (write-byte _amplitude s)
     ;; uint8 _index2lsb
       (write-byte _index2lsb s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8 _detection_id
     (setq _detection_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _confid_azimuth
     (setq _confid_azimuth (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; bool _super_res_target
     (setq _super_res_target (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _nd_target
     (setq _nd_target (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _host_veh_clutter
     (setq _host_veh_clutter (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _valid_level
     (setq _valid_level (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float64 _azimuth
     (setq _azimuth (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint16 _range
     (setq _range (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _range_rate
     (setq _range_rate (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _amplitude
     (setq _amplitude (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _index2lsb
     (setq _index2lsb (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::Detection :md5sum-) "41bb0647e974bbe3192fea3dcc96ae90")
(setf (get delphi_mrr_msgs::Detection :datatype-) "delphi_mrr_msgs/Detection")
(setf (get delphi_mrr_msgs::Detection :definition-)
      "std_msgs/Header header

uint8    detection_id
uint8    confid_azimuth
bool     super_res_target
bool     nd_target
bool     host_veh_clutter
bool     valid_level
float64  azimuth
uint16   range
uint16   range_rate
uint8    amplitude
uint8    index2lsb

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



(provide :delphi_mrr_msgs/Detection "41bb0647e974bbe3192fea3dcc96ae90")


