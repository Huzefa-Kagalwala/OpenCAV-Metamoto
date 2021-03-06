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

class MrrHeaderSensorPosition {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_sensor_polarity = null;
      this.can_sensor_lat_offset = null;
      this.can_sensor_long_offset = null;
      this.can_sensor_hangle_offset = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_sensor_polarity')) {
        this.can_sensor_polarity = initObj.can_sensor_polarity
      }
      else {
        this.can_sensor_polarity = false;
      }
      if (initObj.hasOwnProperty('can_sensor_lat_offset')) {
        this.can_sensor_lat_offset = initObj.can_sensor_lat_offset
      }
      else {
        this.can_sensor_lat_offset = 0.0;
      }
      if (initObj.hasOwnProperty('can_sensor_long_offset')) {
        this.can_sensor_long_offset = initObj.can_sensor_long_offset
      }
      else {
        this.can_sensor_long_offset = 0.0;
      }
      if (initObj.hasOwnProperty('can_sensor_hangle_offset')) {
        this.can_sensor_hangle_offset = initObj.can_sensor_hangle_offset
      }
      else {
        this.can_sensor_hangle_offset = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MrrHeaderSensorPosition
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_sensor_polarity]
    bufferOffset = _serializer.bool(obj.can_sensor_polarity, buffer, bufferOffset);
    // Serialize message field [can_sensor_lat_offset]
    bufferOffset = _serializer.float32(obj.can_sensor_lat_offset, buffer, bufferOffset);
    // Serialize message field [can_sensor_long_offset]
    bufferOffset = _serializer.float32(obj.can_sensor_long_offset, buffer, bufferOffset);
    // Serialize message field [can_sensor_hangle_offset]
    bufferOffset = _serializer.float32(obj.can_sensor_hangle_offset, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MrrHeaderSensorPosition
    let len;
    let data = new MrrHeaderSensorPosition(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_sensor_polarity]
    data.can_sensor_polarity = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [can_sensor_lat_offset]
    data.can_sensor_lat_offset = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_sensor_long_offset]
    data.can_sensor_long_offset = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_sensor_hangle_offset]
    data.can_sensor_hangle_offset = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 13;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/MrrHeaderSensorPosition';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1f8dc3bc1765d0520979335ee0f8d03a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    bool    can_sensor_polarity
    float32 can_sensor_lat_offset
    float32 can_sensor_long_offset
    float32 can_sensor_hangle_offset
          
    
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
    const resolved = new MrrHeaderSensorPosition(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_sensor_polarity !== undefined) {
      resolved.can_sensor_polarity = msg.can_sensor_polarity;
    }
    else {
      resolved.can_sensor_polarity = false
    }

    if (msg.can_sensor_lat_offset !== undefined) {
      resolved.can_sensor_lat_offset = msg.can_sensor_lat_offset;
    }
    else {
      resolved.can_sensor_lat_offset = 0.0
    }

    if (msg.can_sensor_long_offset !== undefined) {
      resolved.can_sensor_long_offset = msg.can_sensor_long_offset;
    }
    else {
      resolved.can_sensor_long_offset = 0.0
    }

    if (msg.can_sensor_hangle_offset !== undefined) {
      resolved.can_sensor_hangle_offset = msg.can_sensor_hangle_offset;
    }
    else {
      resolved.can_sensor_hangle_offset = 0.0
    }

    return resolved;
    }
};

module.exports = MrrHeaderSensorPosition;
