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

class MrrControlAlignment {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_fac_align_cmd3 = null;
      this.can_fac_align_cmd2 = null;
      this.can_fac_align_cmd1 = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_fac_align_cmd3')) {
        this.can_fac_align_cmd3 = initObj.can_fac_align_cmd3
      }
      else {
        this.can_fac_align_cmd3 = false;
      }
      if (initObj.hasOwnProperty('can_fac_align_cmd2')) {
        this.can_fac_align_cmd2 = initObj.can_fac_align_cmd2
      }
      else {
        this.can_fac_align_cmd2 = false;
      }
      if (initObj.hasOwnProperty('can_fac_align_cmd1')) {
        this.can_fac_align_cmd1 = initObj.can_fac_align_cmd1
      }
      else {
        this.can_fac_align_cmd1 = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MrrControlAlignment
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_fac_align_cmd3]
    bufferOffset = _serializer.bool(obj.can_fac_align_cmd3, buffer, bufferOffset);
    // Serialize message field [can_fac_align_cmd2]
    bufferOffset = _serializer.bool(obj.can_fac_align_cmd2, buffer, bufferOffset);
    // Serialize message field [can_fac_align_cmd1]
    bufferOffset = _serializer.bool(obj.can_fac_align_cmd1, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MrrControlAlignment
    let len;
    let data = new MrrControlAlignment(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_fac_align_cmd3]
    data.can_fac_align_cmd3 = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_fac_align_cmd2]
    data.can_fac_align_cmd2 = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_fac_align_cmd1]
    data.can_fac_align_cmd1 = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 3;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/MrrControlAlignment';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '022c142d4c445433eb445902d2e2f141';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    bool can_fac_align_cmd3
    bool can_fac_align_cmd2
    bool can_fac_align_cmd1
    
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
    const resolved = new MrrControlAlignment(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_fac_align_cmd3 !== undefined) {
      resolved.can_fac_align_cmd3 = msg.can_fac_align_cmd3;
    }
    else {
      resolved.can_fac_align_cmd3 = false
    }

    if (msg.can_fac_align_cmd2 !== undefined) {
      resolved.can_fac_align_cmd2 = msg.can_fac_align_cmd2;
    }
    else {
      resolved.can_fac_align_cmd2 = false
    }

    if (msg.can_fac_align_cmd1 !== undefined) {
      resolved.can_fac_align_cmd1 = msg.can_fac_align_cmd1;
    }
    else {
      resolved.can_fac_align_cmd1 = false
    }

    return resolved;
    }
};

module.exports = MrrControlAlignment;
