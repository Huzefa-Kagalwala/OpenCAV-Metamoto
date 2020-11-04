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

class LrosCarCfgFord {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.k_radar_azimuth_polarity = null;
      this.can_fa_vert_ground_offset = null;
      this.can_fa_vert_lower_limit = null;
      this.can_fa_vert_upper_limit = null;
      this.can_lros_carcfgvehtype_ford = null;
      this.can_lros_carcfgengine_ford = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('k_radar_azimuth_polarity')) {
        this.k_radar_azimuth_polarity = initObj.k_radar_azimuth_polarity
      }
      else {
        this.k_radar_azimuth_polarity = 0;
      }
      if (initObj.hasOwnProperty('can_fa_vert_ground_offset')) {
        this.can_fa_vert_ground_offset = initObj.can_fa_vert_ground_offset
      }
      else {
        this.can_fa_vert_ground_offset = 0.0;
      }
      if (initObj.hasOwnProperty('can_fa_vert_lower_limit')) {
        this.can_fa_vert_lower_limit = initObj.can_fa_vert_lower_limit
      }
      else {
        this.can_fa_vert_lower_limit = 0.0;
      }
      if (initObj.hasOwnProperty('can_fa_vert_upper_limit')) {
        this.can_fa_vert_upper_limit = initObj.can_fa_vert_upper_limit
      }
      else {
        this.can_fa_vert_upper_limit = 0.0;
      }
      if (initObj.hasOwnProperty('can_lros_carcfgvehtype_ford')) {
        this.can_lros_carcfgvehtype_ford = initObj.can_lros_carcfgvehtype_ford
      }
      else {
        this.can_lros_carcfgvehtype_ford = 0;
      }
      if (initObj.hasOwnProperty('can_lros_carcfgengine_ford')) {
        this.can_lros_carcfgengine_ford = initObj.can_lros_carcfgengine_ford
      }
      else {
        this.can_lros_carcfgengine_ford = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LrosCarCfgFord
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [k_radar_azimuth_polarity]
    bufferOffset = _serializer.int8(obj.k_radar_azimuth_polarity, buffer, bufferOffset);
    // Serialize message field [can_fa_vert_ground_offset]
    bufferOffset = _serializer.float32(obj.can_fa_vert_ground_offset, buffer, bufferOffset);
    // Serialize message field [can_fa_vert_lower_limit]
    bufferOffset = _serializer.float32(obj.can_fa_vert_lower_limit, buffer, bufferOffset);
    // Serialize message field [can_fa_vert_upper_limit]
    bufferOffset = _serializer.float32(obj.can_fa_vert_upper_limit, buffer, bufferOffset);
    // Serialize message field [can_lros_carcfgvehtype_ford]
    bufferOffset = _serializer.uint8(obj.can_lros_carcfgvehtype_ford, buffer, bufferOffset);
    // Serialize message field [can_lros_carcfgengine_ford]
    bufferOffset = _serializer.uint8(obj.can_lros_carcfgengine_ford, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LrosCarCfgFord
    let len;
    let data = new LrosCarCfgFord(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [k_radar_azimuth_polarity]
    data.k_radar_azimuth_polarity = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [can_fa_vert_ground_offset]
    data.can_fa_vert_ground_offset = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fa_vert_lower_limit]
    data.can_fa_vert_lower_limit = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_fa_vert_upper_limit]
    data.can_fa_vert_upper_limit = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_lros_carcfgvehtype_ford]
    data.can_lros_carcfgvehtype_ford = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_lros_carcfgengine_ford]
    data.can_lros_carcfgengine_ford = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 15;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/LrosCarCfgFord';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6b40261fec542e406fc60f9b9b2d121a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    int8 	    k_radar_azimuth_polarity
    float32  	can_fa_vert_ground_offset
    float32  	can_fa_vert_lower_limit
    float32  	can_fa_vert_upper_limit
    uint8 	  can_lros_carcfgvehtype_ford
    uint8 	  can_lros_carcfgengine_ford
    
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
    const resolved = new LrosCarCfgFord(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.k_radar_azimuth_polarity !== undefined) {
      resolved.k_radar_azimuth_polarity = msg.k_radar_azimuth_polarity;
    }
    else {
      resolved.k_radar_azimuth_polarity = 0
    }

    if (msg.can_fa_vert_ground_offset !== undefined) {
      resolved.can_fa_vert_ground_offset = msg.can_fa_vert_ground_offset;
    }
    else {
      resolved.can_fa_vert_ground_offset = 0.0
    }

    if (msg.can_fa_vert_lower_limit !== undefined) {
      resolved.can_fa_vert_lower_limit = msg.can_fa_vert_lower_limit;
    }
    else {
      resolved.can_fa_vert_lower_limit = 0.0
    }

    if (msg.can_fa_vert_upper_limit !== undefined) {
      resolved.can_fa_vert_upper_limit = msg.can_fa_vert_upper_limit;
    }
    else {
      resolved.can_fa_vert_upper_limit = 0.0
    }

    if (msg.can_lros_carcfgvehtype_ford !== undefined) {
      resolved.can_lros_carcfgvehtype_ford = msg.can_lros_carcfgvehtype_ford;
    }
    else {
      resolved.can_lros_carcfgvehtype_ford = 0
    }

    if (msg.can_lros_carcfgengine_ford !== undefined) {
      resolved.can_lros_carcfgengine_ford = msg.can_lros_carcfgengine_ford;
    }
    else {
      resolved.can_lros_carcfgengine_ford = 0
    }

    return resolved;
    }
};

module.exports = LrosCarCfgFord;
