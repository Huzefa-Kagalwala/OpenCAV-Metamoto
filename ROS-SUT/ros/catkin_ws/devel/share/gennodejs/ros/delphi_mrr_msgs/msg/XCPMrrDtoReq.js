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

class XCPMrrDtoReq {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.mrr_xcp_dto_cmd_byte7 = null;
      this.mrr_xcp_dto_cmd_byte6 = null;
      this.mrr_xcp_dto_cmd_byte5 = null;
      this.mrr_xcp_dto_cmd_byte4 = null;
      this.mrr_xcp_dto_cmd_byte3 = null;
      this.mrr_xcp_dto_cmd_byte2 = null;
      this.mrr_xcp_dto_cmd_byte1 = null;
      this.mrr_xcp_dto_cmd_byte0 = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte7')) {
        this.mrr_xcp_dto_cmd_byte7 = initObj.mrr_xcp_dto_cmd_byte7
      }
      else {
        this.mrr_xcp_dto_cmd_byte7 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte6')) {
        this.mrr_xcp_dto_cmd_byte6 = initObj.mrr_xcp_dto_cmd_byte6
      }
      else {
        this.mrr_xcp_dto_cmd_byte6 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte5')) {
        this.mrr_xcp_dto_cmd_byte5 = initObj.mrr_xcp_dto_cmd_byte5
      }
      else {
        this.mrr_xcp_dto_cmd_byte5 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte4')) {
        this.mrr_xcp_dto_cmd_byte4 = initObj.mrr_xcp_dto_cmd_byte4
      }
      else {
        this.mrr_xcp_dto_cmd_byte4 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte3')) {
        this.mrr_xcp_dto_cmd_byte3 = initObj.mrr_xcp_dto_cmd_byte3
      }
      else {
        this.mrr_xcp_dto_cmd_byte3 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte2')) {
        this.mrr_xcp_dto_cmd_byte2 = initObj.mrr_xcp_dto_cmd_byte2
      }
      else {
        this.mrr_xcp_dto_cmd_byte2 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte1')) {
        this.mrr_xcp_dto_cmd_byte1 = initObj.mrr_xcp_dto_cmd_byte1
      }
      else {
        this.mrr_xcp_dto_cmd_byte1 = 0;
      }
      if (initObj.hasOwnProperty('mrr_xcp_dto_cmd_byte0')) {
        this.mrr_xcp_dto_cmd_byte0 = initObj.mrr_xcp_dto_cmd_byte0
      }
      else {
        this.mrr_xcp_dto_cmd_byte0 = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type XCPMrrDtoReq
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte7]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte7, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte6]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte6, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte5]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte5, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte4]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte4, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte3]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte3, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte2]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte2, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte1]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte1, buffer, bufferOffset);
    // Serialize message field [mrr_xcp_dto_cmd_byte0]
    bufferOffset = _serializer.uint8(obj.mrr_xcp_dto_cmd_byte0, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type XCPMrrDtoReq
    let len;
    let data = new XCPMrrDtoReq(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte7]
    data.mrr_xcp_dto_cmd_byte7 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte6]
    data.mrr_xcp_dto_cmd_byte6 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte5]
    data.mrr_xcp_dto_cmd_byte5 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte4]
    data.mrr_xcp_dto_cmd_byte4 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte3]
    data.mrr_xcp_dto_cmd_byte3 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte2]
    data.mrr_xcp_dto_cmd_byte2 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte1]
    data.mrr_xcp_dto_cmd_byte1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrr_xcp_dto_cmd_byte0]
    data.mrr_xcp_dto_cmd_byte0 = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_mrr_msgs/XCPMrrDtoReq';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '079615f4e59514c07d24db784d7450ec';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    uint8 mrr_xcp_dto_cmd_byte7
    uint8 mrr_xcp_dto_cmd_byte6
    uint8 mrr_xcp_dto_cmd_byte5
    uint8 mrr_xcp_dto_cmd_byte4
    uint8 mrr_xcp_dto_cmd_byte3
    uint8 mrr_xcp_dto_cmd_byte2
    uint8 mrr_xcp_dto_cmd_byte1
    uint8 mrr_xcp_dto_cmd_byte0
    
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
    const resolved = new XCPMrrDtoReq(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.mrr_xcp_dto_cmd_byte7 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte7 = msg.mrr_xcp_dto_cmd_byte7;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte7 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte6 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte6 = msg.mrr_xcp_dto_cmd_byte6;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte6 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte5 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte5 = msg.mrr_xcp_dto_cmd_byte5;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte5 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte4 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte4 = msg.mrr_xcp_dto_cmd_byte4;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte4 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte3 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte3 = msg.mrr_xcp_dto_cmd_byte3;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte3 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte2 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte2 = msg.mrr_xcp_dto_cmd_byte2;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte2 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte1 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte1 = msg.mrr_xcp_dto_cmd_byte1;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte1 = 0
    }

    if (msg.mrr_xcp_dto_cmd_byte0 !== undefined) {
      resolved.mrr_xcp_dto_cmd_byte0 = msg.mrr_xcp_dto_cmd_byte0;
    }
    else {
      resolved.mrr_xcp_dto_cmd_byte0 = 0
    }

    return resolved;
    }
};

module.exports = XCPMrrDtoReq;
