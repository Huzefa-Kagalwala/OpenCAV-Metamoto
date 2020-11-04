; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude IFVStatusCompensated.msg.html

(cl:defclass <IFVStatusCompensated> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_yaw_rate_calc_qf
    :reader can_yaw_rate_calc_qf
    :initarg :can_yaw_rate_calc_qf
    :type cl:fixnum
    :initform 0)
   (can_yaw_rate_calc
    :reader can_yaw_rate_calc
    :initarg :can_yaw_rate_calc
    :type cl:float
    :initform 0.0)
   (can_yaw_rate_bias
    :reader can_yaw_rate_bias
    :initarg :can_yaw_rate_bias
    :type cl:float
    :initform 0.0)
   (can_vehicle_speed_calc
    :reader can_vehicle_speed_calc
    :initarg :can_vehicle_speed_calc
    :type cl:float
    :initform 0.0)
   (can_veh_spd_comp_factor
    :reader can_veh_spd_comp_factor
    :initarg :can_veh_spd_comp_factor
    :type cl:float
    :initform 0.0))
)

(cl:defclass IFVStatusCompensated (<IFVStatusCompensated>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IFVStatusCompensated>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IFVStatusCompensated)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<IFVStatusCompensated> is deprecated: use delphi_mrr_msgs-msg:IFVStatusCompensated instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <IFVStatusCompensated>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_yaw_rate_calc_qf-val :lambda-list '(m))
(cl:defmethod can_yaw_rate_calc_qf-val ((m <IFVStatusCompensated>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_yaw_rate_calc_qf-val is deprecated.  Use delphi_mrr_msgs-msg:can_yaw_rate_calc_qf instead.")
  (can_yaw_rate_calc_qf m))

(cl:ensure-generic-function 'can_yaw_rate_calc-val :lambda-list '(m))
(cl:defmethod can_yaw_rate_calc-val ((m <IFVStatusCompensated>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_yaw_rate_calc-val is deprecated.  Use delphi_mrr_msgs-msg:can_yaw_rate_calc instead.")
  (can_yaw_rate_calc m))

(cl:ensure-generic-function 'can_yaw_rate_bias-val :lambda-list '(m))
(cl:defmethod can_yaw_rate_bias-val ((m <IFVStatusCompensated>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_yaw_rate_bias-val is deprecated.  Use delphi_mrr_msgs-msg:can_yaw_rate_bias instead.")
  (can_yaw_rate_bias m))

(cl:ensure-generic-function 'can_vehicle_speed_calc-val :lambda-list '(m))
(cl:defmethod can_vehicle_speed_calc-val ((m <IFVStatusCompensated>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_vehicle_speed_calc-val is deprecated.  Use delphi_mrr_msgs-msg:can_vehicle_speed_calc instead.")
  (can_vehicle_speed_calc m))

(cl:ensure-generic-function 'can_veh_spd_comp_factor-val :lambda-list '(m))
(cl:defmethod can_veh_spd_comp_factor-val ((m <IFVStatusCompensated>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_veh_spd_comp_factor-val is deprecated.  Use delphi_mrr_msgs-msg:can_veh_spd_comp_factor instead.")
  (can_veh_spd_comp_factor m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IFVStatusCompensated>) ostream)
  "Serializes a message object of type '<IFVStatusCompensated>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_yaw_rate_calc_qf)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_yaw_rate_calc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_yaw_rate_bias))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_vehicle_speed_calc))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_veh_spd_comp_factor))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IFVStatusCompensated>) istream)
  "Deserializes a message object of type '<IFVStatusCompensated>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_yaw_rate_calc_qf)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_yaw_rate_calc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_yaw_rate_bias) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_vehicle_speed_calc) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_veh_spd_comp_factor) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IFVStatusCompensated>)))
  "Returns string type for a message object of type '<IFVStatusCompensated>"
  "delphi_mrr_msgs/IFVStatusCompensated")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IFVStatusCompensated)))
  "Returns string type for a message object of type 'IFVStatusCompensated"
  "delphi_mrr_msgs/IFVStatusCompensated")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IFVStatusCompensated>)))
  "Returns md5sum for a message object of type '<IFVStatusCompensated>"
  "273b2128306b82c1d31a3b67f601a030")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IFVStatusCompensated)))
  "Returns md5sum for a message object of type 'IFVStatusCompensated"
  "273b2128306b82c1d31a3b67f601a030")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IFVStatusCompensated>)))
  "Returns full string definition for message of type '<IFVStatusCompensated>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 can_yaw_rate_calc_qf~%float32 can_yaw_rate_calc~%float32 can_yaw_rate_bias~%float32 can_vehicle_speed_calc~%float32 can_veh_spd_comp_factor~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IFVStatusCompensated)))
  "Returns full string definition for message of type 'IFVStatusCompensated"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 can_yaw_rate_calc_qf~%float32 can_yaw_rate_calc~%float32 can_yaw_rate_bias~%float32 can_vehicle_speed_calc~%float32 can_veh_spd_comp_factor~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IFVStatusCompensated>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IFVStatusCompensated>))
  "Converts a ROS message object to a list"
  (cl:list 'IFVStatusCompensated
    (cl:cons ':header (header msg))
    (cl:cons ':can_yaw_rate_calc_qf (can_yaw_rate_calc_qf msg))
    (cl:cons ':can_yaw_rate_calc (can_yaw_rate_calc msg))
    (cl:cons ':can_yaw_rate_bias (can_yaw_rate_bias msg))
    (cl:cons ':can_vehicle_speed_calc (can_vehicle_speed_calc msg))
    (cl:cons ':can_veh_spd_comp_factor (can_veh_spd_comp_factor msg))
))
