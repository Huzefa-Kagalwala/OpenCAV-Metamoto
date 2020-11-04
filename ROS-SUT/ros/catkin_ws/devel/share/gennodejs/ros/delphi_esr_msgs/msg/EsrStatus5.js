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

class EsrStatus5 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.swbatt_a2d = null;
      this.ignp_a2d = null;
      this.temp1_a2d = null;
      this.temp2_a2d = null;
      this.supply_5v_a = null;
      this.supply_5v_dx = null;
      this.supply_53p_3v = null;
      this.supply_10_v = null;
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
      if (initObj.hasOwnProperty('swbatt_a2d')) {
        this.swbatt_a2d = initObj.swbatt_a2d
      }
      else {
        this.swbatt_a2d = 0;
      }
      if (initObj.hasOwnProperty('ignp_a2d')) {
        this.ignp_a2d = initObj.ignp_a2d
      }
      else {
        this.ignp_a2d = 0;
      }
      if (initObj.hasOwnProperty('temp1_a2d')) {
        this.temp1_a2d = initObj.temp1_a2d
      }
      else {
        this.temp1_a2d = 0;
      }
      if (initObj.hasOwnProperty('temp2_a2d')) {
        this.temp2_a2d = initObj.temp2_a2d
      }
      else {
        this.temp2_a2d = 0;
      }
      if (initObj.hasOwnProperty('supply_5v_a')) {
        this.supply_5v_a = initObj.supply_5v_a
      }
      else {
        this.supply_5v_a = 0;
      }
      if (initObj.hasOwnProperty('supply_5v_dx')) {
        this.supply_5v_dx = initObj.supply_5v_dx
      }
      else {
        this.supply_5v_dx = 0;
      }
      if (initObj.hasOwnProperty('supply_53p_3v')) {
        this.supply_53p_3v = initObj.supply_53p_3v
      }
      else {
        this.supply_53p_3v = 0;
      }
      if (initObj.hasOwnProperty('supply_10_v')) {
        this.supply_10_v = initObj.supply_10_v
      }
      else {
        this.supply_10_v = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus5
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [swbatt_a2d]
    bufferOffset = _serializer.uint8(obj.swbatt_a2d, buffer, bufferOffset);
    // Serialize message field [ignp_a2d]
    bufferOffset = _serializer.uint8(obj.ignp_a2d, buffer, bufferOffset);
    // Serialize message field [temp1_a2d]
    bufferOffset = _serializer.uint8(obj.temp1_a2d, buffer, bufferOffset);
    // Serialize message field [temp2_a2d]
    bufferOffset = _serializer.uint8(obj.temp2_a2d, buffer, bufferOffset);
    // Serialize message field [supply_5v_a]
    bufferOffset = _serializer.uint8(obj.supply_5v_a, buffer, bufferOffset);
    // Serialize message field [supply_5v_dx]
    bufferOffset = _serializer.uint8(obj.supply_5v_dx, buffer, bufferOffset);
    // Serialize message field [supply_53p_3v]
    bufferOffset = _serializer.uint8(obj.supply_53p_3v, buffer, bufferOffset);
    // Serialize message field [supply_10_v]
    bufferOffset = _serializer.uint8(obj.supply_10_v, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus5
    let len;
    let data = new EsrStatus5(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [swbatt_a2d]
    data.swbatt_a2d = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [ignp_a2d]
    data.ignp_a2d = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [temp1_a2d]
    data.temp1_a2d = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [temp2_a2d]
    data.temp2_a2d = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [supply_5v_a]
    data.supply_5v_a = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [supply_5v_dx]
    data.supply_5v_dx = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [supply_53p_3v]
    data.supply_53p_3v = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [supply_10_v]
    data.supply_10_v = _deserializer.uint8(buffer, bufferOffset);
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
    return 'delphi_esr_msgs/EsrStatus5';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e6dd803ab75c77da3bbe6f55a701a0ea';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status5
    string      canmsg
    uint8       swbatt_a2d
    uint8       ignp_a2d
    uint8       temp1_a2d
    uint8       temp2_a2d
    uint8       supply_5v_a
    uint8       supply_5v_dx
    uint8       supply_53p_3v
    uint8       supply_10_v
    
    
    
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
    const resolved = new EsrStatus5(null);
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

    if (msg.swbatt_a2d !== undefined) {
      resolved.swbatt_a2d = msg.swbatt_a2d;
    }
    else {
      resolved.swbatt_a2d = 0
    }

    if (msg.ignp_a2d !== undefined) {
      resolved.ignp_a2d = msg.ignp_a2d;
    }
    else {
      resolved.ignp_a2d = 0
    }

    if (msg.temp1_a2d !== undefined) {
      resolved.temp1_a2d = msg.temp1_a2d;
    }
    else {
      resolved.temp1_a2d = 0
    }

    if (msg.temp2_a2d !== undefined) {
      resolved.temp2_a2d = msg.temp2_a2d;
    }
    else {
      resolved.temp2_a2d = 0
    }

    if (msg.supply_5v_a !== undefined) {
      resolved.supply_5v_a = msg.supply_5v_a;
    }
    else {
      resolved.supply_5v_a = 0
    }

    if (msg.supply_5v_dx !== undefined) {
      resolved.supply_5v_dx = msg.supply_5v_dx;
    }
    else {
      resolved.supply_5v_dx = 0
    }

    if (msg.supply_53p_3v !== undefined) {
      resolved.supply_53p_3v = msg.supply_53p_3v;
    }
    else {
      resolved.supply_53p_3v = 0
    }

    if (msg.supply_10_v !== undefined) {
      resolved.supply_10_v = msg.supply_10_v;
    }
    else {
      resolved.supply_10_v = 0
    }

    return resolved;
    }
};

module.exports = EsrStatus5;
