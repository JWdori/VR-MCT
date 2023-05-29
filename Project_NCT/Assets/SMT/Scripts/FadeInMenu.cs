using UnityEngine;

public class FadeInMenu : MonoBehaviour
{
    public GameObject interactiveUIElements;

    private bool isActivated = false;

    public void ActivateInteractiveUI()
    {
        if (!isActivated)
        {
            isActivated = true;
            interactiveUIElements.SetActive(true);
        }
    }
}
