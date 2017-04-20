
(cl:in-package :asdf)

(defsystem "blender_api_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Visemes" :depends-on ("_package_Visemes"))
    (:file "_package_Visemes" :depends-on ("_package"))
    (:file "Gestures" :depends-on ("_package_Gestures"))
    (:file "_package_Gestures" :depends-on ("_package"))
    (:file "EmotionState" :depends-on ("_package_EmotionState"))
    (:file "_package_EmotionState" :depends-on ("_package"))
    (:file "BlinkCycle" :depends-on ("_package_BlinkCycle"))
    (:file "_package_BlinkCycle" :depends-on ("_package"))
    (:file "Gesture" :depends-on ("_package_Gesture"))
    (:file "_package_Gesture" :depends-on ("_package"))
    (:file "Target" :depends-on ("_package_Target"))
    (:file "_package_Target" :depends-on ("_package"))
    (:file "SetGesture" :depends-on ("_package_SetGesture"))
    (:file "_package_SetGesture" :depends-on ("_package"))
    (:file "FSShapekey" :depends-on ("_package_FSShapekey"))
    (:file "_package_FSShapekey" :depends-on ("_package"))
    (:file "FSValues" :depends-on ("_package_FSValues"))
    (:file "_package_FSValues" :depends-on ("_package"))
    (:file "AvailableEmotionStates" :depends-on ("_package_AvailableEmotionStates"))
    (:file "_package_AvailableEmotionStates" :depends-on ("_package"))
    (:file "FSShapekeys" :depends-on ("_package_FSShapekeys"))
    (:file "_package_FSShapekeys" :depends-on ("_package"))
    (:file "GetAPIVersion" :depends-on ("_package_GetAPIVersion"))
    (:file "_package_GetAPIVersion" :depends-on ("_package"))
    (:file "SomaStates" :depends-on ("_package_SomaStates"))
    (:file "_package_SomaStates" :depends-on ("_package"))
    (:file "AvailableGestures" :depends-on ("_package_AvailableGestures"))
    (:file "_package_AvailableGestures" :depends-on ("_package"))
    (:file "AvailableSomaStates" :depends-on ("_package_AvailableSomaStates"))
    (:file "_package_AvailableSomaStates" :depends-on ("_package"))
    (:file "Viseme" :depends-on ("_package_Viseme"))
    (:file "_package_Viseme" :depends-on ("_package"))
    (:file "SaccadeCycle" :depends-on ("_package_SaccadeCycle"))
    (:file "_package_SaccadeCycle" :depends-on ("_package"))
    (:file "EmotionStates" :depends-on ("_package_EmotionStates"))
    (:file "_package_EmotionStates" :depends-on ("_package"))
    (:file "SomaState" :depends-on ("_package_SomaState"))
    (:file "_package_SomaState" :depends-on ("_package"))
    (:file "AvailableVisemes" :depends-on ("_package_AvailableVisemes"))
    (:file "_package_AvailableVisemes" :depends-on ("_package"))
  ))