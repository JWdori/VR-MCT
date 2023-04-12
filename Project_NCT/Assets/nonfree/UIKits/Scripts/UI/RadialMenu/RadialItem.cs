using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

namespace VRUiKits.Utils
{
    public class RadialItem : MonoBehaviour
    {
        public Color normalColor;
        public Color hoverColor;
        public Sprite iconImage;
        public UnityEvent onClickEvent;
        public Transform icon;
        public Transform sector;

        void OnValidate()
        {
            sector.GetComponent<Image>().color = normalColor;
            icon.GetComponent<Image>().sprite = iconImage;
        }

        public void AdjustFillSize(int total, int index, float radius)
        {
            sector.GetComponent<Image>().fillAmount = 1f / total;
            float rotation = 360f / total * (index + 0.5f) + 180;
            sector.transform.localRotation = Quaternion.Euler(0, 0, rotation);
            icon.localPosition = CalculateIconPosition((float)(-2 * index * Math.PI / total), radius);
        }

        public void Activate()
        {
            sector.GetComponent<Image>().color = hoverColor;
        }

        public void Deactivate()
        {
            sector.GetComponent<Image>().color = normalColor;
        }

        public void Click()
        {
            if (null != onClickEvent)
            {
                onClickEvent.Invoke();
            }
        }

        Vector3 CalculateIconPosition(float rotation, float radis)
        {
            float x = (float)(radis * Math.Sin(rotation));
            float y = (float)(radis * Math.Cos(rotation));
            return new Vector3(x, y, 0);
        }
    }
}
