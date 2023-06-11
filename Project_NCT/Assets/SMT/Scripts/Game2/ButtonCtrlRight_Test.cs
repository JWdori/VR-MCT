using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrlRight_Test : MonoBehaviour
{
    public int isbuttonPressed = 0;

    static public void TouchButton()
    {
        Debug.Log("Right Button Touch");
        // GameManager2.WhichButtonTouch = "R";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager_TestMode.WhichButtonTouch = "R";
        Game2Manager_TestMode.state = Game2Manager_TestMode.STATE.HIT;
    }
}
