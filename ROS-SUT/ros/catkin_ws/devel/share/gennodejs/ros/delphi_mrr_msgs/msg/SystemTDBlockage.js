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

class SystemTDBlockage {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_number_of_tracks_stat = null;
      this.can_number_of_tracks_mov = null;
      this.can_td_scan_counter = null;
      this.can_found_target = null;
      this.can_blockage_td = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_number_of_tracks_stat')) {
        this.can_number_of_tracks_stat = initObj.can_number_of_tracks_stat
      }
      else {
        this.can_number_of_tracks_stat = 0;
      }
      if (initObj.hasOwnProperty('can_number_of_tracks_mov')) {
        this.can_number_of_tracks_mov = initObj.can_number_of_tracks_mov
      }
      else {
        this.can_number_of_tracks_mov = 0;
      }
      if (initObj.hasOwnProperty('can_td_scan_counter')) {
        this.can_td_scan_counter = initObj.can_td_scan_counter
      }
      else {
        this.can_td_scan_counter = 0;
      }
      if (initObj.hasOwnProperty('can_found_target')) {
        this.can_found_target = initObj.can_found_target
      }
      else {
        this.can_found_target = false;
      }
      if (initObj.hasOwnProperty('can_blockage_td')) {
        this.can_blockage_td = initObj.can_blockage_td
      }
      else {
        this.can_blockage_td = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SystemTDBlockage
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_number_of_tracks_stat]
    bufferOffset = _serializer.uint8(obj.can_number_of_tracks_stat, buffer, bufferOffset);
    // Serialize message field [can_number_of_tracks_mov]
    bufferOffset = _serializer.uint8(obj.can_number_of_tracks_mov, buffer, bufferOffset);
    // Serialize message field [can_td_scan_counter]
    bufferOffset = _serializer.uint8(obj.can_td_scan_counter, buffer, bufferOffset);
    // Serialize message field [can_found_target]
    bufferOffset = _serializer.bool(obj.can_found_target, buffer, bufferOffset);
    // Serialize message field [can_blockage_td]
    bufferOffset = _serializer.bool(obj.can_blockage_td, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SystemTDBlockage
    let len;
    let data = new SystemTDBlockage(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_number_of_tracks_stat]
    data.can_number_of_tracks_stat = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_number_of_tracks_mov]
    data.can_number_of_tracks_mov = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_td_scan_counter]
    data.can_td_scan_counter = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_found_target]
    data.can_found_target = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_blockage_td]
    data.can_blockage_td = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/SystemTDBlockage';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '550b50a6768c4163e9261901e2c34d80';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8 	can_number_of_tracks_stat
    uint8 	can_number_of_tracks_mov
    uint8 	can_td_scan_counter
    bool   	can_found_target
    bool    can_blockage_td
    
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
    const resolved = new SystemTDBlockage(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_number_of_tracks_stat !== undefined) {
      resolved.can_number_of_tracks_stat = msg.can_number_of_tracks_stat;
    }
    else {
      resolved.can_number_of_tracks_stat = 0
    }

    if (msg.can_number_of_tracks_mov !== undefined) {
      resolved.can_number_of_tracks_mov = msg.can_number_of_tracks_mov;
    }
    else {
      resolved.can_number_of_tracks_mov = 0
    }

    if (msg.can_td_scan_counter !== undefined) {
      resolved.can_td_scan_counter = msg.can_td_scan_counter;
    }
    else {
      resolved.can_td_scan_counter = 0
    }

    if (msg.can_found_target !== undefined) {
      resolved.can_found_target = msg.can_found_target;
    }
    else {
      resolved.can_found_target = false
    }

    if (msg.can_blockage_td !== undefined) {
      resolved.can_blockage_td = msg.can_blockage_td;
    }
    else {
      resolved.can_blockage_td = false
    }

    return resolved;
    }
};

module.exports = SystemTDBlockage;
