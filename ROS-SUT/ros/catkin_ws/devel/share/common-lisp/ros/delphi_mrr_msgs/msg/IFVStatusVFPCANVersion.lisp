; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude IFVStatusVFPCANVersion.msg.html

(cl:defclass <IFVStatusVFPCANVersion> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_pcan_minor_ifv_vfp
    :reader can_pcan_minor_ifv_vfp
    :initarg :can_pcan_minor_ifv_vfp
    :type cl:fixnum
    :initform 0)
   (can_pcan_major_ifv_vfp
    :reader can_pcan_major_ifv_vfp
    :initarg :can_pcan_major_ifv_vfp
    :type cl:fixnum
    :initform 0))
)

(cl:defclass IFVStatusVFPCANVersion (<IFVStatusVFPCANVersion>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IFVStatusVFPCANVersion>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IFVStatusVFPCANVersion)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<IFVStatusVFPCANVersion> is deprecated: use delphi_mrr_msgs-msg:IFVStatusVFPCANVersion instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <IFVStatusVFPCANVersion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_pcan_minor_ifv_vfp-val :lambda-list '(m))
(cl:defmethod can_pcan_minor_ifv_vfp-val ((m <IFVStatusVFPCANVersion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_pcan_minor_ifv_vfp-val is deprecated.  Use delphi_mrr_msgs-msg:can_pcan_minor_ifv_vfp instead.")
  (can_pcan_minor_ifv_vfp m))

(cl:ensure-generic-function 'can_pcan_major_ifv_vfp-val :lambda-list '(m))
(cl:defmethod can_pcan_major_ifv_vfp-val ((m <IFVStatusVFPCANVersion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_pcan_major_ifv_vfp-val is deprecated.  Use delphi_mrr_msgs-msg:can_pcan_major_ifv_vfp instead.")
  (can_pcan_major_ifv_vfp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IFVStatusVFPCANVersion>) ostream)
  "Serializes a message object of type '<IFVStatusVFPCANVersion>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_pcan_minor_ifv_vfp)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_pcan_major_ifv_vfp)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IFVStatusVFPCANVersion>) istream)
  "Deserializes a message object of type '<IFVStatusVFPCANVersion>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_pcan_minor_ifv_vfp)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_pcan_major_ifv_vfp)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IFVStatusVFPCANVersion>)))
  "Returns string type for a message object of type '<IFVStatusVFPCANVersion>"
  "delphi_mrr_msgs/IFVStatusVFPCANVersion")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IFVStatusVFPCANVersion)))
  "Returns string type for a message object of type 'IFVStatusVFPCANVersion"
  "delphi_mrr_msgs/IFVStatusVFPCANVersion")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IFVStatusVFPCANVersion>)))
  "Returns md5sum for a message object of type '<IFVStatusVFPCANVersion>"
  "ce4ce31a8f45ccd449a2f0c9af78d24c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IFVStatusVFPCANVersion)))
  "Returns md5sum for a message object of type 'IFVStatusVFPCANVersion"
  "ce4ce31a8f45ccd449a2f0c9af78d24c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IFVStatusVFPCANVersion>)))
  "Returns full string definition for message of type '<IFVStatusVFPCANVersion>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 can_pcan_minor_ifv_vfp~%uint8 can_pcan_major_ifv_vfp~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IFVStatusVFPCANVersion)))
  "Returns full string definition for message of type 'IFVStatusVFPCANVersion"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 can_pcan_minor_ifv_vfp~%uint8 can_pcan_major_ifv_vfp~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IFVStatusVFPCANVersion>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IFVStatusVFPCANVersion>))
  "Converts a ROS message object to a list"
  (cl:list 'IFVStatusVFPCANVersion
    (cl:cons ':header (header msg))
    (cl:cons ':can_pcan_minor_ifv_vfp (can_pcan_minor_ifv_vfp msg))
    (cl:cons ':can_pcan_major_ifv_vfp (can_pcan_major_ifv_vfp msg))
))
