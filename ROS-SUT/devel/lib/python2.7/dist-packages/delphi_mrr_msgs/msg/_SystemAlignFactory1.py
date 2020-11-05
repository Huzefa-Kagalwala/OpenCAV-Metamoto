# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_mrr_msgs/SystemAlignFactory1.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class SystemAlignFactory1(genpy.Message):
  _md5sum = "33dc19c198faf55bc08750372fc54a34"
  _type = "delphi_mrr_msgs/SystemAlignFactory1"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

float32 can_fac_tgt_range_r2m
float32 can_fac_tgt_range_m2t
float32 can_fac_tgt_range1
uint8  can_fac_tgt_mtg_space_hor
uint8  can_fac_tgt_mtg_offset
uint8  can_fac_align_samp_req

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
  __slots__ = ['header','can_fac_tgt_range_r2m','can_fac_tgt_range_m2t','can_fac_tgt_range1','can_fac_tgt_mtg_space_hor','can_fac_tgt_mtg_offset','can_fac_align_samp_req']
  _slot_types = ['std_msgs/Header','float32','float32','float32','uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,can_fac_tgt_range_r2m,can_fac_tgt_range_m2t,can_fac_tgt_range1,can_fac_tgt_mtg_space_hor,can_fac_tgt_mtg_offset,can_fac_align_samp_req

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SystemAlignFactory1, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.can_fac_tgt_range_r2m is None:
        self.can_fac_tgt_range_r2m = 0.
      if self.can_fac_tgt_range_m2t is None:
        self.can_fac_tgt_range_m2t = 0.
      if self.can_fac_tgt_range1 is None:
        self.can_fac_tgt_range1 = 0.
      if self.can_fac_tgt_mtg_space_hor is None:
        self.can_fac_tgt_mtg_space_hor = 0
      if self.can_fac_tgt_mtg_offset is None:
        self.can_fac_tgt_mtg_offset = 0
      if self.can_fac_align_samp_req is None:
        self.can_fac_align_samp_req = 0
    else:
      self.header = std_msgs.msg.Header()
      self.can_fac_tgt_range_r2m = 0.
      self.can_fac_tgt_range_m2t = 0.
      self.can_fac_tgt_range1 = 0.
      self.can_fac_tgt_mtg_space_hor = 0
      self.can_fac_tgt_mtg_offset = 0
      self.can_fac_align_samp_req = 0

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
      buff.write(_get_struct_3f3B().pack(_x.can_fac_tgt_range_r2m, _x.can_fac_tgt_range_m2t, _x.can_fac_tgt_range1, _x.can_fac_tgt_mtg_space_hor, _x.can_fac_tgt_mtg_offset, _x.can_fac_align_samp_req))
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
      end += 15
      (_x.can_fac_tgt_range_r2m, _x.can_fac_tgt_range_m2t, _x.can_fac_tgt_range1, _x.can_fac_tgt_mtg_space_hor, _x.can_fac_tgt_mtg_offset, _x.can_fac_align_samp_req,) = _get_struct_3f3B().unpack(str[start:end])
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
      buff.write(_get_struct_3f3B().pack(_x.can_fac_tgt_range_r2m, _x.can_fac_tgt_range_m2t, _x.can_fac_tgt_range1, _x.can_fac_tgt_mtg_space_hor, _x.can_fac_tgt_mtg_offset, _x.can_fac_align_samp_req))
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
      end += 15
      (_x.can_fac_tgt_range_r2m, _x.can_fac_tgt_range_m2t, _x.can_fac_tgt_range1, _x.can_fac_tgt_mtg_space_hor, _x.can_fac_tgt_mtg_offset, _x.can_fac_align_samp_req,) = _get_struct_3f3B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3f3B = None
def _get_struct_3f3B():
    global _struct_3f3B
    if _struct_3f3B is None:
        _struct_3f3B = struct.Struct("<3f3B")
    return _struct_3f3B
