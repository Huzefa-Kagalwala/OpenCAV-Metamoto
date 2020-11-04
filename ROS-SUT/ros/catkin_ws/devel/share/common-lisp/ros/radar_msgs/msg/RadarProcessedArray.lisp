; Auto-generated. Do not edit!


(cl:in-package radar_msgs-msg)


;//! \htmlinclude RadarProcessedArray.msg.html

(cl:defclass <RadarProcessedArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (groundtruth
    :reader groundtruth
    :initarg :groundtruth
    :type (cl:vector radar_msgs-msg:RadarProcessed)
   :initform (cl:make-array 0 :element-type 'radar_msgs-msg:RadarProcessed :initial-element (cl:make-instance 'radar_msgs-msg:RadarProcessed))))
)

(cl:defclass RadarProcessedArray (<RadarProcessedArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RadarProcessedArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RadarProcessedArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name radar_msgs-msg:<RadarProcessedArray> is deprecated: use radar_msgs-msg:RadarProcessedArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <RadarProcessedArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader radar_msgs-msg:header-val is deprecated.  Use radar_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'groundtruth-val :lambda-list '(m))
(cl:defmethod groundtruth-val ((m <RadarProcessedArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader radar_msgs-msg:groundtruth-val is deprecated.  Use radar_msgs-msg:groundtruth instead.")
  (groundtruth m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RadarProcessedArray>) ostream)
  "Serializes a message object of type '<RadarProcessedArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'groundtruth))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'groundtruth))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RadarProcessedArray>) istream)
  "Deserializes a message object of type '<RadarProcessedArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'groundtruth) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'groundtruth)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'radar_msgs-msg:RadarProcessed))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RadarProcessedArray>)))
  "Returns string type for a message object of type '<RadarProcessedArray>"
  "radar_msgs/RadarProcessedArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RadarProcessedArray)))
  "Returns string type for a message object of type 'RadarProcessedArray"
  "radar_msgs/RadarProcessedArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RadarProcessedArray>)))
  "Returns md5sum for a message object of type '<RadarProcessedArray>"
  "cf9fa8e0a4edda9688b9f7533e8ed498")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RadarProcessedArray)))
  "Returns md5sum for a message object of type 'RadarProcessedArray"
  "cf9fa8e0a4edda9688b9f7533e8ed498")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RadarProcessedArray>)))
  "Returns full string definition for message of type '<RadarProcessedArray>"
  (cl:format cl:nil "std_msgs/Header header~%radar_msgs/RadarProcessed[] groundtruth~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: radar_msgs/RadarProcessed~%uint16 object_type~%float64 range~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RadarProcessedArray)))
  "Returns full string definition for message of type 'RadarProcessedArray"
  (cl:format cl:nil "std_msgs/Header header~%radar_msgs/RadarProcessed[] groundtruth~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: radar_msgs/RadarProcessed~%uint16 object_type~%float64 range~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RadarProcessedArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'groundtruth) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RadarProcessedArray>))
  "Converts a ROS message object to a list"
  (cl:list 'RadarProcessedArray
    (cl:cons ':header (header msg))
    (cl:cons ':groundtruth (groundtruth msg))
))
