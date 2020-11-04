; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemAlignment2.msg.html

(cl:defclass <SystemAlignment2> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_serv_align_updates_need
    :reader can_serv_align_updates_need
    :initarg :can_serv_align_updates_need
    :type cl:fixnum
    :initform 0)
   (can_serv_align_type
    :reader can_serv_align_type
    :initarg :can_serv_align_type
    :type cl:boolean
    :initform cl:nil)
   (can_radar_height
    :reader can_radar_height
    :initarg :can_radar_height
    :type cl:fixnum
    :initform 0)
   (can_radar_fov_mr
    :reader can_radar_fov_mr
    :initarg :can_radar_fov_mr
    :type cl:fixnum
    :initform 0)
   (can_radar_fov_rr
    :reader can_radar_fov_rr
    :initarg :can_radar_fov_rr
    :type cl:fixnum
    :initform 0)
   (can_align_enable
    :reader can_align_enable
    :initarg :can_align_enable
    :type cl:fixnum
    :initform 0)
   (can_angle_mounting_hoffset
    :reader can_angle_mounting_hoffset
    :initarg :can_angle_mounting_hoffset
    :type cl:float
    :initform 0.0)
   (can_aalign_avg_ctr_total
    :reader can_aalign_avg_ctr_total
    :initarg :can_aalign_avg_ctr_total
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SystemAlignment2 (<SystemAlignment2>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemAlignment2>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemAlignment2)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemAlignment2> is deprecated: use delphi_mrr_msgs-msg:SystemAlignment2 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_serv_align_updates_need-val :lambda-list '(m))
(cl:defmethod can_serv_align_updates_need-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_serv_align_updates_need-val is deprecated.  Use delphi_mrr_msgs-msg:can_serv_align_updates_need instead.")
  (can_serv_align_updates_need m))

(cl:ensure-generic-function 'can_serv_align_type-val :lambda-list '(m))
(cl:defmethod can_serv_align_type-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_serv_align_type-val is deprecated.  Use delphi_mrr_msgs-msg:can_serv_align_type instead.")
  (can_serv_align_type m))

(cl:ensure-generic-function 'can_radar_height-val :lambda-list '(m))
(cl:defmethod can_radar_height-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_radar_height-val is deprecated.  Use delphi_mrr_msgs-msg:can_radar_height instead.")
  (can_radar_height m))

(cl:ensure-generic-function 'can_radar_fov_mr-val :lambda-list '(m))
(cl:defmethod can_radar_fov_mr-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_radar_fov_mr-val is deprecated.  Use delphi_mrr_msgs-msg:can_radar_fov_mr instead.")
  (can_radar_fov_mr m))

(cl:ensure-generic-function 'can_radar_fov_rr-val :lambda-list '(m))
(cl:defmethod can_radar_fov_rr-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_radar_fov_rr-val is deprecated.  Use delphi_mrr_msgs-msg:can_radar_fov_rr instead.")
  (can_radar_fov_rr m))

(cl:ensure-generic-function 'can_align_enable-val :lambda-list '(m))
(cl:defmethod can_align_enable-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_align_enable-val is deprecated.  Use delphi_mrr_msgs-msg:can_align_enable instead.")
  (can_align_enable m))

(cl:ensure-generic-function 'can_angle_mounting_hoffset-val :lambda-list '(m))
(cl:defmethod can_angle_mounting_hoffset-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_angle_mounting_hoffset-val is deprecated.  Use delphi_mrr_msgs-msg:can_angle_mounting_hoffset instead.")
  (can_angle_mounting_hoffset m))

(cl:ensure-generic-function 'can_aalign_avg_ctr_total-val :lambda-list '(m))
(cl:defmethod can_aalign_avg_ctr_total-val ((m <SystemAlignment2>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_aalign_avg_ctr_total-val is deprecated.  Use delphi_mrr_msgs-msg:can_aalign_avg_ctr_total instead.")
  (can_aalign_avg_ctr_total m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemAlignment2>) ostream)
  "Serializes a message object of type '<SystemAlignment2>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_serv_align_updates_need)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_serv_align_type) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_radar_height)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_radar_fov_mr)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_radar_fov_rr)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_align_enable)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'can_angle_mounting_hoffset))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_aalign_avg_ctr_total)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemAlignment2>) istream)
  "Deserializes a message object of type '<SystemAlignment2>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_serv_align_updates_need)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_serv_align_type) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_radar_height)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_radar_fov_mr)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_radar_fov_rr)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_align_enable)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_angle_mounting_hoffset) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_aalign_avg_ctr_total)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemAlignment2>)))
  "Returns string type for a message object of type '<SystemAlignment2>"
  "delphi_mrr_msgs/SystemAlignment2")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemAlignment2)))
  "Returns string type for a message object of type 'SystemAlignment2"
  "delphi_mrr_msgs/SystemAlignment2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemAlignment2>)))
  "Returns md5sum for a message object of type '<SystemAlignment2>"
  "fab1b79e32d15c3fd6d3030b565850a5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemAlignment2)))
  "Returns md5sum for a message object of type 'SystemAlignment2"
  "fab1b79e32d15c3fd6d3030b565850a5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemAlignment2>)))
  "Returns full string definition for message of type '<SystemAlignment2>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 	 can_serv_align_updates_need~%bool     can_serv_align_type~%uint8 	 can_radar_height~%uint8 	 can_radar_fov_mr~%uint8 	 can_radar_fov_rr~%uint8 	 can_align_enable~%float32  can_angle_mounting_hoffset~%uint8 	 can_aalign_avg_ctr_total~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemAlignment2)))
  "Returns full string definition for message of type 'SystemAlignment2"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 	 can_serv_align_updates_need~%bool     can_serv_align_type~%uint8 	 can_radar_height~%uint8 	 can_radar_fov_mr~%uint8 	 can_radar_fov_rr~%uint8 	 can_align_enable~%float32  can_angle_mounting_hoffset~%uint8 	 can_aalign_avg_ctr_total~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemAlignment2>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     1
     1
     1
     1
     4
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemAlignment2>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemAlignment2
    (cl:cons ':header (header msg))
    (cl:cons ':can_serv_align_updates_need (can_serv_align_updates_need msg))
    (cl:cons ':can_serv_align_type (can_serv_align_type msg))
    (cl:cons ':can_radar_height (can_radar_height msg))
    (cl:cons ':can_radar_fov_mr (can_radar_fov_mr msg))
    (cl:cons ':can_radar_fov_rr (can_radar_fov_rr msg))
    (cl:cons ':can_align_enable (can_align_enable msg))
    (cl:cons ':can_angle_mounting_hoffset (can_angle_mounting_hoffset msg))
    (cl:cons ':can_aalign_avg_ctr_total (can_aalign_avg_ctr_total msg))
))
