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

class WheelSpeedMsg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_speed_front_left_wheel = null;
      this.can_speed_front_right_wheel = null;
      this.can_speed_rear_left_wheel = null;
      this.can_speed_rear_right_wheel = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_speed_front_left_wheel')) {
        this.can_speed_front_left_wheel = initObj.can_speed_front_left_wheel
      }
      else {
        this.can_speed_front_left_wheel = 0;
      }
      if (initObj.hasOwnProperty('can_speed_front_right_wheel')) {
        this.can_speed_front_right_wheel = initObj.can_speed_front_right_wheel
      }
      else {
        this.can_speed_front_right_wheel = 0;
      }
      if (initObj.hasOwnProperty('can_speed_rear_left_wheel')) {
        this.can_speed_rear_left_wheel = initObj.can_speed_rear_left_wheel
      }
      else {
        this.can_speed_rear_left_wheel = 0;
      }
      if (initObj.hasOwnProperty('can_speed_rear_right_wheel')) {
        this.can_speed_rear_right_wheel = initObj.can_speed_rear_right_wheel
      }
      else {
        this.can_speed_rear_right_wheel = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type WheelSpeedMsg
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_speed_front_left_wheel]
    bufferOffset = _serializer.uint16(obj.can_speed_front_left_wheel, buffer, bufferOffset);
    // Serialize message field [can_speed_front_right_wheel]
    bufferOffset = _serializer.uint16(obj.can_speed_front_right_wheel, buffer, bufferOffset);
    // Serialize message field [can_speed_rear_left_wheel]
    bufferOffset = _serializer.uint16(obj.can_speed_rear_left_wheel, buffer, bufferOffset);
    // Serialize message field [can_speed_rear_right_wheel]
    bufferOffset = _serializer.uint16(obj.can_speed_rear_right_wheel, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type WheelSpeedMsg
    let len;
    let data = new WheelSpeedMsg(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_speed_front_left_wheel]
    data.can_speed_front_left_wheel = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [can_speed_front_right_wheel]
    data.can_speed_front_right_wheel = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [can_speed_rear_left_wheel]
    data.can_speed_rear_left_wheel = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [can_speed_rear_right_wheel]
    data.can_speed_rear_right_wheel = _deserializer.uint16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/WheelSpeedMsg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3d1c063361bae8e65f8f42586fc8121c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint16 can_speed_front_left_wheel
    uint16 can_speed_front_right_wheel
    uint16 can_speed_rear_left_wheel
    uint16 can_speed_rear_right_wheel
    
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
    const resolved = new WheelSpeedMsg(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_speed_front_left_wheel !== undefined) {
      resolved.can_speed_front_left_wheel = msg.can_speed_front_left_wheel;
    }
    else {
      resolved.can_speed_front_left_wheel = 0
    }

    if (msg.can_speed_front_right_wheel !== undefined) {
      resolved.can_speed_front_right_wheel = msg.can_speed_front_right_wheel;
    }
    else {
      resolved.can_speed_front_right_wheel = 0
    }

    if (msg.can_speed_rear_left_wheel !== undefined) {
      resolved.can_speed_rear_left_wheel = msg.can_speed_rear_left_wheel;
    }
    else {
      resolved.can_speed_rear_left_wheel = 0
    }

    if (msg.can_speed_rear_right_wheel !== undefined) {
      resolved.can_speed_rear_right_wheel = msg.can_speed_rear_right_wheel;
    }
    else {
      resolved.can_speed_rear_right_wheel = 0
    }

    return resolved;
    }
};

module.exports = WheelSpeedMsg;
