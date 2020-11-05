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

class SystemAlignFactory1 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_fac_tgt_range_r2m = null;
      this.can_fac_tgt_range_m2t = null;
      this.can_fac_tgt_range1 = null;
      this.can_fac_tgt_mtg_space_hor = null;
      this.can_fac_tgt_mtg_offset = null;
      this.can_fac_align_samp_req = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_fac_tgt_range_r2m')) {
        this.can_fac_tgt_range_r2m = initObj.can_fac_tgt_range_r2m
      }
      else {
        this.can_fac_tgt_range_r2m = 0.0;
      }
      if (initObj.hasOwnProperty('can_fac_tgt_range_m2t')) {
        this.can_fac_tgt_range_m2t = initObj.can_fac_tgt_range_m2t
      }
      else {
        this.can_fac_tgt_range_m2t = 0.0;
      }
      if (initObj.hasOwnProperty('can_fac_tgt_range1')) {
        this.can_fac_tgt_range1 = initObj.can_fac_tgt_range1
      }
      else {
        this.can_fac_tgt_range1 = 0.0;
      }
      if (initObj.hasOwnProperty('can_fac_tgt_mtg_space_hor')) {
        this.can_fac_tgt_mtg_space_hor = initObj.can_fac_tgt_mtg_space_hor
      }
      else {
        this.can_fac_tgt_mtg_space_hor = 0;
      }
      if (initObj.hasOwnProperty('can_fac_tgt_mtg_offset')) {
        this.can_fac_tgt_mtg_offset = initObj.can_fac_tgt_mtg_offset
      }
      else {
        this.can_fac_tgt_mtg_offset = 0;
      }
      if (initObj.hasOwnProperty('can_fac_align_samp_req')) {
        this.can_fac_align_samp_req = initObj.can_fac_align_samp_req
      }
      else {
        this.can_fac_align_samp_req = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SystemAlignFactory1
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_fac_tgt_range_r2m]
    bufferOffset = _serializer.float32(obj.can_fac_tgt_range_r2m, buffer, bufferOffset);
    // Serialize message field [can_fac_tgt_range_m2t]
    bufferOffset = _serializer.float32(obj.can_fac_tgt_range_m2t, buffer, bufferOffset);
    // Serialize message field [can_fac_tgt_range1]
    bufferOffset = _serializer.float32(obj.can_fac_tgt_range1, buffer, bufferOffset);
    // Serialize message field [can_fac_tgt_mtg_space_hor]
    bufferOffset = _serializer.uint8(obj.can_fac_tgt_mtg_space_hor, buffer, bufferOffset);
    // Serialize message field [can_fac_tgt_mtg_offset]
    bufferOffset = _serializer.uint8(obj.can_fac_tgt_mtg_offset, buffer, bufferOffset);
    // Serialize message field [can_fac_align_samp_req]
    bufferOffset = _serializer.uint8(obj.can_fac_align_samp_req, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SystemAlignFactory1
    let len;
    let data = new SystemAlignFactory1(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_fac_tgt_range_r2m]
    data.can_fac_tgt_range_r2m = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fac_tgt_range_m2t]
    data.can_fac_tgt_range_m2t = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fac_tgt_range1]
    data.can_fac_tgt_range1 = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fac_tgt_mtg_space_hor]
    data.can_fac_tgt_mtg_space_hor = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_fac_tgt_mtg_offset]
    data.can_fac_tgt_mtg_offset = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_fac_align_samp_req]
    data.can_fac_align_samp_req = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 15;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/SystemAlignFactory1';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '33dc19c198faf55bc08750372fc54a34';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    float32 can_fac_tgt_range_r2m
    float32 can_fac_tgt_range_m2t
    float32 can_fac_tgt_range1
    uint8  can_fac_tgt_mtg_space_hor
    uint8  can_fac_tgt_mtg_offset
    uint8  can_fac_align_samp_req
    
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
    const resolved = new SystemAlignFactory1(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_fac_tgt_range_r2m !== undefined) {
      resolved.can_fac_tgt_range_r2m = msg.can_fac_tgt_range_r2m;
    }
    else {
      resolved.can_fac_tgt_range_r2m = 0.0
    }

    if (msg.can_fac_tgt_range_m2t !== undefined) {
      resolved.can_fac_tgt_range_m2t = msg.can_fac_tgt_range_m2t;
    }
    else {
      resolved.can_fac_tgt_range_m2t = 0.0
    }

    if (msg.can_fac_tgt_range1 !== undefined) {
      resolved.can_fac_tgt_range1 = msg.can_fac_tgt_range1;
    }
    else {
      resolved.can_fac_tgt_range1 = 0.0
    }

    if (msg.can_fac_tgt_mtg_space_hor !== undefined) {
      resolved.can_fac_tgt_mtg_space_hor = msg.can_fac_tgt_mtg_space_hor;
    }
    else {
      resolved.can_fac_tgt_mtg_space_hor = 0
    }

    if (msg.can_fac_tgt_mtg_offset !== undefined) {
      resolved.can_fac_tgt_mtg_offset = msg.can_fac_tgt_mtg_offset;
    }
    else {
      resolved.can_fac_tgt_mtg_offset = 0
    }

    if (msg.can_fac_align_samp_req !== undefined) {
      resolved.can_fac_align_samp_req = msg.can_fac_align_samp_req;
    }
    else {
      resolved.can_fac_align_samp_req = 0
    }

    return resolved;
    }
};

module.exports = SystemAlignFactory1;
