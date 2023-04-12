using UnityEngine;
using VRUiKits.Utils;
using System.Collections.Generic;

namespace VRUiKits.Demo
{
    public class ToggleUIKitHelper : MonoBehaviour
    {
        public UIKitPointer pointer;
        public List<GameObject> objectsToToggle;
#if UIKIT_OCULUS
        public OVRInput.Button trigger = OVRInput.Button.Two;
        public OVRInput.Controller controller = OVRInput.Controller.LTouch;
#endif

        public void Pause()
        {
            if (LaserInputModule.instance == null) return;
            Toggle(false);
        }

        public void Run()
        {
            if (LaserInputModule.instance == null) return;
            Toggle(true);
        }

        void Toggle(bool enabled)
        {
            pointer.gameObject.SetActive(enabled);

            foreach (var item in objectsToToggle)
            {
                item.SetActive(enabled);
            }
        }

#if UIKIT_OCULUS
        void LateUpdate()
        {
            if (OVRInput.GetDown(trigger, controller))
            {
                if (LaserInputModule.instance == null)
                {
                    return;
                }

                if (pointer.gameObject.activeSelf)
                {
                    Pause();
                }
                else
                {
                    Run();
                }
            }
        }
#endif
    }
}
