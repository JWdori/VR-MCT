using UnityEngine;
using VRUiKits.Utils;

public class ExampleOptionControl : MonoBehaviour
{
    OptionsManager optionsManager;

    void Start()
    {
        optionsManager = GetComponent<OptionsManager>();
        // Subscribing to OnOptionSelected method
        optionsManager.OnOptionSelected += SwitchInteractionMode;
    }

    void SwitchInteractionMode(int i)
    {
        Debug.Log("Current selected index: " + i);
        if (null == LaserInputModule.instance)
        {
            return;
        }

        if (i == 0) // Laser
        {
            LaserInputModule.instance.pointer = VRUiKits.Utils.Pointer.LeftHand;
        }
        else if (i == 1) // Gaze
        {
            LaserInputModule.instance.pointer = VRUiKits.Utils.Pointer.Eye;
        }
    }
}
