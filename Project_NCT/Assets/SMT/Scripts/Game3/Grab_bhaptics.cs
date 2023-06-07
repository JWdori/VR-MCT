using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grab_bhaptics : MonoBehaviour
{
    static public bool bhaptics_grab = false;
    public GameObject handGrabInteractable; // HandGrabInteractable 오브젝트의 참조를 저장할 변수

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void PrintGrabbing()
    {
        bhaptics_grab = true;
        handGrabInteractable.SetActive(true);

    }

    public void PrintShot()
    {
        bhaptics_grab = false;
        Debug.Log("던지기~");
        //던질때 진동 추가



    }
}