using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePage_3 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public GameObject p1;
    public GameObject exit;
    public GameObject menu;

    public void NextPage()
    {
        TutoManager_3.state = TutoManager_3.STATE.NEXT;
    }

    public void PrevPage()
    {
        TutoManager_3.state = TutoManager_3.STATE.PREV;
    }

    public void ExitPage()
    {
        p1.SetActive(false);
        exit.SetActive(false);
        menu.SetActive(true);

        //���̵� ���� â ��Ȱ��ȭ
        Disappear_select3.isShow = true;
        Disappear_ex_3.isHide = true;
    }
}
