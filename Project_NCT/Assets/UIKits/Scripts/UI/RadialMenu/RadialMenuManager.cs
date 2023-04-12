using System.Collections;
using System.Collections.Generic;
using UnityEngine;
#if UIKIT_XR_INTERACTION
using XR = UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;
#elif UIKIT_VIVE_STEAM_2
using Valve.VR;
#endif

namespace VRUiKits.Utils
{
    [ExecuteInEditMode]
    public class RadialMenuManager : MonoBehaviour
    {
        [Min(0f)]
        public float iconRadius;
        Vector2 position;
        RadialItem[] radialItems;
        float currentAngle;
        int previousSelection;


#if UIKIT_OCULUS
        public OVRInput.Controller controller;
#elif UIKIT_XR_INTERACTION
        public XRInputType inputType;
        // Deviced Based
        [HideInInspector]
        public XRController controller;
        // Action Based
        [HideInInspector]
        public InputActionReference joystickMoveReference, joystickPressReference;

        bool isPreviousPressed = false;
#elif UIKIT_VIVE
        public SteamVR_TrackedObject trackedObject;

        public SteamVR_Controller.Device Controller
        {
            get
            {
                if (null == trackedObject) { return null; }
                if (-1 == (int)trackedObject.index) { return null; }
                return SteamVR_Controller.Input((int)trackedObject.index);
            }
        }

#elif UIKIT_VIVE_STEAM_2
        public SteamVR_Input_Sources inputSource;
        [Header("Actions")]
        public SteamVR_Action_Vector2 trackpadTouchPosition;
        public SteamVR_Action_Boolean trackpadPress;
#endif
        void Awake()
        {
            radialItems = GetComponentsInChildren<RadialItem>();
            AdjustRadialItem();
        }

        void Update()
        {
            if (Application.isEditor && !Application.isPlaying)
            {
                AdjustRadialItem();
            }
            else
            {
#if UIKIT_OCULUS
                position = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick, controller);
#elif UIKIT_VIVE
                if (null == Controller) { return; }
                position = Controller.GetAxis();
#elif UIKIT_VIVE_STEAM_2
                if (null == trackpadTouchPosition) { return; }
                position = trackpadTouchPosition.GetAxis(inputSource);
#elif UIKIT_XR_INTERACTION
                if (inputType == XRInputType.DeviceBased)
                {
                    if (controller.inputDevice.TryGetFeatureValue(XR.CommonUsages.primary2DAxis, out Vector2 joystickPosition))
                    {
                        position = joystickPosition;
                    }
                }

                if (inputType == XRInputType.ActionBased && null != joystickMoveReference)
                {
                    position = joystickMoveReference.action.ReadValue<Vector2>();
                }
#else
                position = new Vector2(Input.mousePosition.x - Screen.width / 2, Input.mousePosition.y - Screen.height / 2);
#endif

                if (position == Vector2.zero)
                {
                    Reset();
                }
                else
                {
                    int selection = GetCurrentSelection(position);
                    ProcessSelection(selection);
                    ProcessPress(selection);
                }
            }
        }

        public void AdjustRadialItem()
        {
            radialItems = GetComponentsInChildren<RadialItem>();
            int total = radialItems.Length;
            int id = 0;

            foreach (var item in radialItems)
            {
                item.AdjustFillSize(total, id, iconRadius);
                id++;
            }
        }

        int GetCurrentSelection(Vector2 position)
        {
            currentAngle = Mathf.Atan2(position.y, position.x) * Mathf.Rad2Deg;
            float degreePerRadial = 360 / radialItems.Length;
            currentAngle = (currentAngle - (90 - degreePerRadial / 2) + 360) % 360;
            int selection = (int)(currentAngle / degreePerRadial);
            return selection;
        }

        void Reset()
        {
            radialItems[previousSelection].Deactivate();
            previousSelection = 0;
        }

        void ProcessSelection(int selection)
        {
            if (selection > radialItems.Length - 1)
            {
                return;
            }
            radialItems[selection].Activate();
            if (previousSelection != selection)
            {
                radialItems[previousSelection].Deactivate();
            }
            previousSelection = selection;
        }

        void ProcessPress(int selection)
        {
            if (selection > radialItems.Length - 1)
            {
                return;
            }

#if UIKIT_OCULUS
            if (OVRInput.GetDown(OVRInput.Button.PrimaryThumbstick, controller))
            {
                radialItems[selection].Click();
            }
#elif UIKIT_VIVE
            if (null == Controller) { return; }
            if (Controller.GetPressDown(Valve.VR.EVRButtonId.k_EButton_SteamVR_Touchpad)) {
                radialItems[selection].Click();
            }
#elif UIKIT_VIVE_STEAM_2
            if (null == trackpadPress) { return; }
            if (trackpadPress.GetStateDown(inputSource))
            {
                radialItems[selection].Click();
            }
#elif UIKIT_XR_INTERACTION
            if (inputType == XRInputType.DeviceBased)
            {
                if (controller.inputDevice.TryGetFeatureValue(XR.CommonUsages.primary2DAxisClick, out bool isPressed))
                {
                    if (isPreviousPressed != isPressed)
                    {
                        isPreviousPressed = isPressed;

                        if (isPressed)
                        {
                            radialItems[selection].Click();
                        }
                    }
                }
            }

            if (inputType == XRInputType.ActionBased)
            {
                if (null != joystickPressReference && joystickPressReference.action.triggered)
                {
                    radialItems[selection].Click();
                }
            }
#else
            if (Input.GetMouseButtonDown(0))
            {
                radialItems[selection].Click();
            }
#endif
        }
    }

    public enum XRInputType
    {
        DeviceBased,
        ActionBased
    }
}
