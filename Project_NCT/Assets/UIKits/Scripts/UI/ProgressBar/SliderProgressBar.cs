using UnityEngine;
using UnityEngine.UI;
using System.Collections;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    [RequireComponent(typeof(ProgressBarManager))]
    public class SliderProgressBar : MonoBehaviour
    {
        public enum ValueType { Percentage, Number }
        public Slider slider;
        public float step = 0.1f;
        [Header("Value")]
        public ValueType valuePresentedAs;
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
                return slider.value;
            }
            set
            {
                slider.value = value;
            }
        }

        [HideInInspector]
        public float roundedPercentage;
        [HideInInspector]
        public float roundedValue;
        ProgressBarManager progressBarManager;

        void Awake()
        {
            progressBarManager = GetComponent<ProgressBarManager>();
        }

        void Start()
        {
            CalculateValue(slider.value);
            UpdateValueText(slider.value);
            progressBarManager.OnValueIsUpdating += UpdateValue;
            progressBarManager.OnValueStopUpgating += CalculateValue;
            progressBarManager.OnValueStopUpgating += UpdateValueText;
        }

        public void IncreaseValue()
        {
            progressBarManager.IncreaseValue(Value, step, slider.minValue, slider.maxValue);
        }

        public void DecreaseValue()
        {
            progressBarManager.DecreaseValue(Value, step, slider.minValue, slider.maxValue);
        }


        void UpdateValue(float newValue)
        {
            Value = newValue;
        }

        void CalculateValue(float newValue)
        {
            // Calculate normalized percentage and value
            float percentage = Mathf.InverseLerp(slider.minValue, slider.maxValue, newValue) * 100;
            roundedPercentage = Mathf.Round(percentage * 1f) / 1f;
            roundedValue = Mathf.Round(newValue * 100f) / 100f;
        }
        void UpdateValueText(float newValue)
        {
            if (null == ValueText)
            {
                return;
            }

            switch (valuePresentedAs)
            {
                case ValueType.Percentage:
                    ValueText.text = roundedPercentage.ToString() + "%";
                    break;
                case ValueType.Number:
                    ValueText.text = roundedValue.ToString();
                    break;
                default:
                    break;
            }
        }
    }
}