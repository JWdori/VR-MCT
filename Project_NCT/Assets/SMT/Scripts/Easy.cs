using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Easy : MonoBehaviour
{
    public void EasyScene()
    {
        GameManager.padCnt = 9;
        Application.LoadLevel("SMT");
    }
}
