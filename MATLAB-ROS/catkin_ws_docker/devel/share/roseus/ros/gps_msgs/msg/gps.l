;; Auto-generated. Do not edit!


(when (boundp 'gps_msgs::gps)
  (if (not (find-package "GPS_MSGS"))
    (make-package "GPS_MSGS"))
  (shadow 'gps (find-package "GPS_MSGS")))
(unless (find-package "GPS_MSGS::GPS")
  (make-package "GPS_MSGS::GPS"))

(in-package "ROS")
;;//! \htmlinclude gps.msg.html


(defclass gps_msgs::gps
  :super ros::object
  :slots (_latitude _longitude ))

(defmethod gps_msgs::gps
  (:init
   (&key
    ((:latitude __latitude) 0.0)
    ((:longitude __longitude) 0.0)
    )
   (send-super :init)
   (setq _latitude (float __latitude))
   (setq _longitude (float __longitude))
   self)
  (:latitude
   (&optional __latitude)
   (if __latitude (setq _latitude __latitude)) _latitude)
  (:longitude
   (&optional __longitude)
   (if __longitude (setq _longitude __longitude)) _longitude)
  (:serialization-length
   ()
   (+
    ;; float32 _latitude
    4
    ;; float32 _longitude
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _latitude
       (sys::poke _latitude (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _longitude
       (sys::poke _longitude (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _latitude
     (setq _latitude (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _longitude
     (setq _longitude (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get gps_msgs::gps :md5sum-) "9aeb2245d9611f300beeb62a0151d3f3")
(setf (get gps_msgs::gps :datatype-) "gps_msgs/gps")
(setf (get gps_msgs::gps :definition-)
      "float32 latitude
float32 longitude

")



(provide :gps_msgs/gps "9aeb2245d9611f300beeb62a0151d3f3")


