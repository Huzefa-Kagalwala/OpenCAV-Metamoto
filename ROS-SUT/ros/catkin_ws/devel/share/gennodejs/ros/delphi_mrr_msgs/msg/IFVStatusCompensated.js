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

class IFVStatusCompensated {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_yaw_rate_calc_qf = null;
      this.can_yaw_rate_calc = null;
      this.can_yaw_rate_bias = null;
      this.can_vehicle_speed_calc = null;
      this.can_veh_spd_comp_factor = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_yaw_rate_calc_qf')) {
        this.can_yaw_rate_calc_qf = initObj.can_yaw_rate_calc_qf
      }
      else {
        this.can_yaw_rate_calc_qf = 0;
      }
      if (initObj.hasOwnProperty('can_yaw_rate_calc')) {
        this.can_yaw_rate_calc = initObj.can_yaw_rate_calc
      }
      else {
        this.can_yaw_rate_calc = 0.0;
      }
      if (initObj.hasOwnProperty('can_yaw_rate_bias')) {
        this.can_yaw_rate_bias = initObj.can_yaw_rate_bias
      }
      else {
        this.can_yaw_rate_bias = 0.0;
      }
      if (initObj.hasOwnProperty('can_vehicle_speed_calc')) {
        this.can_vehicle_speed_calc = initObj.can_vehicle_speed_calc
      }
      else {
        this.can_vehicle_speed_calc = 0.0;
      }
      if (initObj.hasOwnProperty('can_veh_spd_comp_factor')) {
        this.can_veh_spd_comp_factor = initObj.can_veh_spd_comp_factor
      }
      else {
        this.can_veh_spd_comp_factor = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type IFVStatusCompensated
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_yaw_rate_calc_qf]
    bufferOffset = _serializer.uint8(obj.can_yaw_rate_calc_qf, buffer, bufferOffset);
    // Serialize message field [can_yaw_rate_calc]
    bufferOffset = _serializer.float32(obj.can_yaw_rate_calc, buffer, bufferOffset);
    // Serialize message field [can_yaw_rate_bias]
    bufferOffset = _serializer.float32(obj.can_yaw_rate_bias, buffer, bufferOffset);
    // Serialize message field [can_vehicle_speed_calc]
    bufferOffset = _serializer.float32(obj.can_vehicle_speed_calc, buffer, bufferOffset);
    // Serialize message field [can_veh_spd_comp_factor]
    bufferOffset = _serializer.float32(obj.can_veh_spd_comp_factor, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type IFVStatusCompensated
    let len;
    let data = new IFVStatusCompensated(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_yaw_rate_calc_qf]
    data.can_yaw_rate_calc_qf = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_yaw_rate_calc]
    data.can_yaw_rate_calc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_yaw_rate_bias]
    data.can_yaw_rate_bias = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_vehicle_speed_calc]
    data.can_vehicle_speed_calc = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_veh_spd_comp_factor]
    data.can_veh_spd_comp_factor = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 17;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/IFVStatusCompensated';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '273b2128306b82c1d31a3b67f601a030';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8 can_yaw_rate_calc_qf
    float32 can_yaw_rate_calc
    float32 can_yaw_rate_bias
    float32 can_vehicle_speed_calc
    float32 can_veh_spd_comp_factor
    
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
    const resolved = new IFVStatusCompensated(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_yaw_rate_calc_qf !== undefined) {
      resolved.can_yaw_rate_calc_qf = msg.can_yaw_rate_calc_qf;
    }
    else {
      resolved.can_yaw_rate_calc_qf = 0
    }

    if (msg.can_yaw_rate_calc !== undefined) {
      resolved.can_yaw_rate_calc = msg.can_yaw_rate_calc;
    }
    else {
      resolved.can_yaw_rate_calc = 0.0
    }

    if (msg.can_yaw_rate_bias !== undefined) {
      resolved.can_yaw_rate_bias = msg.can_yaw_rate_bias;
    }
    else {
      resolved.can_yaw_rate_bias = 0.0
    }

    if (msg.can_vehicle_speed_calc !== undefined) {
      resolved.can_vehicle_speed_calc = msg.can_vehicle_speed_calc;
    }
    else {
      resolved.can_vehicle_speed_calc = 0.0
    }

    if (msg.can_veh_spd_comp_factor !== undefined) {
      resolved.can_veh_spd_comp_factor = msg.can_veh_spd_comp_factor;
    }
    else {
      resolved.can_veh_spd_comp_factor = 0.0
    }

    return resolved;
    }
};

module.exports = IFVStatusCompensated;
