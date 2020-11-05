; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemAlignFactory1.msg.html

(cl:defclass <SystemAlignFactory1> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_fac_tgt_range_r2m
    :reader can_fac_tgt_range_r2m
    :initarg :can_fac_tgt_range_r2m
    :type cl:float
    :initform 0.0)
   (can_fac_tgt_range_m2t
    :reader can_fac_tgt_range_m2t
    :initarg :can_fac_tgt_range_m2t
    :type cl:float
    :initform 0.0)
   (can_fac_tgt_range1
    :reader can_fac_tgt_range1
    :initarg :can_fac_tgt_range1
    :type cl:float
    :initform 0.0)
   (can_fac_tgt_mtg_space_hor
    :reader can_fac_tgt_mtg_space_hor
    :initarg :can_fac_tgt_mtg_space_hor
    :type cl:fixnum
    :initform 0)
   (can_fac_tgt_mtg_offset
    :reader can_fac_tgt_mtg_offset
    :initarg :can_fac_tgt_mtg_offset
    :type cl:fixnum
    :initform 0)
   (can_fac_align_samp_req
    :reader can_fac_align_samp_req
    :initarg :can_fac_align_samp_req
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SystemAlignFactory1 (<SystemAlignFactory1>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemAlignFactory1>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemAlignFactory1)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemAlignFactory1> is deprecated: use delphi_mrr_msgs-msg:SystemAlignFactory1 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_fac_tgt_range_r2m-val :lambda-list '(m))
(cl:defmethod can_fac_tgt_range_r2m-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_tgt_range_r2m-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_tgt_range_r2m instead.")
  (can_fac_tgt_range_r2m m))

(cl:ensure-generic-function 'can_fac_tgt_range_m2t-val :lambda-list '(m))
(cl:defmethod can_fac_tgt_range_m2t-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_tgt_range_m2t-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_tgt_range_m2t instead.")
  (can_fac_tgt_range_m2t m))

(cl:ensure-generic-function 'can_fac_tgt_range1-val :lambda-list '(m))
(cl:defmethod can_fac_tgt_range1-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_tgt_range1-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_tgt_range1 instead.")
  (can_fac_tgt_range1 m))

(cl:ensure-generic-function 'can_fac_tgt_mtg_space_hor-val :lambda-list '(m))
(cl:defmethod can_fac_tgt_mtg_space_hor-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_tgt_mtg_space_hor-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_tgt_mtg_space_hor instead.")
  (can_fac_tgt_mtg_space_hor m))

(cl:ensure-generic-function 'can_fac_tgt_mtg_offset-val :lambda-list '(m))
(cl:defmethod can_fac_tgt_mtg_offset-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_tgt_mtg_offset-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_tgt_mtg_offset instead.")
  (can_fac_tgt_mtg_offset m))

(cl:ensure-generic-function 'can_fac_align_samp_req-val :lambda-list '(m))
(cl:defmethod can_fac_align_samp_req-val ((m <SystemAlignFactory1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_align_samp_req-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_align_samp_req instead.")
  (can_fac_align_samp_req m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemAlignFactory1>) ostream)
  "Serializes a message object of type '<SystemAlignFactory1>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fac_tgt_range_r2m))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fac_tgt_range_m2t))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fac_tgt_range1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_tgt_mtg_space_hor)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_tgt_mtg_offset)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_align_samp_req)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemAlignFactory1>) istream)
  "Deserializes a message object of type '<SystemAlignFactory1>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fac_tgt_range_r2m) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fac_tgt_range_m2t) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fac_tgt_range1) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_tgt_mtg_space_hor)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_tgt_mtg_offset)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_fac_align_samp_req)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemAlignFactory1>)))
  "Returns string type for a message object of type '<SystemAlignFactory1>"
  "delphi_mrr_msgs/SystemAlignFactory1")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemAlignFactory1)))
  "Returns string type for a message object of type 'SystemAlignFactory1"
  "delphi_mrr_msgs/SystemAlignFactory1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemAlignFactory1>)))
  "Returns md5sum for a message object of type '<SystemAlignFactory1>"
  "33dc19c198faf55bc08750372fc54a34")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemAlignFactory1)))
  "Returns md5sum for a message object of type 'SystemAlignFactory1"
  "33dc19c198faf55bc08750372fc54a34")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemAlignFactory1>)))
  "Returns full string definition for message of type '<SystemAlignFactory1>"
  (cl:format cl:nil "std_msgs/Header header~%~%float32 can_fac_tgt_range_r2m~%float32 can_fac_tgt_range_m2t~%float32 can_fac_tgt_range1~%uint8  can_fac_tgt_mtg_space_hor~%uint8  can_fac_tgt_mtg_offset~%uint8  can_fac_align_samp_req~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemAlignFactory1)))
  "Returns full string definition for message of type 'SystemAlignFactory1"
  (cl:format cl:nil "std_msgs/Header header~%~%float32 can_fac_tgt_range_r2m~%float32 can_fac_tgt_range_m2t~%float32 can_fac_tgt_range1~%uint8  can_fac_tgt_mtg_space_hor~%uint8  can_fac_tgt_mtg_offset~%uint8  can_fac_align_samp_req~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemAlignFactory1>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemAlignFactory1>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemAlignFactory1
    (cl:cons ':header (header msg))
    (cl:cons ':can_fac_tgt_range_r2m (can_fac_tgt_range_r2m msg))
    (cl:cons ':can_fac_tgt_range_m2t (can_fac_tgt_range_m2t msg))
    (cl:cons ':can_fac_tgt_range1 (can_fac_tgt_range1 msg))
    (cl:cons ':can_fac_tgt_mtg_space_hor (can_fac_tgt_mtg_space_hor msg))
    (cl:cons ':can_fac_tgt_mtg_offset (can_fac_tgt_mtg_offset msg))
    (cl:cons ':can_fac_align_samp_req (can_fac_align_samp_req msg))
))
