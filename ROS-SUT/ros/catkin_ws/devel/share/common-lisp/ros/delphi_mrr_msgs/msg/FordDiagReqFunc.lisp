; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude FordDiagReqFunc.msg.html

(cl:defclass <FordDiagReqFunc> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (tester_functional_req
    :reader tester_functional_req
    :initarg :tester_functional_req
    :type cl:integer
    :initform 0))
)

(cl:defclass FordDiagReqFunc (<FordDiagReqFunc>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FordDiagReqFunc>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FordDiagReqFunc)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<FordDiagReqFunc> is deprecated: use delphi_mrr_msgs-msg:FordDiagReqFunc instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <FordDiagReqFunc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'tester_functional_req-val :lambda-list '(m))
(cl:defmethod tester_functional_req-val ((m <FordDiagReqFunc>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:tester_functional_req-val is deprecated.  Use delphi_mrr_msgs-msg:tester_functional_req instead.")
  (tester_functional_req m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FordDiagReqFunc>) ostream)
  "Serializes a message object of type '<FordDiagReqFunc>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'tester_functional_req)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'tester_functional_req)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FordDiagReqFunc>) istream)
  "Deserializes a message object of type '<FordDiagReqFunc>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'tester_functional_req)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FordDiagReqFunc>)))
  "Returns string type for a message object of type '<FordDiagReqFunc>"
  "delphi_mrr_msgs/FordDiagReqFunc")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FordDiagReqFunc)))
  "Returns string type for a message object of type 'FordDiagReqFunc"
  "delphi_mrr_msgs/FordDiagReqFunc")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FordDiagReqFunc>)))
  "Returns md5sum for a message object of type '<FordDiagReqFunc>"
  "2b28e0047686c777bf26e57d8c8c53d5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FordDiagReqFunc)))
  "Returns md5sum for a message object of type 'FordDiagReqFunc"
  "2b28e0047686c777bf26e57d8c8c53d5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FordDiagReqFunc>)))
  "Returns full string definition for message of type '<FordDiagReqFunc>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint64 tester_functional_req~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FordDiagReqFunc)))
  "Returns full string definition for message of type 'FordDiagReqFunc"
  (cl:format cl:nil "std_msgs/Header header~%~%uint64 tester_functional_req~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FordDiagReqFunc>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FordDiagReqFunc>))
  "Converts a ROS message object to a list"
  (cl:list 'FordDiagReqFunc
    (cl:cons ':header (header msg))
    (cl:cons ':tester_functional_req (tester_functional_req msg))
))
