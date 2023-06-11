using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class ButtonCtrlMiddle : MonoBehaviour
{
    public int isbuttonPressed = 0;

    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            Game2Manager.isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            Game2Manager.isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            Game2Manager.isLeft = false;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            Game2Manager.isRight = false;
        }
    }

    static public void TouchButton()
    {
        Debug.Log("Middle Button Touch");
        // GameManager2.WhichButtonTouch = "M";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager.WhichButtonTouch = "M";
        Game2Manager.state = Game2Manager.STATE.HIT;
    }
}
