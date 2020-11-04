; Auto-generated. Do not edit!


(cl:in-package delphi_mrr_msgs-msg)


;//! \htmlinclude SystemTDBlockage.msg.html

(cl:defclass <SystemTDBlockage> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (can_number_of_tracks_stat
    :reader can_number_of_tracks_stat
    :initarg :can_number_of_tracks_stat
    :type cl:fixnum
    :initform 0)
   (can_number_of_tracks_mov
    :reader can_number_of_tracks_mov
    :initarg :can_number_of_tracks_mov
    :type cl:fixnum
    :initform 0)
   (can_td_scan_counter
    :reader can_td_scan_counter
    :initarg :can_td_scan_counter
    :type cl:fixnum
    :initform 0)
   (can_found_target
    :reader can_found_target
    :initarg :can_found_target
    :type cl:boolean
    :initform cl:nil)
   (can_blockage_td
    :reader can_blockage_td
    :initarg :can_blockage_td
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SystemTDBlockage (<SystemTDBlockage>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SystemTDBlockage>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SystemTDBlockage)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_mrr_msgs-msg:<SystemTDBlockage> is deprecated: use delphi_mrr_msgs-msg:SystemTDBlockage instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <SystemTDBlockage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:header-val is deprecated.  Use delphi_mrr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'can_number_of_tracks_stat-val :lambda-list '(m))
(cl:defmethod can_number_of_tracks_stat-val ((m <SystemTDBlockage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_number_of_tracks_stat-val is deprecated.  Use delphi_mrr_msgs-msg:can_number_of_tracks_stat instead.")
  (can_number_of_tracks_stat m))

(cl:ensure-generic-function 'can_number_of_tracks_mov-val :lambda-list '(m))
(cl:defmethod can_number_of_tracks_mov-val ((m <SystemTDBlockage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_number_of_tracks_mov-val is deprecated.  Use delphi_mrr_msgs-msg:can_number_of_tracks_mov instead.")
  (can_number_of_tracks_mov m))

(cl:ensure-generic-function 'can_td_scan_counter-val :lambda-list '(m))
(cl:defmethod can_td_scan_counter-val ((m <SystemTDBlockage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_td_scan_counter-val is deprecated.  Use delphi_mrr_msgs-msg:can_td_scan_counter instead.")
  (can_td_scan_counter m))

(cl:ensure-generic-function 'can_found_target-val :lambda-list '(m))
(cl:defmethod can_found_target-val ((m <SystemTDBlockage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_found_target-val is deprecated.  Use delphi_mrr_msgs-msg:can_found_target instead.")
  (can_found_target m))

(cl:ensure-generic-function 'can_blockage_td-val :lambda-list '(m))
(cl:defmethod can_blockage_td-val ((m <SystemTDBlockage>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_mrr_msgs-msg:can_blockage_td-val is deprecated.  Use delphi_mrr_msgs-msg:can_blockage_td instead.")
  (can_blockage_td m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SystemTDBlockage>) ostream)
  "Serializes a message object of type '<SystemTDBlockage>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_number_of_tracks_stat)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_number_of_tracks_mov)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_td_scan_counter)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_found_target) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'can_blockage_td) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SystemTDBlockage>) istream)
  "Deserializes a message object of type '<SystemTDBlockage>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_number_of_tracks_stat)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_number_of_tracks_mov)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'can_td_scan_counter)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'can_found_target) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'can_blockage_td) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SystemTDBlockage>)))
  "Returns string type for a message object of type '<SystemTDBlockage>"
  "delphi_mrr_msgs/SystemTDBlockage")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SystemTDBlockage)))
  "Returns string type for a message object of type 'SystemTDBlockage"
  "delphi_mrr_msgs/SystemTDBlockage")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SystemTDBlockage>)))
  "Returns md5sum for a message object of type '<SystemTDBlockage>"
  "550b50a6768c4163e9261901e2c34d80")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SystemTDBlockage)))
  "Returns md5sum for a message object of type 'SystemTDBlockage"
  "550b50a6768c4163e9261901e2c34d80")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SystemTDBlockage>)))
  "Returns full string definition for message of type '<SystemTDBlockage>"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 	can_number_of_tracks_stat~%uint8 	can_number_of_tracks_mov~%uint8 	can_td_scan_counter~%bool   	can_found_target~%bool    can_blockage_td~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SystemTDBlockage)))
  "Returns full string definition for message of type 'SystemTDBlockage"
  (cl:format cl:nil "std_msgs/Header header~%~%uint8 	can_number_of_tracks_stat~%uint8 	can_number_of_tracks_mov~%uint8 	can_td_scan_counter~%bool   	can_found_target~%bool    can_blockage_td~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SystemTDBlockage>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SystemTDBlockage>))
  "Converts a ROS message object to a list"
  (cl:list 'SystemTDBlockage
    (cl:cons ':header (header msg))
    (cl:cons ':can_number_of_tracks_stat (can_number_of_tracks_stat msg))
    (cl:cons ':can_number_of_tracks_mov (can_number_of_tracks_mov msg))
    (cl:cons ':can_td_scan_counter (can_td_scan_counter msg))
    (cl:cons ':can_found_target (can_found_target msg))
    (cl:cons ':can_blockage_td (can_blockage_td msg))
))
