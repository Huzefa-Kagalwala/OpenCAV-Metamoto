; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude XCPMrrDtoResp.msg.html

(cl:defclass <XCPMrrDtoResp> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (mrr_xcp_dto_resp_byte7
    :reader mrr_xcp_dto_resp_byte7
    :initarg :mrr_xcp_dto_resp_byte7
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte6
    :reader mrr_xcp_dto_resp_byte6
    :initarg :mrr_xcp_dto_resp_byte6
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte5
    :reader mrr_xcp_dto_resp_byte5
    :initarg :mrr_xcp_dto_resp_byte5
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte4
    :reader mrr_xcp_dto_resp_byte4
    :initarg :mrr_xcp_dto_resp_byte4
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte3
    :reader mrr_xcp_dto_resp_byte3
    :initarg :mrr_xcp_dto_resp_byte3
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte2
    :reader mrr_xcp_dto_resp_byte2
    :initarg :mrr_xcp_dto_resp_byte2
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte1
    :reader mrr_xcp_dto_resp_byte1
    :initarg :mrr_xcp_dto_resp_byte1
    :type cl:fixnum
    :initform 0)
   (mrr_xcp_dto_resp_byte0
    :reader mrr_xcp_dto_resp_byte0
    :initarg :mrr_xcp_dto_resp_byte0
    :type cl:fixnum
    :initform 0))
)

(cl:defclass XCPMrrDtoResp (<XCPMrrDtoResp>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <XCPMrrDtoResp>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'XCPMrrDtoResp)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<XCPMrrDtoResp> is deprecated: use delphi_mrr_msgs-msg:XCPMrrDtoResp instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte7-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte7-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte7-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte7 instead.")
  (mrr_xcp_dto_resp_byte7 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte6-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte6-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte6-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte6 instead.")
  (mrr_xcp_dto_resp_byte6 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte5-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte5-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte5-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte5 instead.")
  (mrr_xcp_dto_resp_byte5 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte4-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte4-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte4-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte4 instead.")
  (mrr_xcp_dto_resp_byte4 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte3-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte3-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte3-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte3 instead.")
  (mrr_xcp_dto_resp_byte3 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte2-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte2-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte2-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte2 instead.")
  (mrr_xcp_dto_resp_byte2 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte1-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte1-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte1-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte1 instead.")
  (mrr_xcp_dto_resp_byte1 m))

(cl:ensure-generic-function 'mrr_xcp_dto_resp_byte0-val :lambda-list '(m))
(cl:defmethod mrr_xcp_dto_resp_byte0-val ((m <XCPMrrDtoResp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte0-val is deprecated.  Use delphi_mrr_msgs-msg:mrr_xcp_dto_resp_byte0 instead.")
  (mrr_xcp_dto_resp_byte0 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <XCPMrrDtoResp>) ostream)
  "Serializes a message object of type '<XCPMrrDtoResp>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte7)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <XCPMrrDtoResp>) istream)
  "Deserializes a message object of type '<XCPMrrDtoResp>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte7)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mrr_xcp_dto_resp_byte0)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<XCPMrrDtoResp>)))
  "Returns string type for a message object of type '<XCPMrrDtoResp>"
  "delphi_mrr_msgs/XCPMrrDtoResp")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'XCPMrrDtoResp)))
  "Returns string type for a message object of type 'XCPMrrDtoResp"
  "delphi_mrr_msgs/XCPMrrDtoResp")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<XCPMrrDtoResp>)))
  "Returns md5sum for a message object of type '<XCPMrrDtoResp>"
  "33015dac7990557fe5fe9a90e5fe08ac")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'XCPMrrDtoResp)))
  "Returns md5sum for a message object of type 'XCPMrrDtoResp"
  "33015dac7990557fe5fe9a90e5fe08ac")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<XCPMrrDtoResp>)))
  "Returns full string definition for message of type '<XCPMrrDtoResp>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 mrr_xcp_dto_resp_byte7~%uint8 mrr_xcp_dto_resp_byte6~%uint8 mrr_xcp_dto_resp_byte5~%uint8 mrr_xcp_dto_resp_byte4~%uint8 mrr_xcp_dto_resp_byte3~%uint8 mrr_xcp_dto_resp_byte2~%uint8 mrr_xcp_dto_resp_byte1~%uint8 mrr_xcp_dto_resp_byte0~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'XCPMrrDtoResp)))
  "Returns full string definition for message of type 'XCPMrrDtoResp"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 mrr_xcp_dto_resp_byte7~%uint8 mrr_xcp_dto_resp_byte6~%uint8 mrr_xcp_dto_resp_byte5~%uint8 mrr_xcp_dto_resp_byte4~%uint8 mrr_xcp_dto_resp_byte3~%uint8 mrr_xcp_dto_resp_byte2~%uint8 mrr_xcp_dto_resp_byte1~%uint8 mrr_xcp_dto_resp_byte0~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <XCPMrrDtoResp>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <XCPMrrDtoResp>))
  "Converts a ROS message object to a list"
  (cl:list 'XCPMrrDtoResp
    (cl:cons ':header (header msg))
    (cl:cons ':mrr_xcp_dto_resp_byte7 (mrr_xcp_dto_resp_byte7 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte6 (mrr_xcp_dto_resp_byte6 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte5 (mrr_xcp_dto_resp_byte5 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte4 (mrr_xcp_dto_resp_byte4 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte3 (mrr_xcp_dto_resp_byte3 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte2 (mrr_xcp_dto_resp_byte2 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte1 (mrr_xcp_dto_resp_byte1 msg))
    (cl:cons ':mrr_xcp_dto_resp_byte0 (mrr_xcp_dto_resp_byte0 msg))
))
