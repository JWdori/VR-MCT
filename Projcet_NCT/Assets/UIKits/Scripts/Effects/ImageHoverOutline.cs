using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace VRUiKits.Utils
{
    public class ImageHoverOutline : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
    {
        public Image targetImage;
        public Color outlineColor = Color.black;
        public float outlineWidth = 1f;
        Outline outline;
        // Lazy Evaluation
        Outline _Outline
        {
            get
            {
                if (null == outline)
                {
                    if (null == targetImage)
                    {
                        outline = null;
                        return outline;
                    }

                    if (null == targetImage.GetComponent<Outline>())
                    {
                        targetImage.gameObject.AddComponent<Outline>();
                    }

                    outline = targetImage.GetComponent<Outline>();
                    outline.effectColor = outlineColor;
                    outline.effectDistance = new Vector2(outlineWidth, -outlineWidth);
                    outline.enabled = false;
                }

                return outline;
            }
        }

        public void OnPointerEnter(PointerEventData eventData)
        {
            if (null != _Outline)
            {
                _Outline.enabled = true;
            }
        }

        public void OnPointerExit(PointerEventData eventData)
        {
            if (null != _Outline)
            {
                _Outline.enabled = false;
            }
        }
    }
}