; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude LrosVinPart2.msg.html

(cl:defclass <LrosVinPart2> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (vin_part2
    :reader vin_part2
    :initarg :vin_part2
    :type cl:fixnum
    :initform 0))
)

(cl:defclass LrosVinPart2 (<LrosVinPart2>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LrosVinPart2>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LrosVinPart2)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<LrosVinPart2> is deprecated: use delphi_mrr_msgs-msg:LrosVinPart2 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LrosVinPart2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'vin_part2-val :lambda-list '(m))
(cl:defmethod vin_part2-val ((m <LrosVinPart2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:vin_part2-val is deprecated.  Use delphi_mrr_msgs-msg:vin_part2 instead.")
  (vin_part2 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LrosVinPart2>) ostream)
  "Serializes a message object of type '<LrosVinPart2>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vin_part2)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LrosVinPart2>) istream)
  "Deserializes a message object of type '<LrosVinPart2>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'vin_part2)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LrosVinPart2>)))
  "Returns string type for a message object of type '<LrosVinPart2>"
  "delphi_mrr_msgs/LrosVinPart2")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LrosVinPart2)))
  "Returns string type for a message object of type 'LrosVinPart2"
  "delphi_mrr_msgs/LrosVinPart2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LrosVinPart2>)))
  "Returns md5sum for a message object of type '<LrosVinPart2>"
  "26ab071973df04b2b97cd376706c64a7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LrosVinPart2)))
  "Returns md5sum for a message object of type 'LrosVinPart2"
  "26ab071973df04b2b97cd376706c64a7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LrosVinPart2>)))
  "Returns full string definition for message of type '<LrosVinPart2>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 vin_part2~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LrosVinPart2)))
  "Returns full string definition for message of type 'LrosVinPart2"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 vin_part2~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LrosVinPart2>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LrosVinPart2>))
  "Converts a ROS message object to a list"
  (cl:list 'LrosVinPart2
    (cl:cons ':header (header msg))
    (cl:cons ':vin_part2 (vin_part2 msg))
))
