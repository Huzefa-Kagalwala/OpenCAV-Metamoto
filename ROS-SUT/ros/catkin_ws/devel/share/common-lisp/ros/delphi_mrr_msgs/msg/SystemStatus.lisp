; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemStatus.msg.html

(cl:defclass <SystemStatus> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_vehicle_stat
    :reader can_vehicle_stat
    :initarg :can_vehicle_stat
    :type cl:boolean
    :initform cl:nil)
   (can_day_night_status
    :reader can_day_night_status
    :initarg :can_day_night_status
    :type cl:boolean
    :initform cl:nil)
   (can_wiper_status
    :reader can_wiper_status
    :initarg :can_wiper_status
    :type cl:boolean
    :initform cl:nil)
   (can_yaw_rate_validity
    :reader can_yaw_rate_validity
    :initarg :can_yaw_rate_validity
    :type cl:boolean
    :initform cl:nil)
   (can_yaw_rate
    :reader can_yaw_rate
    :initarg :can_yaw_rate
    :type cl:float
    :initform 0.0)
   (can_vehicle_speed_validity
    :reader can_vehicle_speed_validity
    :initarg :can_vehicle_speed_validity
    :type cl:boolean
    :initform cl:nil)
   (can_vehicle_speed_direction
    :reader can_vehicle_speed_direction
    :initarg :can_vehicle_speed_direction
    :type cl:boolean
    :initform cl:nil)
   (can_vehicle_speed
    :reader can_vehicle_speed
    :initarg :can_vehicle_speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass SystemStatus (<SystemStatus>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemStatus>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemStatus)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemStatus> is deprecated: use delphi_mrr_msgs-msg:SystemStatus instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_vehicle_stat-val :lambda-list '(m))
(cl:defmethod can_vehicle_stat-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_vehicle_stat-val is deprecated.  Use delphi_mrr_msgs-msg:can_vehicle_stat instead.")
  (can_vehicle_stat m))

(cl:ensure-generic-function 'can_day_night_status-val :lambda-list '(m))
(cl:defmethod can_day_night_status-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_day_night_status-val is deprecated.  Use delphi_mrr_msgs-msg:can_day_night_status instead.")
  (can_day_night_status m))

(cl:ensure-generic-function 'can_wiper_status-val :lambda-list '(m))
(cl:defmethod can_wiper_status-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_wiper_status-val is deprecated.  Use delphi_mrr_msgs-msg:can_wiper_status instead.")
  (can_wiper_status m))

(cl:ensure-generic-function 'can_yaw_rate_validity-val :lambda-list '(m))
(cl:defmethod can_yaw_rate_validity-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_yaw_rate_validity-val is deprecated.  Use delphi_mrr_msgs-msg:can_yaw_rate_validity instead.")
  (can_yaw_rate_validity m))

(cl:ensure-generic-function 'can_yaw_rate-val :lambda-list '(m))
(cl:defmethod can_yaw_rate-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_yaw_rate-val is deprecated.  Use delphi_mrr_msgs-msg:can_yaw_rate instead.")
  (can_yaw_rate m))

(cl:ensure-generic-function 'can_vehicle_speed_validity-val :lambda-list '(m))
(cl:defmethod can_vehicle_speed_validity-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_vehicle_speed_validity-val is deprecated.  Use delphi_mrr_msgs-msg:can_vehicle_speed_validity instead.")
  (can_vehicle_speed_validity m))

(cl:ensure-generic-function 'can_vehicle_speed_direction-val :lambda-list '(m))
(cl:defmethod can_vehicle_speed_direction-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_vehicle_speed_direction-val is deprecated.  Use delphi_mrr_msgs-msg:can_vehicle_speed_direction instead.")
  (can_vehicle_speed_direction m))

(cl:ensure-generic-function 'can_vehicle_speed-val :lambda-list '(m))
(cl:defmethod can_vehicle_speed-val ((m <SystemStatus>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_vehicle_speed-val is deprecated.  Use delphi_mrr_msgs-msg:can_vehicle_speed instead.")
  (can_vehicle_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemStatus>) ostream)
  "Serializes a message object of type '<SystemStatus>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_vehicle_stat) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_day_night_status) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_wiper_status) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_yaw_rate_validity) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_yaw_rate))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_vehicle_speed_validity) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_vehicle_speed_direction) 1 0)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_vehicle_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemStatus>) istream)
  "Deserializes a message object of type '<SystemStatus>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'can_vehicle_stat) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_day_night_status) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_wiper_status) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_yaw_rate_validity) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_yaw_rate) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'can_vehicle_speed_validity) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_vehicle_speed_direction) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_vehicle_speed) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemStatus>)))
  "Returns string type for a message object of type '<SystemStatus>"
  "delphi_mrr_msgs/SystemStatus")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemStatus)))
  "Returns string type for a message object of type 'SystemStatus"
  "delphi_mrr_msgs/SystemStatus")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemStatus>)))
  "Returns md5sum for a message object of type '<SystemStatus>"
  "f95e8b91cc7c4107288a89a3d6af6f1d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemStatus)))
  "Returns md5sum for a message object of type 'SystemStatus"
  "f95e8b91cc7c4107288a89a3d6af6f1d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemStatus>)))
  "Returns full string definition for message of type '<SystemStatus>"
  (cl:format cl:nil "std_msgs/Header header~%~%bool    can_vehicle_stat~%bool    can_day_night_status~%bool    can_wiper_status~%bool    can_yaw_rate_validity~%float32 can_yaw_rate~%bool    can_vehicle_speed_validity~%bool    can_vehicle_speed_direction~%float32 can_vehicle_speed~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemStatus)))
  "Returns full string definition for message of type 'SystemStatus"
  (cl:format cl:nil "std_msgs/Header header~%~%bool    can_vehicle_stat~%bool    can_day_night_status~%bool    can_wiper_status~%bool    can_yaw_rate_validity~%float32 can_yaw_rate~%bool    can_vehicle_speed_validity~%bool    can_vehicle_speed_direction~%float32 can_vehicle_speed~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemStatus>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     1
     1
     4
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemStatus>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemStatus
    (cl:cons ':header (header msg))
    (cl:cons ':can_vehicle_stat (can_vehicle_stat msg))
    (cl:cons ':can_day_night_status (can_day_night_status msg))
    (cl:cons ':can_wiper_status (can_wiper_status msg))
    (cl:cons ':can_yaw_rate_validity (can_yaw_rate_validity msg))
    (cl:cons ':can_yaw_rate (can_yaw_rate msg))
    (cl:cons ':can_vehicle_speed_validity (can_vehicle_speed_validity msg))
    (cl:cons ':can_vehicle_speed_direction (can_vehicle_speed_direction msg))
    (cl:cons ':can_vehicle_speed (can_vehicle_speed msg))
))
