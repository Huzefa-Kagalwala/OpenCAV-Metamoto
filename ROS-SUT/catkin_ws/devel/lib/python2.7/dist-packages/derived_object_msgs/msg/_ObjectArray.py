# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from derived_object_msgs/ObjectArray.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import derived_object_msgs.msg
import shape_msgs.msg
import std_msgs.msg

class ObjectArray(genpy.Message):
  _md5sum = "492c83cd255b9a57845d0c197d7977be"
  _type = "derived_object_msgs/ObjectArray"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

derived_object_msgs/Object[] objects

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
MSG: derived_object_msgs/Object
# This represents a detected or tracked object with reference coordinate frame and timestamp.

std_msgs/Header header

# The id of the object (presumably from the detecting sensor).
uint32 id

# A Detected object is one which has been seen in at least one scan/frame of a sensor.
# A Tracked object is one which has been correlated over multiple scans/frames of a sensor.
# An object which is detected can only be assumed to have valid pose and shape properties.
# An object which is tracked should also be assumed to have valid twist and accel properties.
uint8 detection_level
uint8 OBJECT_DETECTED=0
uint8 OBJECT_TRACKED=1

# A Classified object is one which has been identified as a certain object type.
# Classified objects should have valid classification, classification_certainty, and classification_age properties.
bool object_classified

# The detected position and orientation of the object.
geometry_msgs/Pose pose

# The detected linear and angular velocities of the object.
geometry_msgs/Twist twist

# The detected linear and angular accelerations of the object.
geometry_msgs/Accel accel

# (OPTIONAL) The polygon defining the detection points at the outer edges of the object.
geometry_msgs/Polygon polygon

# A shape conforming to the outer bounding edges of the object.
shape_msgs/SolidPrimitive shape

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
MSG: shape_msgs/SolidPrimitive
# Define box, sphere, cylinder, cone 
# All shapes are defined to have their bounding boxes centered around 0,0,0.

uint8 BOX=1
uint8 SPHERE=2
uint8 CYLINDER=3
uint8 CONE=4

