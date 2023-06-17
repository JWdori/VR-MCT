using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_VR : MonoBehaviour
{
    bool isLeft = false;
    bool isRight = false;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = true;
        }
        else if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = false;
        }
        else if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = false;
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

    //Left �ϴû�
    void ShowPadLeft()
    {
        anim.Play("aniLeft_VR", -1, 0.5f);
    }
    //Right ��ũ��
    void ShowPadRight()
    {
        anim.Play("aniRight_VR", -1, 0.5f);
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

        Debug.Log(tag);

        //tag �̿�
        if (tag.Substring(0, 3) == "pad")
        {
            //���� pad�� �ش��ϴ� tag��ȣ�� padNum���� ����
            int padNum = int.Parse(tag.Substring(3));
            //������ ������ padNum�� GameManager�� �ִ� padNum���� ����
            GameManager_VR.padNum = padNum;
            GameManager_VR1.padNum1 = padNum;
            GameManager_VR2.padNum2 = padNum;


            //���� ���̵�


            //���� ���, IDLE ���¿����� ������ �� ����
            if (isLeft & GameManager_VR.arPads[GameManager_VR.step] == padNum & GameManager_VR.state == GameManager_VR.STATE.IDLE & GameManager_VR.isTouch)
            {
                CorrectAudio.play();


                isLeft = false;
                Debug.Log("Left");
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;


                //state�� HIT�� ����
                GameManager_VR.state = GameManager_VR.STATE.HIT;
            }
            else if (isRight & GameManager_VR.arPads[GameManager_VR.step] == padNum & GameManager_VR.state == GameManager_VR.STATE.IDLE & GameManager_VR.isTouch)
            {
                CorrectAudio.play();

                isRight = false;
                Debug.Log("Right");
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);


                //���� animation ����, �ʷϻ�
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;


                //state�� HIT�� ����
                GameManager_VR.state = GameManager_VR.STATE.HIT;

            }
            //Ʋ�� ���
            else if (isLeft & GameManager_VR.arPads[GameManager_VR.step] != padNum && GameManager_VR.state == GameManager_VR.STATE.IDLE && GameManager_VR.isTouch)
            {
                WrongAudio.play();

                isLeft = false;
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;

                //state�� WRONG���� ����
                GameManager_VR.state = GameManager_VR.STATE.WRONG;
            }

            else if (isRight & GameManager_VR.arPads[GameManager_VR.step] != padNum && GameManager_VR.state == GameManager_VR.STATE.IDLE && GameManager_VR.isTouch)
            {
                WrongAudio.play();

                isRight = false;
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);


                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;

                //state�� WRONG���� ����
                GameManager_VR.state = GameManager_VR.STATE.WRONG;
            }


            // ���� ���̵�


            //���� ���
            else if (isLeft & GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                CorrectAudio.play();
                isLeft = false;
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;
                GameManager_VR1.arPads1[padNum - 1] = false;

                //state�� HIT�� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.HIT;
            }

            else if (isRight & GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                CorrectAudio.play();

                isRight = false;
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;
                GameManager_VR1.arPads1[padNum - 1] = false;

                //state�� HIT�� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.HIT;

            }
            //Ʋ�� ���
            else if (isLeft & !GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                WrongAudio.play();

                isLeft = false;
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;

                //state�� WRONG���� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.WRONG;
            }
            else if (isRight & !GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
            {
                WrongAudio.play();

                isRight = false;
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);
            

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR1.isTouch1 = false;

                //state�� WRONG���� ����
                GameManager_VR1.state1 = GameManager_VR1.STATE.WRONG;
            }


            //����� ���̵�


            //���� ���
            else if (isLeft & GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] == 1)
            {
                
                //Debug.Log("LC" + Collision_HandL.isLeft + GameManager_VR2.arPadsL[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                CorrectAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniLeft_VR", -1, 0.5f);
                GameManager_VR2.isTouch2 = false;
                GameManager_VR2.arPads[padNum - 1] = 0;


                //state�� HIT�� ����
                GameManager_VR2.state2 = GameManager_VR2.STATE.HIT;
            }

            //���� ���
            else if (isRight & GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] == 2)
            {

                
                //Debug.Log("RC" + Collision_HandR.isRight + GameManager_VR2.arPadsR[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                CorrectAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniRight_VR", -1, 0.5f);
                GameManager_VR2.isTouch2 = false;
                GameManager_VR2.arPads[padNum - 1] = 0;


                //state�� HIT�� ����
                GameManager_VR2.state2 = GameManager_VR2.STATE.HIT;
            }

            //Ʋ�� ���
            else if (isLeft & GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] != 1)
            {
                
                //Debug.Log("LW" + Collision_HandL.isLeft + GameManager_VR2.arPadsL[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                WrongAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR2.isTouch2 = false;


                //state�� WRONG���� ����
                GameManager_VR2.state2 = GameManager_VR2.STATE.WRONG;
            }

            
            

            //Ʋ�� ���
            else if (isRight & GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] != 2)
            {
                    
                //Debug.Log("RW" + Collision_HandR.isRight + GameManager_VR2.arPadsR[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                WrongAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR2.isTouch2 = false;
                  

                //state�� WRONG���� ����
                GameManager_VR2.state2 = GameManager_VR2.STATE.WRONG;
            }
            
        }
    }
}
