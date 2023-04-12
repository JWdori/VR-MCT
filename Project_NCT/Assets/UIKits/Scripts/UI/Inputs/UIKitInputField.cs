using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class UIKitInputField : MonoBehaviour, ISelectHandler, IPointerClickHandler, IDeselectHandler
    {
        public enum ContentType
        {
            Standard,
            Password
        }

        public RectTransform wrapper;
        public RectTransform m_textTransform;
        public RectTransform m_placeholderTransform;
        public RectTransform m_caretTransform;
        public string text;
        public int characterLimit = 0;
        public ContentType contentType;

        [Range(0f, 4f)]
        public float caretBlinkRate = 0.85f;
        private float maxW_textComponent;
        private string displayedText;
        private string prevText = "";
#if UIKIT_TMP
        TMP_Text textComponent;
        TMP_Text placeholder;
        TMP_Text caretText;
#else
        Text textComponent;
        Text caretText;
        Text placeholder;
#endif

        void Awake()
        {
            // 5.0f is the min width set to caret.
            maxW_textComponent = wrapper.rect.width - 5.0f;
#if UIKIT_TMP
            textComponent = m_textTransform.GetComponent<TMP_Text>();
            placeholder = m_placeholderTransform.GetComponent<TMP_Text>();
            caretText = m_caretTransform.GetComponent<TMP_Text>();
#else
            textComponent = m_textTransform.GetComponent<Text>();
            placeholder = m_placeholderTransform.GetComponent<Text>();
            caretText = m_caretTransform.GetComponent<Text>();
#endif
        }

        public void OnSelect(BaseEventData eventData)
        {
            /*
            Set keyboard target explicitly for some 3rd party packages which lost focus when
            user click on keyboard.
            */
            MobileKeyboardManager.Target = this;
            // Trick: Set the caret text to empty so the caret blink won't be invisible at start
            ForceCaretUpdate();
            m_caretTransform.gameObject.SetActive(true);
            StartCoroutine("BlinkCaret");
        }

        public void OnPointerClick(PointerEventData pointerEventData)
        {
            EventSystem.current.SetSelectedGameObject(this.gameObject);
        }

        public void OnDeselect(BaseEventData eventData)
        {
            m_caretTransform.gameObject.SetActive(false);
            StopCoroutine("BlinkCaret");
        }

        // Trick: Set caret text to empty to update the next caret position
        public void ForceCaretUpdate()
        {
            caretText.text = "";
        }

        void LateUpdate()
        {
            // Limit the character length
            if (characterLimit != 0 && text.Length > characterLimit)
            {
                text = text.Substring(0, characterLimit);
            }

            // Check if character is empty
            if (text == "")
            {
                placeholder.gameObject.SetActive(true);
            }
            else
            {
                placeholder.gameObject.SetActive(false);
            }

            if (prevText == text)
            {
                return;
            }

            if (contentType == ContentType.Standard)
            {
                CalculateLengthOfText(text);
            }
            else if (contentType == ContentType.Password)
            {
                displayedText = new string('*', text.Length);
            }

            // Update text field to displayed text
            textComponent.text = displayedText;
            prevText = text;
        }

#if UIKIT_TMP
        void CalculateLengthOfText(string text)
        {
            displayedText = text;
            /*
             * Replace space with \u00A0 sicne TMP preferred width
             * does not take space into account.
             */
            displayedText = displayedText.Replace(' ', '\u00A0');
            textComponent.text = displayedText;

            // Trim text until it fit the maxW_textComponent
            while(textComponent.preferredWidth >= maxW_textComponent) {
                displayedText = displayedText.Substring(1);
                textComponent.text = displayedText;
            }

        }
#else
        void CalculateLengthOfText(string text)
        {
            int totalWidth = 0;
            displayedText = "";

            if (text != "")
            {
                Font font = textComponent.font;
                CharacterInfo characterInfo = new CharacterInfo();
                font.RequestCharactersInTexture(text, textComponent.fontSize, textComponent.fontStyle);

                char[] arr = text.ToCharArray();
                for (int i = text.Length - 1; i >= 0; i--)
                {
                    font.GetCharacterInfo(arr[i], out characterInfo, textComponent.fontSize, textComponent.fontStyle);

                    totalWidth += characterInfo.advance;
                    if (totalWidth <= maxW_textComponent)
                    {
                        displayedText = arr[i] + displayedText;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
#endif

        IEnumerator BlinkCaret()
        {
            while (true)
            {
                if (caretText.text == "")
                {
                    caretText.text = "|";
                }
                else
                {
                    caretText.text = "";
                }
                yield return new WaitForSeconds(caretBlinkRate);
            }
        }
    }
}
