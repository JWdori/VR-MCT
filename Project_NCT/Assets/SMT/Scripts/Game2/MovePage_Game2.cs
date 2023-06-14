using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePage_Game2 : MonoBehaviour
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
    public GameObject p2;
    public GameObject p3;
    public GameObject p4;
    public GameObject button_n;
    public GameObject button_p;
    public GameObject exit;
    public GameObject menu;

    public void NextPage()
    {
        TutoManager2.state = TutoManager2.STATE.NEXT;
    }

    public void PrevPage()
    {
        TutoManager2.state = TutoManager2.STATE.PREV;
    }

    public void ExitPage()
    {
        p1.SetActive(false);
        p2.SetActive(false);
        p3.SetActive(false);
        p4.SetActive(false);
        button_n.SetActive(false);
        button_p.SetActive(false);
        exit.SetActive(false);
        menu.SetActive(true);

        //���̵� ���� â ��Ȱ��ȭ
        Disappear_selectMenu.isShow = true;

        Disappear_ex2.isHide = true;
    }
}
