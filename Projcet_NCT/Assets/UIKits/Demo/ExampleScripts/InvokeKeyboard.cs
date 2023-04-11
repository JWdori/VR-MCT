using UnityEngine;
using UnityEngine.EventSystems;

public class InvokeKeyboard : MonoBehaviour, ISelectHandler, IDeselectHandler
{
    public GameObject keyboard;
    public bool hideKeyboardOnDeslect;

    public void OnSelect(BaseEventData eventData)
    {
        if (!keyboard.activeSelf)
        {
            keyboard.SetActive(true);
        }
    }

    public void OnDeselect(BaseEventData eventData)
    {
        if (hideKeyboardOnDeslect && keyboard.activeSelf)
        {
            keyboard.SetActive(false);
        }
    }
}
