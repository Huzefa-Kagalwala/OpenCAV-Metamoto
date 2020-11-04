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

class SystemStatus {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_vehicle_stat = null;
      this.can_day_night_status = null;
      this.can_wiper_status = null;
      this.can_yaw_rate_validity = null;
      this.can_yaw_rate = null;
      this.can_vehicle_speed_validity = null;
      this.can_vehicle_speed_direction = null;
      this.can_vehicle_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_vehicle_stat')) {
        this.can_vehicle_stat = initObj.can_vehicle_stat
      }
      else {
        this.can_vehicle_stat = false;
      }
      if (initObj.hasOwnProperty('can_day_night_status')) {
        this.can_day_night_status = initObj.can_day_night_status
      }
      else {
        this.can_day_night_status = false;
      }
      if (initObj.hasOwnProperty('can_wiper_status')) {
        this.can_wiper_status = initObj.can_wiper_status
      }
      else {
        this.can_wiper_status = false;
      }
      if (initObj.hasOwnProperty('can_yaw_rate_validity')) {
        this.can_yaw_rate_validity = initObj.can_yaw_rate_validity
      }
      else {
        this.can_yaw_rate_validity = false;
      }
      if (initObj.hasOwnProperty('can_yaw_rate')) {
        this.can_yaw_rate = initObj.can_yaw_rate
      }
      else {
        this.can_yaw_rate = 0.0;
      }
      if (initObj.hasOwnProperty('can_vehicle_speed_validity')) {
        this.can_vehicle_speed_validity = initObj.can_vehicle_speed_validity
      }
      else {
        this.can_vehicle_speed_validity = false;
      }
      if (initObj.hasOwnProperty('can_vehicle_speed_direction')) {
        this.can_vehicle_speed_direction = initObj.can_vehicle_speed_direction
      }
      else {
        this.can_vehicle_speed_direction = false;
      }
      if (initObj.hasOwnProperty('can_vehicle_speed')) {
        this.can_vehicle_speed = initObj.can_vehicle_speed
      }
      else {
        this.can_vehicle_speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SystemStatus
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_vehicle_stat]
    bufferOffset = _serializer.bool(obj.can_vehicle_stat, buffer, bufferOffset);
    // Serialize message field [can_day_night_status]
    bufferOffset = _serializer.bool(obj.can_day_night_status, buffer, bufferOffset);
    // Serialize message field [can_wiper_status]
    bufferOffset = _serializer.bool(obj.can_wiper_status, buffer, bufferOffset);
    // Serialize message field [can_yaw_rate_validity]
    bufferOffset = _serializer.bool(obj.can_yaw_rate_validity, buffer, bufferOffset);
    // Serialize message field [can_yaw_rate]
    bufferOffset = _serializer.float32(obj.can_yaw_rate, buffer, bufferOffset);
    // Serialize message field [can_vehicle_speed_validity]
    bufferOffset = _serializer.bool(obj.can_vehicle_speed_validity, buffer, bufferOffset);
    // Serialize message field [can_vehicle_speed_direction]
    bufferOffset = _serializer.bool(obj.can_vehicle_speed_direction, buffer, bufferOffset);
    // Serialize message field [can_vehicle_speed]
    bufferOffset = _serializer.float32(obj.can_vehicle_speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SystemStatus
    let len;
    let data = new SystemStatus(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_vehicle_stat]
    data.can_vehicle_stat = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_day_night_status]
    data.can_day_night_status = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_wiper_status]
    data.can_wiper_status = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_yaw_rate_validity]
    data.can_yaw_rate_validity = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_yaw_rate]
    data.can_yaw_rate = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_vehicle_speed_validity]
    data.can_vehicle_speed_validity = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_vehicle_speed_direction]
    data.can_vehicle_speed_direction = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_vehicle_speed]
    data.can_vehicle_speed = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 14;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/SystemStatus';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f95e8b91cc7c4107288a89a3d6af6f1d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    bool    can_vehicle_stat
    bool    can_day_night_status
    bool    can_wiper_status
    bool    can_yaw_rate_validity
    float32 can_yaw_rate
    bool    can_vehicle_speed_validity
    bool    can_vehicle_speed_direction
    float32 can_vehicle_speed
    
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
    const resolved = new SystemStatus(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_vehicle_stat !== undefined) {
      resolved.can_vehicle_stat = msg.can_vehicle_stat;
    }
    else {
      resolved.can_vehicle_stat = false
    }

    if (msg.can_day_night_status !== undefined) {
      resolved.can_day_night_status = msg.can_day_night_status;
    }
    else {
      resolved.can_day_night_status = false
    }

    if (msg.can_wiper_status !== undefined) {
      resolved.can_wiper_status = msg.can_wiper_status;
    }
    else {
      resolved.can_wiper_status = false
    }

    if (msg.can_yaw_rate_validity !== undefined) {
      resolved.can_yaw_rate_validity = msg.can_yaw_rate_validity;
    }
    else {
      resolved.can_yaw_rate_validity = false
    }

    if (msg.can_yaw_rate !== undefined) {
      resolved.can_yaw_rate = msg.can_yaw_rate;
    }
    else {
      resolved.can_yaw_rate = 0.0
    }

    if (msg.can_vehicle_speed_validity !== undefined) {
      resolved.can_vehicle_speed_validity = msg.can_vehicle_speed_validity;
    }
    else {
      resolved.can_vehicle_speed_validity = false
    }

    if (msg.can_vehicle_speed_direction !== undefined) {
      resolved.can_vehicle_speed_direction = msg.can_vehicle_speed_direction;
    }
    else {
      resolved.can_vehicle_speed_direction = false
    }

    if (msg.can_vehicle_speed !== undefined) {
      resolved.can_vehicle_speed = msg.can_vehicle_speed;
    }
    else {
      resolved.can_vehicle_speed = 0.0
    }

    return resolved;
    }
};

module.exports = SystemStatus;
