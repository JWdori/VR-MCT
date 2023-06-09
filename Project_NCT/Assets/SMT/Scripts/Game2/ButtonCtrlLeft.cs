using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class ButtonCtrlLeft : MonoBehaviour
{
    public int isbuttonPressed = 0;

    bool isLeft = false;
    bool isRight = false;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = false;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = false;
        }
    }

    static public void TouchButton()
    {
        Debug.Log("Left Button Touch");
        // GameManager2.WhichButtonTouch = "L";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager.WhichButtonTouch = "L";
        Game2Manager.state = Game2Manager.STATE.HIT;
    }
}