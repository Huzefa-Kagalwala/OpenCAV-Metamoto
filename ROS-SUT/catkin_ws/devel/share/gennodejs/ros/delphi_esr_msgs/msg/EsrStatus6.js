// Auto-generated. Do not edit!

// (in-package delphi_esr_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class EsrStatus6 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.supply_1p_8v = null;
      this.supply_n_5v = null;
      this.wave_diff_a2d = null;
      this.sw_version_dsp_3rd_byte = null;
      this.vertical_algin_updated = null;
      this.system_power_mode = null;
      this.found_target = null;
      this.recommend_unconverge = null;
      this.factory_algin_status1 = null;
      this.factory_algin_status2 = null;
      this.factory_mis_alginment = null;
      this.serv_algin_updates_done = null;
      this.vertical_mis_alginment = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('canmsg')) {
        this.canmsg = initObj.canmsg
      }
      else {
        this.canmsg = '';
      }
      if (initObj.hasOwnProperty('supply_1p_8v')) {
        this.supply_1p_8v = initObj.supply_1p_8v
      }
      else {
        this.supply_1p_8v = 0;
      }
      if (initObj.hasOwnProperty('supply_n_5v')) {
        this.supply_n_5v = initObj.supply_n_5v
      }
      else {
        this.supply_n_5v = 0;
      }
      if (initObj.hasOwnProperty('wave_diff_a2d')) {
        this.wave_diff_a2d = initObj.wave_diff_a2d
      }
      else {
        this.wave_diff_a2d = 0;
      }
      if (initObj.hasOwnProperty('sw_version_dsp_3rd_byte')) {
        this.sw_version_dsp_3rd_byte = initObj.sw_version_dsp_3rd_byte
      }
      else {
        this.sw_version_dsp_3rd_byte = 0;
      }
      if (initObj.hasOwnProperty('vertical_algin_updated')) {
        this.vertical_algin_updated = initObj.vertical_algin_updated
      }
      else {
        this.vertical_algin_updated = false;
      }
      if (initObj.hasOwnProperty('system_power_mode')) {
        this.system_power_mode = initObj.system_power_mode
      }
      else {
        this.system_power_mode = 0;
      }
      if (initObj.hasOwnProperty('found_target')) {
        this.found_target = initObj.found_target
      }
      else {
        this.found_target = false;
      }
      if (initObj.hasOwnProperty('recommend_unconverge')) {
        this.recommend_unconverge = initObj.recommend_unconverge
      }
      else {
        this.recommend_unconverge = false;
      }
      if (initObj.hasOwnProperty('factory_algin_status1')) {
        this.factory_algin_status1 = initObj.factory_algin_status1
      }
      else {
        this.factory_algin_status1 = 0;
      }
      if (initObj.hasOwnProperty('factory_algin_status2')) {
        this.factory_algin_status2 = initObj.factory_algin_status2
      }
      else {
        this.factory_algin_status2 = 0;
      }
      if (initObj.hasOwnProperty('factory_mis_alginment')) {
        this.factory_mis_alginment = initObj.factory_mis_alginment
      }
      else {
        this.factory_mis_alginment = 0.0;
      }
      if (initObj.hasOwnProperty('serv_algin_updates_done')) {
        this.serv_algin_updates_done = initObj.serv_algin_updates_done
      }
      else {
        this.serv_algin_updates_done = 0;
      }
      if (initObj.hasOwnProperty('vertical_mis_alginment')) {
        this.vertical_mis_alginment = initObj.vertical_mis_alginment
      }
      else {
        this.vertical_mis_alginment = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus6
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [supply_1p_8v]
    bufferOffset = _serializer.uint8(obj.supply_1p_8v, buffer, bufferOffset);
    // Serialize message field [supply_n_5v]
    bufferOffset = _serializer.uint8(obj.supply_n_5v, buffer, bufferOffset);
    // Serialize message field [wave_diff_a2d]
    bufferOffset = _serializer.uint8(obj.wave_diff_a2d, buffer, bufferOffset);
    // Serialize message field [sw_version_dsp_3rd_byte]
    bufferOffset = _serializer.uint8(obj.sw_version_dsp_3rd_byte, buffer, bufferOffset);
    // Serialize message field [vertical_algin_updated]
    bufferOffset = _serializer.bool(obj.vertical_algin_updated, buffer, bufferOffset);
    // Serialize message field [system_power_mode]
    bufferOffset = _serializer.uint8(obj.system_power_mode, buffer, bufferOffset);
    // Serialize message field [found_target]
    bufferOffset = _serializer.bool(obj.found_target, buffer, bufferOffset);
    // Serialize message field [recommend_unconverge]
    bufferOffset = _serializer.bool(obj.recommend_unconverge, buffer, bufferOffset);
    // Serialize message field [factory_algin_status1]
    bufferOffset = _serializer.uint8(obj.factory_algin_status1, buffer, bufferOffset);
    // Serialize message field [factory_algin_status2]
    bufferOffset = _serializer.uint8(obj.factory_algin_status2, buffer, bufferOffset);
    // Serialize message field [factory_mis_alginment]
    bufferOffset = _serializer.float32(obj.factory_mis_alginment, buffer, bufferOffset);
    // Serialize message field [serv_algin_updates_done]
    bufferOffset = _serializer.uint8(obj.serv_algin_updates_done, buffer, bufferOffset);
    // Serialize message field [vertical_mis_alginment]
    bufferOffset = _serializer.float32(obj.vertical_mis_alginment, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus6
    let len;
    let data = new EsrStatus6(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [supply_1p_8v]
    data.supply_1p_8v = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [supply_n_5v]
    data.supply_n_5v = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [wave_diff_a2d]
    data.wave_diff_a2d = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [sw_version_dsp_3rd_byte]
    data.sw_version_dsp_3rd_byte = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [vertical_algin_updated]
    data.vertical_algin_updated = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [system_power_mode]
    data.system_power_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [found_target]
    data.found_target = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [recommend_unconverge]
    data.recommend_unconverge = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [factory_algin_status1]
    data.factory_algin_status1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [factory_algin_status2]
    data.factory_algin_status2 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [factory_mis_alginment]
    data.factory_mis_alginment = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [serv_algin_updates_done]
    data.serv_algin_updates_done = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [vertical_mis_alginment]
    data.vertical_mis_alginment = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.canmsg.length;
    return length + 23;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/EsrStatus6';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd0f0f9e72f36d0edc6c699e8188282b7';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status6
    string      canmsg
    uint8       supply_1p_8v
    uint8       supply_n_5v
    uint8       wave_diff_a2d
    uint8       sw_version_dsp_3rd_byte
    bool        vertical_algin_updated
    uint8       system_power_mode
    bool        found_target
    bool        recommend_unconverge
    uint8       factory_algin_status1
    uint8       factory_algin_status2
    float32     factory_mis_alginment
    uint8       serv_algin_updates_done
    float32     vertical_mis_alginment
    
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
    const resolved = new EsrStatus6(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.canmsg !== undefined) {
      resolved.canmsg = msg.canmsg;
    }
    else {
      resolved.canmsg = ''
    }

    if (msg.supply_1p_8v !== undefined) {
      resolved.supply_1p_8v = msg.supply_1p_8v;
    }
    else {
      resolved.supply_1p_8v = 0
    }

    if (msg.supply_n_5v !== undefined) {
      resolved.supply_n_5v = msg.supply_n_5v;
    }
    else {
      resolved.supply_n_5v = 0
    }

    if (msg.wave_diff_a2d !== undefined) {
      resolved.wave_diff_a2d = msg.wave_diff_a2d;
    }
    else {
      resolved.wave_diff_a2d = 0
    }

    if (msg.sw_version_dsp_3rd_byte !== undefined) {
      resolved.sw_version_dsp_3rd_byte = msg.sw_version_dsp_3rd_byte;
    }
    else {
      resolved.sw_version_dsp_3rd_byte = 0
    }

    if (msg.vertical_algin_updated !== undefined) {
      resolved.vertical_algin_updated = msg.vertical_algin_updated;
    }
    else {
      resolved.vertical_algin_updated = false
    }

    if (msg.system_power_mode !== undefined) {
      resolved.system_power_mode = msg.system_power_mode;
    }
    else {
      resolved.system_power_mode = 0
    }

    if (msg.found_target !== undefined) {
      resolved.found_target = msg.found_target;
    }
    else {
      resolved.found_target = false
    }

    if (msg.recommend_unconverge !== undefined) {
      resolved.recommend_unconverge = msg.recommend_unconverge;
    }
    else {
      resolved.recommend_unconverge = false
    }

    if (msg.factory_algin_status1 !== undefined) {
      resolved.factory_algin_status1 = msg.factory_algin_status1;
    }
    else {
      resolved.factory_algin_status1 = 0
    }

    if (msg.factory_algin_status2 !== undefined) {
      resolved.factory_algin_status2 = msg.factory_algin_status2;
    }
    else {
      resolved.factory_algin_status2 = 0
    }

    if (msg.factory_mis_alginment !== undefined) {
      resolved.factory_mis_alginment = msg.factory_mis_alginment;
    }
    else {
      resolved.factory_mis_alginment = 0.0
    }

    if (msg.serv_algin_updates_done !== undefined) {
      resolved.serv_algin_updates_done = msg.serv_algin_updates_done;
    }
    else {
      resolved.serv_algin_updates_done = 0
    }

    if (msg.vertical_mis_alginment !== undefined) {
      resolved.vertical_mis_alginment = msg.vertical_mis_alginment;
    }
    else {
      resolved.vertical_mis_alginment = 0.0
    }

    return resolved;
    }
};

module.exports = EsrStatus6;
