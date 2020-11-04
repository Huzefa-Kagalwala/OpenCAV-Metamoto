; Auto-generated. Do not edit!


(cl:in-package ros_sut-msg)


;//! \htmlinclude SixChannelControlCommand.msg.html

(cl:defclass <SixChannelControlCommand> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (fl_rpm
    :reader fl_rpm
    :initarg :fl_rpm
    :type cl:float
    :initform 0.0)
   (fr_rpm
    :reader fr_rpm
    :initarg :fr_rpm
    :type cl:float
    :initform 0.0)
   (rl_rpm
    :reader rl_rpm
    :initarg :rl_rpm
    :type cl:float
    :initform 0.0)
   (rr_rpm
    :reader rr_rpm
    :initarg :rr_rpm
    :type cl:float
    :initform 0.0)
   (fl_steer
    :reader fl_steer
    :initarg :fl_steer
    :type cl:float
    :initform 0.0)
   (fr_steer
    :reader fr_steer
    :initarg :fr_steer
    :type cl:float
    :initform 0.0)
   (brake
    :reader brake
    :initarg :brake
    :type cl:float
    :initform 0.0)
   (throttle
    :reader throttle
    :initarg :throttle
    :type cl:float
    :initform 0.0))
)

(cl:defclass SixChannelControlCommand (<SixChannelControlCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SixChannelControlCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SixChannelControlCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ros_sut-msg:<SixChannelControlCommand> is deprecated: use ros_sut-msg:SixChannelControlCommand instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:header-val is deprecated.  Use ros_sut-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'fl_rpm-val :lambda-list '(m))
(cl:defmethod fl_rpm-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:fl_rpm-val is deprecated.  Use ros_sut-msg:fl_rpm instead.")
  (fl_rpm m))

(cl:ensure-generic-function 'fr_rpm-val :lambda-list '(m))
(cl:defmethod fr_rpm-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:fr_rpm-val is deprecated.  Use ros_sut-msg:fr_rpm instead.")
  (fr_rpm m))

(cl:ensure-generic-function 'rl_rpm-val :lambda-list '(m))
(cl:defmethod rl_rpm-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:rl_rpm-val is deprecated.  Use ros_sut-msg:rl_rpm instead.")
  (rl_rpm m))

(cl:ensure-generic-function 'rr_rpm-val :lambda-list '(m))
(cl:defmethod rr_rpm-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:rr_rpm-val is deprecated.  Use ros_sut-msg:rr_rpm instead.")
  (rr_rpm m))

(cl:ensure-generic-function 'fl_steer-val :lambda-list '(m))
(cl:defmethod fl_steer-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:fl_steer-val is deprecated.  Use ros_sut-msg:fl_steer instead.")
  (fl_steer m))

(cl:ensure-generic-function 'fr_steer-val :lambda-list '(m))
(cl:defmethod fr_steer-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:fr_steer-val is deprecated.  Use ros_sut-msg:fr_steer instead.")
  (fr_steer m))

(cl:ensure-generic-function 'brake-val :lambda-list '(m))
(cl:defmethod brake-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:brake-val is deprecated.  Use ros_sut-msg:brake instead.")
  (brake m))

(cl:ensure-generic-function 'throttle-val :lambda-list '(m))
(cl:defmethod throttle-val ((m <SixChannelControlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ros_sut-msg:throttle-val is deprecated.  Use ros_sut-msg:throttle instead.")
  (throttle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SixChannelControlCommand>) ostream)
  "Serializes a message object of type '<SixChannelControlCommand>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'fl_rpm))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'fr_rpm))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rl_rpm))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rr_rpm))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'fl_steer))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'fr_steer))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'brake))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'throttle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SixChannelControlCommand>) istream)
  "Deserializes a message object of type '<SixChannelControlCommand>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'fl_rpm) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'fr_rpm) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rl_rpm) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rr_rpm) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'fl_steer) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'fr_steer) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'brake) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'throttle) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SixChannelControlCommand>)))
  "Returns string type for a message object of type '<SixChannelControlCommand>"
  "ros_sut/SixChannelControlCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SixChannelControlCommand)))
  "Returns string type for a message object of type 'SixChannelControlCommand"
  "ros_sut/SixChannelControlCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SixChannelControlCommand>)))
  "Returns md5sum for a message object of type '<SixChannelControlCommand>"
  "0f55685654ce18486e93ee8817c0a1ab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SixChannelControlCommand)))
  "Returns md5sum for a message object of type 'SixChannelControlCommand"
  "0f55685654ce18486e93ee8817c0a1ab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SixChannelControlCommand>)))
  "Returns full string definition for message of type '<SixChannelControlCommand>"
  (cl:format cl:nil "std_msgs/Header header~%~%# 4 wheel speeds in rpm~%float32 fl_rpm~%float32 fr_rpm~%float32 rl_rpm~%float32 rr_rpm~%~%# front 2 wheel steer angles in degrees, left is positive~%float32 fl_steer~%float32 fr_steer~%~%# Brake value from 0 to 1~%float32 brake~%~%# Throttle value from 0 to 1~%float32 throttle~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SixChannelControlCommand)))
  "Returns full string definition for message of type 'SixChannelControlCommand"
  (cl:format cl:nil "std_msgs/Header header~%~%# 4 wheel speeds in rpm~%float32 fl_rpm~%float32 fr_rpm~%float32 rl_rpm~%float32 rr_rpm~%~%# front 2 wheel steer angles in degrees, left is positive~%float32 fl_steer~%float32 fr_steer~%~%# Brake value from 0 to 1~%float32 brake~%~%# Throttle value from 0 to 1~%float32 throttle~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SixChannelControlCommand>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     4
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SixChannelControlCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'SixChannelControlCommand
    (cl:cons ':header (header msg))
    (cl:cons ':fl_rpm (fl_rpm msg))
    (cl:cons ':fr_rpm (fr_rpm msg))
    (cl:cons ':rl_rpm (rl_rpm msg))
    (cl:cons ':rr_rpm (rr_rpm msg))
    (cl:cons ':fl_steer (fl_steer msg))
    (cl:cons ':fr_steer (fr_steer msg))
    (cl:cons ':brake (brake msg))
    (cl:cons ':throttle (throttle msg))
))
