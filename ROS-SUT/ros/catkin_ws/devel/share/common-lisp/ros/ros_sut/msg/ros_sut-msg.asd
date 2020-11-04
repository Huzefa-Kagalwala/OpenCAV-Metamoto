
(cl:in-package :asdf)

(defsystem "ros_sut-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "ControlCommand" :depends-on ("_package_ControlCommand"))
    (:file "_package_ControlCommand" :depends-on ("_package"))
    (:file "SixChannelControlCommand" :depends-on ("_package_SixChannelControlCommand"))
    (:file "_package_SixChannelControlCommand" :depends-on ("_package"))
  ))