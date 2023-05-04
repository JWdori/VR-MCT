using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PadCtrl : MonoBehaviour
{

    Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    void Update()
    {
        //왼쪽 마우스 버튼 클릭
        if (Input.GetMouseButtonDown(0) && GameManager.state == GameManager.STATE.IDLE)
        {
            CheckPad();
        }
    }

    //패드 체크
    void CheckPad()
    {
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //터치한 패드 식별
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            string tag = hit.transform.tag;
            if (tag.Substring(0,3)=="pad")
            {
                //Debug.Log(tag);
                int padNum = int.Parse(tag.Substring(3));
                GameManager.padNum = padNum;   
                if (GameManager.arPads[GameManager.step] == padNum)
                {
                    hit.transform.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
                }
                else
                {
                    hit.transform.SendMessage("WrongPad", SendMessageOptions.DontRequireReceiver);
                }
            }
        }
    }

    void ShowPad()
    {
        anim.Play("aniTouch", -1, 0.5f);
    }

    void TouchPad()
    {
        if (GameManager.isTouch) return;
        GameManager.isTouch = true;

        anim.Play("aniTouch",-1,0.5f);

        GameManager.state = GameManager.STATE.HIT;
    }
    void WrongPad()
    {
        if (GameManager.isTouch) return;
        GameManager.isTouch = true;
        anim.Play("aniPad", -1, 0.5f);

        GameManager.state = GameManager.STATE.WRONG;
    }
}
