using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instruction_3 : MonoBehaviour
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
        //���̵� ���� â ��Ȱ��ȭ
        Disappear_select3.isHide = true;
        Disappear_ex_3.isShow = true;
        TutoManager_3.state = TutoManager_3.STATE.START;

    }
        
}
