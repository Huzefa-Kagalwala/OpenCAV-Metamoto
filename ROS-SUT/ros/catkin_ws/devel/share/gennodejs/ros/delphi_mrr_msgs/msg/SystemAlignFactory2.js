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

class SystemAlignFactory2 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_lateral_mounting_offset = null;
      this.can_fac_plate_tilt_number = null;
      this.can_fac_plate_tilt_angle = null;
      this.can_fac_plate_positions_total = null;
      this.can_fac_align_max_nt = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_lateral_mounting_offset')) {
        this.can_lateral_mounting_offset = initObj.can_lateral_mounting_offset
      }
      else {
        this.can_lateral_mounting_offset = 0.0;
      }
      if (initObj.hasOwnProperty('can_fac_plate_tilt_number')) {
        this.can_fac_plate_tilt_number = initObj.can_fac_plate_tilt_number
      }
      else {
        this.can_fac_plate_tilt_number = 0;
      }
      if (initObj.hasOwnProperty('can_fac_plate_tilt_angle')) {
        this.can_fac_plate_tilt_angle = initObj.can_fac_plate_tilt_angle
      }
      else {
        this.can_fac_plate_tilt_angle = 0.0;
      }
      if (initObj.hasOwnProperty('can_fac_plate_positions_total')) {
        this.can_fac_plate_positions_total = initObj.can_fac_plate_positions_total
      }
      else {
        this.can_fac_plate_positions_total = 0;
      }
      if (initObj.hasOwnProperty('can_fac_align_max_nt')) {
        this.can_fac_align_max_nt = initObj.can_fac_align_max_nt
      }
      else {
        this.can_fac_align_max_nt = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SystemAlignFactory2
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_lateral_mounting_offset]
    bufferOffset = _serializer.float32(obj.can_lateral_mounting_offset, buffer, bufferOffset);
    // Serialize message field [can_fac_plate_tilt_number]
    bufferOffset = _serializer.uint8(obj.can_fac_plate_tilt_number, buffer, bufferOffset);
    // Serialize message field [can_fac_plate_tilt_angle]
    bufferOffset = _serializer.float32(obj.can_fac_plate_tilt_angle, buffer, bufferOffset);
    // Serialize message field [can_fac_plate_positions_total]
    bufferOffset = _serializer.uint8(obj.can_fac_plate_positions_total, buffer, bufferOffset);
    // Serialize message field [can_fac_align_max_nt]
    bufferOffset = _serializer.uint8(obj.can_fac_align_max_nt, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SystemAlignFactory2
    let len;
    let data = new SystemAlignFactory2(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_lateral_mounting_offset]
    data.can_lateral_mounting_offset = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fac_plate_tilt_number]
    data.can_fac_plate_tilt_number = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_fac_plate_tilt_angle]
    data.can_fac_plate_tilt_angle = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fac_plate_positions_total]
    data.can_fac_plate_positions_total = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_fac_align_max_nt]
    data.can_fac_align_max_nt = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 11;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/SystemAlignFactory2';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2a675dbc2b977f155eb8d12a8fa7811e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    float32 can_lateral_mounting_offset 
    uint8   can_fac_plate_tilt_number
    float32 can_fac_plate_tilt_angle
    uint8   can_fac_plate_positions_total
    uint8   can_fac_align_max_nt
    
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
    const resolved = new SystemAlignFactory2(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_lateral_mounting_offset !== undefined) {
      resolved.can_lateral_mounting_offset = msg.can_lateral_mounting_offset;
    }
    else {
      resolved.can_lateral_mounting_offset = 0.0
    }

    if (msg.can_fac_plate_tilt_number !== undefined) {
      resolved.can_fac_plate_tilt_number = msg.can_fac_plate_tilt_number;
    }
    else {
      resolved.can_fac_plate_tilt_number = 0
    }

    if (msg.can_fac_plate_tilt_angle !== undefined) {
      resolved.can_fac_plate_tilt_angle = msg.can_fac_plate_tilt_angle;
    }
    else {
      resolved.can_fac_plate_tilt_angle = 0.0
    }

    if (msg.can_fac_plate_positions_total !== undefined) {
      resolved.can_fac_plate_positions_total = msg.can_fac_plate_positions_total;
    }
    else {
      resolved.can_fac_plate_positions_total = 0
    }

    if (msg.can_fac_align_max_nt !== undefined) {
      resolved.can_fac_align_max_nt = msg.can_fac_align_max_nt;
    }
    else {
      resolved.can_fac_align_max_nt = 0
    }

    return resolved;
    }
};

module.exports = SystemAlignFactory2;
