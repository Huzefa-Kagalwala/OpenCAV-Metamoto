; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude LrosVinPart3.msg.html

(cl:defclass <LrosVinPart3> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (vin_part3
    :reader vin_part3
    :initarg :vin_part3
    :type cl:fixnum
    :initform 0))
)

(cl:defclass LrosVinPart3 (<LrosVinPart3>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LrosVinPart3>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LrosVinPart3)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<LrosVinPart3> is deprecated: use delphi_mrr_msgs-msg:LrosVinPart3 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LrosVinPart3>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'vin_part3-val :lambda-list '(m))
(cl:defmethod vin_part3-val ((m <LrosVinPart3>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:vin_part3-val is deprecated.  Use delphi_mrr_msgs-msg:vin_part3 instead.")
  (vin_part3 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LrosVinPart3>) ostream)
  "Serializes a message object of type '<LrosVinPart3>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vin_part3)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LrosVinPart3>) istream)
  "Deserializes a message object of type '<LrosVinPart3>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vin_part3)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LrosVinPart3>)))
  "Returns string type for a message object of type '<LrosVinPart3>"
  "delphi_mrr_msgs/LrosVinPart3")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LrosVinPart3)))
  "Returns string type for a message object of type 'LrosVinPart3"
  "delphi_mrr_msgs/LrosVinPart3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LrosVinPart3>)))
  "Returns md5sum for a message object of type '<LrosVinPart3>"
  "44e8b25f48ee0ef15094dafe0bd60159")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LrosVinPart3)))
  "Returns md5sum for a message object of type 'LrosVinPart3"
  "44e8b25f48ee0ef15094dafe0bd60159")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LrosVinPart3>)))
  "Returns full string definition for message of type '<LrosVinPart3>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 vin_part3~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LrosVinPart3)))
  "Returns full string definition for message of type 'LrosVinPart3"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 vin_part3~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LrosVinPart3>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LrosVinPart3>))
  "Converts a ROS message object to a list"
  (cl:list 'LrosVinPart3
    (cl:cons ':header (header msg))
    (cl:cons ':vin_part3 (vin_part3 msg))
))