# The type of the shape
uint8 type


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
"""
  __slots__ = ['header','objects']
  _slot_types = ['std_msgs/Header','derived_object_msgs/Object[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,objects

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjectArray, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.objects is None:
        self.objects = []
    else:
      self.header = std_msgs.msg.Header()
      self.objects = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.objects:
        _v1 = val1.header
        buff.write(_get_struct_I().pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_I2B().pack(_x.id, _x.detection_level, _x.object_classified))
        _v3 = val1.pose
        _v4 = _v3.position
        _x = _v4
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v5 = _v3.orientation
        _x = _v5
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _v6 = val1.twist
        _v7 = _v6.linear
        _x = _v7
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v8 = _v6.angular
        _x = _v8
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v9 = val1.accel
        _v10 = _v9.linear
        _x = _v10
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v11 = _v9.angular
        _x = _v11
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v12 = val1.polygon
        length = len(_v12.points)
        buff.write(_struct_I.pack(length))
        for val3 in _v12.points:
          _x = val3
          buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
        _v13 = val1.shape
        buff.write(_get_struct_B().pack(_v13.type))
        length = len(_v13.dimensions)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(struct.pack(pattern, *_v13.dimensions))
        _x = val1
        buff.write(_get_struct_2BI().pack(_x.classification, _x.classification_certainty, _x.classification_age))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.objects is None:
        self.objects = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.objects = []
      for i in range(0, length):
        val1 = derived_object_msgs.msg.Object()
        _v14 = val1.header
        start = end
        end += 4
        (_v14.seq,) = _get_struct_I().unpack(str[start:end])
        _v15 = _v14.stamp
        _x = _v15
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v14.frame_id = str[start:end].decode('utf-8')
        else:
          _v14.frame_id = str[start:end]
        _x = val1
        start = end
        end += 6
        (_x.id, _x.detection_level, _x.object_classified,) = _get_struct_I2B().unpack(str[start:end])
        val1.object_classified = bool(val1.object_classified)
        _v16 = val1.pose
        _v17 = _v16.position
        _x = _v17
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v18 = _v16.orientation
        _x = _v18
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _v19 = val1.twist
        _v20 = _v19.linear
        _x = _v20
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v21 = _v19.angular
        _x = _v21
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v22 = val1.accel
        _v23 = _v22.linear
        _x = _v23
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v24 = _v22.angular
        _x = _v24
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v25 = val1.polygon
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v25.points = []
        for i in range(0, length):
          val3 = geometry_msgs.msg.Point32()
          _x = val3
          start = end
          end += 12
          (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
          _v25.points.append(val3)
        _v26 = val1.shape
        start = end
        end += 1
        (_v26.type,) = _get_struct_B().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v26.dimensions = struct.unpack(pattern, str[start:end])
        _x = val1
        start = end
        end += 6
        (_x.classification, _x.classification_certainty, _x.classification_age,) = _get_struct_2BI().unpack(str[start:end])
        self.objects.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.objects:
        _v27 = val1.header
        buff.write(_get_struct_I().pack(_v27.seq))
        _v28 = _v27.stamp
        _x = _v28
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v27.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_I2B().pack(_x.id, _x.detection_level, _x.object_classified))
        _v29 = val1.pose
        _v30 = _v29.position
        _x = _v30
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v31 = _v29.orientation
        _x = _v31
        buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
        _v32 = val1.twist
        _v33 = _v32.linear
        _x = _v33
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v34 = _v32.angular
        _x = _v34
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v35 = val1.accel
        _v36 = _v35.linear
        _x = _v36
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v37 = _v35.angular
        _x = _v37
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
        _v38 = val1.polygon
        length = len(_v38.points)
        buff.write(_struct_I.pack(length))
        for val3 in _v38.points:
          _x = val3
          buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.z))
        _v39 = val1.shape
        buff.write(_get_struct_B().pack(_v39.type))
        length = len(_v39.dimensions)
        buff.write(_struct_I.pack(length))
        pattern = '<%sd'%length
        buff.write(_v39.dimensions.tostring())
        _x = val1
        buff.write(_get_struct_2BI().pack(_x.classification, _x.classification_certainty, _x.classification_age))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.objects is None:
        self.objects = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.objects = []
      for i in range(0, length):
        val1 = derived_object_msgs.msg.Object()
        _v40 = val1.header
        start = end
        end += 4
        (_v40.seq,) = _get_struct_I().unpack(str[start:end])
        _v41 = _v40.stamp
        _x = _v41
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v40.frame_id = str[start:end].decode('utf-8')
        else:
          _v40.frame_id = str[start:end]
        _x = val1
        start = end
        end += 6
        (_x.id, _x.detection_level, _x.object_classified,) = _get_struct_I2B().unpack(str[start:end])
        val1.object_classified = bool(val1.object_classified)
        _v42 = val1.pose
        _v43 = _v42.position
        _x = _v43
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v44 = _v42.orientation
        _x = _v44
        start = end
        end += 32
        (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
        _v45 = val1.twist
        _v46 = _v45.linear
        _x = _v46
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v47 = _v45.angular
        _x = _v47
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v48 = val1.accel
        _v49 = _v48.linear
        _x = _v49
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v50 = _v48.angular
        _x = _v50
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        _v51 = val1.polygon
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v51.points = []
        for i in range(0, length):
          val3 = geometry_msgs.msg.Point32()
          _x = val3
          start = end
          end += 12
          (_x.x, _x.y, _x.z,) = _get_struct_3f().unpack(str[start:end])
          _v51.points.append(val3)
        _v52 = val1.shape
        start = end
        end += 1
        (_v52.type,) = _get_struct_B().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%sd'%length
        start = end
        end += struct.calcsize(pattern)
        _v52.dimensions = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
        _x = val1
        start = end
        end += 6
        (_x.classification, _x.classification_certainty, _x.classification_age,) = _get_struct_2BI().unpack(str[start:end])
        self.objects.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_2BI = None
def _get_struct_2BI():
    global _struct_2BI
    if _struct_2BI is None:
        _struct_2BI = struct.Struct("<2BI")
    return _struct_2BI
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_I2B = None
def _get_struct_I2B():
    global _struct_I2B
    if _struct_I2B is None:
        _struct_I2B = struct.Struct("<I2B")
    return _struct_I2B
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
