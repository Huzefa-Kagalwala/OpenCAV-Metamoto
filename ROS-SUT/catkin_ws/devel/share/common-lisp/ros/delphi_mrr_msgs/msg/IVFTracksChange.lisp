; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude IVFTracksChange.msg.html

(cl:defclass <IVFTracksChange> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (f_radar_unreasonable
    :reader f_radar_unreasonable
    :initarg :f_radar_unreasonable
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass IVFTracksChange (<IVFTracksChange>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IVFTracksChange>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IVFTracksChange)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<IVFTracksChange> is deprecated: use delphi_mrr_msgs-msg:IVFTracksChange instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <IVFTracksChange>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'f_radar_unreasonable-val :lambda-list '(m))
(cl:defmethod f_radar_unreasonable-val ((m <IVFTracksChange>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:f_radar_unreasonable-val is deprecated.  Use delphi_mrr_msgs-msg:f_radar_unreasonable instead.")
  (f_radar_unreasonable m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IVFTracksChange>) ostream)
  "Serializes a message object of type '<IVFTracksChange>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'f_radar_unreasonable) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IVFTracksChange>) istream)
  "Deserializes a message object of type '<IVFTracksChange>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:slot-value msg 'f_radar_unreasonable) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IVFTracksChange>)))
  "Returns string type for a message object of type '<IVFTracksChange>"
  "delphi_mrr_msgs/IVFTracksChange")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IVFTracksChange)))
  "Returns string type for a message object of type 'IVFTracksChange"
  "delphi_mrr_msgs/IVFTracksChange")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IVFTracksChange>)))
  "Returns md5sum for a message object of type '<IVFTracksChange>"
  "b96e48ec2e50e5161b12a9d85bb23f2a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IVFTracksChange)))
  "Returns md5sum for a message object of type 'IVFTracksChange"
  "b96e48ec2e50e5161b12a9d85bb23f2a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IVFTracksChange>)))
  "Returns full string definition for message of type '<IVFTracksChange>"
  (cl:format cl:nil "std_msgs/Header header~%~%bool f_radar_unreasonable~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IVFTracksChange)))
  "Returns full string definition for message of type 'IVFTracksChange"
  (cl:format cl:nil "std_msgs/Header header~%~%bool f_radar_unreasonable~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IVFTracksChange>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IVFTracksChange>))
  "Converts a ROS message object to a list"
  (cl:list 'IVFTracksChange
    (cl:cons ':header (header msg))
    (cl:cons ':f_radar_unreasonable (f_radar_unreasonable msg))
))
