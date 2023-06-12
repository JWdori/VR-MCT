using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrlMiddle_Test : MonoBehaviour
{
    public int isbuttonPressed = 0;

    static public void TouchButton()
    {
        Debug.Log("Middle Button Touch");
        // GameManager2.WhichButtonTouch = "M";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager_TestMode.WhichButtonTouch = "M";
        Game2Manager_TestMode.state = Game2Manager_TestMode.STATE.HIT;
    }
}
