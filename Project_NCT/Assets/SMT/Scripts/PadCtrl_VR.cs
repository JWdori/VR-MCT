using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

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
    public void TouchPad()
    {

        Debug.Log(tag);
        //��ġ�� �� �ǰ� ����


        if (tag.Substring(0, 3) == "pad")
        {
            //���� pad�� �ش��ϴ� tag��ȣ�� padNum���� ����
            int padNum = int.Parse(tag.Substring(3));
            //������ ������ padNum�� GameManager�� �ִ� padNum���� ����
            GameManager_VR.padNum = padNum;
            //���� ���
            if (GameManager_VR.arPads[GameManager_VR.step] == padNum && GameManager_VR.state == GameManager_VR.STATE.IDLE && GameManager_VR.isTouch)
            {
                //���� animation ����
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;
                //state�� HIT�� ����
                GameManager_VR.state = GameManager_VR.STATE.HIT;

            }
            //Ʋ�� ���
            else if (GameManager_VR.arPads[GameManager_VR.step] != padNum && GameManager_VR.state == GameManager_VR.STATE.IDLE && GameManager_VR.isTouch)
            {
                //Ʋ�� animation ����
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;
                //state�� WRONG���� ����
                GameManager_VR.state = GameManager_VR.STATE.WRONG;
            }
        }
    }
}
