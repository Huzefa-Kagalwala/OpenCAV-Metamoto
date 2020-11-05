;; Auto-generated. Do not edit!


(when (boundp 'radar_msgs::RadarTrack)
  (if (not (find-package "RADAR_MSGS"))
    (make-package "RADAR_MSGS"))
  (shadow 'RadarTrack (find-package "RADAR_MSGS")))
(unless (find-package "RADAR_MSGS::RADARTRACK")
  (make-package "RADAR_MSGS::RADARTRACK"))

(in-package "ROS")
;;//! \htmlinclude RadarTrack.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass radar_msgs::RadarTrack
  :super ros::object
  :slots (_track_id _track_shape _linear_velocity _linear_acceleration ))

(defmethod radar_msgs::RadarTrack
  (:init
   (&key
    ((:track_id __track_id) 0)
    ((:track_shape __track_shape) (instance geometry_msgs::Polygon :init))
    ((:linear_velocity __linear_velocity) (instance geometry_msgs::Vector3 :init))
    ((:linear_acceleration __linear_acceleration) (instance geometry_msgs::Vector3 :init))
    )
   (send-super :init)
   (setq _track_id (round __track_id))
   (setq _track_shape __track_shape)
   (setq _linear_velocity __linear_velocity)
   (setq _linear_acceleration __linear_acceleration)
   self)
  (:track_id
   (&optional __track_id)
   (if __track_id (setq _track_id __track_id)) _track_id)
  (:track_shape
   (&rest __track_shape)
   (if (keywordp (car __track_shape))
       (send* _track_shape __track_shape)
     (progn
       (if __track_shape (setq _track_shape (car __track_shape)))
       _track_shape)))
  (:linear_velocity
   (&rest __linear_velocity)
   (if (keywordp (car __linear_velocity))
       (send* _linear_velocity __linear_velocity)
     (progn
       (if __linear_velocity (setq _linear_velocity (car __linear_velocity)))
       _linear_velocity)))
  (:linear_acceleration
   (&rest __linear_acceleration)
   (if (keywordp (car __linear_acceleration))
       (send* _linear_acceleration __linear_acceleration)
     (progn
       (if __linear_acceleration (setq _linear_acceleration (car __linear_acceleration)))
       _linear_acceleration)))
  (:serialization-length
   ()
   (+
    ;; uint16 _track_id
    2
    ;; geometry_msgs/Polygon _track_shape
    (send _track_shape :serialization-length)
    ;; geometry_msgs/Vector3 _linear_velocity
    (send _linear_velocity :serialization-length)
    ;; geometry_msgs/Vector3 _linear_acceleration
    (send _linear_acceleration :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint16 _track_id
       (write-word _track_id s)
     ;; geometry_msgs/Polygon _track_shape
       (send _track_shape :serialize s)
     ;; geometry_msgs/Vector3 _linear_velocity
       (send _linear_velocity :serialize s)
     ;; geometry_msgs/Vector3 _linear_acceleration
       (send _linear_acceleration :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint16 _track_id
     (setq _track_id (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; geometry_msgs/Polygon _track_shape
     (send _track_shape :deserialize buf ptr-) (incf ptr- (send _track_shape :serialization-length))
   ;; geometry_msgs/Vector3 _linear_velocity
     (send _linear_velocity :deserialize buf ptr-) (incf ptr- (send _linear_velocity :serialization-length))
   ;; geometry_msgs/Vector3 _linear_acceleration
     (send _linear_acceleration :deserialize buf ptr-) (incf ptr- (send _linear_acceleration :serialization-length))
   ;;
   self)
  )

(setf (get radar_msgs::RadarTrack :md5sum-) "371627dd284ddde5489009ee4498d083")
(setf (get radar_msgs::RadarTrack :datatype-) "radar_msgs/RadarTrack")
(setf (get radar_msgs::RadarTrack :definition-)
      "#All variables below are relative to the radar's frame of reference.
# This message is not meant to be used alone but as part of a stamped or array message.





uint16 track_id                             # The ID of this track generated by the radar. If
                                            # the radar does not generate IDs, this is intended as
                                            # a sequential identifier for each track in a scan.

geometry_msgs/Polygon track_shape           # The shape and position of the detection. This polygon
                                            # encompasses a 2D plane which approximates the size and
                                            # shape of the detection based on the distance from the
                                            # radar, the detection angle, the width of all detections
                                            # grouped into this track, and the height of the radar's
                                            # vertical field of view at the detection distance.

geometry_msgs/Vector3 linear_velocity       # Only the x and y components are valid.
geometry_msgs/Vector3 linear_acceleration   # Only the x component is valid.

================================================================================
MSG: geometry_msgs/Polygon
#A specification of a polygon where the first and last points are assumed to be connected
Point32[] points

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z
================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :radar_msgs/RadarTrack "371627dd284ddde5489009ee4498d083")

