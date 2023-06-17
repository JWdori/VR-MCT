using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class ButtonCtrlLeft : MonoBehaviour
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
        Debug.Log("Left Button Touch");
        // GameManager2.WhichButtonTouch = "L";
        // GameManager2.state = GameManager2.STATE.HIT;

        //BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
        //BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
        Game2Manager.WhichButtonTouch = "L";
        Game2Manager.state = Game2Manager.STATE.HIT;
    }
}