using UnityEngine;
using UnityEngine.UI;

namespace VRUiKits.Utils
{
    public enum ButtonDeactiveStyle { Disabled, Hidden }
    public class Pagination : MonoBehaviour
    {
        [Header("Target")]
        public Transform targetObject;
        [Header("Pagination Buttons")]
        public ButtonDeactiveStyle buttonDeactiveStyle;
        public Button nextBtn;
        public Button prevBtn;

        public int CurrentPage
        {
            get
            {
                return currentPage;
            }
            set
            {
                if (null == targetObject)
                {
                    Debug.LogError("Please assign the target object for pagination");
                    return;
                }

                if (targetObject.childCount <= 0)
                {
                    PagintionBtnControl(false, false);
                }
                else
                {
                    if (value < 0 || value >= targetObject.childCount)
                    {
                        return;
                    }
                    // Deactive previous page
                    targetObject.GetChild(currentPage).gameObject.SetActive(false);
                    currentPage = value;
                    // Active current page
                    targetObject.GetChild(currentPage).gameObject.SetActive(true);

                    if (currentPage == 0)
                    {
                        PagintionBtnControl(true, false);
                    }
                    else if (currentPage > 0 && currentPage < targetObject.childCount - 1)
                    {
                        PagintionBtnControl(true, true);
                    }
                    else
                    {
                        PagintionBtnControl(false, true);
                    }
                }
            }
        }
        int currentPage = 0;

        void Start()
        {
            CurrentPage = 0;

            // Add next and prev function to the related buttons
            if (null != nextBtn)
            {
                nextBtn.onClick.AddListener(Next);
            }

            if (null != prevBtn)
            {
                prevBtn.onClick.AddListener(Prev);
            }
        }

        public void Next()
        {
            CurrentPage += 1;
        }

        public void Prev()
        {
            CurrentPage -= 1;
        }

        void PagintionBtnControl(bool nextEnabled, bool prevEnabled)
        {
            if (null != nextBtn)
            {
                switch (buttonDeactiveStyle)
                {
                    case ButtonDeactiveStyle.Disabled:
                        nextBtn.interactable = nextEnabled;
                        break;
                    case ButtonDeactiveStyle.Hidden:
                        nextBtn.gameObject.SetActive(nextEnabled);
                        break;
                }
            }

            if (null != prevBtn)
            {
                switch (buttonDeactiveStyle)
                {
                    case ButtonDeactiveStyle.Disabled:
                        prevBtn.interactable = prevEnabled;
                        break;
                    case ButtonDeactiveStyle.Hidden:
                        prevBtn.gameObject.SetActive(prevEnabled);
                        break;
                }
            }
        }
    }
}