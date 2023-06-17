using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grab_bhaptics : MonoBehaviour
{
    static public bool bhaptics_grab = false;
    static public bool bhaptics_throw = false;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (bhaptics_grab)
        {
            Debug.Log("잡는 중");
        }
    }

    public void PrintGrabbing()
    {
        bhaptics_grab = true;
        bhaptics_throw = false;
        Debug.Log("잡기");
    }

    public void PrintShot()
    {
        bhaptics_throw = true;
        bhaptics_grab = false;
        Debug.Log("던지기~");
        //던질때 진동 추가
    }

    
}