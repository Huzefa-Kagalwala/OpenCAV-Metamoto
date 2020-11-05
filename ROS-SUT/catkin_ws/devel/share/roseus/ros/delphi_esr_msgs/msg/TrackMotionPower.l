;; Auto-generated. Do not edit!


(when (boundp 'delphi_esr_msgs::TrackMotionPower)
  (if (not (find-package "DELPHI_ESR_MSGS"))
    (make-package "DELPHI_ESR_MSGS"))
  (shadow 'TrackMotionPower (find-package "DELPHI_ESR_MSGS")))
(unless (find-package "DELPHI_ESR_MSGS::TRACKMOTIONPOWER")
  (make-package "DELPHI_ESR_MSGS::TRACKMOTIONPOWER"))

(in-package "ROS")
;;//! \htmlinclude TrackMotionPower.msg.html


(defclass delphi_esr_msgs::TrackMotionPower
  :super ros::object
  :slots (_movable_fast _movable_slow _moving _power ))

(defmethod delphi_esr_msgs::TrackMotionPower
  (:init
   (&key
    ((:movable_fast __movable_fast) nil)
    ((:movable_slow __movable_slow) nil)
    ((:moving __moving) nil)
    ((:power __power) 0)
    )
   (send-super :init)
   (setq _movable_fast __movable_fast)
   (setq _movable_slow __movable_slow)
   (setq _moving __moving)
   (setq _power (round __power))
   self)
  (:movable_fast
   (&optional __movable_fast)
   (if __movable_fast (setq _movable_fast __movable_fast)) _movable_fast)
  (:movable_slow
   (&optional __movable_slow)
   (if __movable_slow (setq _movable_slow __movable_slow)) _movable_slow)
  (:moving
   (&optional __moving)
   (if __moving (setq _moving __moving)) _moving)
  (:power
   (&optional __power)
   (if __power (setq _power __power)) _power)
  (:serialization-length
   ()
   (+
    ;; bool _movable_fast
    1
    ;; bool _movable_slow
    1
    ;; bool _moving
    1
    ;; int8 _power
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _movable_fast
       (if _movable_fast (write-byte -1 s) (write-byte 0 s))
     ;; bool _movable_slow
       (if _movable_slow (write-byte -1 s) (write-byte 0 s))
     ;; bool _moving
       (if _moving (write-byte -1 s) (write-byte 0 s))
     ;; int8 _power
       (write-byte _power s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _movable_fast
     (setq _movable_fast (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _movable_slow
     (setq _movable_slow (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; bool _moving
     (setq _moving (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; int8 _power
     (setq _power (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _power 127) (setq _power (- _power 256)))
   ;;
   self)
  )

(setf (get delphi_esr_msgs::TrackMotionPower :md5sum-) "f6b1c4ad81b926dc71e475401a529999")
(setf (get delphi_esr_msgs::TrackMotionPower :datatype-) "delphi_esr_msgs/TrackMotionPower")
(setf (get delphi_esr_msgs::TrackMotionPower :definition-)
      "bool  movable_fast
bool  movable_slow
bool  moving
int8  power

")



(provide :delphi_esr_msgs/TrackMotionPower "f6b1c4ad81b926dc71e475401a529999")


