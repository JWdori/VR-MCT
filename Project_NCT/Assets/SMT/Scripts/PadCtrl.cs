using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PadCtrl : MonoBehaviour
{
    // ��ġ ����
    bool isTouch = false;

    Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
    }

    void Update()
    {
        //���� ���콺 ��ư Ŭ��
        if (Input.GetButtonDown("Fire1"))
        {
            CheckPad();
        }
    }

    //�е� üũ
    void CheckPad()
    {
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //��ġ�� �е� �ĺ�
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
