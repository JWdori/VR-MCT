using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace VRUiKits.Utils
{
    public class TextHoverScale : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
    {
        public Text targetText;
        // Lazy Evaluation
        public float scale = 1.1f;
        Text TargetText
        {
            get
            {
                if (null == targetText && null != GetComponentInChildren<Text>())
                {
                    targetText = GetComponentInChildren<Text>();
                }

                return targetText;
            }
        }

        int originSize;

        public void OnPointerEnter(PointerEventData eventData)
        {
            if (null != TargetText)
            {
                originSize = TargetText.fontSize;
                TargetText.fontSize = (int)Mathf.Round(TargetText.fontSize * scale);
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (null != TargetText)
            {
                TargetText.fontSize = originSize;
            }
        }
    }
}