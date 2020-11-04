// Auto-generated. Do not edit!

// (in-package delphi_mrr_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class LrosFordSpecific {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_globalrealtime_ford = null;
      this.can_veh_speed_ford = null;
      this.can_veh_yaw_ford = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_globalrealtime_ford')) {
        this.can_globalrealtime_ford = initObj.can_globalrealtime_ford
      }
      else {
        this.can_globalrealtime_ford = 0.0;
      }
      if (initObj.hasOwnProperty('can_veh_speed_ford')) {
        this.can_veh_speed_ford = initObj.can_veh_speed_ford
      }
      else {
        this.can_veh_speed_ford = 0.0;
      }
      if (initObj.hasOwnProperty('can_veh_yaw_ford')) {
        this.can_veh_yaw_ford = initObj.can_veh_yaw_ford
      }
      else {
        this.can_veh_yaw_ford = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LrosFordSpecific
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_globalrealtime_ford]
    bufferOffset = _serializer.float32(obj.can_globalrealtime_ford, buffer, bufferOffset);
    // Serialize message field [can_veh_speed_ford]
    bufferOffset = _serializer.float32(obj.can_veh_speed_ford, buffer, bufferOffset);
    // Serialize message field [can_veh_yaw_ford]
    bufferOffset = _serializer.float32(obj.can_veh_yaw_ford, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LrosFordSpecific
    let len;
    let data = new LrosFordSpecific(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_globalrealtime_ford]
    data.can_globalrealtime_ford = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_veh_speed_ford]
    data.can_veh_speed_ford = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_veh_yaw_ford]
    data.can_veh_yaw_ford = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/LrosFordSpecific';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '100e89430c762eb19217e3aa8f0775b9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    float32 can_globalrealtime_ford
    float32 can_veh_speed_ford
    float32 can_veh_yaw_ford
    
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
    const resolved = new LrosFordSpecific(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_globalrealtime_ford !== undefined) {
      resolved.can_globalrealtime_ford = msg.can_globalrealtime_ford;
    }
    else {
      resolved.can_globalrealtime_ford = 0.0
    }

    if (msg.can_veh_speed_ford !== undefined) {
      resolved.can_veh_speed_ford = msg.can_veh_speed_ford;
    }
    else {
      resolved.can_veh_speed_ford = 0.0
    }

    if (msg.can_veh_yaw_ford !== undefined) {
      resolved.can_veh_yaw_ford = msg.can_veh_yaw_ford;
    }
    else {
      resolved.can_veh_yaw_ford = 0.0
    }

    return resolved;
    }
};

module.exports = LrosFordSpecific;
