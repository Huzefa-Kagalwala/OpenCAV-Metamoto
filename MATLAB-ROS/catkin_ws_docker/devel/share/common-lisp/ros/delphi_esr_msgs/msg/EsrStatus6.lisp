; Auto-generated. Do not edit!


(cl:in-package delphi_esr_msgs-msg)


;//! \htmlinclude EsrStatus6.msg.html

(cl:defclass <EsrStatus6> (roslisp-msg-protocol:ros-message)
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
   (supply_1p_8v
    :reader supply_1p_8v
    :initarg :supply_1p_8v
    :type cl:fixnum
    :initform 0)
   (supply_n_5v
    :reader supply_n_5v
    :initarg :supply_n_5v
    :type cl:fixnum
    :initform 0)
   (wave_diff_a2d
    :reader wave_diff_a2d
    :initarg :wave_diff_a2d
    :type cl:fixnum
    :initform 0)
   (sw_version_dsp_3rd_byte
    :reader sw_version_dsp_3rd_byte
    :initarg :sw_version_dsp_3rd_byte
    :type cl:fixnum
    :initform 0)
   (vertical_algin_updated
    :reader vertical_algin_updated
    :initarg :vertical_algin_updated
    :type cl:boolean
    :initform cl:nil)
   (system_power_mode
    :reader system_power_mode
    :initarg :system_power_mode
    :type cl:fixnum
    :initform 0)
   (found_target
    :reader found_target
    :initarg :found_target
    :type cl:boolean
    :initform cl:nil)
   (recommend_unconverge
    :reader recommend_unconverge
    :initarg :recommend_unconverge
    :type cl:boolean
    :initform cl:nil)
   (factory_algin_status1
    :reader factory_algin_status1
    :initarg :factory_algin_status1
    :type cl:fixnum
    :initform 0)
   (factory_algin_status2
    :reader factory_algin_status2
    :initarg :factory_algin_status2
    :type cl:fixnum
    :initform 0)
   (factory_mis_alginment
    :reader factory_mis_alginment
    :initarg :factory_mis_alginment
    :type cl:float
    :initform 0.0)
   (serv_algin_updates_done
    :reader serv_algin_updates_done
    :initarg :serv_algin_updates_done
    :type cl:fixnum
    :initform 0)
   (vertical_mis_alginment
    :reader vertical_mis_alginment
    :initarg :vertical_mis_alginment
    :type cl:float
    :initform 0.0))
)

(cl:defclass EsrStatus6 (<EsrStatus6>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EsrStatus6>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EsrStatus6)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_esr_msgs-msg:<EsrStatus6> is deprecated: use delphi_esr_msgs-msg:EsrStatus6 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:header-val is deprecated.  Use delphi_esr_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'canmsg-val :lambda-list '(m))
(cl:defmethod canmsg-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:canmsg-val is deprecated.  Use delphi_esr_msgs-msg:canmsg instead.")
  (canmsg m))

(cl:ensure-generic-function 'supply_1p_8v-val :lambda-list '(m))
(cl:defmethod supply_1p_8v-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:supply_1p_8v-val is deprecated.  Use delphi_esr_msgs-msg:supply_1p_8v instead.")
  (supply_1p_8v m))

(cl:ensure-generic-function 'supply_n_5v-val :lambda-list '(m))
(cl:defmethod supply_n_5v-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:supply_n_5v-val is deprecated.  Use delphi_esr_msgs-msg:supply_n_5v instead.")
  (supply_n_5v m))

(cl:ensure-generic-function 'wave_diff_a2d-val :lambda-list '(m))
(cl:defmethod wave_diff_a2d-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:wave_diff_a2d-val is deprecated.  Use delphi_esr_msgs-msg:wave_diff_a2d instead.")
  (wave_diff_a2d m))

(cl:ensure-generic-function 'sw_version_dsp_3rd_byte-val :lambda-list '(m))
(cl:defmethod sw_version_dsp_3rd_byte-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:sw_version_dsp_3rd_byte-val is deprecated.  Use delphi_esr_msgs-msg:sw_version_dsp_3rd_byte instead.")
  (sw_version_dsp_3rd_byte m))

(cl:ensure-generic-function 'vertical_algin_updated-val :lambda-list '(m))
(cl:defmethod vertical_algin_updated-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:vertical_algin_updated-val is deprecated.  Use delphi_esr_msgs-msg:vertical_algin_updated instead.")
  (vertical_algin_updated m))

(cl:ensure-generic-function 'system_power_mode-val :lambda-list '(m))
(cl:defmethod system_power_mode-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:system_power_mode-val is deprecated.  Use delphi_esr_msgs-msg:system_power_mode instead.")
  (system_power_mode m))

(cl:ensure-generic-function 'found_target-val :lambda-list '(m))
(cl:defmethod found_target-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:found_target-val is deprecated.  Use delphi_esr_msgs-msg:found_target instead.")
  (found_target m))

(cl:ensure-generic-function 'recommend_unconverge-val :lambda-list '(m))
(cl:defmethod recommend_unconverge-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:recommend_unconverge-val is deprecated.  Use delphi_esr_msgs-msg:recommend_unconverge instead.")
  (recommend_unconverge m))

(cl:ensure-generic-function 'factory_algin_status1-val :lambda-list '(m))
(cl:defmethod factory_algin_status1-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:factory_algin_status1-val is deprecated.  Use delphi_esr_msgs-msg:factory_algin_status1 instead.")
  (factory_algin_status1 m))

