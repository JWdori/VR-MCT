using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrlLeft_Test : MonoBehaviour
{
    public int isbuttonPressed = 0;

    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            Game2Manager_TestMode.isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            Game2Manager_TestMode.isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            Game2Manager_TestMode.isLeft = false;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            Game2Manager_TestMode.isRight = false;
        }
    }

    static public void TouchButton()
    {
        Debug.Log("Left Button Touch");
        // GameManager2.WhichButtonTouch = "L";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager_TestMode.WhichButtonTouch = "L";
        Game2Manager_TestMode.state = Game2Manager_TestMode.STATE.HIT;
    }
}