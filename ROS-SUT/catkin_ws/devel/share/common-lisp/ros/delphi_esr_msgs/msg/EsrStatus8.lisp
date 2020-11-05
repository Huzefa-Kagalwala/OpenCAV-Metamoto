; Auto-generated. Do not edit!


(cl:in-package delphi_esr_msgs-msg)


;//! \htmlinclude EsrStatus8.msg.html

(cl:defclass <EsrStatus8> (roslisp-msg-protocol:ros-message)
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
   (history_fault0
    :reader history_fault0
    :initarg :history_fault0
    :type cl:fixnum
    :initform 0)
   (history_fault1
    :reader history_fault1
    :initarg :history_fault1
    :type cl:fixnum
    :initform 0)
   (history_fault2
    :reader history_fault2
    :initarg :history_fault2
    :type cl:fixnum
    :initform 0)
   (history_fault3
    :reader history_fault3
    :initarg :history_fault3
    :type cl:fixnum
    :initform 0)
   (history_fault4
    :reader history_fault4
    :initarg :history_fault4
    :type cl:fixnum
    :initform 0)
   (history_fault5
    :reader history_fault5
    :initarg :history_fault5
    :type cl:fixnum
    :initform 0)
   (history_fault6
    :reader history_fault6
    :initarg :history_fault6
    :type cl:fixnum
    :initform 0)
   (history_fault7
    :reader history_fault7
    :initarg :history_fault7
    :type cl:fixnum
    :initform 0))
)

(cl:defclass EsrStatus8 (<EsrStatus8>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EsrStatus8>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EsrStatus8)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_esr_msgs-msg:<EsrStatus8> is deprecated: use delphi_esr_msgs-msg:EsrStatus8 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:header-val is deprecated.  Use delphi_esr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'canmsg-val :lambda-list '(m))
(cl:defmethod canmsg-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:canmsg-val is deprecated.  Use delphi_esr_msgs-msg:canmsg instead.")
  (canmsg m))

(cl:ensure-generic-function 'history_fault0-val :lambda-list '(m))
(cl:defmethod history_fault0-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault0-val is deprecated.  Use delphi_esr_msgs-msg:history_fault0 instead.")
  (history_fault0 m))

(cl:ensure-generic-function 'history_fault1-val :lambda-list '(m))
(cl:defmethod history_fault1-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault1-val is deprecated.  Use delphi_esr_msgs-msg:history_fault1 instead.")
  (history_fault1 m))

(cl:ensure-generic-function 'history_fault2-val :lambda-list '(m))
(cl:defmethod history_fault2-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault2-val is deprecated.  Use delphi_esr_msgs-msg:history_fault2 instead.")
  (history_fault2 m))

(cl:ensure-generic-function 'history_fault3-val :lambda-list '(m))
(cl:defmethod history_fault3-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault3-val is deprecated.  Use delphi_esr_msgs-msg:history_fault3 instead.")
  (history_fault3 m))

(cl:ensure-generic-function 'history_fault4-val :lambda-list '(m))
(cl:defmethod history_fault4-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault4-val is deprecated.  Use delphi_esr_msgs-msg:history_fault4 instead.")
  (history_fault4 m))

(cl:ensure-generic-function 'history_fault5-val :lambda-list '(m))
(cl:defmethod history_fault5-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault5-val is deprecated.  Use delphi_esr_msgs-msg:history_fault5 instead.")
  (history_fault5 m))

(cl:ensure-generic-function 'history_fault6-val :lambda-list '(m))
(cl:defmethod history_fault6-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault6-val is deprecated.  Use delphi_esr_msgs-msg:history_fault6 instead.")
  (history_fault6 m))

(cl:ensure-generic-function 'history_fault7-val :lambda-list '(m))
(cl:defmethod history_fault7-val ((m <EsrStatus8>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:history_fault7-val is deprecated.  Use delphi_esr_msgs-msg:history_fault7 instead.")
  (history_fault7 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EsrStatus8>) ostream)
  "Serializes a message object of type '<EsrStatus8>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'canmsg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'canmsg))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault5)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault6)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault7)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EsrStatus8>) istream)
  "Deserializes a message object of type '<EsrStatus8>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'canmsg) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'canmsg) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault0)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault5)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault6)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'history_fault7)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EsrStatus8>)))
  "Returns string type for a message object of type '<EsrStatus8>"
  "delphi_esr_msgs/EsrStatus8")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EsrStatus8)))
  "Returns string type for a message object of type 'EsrStatus8"
  "delphi_esr_msgs/EsrStatus8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EsrStatus8>)))
  "Returns md5sum for a message object of type '<EsrStatus8>"
  "12cc314f728c579155b83fab509b20f4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EsrStatus8)))
  "Returns md5sum for a message object of type 'EsrStatus8"
  "12cc314f728c579155b83fab509b20f4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EsrStatus8>)))
  "Returns full string definition for message of type '<EsrStatus8>"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR status8~%string      canmsg~%uint8       history_fault0~%uint8       history_fault1~%uint8       history_fault2~%uint8       history_fault3~%uint8       history_fault4~%uint8       history_fault5~%uint8       history_fault6~%uint8       history_fault7~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EsrStatus8)))
  "Returns full string definition for message of type 'EsrStatus8"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR status8~%string      canmsg~%uint8       history_fault0~%uint8       history_fault1~%uint8       history_fault2~%uint8       history_fault3~%uint8       history_fault4~%uint8       history_fault5~%uint8       history_fault6~%uint8       history_fault7~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EsrStatus8>))
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
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EsrStatus8>))
  "Converts a ROS message object to a list"
  (cl:list 'EsrStatus8
    (cl:cons ':header (header msg))
    (cl:cons ':canmsg (canmsg msg))
    (cl:cons ':history_fault0 (history_fault0 msg))
    (cl:cons ':history_fault1 (history_fault1 msg))
    (cl:cons ':history_fault2 (history_fault2 msg))
    (cl:cons ':history_fault3 (history_fault3 msg))
    (cl:cons ':history_fault4 (history_fault4 msg))
    (cl:cons ':history_fault5 (history_fault5 msg))
    (cl:cons ':history_fault6 (history_fault6 msg))
    (cl:cons ':history_fault7 (history_fault7 msg))
))
