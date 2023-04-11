using UnityEngine;
using UnityEditor;
#if UIKIT_XR_INTERACTION
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;
#endif

namespace VRUiKits.Utils
{
    [CustomEditor(typeof(RadialMenuManager))]
    public class RadialMenuManagerEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

#if UIKIT_XR_INTERACTION
            RadialMenuManager _target = (RadialMenuManager)target;
            if (_target.inputType == XRInputType.DeviceBased)
            {
                _target.controller = EditorGUILayout.ObjectField("Controller", _target.controller, typeof(XRController), true) as XRController;
            }
            else
            {
                _target.joystickMoveReference = EditorGUILayout.ObjectField("Joystick Move Reference", _target.joystickMoveReference, typeof(InputActionReference), true) as InputActionReference;
                _target.joystickPressReference = EditorGUILayout.ObjectField("Joystick Press Reference", _target.joystickPressReference, typeof(InputActionReference), true) as InputActionReference;
            }
#endif
        }
    }
}
