# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kartech_linear_actuator_msgs/ReportPollReq.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kartech_linear_actuator_msgs.msg
import std_msgs.msg

class ReportPollReq(genpy.Message):
  _md5sum = "f75ac448280dc0453a2f53fff2ba9c03"
  _type = "kartech_linear_actuator_msgs/ReportPollReq"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header
bool confirm
kartech_linear_actuator_msgs/ReportIndex[] report_indices     # The indicies of the reports that you would like to receive. Up to 6 may be requested at a time.

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
MSG: kartech_linear_actuator_msgs/ReportIndex
uint8 POSITION_REPORT_INDEX = 128
uint8 MOTOR_CURRENT_REPORT_INDEX = 129
uint8 ENHANCED_POSITION_REPORT_INDEX = 152
uint8 UNIQUE_DEVICE_ID_REPORTS_INDEX = 167
uint8 SOFTWARE_REVISION_REPORT_INDEX = 229
uint8 ZEROING_MESSAGE_REPORT_INDEX = 238

uint8 report_index
"""
  __slots__ = ['header','confirm','report_indices']
  _slot_types = ['std_msgs/Header','bool','kartech_linear_actuator_msgs/ReportIndex[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,confirm,report_indices

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReportPollReq, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.confirm is None:
        self.confirm = False
      if self.report_indices is None:
        self.report_indices = []
    else:
      self.header = std_msgs.msg.Header()
      self.confirm = False
      self.report_indices = []

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
      buff.write(_get_struct_B().pack(self.confirm))
      length = len(self.report_indices)
      buff.write(_struct_I.pack(length))
      for val1 in self.report_indices:
        buff.write(_get_struct_B().pack(val1.report_index))
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
      if self.report_indices is None:
        self.report_indices = None
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
      end += 1
      (self.confirm,) = _get_struct_B().unpack(str[start:end])
      self.confirm = bool(self.confirm)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.report_indices = []
      for i in range(0, length):
        val1 = kartech_linear_actuator_msgs.msg.ReportIndex()
        start = end
        end += 1
        (val1.report_index,) = _get_struct_B().unpack(str[start:end])
        self.report_indices.append(val1)
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
      buff.write(_get_struct_B().pack(self.confirm))
      length = len(self.report_indices)
      buff.write(_struct_I.pack(length))
      for val1 in self.report_indices:
        buff.write(_get_struct_B().pack(val1.report_index))
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
      if self.report_indices is None:
        self.report_indices = None
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
      end += 1
      (self.confirm,) = _get_struct_B().unpack(str[start:end])
      self.confirm = bool(self.confirm)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.report_indices = []
      for i in range(0, length):
        val1 = kartech_linear_actuator_msgs.msg.ReportIndex()
        start = end
        end += 1
        (val1.report_index,) = _get_struct_B().unpack(str[start:end])
        self.report_indices.append(val1)
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
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
