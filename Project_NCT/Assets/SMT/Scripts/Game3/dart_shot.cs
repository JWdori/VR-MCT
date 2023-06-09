using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class dart_shot : MonoBehaviour
{
    public Transform m_Tip = null;

    private void Update()
    {

    }

    private void OnTriggerStay(Collider collision)
    {
        if (collision.tag == "right_hand" & Grab_bhaptics.bhaptics_grab)
        {
            Debug.Log("Right Hand");
            BhapticsLibrary.Play(BhapticsEvent.DART_RIGHT);
        }
        else if (collision.tag == "left_hand" & Grab_bhaptics.bhaptics_grab)
        {
            Debug.Log("Left Hand");
            BhapticsLibrary.Play(BhapticsEvent.DART_LEFT);
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.tag == "right_hand")
        {
            Debug.Log("Right Hand Throw");
            BhapticsLibrary.Play(BhapticsEvent.DART_SHOT_RIGHT);
        }
        else if (collision.tag == "left_hand")
        {
            Debug.Log("Left Hand Throw");
            BhapticsLibrary.Play(BhapticsEvent.DART_SHOT_LEFT);
        }
    }
}
