using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.UI;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class KeyboardSuggestions : MonoBehaviour
    {
        public KeyboardManager keyboardManager;
        public int maxNumberOfSuggestions = 3;
        List<string> suggestions;
        string pattern = "[^a-zA-Z]+";
        SuggestionButton[] suggestionButtons;

        void Awake()
        {
            if (null == SuggestionSetup.instance)
            {
                TextAsset textFile = (TextAsset)Resources.Load<TextAsset>("google-10000-english");
                string[] textArray = textFile.text.Split('\n');
                new SuggestionSetup(textArray);
            }

            suggestionButtons = GetComponentsInChildren<SuggestionButton>();
        }

        void Start()
        {
            keyboardManager.OnInputValueUpdated += Suggest;

            foreach (var suggestionButton in suggestionButtons)
            {
                suggestionButton.OnSuggestionClicked += SetSuggestionToCurrentInput;
            }
        }

        void Suggest(string word)
        {
            if (IsSkipSugestion()) return;
            string[] substrings = Regex.Split(word, pattern);
            if (substrings.Length > 0)
            {
                suggestions = SuggestionSetup.instance.GetSuggestions(substrings[substrings.Length - 1], maxNumberOfSuggestions);
                GenerateSuggestionsUI();
            }
        }

        bool IsSkipSugestion()
        {
#if UIKIT_TMP
            TMP_InputField target = KeyboardManager.Target;
            if (null != target && target.contentType == TMP_InputField.ContentType.Password)
#else
            InputField target = KeyboardManager.Target;
            if (null != target && target.contentType == InputField.ContentType.Password)
#endif
            {
                suggestions = new List<string>();
                GenerateSuggestionsUI();
                return true;
            }
            return false;
        }

        void GenerateSuggestionsUI()
        {
            for (int i = 0; i < suggestionButtons.Length; i++)
            {
                if (i >= suggestions.Count)
                {
                    suggestionButtons[i].SetSuggestion("");
                }
                else
                {
                    suggestionButtons[i].SetSuggestion(suggestions[i]);
                }
            }
        }

        void SetSuggestionToCurrentInput(string word)
        {
            if (word != "" && null != KeyboardManager.Target)
            {
                string targetText = KeyboardManager.Target.text;
                string[] substrings = Regex.Split(targetText, pattern);
                if (substrings.Length > 0)
                {
                    string result = Util.ReplaceLastOccurrence(targetText, substrings[substrings.Length - 1], word);
                    result = result.TrimEnd('\r', '\n'); // Escape Carriage return
                    keyboardManager.SetInput(result);
                }
            }
        }
    }
}
