# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from delphi_esr_msgs/EsrEthTx.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class EsrEthTx(genpy.Message):
  _md5sum = "ea522dc4f556d335d7b446f66f5ac1d2"
  _type = "delphi_esr_msgs/EsrEthTx"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header

# ESR Track Msg
uint16            xcp_format_version
uint16            scan_index
uint16            tcp_size
uint8             xcp_scan_type
uint16            look_index
uint16            mmr_scan_index
float32           target_report_host_speed
float32           target_report_host_yaw_rate
uint32            xcp_timestamp
uint8             release_revision
uint8             promote_revision
uint8             field_revision
uint8             target_report_count
float32[64]       target_report_range
float32[64]       target_report_range_rate
float32[64]       target_report_theta
float32[64]       target_report_amplitude

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
  __slots__ = ['header','xcp_format_version','scan_index','tcp_size','xcp_scan_type','look_index','mmr_scan_index','target_report_host_speed','target_report_host_yaw_rate','xcp_timestamp','release_revision','promote_revision','field_revision','target_report_count','target_report_range','target_report_range_rate','target_report_theta','target_report_amplitude']
  _slot_types = ['std_msgs/Header','uint16','uint16','uint16','uint8','uint16','uint16','float32','float32','uint32','uint8','uint8','uint8','uint8','float32[64]','float32[64]','float32[64]','float32[64]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,xcp_format_version,scan_index,tcp_size,xcp_scan_type,look_index,mmr_scan_index,target_report_host_speed,target_report_host_yaw_rate,xcp_timestamp,release_revision,promote_revision,field_revision,target_report_count,target_report_range,target_report_range_rate,target_report_theta,target_report_amplitude

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsrEthTx, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.xcp_format_version is None:
        self.xcp_format_version = 0
      if self.scan_index is None:
        self.scan_index = 0
      if self.tcp_size is None:
        self.tcp_size = 0
      if self.xcp_scan_type is None:
        self.xcp_scan_type = 0
      if self.look_index is None:
        self.look_index = 0
      if self.mmr_scan_index is None:
        self.mmr_scan_index = 0
      if self.target_report_host_speed is None:
        self.target_report_host_speed = 0.
      if self.target_report_host_yaw_rate is None:
        self.target_report_host_yaw_rate = 0.
      if self.xcp_timestamp is None:
        self.xcp_timestamp = 0
      if self.release_revision is None:
        self.release_revision = 0
      if self.promote_revision is None:
        self.promote_revision = 0
      if self.field_revision is None:
        self.field_revision = 0
      if self.target_report_count is None:
        self.target_report_count = 0
      if self.target_report_range is None:
        self.target_report_range = [0.] * 64
      if self.target_report_range_rate is None:
        self.target_report_range_rate = [0.] * 64
      if self.target_report_theta is None:
        self.target_report_theta = [0.] * 64
      if self.target_report_amplitude is None:
        self.target_report_amplitude = [0.] * 64
    else:
      self.header = std_msgs.msg.Header()
      self.xcp_format_version = 0
      self.scan_index = 0
      self.tcp_size = 0
      self.xcp_scan_type = 0
      self.look_index = 0
      self.mmr_scan_index = 0
      self.target_report_host_speed = 0.
      self.target_report_host_yaw_rate = 0.
      self.xcp_timestamp = 0
      self.release_revision = 0
      self.promote_revision = 0
      self.field_revision = 0
      self.target_report_count = 0
      self.target_report_range = [0.] * 64
      self.target_report_range_rate = [0.] * 64
      self.target_report_theta = [0.] * 64
      self.target_report_amplitude = [0.] * 64

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
      buff.write(_get_struct_3HB2H2fI4B().pack(_x.xcp_format_version, _x.scan_index, _x.tcp_size, _x.xcp_scan_type, _x.look_index, _x.mmr_scan_index, _x.target_report_host_speed, _x.target_report_host_yaw_rate, _x.xcp_timestamp, _x.release_revision, _x.promote_revision, _x.field_revision, _x.target_report_count))
      buff.write(_get_struct_64f().pack(*self.target_report_range))
      buff.write(_get_struct_64f().pack(*self.target_report_range_rate))
      buff.write(_get_struct_64f().pack(*self.target_report_theta))
      buff.write(_get_struct_64f().pack(*self.target_report_amplitude))
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
      end += 27
      (_x.xcp_format_version, _x.scan_index, _x.tcp_size, _x.xcp_scan_type, _x.look_index, _x.mmr_scan_index, _x.target_report_host_speed, _x.target_report_host_yaw_rate, _x.xcp_timestamp, _x.release_revision, _x.promote_revision, _x.field_revision, _x.target_report_count,) = _get_struct_3HB2H2fI4B().unpack(str[start:end])
      start = end
      end += 256
      self.target_report_range = _get_struct_64f().unpack(str[start:end])
      start = end
      end += 256
      self.target_report_range_rate = _get_struct_64f().unpack(str[start:end])
      start = end
      end += 256
      self.target_report_theta = _get_struct_64f().unpack(str[start:end])
      start = end
      end += 256
      self.target_report_amplitude = _get_struct_64f().unpack(str[start:end])
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
      buff.write(_get_struct_3HB2H2fI4B().pack(_x.xcp_format_version, _x.scan_index, _x.tcp_size, _x.xcp_scan_type, _x.look_index, _x.mmr_scan_index, _x.target_report_host_speed, _x.target_report_host_yaw_rate, _x.xcp_timestamp, _x.release_revision, _x.promote_revision, _x.field_revision, _x.target_report_count))
      buff.write(self.target_report_range.tostring())
      buff.write(self.target_report_range_rate.tostring())
      buff.write(self.target_report_theta.tostring())
      buff.write(self.target_report_amplitude.tostring())
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
      end += 27
      (_x.xcp_format_version, _x.scan_index, _x.tcp_size, _x.xcp_scan_type, _x.look_index, _x.mmr_scan_index, _x.target_report_host_speed, _x.target_report_host_yaw_rate, _x.xcp_timestamp, _x.release_revision, _x.promote_revision, _x.field_revision, _x.target_report_count,) = _get_struct_3HB2H2fI4B().unpack(str[start:end])
      start = end
      end += 256
      self.target_report_range = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=64)
      start = end
      end += 256
      self.target_report_range_rate = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=64)
      start = end
      end += 256
      self.target_report_theta = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=64)
      start = end
      end += 256
      self.target_report_amplitude = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=64)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3HB2H2fI4B = None
def _get_struct_3HB2H2fI4B():
    global _struct_3HB2H2fI4B
    if _struct_3HB2H2fI4B is None:
        _struct_3HB2H2fI4B = struct.Struct("<3HB2H2fI4B")
    return _struct_3HB2H2fI4B
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_64f = None
def _get_struct_64f():
    global _struct_64f
    if _struct_64f is None:
        _struct_64f = struct.Struct("<64f")
    return _struct_64f
