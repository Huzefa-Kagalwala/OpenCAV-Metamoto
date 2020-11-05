# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_mrr_msgs/SystemAlignment1.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class SystemAlignment1(genpy.Message):
  _md5sum = "4e20533dd9d1d3391832af45ebd7eff2"
  _type = "delphi_mrr_msgs/SystemAlignment1"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

bool     can_mrr_upside_down
uint8 	 can_blockage_filter_output
float32  can_angle_misalignment_hdr
bool     can_use_angle_misalignment
bool     can_blockage_disable
uint16   can_scan_index_ack 

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
  __slots__ = ['header','can_mrr_upside_down','can_blockage_filter_output','can_angle_misalignment_hdr','can_use_angle_misalignment','can_blockage_disable','can_scan_index_ack']
  _slot_types = ['std_msgs/Header','bool','uint8','float32','bool','bool','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,can_mrr_upside_down,can_blockage_filter_output,can_angle_misalignment_hdr,can_use_angle_misalignment,can_blockage_disable,can_scan_index_ack

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SystemAlignment1, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.can_mrr_upside_down is None:
        self.can_mrr_upside_down = False
      if self.can_blockage_filter_output is None:
        self.can_blockage_filter_output = 0
      if self.can_angle_misalignment_hdr is None:
        self.can_angle_misalignment_hdr = 0.
      if self.can_use_angle_misalignment is None:
        self.can_use_angle_misalignment = False
      if self.can_blockage_disable is None:
        self.can_blockage_disable = False
      if self.can_scan_index_ack is None:
        self.can_scan_index_ack = 0
    else:
      self.header = std_msgs.msg.Header()
      self.can_mrr_upside_down = False
      self.can_blockage_filter_output = 0
      self.can_angle_misalignment_hdr = 0.
      self.can_use_angle_misalignment = False
      self.can_blockage_disable = False
      self.can_scan_index_ack = 0

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
      buff.write(_get_struct_2Bf2BH().pack(_x.can_mrr_upside_down, _x.can_blockage_filter_output, _x.can_angle_misalignment_hdr, _x.can_use_angle_misalignment, _x.can_blockage_disable, _x.can_scan_index_ack))
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
      end += 10
      (_x.can_mrr_upside_down, _x.can_blockage_filter_output, _x.can_angle_misalignment_hdr, _x.can_use_angle_misalignment, _x.can_blockage_disable, _x.can_scan_index_ack,) = _get_struct_2Bf2BH().unpack(str[start:end])
      self.can_mrr_upside_down = bool(self.can_mrr_upside_down)
      self.can_use_angle_misalignment = bool(self.can_use_angle_misalignment)
      self.can_blockage_disable = bool(self.can_blockage_disable)
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
      buff.write(_get_struct_2Bf2BH().pack(_x.can_mrr_upside_down, _x.can_blockage_filter_output, _x.can_angle_misalignment_hdr, _x.can_use_angle_misalignment, _x.can_blockage_disable, _x.can_scan_index_ack))
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
      end += 10
      (_x.can_mrr_upside_down, _x.can_blockage_filter_output, _x.can_angle_misalignment_hdr, _x.can_use_angle_misalignment, _x.can_blockage_disable, _x.can_scan_index_ack,) = _get_struct_2Bf2BH().unpack(str[start:end])
      self.can_mrr_upside_down = bool(self.can_mrr_upside_down)
      self.can_use_angle_misalignment = bool(self.can_use_angle_misalignment)
      self.can_blockage_disable = bool(self.can_blockage_disable)
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
_struct_2Bf2BH = None
def _get_struct_2Bf2BH():
    global _struct_2Bf2BH
    if _struct_2Bf2BH is None:
        _struct_2Bf2BH = struct.Struct("<2Bf2BH")
    return _struct_2Bf2BH