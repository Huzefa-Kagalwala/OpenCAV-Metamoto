; Auto-generated. Do not edit!


(cl:in-package delphi_esr_msgs-msg)


;//! \htmlinclude EsrStatus7.msg.html

(cl:defclass <EsrStatus7> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (canmsg
    :reader canmsg
    :initarg :canmsg
    :type cl:string
    :initform "")
   (active_fault0
    :reader active_fault0
    :initarg :active_fault0
    :type cl:fixnum
    :initform 0)
   (active_fault1
    :reader active_fault1
    :initarg :active_fault1
    :type cl:fixnum
    :initform 0)
   (active_fault2
    :reader active_fault2
    :initarg :active_fault2
    :type cl:fixnum
    :initform 0)
   (active_fault3
    :reader active_fault3
    :initarg :active_fault3
    :type cl:fixnum
    :initform 0)
   (active_fault4
    :reader active_fault4
    :initarg :active_fault4
    :type cl:fixnum
    :initform 0)
   (active_fault5
    :reader active_fault5
    :initarg :active_fault5
    :type cl:fixnum
    :initform 0)
   (active_fault6
    :reader active_fault6
    :initarg :active_fault6
    :type cl:fixnum
    :initform 0)
   (active_fault7
    :reader active_fault7
    :initarg :active_fault7
    :type cl:fixnum
    :initform 0))
)

(cl:defclass EsrStatus7 (<EsrStatus7>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EsrStatus7>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EsrStatus7)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_esr_msgs-msg:<EsrStatus7> is deprecated: use delphi_esr_msgs-msg:EsrStatus7 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:header-val is deprecated.  Use delphi_esr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'canmsg-val :lambda-list '(m))
(cl:defmethod canmsg-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:canmsg-val is deprecated.  Use delphi_esr_msgs-msg:canmsg instead.")
  (canmsg m))

(cl:ensure-generic-function 'active_fault0-val :lambda-list '(m))
(cl:defmethod active_fault0-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault0-val is deprecated.  Use delphi_esr_msgs-msg:active_fault0 instead.")
  (active_fault0 m))

(cl:ensure-generic-function 'active_fault1-val :lambda-list '(m))
(cl:defmethod active_fault1-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault1-val is deprecated.  Use delphi_esr_msgs-msg:active_fault1 instead.")
  (active_fault1 m))

(cl:ensure-generic-function 'active_fault2-val :lambda-list '(m))
(cl:defmethod active_fault2-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault2-val is deprecated.  Use delphi_esr_msgs-msg:active_fault2 instead.")
  (active_fault2 m))

(cl:ensure-generic-function 'active_fault3-val :lambda-list '(m))
(cl:defmethod active_fault3-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault3-val is deprecated.  Use delphi_esr_msgs-msg:active_fault3 instead.")
  (active_fault3 m))

(cl:ensure-generic-function 'active_fault4-val :lambda-list '(m))
(cl:defmethod active_fault4-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault4-val is deprecated.  Use delphi_esr_msgs-msg:active_fault4 instead.")
  (active_fault4 m))

(cl:ensure-generic-function 'active_fault5-val :lambda-list '(m))
(cl:defmethod active_fault5-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault5-val is deprecated.  Use delphi_esr_msgs-msg:active_fault5 instead.")
  (active_fault5 m))

(cl:ensure-generic-function 'active_fault6-val :lambda-list '(m))
(cl:defmethod active_fault6-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault6-val is deprecated.  Use delphi_esr_msgs-msg:active_fault6 instead.")
  (active_fault6 m))

(cl:ensure-generic-function 'active_fault7-val :lambda-list '(m))
(cl:defmethod active_fault7-val ((m <EsrStatus7>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:active_fault7-val is deprecated.  Use delphi_esr_msgs-msg:active_fault7 instead.")
  (active_fault7 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EsrStatus7>) ostream)
  "Serializes a message object of type '<EsrStatus7>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'canmsg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'canmsg))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault7)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EsrStatus7>) istream)
  "Deserializes a message object of type '<EsrStatus7>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'canmsg) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'canmsg) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault0)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'active_fault7)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EsrStatus7>)))
  "Returns string type for a message object of type '<EsrStatus7>"
  "delphi_esr_msgs/EsrStatus7")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EsrStatus7)))
  "Returns string type for a message object of type 'EsrStatus7"
  "delphi_esr_msgs/EsrStatus7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EsrStatus7>)))
  "Returns md5sum for a message object of type '<EsrStatus7>"
  "b42bcace404e10fd5ee3631fdf186959")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EsrStatus7)))
  "Returns md5sum for a message object of type 'EsrStatus7"
  "b42bcace404e10fd5ee3631fdf186959")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EsrStatus7>)))
  "Returns full string definition for message of type '<EsrStatus7>"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR status7~%string      canmsg~%uint8       active_fault0~%uint8       active_fault1~%uint8       active_fault2~%uint8       active_fault3~%uint8       active_fault4~%uint8       active_fault5~%uint8       active_fault6~%uint8       active_fault7~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EsrStatus7)))
  "Returns full string definition for message of type 'EsrStatus7"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR status7~%string      canmsg~%uint8       active_fault0~%uint8       active_fault1~%uint8       active_fault2~%uint8       active_fault3~%uint8       active_fault4~%uint8       active_fault5~%uint8       active_fault6~%uint8       active_fault7~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EsrStatus7>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'canmsg))
     1
     1
     1
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EsrStatus7>))
  "Converts a ROS message object to a list"
  (cl:list 'EsrStatus7
    (cl:cons ':header (header msg))
    (cl:cons ':canmsg (canmsg msg))
    (cl:cons ':active_fault0 (active_fault0 msg))
    (cl:cons ':active_fault1 (active_fault1 msg))
    (cl:cons ':active_fault2 (active_fault2 msg))
    (cl:cons ':active_fault3 (active_fault3 msg))
    (cl:cons ':active_fault4 (active_fault4 msg))
    (cl:cons ':active_fault5 (active_fault5 msg))
    (cl:cons ':active_fault6 (active_fault6 msg))
    (cl:cons ':active_fault7 (active_fault7 msg))
))
