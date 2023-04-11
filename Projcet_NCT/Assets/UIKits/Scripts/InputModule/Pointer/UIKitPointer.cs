using UnityEngine;
#if UIKIT_VIVE_STEAM_2
using Valve.VR;
using Valve.VR.InteractionSystem;
#endif

namespace VRUiKits.Utils
{
    public class UIKitPointer : MonoBehaviour
    {
        public GameObject gazePointer;
        public GameObject laser;
        Pointer? temp = null; // Used to detect if the pointer has changed in the input module.

        void Start()
        {
            if (null == LaserInputModule.instance)
            {
                return;
            }

            LaserInputModule.instance.SetController(this);
        }

#if UIKIT_OCULUS || UIKIT_VIVE_STEAM_2
        // Change pointer when player clicks trigger on the other pointer.
        [SerializeField]
        bool allowAutoSwitchHand = false;
#endif
        void Update()
        {
            bool isEyePointer = LaserInputModule.instance.pointer == Pointer.Eye;
            if (temp != LaserInputModule.instance.pointer)
            {
                gazePointer.SetActive(isEyePointer);
                laser.SetActive(!isEyePointer);
#if UIKIT_OCULUS || UIKIT_VIVE_STEAM_2
                SetPointer(LaserInputModule.instance.pointer);
#endif
                temp = LaserInputModule.instance.pointer;
            }

#if UIKIT_OCULUS
            if (allowAutoSwitchHand)
            {
                /********* Oculus Rift **********/
                if (OVRInput.GetDown(LaserInputModule.instance.trigger, OVRInput.Controller.RTouch)
                && LaserInputModule.instance.pointer != Pointer.RightHand)
                {
                    SetPointer(Pointer.RightHand);
                }
                else if (OVRInput.GetDown(LaserInputModule.instance.trigger, OVRInput.Controller.LTouch)
                && LaserInputModule.instance.pointer != Pointer.LeftHand)
                {
                    SetPointer(Pointer.LeftHand);
                }
            }
#endif

#if UIKIT_VIVE_STEAM_2
            if (allowAutoSwitchHand)
            {
                if (LaserInputModule.instance.triggerAction.GetStateDown(SteamVR_Input_Sources.RightHand)
                && LaserInputModule.instance.pointer != Pointer.RightHand)
                {
                    SetPointer(Pointer.RightHand);
                }
                else if (LaserInputModule.instance.triggerAction.GetStateDown(SteamVR_Input_Sources.LeftHand)
                && LaserInputModule.instance.pointer != Pointer.LeftHand)
                {
                    SetPointer(Pointer.LeftHand);
                }
            }
#endif
        }

#if UIKIT_OCULUS || UIKIT_VIVE_STEAM_2
        void SetPointer(Pointer targetPointer)
        {
            if (null != LaserInputModule.instance)
            {
                LaserInputModule.instance.pointer = targetPointer;
                transform.SetParent(LaserInputModule.instance.TargetControllerTransform);
                ResetTransform(transform);
            }
        }
#endif

        void ResetTransform(Transform trans)
        {
            trans.localPosition = Vector3.zero;
            trans.localRotation = Quaternion.identity;
            trans.localScale = Vector3.one;
        }

        void OnDestroy()
        {
            if (null != LaserInputModule.instance)
            {
                LaserInputModule.instance.RemoveController(this);
            }
        }

        void OnEnable()
        {
            if (null != LaserInputModule.instance)
            {
                LaserInputModule.instance.SetController(this);
            }
        }

        void OnDisable()
        {
            if (null != LaserInputModule.instance)
            {
                LaserInputModule.instance.RemoveController(this);
            }
        }
    }
}
