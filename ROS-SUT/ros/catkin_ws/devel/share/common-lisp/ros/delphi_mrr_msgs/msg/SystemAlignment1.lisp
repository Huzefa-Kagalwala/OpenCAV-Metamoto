; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemAlignment1.msg.html

(cl:defclass <SystemAlignment1> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_mrr_upside_down
    :reader can_mrr_upside_down
    :initarg :can_mrr_upside_down
    :type cl:boolean
    :initform cl:nil)
   (can_blockage_filter_output
    :reader can_blockage_filter_output
    :initarg :can_blockage_filter_output
    :type cl:fixnum
    :initform 0)
   (can_angle_misalignment_hdr
    :reader can_angle_misalignment_hdr
    :initarg :can_angle_misalignment_hdr
    :type cl:float
    :initform 0.0)
   (can_use_angle_misalignment
    :reader can_use_angle_misalignment
    :initarg :can_use_angle_misalignment
    :type cl:boolean
    :initform cl:nil)
   (can_blockage_disable
    :reader can_blockage_disable
    :initarg :can_blockage_disable
    :type cl:boolean
    :initform cl:nil)
   (can_scan_index_ack
    :reader can_scan_index_ack
    :initarg :can_scan_index_ack
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SystemAlignment1 (<SystemAlignment1>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemAlignment1>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemAlignment1)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemAlignment1> is deprecated: use delphi_mrr_msgs-msg:SystemAlignment1 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_mrr_upside_down-val :lambda-list '(m))
(cl:defmethod can_mrr_upside_down-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_mrr_upside_down-val is deprecated.  Use delphi_mrr_msgs-msg:can_mrr_upside_down instead.")
  (can_mrr_upside_down m))

(cl:ensure-generic-function 'can_blockage_filter_output-val :lambda-list '(m))
(cl:defmethod can_blockage_filter_output-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_blockage_filter_output-val is deprecated.  Use delphi_mrr_msgs-msg:can_blockage_filter_output instead.")
  (can_blockage_filter_output m))

(cl:ensure-generic-function 'can_angle_misalignment_hdr-val :lambda-list '(m))
(cl:defmethod can_angle_misalignment_hdr-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_angle_misalignment_hdr-val is deprecated.  Use delphi_mrr_msgs-msg:can_angle_misalignment_hdr instead.")
  (can_angle_misalignment_hdr m))

(cl:ensure-generic-function 'can_use_angle_misalignment-val :lambda-list '(m))
(cl:defmethod can_use_angle_misalignment-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_use_angle_misalignment-val is deprecated.  Use delphi_mrr_msgs-msg:can_use_angle_misalignment instead.")
  (can_use_angle_misalignment m))

(cl:ensure-generic-function 'can_blockage_disable-val :lambda-list '(m))
(cl:defmethod can_blockage_disable-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_blockage_disable-val is deprecated.  Use delphi_mrr_msgs-msg:can_blockage_disable instead.")
  (can_blockage_disable m))

(cl:ensure-generic-function 'can_scan_index_ack-val :lambda-list '(m))
(cl:defmethod can_scan_index_ack-val ((m <SystemAlignment1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_scan_index_ack-val is deprecated.  Use delphi_mrr_msgs-msg:can_scan_index_ack instead.")
  (can_scan_index_ack m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemAlignment1>) ostream)
  "Serializes a message object of type '<SystemAlignment1>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_mrr_upside_down) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_blockage_filter_output)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_angle_misalignment_hdr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_use_angle_misalignment) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_blockage_disable) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_scan_index_ack)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_scan_index_ack)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemAlignment1>) istream)
  "Deserializes a message object of type '<SystemAlignment1>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'can_mrr_upside_down) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_blockage_filter_output)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_angle_misalignment_hdr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:slot-value msg 'can_use_angle_misalignment) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_blockage_disable) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_scan_index_ack)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_scan_index_ack)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemAlignment1>)))
  "Returns string type for a message object of type '<SystemAlignment1>"
  "delphi_mrr_msgs/SystemAlignment1")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemAlignment1)))
  "Returns string type for a message object of type 'SystemAlignment1"
  "delphi_mrr_msgs/SystemAlignment1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemAlignment1>)))
  "Returns md5sum for a message object of type '<SystemAlignment1>"
  "4e20533dd9d1d3391832af45ebd7eff2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemAlignment1)))
  "Returns md5sum for a message object of type 'SystemAlignment1"
  "4e20533dd9d1d3391832af45ebd7eff2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemAlignment1>)))
  "Returns full string definition for message of type '<SystemAlignment1>"
  (cl:format cl:nil "std_msgs/Header header~%~%bool     can_mrr_upside_down~%uint8 	 can_blockage_filter_output~%float32  can_angle_misalignment_hdr~%bool     can_use_angle_misalignment~%bool     can_blockage_disable~%uint16   can_scan_index_ack ~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemAlignment1)))
  "Returns full string definition for message of type 'SystemAlignment1"
  (cl:format cl:nil "std_msgs/Header header~%~%bool     can_mrr_upside_down~%uint8 	 can_blockage_filter_output~%float32  can_angle_misalignment_hdr~%bool     can_use_angle_misalignment~%bool     can_blockage_disable~%uint16   can_scan_index_ack ~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemAlignment1>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     4
     1
     1
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemAlignment1>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemAlignment1
    (cl:cons ':header (header msg))
    (cl:cons ':can_mrr_upside_down (can_mrr_upside_down msg))
    (cl:cons ':can_blockage_filter_output (can_blockage_filter_output msg))
    (cl:cons ':can_angle_misalignment_hdr (can_angle_misalignment_hdr msg))
    (cl:cons ':can_use_angle_misalignment (can_use_angle_misalignment msg))
    (cl:cons ':can_blockage_disable (can_blockage_disable msg))
    (cl:cons ':can_scan_index_ack (can_scan_index_ack msg))
))
