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
        //난이도 선택 창 비활성화
        Disappear_select.isShow = true;

        Disappear_ex.isHide = true;
    }
}
