; Auto-generated. Do not edit!


(cl:in-package delphi_esr_msgs-msg)


;//! \htmlinclude EsrTrackMotionPower.msg.html

(cl:defclass <EsrTrackMotionPower> (roslisp-msg-protocol:ros-message)
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
   (rolling_count
    :reader rolling_count
    :initarg :rolling_count
    :type cl:fixnum
    :initform 0)
   (group_id
    :reader group_id
    :initarg :group_id
    :type cl:fixnum
    :initform 0)
   (tracks
    :reader tracks
    :initarg :tracks
    :type (cl:vector delphi_esr_msgs-msg:TrackMotionPower)
   :initform (cl:make-array 0 :element-type 'delphi_esr_msgs-msg:TrackMotionPower :initial-element (cl:make-instance 'delphi_esr_msgs-msg:TrackMotionPower))))
)

(cl:defclass EsrTrackMotionPower (<EsrTrackMotionPower>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EsrTrackMotionPower>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EsrTrackMotionPower)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_esr_msgs-msg:<EsrTrackMotionPower> is deprecated: use delphi_esr_msgs-msg:EsrTrackMotionPower instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EsrTrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:header-val is deprecated.  Use delphi_esr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'canmsg-val :lambda-list '(m))
(cl:defmethod canmsg-val ((m <EsrTrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:canmsg-val is deprecated.  Use delphi_esr_msgs-msg:canmsg instead.")
  (canmsg m))

(cl:ensure-generic-function 'rolling_count-val :lambda-list '(m))
(cl:defmethod rolling_count-val ((m <EsrTrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:rolling_count-val is deprecated.  Use delphi_esr_msgs-msg:rolling_count instead.")
  (rolling_count m))

(cl:ensure-generic-function 'group_id-val :lambda-list '(m))
(cl:defmethod group_id-val ((m <EsrTrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:group_id-val is deprecated.  Use delphi_esr_msgs-msg:group_id instead.")
  (group_id m))

(cl:ensure-generic-function 'tracks-val :lambda-list '(m))
(cl:defmethod tracks-val ((m <EsrTrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:tracks-val is deprecated.  Use delphi_esr_msgs-msg:tracks instead.")
  (tracks m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EsrTrackMotionPower>) ostream)
  "Serializes a message object of type '<EsrTrackMotionPower>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'canmsg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'canmsg))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'rolling_count)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'group_id)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'tracks))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'tracks))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EsrTrackMotionPower>) istream)
  "Deserializes a message object of type '<EsrTrackMotionPower>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'canmsg) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'canmsg) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'rolling_count)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'group_id)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'tracks) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'tracks)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'delphi_esr_msgs-msg:TrackMotionPower))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EsrTrackMotionPower>)))
  "Returns string type for a message object of type '<EsrTrackMotionPower>"
  "delphi_esr_msgs/EsrTrackMotionPower")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EsrTrackMotionPower)))
  "Returns string type for a message object of type 'EsrTrackMotionPower"
  "delphi_esr_msgs/EsrTrackMotionPower")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EsrTrackMotionPower>)))
  "Returns md5sum for a message object of type '<EsrTrackMotionPower>"
  "c8b6ca4d7b49b9f380f75c5de7ed6095")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EsrTrackMotionPower)))
  "Returns md5sum for a message object of type 'EsrTrackMotionPower"
  "c8b6ca4d7b49b9f380f75c5de7ed6095")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EsrTrackMotionPower>)))
  "Returns full string definition for message of type '<EsrTrackMotionPower>"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR TrackMotionPower Msg~%string                              canmsg~%uint8                               rolling_count~%uint8                               group_id~%delphi_esr_msgs/TrackMotionPower[]  tracks~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: delphi_esr_msgs/TrackMotionPower~%bool  movable_fast~%bool  movable_slow~%bool  moving~%int8  power~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EsrTrackMotionPower)))
  "Returns full string definition for message of type 'EsrTrackMotionPower"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR TrackMotionPower Msg~%string                              canmsg~%uint8                               rolling_count~%uint8                               group_id~%delphi_esr_msgs/TrackMotionPower[]  tracks~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: delphi_esr_msgs/TrackMotionPower~%bool  movable_fast~%bool  movable_slow~%bool  moving~%int8  power~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EsrTrackMotionPower>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:length (cl:slot-value msg 'canmsg))
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'tracks) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EsrTrackMotionPower>))
  "Converts a ROS message object to a list"
  (cl:list 'EsrTrackMotionPower
    (cl:cons ':header (header msg))
    (cl:cons ':canmsg (canmsg msg))
    (cl:cons ':rolling_count (rolling_count msg))
    (cl:cons ':group_id (group_id msg))
    (cl:cons ':tracks (tracks msg))
))
