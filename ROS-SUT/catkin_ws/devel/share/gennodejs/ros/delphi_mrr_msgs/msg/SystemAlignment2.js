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

class SystemAlignment2 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_serv_align_updates_need = null;
      this.can_serv_align_type = null;
      this.can_radar_height = null;
      this.can_radar_fov_mr = null;
      this.can_radar_fov_rr = null;
      this.can_align_enable = null;
      this.can_angle_mounting_hoffset = null;
      this.can_aalign_avg_ctr_total = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_serv_align_updates_need')) {
        this.can_serv_align_updates_need = initObj.can_serv_align_updates_need
      }
      else {
        this.can_serv_align_updates_need = 0;
      }
      if (initObj.hasOwnProperty('can_serv_align_type')) {
        this.can_serv_align_type = initObj.can_serv_align_type
      }
      else {
        this.can_serv_align_type = false;
      }
      if (initObj.hasOwnProperty('can_radar_height')) {
        this.can_radar_height = initObj.can_radar_height
      }
      else {
        this.can_radar_height = 0;
      }
      if (initObj.hasOwnProperty('can_radar_fov_mr')) {
        this.can_radar_fov_mr = initObj.can_radar_fov_mr
      }
      else {
        this.can_radar_fov_mr = 0;
      }
      if (initObj.hasOwnProperty('can_radar_fov_rr')) {
        this.can_radar_fov_rr = initObj.can_radar_fov_rr
      }
      else {
        this.can_radar_fov_rr = 0;
      }
      if (initObj.hasOwnProperty('can_align_enable')) {
        this.can_align_enable = initObj.can_align_enable
      }
      else {
        this.can_align_enable = 0;
      }
      if (initObj.hasOwnProperty('can_angle_mounting_hoffset')) {
        this.can_angle_mounting_hoffset = initObj.can_angle_mounting_hoffset
      }
      else {
        this.can_angle_mounting_hoffset = 0.0;
      }
      if (initObj.hasOwnProperty('can_aalign_avg_ctr_total')) {
        this.can_aalign_avg_ctr_total = initObj.can_aalign_avg_ctr_total
      }
      else {
        this.can_aalign_avg_ctr_total = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SystemAlignment2
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_serv_align_updates_need]
    bufferOffset = _serializer.uint8(obj.can_serv_align_updates_need, buffer, bufferOffset);
    // Serialize message field [can_serv_align_type]
    bufferOffset = _serializer.bool(obj.can_serv_align_type, buffer, bufferOffset);
    // Serialize message field [can_radar_height]
    bufferOffset = _serializer.uint8(obj.can_radar_height, buffer, bufferOffset);
    // Serialize message field [can_radar_fov_mr]
    bufferOffset = _serializer.uint8(obj.can_radar_fov_mr, buffer, bufferOffset);
    // Serialize message field [can_radar_fov_rr]
    bufferOffset = _serializer.uint8(obj.can_radar_fov_rr, buffer, bufferOffset);
    // Serialize message field [can_align_enable]
    bufferOffset = _serializer.uint8(obj.can_align_enable, buffer, bufferOffset);
    // Serialize message field [can_angle_mounting_hoffset]
    bufferOffset = _serializer.float32(obj.can_angle_mounting_hoffset, buffer, bufferOffset);
    // Serialize message field [can_aalign_avg_ctr_total]
    bufferOffset = _serializer.uint8(obj.can_aalign_avg_ctr_total, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SystemAlignment2
    let len;
    let data = new SystemAlignment2(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_serv_align_updates_need]
    data.can_serv_align_updates_need = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_serv_align_type]
    data.can_serv_align_type = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_radar_height]
    data.can_radar_height = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_radar_fov_mr]
    data.can_radar_fov_mr = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_radar_fov_rr]
    data.can_radar_fov_rr = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_align_enable]
    data.can_align_enable = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_angle_mounting_hoffset]
    data.can_angle_mounting_hoffset = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_aalign_avg_ctr_total]
    data.can_aalign_avg_ctr_total = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 11;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/SystemAlignment2';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fab1b79e32d15c3fd6d3030b565850a5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8 	 can_serv_align_updates_need
    bool     can_serv_align_type
    uint8 	 can_radar_height
    uint8 	 can_radar_fov_mr
    uint8 	 can_radar_fov_rr
    uint8 	 can_align_enable
    float32  can_angle_mounting_hoffset
    uint8 	 can_aalign_avg_ctr_total
    
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
    const resolved = new SystemAlignment2(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_serv_align_updates_need !== undefined) {
      resolved.can_serv_align_updates_need = msg.can_serv_align_updates_need;
    }
    else {
      resolved.can_serv_align_updates_need = 0
    }

    if (msg.can_serv_align_type !== undefined) {
      resolved.can_serv_align_type = msg.can_serv_align_type;
    }
    else {
      resolved.can_serv_align_type = false
    }

    if (msg.can_radar_height !== undefined) {
      resolved.can_radar_height = msg.can_radar_height;
    }
    else {
      resolved.can_radar_height = 0
    }

    if (msg.can_radar_fov_mr !== undefined) {
      resolved.can_radar_fov_mr = msg.can_radar_fov_mr;
    }
    else {
      resolved.can_radar_fov_mr = 0
    }

    if (msg.can_radar_fov_rr !== undefined) {
      resolved.can_radar_fov_rr = msg.can_radar_fov_rr;
    }
    else {
      resolved.can_radar_fov_rr = 0
    }

    if (msg.can_align_enable !== undefined) {
      resolved.can_align_enable = msg.can_align_enable;
    }
    else {
      resolved.can_align_enable = 0
    }

    if (msg.can_angle_mounting_hoffset !== undefined) {
      resolved.can_angle_mounting_hoffset = msg.can_angle_mounting_hoffset;
    }
    else {
      resolved.can_angle_mounting_hoffset = 0.0
    }

    if (msg.can_aalign_avg_ctr_total !== undefined) {
      resolved.can_aalign_avg_ctr_total = msg.can_aalign_avg_ctr_total;
    }
    else {
      resolved.can_aalign_avg_ctr_total = 0
    }

    return resolved;
    }
};

module.exports = SystemAlignment2;
