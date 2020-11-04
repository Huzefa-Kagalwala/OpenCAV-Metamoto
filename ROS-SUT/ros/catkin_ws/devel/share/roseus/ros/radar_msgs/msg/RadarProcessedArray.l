;; Auto-generated. Do not edit!


(when (boundp 'radar_msgs::RadarProcessedArray)
  (if (not (find-package "RADAR_MSGS"))
    (make-package "RADAR_MSGS"))
  (shadow 'RadarProcessedArray (find-package "RADAR_MSGS")))
(unless (find-package "RADAR_MSGS::RADARPROCESSEDARRAY")
  (make-package "RADAR_MSGS::RADARPROCESSEDARRAY"))

(in-package "ROS")
;;//! \htmlinclude RadarProcessedArray.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass radar_msgs::RadarProcessedArray
  :super ros::object
  :slots (_header _groundtruth ))

(defmethod radar_msgs::RadarProcessedArray
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:groundtruth __groundtruth) (let (r) (dotimes (i 0) (push (instance radar_msgs::RadarProcessed :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _groundtruth __groundtruth)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:groundtruth
   (&rest __groundtruth)
   (if (keywordp (car __groundtruth))
       (send* _groundtruth __groundtruth)
     (progn
       (if __groundtruth (setq _groundtruth (car __groundtruth)))
       _groundtruth)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; radar_msgs/RadarProcessed[] _groundtruth
    (apply #'+ (send-all _groundtruth :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; radar_msgs/RadarProcessed[] _groundtruth
     (write-long (length _groundtruth) s)
     (dolist (elem _groundtruth)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; radar_msgs/RadarProcessed[] _groundtruth
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _groundtruth (let (r) (dotimes (i n) (push (instance radar_msgs::RadarProcessed :init) r)) r))
     (dolist (elem- _groundtruth)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get radar_msgs::RadarProcessedArray :md5sum-) "cf9fa8e0a4edda9688b9f7533e8ed498")
(setf (get radar_msgs::RadarProcessedArray :datatype-) "radar_msgs/RadarProcessedArray")
(setf (get radar_msgs::RadarProcessedArray :definition-)
      "std_msgs/Header header
radar_msgs/RadarProcessed[] groundtruth

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
MSG: radar_msgs/RadarProcessed
uint16 object_type
float64 range

")



(provide :radar_msgs/RadarProcessedArray "cf9fa8e0a4edda9688b9f7533e8ed498")


