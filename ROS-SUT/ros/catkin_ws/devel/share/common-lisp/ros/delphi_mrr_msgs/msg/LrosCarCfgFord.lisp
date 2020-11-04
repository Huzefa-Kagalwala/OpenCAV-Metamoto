; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude LrosCarCfgFord.msg.html

(cl:defclass <LrosCarCfgFord> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (k_radar_azimuth_polarity
    :reader k_radar_azimuth_polarity
    :initarg :k_radar_azimuth_polarity
    :type cl:fixnum
    :initform 0)
   (can_fa_vert_ground_offset
    :reader can_fa_vert_ground_offset
    :initarg :can_fa_vert_ground_offset
    :type cl:float
    :initform 0.0)
   (can_fa_vert_lower_limit
    :reader can_fa_vert_lower_limit
    :initarg :can_fa_vert_lower_limit
    :type cl:float
    :initform 0.0)
   (can_fa_vert_upper_limit
    :reader can_fa_vert_upper_limit
    :initarg :can_fa_vert_upper_limit
    :type cl:float
    :initform 0.0)
   (can_lros_carcfgvehtype_ford
    :reader can_lros_carcfgvehtype_ford
    :initarg :can_lros_carcfgvehtype_ford
    :type cl:fixnum
    :initform 0)
   (can_lros_carcfgengine_ford
    :reader can_lros_carcfgengine_ford
    :initarg :can_lros_carcfgengine_ford
    :type cl:fixnum
    :initform 0))
)

(cl:defclass LrosCarCfgFord (<LrosCarCfgFord>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LrosCarCfgFord>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LrosCarCfgFord)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<LrosCarCfgFord> is deprecated: use delphi_mrr_msgs-msg:LrosCarCfgFord instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'k_radar_azimuth_polarity-val :lambda-list '(m))
(cl:defmethod k_radar_azimuth_polarity-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:k_radar_azimuth_polarity-val is deprecated.  Use delphi_mrr_msgs-msg:k_radar_azimuth_polarity instead.")
  (k_radar_azimuth_polarity m))

(cl:ensure-generic-function 'can_fa_vert_ground_offset-val :lambda-list '(m))
(cl:defmethod can_fa_vert_ground_offset-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fa_vert_ground_offset-val is deprecated.  Use delphi_mrr_msgs-msg:can_fa_vert_ground_offset instead.")
  (can_fa_vert_ground_offset m))

(cl:ensure-generic-function 'can_fa_vert_lower_limit-val :lambda-list '(m))
(cl:defmethod can_fa_vert_lower_limit-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fa_vert_lower_limit-val is deprecated.  Use delphi_mrr_msgs-msg:can_fa_vert_lower_limit instead.")
  (can_fa_vert_lower_limit m))

(cl:ensure-generic-function 'can_fa_vert_upper_limit-val :lambda-list '(m))
(cl:defmethod can_fa_vert_upper_limit-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_fa_vert_upper_limit-val is deprecated.  Use delphi_mrr_msgs-msg:can_fa_vert_upper_limit instead.")
  (can_fa_vert_upper_limit m))

(cl:ensure-generic-function 'can_lros_carcfgvehtype_ford-val :lambda-list '(m))
(cl:defmethod can_lros_carcfgvehtype_ford-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_lros_carcfgvehtype_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_lros_carcfgvehtype_ford instead.")
  (can_lros_carcfgvehtype_ford m))

(cl:ensure-generic-function 'can_lros_carcfgengine_ford-val :lambda-list '(m))
(cl:defmethod can_lros_carcfgengine_ford-val ((m <LrosCarCfgFord>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_lros_carcfgengine_ford-val is deprecated.  Use delphi_mrr_msgs-msg:can_lros_carcfgengine_ford instead.")
  (can_lros_carcfgengine_ford m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LrosCarCfgFord>) ostream)
  "Serializes a message object of type '<LrosCarCfgFord>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'k_radar_azimuth_polarity)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fa_vert_ground_offset))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fa_vert_lower_limit))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_fa_vert_upper_limit))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_lros_carcfgvehtype_ford)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_lros_carcfgengine_ford)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LrosCarCfgFord>) istream)
  "Deserializes a message object of type '<LrosCarCfgFord>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'k_radar_azimuth_polarity) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fa_vert_ground_offset) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fa_vert_lower_limit) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_fa_vert_upper_limit) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_lros_carcfgvehtype_ford)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_lros_carcfgengine_ford)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LrosCarCfgFord>)))
  "Returns string type for a message object of type '<LrosCarCfgFord>"
  "delphi_mrr_msgs/LrosCarCfgFord")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LrosCarCfgFord)))
  "Returns string type for a message object of type 'LrosCarCfgFord"
  "delphi_mrr_msgs/LrosCarCfgFord")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LrosCarCfgFord>)))
  "Returns md5sum for a message object of type '<LrosCarCfgFord>"
  "6b40261fec542e406fc60f9b9b2d121a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LrosCarCfgFord)))
  "Returns md5sum for a message object of type 'LrosCarCfgFord"
  "6b40261fec542e406fc60f9b9b2d121a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LrosCarCfgFord>)))
  "Returns full string definition for message of type '<LrosCarCfgFord>"
  (cl:format cl:nil "std_msgs/Header header~%~%int8 	    k_radar_azimuth_polarity~%float32  	can_fa_vert_ground_offset~%float32  	can_fa_vert_lower_limit~%float32  	can_fa_vert_upper_limit~%uint8 	  can_lros_carcfgvehtype_ford~%uint8 	  can_lros_carcfgengine_ford~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LrosCarCfgFord)))
  "Returns full string definition for message of type 'LrosCarCfgFord"
  (cl:format cl:nil "std_msgs/Header header~%~%int8 	    k_radar_azimuth_polarity~%float32  	can_fa_vert_ground_offset~%float32  	can_fa_vert_lower_limit~%float32  	can_fa_vert_upper_limit~%uint8 	  can_lros_carcfgvehtype_ford~%uint8 	  can_lros_carcfgengine_ford~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LrosCarCfgFord>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     4
     4
     4
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LrosCarCfgFord>))
  "Converts a ROS message object to a list"
  (cl:list 'LrosCarCfgFord
    (cl:cons ':header (header msg))
    (cl:cons ':k_radar_azimuth_polarity (k_radar_azimuth_polarity msg))
    (cl:cons ':can_fa_vert_ground_offset (can_fa_vert_ground_offset msg))
    (cl:cons ':can_fa_vert_lower_limit (can_fa_vert_lower_limit msg))
    (cl:cons ':can_fa_vert_upper_limit (can_fa_vert_upper_limit msg))
    (cl:cons ':can_lros_carcfgvehtype_ford (can_lros_carcfgvehtype_ford msg))
    (cl:cons ':can_lros_carcfgengine_ford (can_lros_carcfgengine_ford msg))
))
