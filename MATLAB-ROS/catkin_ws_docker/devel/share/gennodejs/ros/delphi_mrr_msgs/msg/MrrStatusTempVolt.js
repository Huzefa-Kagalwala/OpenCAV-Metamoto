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

class MrrStatusTempVolt {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.can_mmic_temp1 = null;
      this.can_processor_thermistor = null;
      this.can_processor_temp1 = null;
      this.can_12_5v = null;
      this.can_5v = null;
      this.can_3v3_raw = null;
      this.can_3v3_dac = null;
      this.can_batt_volts = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('can_mmic_temp1')) {
        this.can_mmic_temp1 = initObj.can_mmic_temp1
      }
      else {
        this.can_mmic_temp1 = 0;
      }
      if (initObj.hasOwnProperty('can_processor_thermistor')) {
        this.can_processor_thermistor = initObj.can_processor_thermistor
      }
      else {
        this.can_processor_thermistor = 0;
      }
      if (initObj.hasOwnProperty('can_processor_temp1')) {
        this.can_processor_temp1 = initObj.can_processor_temp1
      }
      else {
        this.can_processor_temp1 = 0;
      }
      if (initObj.hasOwnProperty('can_12_5v')) {
        this.can_12_5v = initObj.can_12_5v
      }
      else {
        this.can_12_5v = 0.0;
      }
      if (initObj.hasOwnProperty('can_5v')) {
        this.can_5v = initObj.can_5v
      }
      else {
        this.can_5v = 0.0;
      }
      if (initObj.hasOwnProperty('can_3v3_raw')) {
        this.can_3v3_raw = initObj.can_3v3_raw
      }
      else {
        this.can_3v3_raw = 0.0;
      }
      if (initObj.hasOwnProperty('can_3v3_dac')) {
        this.can_3v3_dac = initObj.can_3v3_dac
      }
      else {
        this.can_3v3_dac = 0.0;
      }
      if (initObj.hasOwnProperty('can_batt_volts')) {
        this.can_batt_volts = initObj.can_batt_volts
      }
      else {
        this.can_batt_volts = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type MrrStatusTempVolt
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [can_mmic_temp1]
    bufferOffset = _serializer.uint8(obj.can_mmic_temp1, buffer, bufferOffset);
    // Serialize message field [can_processor_thermistor]
    bufferOffset = _serializer.uint8(obj.can_processor_thermistor, buffer, bufferOffset);
    // Serialize message field [can_processor_temp1]
    bufferOffset = _serializer.uint8(obj.can_processor_temp1, buffer, bufferOffset);
    // Serialize message field [can_12_5v]
    bufferOffset = _serializer.float32(obj.can_12_5v, buffer, bufferOffset);
    // Serialize message field [can_5v]
    bufferOffset = _serializer.float32(obj.can_5v, buffer, bufferOffset);
    // Serialize message field [can_3v3_raw]
    bufferOffset = _serializer.float32(obj.can_3v3_raw, buffer, bufferOffset);
    // Serialize message field [can_3v3_dac]
    bufferOffset = _serializer.float32(obj.can_3v3_dac, buffer, bufferOffset);
    // Serialize message field [can_batt_volts]
    bufferOffset = _serializer.float32(obj.can_batt_volts, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type MrrStatusTempVolt
    let len;
    let data = new MrrStatusTempVolt(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [can_mmic_temp1]
    data.can_mmic_temp1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_processor_thermistor]
    data.can_processor_thermistor = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_processor_temp1]
    data.can_processor_temp1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [can_12_5v]
    data.can_12_5v = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_5v]
    data.can_5v = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_3v3_raw]
    data.can_3v3_raw = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_3v3_dac]
    data.can_3v3_dac = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [can_batt_volts]
    data.can_batt_volts = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 23;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/MrrStatusTempVolt';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '52765a7a5dd3bd215b60d1ecc9a70758';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8    can_mmic_temp1
    uint8    can_processor_thermistor
    uint8    can_processor_temp1
    float32  can_12_5v
    float32  can_5v
    float32  can_3v3_raw
    float32  can_3v3_dac
    float32  can_batt_volts
    
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
    const resolved = new MrrStatusTempVolt(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.can_mmic_temp1 !== undefined) {
      resolved.can_mmic_temp1 = msg.can_mmic_temp1;
    }
    else {
      resolved.can_mmic_temp1 = 0
    }

    if (msg.can_processor_thermistor !== undefined) {
      resolved.can_processor_thermistor = msg.can_processor_thermistor;
    }
    else {
      resolved.can_processor_thermistor = 0
    }

    if (msg.can_processor_temp1 !== undefined) {
      resolved.can_processor_temp1 = msg.can_processor_temp1;
    }
    else {
      resolved.can_processor_temp1 = 0
    }

    if (msg.can_12_5v !== undefined) {
      resolved.can_12_5v = msg.can_12_5v;
    }
    else {
      resolved.can_12_5v = 0.0
    }

    if (msg.can_5v !== undefined) {
      resolved.can_5v = msg.can_5v;
    }
    else {
      resolved.can_5v = 0.0
    }

    if (msg.can_3v3_raw !== undefined) {
      resolved.can_3v3_raw = msg.can_3v3_raw;
    }
    else {
      resolved.can_3v3_raw = 0.0
    }

    if (msg.can_3v3_dac !== undefined) {
      resolved.can_3v3_dac = msg.can_3v3_dac;
    }
    else {
      resolved.can_3v3_dac = 0.0
    }

    if (msg.can_batt_volts !== undefined) {
      resolved.can_batt_volts = msg.can_batt_volts;
    }
    else {
      resolved.can_batt_volts = 0.0
    }

    return resolved;
    }
};

module.exports = MrrStatusTempVolt;
