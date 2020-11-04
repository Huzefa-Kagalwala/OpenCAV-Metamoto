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

class EsrStatus8 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.history_fault0 = null;
      this.history_fault1 = null;
      this.history_fault2 = null;
      this.history_fault3 = null;
      this.history_fault4 = null;
      this.history_fault5 = null;
      this.history_fault6 = null;
      this.history_fault7 = null;
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
      if (initObj.hasOwnProperty('history_fault0')) {
        this.history_fault0 = initObj.history_fault0
      }
      else {
        this.history_fault0 = 0;
      }
      if (initObj.hasOwnProperty('history_fault1')) {
        this.history_fault1 = initObj.history_fault1
      }
      else {
        this.history_fault1 = 0;
      }
      if (initObj.hasOwnProperty('history_fault2')) {
        this.history_fault2 = initObj.history_fault2
      }
      else {
        this.history_fault2 = 0;
      }
      if (initObj.hasOwnProperty('history_fault3')) {
        this.history_fault3 = initObj.history_fault3
      }
      else {
        this.history_fault3 = 0;
      }
      if (initObj.hasOwnProperty('history_fault4')) {
        this.history_fault4 = initObj.history_fault4
      }
      else {
        this.history_fault4 = 0;
      }
      if (initObj.hasOwnProperty('history_fault5')) {
        this.history_fault5 = initObj.history_fault5
      }
      else {
        this.history_fault5 = 0;
      }
      if (initObj.hasOwnProperty('history_fault6')) {
        this.history_fault6 = initObj.history_fault6
      }
      else {
        this.history_fault6 = 0;
      }
      if (initObj.hasOwnProperty('history_fault7')) {
        this.history_fault7 = initObj.history_fault7
      }
      else {
        this.history_fault7 = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus8
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [history_fault0]
    bufferOffset = _serializer.uint8(obj.history_fault0, buffer, bufferOffset);
    // Serialize message field [history_fault1]
    bufferOffset = _serializer.uint8(obj.history_fault1, buffer, bufferOffset);
    // Serialize message field [history_fault2]
    bufferOffset = _serializer.uint8(obj.history_fault2, buffer, bufferOffset);
    // Serialize message field [history_fault3]
    bufferOffset = _serializer.uint8(obj.history_fault3, buffer, bufferOffset);
    // Serialize message field [history_fault4]
    bufferOffset = _serializer.uint8(obj.history_fault4, buffer, bufferOffset);
    // Serialize message field [history_fault5]
    bufferOffset = _serializer.uint8(obj.history_fault5, buffer, bufferOffset);
    // Serialize message field [history_fault6]
    bufferOffset = _serializer.uint8(obj.history_fault6, buffer, bufferOffset);
    // Serialize message field [history_fault7]
    bufferOffset = _serializer.uint8(obj.history_fault7, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus8
    let len;
    let data = new EsrStatus8(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [history_fault0]
    data.history_fault0 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault1]
    data.history_fault1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault2]
    data.history_fault2 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault3]
    data.history_fault3 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault4]
    data.history_fault4 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault5]
    data.history_fault5 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault6]
    data.history_fault6 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [history_fault7]
    data.history_fault7 = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.canmsg.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/EsrStatus8';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '12cc314f728c579155b83fab509b20f4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status8
    string      canmsg
    uint8       history_fault0
    uint8       history_fault1
    uint8       history_fault2
    uint8       history_fault3
    uint8       history_fault4
    uint8       history_fault5
    uint8       history_fault6
    uint8       history_fault7
    
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
    const resolved = new EsrStatus8(null);
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

    if (msg.history_fault0 !== undefined) {
      resolved.history_fault0 = msg.history_fault0;
    }
    else {
      resolved.history_fault0 = 0
    }

    if (msg.history_fault1 !== undefined) {
      resolved.history_fault1 = msg.history_fault1;
    }
    else {
      resolved.history_fault1 = 0
    }

    if (msg.history_fault2 !== undefined) {
      resolved.history_fault2 = msg.history_fault2;
    }
    else {
      resolved.history_fault2 = 0
    }

    if (msg.history_fault3 !== undefined) {
      resolved.history_fault3 = msg.history_fault3;
    }
    else {
      resolved.history_fault3 = 0
    }

    if (msg.history_fault4 !== undefined) {
      resolved.history_fault4 = msg.history_fault4;
    }
    else {
      resolved.history_fault4 = 0
    }

    if (msg.history_fault5 !== undefined) {
      resolved.history_fault5 = msg.history_fault5;
    }
    else {
      resolved.history_fault5 = 0
    }

    if (msg.history_fault6 !== undefined) {
      resolved.history_fault6 = msg.history_fault6;
    }
    else {
      resolved.history_fault6 = 0
    }

    if (msg.history_fault7 !== undefined) {
      resolved.history_fault7 = msg.history_fault7;
    }
    else {
      resolved.history_fault7 = 0
    }

    return resolved;
    }
};

module.exports = EsrStatus8;