(cl:ensure-generic-function 'factory_algin_status2-val :lambda-list '(m))
(cl:defmethod factory_algin_status2-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:factory_algin_status2-val is deprecated.  Use delphi_esr_msgs-msg:factory_algin_status2 instead.")
  (factory_algin_status2 m))

(cl:ensure-generic-function 'factory_mis_alginment-val :lambda-list '(m))
(cl:defmethod factory_mis_alginment-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:factory_mis_alginment-val is deprecated.  Use delphi_esr_msgs-msg:factory_mis_alginment instead.")
  (factory_mis_alginment m))

(cl:ensure-generic-function 'serv_algin_updates_done-val :lambda-list '(m))
(cl:defmethod serv_algin_updates_done-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:serv_algin_updates_done-val is deprecated.  Use delphi_esr_msgs-msg:serv_algin_updates_done instead.")
  (serv_algin_updates_done m))

(cl:ensure-generic-function 'vertical_mis_alginment-val :lambda-list '(m))
(cl:defmethod vertical_mis_alginment-val ((m <EsrStatus6>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:vertical_mis_alginment-val is deprecated.  Use delphi_esr_msgs-msg:vertical_mis_alginment instead.")
  (vertical_mis_alginment m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EsrStatus6>) ostream)
  "Serializes a message object of type '<EsrStatus6>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'canmsg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'canmsg))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'supply_1p_8v)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'supply_n_5v)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'wave_diff_a2d)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sw_version_dsp_3rd_byte)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'vertical_algin_updated) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'system_power_mode)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'found_target) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'recommend_unconverge) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'factory_algin_status1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'factory_algin_status2)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'factory_mis_alginment))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'serv_algin_updates_done)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'vertical_mis_alginment))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EsrStatus6>) istream)
  "Deserializes a message object of type '<EsrStatus6>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'canmsg) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'canmsg) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'supply_1p_8v)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'supply_n_5v)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'wave_diff_a2d)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'sw_version_dsp_3rd_byte)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'vertical_algin_updated) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'system_power_mode)) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'found_target) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'recommend_unconverge) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'factory_algin_status1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'factory_algin_status2)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'factory_mis_alginment) (roslisp-utils:decode-single-float-bits bits)))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'serv_algin_updates_done)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'vertical_mis_alginment) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EsrStatus6>)))
  "Returns string type for a message object of type '<EsrStatus6>"
  "delphi_esr_msgs/EsrStatus6")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EsrStatus6)))
  "Returns string type for a message object of type 'EsrStatus6"
  "delphi_esr_msgs/EsrStatus6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EsrStatus6>)))
  "Returns md5sum for a message object of type '<EsrStatus6>"
  "d0f0f9e72f36d0edc6c699e8188282b7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EsrStatus6)))
  "Returns md5sum for a message object of type 'EsrStatus6"
  "d0f0f9e72f36d0edc6c699e8188282b7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EsrStatus6>)))
  "Returns full string definition for message of type '<EsrStatus6>"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR status6~%string      canmsg~%uint8       supply_1p_8v~%uint8       supply_n_5v~%uint8       wave_diff_a2d~%uint8       sw_version_dsp_3rd_byte~%bool        vertical_algin_updated~%uint8       system_power_mode~%bool        found_target~%bool        recommend_unconverge~%uint8       factory_algin_status1~%uint8       factory_algin_status2~%float32     factory_mis_alginment~%uint8       serv_algin_updates_done~%float32     vertical_mis_alginment~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EsrStatus6)))
  "Returns full string definition for message of type 'EsrStatus6"
  (cl:format cl:nil "std_msgs/Header header~%~%# ESR status6~%string      canmsg~%uint8       supply_1p_8v~%uint8       supply_n_5v~%uint8       wave_diff_a2d~%uint8       sw_version_dsp_3rd_byte~%bool        vertical_algin_updated~%uint8       system_power_mode~%bool        found_target~%bool        recommend_unconverge~%uint8       factory_algin_status1~%uint8       factory_algin_status2~%float32     factory_mis_alginment~%uint8       serv_algin_updates_done~%float32     vertical_mis_alginment~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EsrStatus6>))
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
     1
     1
     4
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EsrStatus6>))
  "Converts a ROS message object to a list"
  (cl:list 'EsrStatus6
    (cl:cons ':header (header msg))
    (cl:cons ':canmsg (canmsg msg))
    (cl:cons ':supply_1p_8v (supply_1p_8v msg))
    (cl:cons ':supply_n_5v (supply_n_5v msg))
    (cl:cons ':wave_diff_a2d (wave_diff_a2d msg))
    (cl:cons ':sw_version_dsp_3rd_byte (sw_version_dsp_3rd_byte msg))
    (cl:cons ':vertical_algin_updated (vertical_algin_updated msg))
    (cl:cons ':system_power_mode (system_power_mode msg))
    (cl:cons ':found_target (found_target msg))
    (cl:cons ':recommend_unconverge (recommend_unconverge msg))
    (cl:cons ':factory_algin_status1 (factory_algin_status1 msg))
    (cl:cons ':factory_algin_status2 (factory_algin_status2 msg))
    (cl:cons ':factory_mis_alginment (factory_mis_alginment msg))
    (cl:cons ':serv_algin_updates_done (serv_algin_updates_done msg))
    (cl:cons ':vertical_mis_alginment (vertical_mis_alginment msg))
))
