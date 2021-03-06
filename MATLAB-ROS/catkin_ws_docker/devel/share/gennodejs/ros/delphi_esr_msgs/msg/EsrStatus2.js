// Auto-generated. Do not edit!

// (in-package delphi_esr_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class EsrStatus2 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.rolling_count2 = null;
      this.max_track_ack = null;
      this.overheat_error = null;
      this.range_perf_error = null;
      this.internal_error = null;
      this.xcvr_operational = null;
      this.raw_data_mode = null;
      this.steer_angle_ack = null;
      this.temperature = null;
      this.spd_comp_factor = null;
      this.grouping_mode = null;
      this.yaw_rate_bias = null;
      this.sw_version_dsp = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('canmsg')) {
        this.canmsg = initObj.canmsg
      }
      else {
        this.canmsg = '';
      }
      if (initObj.hasOwnProperty('rolling_count2')) {
        this.rolling_count2 = initObj.rolling_count2
      }
      else {
        this.rolling_count2 = 0;
      }
      if (initObj.hasOwnProperty('max_track_ack')) {
        this.max_track_ack = initObj.max_track_ack
      }
      else {
        this.max_track_ack = 0;
      }
      if (initObj.hasOwnProperty('overheat_error')) {
        this.overheat_error = initObj.overheat_error
      }
      else {
        this.overheat_error = false;
      }
      if (initObj.hasOwnProperty('range_perf_error')) {
        this.range_perf_error = initObj.range_perf_error
      }
      else {
        this.range_perf_error = false;
      }
      if (initObj.hasOwnProperty('internal_error')) {
        this.internal_error = initObj.internal_error
      }
      else {
        this.internal_error = false;
      }
      if (initObj.hasOwnProperty('xcvr_operational')) {
        this.xcvr_operational = initObj.xcvr_operational
      }
      else {
        this.xcvr_operational = false;
      }
      if (initObj.hasOwnProperty('raw_data_mode')) {
        this.raw_data_mode = initObj.raw_data_mode
      }
      else {
        this.raw_data_mode = false;
      }
      if (initObj.hasOwnProperty('steer_angle_ack')) {
        this.steer_angle_ack = initObj.steer_angle_ack
      }
      else {
        this.steer_angle_ack = 0;
      }
      if (initObj.hasOwnProperty('temperature')) {
        this.temperature = initObj.temperature
      }
      else {
        this.temperature = 0;
      }
      if (initObj.hasOwnProperty('spd_comp_factor')) {
        this.spd_comp_factor = initObj.spd_comp_factor
      }
      else {
        this.spd_comp_factor = 0.0;
      }
      if (initObj.hasOwnProperty('grouping_mode')) {
        this.grouping_mode = initObj.grouping_mode
      }
      else {
        this.grouping_mode = 0;
      }
      if (initObj.hasOwnProperty('yaw_rate_bias')) {
        this.yaw_rate_bias = initObj.yaw_rate_bias
      }
      else {
        this.yaw_rate_bias = 0.0;
      }
      if (initObj.hasOwnProperty('sw_version_dsp')) {
        this.sw_version_dsp = initObj.sw_version_dsp
      }
      else {
        this.sw_version_dsp = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus2
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [rolling_count2]
    bufferOffset = _serializer.uint8(obj.rolling_count2, buffer, bufferOffset);
    // Serialize message field [max_track_ack]
    bufferOffset = _serializer.uint8(obj.max_track_ack, buffer, bufferOffset);
    // Serialize message field [overheat_error]
    bufferOffset = _serializer.bool(obj.overheat_error, buffer, bufferOffset);
    // Serialize message field [range_perf_error]
    bufferOffset = _serializer.bool(obj.range_perf_error, buffer, bufferOffset);
    // Serialize message field [internal_error]
    bufferOffset = _serializer.bool(obj.internal_error, buffer, bufferOffset);
    // Serialize message field [xcvr_operational]
    bufferOffset = _serializer.bool(obj.xcvr_operational, buffer, bufferOffset);
    // Serialize message field [raw_data_mode]
    bufferOffset = _serializer.bool(obj.raw_data_mode, buffer, bufferOffset);
    // Serialize message field [steer_angle_ack]
    bufferOffset = _serializer.uint16(obj.steer_angle_ack, buffer, bufferOffset);
    // Serialize message field [temperature]
    bufferOffset = _serializer.int8(obj.temperature, buffer, bufferOffset);
    // Serialize message field [spd_comp_factor]
    bufferOffset = _serializer.float32(obj.spd_comp_factor, buffer, bufferOffset);
    // Serialize message field [grouping_mode]
    bufferOffset = _serializer.uint8(obj.grouping_mode, buffer, bufferOffset);
    // Serialize message field [yaw_rate_bias]
    bufferOffset = _serializer.float32(obj.yaw_rate_bias, buffer, bufferOffset);
    // Serialize message field [sw_version_dsp]
    bufferOffset = _serializer.string(obj.sw_version_dsp, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus2
    let len;
    let data = new EsrStatus2(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [rolling_count2]
    data.rolling_count2 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [max_track_ack]
    data.max_track_ack = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [overheat_error]
    data.overheat_error = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [range_perf_error]
    data.range_perf_error = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [internal_error]
    data.internal_error = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [xcvr_operational]
    data.xcvr_operational = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [raw_data_mode]
    data.raw_data_mode = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [steer_angle_ack]
    data.steer_angle_ack = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [temperature]
    data.temperature = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [spd_comp_factor]
    data.spd_comp_factor = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [grouping_mode]
    data.grouping_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [yaw_rate_bias]
    data.yaw_rate_bias = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [sw_version_dsp]
    data.sw_version_dsp = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.canmsg.length;
    length += object.sw_version_dsp.length;
    return length + 27;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/EsrStatus2';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'de9d4dcad18be0f8d7fd839abd77cb7c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status2
    string      canmsg
    uint8       rolling_count2
    uint8       max_track_ack
    bool        overheat_error
    bool        range_perf_error
    bool        internal_error
    bool        xcvr_operational
    bool        raw_data_mode
    uint16      steer_angle_ack
    int8        temperature
    float32     spd_comp_factor
    uint8       grouping_mode
    float32     yaw_rate_bias
    string      sw_version_dsp
    
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
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new EsrStatus2(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.canmsg !== undefined) {
      resolved.canmsg = msg.canmsg;
    }
    else {
      resolved.canmsg = ''
    }

    if (msg.rolling_count2 !== undefined) {
      resolved.rolling_count2 = msg.rolling_count2;
    }
    else {
      resolved.rolling_count2 = 0
    }

    if (msg.max_track_ack !== undefined) {
      resolved.max_track_ack = msg.max_track_ack;
    }
    else {
      resolved.max_track_ack = 0
    }

    if (msg.overheat_error !== undefined) {
      resolved.overheat_error = msg.overheat_error;
    }
    else {
      resolved.overheat_error = false
    }

    if (msg.range_perf_error !== undefined) {
      resolved.range_perf_error = msg.range_perf_error;
    }
    else {
      resolved.range_perf_error = false
    }

    if (msg.internal_error !== undefined) {
      resolved.internal_error = msg.internal_error;
    }
    else {
      resolved.internal_error = false
    }

    if (msg.xcvr_operational !== undefined) {
      resolved.xcvr_operational = msg.xcvr_operational;
    }
    else {
      resolved.xcvr_operational = false
    }

    if (msg.raw_data_mode !== undefined) {
      resolved.raw_data_mode = msg.raw_data_mode;
    }
    else {
      resolved.raw_data_mode = false
    }

    if (msg.steer_angle_ack !== undefined) {
      resolved.steer_angle_ack = msg.steer_angle_ack;
    }
    else {
      resolved.steer_angle_ack = 0
    }

    if (msg.temperature !== undefined) {
      resolved.temperature = msg.temperature;
    }
    else {
      resolved.temperature = 0
    }

    if (msg.spd_comp_factor !== undefined) {
      resolved.spd_comp_factor = msg.spd_comp_factor;
    }
    else {
      resolved.spd_comp_factor = 0.0
    }

    if (msg.grouping_mode !== undefined) {
      resolved.grouping_mode = msg.grouping_mode;
    }
    else {
      resolved.grouping_mode = 0
    }

    if (msg.yaw_rate_bias !== undefined) {
      resolved.yaw_rate_bias = msg.yaw_rate_bias;
    }
    else {
      resolved.yaw_rate_bias = 0.0
    }

    if (msg.sw_version_dsp !== undefined) {
      resolved.sw_version_dsp = msg.sw_version_dsp;
    }
    else {
      resolved.sw_version_dsp = ''
    }

    return resolved;
    }
};

module.exports = EsrStatus2;
