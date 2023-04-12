using UnityEngine;
using UnityEngine.UI;
using System;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    [Serializable]
    public struct Option
    {
        public string value;
    }

    public class OptionItem : MonoBehaviour
    {
        Option option;
        public string Value
        {
            get
            {
                return option.value;
            }
        }

        public Option Option
        {
            get
            {
                return option;
            }
            set
            {
                option = value;
#if UIKIT_TMP
                if (GetComponent<TextMeshProUGUI>())
                {
                    GetComponent<TextMeshProUGUI>().text = option.value;
                    return;
                }
#endif
                if (GetComponent<Text>())
                {
                    GetComponent<Text>().text = option.value;
                }
            }
        }

        public void Activate()
        {
            gameObject.SetActive(true);
        }

        public void Deactivate()
        {
            gameObject.SetActive(false);
        }
    }
}