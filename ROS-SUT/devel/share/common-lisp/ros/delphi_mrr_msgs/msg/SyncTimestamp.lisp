; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SyncTimestamp.msg.html

(cl:defclass <SyncTimestamp> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_vfp_timestamp
    :reader can_vfp_timestamp
    :initarg :can_vfp_timestamp
    :type cl:integer
    :initform 0))
)

(cl:defclass SyncTimestamp (<SyncTimestamp>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SyncTimestamp>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SyncTimestamp)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SyncTimestamp> is deprecated: use delphi_mrr_msgs-msg:SyncTimestamp instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SyncTimestamp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_vfp_timestamp-val :lambda-list '(m))
(cl:defmethod can_vfp_timestamp-val ((m <SyncTimestamp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_vfp_timestamp-val is deprecated.  Use delphi_mrr_msgs-msg:can_vfp_timestamp instead.")
  (can_vfp_timestamp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SyncTimestamp>) ostream)
  "Serializes a message object of type '<SyncTimestamp>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'can_vfp_timestamp)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SyncTimestamp>) istream)
  "Deserializes a message object of type '<SyncTimestamp>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 32) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 40) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 48) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 56) (cl:slot-value msg 'can_vfp_timestamp)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SyncTimestamp>)))
  "Returns string type for a message object of type '<SyncTimestamp>"
  "delphi_mrr_msgs/SyncTimestamp")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SyncTimestamp)))
  "Returns string type for a message object of type 'SyncTimestamp"
  "delphi_mrr_msgs/SyncTimestamp")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SyncTimestamp>)))
  "Returns md5sum for a message object of type '<SyncTimestamp>"
  "2683e5da6c33b06602b4c8f409336d3c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SyncTimestamp)))
  "Returns md5sum for a message object of type 'SyncTimestamp"
  "2683e5da6c33b06602b4c8f409336d3c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SyncTimestamp>)))
  "Returns full string definition for message of type '<SyncTimestamp>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint64 can_vfp_timestamp~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SyncTimestamp)))
  "Returns full string definition for message of type 'SyncTimestamp"
  (cl:format cl:nil "std_msgs/Header header~%~%uint64 can_vfp_timestamp~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SyncTimestamp>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SyncTimestamp>))
  "Converts a ROS message object to a list"
  (cl:list 'SyncTimestamp
    (cl:cons ':header (header msg))
    (cl:cons ':can_vfp_timestamp (can_vfp_timestamp msg))
))
