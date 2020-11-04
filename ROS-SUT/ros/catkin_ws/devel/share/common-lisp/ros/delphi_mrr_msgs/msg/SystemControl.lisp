; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemControl.msg.html

(cl:defclass <SystemControl> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_inst_mode
    :reader can_inst_mode
    :initarg :can_inst_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SystemControl (<SystemControl>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemControl>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemControl)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemControl> is deprecated: use delphi_mrr_msgs-msg:SystemControl instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_inst_mode-val :lambda-list '(m))
(cl:defmethod can_inst_mode-val ((m <SystemControl>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_inst_mode-val is deprecated.  Use delphi_mrr_msgs-msg:can_inst_mode instead.")
  (can_inst_mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemControl>) ostream)
  "Serializes a message object of type '<SystemControl>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_inst_mode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_inst_mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemControl>) istream)
  "Deserializes a message object of type '<SystemControl>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_inst_mode)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_inst_mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemControl>)))
  "Returns string type for a message object of type '<SystemControl>"
  "delphi_mrr_msgs/SystemControl")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemControl)))
  "Returns string type for a message object of type 'SystemControl"
  "delphi_mrr_msgs/SystemControl")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemControl>)))
  "Returns md5sum for a message object of type '<SystemControl>"
  "1e72efc4c43d994919ce3a728dcb56f3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemControl)))
  "Returns md5sum for a message object of type 'SystemControl"
  "1e72efc4c43d994919ce3a728dcb56f3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemControl>)))
  "Returns full string definition for message of type '<SystemControl>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint16 can_inst_mode~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemControl)))
  "Returns full string definition for message of type 'SystemControl"
  (cl:format cl:nil "std_msgs/Header header~%~%uint16 can_inst_mode~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemControl>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemControl>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemControl
    (cl:cons ':header (header msg))
    (cl:cons ':can_inst_mode (can_inst_mode msg))
))
