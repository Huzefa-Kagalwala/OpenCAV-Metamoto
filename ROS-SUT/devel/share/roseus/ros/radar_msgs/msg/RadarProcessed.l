;; Auto-generated. Do not edit!


(when (boundp 'radar_msgs::RadarProcessed)
  (if (not (find-package "RADAR_MSGS"))
    (make-package "RADAR_MSGS"))
  (shadow 'RadarProcessed (find-package "RADAR_MSGS")))
(unless (find-package "RADAR_MSGS::RADARPROCESSED")
  (make-package "RADAR_MSGS::RADARPROCESSED"))

(in-package "ROS")
;;//! \htmlinclude RadarProcessed.msg.html


(defclass radar_msgs::RadarProcessed
  :super ros::object
  :slots (_object_type _range ))

(defmethod radar_msgs::RadarProcessed
  (:init
   (&key
    ((:object_type __object_type) 0)
    ((:range __range) 0.0)
    )
   (send-super :init)
   (setq _object_type (round __object_type))
   (setq _range (float __range))
   self)
  (:object_type
   (&optional __object_type)
   (if __object_type (setq _object_type __object_type)) _object_type)
  (:range
   (&optional __range)
   (if __range (setq _range __range)) _range)
  (:serialization-length
   ()
   (+
    ;; uint16 _object_type
    2
    ;; float64 _range
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint16 _object_type
       (write-word _object_type s)
     ;; float64 _range
       (sys::poke _range (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint16 _object_type
     (setq _object_type (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; float64 _range
     (setq _range (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get radar_msgs::RadarProcessed :md5sum-) "70dc93b14bad2d82dec80476656b3685")
(setf (get radar_msgs::RadarProcessed :datatype-) "radar_msgs/RadarProcessed")
(setf (get radar_msgs::RadarProcessed :definition-)
      "uint16 object_type
float64 range

")



(provide :radar_msgs/RadarProcessed "70dc93b14bad2d82dec80476656b3685")


