using UnityEngine;
using UnityEngine.UI;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class SuggestionButton : MonoBehaviour
    {
#if UIKIT_TMP
        TextMeshProUGUI suggestionText;
#else
        Text suggestionText;
#endif
        public delegate void OnSuggestionClickedHandler(string word);

        // The event which other objects can subscribe to
        // Uses the function defined above as its type
        public event OnSuggestionClickedHandler OnSuggestionClicked;

        void Awake()
        {
#if UIKIT_TMP
            suggestionText = GetComponentInChildren<TextMeshProUGUI>();
#else
            suggestionText = GetComponentInChildren<Text>();
#endif

            GetComponent<Button>().onClick.AddListener(() =>
            {
                OnSuggestionClicked(suggestionText.text);
            });
        }

        public void SetSuggestion(string word)
        {
            if (null != suggestionText)
            {
                suggestionText.text = word;
            }
        }
    }
}
