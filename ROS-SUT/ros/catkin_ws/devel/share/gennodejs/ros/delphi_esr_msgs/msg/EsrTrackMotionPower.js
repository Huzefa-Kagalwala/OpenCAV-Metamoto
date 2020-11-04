// Auto-generated. Do not edit!

// (in-package delphi_esr_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let TrackMotionPower = require('./TrackMotionPower.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class EsrTrackMotionPower {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.rolling_count = null;
      this.group_id = null;
      this.tracks = null;
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
      if (initObj.hasOwnProperty('rolling_count')) {
        this.rolling_count = initObj.rolling_count
      }
      else {
        this.rolling_count = 0;
      }
      if (initObj.hasOwnProperty('group_id')) {
        this.group_id = initObj.group_id
      }
      else {
        this.group_id = 0;
      }
      if (initObj.hasOwnProperty('tracks')) {
        this.tracks = initObj.tracks
      }
      else {
        this.tracks = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrTrackMotionPower
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [rolling_count]
    bufferOffset = _serializer.uint8(obj.rolling_count, buffer, bufferOffset);
    // Serialize message field [group_id]
    bufferOffset = _serializer.uint8(obj.group_id, buffer, bufferOffset);
    // Serialize message field [tracks]
    // Serialize the length for message field [tracks]
    bufferOffset = _serializer.uint32(obj.tracks.length, buffer, bufferOffset);
    obj.tracks.forEach((val) => {
      bufferOffset = TrackMotionPower.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrTrackMotionPower
    let len;
    let data = new EsrTrackMotionPower(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [rolling_count]
    data.rolling_count = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [group_id]
    data.group_id = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [tracks]
    // Deserialize array length for message field [tracks]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.tracks = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.tracks[i] = TrackMotionPower.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.canmsg.length;
    length += 4 * object.tracks.length;
    return length + 10;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/EsrTrackMotionPower';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c8b6ca4d7b49b9f380f75c5de7ed6095';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR TrackMotionPower Msg
    string                              canmsg
    uint8                               rolling_count
    uint8                               group_id
    delphi_esr_msgs/TrackMotionPower[]  tracks
    
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
    MSG: delphi_esr_msgs/TrackMotionPower
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
    const resolved = new EsrTrackMotionPower(null);
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

    if (msg.rolling_count !== undefined) {
      resolved.rolling_count = msg.rolling_count;
    }
    else {
      resolved.rolling_count = 0
    }

    if (msg.group_id !== undefined) {
      resolved.group_id = msg.group_id;
    }
    else {
      resolved.group_id = 0
    }

    if (msg.tracks !== undefined) {
      resolved.tracks = new Array(msg.tracks.length);
      for (let i = 0; i < resolved.tracks.length; ++i) {
        resolved.tracks[i] = TrackMotionPower.Resolve(msg.tracks[i]);
      }
    }
    else {
      resolved.tracks = []
    }

    return resolved;
    }
};

module.exports = EsrTrackMotionPower;
