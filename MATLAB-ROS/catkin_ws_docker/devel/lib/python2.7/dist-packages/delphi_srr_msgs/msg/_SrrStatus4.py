# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_srr_msgs/SrrStatus4.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class SrrStatus4(genpy.Message):
  _md5sum = "8f5e5c4790453e1f3bcd5507dd8162bd"
  _type = "delphi_srr_msgs/SrrStatus4"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# Message file for srr_status4

std_msgs/Header header

uint16    can_tx_sw_version_host
uint8     can_tx_path_id_blis_ignore
uint8     can_tx_path_id_blis
float32   can_tx_angle_misalignment
float32   can_tx_auto_align_angle

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
"""
  __slots__ = ['header','can_tx_sw_version_host','can_tx_path_id_blis_ignore','can_tx_path_id_blis','can_tx_angle_misalignment','can_tx_auto_align_angle']
  _slot_types = ['std_msgs/Header','uint16','uint8','uint8','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,can_tx_sw_version_host,can_tx_path_id_blis_ignore,can_tx_path_id_blis,can_tx_angle_misalignment,can_tx_auto_align_angle

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SrrStatus4, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.can_tx_sw_version_host is None:
        self.can_tx_sw_version_host = 0
      if self.can_tx_path_id_blis_ignore is None:
        self.can_tx_path_id_blis_ignore = 0
      if self.can_tx_path_id_blis is None:
        self.can_tx_path_id_blis = 0
      if self.can_tx_angle_misalignment is None:
        self.can_tx_angle_misalignment = 0.
      if self.can_tx_auto_align_angle is None:
        self.can_tx_auto_align_angle = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.can_tx_sw_version_host = 0
      self.can_tx_path_id_blis_ignore = 0
      self.can_tx_path_id_blis = 0
      self.can_tx_angle_misalignment = 0.
      self.can_tx_auto_align_angle = 0.

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
      _x = self
      buff.write(_get_struct_H2B2f().pack(_x.can_tx_sw_version_host, _x.can_tx_path_id_blis_ignore, _x.can_tx_path_id_blis, _x.can_tx_angle_misalignment, _x.can_tx_auto_align_angle))
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
      _x = self
      start = end
      end += 12
      (_x.can_tx_sw_version_host, _x.can_tx_path_id_blis_ignore, _x.can_tx_path_id_blis, _x.can_tx_angle_misalignment, _x.can_tx_auto_align_angle,) = _get_struct_H2B2f().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_H2B2f().pack(_x.can_tx_sw_version_host, _x.can_tx_path_id_blis_ignore, _x.can_tx_path_id_blis, _x.can_tx_angle_misalignment, _x.can_tx_auto_align_angle))
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
      _x = self
      start = end
      end += 12
      (_x.can_tx_sw_version_host, _x.can_tx_path_id_blis_ignore, _x.can_tx_path_id_blis, _x.can_tx_angle_misalignment, _x.can_tx_auto_align_angle,) = _get_struct_H2B2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_H2B2f = None
def _get_struct_H2B2f():
    global _struct_H2B2f
    if _struct_H2B2f is None:
        _struct_H2B2f = struct.Struct("<H2B2f")
    return _struct_H2B2f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
