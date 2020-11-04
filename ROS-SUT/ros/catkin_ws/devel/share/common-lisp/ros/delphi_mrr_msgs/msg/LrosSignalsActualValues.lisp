; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude LrosSignalsActualValues.msg.html

(cl:defclass <LrosSignalsActualValues> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_power_supp_ford
    :reader can_power_supp_ford
    :initarg :can_power_supp_ford
    :type cl:fixnum
    :initform 0)
   (can_power_motive_ford
    :reader can_power_motive_ford
    :initarg :can_power_motive_ford
    :type cl:fixnum
    :initform 0)
   (can_cruise_status_ford
    :reader can_cruise_status_ford
    :initarg :can_cruise_status_ford
    :type cl:float
    :initform 0.0)
   (can_veh_batt_volt
    :reader can_veh_batt_volt
    :initarg :can_veh_batt_volt
    :type cl:fixnum
    :initform 0)
   (can_gear_position
    :reader can_gear_position
    :initarg :can_gear_position
    :type cl:fixnum
    :initform 0)
   (can_ambient_temp
    :reader can_ambient_temp
    :initarg :can_ambient_temp
    :type cl:float
    :initform 0.0)
   (can_ign_status
    :reader can_ign_status
    :initarg :can_ign_status
    :type cl:fixnum
    :initform 0))
)

(cl:defclass LrosSignalsActualValues (<LrosSignalsActualValues>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LrosSignalsActualValues>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LrosSignalsActualValues)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<LrosSignalsActualValues> is deprecated: use delphi_mrr_msgs-msg:LrosSignalsActualValues instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_power_supp_ford-val :lambda-list '(m))
(cl:defmethod can_power_supp_ford-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_power_supp_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_power_supp_ford instead.")
  (can_power_supp_ford m))

(cl:ensure-generic-function 'can_power_motive_ford-val :lambda-list '(m))
(cl:defmethod can_power_motive_ford-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_power_motive_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_power_motive_ford instead.")
  (can_power_motive_ford m))

(cl:ensure-generic-function 'can_cruise_status_ford-val :lambda-list '(m))
(cl:defmethod can_cruise_status_ford-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_cruise_status_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_cruise_status_ford instead.")
  (can_cruise_status_ford m))

(cl:ensure-generic-function 'can_veh_batt_volt-val :lambda-list '(m))
(cl:defmethod can_veh_batt_volt-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_veh_batt_volt-val is deprecated.  Use delphi_mrr_msgs-msg:can_veh_batt_volt instead.")
  (can_veh_batt_volt m))

(cl:ensure-generic-function 'can_gear_position-val :lambda-list '(m))
(cl:defmethod can_gear_position-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_gear_position-val is deprecated.  Use delphi_mrr_msgs-msg:can_gear_position instead.")
  (can_gear_position m))

(cl:ensure-generic-function 'can_ambient_temp-val :lambda-list '(m))
(cl:defmethod can_ambient_temp-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_ambient_temp-val is deprecated.  Use delphi_mrr_msgs-msg:can_ambient_temp instead.")
  (can_ambient_temp m))

(cl:ensure-generic-function 'can_ign_status-val :lambda-list '(m))
(cl:defmethod can_ign_status-val ((m <LrosSignalsActualValues>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_ign_status-val is deprecated.  Use delphi_mrr_msgs-msg:can_ign_status instead.")
  (can_ign_status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LrosSignalsActualValues>) ostream)
  "Serializes a message object of type '<LrosSignalsActualValues>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_power_supp_ford)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_power_motive_ford)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_cruise_status_ford))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_veh_batt_volt)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_gear_position)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_gear_position)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_ambient_temp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_ign_status)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LrosSignalsActualValues>) istream)
  "Deserializes a message object of type '<LrosSignalsActualValues>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_power_supp_ford)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_power_motive_ford)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_cruise_status_ford) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_veh_batt_volt)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_gear_position)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_gear_position)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_ambient_temp) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_ign_status)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LrosSignalsActualValues>)))
  "Returns string type for a message object of type '<LrosSignalsActualValues>"
  "delphi_mrr_msgs/LrosSignalsActualValues")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LrosSignalsActualValues)))
  "Returns string type for a message object of type 'LrosSignalsActualValues"
  "delphi_mrr_msgs/LrosSignalsActualValues")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LrosSignalsActualValues>)))
  "Returns md5sum for a message object of type '<LrosSignalsActualValues>"
  "0716096f6271f8e0b8822fbc1fb61142")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LrosSignalsActualValues)))
  "Returns md5sum for a message object of type 'LrosSignalsActualValues"
  "0716096f6271f8e0b8822fbc1fb61142")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LrosSignalsActualValues>)))
  "Returns full string definition for message of type '<LrosSignalsActualValues>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 	  can_power_supp_ford~%uint8 	  can_power_motive_ford~%float32   can_cruise_status_ford~%uint8 	  can_veh_batt_volt~%uint16 	  can_gear_position~%float32   can_ambient_temp~%uint8 	  can_ign_status~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LrosSignalsActualValues)))
  "Returns full string definition for message of type 'LrosSignalsActualValues"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 	  can_power_supp_ford~%uint8 	  can_power_motive_ford~%float32   can_cruise_status_ford~%uint8 	  can_veh_batt_volt~%uint16 	  can_gear_position~%float32   can_ambient_temp~%uint8 	  can_ign_status~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LrosSignalsActualValues>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     4
     1
     2
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LrosSignalsActualValues>))
  "Converts a ROS message object to a list"
  (cl:list 'LrosSignalsActualValues
    (cl:cons ':header (header msg))
    (cl:cons ':can_power_supp_ford (can_power_supp_ford msg))
    (cl:cons ':can_power_motive_ford (can_power_motive_ford msg))
    (cl:cons ':can_cruise_status_ford (can_cruise_status_ford msg))
    (cl:cons ':can_veh_batt_volt (can_veh_batt_volt msg))
    (cl:cons ':can_gear_position (can_gear_position msg))
    (cl:cons ':can_ambient_temp (can_ambient_temp msg))
    (cl:cons ':can_ign_status (can_ign_status msg))
))
