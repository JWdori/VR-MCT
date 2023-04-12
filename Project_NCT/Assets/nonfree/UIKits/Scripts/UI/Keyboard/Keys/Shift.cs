using UnityEngine;
using UnityEngine.UI;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class Shift : Key
    {
#if UIKIT_TMP
        TextMeshProUGUI subscript;
#else
        Text subscript;
#endif
        public override void Awake()
        {
            base.Awake();

#if UIKIT_TMP
            subscript = transform.Find("Subscript").GetComponent<TextMeshProUGUI>();
#else
            subscript = transform.Find("Subscript").GetComponent<Text>();
#endif
        }

        public override void ShiftKey()
        {
            var tmp = key.text;
            key.text = subscript.text;
            subscript.text = tmp;
        }
    }
}