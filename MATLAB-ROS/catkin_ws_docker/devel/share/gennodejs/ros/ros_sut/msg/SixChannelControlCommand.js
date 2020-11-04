// Auto-generated. Do not edit!

// (in-package ros_sut.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class SixChannelControlCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.fl_rpm = null;
      this.fr_rpm = null;
      this.rl_rpm = null;
      this.rr_rpm = null;
      this.fl_steer = null;
      this.fr_steer = null;
      this.brake = null;
      this.throttle = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('fl_rpm')) {
        this.fl_rpm = initObj.fl_rpm
      }
      else {
        this.fl_rpm = 0.0;
      }
      if (initObj.hasOwnProperty('fr_rpm')) {
        this.fr_rpm = initObj.fr_rpm
      }
      else {
        this.fr_rpm = 0.0;
      }
      if (initObj.hasOwnProperty('rl_rpm')) {
        this.rl_rpm = initObj.rl_rpm
      }
      else {
        this.rl_rpm = 0.0;
      }
      if (initObj.hasOwnProperty('rr_rpm')) {
        this.rr_rpm = initObj.rr_rpm
      }
      else {
        this.rr_rpm = 0.0;
      }
      if (initObj.hasOwnProperty('fl_steer')) {
        this.fl_steer = initObj.fl_steer
      }
      else {
        this.fl_steer = 0.0;
      }
      if (initObj.hasOwnProperty('fr_steer')) {
        this.fr_steer = initObj.fr_steer
      }
      else {
        this.fr_steer = 0.0;
      }
      if (initObj.hasOwnProperty('brake')) {
        this.brake = initObj.brake
      }
      else {
        this.brake = 0.0;
      }
      if (initObj.hasOwnProperty('throttle')) {
        this.throttle = initObj.throttle
      }
      else {
        this.throttle = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SixChannelControlCommand
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [fl_rpm]
    bufferOffset = _serializer.float32(obj.fl_rpm, buffer, bufferOffset);
    // Serialize message field [fr_rpm]
    bufferOffset = _serializer.float32(obj.fr_rpm, buffer, bufferOffset);
    // Serialize message field [rl_rpm]
    bufferOffset = _serializer.float32(obj.rl_rpm, buffer, bufferOffset);
    // Serialize message field [rr_rpm]
    bufferOffset = _serializer.float32(obj.rr_rpm, buffer, bufferOffset);
    // Serialize message field [fl_steer]
    bufferOffset = _serializer.float32(obj.fl_steer, buffer, bufferOffset);
    // Serialize message field [fr_steer]
    bufferOffset = _serializer.float32(obj.fr_steer, buffer, bufferOffset);
    // Serialize message field [brake]
    bufferOffset = _serializer.float32(obj.brake, buffer, bufferOffset);
    // Serialize message field [throttle]
    bufferOffset = _serializer.float32(obj.throttle, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SixChannelControlCommand
    let len;
    let data = new SixChannelControlCommand(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [fl_rpm]
    data.fl_rpm = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [fr_rpm]
    data.fr_rpm = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rl_rpm]
    data.rl_rpm = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rr_rpm]
    data.rr_rpm = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [fl_steer]
    data.fl_steer = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [fr_steer]
    data.fr_steer = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [brake]
    data.brake = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [throttle]
    data.throttle = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 32;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ros_sut/SixChannelControlCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0f55685654ce18486e93ee8817c0a1ab';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # 4 wheel speeds in rpm
    float32 fl_rpm
    float32 fr_rpm
    float32 rl_rpm
    float32 rr_rpm
    
    # front 2 wheel steer angles in degrees, left is positive
    float32 fl_steer
    float32 fr_steer
    
    # Brake value from 0 to 1
    float32 brake
    
    # Throttle value from 0 to 1
    float32 throttle
    
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
    const resolved = new SixChannelControlCommand(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.fl_rpm !== undefined) {
      resolved.fl_rpm = msg.fl_rpm;
    }
    else {
      resolved.fl_rpm = 0.0
    }

    if (msg.fr_rpm !== undefined) {
      resolved.fr_rpm = msg.fr_rpm;
    }
    else {
      resolved.fr_rpm = 0.0
    }

    if (msg.rl_rpm !== undefined) {
      resolved.rl_rpm = msg.rl_rpm;
    }
    else {
      resolved.rl_rpm = 0.0
    }

    if (msg.rr_rpm !== undefined) {
      resolved.rr_rpm = msg.rr_rpm;
    }
    else {
      resolved.rr_rpm = 0.0
    }

    if (msg.fl_steer !== undefined) {
      resolved.fl_steer = msg.fl_steer;
    }
    else {
      resolved.fl_steer = 0.0
    }

    if (msg.fr_steer !== undefined) {
      resolved.fr_steer = msg.fr_steer;
    }
    else {
      resolved.fr_steer = 0.0
    }

    if (msg.brake !== undefined) {
      resolved.brake = msg.brake;
    }
    else {
      resolved.brake = 0.0
    }

    if (msg.throttle !== undefined) {
      resolved.throttle = msg.throttle;
    }
    else {
      resolved.throttle = 0.0
    }

    return resolved;
    }
};

module.exports = SixChannelControlCommand;
