; Auto-generated. Do not edit!


(cl:in-package radar_msgs-msg)


;//! \htmlinclude RadarProcessed.msg.html

(cl:defclass <RadarProcessed> (roslisp-msg-protocol:ros-message)
  ((object_type
    :reader object_type
    :initarg :object_type
    :type cl:fixnum
    :initform 0)
   (range
    :reader range
    :initarg :range
    :type cl:float
    :initform 0.0))
)

(cl:defclass RadarProcessed (<RadarProcessed>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RadarProcessed>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RadarProcessed)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name radar_msgs-msg:<RadarProcessed> is deprecated: use radar_msgs-msg:RadarProcessed instead.")))

(cl:ensure-generic-function 'object_type-val :lambda-list '(m))
(cl:defmethod object_type-val ((m <RadarProcessed>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader radar_msgs-msg:object_type-val is deprecated.  Use radar_msgs-msg:object_type instead.")
  (object_type m))

(cl:ensure-generic-function 'range-val :lambda-list '(m))
(cl:defmethod range-val ((m <RadarProcessed>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader radar_msgs-msg:range-val is deprecated.  Use radar_msgs-msg:range instead.")
  (range m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RadarProcessed>) ostream)
  "Serializes a message object of type '<RadarProcessed>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'object_type)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'object_type)) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'range))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RadarProcessed>) istream)
  "Deserializes a message object of type '<RadarProcessed>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'object_type)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'object_type)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'range) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RadarProcessed>)))
  "Returns string type for a message object of type '<RadarProcessed>"
  "radar_msgs/RadarProcessed")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RadarProcessed)))
  "Returns string type for a message object of type 'RadarProcessed"
  "radar_msgs/RadarProcessed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RadarProcessed>)))
  "Returns md5sum for a message object of type '<RadarProcessed>"
  "70dc93b14bad2d82dec80476656b3685")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RadarProcessed)))
  "Returns md5sum for a message object of type 'RadarProcessed"
  "70dc93b14bad2d82dec80476656b3685")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RadarProcessed>)))
  "Returns full string definition for message of type '<RadarProcessed>"
  (cl:format cl:nil "uint16 object_type~%float64 range~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RadarProcessed)))
  "Returns full string definition for message of type 'RadarProcessed"
  (cl:format cl:nil "uint16 object_type~%float64 range~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RadarProcessed>))
  (cl:+ 0
     2
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RadarProcessed>))
  "Converts a ROS message object to a list"
  (cl:list 'RadarProcessed
    (cl:cons ':object_type (object_type msg))
    (cl:cons ':range (range msg))
))
