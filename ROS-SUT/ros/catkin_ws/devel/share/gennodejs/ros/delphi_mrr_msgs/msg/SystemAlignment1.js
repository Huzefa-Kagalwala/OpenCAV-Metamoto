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

class SystemAlignment1 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_mrr_upside_down = null;
      this.can_blockage_filter_output = null;
      this.can_angle_misalignment_hdr = null;
      this.can_use_angle_misalignment = null;
      this.can_blockage_disable = null;
      this.can_scan_index_ack = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_mrr_upside_down')) {
        this.can_mrr_upside_down = initObj.can_mrr_upside_down
      }
      else {
        this.can_mrr_upside_down = false;
      }
      if (initObj.hasOwnProperty('can_blockage_filter_output')) {
        this.can_blockage_filter_output = initObj.can_blockage_filter_output
      }
      else {
        this.can_blockage_filter_output = 0;
      }
      if (initObj.hasOwnProperty('can_angle_misalignment_hdr')) {
        this.can_angle_misalignment_hdr = initObj.can_angle_misalignment_hdr
      }
      else {
        this.can_angle_misalignment_hdr = 0.0;
      }
      if (initObj.hasOwnProperty('can_use_angle_misalignment')) {
        this.can_use_angle_misalignment = initObj.can_use_angle_misalignment
      }
      else {
        this.can_use_angle_misalignment = false;
      }
      if (initObj.hasOwnProperty('can_blockage_disable')) {
        this.can_blockage_disable = initObj.can_blockage_disable
      }
      else {
        this.can_blockage_disable = false;
      }
      if (initObj.hasOwnProperty('can_scan_index_ack')) {
        this.can_scan_index_ack = initObj.can_scan_index_ack
      }
      else {
        this.can_scan_index_ack = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SystemAlignment1
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_mrr_upside_down]
    bufferOffset = _serializer.bool(obj.can_mrr_upside_down, buffer, bufferOffset);
    // Serialize message field [can_blockage_filter_output]
    bufferOffset = _serializer.uint8(obj.can_blockage_filter_output, buffer, bufferOffset);
    // Serialize message field [can_angle_misalignment_hdr]
    bufferOffset = _serializer.float32(obj.can_angle_misalignment_hdr, buffer, bufferOffset);
    // Serialize message field [can_use_angle_misalignment]
    bufferOffset = _serializer.bool(obj.can_use_angle_misalignment, buffer, bufferOffset);
    // Serialize message field [can_blockage_disable]
    bufferOffset = _serializer.bool(obj.can_blockage_disable, buffer, bufferOffset);
    // Serialize message field [can_scan_index_ack]
    bufferOffset = _serializer.uint16(obj.can_scan_index_ack, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SystemAlignment1
    let len;
    let data = new SystemAlignment1(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_mrr_upside_down]
    data.can_mrr_upside_down = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_blockage_filter_output]
    data.can_blockage_filter_output = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_angle_misalignment_hdr]
    data.can_angle_misalignment_hdr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_use_angle_misalignment]
    data.can_use_angle_misalignment = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_blockage_disable]
    data.can_blockage_disable = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_scan_index_ack]
    data.can_scan_index_ack = _deserializer.uint16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 10;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/SystemAlignment1';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4e20533dd9d1d3391832af45ebd7eff2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    bool     can_mrr_upside_down
    uint8 	 can_blockage_filter_output
    float32  can_angle_misalignment_hdr
    bool     can_use_angle_misalignment
    bool     can_blockage_disable
    uint16   can_scan_index_ack 
    
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
    const resolved = new SystemAlignment1(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_mrr_upside_down !== undefined) {
      resolved.can_mrr_upside_down = msg.can_mrr_upside_down;
    }
    else {
      resolved.can_mrr_upside_down = false
    }

    if (msg.can_blockage_filter_output !== undefined) {
      resolved.can_blockage_filter_output = msg.can_blockage_filter_output;
    }
    else {
      resolved.can_blockage_filter_output = 0
    }

    if (msg.can_angle_misalignment_hdr !== undefined) {
      resolved.can_angle_misalignment_hdr = msg.can_angle_misalignment_hdr;
    }
    else {
      resolved.can_angle_misalignment_hdr = 0.0
    }

    if (msg.can_use_angle_misalignment !== undefined) {
      resolved.can_use_angle_misalignment = msg.can_use_angle_misalignment;
    }
    else {
      resolved.can_use_angle_misalignment = false
    }

    if (msg.can_blockage_disable !== undefined) {
      resolved.can_blockage_disable = msg.can_blockage_disable;
    }
    else {
      resolved.can_blockage_disable = false
    }

    if (msg.can_scan_index_ack !== undefined) {
      resolved.can_scan_index_ack = msg.can_scan_index_ack;
    }
    else {
      resolved.can_scan_index_ack = 0
    }

    return resolved;
    }
};

module.exports = SystemAlignment1;
