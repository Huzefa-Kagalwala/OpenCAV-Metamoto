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

class LrosSignalsActualValues {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_power_supp_ford = null;
      this.can_power_motive_ford = null;
      this.can_cruise_status_ford = null;
      this.can_veh_batt_volt = null;
      this.can_gear_position = null;
      this.can_ambient_temp = null;
      this.can_ign_status = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_power_supp_ford')) {
        this.can_power_supp_ford = initObj.can_power_supp_ford
      }
      else {
        this.can_power_supp_ford = 0;
      }
      if (initObj.hasOwnProperty('can_power_motive_ford')) {
        this.can_power_motive_ford = initObj.can_power_motive_ford
      }
      else {
        this.can_power_motive_ford = 0;
      }
      if (initObj.hasOwnProperty('can_cruise_status_ford')) {
        this.can_cruise_status_ford = initObj.can_cruise_status_ford
      }
      else {
        this.can_cruise_status_ford = 0.0;
      }
      if (initObj.hasOwnProperty('can_veh_batt_volt')) {
        this.can_veh_batt_volt = initObj.can_veh_batt_volt
      }
      else {
        this.can_veh_batt_volt = 0;
      }
      if (initObj.hasOwnProperty('can_gear_position')) {
        this.can_gear_position = initObj.can_gear_position
      }
      else {
        this.can_gear_position = 0;
      }
      if (initObj.hasOwnProperty('can_ambient_temp')) {
        this.can_ambient_temp = initObj.can_ambient_temp
      }
      else {
        this.can_ambient_temp = 0.0;
      }
      if (initObj.hasOwnProperty('can_ign_status')) {
        this.can_ign_status = initObj.can_ign_status
      }
      else {
        this.can_ign_status = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type LrosSignalsActualValues
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_power_supp_ford]
    bufferOffset = _serializer.uint8(obj.can_power_supp_ford, buffer, bufferOffset);
    // Serialize message field [can_power_motive_ford]
    bufferOffset = _serializer.uint8(obj.can_power_motive_ford, buffer, bufferOffset);
    // Serialize message field [can_cruise_status_ford]
    bufferOffset = _serializer.float32(obj.can_cruise_status_ford, buffer, bufferOffset);
    // Serialize message field [can_veh_batt_volt]
    bufferOffset = _serializer.uint8(obj.can_veh_batt_volt, buffer, bufferOffset);
    // Serialize message field [can_gear_position]
    bufferOffset = _serializer.uint16(obj.can_gear_position, buffer, bufferOffset);
    // Serialize message field [can_ambient_temp]
    bufferOffset = _serializer.float32(obj.can_ambient_temp, buffer, bufferOffset);
    // Serialize message field [can_ign_status]
    bufferOffset = _serializer.uint8(obj.can_ign_status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type LrosSignalsActualValues
    let len;
    let data = new LrosSignalsActualValues(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_power_supp_ford]
    data.can_power_supp_ford = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_power_motive_ford]
    data.can_power_motive_ford = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_cruise_status_ford]
    data.can_cruise_status_ford = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_veh_batt_volt]
    data.can_veh_batt_volt = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_gear_position]
    data.can_gear_position = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [can_ambient_temp]
    data.can_ambient_temp = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_ign_status]
    data.can_ign_status = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 14;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/LrosSignalsActualValues';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0716096f6271f8e0b8822fbc1fb61142';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8 	  can_power_supp_ford
    uint8 	  can_power_motive_ford
    float32   can_cruise_status_ford
    uint8 	  can_veh_batt_volt
    uint16 	  can_gear_position
    float32   can_ambient_temp
    uint8 	  can_ign_status
    
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
    const resolved = new LrosSignalsActualValues(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_power_supp_ford !== undefined) {
      resolved.can_power_supp_ford = msg.can_power_supp_ford;
    }
    else {
      resolved.can_power_supp_ford = 0
    }

    if (msg.can_power_motive_ford !== undefined) {
      resolved.can_power_motive_ford = msg.can_power_motive_ford;
    }
    else {
      resolved.can_power_motive_ford = 0
    }

    if (msg.can_cruise_status_ford !== undefined) {
      resolved.can_cruise_status_ford = msg.can_cruise_status_ford;
    }
    else {
      resolved.can_cruise_status_ford = 0.0
    }

    if (msg.can_veh_batt_volt !== undefined) {
      resolved.can_veh_batt_volt = msg.can_veh_batt_volt;
    }
    else {
      resolved.can_veh_batt_volt = 0
    }

    if (msg.can_gear_position !== undefined) {
      resolved.can_gear_position = msg.can_gear_position;
    }
    else {
      resolved.can_gear_position = 0
    }

    if (msg.can_ambient_temp !== undefined) {
      resolved.can_ambient_temp = msg.can_ambient_temp;
    }
    else {
      resolved.can_ambient_temp = 0.0
    }

    if (msg.can_ign_status !== undefined) {
      resolved.can_ign_status = msg.can_ign_status;
    }
    else {
      resolved.can_ign_status = 0
    }

    return resolved;
    }
};

module.exports = LrosSignalsActualValues;
