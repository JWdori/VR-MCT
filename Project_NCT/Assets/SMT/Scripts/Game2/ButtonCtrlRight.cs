using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrlRight : MonoBehaviour
{
    public int isbuttonPressed = 0;

    static public void TouchButton()
    {
        Debug.Log("Right Button Touch");
        // GameManager2.WhichButtonTouch = "R";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager.WhichButtonTouch = "R";
        Game2Manager.state = Game2Manager.STATE.HIT;
    }
}
