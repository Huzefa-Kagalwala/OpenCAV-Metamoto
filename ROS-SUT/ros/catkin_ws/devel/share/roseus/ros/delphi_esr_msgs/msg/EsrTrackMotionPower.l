;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::EsrTrackMotionPower)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'EsrTrackMotionPower (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::ESRTRACKMOTIONPOWER")
  (make-package "DELPHI_ESR_MSGS::ESRTRACKMOTIONPOWER"))

(in-package "ROS")
;;//! \htmlinclude EsrTrackMotionPower.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_esr_msgs::EsrTrackMotionPower
  :super ros::object
  :slots (_header _canmsg _rolling_count _group_id _tracks ))

(defmethod delphi_esr_msgs::EsrTrackMotionPower
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:canmsg __canmsg) "")
    ((:rolling_count __rolling_count) 0)
    ((:group_id __group_id) 0)
    ((:tracks __tracks) (let (r) (dotimes (i 0) (push (instance delphi_esr_msgs::TrackMotionPower :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _canmsg (string __canmsg))
   (setq _rolling_count (round __rolling_count))
   (setq _group_id (round __group_id))
   (setq _tracks __tracks)
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
  (:rolling_count
   (&optional __rolling_count)
   (if __rolling_count (setq _rolling_count __rolling_count)) _rolling_count)
  (:group_id
   (&optional __group_id)
   (if __group_id (setq _group_id __group_id)) _group_id)
  (:tracks
   (&rest __tracks)
   (if (keywordp (car __tracks))
       (send* _tracks __tracks)
     (progn
       (if __tracks (setq _tracks (car __tracks)))
       _tracks)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _canmsg
    4 (length _canmsg)
    ;; uint8 _rolling_count
    1
    ;; uint8 _group_id
    1
    ;; delphi_esr_msgs/TrackMotionPower[] _tracks
    (apply #'+ (send-all _tracks :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _canmsg
       (write-long (length _canmsg) s) (princ _canmsg s)
     ;; uint8 _rolling_count
       (write-byte _rolling_count s)
     ;; uint8 _group_id
       (write-byte _group_id s)
     ;; delphi_esr_msgs/TrackMotionPower[] _tracks
     (write-long (length _tracks) s)
     (dolist (elem _tracks)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _canmsg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _canmsg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint8 _rolling_count
     (setq _rolling_count (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _group_id
     (setq _group_id (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; delphi_esr_msgs/TrackMotionPower[] _tracks
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _tracks (let (r) (dotimes (i n) (push (instance delphi_esr_msgs::TrackMotionPower :init) r)) r))
     (dolist (elem- _tracks)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get delphi_esr_msgs::EsrTrackMotionPower :md5sum-) "c8b6ca4d7b49b9f380f75c5de7ed6095")
(setf (get delphi_esr_msgs::EsrTrackMotionPower :datatype-) "delphi_esr_msgs/EsrTrackMotionPower")
(setf (get delphi_esr_msgs::EsrTrackMotionPower :definition-)
      "std_msgs/Header header

# ESR TrackMotionPower Msg
string                              canmsg
uint8                               rolling_count
uint8                               group_id
delphi_esr_msgs/TrackMotionPower[]  tracks

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

================================================================================
MSG: delphi_esr_msgs/TrackMotionPower
bool  movable_fast
bool  movable_slow
bool  moving
int8  power

")



(provide :delphi_esr_msgs/EsrTrackMotionPower "c8b6ca4d7b49b9f380f75c5de7ed6095")


