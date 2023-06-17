using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutoManager_3 : MonoBehaviour
{
    public GameObject p1;


    public GameObject exit;
    public GameObject menu;

    // Start is called before the first frame update
    void Start()
    {
        p1.SetActive(false);
        exit.SetActive(false);
    }

    //페이지를 나타내는 STATE
    public enum PAGE
    {
        PAGE1, PAGE2, PAGE3, PAGE4
    };

    public enum STATE
    {
        START, NEXT, PREV, IDLE, WAIT
    };

    static public PAGE page = PAGE.PAGE1;
    static public STATE state = STATE.WAIT;

    // Update is called once per frame
    public void Update()
    {
        //state에 따라 알맞은 환경 실행
        switch (state)
        {
            case STATE.START:
                StartCoroutine(Show());
                break;   
            case STATE.NEXT:
                StartCoroutine(NextPage());
                break;

            case STATE.PREV:
                StartCoroutine(PrevPage());
                break;
        }

    }

    IEnumerator Show()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.1f);
        menu.SetActive(false);
        p1.SetActive(true);
        exit.SetActive(true);
        page = PAGE.PAGE1;
        state = STATE.IDLE;
    }

    IEnumerator NextPage()
    {
        state = STATE.WAIT;
        if (page == PAGE.PAGE1)
        {
            p1.SetActive(false);
            yield return new WaitForSeconds(0.1f);
            page = PAGE.PAGE2;
        }
        state = STATE.IDLE;
    }

    IEnumerator PrevPage()
    {
        state = STATE.WAIT;
        if (page == PAGE.PAGE2)
        {
            yield return new WaitForSeconds(0.1f);
            p1.SetActive(true);
            page = PAGE.PAGE1;
            state = STATE.IDLE;
        }
        state = STATE.IDLE;
    }

}
