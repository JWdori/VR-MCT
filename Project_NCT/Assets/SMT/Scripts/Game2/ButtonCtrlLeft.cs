using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrlLeft : MonoBehaviour
{
    public int isbuttonPressed = 0;

    static public void TouchButton()
    {
        Debug.Log("Left Button Touch");
        // GameManager2.WhichButtonTouch = "L";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager.WhichButtonTouch = "L";
        Game2Manager.state = Game2Manager.STATE.HIT;
    }
}