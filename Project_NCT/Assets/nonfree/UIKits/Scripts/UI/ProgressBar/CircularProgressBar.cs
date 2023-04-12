using UnityEngine;
using UnityEngine.UI;
using System.Collections;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    [RequireComponent(typeof(ProgressBarManager))]
    public class CircularProgressBar : MonoBehaviour
    {
        public Image circle;
        [Range(0f, 1f)]
        public float step = 0.1f;
        [Header("Value")]
        public Transform valueText;
#if UIKIT_TMP
        public TextMeshProUGUI ValueText
        {
            get
            {
                return valueText.GetComponent<TextMeshProUGUI>();
            }
        }
#else
        public Text ValueText
        {
            get
            {
                return valueText.GetComponent<Text>();
            }
        }
#endif
        public float Value
        {
            get
            {
                return circle.fillAmount;
            }
            set
            {
                circle.fillAmount = value;
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
            UpdateValueText(circle.fillAmount);
            progressBarManager.OnValueIsUpdating += UpdateValue;
            progressBarManager.OnValueStopUpgating += UpdateValueText;
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

        void UpdateValueText(float newValue)
        {
            if (null == ValueText)
            {
                return;
            }
            ValueText.text = (newValue * 100).ToString("F0") + "%";
        }
    }
}