using UnityEngine.EventSystems;
using UnityEngine;

namespace VRUiKits.Utils
{
    public class UIKitInputModule : BaseInputModule
    {
        [HideInInspector]
        public float gazeTimeInSeconds = 1f;
        [HideInInspector]
        public float delayTimeInSeconds = 0.5f;

        public delegate void OnGazeChangedHandler(GameObject target);
        public event OnGazeChangedHandler OnGazeChanged;

        protected void RaiseGazeChangeEvent(GameObject target)
        {
            if (OnGazeChanged != null)
                OnGazeChanged(target);
        }

        public override void Process() { }
    }
}
