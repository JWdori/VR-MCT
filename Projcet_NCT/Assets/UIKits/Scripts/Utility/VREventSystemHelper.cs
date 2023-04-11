using UnityEngine;
using UnityEngine.EventSystems;

namespace VRUiKits.Utils
{
    public class VREventSystemHelper : EventSystem
    {
        protected override void OnApplicationFocus(bool hasFocus)
        {
            base.OnApplicationFocus(true);
        }
    }
}
