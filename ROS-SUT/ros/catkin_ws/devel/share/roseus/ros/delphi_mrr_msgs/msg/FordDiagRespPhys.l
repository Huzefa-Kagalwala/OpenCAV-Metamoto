;; Auto-generated. Do not edit!


(when (boundp 'delphi_mrr_msgs::FordDiagRespPhys)
  (if (not (find-package "DELPHI_MRR_MSGS"))
    (make-package "DELPHI_MRR_MSGS"))
  (shadow 'FordDiagRespPhys (find-package "DELPHI_MRR_MSGS")))
(unless (find-package "DELPHI_MRR_MSGS::FORDDIAGRESPPHYS")
  (make-package "DELPHI_MRR_MSGS::FORDDIAGRESPPHYS"))

(in-package "ROS")
;;//! \htmlinclude FordDiagRespPhys.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass delphi_mrr_msgs::FordDiagRespPhys
  :super ros::object
  :slots (_header _tester_physical_res_ccm ))

(defmethod delphi_mrr_msgs::FordDiagRespPhys
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:tester_physical_res_ccm __tester_physical_res_ccm) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _tester_physical_res_ccm (round __tester_physical_res_ccm))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:tester_physical_res_ccm
   (&optional __tester_physical_res_ccm)
   (if __tester_physical_res_ccm (setq _tester_physical_res_ccm __tester_physical_res_ccm)) _tester_physical_res_ccm)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint64 _tester_physical_res_ccm
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint64 _tester_physical_res_ccm
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _tester_physical_res_ccm (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _tester_physical_res_ccm) (= (length (_tester_physical_res_ccm . bv)) 2)) ;; bignum
              (write-long (ash (elt (_tester_physical_res_ccm . bv) 0) 0) s)
              (write-long (ash (elt (_tester_physical_res_ccm . bv) 1) -1) s))
             ((and (class _tester_physical_res_ccm) (= (length (_tester_physical_res_ccm . bv)) 1)) ;; big1
              (write-long (elt (_tester_physical_res_ccm . bv) 0) s)
              (write-long (if (>= _tester_physical_res_ccm 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _tester_physical_res_ccm s)(write-long (if (>= _tester_physical_res_ccm 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint64 _tester_physical_res_ccm
     
#+(or :alpha :irix6 :x86_64)
      (setf _tester_physical_res_ccm (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _tester_physical_res_ccm (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(setf (get delphi_mrr_msgs::FordDiagRespPhys :md5sum-) "e28b716bd1cda9916d5789d9fcaa98e7")
(setf (get delphi_mrr_msgs::FordDiagRespPhys :datatype-) "delphi_mrr_msgs/FordDiagRespPhys")
(setf (get delphi_mrr_msgs::FordDiagRespPhys :definition-)
      "std_msgs/Header header

uint64 tester_physical_res_ccm

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

")



(provide :delphi_mrr_msgs/FordDiagRespPhys "e28b716bd1cda9916d5789d9fcaa98e7")


