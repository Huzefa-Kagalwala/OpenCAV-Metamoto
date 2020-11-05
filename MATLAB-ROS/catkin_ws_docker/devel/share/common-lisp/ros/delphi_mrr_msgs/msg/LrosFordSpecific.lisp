; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude LrosFordSpecific.msg.html

(cl:defclass <LrosFordSpecific> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_globalrealtime_ford
    :reader can_globalrealtime_ford
    :initarg :can_globalrealtime_ford
    :type cl:float
    :initform 0.0)
   (can_veh_speed_ford
    :reader can_veh_speed_ford
    :initarg :can_veh_speed_ford
    :type cl:float
    :initform 0.0)
   (can_veh_yaw_ford
    :reader can_veh_yaw_ford
    :initarg :can_veh_yaw_ford
    :type cl:float
    :initform 0.0))
)

(cl:defclass LrosFordSpecific (<LrosFordSpecific>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LrosFordSpecific>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LrosFordSpecific)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<LrosFordSpecific> is deprecated: use delphi_mrr_msgs-msg:LrosFordSpecific instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LrosFordSpecific>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_globalrealtime_ford-val :lambda-list '(m))
(cl:defmethod can_globalrealtime_ford-val ((m <LrosFordSpecific>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_globalrealtime_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_globalrealtime_ford instead.")
  (can_globalrealtime_ford m))

(cl:ensure-generic-function 'can_veh_speed_ford-val :lambda-list '(m))
(cl:defmethod can_veh_speed_ford-val ((m <LrosFordSpecific>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_veh_speed_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_veh_speed_ford instead.")
  (can_veh_speed_ford m))

(cl:ensure-generic-function 'can_veh_yaw_ford-val :lambda-list '(m))
(cl:defmethod can_veh_yaw_ford-val ((m <LrosFordSpecific>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_veh_yaw_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_veh_yaw_ford instead.")
  (can_veh_yaw_ford m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LrosFordSpecific>) ostream)
  "Serializes a message object of type '<LrosFordSpecific>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_globalrealtime_ford))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_veh_speed_ford))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_veh_yaw_ford))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LrosFordSpecific>) istream)
  "Deserializes a message object of type '<LrosFordSpecific>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_globalrealtime_ford) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_veh_speed_ford) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_veh_yaw_ford) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LrosFordSpecific>)))
  "Returns string type for a message object of type '<LrosFordSpecific>"
  "delphi_mrr_msgs/LrosFordSpecific")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LrosFordSpecific)))
  "Returns string type for a message object of type 'LrosFordSpecific"
  "delphi_mrr_msgs/LrosFordSpecific")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LrosFordSpecific>)))
  "Returns md5sum for a message object of type '<LrosFordSpecific>"
  "100e89430c762eb19217e3aa8f0775b9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LrosFordSpecific)))
  "Returns md5sum for a message object of type 'LrosFordSpecific"
  "100e89430c762eb19217e3aa8f0775b9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LrosFordSpecific>)))
  "Returns full string definition for message of type '<LrosFordSpecific>"
  (cl:format cl:nil "std_msgs/Header header~%~%float32 can_globalrealtime_ford~%float32 can_veh_speed_ford~%float32 can_veh_yaw_ford~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LrosFordSpecific)))
  "Returns full string definition for message of type 'LrosFordSpecific"
  (cl:format cl:nil "std_msgs/Header header~%~%float32 can_globalrealtime_ford~%float32 can_veh_speed_ford~%float32 can_veh_yaw_ford~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LrosFordSpecific>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LrosFordSpecific>))
  "Converts a ROS message object to a list"
  (cl:list 'LrosFordSpecific
    (cl:cons ':header (header msg))
    (cl:cons ':can_globalrealtime_ford (can_globalrealtime_ford msg))
    (cl:cons ':can_veh_speed_ford (can_veh_speed_ford msg))
    (cl:cons ':can_veh_yaw_ford (can_veh_yaw_ford msg))
))
