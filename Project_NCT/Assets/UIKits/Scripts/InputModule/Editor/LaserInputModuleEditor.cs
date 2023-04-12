using UnityEngine;
using UnityEditor;

namespace VRUiKits.Utils
{
    [CustomEditor(typeof(LaserInputModule))]
    public class LaserInputModuleEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            LaserInputModule _target = (LaserInputModule)target;
            if (_target.pointer == Pointer.Eye)
            {
                _target.gazeTimeInSeconds = EditorGUILayout.FloatField("Gaze Time In Seconds", _target.gazeTimeInSeconds);
                _target.delayTimeInSeconds = EditorGUILayout.FloatField("Delay Time In Seconds", _target.delayTimeInSeconds);
            }

            if (GUILayout.Button("Setup Input Module"))
            {
                switch (_target.platform)
                {
                    case VRPlatform.OCULUS:
                        DeviceControl.SetPlatformCustomDefine("UIKIT_OCULUS");
                        break;
                    case VRPlatform.VIVE:
                        DeviceControl.SetPlatformCustomDefine("UIKIT_VIVE");
                        break;
                    case VRPlatform.VIVE_STEAM2:
                        DeviceControl.SetPlatformCustomDefine("UIKIT_VIVE_STEAM_2");
                        break;
                    case VRPlatform.NONE:
                        DeviceControl.SetPlatformCustomDefine("");
                        break;
                }
            }

#if UIKIT_VIVE_STEAM_2
            if (_target.setupHmdExplicitly)
            {
                _target.m_leftHand = EditorGUILayout.ObjectField("Left Hand", _target.m_leftHand, typeof(Transform), true) as Transform;
                _target.m_rightHand = EditorGUILayout.ObjectField("Right Hand", _target.m_rightHand, typeof(Transform), true) as Transform;
                _target.m_centerEye = EditorGUILayout.ObjectField("Center Eye", _target.m_centerEye, typeof(Transform), true) as Transform;
            }
#endif
        }
    }
}
