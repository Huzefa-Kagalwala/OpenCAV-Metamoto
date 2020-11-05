// Auto-generated. Do not edit!

// (in-package delphi_esr_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class TrackMotionPower {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.movable_fast = null;
      this.movable_slow = null;
      this.moving = null;
      this.power = null;
    }
    else {
      if (initObj.hasOwnProperty('movable_fast')) {
        this.movable_fast = initObj.movable_fast
      }
      else {
        this.movable_fast = false;
      }
      if (initObj.hasOwnProperty('movable_slow')) {
        this.movable_slow = initObj.movable_slow
      }
      else {
        this.movable_slow = false;
      }
      if (initObj.hasOwnProperty('moving')) {
        this.moving = initObj.moving
      }
      else {
        this.moving = false;
      }
      if (initObj.hasOwnProperty('power')) {
        this.power = initObj.power
      }
      else {
        this.power = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TrackMotionPower
    // Serialize message field [movable_fast]
    bufferOffset = _serializer.bool(obj.movable_fast, buffer, bufferOffset);
    // Serialize message field [movable_slow]
    bufferOffset = _serializer.bool(obj.movable_slow, buffer, bufferOffset);
    // Serialize message field [moving]
    bufferOffset = _serializer.bool(obj.moving, buffer, bufferOffset);
    // Serialize message field [power]
    bufferOffset = _serializer.int8(obj.power, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TrackMotionPower
    let len;
    let data = new TrackMotionPower(null);
    // Deserialize message field [movable_fast]
    data.movable_fast = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [movable_slow]
    data.movable_slow = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [moving]
    data.moving = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [power]
    data.power = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/TrackMotionPower';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f6b1c4ad81b926dc71e475401a529999';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool  movable_fast
    bool  movable_slow
    bool  moving
    int8  power
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TrackMotionPower(null);
    if (msg.movable_fast !== undefined) {
      resolved.movable_fast = msg.movable_fast;
    }
    else {
      resolved.movable_fast = false
    }

    if (msg.movable_slow !== undefined) {
      resolved.movable_slow = msg.movable_slow;
    }
    else {
      resolved.movable_slow = false
    }

    if (msg.moving !== undefined) {
      resolved.moving = msg.moving;
    }
    else {
      resolved.moving = false
    }

    if (msg.power !== undefined) {
      resolved.power = msg.power;
    }
    else {
      resolved.power = 0
    }

    return resolved;
    }
};

module.exports = TrackMotionPower;
