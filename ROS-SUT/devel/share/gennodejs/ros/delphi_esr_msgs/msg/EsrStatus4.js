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

class EsrStatus4 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.canmsg = null;
      this.rolling_count3 = null;
      this.mrlr_mode = null;
      this.patial_blockage = null;
      this.side_lobe_blockage = null;
      this.lr_only_grating_lobe_det = null;
      this.truck_target_det = null;
      this.path_id_acc = null;
      this.path_id_cmmb_move = null;
      this.path_id_cmmb_stat = null;
      this.path_id_fcw_move = null;
      this.path_id_fcw_stat = null;
      this.path_id_acc_stat = null;
      this.auto_algin_angle = null;
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
      if (initObj.hasOwnProperty('rolling_count3')) {
        this.rolling_count3 = initObj.rolling_count3
      }
      else {
        this.rolling_count3 = 0;
      }
      if (initObj.hasOwnProperty('mrlr_mode')) {
        this.mrlr_mode = initObj.mrlr_mode
      }
      else {
        this.mrlr_mode = 0;
      }
      if (initObj.hasOwnProperty('patial_blockage')) {
        this.patial_blockage = initObj.patial_blockage
      }
      else {
        this.patial_blockage = false;
      }
      if (initObj.hasOwnProperty('side_lobe_blockage')) {
        this.side_lobe_blockage = initObj.side_lobe_blockage
      }
      else {
        this.side_lobe_blockage = false;
      }
      if (initObj.hasOwnProperty('lr_only_grating_lobe_det')) {
        this.lr_only_grating_lobe_det = initObj.lr_only_grating_lobe_det
      }
      else {
        this.lr_only_grating_lobe_det = false;
      }
      if (initObj.hasOwnProperty('truck_target_det')) {
        this.truck_target_det = initObj.truck_target_det
      }
      else {
        this.truck_target_det = false;
      }
      if (initObj.hasOwnProperty('path_id_acc')) {
        this.path_id_acc = initObj.path_id_acc
      }
      else {
        this.path_id_acc = 0;
      }
      if (initObj.hasOwnProperty('path_id_cmmb_move')) {
        this.path_id_cmmb_move = initObj.path_id_cmmb_move
      }
      else {
        this.path_id_cmmb_move = 0;
      }
      if (initObj.hasOwnProperty('path_id_cmmb_stat')) {
        this.path_id_cmmb_stat = initObj.path_id_cmmb_stat
      }
      else {
        this.path_id_cmmb_stat = 0;
      }
      if (initObj.hasOwnProperty('path_id_fcw_move')) {
        this.path_id_fcw_move = initObj.path_id_fcw_move
      }
      else {
        this.path_id_fcw_move = 0;
      }
      if (initObj.hasOwnProperty('path_id_fcw_stat')) {
        this.path_id_fcw_stat = initObj.path_id_fcw_stat
      }
      else {
        this.path_id_fcw_stat = 0;
      }
      if (initObj.hasOwnProperty('path_id_acc_stat')) {
        this.path_id_acc_stat = initObj.path_id_acc_stat
      }
      else {
        this.path_id_acc_stat = 0;
      }
      if (initObj.hasOwnProperty('auto_algin_angle')) {
        this.auto_algin_angle = initObj.auto_algin_angle
      }
      else {
        this.auto_algin_angle = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EsrStatus4
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [canmsg]
    bufferOffset = _serializer.string(obj.canmsg, buffer, bufferOffset);
    // Serialize message field [rolling_count3]
    bufferOffset = _serializer.uint8(obj.rolling_count3, buffer, bufferOffset);
    // Serialize message field [mrlr_mode]
    bufferOffset = _serializer.uint8(obj.mrlr_mode, buffer, bufferOffset);
    // Serialize message field [patial_blockage]
    bufferOffset = _serializer.bool(obj.patial_blockage, buffer, bufferOffset);
    // Serialize message field [side_lobe_blockage]
    bufferOffset = _serializer.bool(obj.side_lobe_blockage, buffer, bufferOffset);
    // Serialize message field [lr_only_grating_lobe_det]
    bufferOffset = _serializer.bool(obj.lr_only_grating_lobe_det, buffer, bufferOffset);
    // Serialize message field [truck_target_det]
    bufferOffset = _serializer.bool(obj.truck_target_det, buffer, bufferOffset);
    // Serialize message field [path_id_acc]
    bufferOffset = _serializer.uint8(obj.path_id_acc, buffer, bufferOffset);
    // Serialize message field [path_id_cmmb_move]
    bufferOffset = _serializer.uint8(obj.path_id_cmmb_move, buffer, bufferOffset);
    // Serialize message field [path_id_cmmb_stat]
    bufferOffset = _serializer.uint8(obj.path_id_cmmb_stat, buffer, bufferOffset);
    // Serialize message field [path_id_fcw_move]
    bufferOffset = _serializer.uint8(obj.path_id_fcw_move, buffer, bufferOffset);
    // Serialize message field [path_id_fcw_stat]
    bufferOffset = _serializer.uint8(obj.path_id_fcw_stat, buffer, bufferOffset);
    // Serialize message field [path_id_acc_stat]
    bufferOffset = _serializer.uint8(obj.path_id_acc_stat, buffer, bufferOffset);
    // Serialize message field [auto_algin_angle]
    bufferOffset = _serializer.float32(obj.auto_algin_angle, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EsrStatus4
    let len;
    let data = new EsrStatus4(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [canmsg]
    data.canmsg = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [rolling_count3]
    data.rolling_count3 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [mrlr_mode]
    data.mrlr_mode = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [patial_blockage]
    data.patial_blockage = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [side_lobe_blockage]
    data.side_lobe_blockage = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [lr_only_grating_lobe_det]
    data.lr_only_grating_lobe_det = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [truck_target_det]
    data.truck_target_det = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [path_id_acc]
    data.path_id_acc = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [path_id_cmmb_move]
    data.path_id_cmmb_move = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [path_id_cmmb_stat]
    data.path_id_cmmb_stat = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [path_id_fcw_move]
    data.path_id_fcw_move = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [path_id_fcw_stat]
    data.path_id_fcw_stat = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [path_id_acc_stat]
    data.path_id_acc_stat = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [auto_algin_angle]
    data.auto_algin_angle = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.canmsg.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'delphi_esr_msgs/EsrStatus4';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'f7cf3bcce6d7e6a3b7b68f3a7c2726e4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    # ESR status4
    string      canmsg
    uint8       rolling_count3
    uint8       mrlr_mode
    bool        patial_blockage
    bool        side_lobe_blockage
    bool        lr_only_grating_lobe_det
    bool        truck_target_det
    uint8       path_id_acc
    uint8       path_id_cmmb_move
    uint8       path_id_cmmb_stat
    uint8       path_id_fcw_move
    uint8       path_id_fcw_stat
    uint8       path_id_acc_stat
    float32     auto_algin_angle
    
    
    
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
    const resolved = new EsrStatus4(null);
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

    if (msg.rolling_count3 !== undefined) {
      resolved.rolling_count3 = msg.rolling_count3;
    }
    else {
      resolved.rolling_count3 = 0
    }

    if (msg.mrlr_mode !== undefined) {
      resolved.mrlr_mode = msg.mrlr_mode;
    }
    else {
      resolved.mrlr_mode = 0
    }

    if (msg.patial_blockage !== undefined) {
      resolved.patial_blockage = msg.patial_blockage;
    }
    else {
      resolved.patial_blockage = false
    }

    if (msg.side_lobe_blockage !== undefined) {
      resolved.side_lobe_blockage = msg.side_lobe_blockage;
    }
    else {
      resolved.side_lobe_blockage = false
    }

    if (msg.lr_only_grating_lobe_det !== undefined) {
      resolved.lr_only_grating_lobe_det = msg.lr_only_grating_lobe_det;
    }
    else {
      resolved.lr_only_grating_lobe_det = false
    }

    if (msg.truck_target_det !== undefined) {
      resolved.truck_target_det = msg.truck_target_det;
    }
    else {
      resolved.truck_target_det = false
    }

    if (msg.path_id_acc !== undefined) {
      resolved.path_id_acc = msg.path_id_acc;
    }
    else {
      resolved.path_id_acc = 0
    }

    if (msg.path_id_cmmb_move !== undefined) {
      resolved.path_id_cmmb_move = msg.path_id_cmmb_move;
    }
    else {
      resolved.path_id_cmmb_move = 0
    }

    if (msg.path_id_cmmb_stat !== undefined) {
      resolved.path_id_cmmb_stat = msg.path_id_cmmb_stat;
    }
    else {
      resolved.path_id_cmmb_stat = 0
    }

    if (msg.path_id_fcw_move !== undefined) {
      resolved.path_id_fcw_move = msg.path_id_fcw_move;
    }
    else {
      resolved.path_id_fcw_move = 0
    }

    if (msg.path_id_fcw_stat !== undefined) {
      resolved.path_id_fcw_stat = msg.path_id_fcw_stat;
    }
    else {
      resolved.path_id_fcw_stat = 0
    }

    if (msg.path_id_acc_stat !== undefined) {
      resolved.path_id_acc_stat = msg.path_id_acc_stat;
    }
    else {
      resolved.path_id_acc_stat = 0
    }

    if (msg.auto_algin_angle !== undefined) {
      resolved.auto_algin_angle = msg.auto_algin_angle;
    }
    else {
      resolved.auto_algin_angle = 0.0
    }

    return resolved;
    }
};

module.exports = EsrStatus4;
