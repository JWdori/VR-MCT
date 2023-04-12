using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.EventSystems;
#if UIKIT_TMP
using TMPro;
#endif

namespace VRUiKits.Utils
{
    public class InputFocusHelper : MonoBehaviour, ISelectHandler, IPointerClickHandler, IEndDragHandler
    {

#if UIKIT_TMP
        private TMP_InputField input;
#else
        private InputField input;
#endif
        int caretPosition, selectionAnchorPosition, selectionFocusPosition;
        float originColorAlpha;
        void Awake()
        {
#if UIKIT_TMP
            input = GetComponent<TMP_InputField>();
            input.onFocusSelectAll = false;
#else
            input = GetComponent<InputField>();
#endif

            Color color = input.selectionColor;
            originColorAlpha = color.a;
        }

        public void OnSelect(BaseEventData eventData)
        {
            /*
            Set keyboard target explicitly for some 3rd party packages which lost focus when
            user click on keyboard.
            */
            KeyboardManager.Target = input;
            if (KeyboardManager.lastTarget != input)
            {
                StartCoroutine(ActivateInputFieldWithCaret(true));
            }
            else
            {
                StartCoroutine(ActivateInputFieldWithCaret(false));
            }
        }

        public void OnPointerClick(PointerEventData pointerEventData)
        {
            StorePositionInfo();
        }

        public virtual void OnEndDrag(PointerEventData eventData)
        {
            StorePositionInfo();
        }

        IEnumerator ActivateInputFieldWithCaret(bool isMoveCaretToEnd)
        {
            SetSelectionAlpha(0);
            yield return new WaitForEndOfFrame();
#if !UIKIT_TMP
            input.MoveTextEnd(false); // Trick to de-highlight the selection area
#endif
            if (!isMoveCaretToEnd)
            {
                SetPosition();
            }

            SetSelectionAlpha(originColorAlpha);
        }

        public void ForceActivate()
        {
            input.ActivateInputField();
        }

        public void StorePositionInfo()
        {
            caretPosition = input.caretPosition;
            selectionAnchorPosition = input.selectionAnchorPosition;
            selectionFocusPosition = input.selectionFocusPosition;
        }

        void SetPosition()
        {
            input.caretPosition = caretPosition;
            input.selectionAnchorPosition = selectionAnchorPosition;
            input.selectionFocusPosition = selectionFocusPosition;
        }

        void SetSelectionAlpha(float alpha)
        {
            Color color = input.selectionColor;
            color.a = alpha;
            input.selectionColor = color;
        }
    }
}