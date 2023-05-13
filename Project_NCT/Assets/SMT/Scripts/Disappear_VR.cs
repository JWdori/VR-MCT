using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Disappear_VR : MonoBehaviour
{
    static public bool isShow = false;
    void Update()
    {
        if (isShow)
        {
            gameObject.SetActive(false);
            isShow = false;
        }
    }
}
