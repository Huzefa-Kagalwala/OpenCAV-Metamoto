; Auto-generated. Do not edit!


(cl:in-package delphi_esr_msgs-msg)


;//! \htmlinclude TrackMotionPower.msg.html

(cl:defclass <TrackMotionPower> (roslisp-msg-protocol:ros-message)
  ((movable_fast
    :reader movable_fast
    :initarg :movable_fast
    :type cl:boolean
    :initform cl:nil)
   (movable_slow
    :reader movable_slow
    :initarg :movable_slow
    :type cl:boolean
    :initform cl:nil)
   (moving
    :reader moving
    :initarg :moving
    :type cl:boolean
    :initform cl:nil)
   (power
    :reader power
    :initarg :power
    :type cl:fixnum
    :initform 0))
)

(cl:defclass TrackMotionPower (<TrackMotionPower>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TrackMotionPower>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TrackMotionPower)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name delphi_esr_msgs-msg:<TrackMotionPower> is deprecated: use delphi_esr_msgs-msg:TrackMotionPower instead.")))

(cl:ensure-generic-function 'movable_fast-val :lambda-list '(m))
(cl:defmethod movable_fast-val ((m <TrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:movable_fast-val is deprecated.  Use delphi_esr_msgs-msg:movable_fast instead.")
  (movable_fast m))

(cl:ensure-generic-function 'movable_slow-val :lambda-list '(m))
(cl:defmethod movable_slow-val ((m <TrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:movable_slow-val is deprecated.  Use delphi_esr_msgs-msg:movable_slow instead.")
  (movable_slow m))

(cl:ensure-generic-function 'moving-val :lambda-list '(m))
(cl:defmethod moving-val ((m <TrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:moving-val is deprecated.  Use delphi_esr_msgs-msg:moving instead.")
  (moving m))

(cl:ensure-generic-function 'power-val :lambda-list '(m))
(cl:defmethod power-val ((m <TrackMotionPower>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader delphi_esr_msgs-msg:power-val is deprecated.  Use delphi_esr_msgs-msg:power instead.")
  (power m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TrackMotionPower>) ostream)
  "Serializes a message object of type '<TrackMotionPower>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'movable_fast) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'movable_slow) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'moving) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'power)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TrackMotionPower>) istream)
  "Deserializes a message object of type '<TrackMotionPower>"
    (cl:setf (cl:slot-value msg 'movable_fast) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'movable_slow) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'moving) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'power) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TrackMotionPower>)))
  "Returns string type for a message object of type '<TrackMotionPower>"
  "delphi_esr_msgs/TrackMotionPower")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TrackMotionPower)))
  "Returns string type for a message object of type 'TrackMotionPower"
  "delphi_esr_msgs/TrackMotionPower")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TrackMotionPower>)))
  "Returns md5sum for a message object of type '<TrackMotionPower>"
  "f6b1c4ad81b926dc71e475401a529999")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TrackMotionPower)))
  "Returns md5sum for a message object of type 'TrackMotionPower"
  "f6b1c4ad81b926dc71e475401a529999")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TrackMotionPower>)))
  "Returns full string definition for message of type '<TrackMotionPower>"
  (cl:format cl:nil "bool  movable_fast~%bool  movable_slow~%bool  moving~%int8  power~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TrackMotionPower)))
  "Returns full string definition for message of type 'TrackMotionPower"
  (cl:format cl:nil "bool  movable_fast~%bool  movable_slow~%bool  moving~%int8  power~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TrackMotionPower>))
  (cl:+ 0
     1
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TrackMotionPower>))
  "Converts a ROS message object to a list"
  (cl:list 'TrackMotionPower
    (cl:cons ':movable_fast (movable_fast msg))
    (cl:cons ':movable_slow (movable_slow msg))
    (cl:cons ':moving (moving msg))
    (cl:cons ':power (power msg))
))
