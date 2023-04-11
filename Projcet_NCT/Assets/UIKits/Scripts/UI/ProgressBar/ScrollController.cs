using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace VRUiKits.Utils
{
    [RequireComponent(typeof(ProgressBarManager))]
    public class ScrollController : MonoBehaviour
    {
        public Scrollbar scrollbar;
        [Range(0f, 1f)]
        public float step = 0.5f;
        public float Value
        {
            get
            {
                return scrollbar.value;
            }
            set
            {
                scrollbar.value = value;
            }
        }
        float min = 0f; float max = 1f;
        ProgressBarManager progressBarManager;

        void Awake()
        {
            progressBarManager = GetComponent<ProgressBarManager>();
        }

        void Start()
        {
            progressBarManager.OnValueIsUpdating += UpdateValue;
        }
        public void IncreaseValue()
        {
            progressBarManager.IncreaseValue(Value, step, min, max);
        }

        public void DecreaseValue()
        {
            progressBarManager.DecreaseValue(Value, step, min, max);
        }

        void UpdateValue(float newValue)
        {
            Value = newValue;
        }
    }
}