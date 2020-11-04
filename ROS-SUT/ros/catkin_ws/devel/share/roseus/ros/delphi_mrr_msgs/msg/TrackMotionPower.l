;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::TrackMotionPower)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'TrackMotionPower (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::TRACKMOTIONPOWER")
  (make-package "DELPHI_MRR_MSGS::TRACKMOTIONPOWER"))

(in-package "ROS")
;;//! \htmlinclude TrackMotionPower.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::TrackMotionPower
  :super ros::object
  :slots (_header _movable_fast _movable_slow _moving _power ))

(defmethod delphi_mrr_msgs::TrackMotionPower
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:movable_fast __movable_fast) nil)
    ((:movable_slow __movable_slow) nil)
    ((:moving __moving) nil)
    ((:power __power) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _movable_fast __movable_fast)
   (setq _movable_slow __movable_slow)
   (setq _moving __moving)
   (setq _power (round __power))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:movable_fast
   (&optional __movable_fast)
   (if __movable_fast (setq _movable_fast __movable_fast)) _movable_fast)
  (:movable_slow
   (&optional __movable_slow)
   (if __movable_slow (setq _movable_slow __movable_slow)) _movable_slow)
  (:moving
   (&optional __moving)
   (if __moving (setq _moving __moving)) _moving)
  (:power
   (&optional __power)
   (if __power (setq _power __power)) _power)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool _movable_fast
    1
    ;; bool _movable_slow
    1
    ;; bool _moving
    1
    ;; int8 _power
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool _movable_fast
       (if _movable_fast (write-byte -1 s) (write-byte 0 s))
     ;; bool _movable_slow
       (if _movable_slow (write-byte -1 s) (write-byte 0 s))
     ;; bool _moving
       (if _moving (write-byte -1 s) (write-byte 0 s))
     ;; int8 _power
       (write-byte _power s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool _movable_fast
     (setq _movable_fast (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _movable_slow
     (setq _movable_slow (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _moving
     (setq _moving (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int8 _power
     (setq _power (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _power 127) (setq _power (- _power 256)))
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::TrackMotionPower :md5sum-) "f447d9dc67742a2f5181c95533b78b81")
(setf (get delphi_mrr_msgs::TrackMotionPower :datatype-) "delphi_mrr_msgs/TrackMotionPower")
(setf (get delphi_mrr_msgs::TrackMotionPower :definition-)
      "std_msgs/Header header

bool  movable_fast
bool  movable_slow
bool  moving
int8  power

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



(provide :delphi_mrr_msgs/TrackMotionPower "f447d9dc67742a2f5181c95533b78b81")


