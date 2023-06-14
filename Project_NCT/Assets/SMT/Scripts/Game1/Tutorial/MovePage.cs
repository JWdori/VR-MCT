using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovePage : MonoBehaviour
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
        TutoManager.state = TutoManager.STATE.NEXT;
    }

    public void PrevPage()
    {
        TutoManager.state = TutoManager.STATE.PREV;
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

        //난이도 선택 창 비활성화
        Disappear_select.isShow = true;

        Disappear_ex.isHide = true;
    }
}
