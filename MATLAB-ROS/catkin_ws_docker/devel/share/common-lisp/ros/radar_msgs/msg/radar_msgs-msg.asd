
(cl:in-package :asdf)

(defsystem "radar_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "RadarProcessed" :depends-on ("_package_RadarProcessed"))
    (:file "_package_RadarProcessed" :depends-on ("_package"))
    (:file "RadarProcessedArray" :depends-on ("_package_RadarProcessedArray"))
    (:file "_package_RadarProcessedArray" :depends-on ("_package"))
    (:file "RadarTrack" :depends-on ("_package_RadarTrack"))
    (:file "_package_RadarTrack" :depends-on ("_package"))
    (:file "RadarTrackArray" :depends-on ("_package_RadarTrackArray"))
    (:file "_package_RadarTrackArray" :depends-on ("_package"))
  ))