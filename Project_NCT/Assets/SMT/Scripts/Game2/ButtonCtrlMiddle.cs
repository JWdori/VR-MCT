using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonCtrlMiddle : MonoBehaviour
{
    public int isbuttonPressed = 0;

    static public void TouchButton()
    {
        Debug.Log("Middle Button Touch");
        // GameManager2.WhichButtonTouch = "M";
        // GameManager2.state = GameManager2.STATE.HIT;
        Game2Manager.WhichButtonTouch = "M";
        Game2Manager.state = Game2Manager.STATE.HIT;
    }
}
