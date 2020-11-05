; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude WheelSpeedMsg.msg.html

(cl:defclass <WheelSpeedMsg> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_speed_front_left_wheel
    :reader can_speed_front_left_wheel
    :initarg :can_speed_front_left_wheel
    :type cl:fixnum
    :initform 0)
   (can_speed_front_right_wheel
    :reader can_speed_front_right_wheel
    :initarg :can_speed_front_right_wheel
    :type cl:fixnum
    :initform 0)
   (can_speed_rear_left_wheel
    :reader can_speed_rear_left_wheel
    :initarg :can_speed_rear_left_wheel
    :type cl:fixnum
    :initform 0)
   (can_speed_rear_right_wheel
    :reader can_speed_rear_right_wheel
    :initarg :can_speed_rear_right_wheel
    :type cl:fixnum
    :initform 0))
)

(cl:defclass WheelSpeedMsg (<WheelSpeedMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <WheelSpeedMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'WheelSpeedMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<WheelSpeedMsg> is deprecated: use delphi_mrr_msgs-msg:WheelSpeedMsg instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <WheelSpeedMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_speed_front_left_wheel-val :lambda-list '(m))
(cl:defmethod can_speed_front_left_wheel-val ((m <WheelSpeedMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_speed_front_left_wheel-val is deprecated.  Use delphi_mrr_msgs-msg:can_speed_front_left_wheel instead.")
  (can_speed_front_left_wheel m))

(cl:ensure-generic-function 'can_speed_front_right_wheel-val :lambda-list '(m))
(cl:defmethod can_speed_front_right_wheel-val ((m <WheelSpeedMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_speed_front_right_wheel-val is deprecated.  Use delphi_mrr_msgs-msg:can_speed_front_right_wheel instead.")
  (can_speed_front_right_wheel m))

(cl:ensure-generic-function 'can_speed_rear_left_wheel-val :lambda-list '(m))
(cl:defmethod can_speed_rear_left_wheel-val ((m <WheelSpeedMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_speed_rear_left_wheel-val is deprecated.  Use delphi_mrr_msgs-msg:can_speed_rear_left_wheel instead.")
  (can_speed_rear_left_wheel m))

(cl:ensure-generic-function 'can_speed_rear_right_wheel-val :lambda-list '(m))
(cl:defmethod can_speed_rear_right_wheel-val ((m <WheelSpeedMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_speed_rear_right_wheel-val is deprecated.  Use delphi_mrr_msgs-msg:can_speed_rear_right_wheel instead.")
  (can_speed_rear_right_wheel m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <WheelSpeedMsg>) ostream)
  "Serializes a message object of type '<WheelSpeedMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_front_left_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_front_left_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_front_right_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_front_right_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_rear_left_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_rear_left_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_rear_right_wheel)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_rear_right_wheel)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <WheelSpeedMsg>) istream)
  "Deserializes a message object of type '<WheelSpeedMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_front_left_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_front_left_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_front_right_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_front_right_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_rear_left_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_rear_left_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_speed_rear_right_wheel)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'can_speed_rear_right_wheel)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<WheelSpeedMsg>)))
  "Returns string type for a message object of type '<WheelSpeedMsg>"
  "delphi_mrr_msgs/WheelSpeedMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'WheelSpeedMsg)))
  "Returns string type for a message object of type 'WheelSpeedMsg"
  "delphi_mrr_msgs/WheelSpeedMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<WheelSpeedMsg>)))
  "Returns md5sum for a message object of type '<WheelSpeedMsg>"
  "3d1c063361bae8e65f8f42586fc8121c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'WheelSpeedMsg)))
  "Returns md5sum for a message object of type 'WheelSpeedMsg"
  "3d1c063361bae8e65f8f42586fc8121c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<WheelSpeedMsg>)))
  "Returns full string definition for message of type '<WheelSpeedMsg>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint16 can_speed_front_left_wheel~%uint16 can_speed_front_right_wheel~%uint16 can_speed_rear_left_wheel~%uint16 can_speed_rear_right_wheel~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'WheelSpeedMsg)))
  "Returns full string definition for message of type 'WheelSpeedMsg"
  (cl:format cl:nil "std_msgs/Header header~%~%uint16 can_speed_front_left_wheel~%uint16 can_speed_front_right_wheel~%uint16 can_speed_rear_left_wheel~%uint16 can_speed_rear_right_wheel~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <WheelSpeedMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     2
     2
     2
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <WheelSpeedMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'WheelSpeedMsg
    (cl:cons ':header (header msg))
    (cl:cons ':can_speed_front_left_wheel (can_speed_front_left_wheel msg))
    (cl:cons ':can_speed_front_right_wheel (can_speed_front_right_wheel msg))
    (cl:cons ':can_speed_rear_left_wheel (can_speed_rear_left_wheel msg))
    (cl:cons ':can_speed_rear_right_wheel (can_speed_rear_right_wheel msg))
))
