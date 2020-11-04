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

class EsrStatus1 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.time_stamp = null;
      this.rolling_count = null;
      this.comm_error = null;
      this.curvature = null;
      this.scan_id = null;
      this.yaw_rate = null;
      this.vehicle_speed_calc = null;
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
      if (initObj.hasOwnProperty('time_stamp')) {
        this.time_stamp = initObj.time_stamp
      }
      else {
        this.time_stamp = 0;
      }
      if (initObj.hasOwnProperty('rolling_count')) {
        this.rolling_count = initObj.rolling_count
      }
      else {
        this.rolling_count = 0;
      }
      if (initObj.hasOwnProperty('comm_error')) {
        this.comm_error = initObj.comm_error
      }
      else {
        this.comm_error = false;
      }
      if (initObj.hasOwnProperty('curvature')) {
        this.curvature = initObj.curvature
      }
      else {
        this.curvature = 0;
      }
      if (initObj.hasOwnProperty('scan_id')) {
        this.scan_id = initObj.scan_id
      }
      else {
        this.scan_id = 0;
      }
      if (initObj.hasOwnProperty('yaw_rate')) {
        this.yaw_rate = initObj.yaw_rate
      }
      else {
        this.yaw_rate = 0.0;
      }
      if (initObj.hasOwnProperty('vehicle_speed_calc')) {
        this.vehicle_speed_calc = initObj.vehicle_speed_calc
      }
      else {
        this.vehicle_speed_calc = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus1
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [time_stamp]
    bufferOffset = _serializer.uint8(obj.time_stamp, buffer, bufferOffset);
    // Serialize message field [rolling_count]
    bufferOffset = _serializer.uint8(obj.rolling_count, buffer, bufferOffset);
    // Serialize message field [comm_error]
    bufferOffset = _serializer.bool(obj.comm_error, buffer, bufferOffset);
    // Serialize message field [curvature]
    bufferOffset = _serializer.int16(obj.curvature, buffer, bufferOffset);
    // Serialize message field [scan_id]
    bufferOffset = _serializer.uint16(obj.scan_id, buffer, bufferOffset);
    // Serialize message field [yaw_rate]
    bufferOffset = _serializer.float32(obj.yaw_rate, buffer, bufferOffset);
    // Serialize message field [vehicle_speed_calc]
    bufferOffset = _serializer.float32(obj.vehicle_speed_calc, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus1
    let len;
    let data = new EsrStatus1(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [time_stamp]
    data.time_stamp = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [rolling_count]
    data.rolling_count = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [comm_error]
    data.comm_error = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [curvature]
    data.curvature = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [scan_id]
    data.scan_id = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [yaw_rate]
    data.yaw_rate = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [vehicle_speed_calc]
    data.vehicle_speed_calc = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.canmsg.length;
    return length + 19;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/EsrStatus1';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8f96a58d642c579a639b0c54f121d1ed';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status1
    string      canmsg
    uint8       time_stamp
    uint8       rolling_count
    bool        comm_error
    int16       curvature
    uint16      scan_id
    float32     yaw_rate
    float32     vehicle_speed_calc
    
    
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
    const resolved = new EsrStatus1(null);
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

    if (msg.time_stamp !== undefined) {
      resolved.time_stamp = msg.time_stamp;
    }
    else {
      resolved.time_stamp = 0
    }

    if (msg.rolling_count !== undefined) {
      resolved.rolling_count = msg.rolling_count;
    }
    else {
      resolved.rolling_count = 0
    }

    if (msg.comm_error !== undefined) {
      resolved.comm_error = msg.comm_error;
    }
    else {
      resolved.comm_error = false
    }

    if (msg.curvature !== undefined) {
      resolved.curvature = msg.curvature;
    }
    else {
      resolved.curvature = 0
    }

    if (msg.scan_id !== undefined) {
      resolved.scan_id = msg.scan_id;
    }
    else {
      resolved.scan_id = 0
    }

    if (msg.yaw_rate !== undefined) {
      resolved.yaw_rate = msg.yaw_rate;
    }
    else {
      resolved.yaw_rate = 0.0
    }

    if (msg.vehicle_speed_calc !== undefined) {
      resolved.vehicle_speed_calc = msg.vehicle_speed_calc;
    }
    else {
      resolved.vehicle_speed_calc = 0.0
    }

    return resolved;
    }
};

module.exports = EsrStatus1;
