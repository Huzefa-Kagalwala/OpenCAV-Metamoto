; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemAlignFactory2.msg.html

(cl:defclass <SystemAlignFactory2> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_lateral_mounting_offset
    :reader can_lateral_mounting_offset
    :initarg :can_lateral_mounting_offset
    :type cl:float
    :initform 0.0)
   (can_fac_plate_tilt_number
    :reader can_fac_plate_tilt_number
    :initarg :can_fac_plate_tilt_number
    :type cl:fixnum
    :initform 0)
   (can_fac_plate_tilt_angle
    :reader can_fac_plate_tilt_angle
    :initarg :can_fac_plate_tilt_angle
    :type cl:float
    :initform 0.0)
   (can_fac_plate_positions_total
    :reader can_fac_plate_positions_total
    :initarg :can_fac_plate_positions_total
    :type cl:fixnum
    :initform 0)
   (can_fac_align_max_nt
    :reader can_fac_align_max_nt
    :initarg :can_fac_align_max_nt
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SystemAlignFactory2 (<SystemAlignFactory2>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemAlignFactory2>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemAlignFactory2)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemAlignFactory2> is deprecated: use delphi_mrr_msgs-msg:SystemAlignFactory2 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemAlignFactory2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_lateral_mounting_offset-val :lambda-list '(m))
(cl:defmethod can_lateral_mounting_offset-val ((m <SystemAlignFactory2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_lateral_mounting_offset-val is deprecated.  Use delphi_mrr_msgs-msg:can_lateral_mounting_offset instead.")
  (can_lateral_mounting_offset m))

(cl:ensure-generic-function 'can_fac_plate_tilt_number-val :lambda-list '(m))
(cl:defmethod can_fac_plate_tilt_number-val ((m <SystemAlignFactory2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_plate_tilt_number-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_plate_tilt_number instead.")
  (can_fac_plate_tilt_number m))

(cl:ensure-generic-function 'can_fac_plate_tilt_angle-val :lambda-list '(m))
(cl:defmethod can_fac_plate_tilt_angle-val ((m <SystemAlignFactory2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_plate_tilt_angle-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_plate_tilt_angle instead.")
  (can_fac_plate_tilt_angle m))

(cl:ensure-generic-function 'can_fac_plate_positions_total-val :lambda-list '(m))
(cl:defmethod can_fac_plate_positions_total-val ((m <SystemAlignFactory2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_plate_positions_total-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_plate_positions_total instead.")
  (can_fac_plate_positions_total m))

(cl:ensure-generic-function 'can_fac_align_max_nt-val :lambda-list '(m))
(cl:defmethod can_fac_align_max_nt-val ((m <SystemAlignFactory2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_align_max_nt-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_align_max_nt instead.")
  (can_fac_align_max_nt m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemAlignFactory2>) ostream)
  "Serializes a message object of type '<SystemAlignFactory2>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_lateral_mounting_offset))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_plate_tilt_number)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fac_plate_tilt_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_plate_positions_total)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_align_max_nt)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemAlignFactory2>) istream)
  "Deserializes a message object of type '<SystemAlignFactory2>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_lateral_mounting_offset) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_plate_tilt_number)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fac_plate_tilt_angle) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_plate_positions_total)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_align_max_nt)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemAlignFactory2>)))
  "Returns string type for a message object of type '<SystemAlignFactory2>"
  "delphi_mrr_msgs/SystemAlignFactory2")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemAlignFactory2)))
  "Returns string type for a message object of type 'SystemAlignFactory2"
  "delphi_mrr_msgs/SystemAlignFactory2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemAlignFactory2>)))
  "Returns md5sum for a message object of type '<SystemAlignFactory2>"
  "2a675dbc2b977f155eb8d12a8fa7811e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemAlignFactory2)))
  "Returns md5sum for a message object of type 'SystemAlignFactory2"
  "2a675dbc2b977f155eb8d12a8fa7811e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemAlignFactory2>)))
  "Returns full string definition for message of type '<SystemAlignFactory2>"
  (cl:format cl:nil "std_msgs/Header header~%~%float32 can_lateral_mounting_offset ~%uint8   can_fac_plate_tilt_number~%float32 can_fac_plate_tilt_angle~%uint8   can_fac_plate_positions_total~%uint8   can_fac_align_max_nt~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemAlignFactory2)))
  "Returns full string definition for message of type 'SystemAlignFactory2"
  (cl:format cl:nil "std_msgs/Header header~%~%float32 can_lateral_mounting_offset ~%uint8   can_fac_plate_tilt_number~%float32 can_fac_plate_tilt_angle~%uint8   can_fac_plate_positions_total~%uint8   can_fac_align_max_nt~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemAlignFactory2>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     1
     4
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemAlignFactory2>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemAlignFactory2
    (cl:cons ':header (header msg))
    (cl:cons ':can_lateral_mounting_offset (can_lateral_mounting_offset msg))
    (cl:cons ':can_fac_plate_tilt_number (can_fac_plate_tilt_number msg))
    (cl:cons ':can_fac_plate_tilt_angle (can_fac_plate_tilt_angle msg))
    (cl:cons ':can_fac_plate_positions_total (can_fac_plate_positions_total msg))
    (cl:cons ':can_fac_align_max_nt (can_fac_align_max_nt msg))
))
