;; Auto-generated. Do not edit!


(when (boundp 'derived_object_msgs::ObjectWithCovarianceArray)
  (if (not (find-package "DERIVED_OBJECT_MSGS"))
    (make-package "DERIVED_OBJECT_MSGS"))
  (shadow 'ObjectWithCovarianceArray (find-package "DERIVED_OBJECT_MSGS")))
(unless (find-package "DERIVED_OBJECT_MSGS::OBJECTWITHCOVARIANCEARRAY")
  (make-package "DERIVED_OBJECT_MSGS::OBJECTWITHCOVARIANCEARRAY"))

(in-package "ROS")
;;//! \htmlinclude ObjectWithCovarianceArray.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass derived_object_msgs::ObjectWithCovarianceArray
  :super ros::object
  :slots (_header _objects ))

(defmethod derived_object_msgs::ObjectWithCovarianceArray
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:objects __objects) (let (r) (dotimes (i 0) (push (instance derived_object_msgs::ObjectWithCovariance :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _objects __objects)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:objects
   (&rest __objects)
   (if (keywordp (car __objects))
       (send* _objects __objects)
     (progn
       (if __objects (setq _objects (car __objects)))
       _objects)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; derived_object_msgs/ObjectWithCovariance[] _objects
    (apply #'+ (send-all _objects :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; derived_object_msgs/ObjectWithCovariance[] _objects
     (write-long (length _objects) s)
     (dolist (elem _objects)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; derived_object_msgs/ObjectWithCovariance[] _objects
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _objects (let (r) (dotimes (i n) (push (instance derived_object_msgs::ObjectWithCovariance :init) r)) r))
     (dolist (elem- _objects)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get derived_object_msgs::ObjectWithCovarianceArray :md5sum-) "59dfdf4ed3407a2558ccbc7f5732bf46")
(setf (get derived_object_msgs::ObjectWithCovarianceArray :datatype-) "derived_object_msgs/ObjectWithCovarianceArray")
(setf (get derived_object_msgs::ObjectWithCovarianceArray :definition-)
      "std_msgs/Header header

derived_object_msgs/ObjectWithCovariance[] objects

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
MSG: derived_object_msgs/ObjectWithCovariance
# This represents an estimated object with reference coordinate frame and timestamp.
std_msgs/Header header

# The id of the object (presumably from the detecting sensor).
uint32 id

# A Detected object is one which has been seen in at least one scan/frame of a sensor.
# A Tracked object is one which has been correlated over multiple scans/frames of a sensor.
# An object which is detected can only be assumed to have valid pose and shape properties.
# An object which is tracked should also be assumed to have valid twist and accel properties.
# The validity of the individual components of each object property are defined by the property's covariance matrix.
uint8 detection_level
uint8 OBJECT_DETECTED=0
uint8 OBJECT_TRACKED=1

# A Classified object is one which has been identified as a certain object type.
# Classified objects should have valid classification, classification_certainty, and classification_age properties.
bool object_classified

# The detected position and orientation of the object.
geometry_msgs/PoseWithCovariance pose

# The detected linear and angular velocities of the object.
geometry_msgs/TwistWithCovariance twist

# The detected linear and angular accelerations of the object.
geometry_msgs/AccelWithCovariance accel

# (OPTIONAL) The polygon defining the detection points at the outer edges of the object.
geometry_msgs/Polygon polygon

# A shape conforming to the outer bounding edges of the object.
derived_object_msgs/SolidPrimitiveWithCovariance shape

# The type of classification given to this object.
uint8 classification
uint8 CLASSIFICATION_UNKNOWN=0
uint8 CLASSIFICATION_UNKNOWN_SMALL=1
uint8 CLASSIFICATION_UNKNOWN_MEDIUM=2
uint8 CLASSIFICATION_UNKNOWN_BIG=3
uint8 CLASSIFICATION_PEDESTRIAN=4
uint8 CLASSIFICATION_BIKE=5
uint8 CLASSIFICATION_CAR=6
uint8 CLASSIFICATION_TRUCK=7
uint8 CLASSIFICATION_MOTORCYCLE=8
uint8 CLASSIFICATION_OTHER_VEHICLE=9
uint8 CLASSIFICATION_BARRIER=10
uint8 CLASSIFICATION_SIGN=11

# The certainty of the classification from the originating sensor.
# Higher value indicates greater certainty (MAX=255).
# It is recommended that a native sensor value be scaled to 0-255 for interoperability.
uint8 classification_certainty

# The number of scans/frames from the sensor that this object has been classified as the current classification.
uint32 classification_age

================================================================================
MSG: geometry_msgs/PoseWithCovariance
# This represents a pose in free space with uncertainty.

Pose pose

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/TwistWithCovariance
# This expresses velocity in free space with uncertainty.

Twist twist

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

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
================================================================================
MSG: geometry_msgs/AccelWithCovariance
# This expresses acceleration in free space with uncertainty.

Accel accel

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
float64[36] covariance

================================================================================
MSG: geometry_msgs/Accel
# This expresses acceleration in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

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
MSG: derived_object_msgs/SolidPrimitiveWithCovariance
# Define box, sphere, cylinder, cone 
# All shapes are defined to have their bounding boxes centered around 0,0,0.
# This message based on shape_msgs/SolidPrimitive

# The type of the shape
uint8 type
uint8 BOX=1
uint8 SPHERE=2
uint8 CYLINDER=3
uint8 CONE=4

# The dimensions of the shape
float64[] dimensions

# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array
# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding
# sides of the box.
uint8 BOX_X=0
uint8 BOX_Y=1
uint8 BOX_Z=2

# For the SPHERE type, only one component is used, and it gives the radius of
# the sphere.
uint8 SPHERE_RADIUS=0

# For the CYLINDER and CONE types, the center line is oriented along
# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component
# of dimensions gives the height of the cylinder (cone).  The
# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the
# radius of the base of the cylinder (cone).  Cone and cylinder
# primitives are defined to be circular. The tip of the cone is
# pointing up, along +Z axis.
uint8 CYLINDER_HEIGHT=0
uint8 CYLINDER_RADIUS=1

uint8 CONE_HEIGHT=0
uint8 CONE_RADIUS=1

# Row-major representation of the covariance matrix associated with the shape.
# For the BOX type, this should be a 3x3 matrix defining the uncertainty of the X, Y, and Z measurements.
# For the SPHERE type, this should contain only one value for the radius.
# For the CYLINDER and CONE types, this will be a 2x2 matrix defining the uncertainty of the HEIGHT and RADIUS measurements.
float64[] covariance

")



(provide :derived_object_msgs/ObjectWithCovarianceArray "59dfdf4ed3407a2558ccbc7f5732bf46")


