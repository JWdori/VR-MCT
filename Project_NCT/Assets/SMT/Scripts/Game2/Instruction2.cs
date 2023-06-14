using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instruction2 : MonoBehaviour
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
        Disappear_selectMenu.isHide = true;

        Disappear_ex2.isShow = true;

        TutoManager2.state = TutoManager2.STATE.START;

    }
        
}
