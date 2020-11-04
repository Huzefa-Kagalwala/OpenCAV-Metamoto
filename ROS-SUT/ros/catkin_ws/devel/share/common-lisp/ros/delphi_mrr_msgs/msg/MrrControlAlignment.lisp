; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude MrrControlAlignment.msg.html

(cl:defclass <MrrControlAlignment> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_fac_align_cmd3
    :reader can_fac_align_cmd3
    :initarg :can_fac_align_cmd3
    :type cl:boolean
    :initform cl:nil)
   (can_fac_align_cmd2
    :reader can_fac_align_cmd2
    :initarg :can_fac_align_cmd2
    :type cl:boolean
    :initform cl:nil)
   (can_fac_align_cmd1
    :reader can_fac_align_cmd1
    :initarg :can_fac_align_cmd1
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass MrrControlAlignment (<MrrControlAlignment>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MrrControlAlignment>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MrrControlAlignment)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<MrrControlAlignment> is deprecated: use delphi_mrr_msgs-msg:MrrControlAlignment instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <MrrControlAlignment>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_fac_align_cmd3-val :lambda-list '(m))
(cl:defmethod can_fac_align_cmd3-val ((m <MrrControlAlignment>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_align_cmd3-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_align_cmd3 instead.")
  (can_fac_align_cmd3 m))

(cl:ensure-generic-function 'can_fac_align_cmd2-val :lambda-list '(m))
(cl:defmethod can_fac_align_cmd2-val ((m <MrrControlAlignment>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_align_cmd2-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_align_cmd2 instead.")
  (can_fac_align_cmd2 m))

(cl:ensure-generic-function 'can_fac_align_cmd1-val :lambda-list '(m))
(cl:defmethod can_fac_align_cmd1-val ((m <MrrControlAlignment>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fac_align_cmd1-val is deprecated.  Use delphi_mrr_msgs-msg:can_fac_align_cmd1 instead.")
  (can_fac_align_cmd1 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MrrControlAlignment>) ostream)
  "Serializes a message object of type '<MrrControlAlignment>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_fac_align_cmd3) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_fac_align_cmd2) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_fac_align_cmd1) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MrrControlAlignment>) istream)
  "Deserializes a message object of type '<MrrControlAlignment>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'can_fac_align_cmd3) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_fac_align_cmd2) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_fac_align_cmd1) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MrrControlAlignment>)))
  "Returns string type for a message object of type '<MrrControlAlignment>"
  "delphi_mrr_msgs/MrrControlAlignment")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MrrControlAlignment)))
  "Returns string type for a message object of type 'MrrControlAlignment"
  "delphi_mrr_msgs/MrrControlAlignment")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MrrControlAlignment>)))
  "Returns md5sum for a message object of type '<MrrControlAlignment>"
  "022c142d4c445433eb445902d2e2f141")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MrrControlAlignment)))
  "Returns md5sum for a message object of type 'MrrControlAlignment"
  "022c142d4c445433eb445902d2e2f141")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MrrControlAlignment>)))
  "Returns full string definition for message of type '<MrrControlAlignment>"
  (cl:format cl:nil "std_msgs/Header header~%~%bool can_fac_align_cmd3~%bool can_fac_align_cmd2~%bool can_fac_align_cmd1~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MrrControlAlignment)))
  "Returns full string definition for message of type 'MrrControlAlignment"
  (cl:format cl:nil "std_msgs/Header header~%~%bool can_fac_align_cmd3~%bool can_fac_align_cmd2~%bool can_fac_align_cmd1~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MrrControlAlignment>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MrrControlAlignment>))
  "Converts a ROS message object to a list"
  (cl:list 'MrrControlAlignment
    (cl:cons ':header (header msg))
    (cl:cons ':can_fac_align_cmd3 (can_fac_align_cmd3 msg))
    (cl:cons ':can_fac_align_cmd2 (can_fac_align_cmd2 msg))
    (cl:cons ':can_fac_align_cmd1 (can_fac_align_cmd1 msg))
))
