using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PadCtrl_VR : MonoBehaviour
{
    //animation�� ����ϱ� ����
    //aniTouch, aniPad, aniShow
    Animator anim;
    //ȿ���� ���
    private AudioSource audioSource;
    [SerializeField] private AudioClip[] clip;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    void Update()
    {
        //���� ���콺 ��ư Ŭ�� �� state�� IDLE�� �� �� isTouch�� true�� ��
        if (Input.GetMouseButtonDown(0) && GameManager.state == GameManager.STATE.IDLE && GameManager.isTouch)
        {
            CheckPad();
        }
    }

    //�е� üũ
    void CheckPad()
    {
        //����ڰ� Ŭ���ϴ� �� ����
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //��ġ�� �е� �ĺ�
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            string tag = hit.transform.tag;
            //����ڰ� ���� ������Ʈ�� tag�� pad�� �����ϸ� ����
            //��, Pad�� ������ �� ����
            if (tag.Substring(0, 3) == "pad")
            {
                //���� pad�� �ش��ϴ� tag��ȣ�� padNum���� ����
                int padNum = int.Parse(tag.Substring(3));
                //������ ������ padNum�� GameManager�� �ִ� padNum���� ����
                GameManager_VR.padNum = padNum;
                //���� ���
                if (GameManager.arPads[GameManager_VR.step] == padNum)
                {
                    //������ �� ȿ���� ����
                    audioSource.clip = clip[0];
                    audioSource.Play();
                    //������ �� aniTouch animation ����
                    hit.transform.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
                }
                //Ʋ�� ���
                else
                {
                    //Ʋ���� �� ȿ���� ����
                    audioSource.clip = clip[1];
                    audioSource.Play();
                    //Ʋ���� �� aniPad animation ����
                    hit.transform.SendMessage("WrongPad", SendMessageOptions.DontRequireReceiver);
                }
            }
        }
    }

    //���� �����ִ� animaion
    void ShowPad()
    {
        anim.Play("aniShow_VR", -1, 0.5f);
    }
    //���� ������ �� ȿ����
    void PlayAud()
    {
        audioSource.Play();
    }

    //���� ��� ����
    void TouchPad()
    {
        //��ġ�� �� �ǰ� ����
        GameManager.isTouch = false;

        //���� animation ����
        anim.Play("aniTouch_VR", -1, 0.5f);

        //state�� HIT�� ����
        GameManager.state = GameManager.STATE.HIT;
    }
    void WrongPad()
    {
        //��ġ�� �� �ǰ� ����
        GameManager.isTouch = false;

        //Ʋ�� animation ����
        anim.Play("aniPad_VR", -1, 0.5f);

        //state�� WRONG���� ����
        GameManager.state = GameManager.STATE.WRONG;
    }
}
