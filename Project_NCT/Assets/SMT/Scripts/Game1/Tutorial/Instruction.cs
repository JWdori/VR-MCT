using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instruction : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShowInstruction()
    {
        //난이도 선택 창 비활성화
        Disappear_select.isHide = true;
        Disappear_ex.isShow = true;
        TutoManager.state = TutoManager.STATE.START;

    }
        
}
