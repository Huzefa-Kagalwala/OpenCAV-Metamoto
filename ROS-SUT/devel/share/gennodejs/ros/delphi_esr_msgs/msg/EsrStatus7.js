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

class EsrStatus7 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.active_fault0 = null;
      this.active_fault1 = null;
      this.active_fault2 = null;
      this.active_fault3 = null;
      this.active_fault4 = null;
      this.active_fault5 = null;
      this.active_fault6 = null;
      this.active_fault7 = null;
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
      if (initObj.hasOwnProperty('active_fault0')) {
        this.active_fault0 = initObj.active_fault0
      }
      else {
        this.active_fault0 = 0;
      }
      if (initObj.hasOwnProperty('active_fault1')) {
        this.active_fault1 = initObj.active_fault1
      }
      else {
        this.active_fault1 = 0;
      }
      if (initObj.hasOwnProperty('active_fault2')) {
        this.active_fault2 = initObj.active_fault2
      }
      else {
        this.active_fault2 = 0;
      }
      if (initObj.hasOwnProperty('active_fault3')) {
        this.active_fault3 = initObj.active_fault3
      }
      else {
        this.active_fault3 = 0;
      }
      if (initObj.hasOwnProperty('active_fault4')) {
        this.active_fault4 = initObj.active_fault4
      }
      else {
        this.active_fault4 = 0;
      }
      if (initObj.hasOwnProperty('active_fault5')) {
        this.active_fault5 = initObj.active_fault5
      }
      else {
        this.active_fault5 = 0;
      }
      if (initObj.hasOwnProperty('active_fault6')) {
        this.active_fault6 = initObj.active_fault6
      }
      else {
        this.active_fault6 = 0;
      }
      if (initObj.hasOwnProperty('active_fault7')) {
        this.active_fault7 = initObj.active_fault7
      }
      else {
        this.active_fault7 = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus7
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [active_fault0]
    bufferOffset = _serializer.uint8(obj.active_fault0, buffer, bufferOffset);
    // Serialize message field [active_fault1]
    bufferOffset = _serializer.uint8(obj.active_fault1, buffer, bufferOffset);
    // Serialize message field [active_fault2]
    bufferOffset = _serializer.uint8(obj.active_fault2, buffer, bufferOffset);
    // Serialize message field [active_fault3]
    bufferOffset = _serializer.uint8(obj.active_fault3, buffer, bufferOffset);
    // Serialize message field [active_fault4]
    bufferOffset = _serializer.uint8(obj.active_fault4, buffer, bufferOffset);
    // Serialize message field [active_fault5]
    bufferOffset = _serializer.uint8(obj.active_fault5, buffer, bufferOffset);
    // Serialize message field [active_fault6]
    bufferOffset = _serializer.uint8(obj.active_fault6, buffer, bufferOffset);
    // Serialize message field [active_fault7]
    bufferOffset = _serializer.uint8(obj.active_fault7, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus7
    let len;
    let data = new EsrStatus7(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [active_fault0]
    data.active_fault0 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault1]
    data.active_fault1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault2]
    data.active_fault2 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault3]
    data.active_fault3 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault4]
    data.active_fault4 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault5]
    data.active_fault5 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault6]
    data.active_fault6 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [active_fault7]
    data.active_fault7 = _deserializer.uint8(buffer, bufferOffset);
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
    return 'delphi_esr_msgs/EsrStatus7';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b42bcace404e10fd5ee3631fdf186959';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status7
    string      canmsg
    uint8       active_fault0
    uint8       active_fault1
    uint8       active_fault2
    uint8       active_fault3
    uint8       active_fault4
    uint8       active_fault5
    uint8       active_fault6
    uint8       active_fault7
    
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
    const resolved = new EsrStatus7(null);
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

    if (msg.active_fault0 !== undefined) {
      resolved.active_fault0 = msg.active_fault0;
    }
    else {
      resolved.active_fault0 = 0
    }

    if (msg.active_fault1 !== undefined) {
      resolved.active_fault1 = msg.active_fault1;
    }
    else {
      resolved.active_fault1 = 0
    }

    if (msg.active_fault2 !== undefined) {
      resolved.active_fault2 = msg.active_fault2;
    }
    else {
      resolved.active_fault2 = 0
    }

    if (msg.active_fault3 !== undefined) {
      resolved.active_fault3 = msg.active_fault3;
    }
    else {
      resolved.active_fault3 = 0
    }

    if (msg.active_fault4 !== undefined) {
      resolved.active_fault4 = msg.active_fault4;
    }
    else {
      resolved.active_fault4 = 0
    }

    if (msg.active_fault5 !== undefined) {
      resolved.active_fault5 = msg.active_fault5;
    }
    else {
      resolved.active_fault5 = 0
    }

    if (msg.active_fault6 !== undefined) {
      resolved.active_fault6 = msg.active_fault6;
    }
    else {
      resolved.active_fault6 = 0
    }

    if (msg.active_fault7 !== undefined) {
      resolved.active_fault7 = msg.active_fault7;
    }
    else {
      resolved.active_fault7 = 0
    }

    return resolved;
    }
};

module.exports = EsrStatus7;
