using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PadCtrl : MonoBehaviour
{
    // 터치 여부
    bool isTouch = false;

    Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    void Update()
    {
        //왼쪽 마우스 버튼 클릭
        if (Input.GetButtonDown("Fire1"))
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
                hit.transform.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
                int padNum = int.Parse(tag.Substring(3));
                GameManager.padNum = padNum;
            }
        }
    }

    void TouchPad()
    {
        isTouch = true;

        anim.Play("aniTouch",-1,0.5f);
        //GameManager.padNum = padNum;
        //GameManager.state = GameManager.STATE.HIT;
    }
    void BasePad()
    {
        isTouch = false;

        anim.Play("aniPad", -1, 0.5f);
    }
}
