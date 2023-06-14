using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_NOLMAL : MonoBehaviour
{
    bool isLeft = false;
    bool isRight = false;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = false;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = false;
        }
    }
    //animation�� ����ϱ� ����
    //aniTouch, aniPad, aniShow
    Animator anim;
    //ȿ���� ���
    private AudioSource audioSource;
    //[SerializeField] private AudioClip[] clip;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    //���� �����ִ� animaion
    //GameManager���� ���
    void ShowPad()
    {
        anim.Play("aniShow_VR", -1, 0.5f);
    }

    //���� ������ �� ȿ����
    //GameManager���� ���
    void PlayAud()
    {
        audioSource.Play();
    }

    //��ġ���� ��
    public void TouchPad()
    {

        

        //tag �̿�
        if (tag.Substring(0, 3) == "pad")
        {
            //���� pad�� �ش��ϴ� tag��ȣ�� padNum���� ����
            int padNum = int.Parse(tag.Substring(3));
            //������ ������ padNum�� GameManager�� �ִ� padNum���� ����
            GameManager_VR1.padNum1 = padNum;
            Debug.Log(tag);

            // ���� ���̵�


                //���� ���
            if (isRight & GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                CorrectAudio.play();
                isLeft = false;
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;
                GameManager_VR1.arPads1[padNum - 1] = false;

                //state�� HIT�� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.HIT;
            }

            else if (isLeft & GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                CorrectAudio.play();

                isRight = false;
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;
                GameManager_VR1.arPads1[padNum - 1] = false;

                //state�� HIT�� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.HIT;

            }
            //Ʋ�� ���
            else if (isRight & !GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                WrongAudio.play();

                isLeft = false;
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;

                //state�� WRONG���� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.WRONG;
            }
            else if (isLeft & !GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                WrongAudio.play();

                isRight = false;
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);


                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;

                //state�� WRONG���� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.WRONG;
            }
        }
    }
}
