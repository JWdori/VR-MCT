using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_Test : MonoBehaviour
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
            GameManager_Test.padNum = padNum;


            //�׽�Ʈ


            //���� ���
            if (isLeft & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] == 1)
            {
                
                //Debug.Log("LC" + Collision_HandL.isLeft + GameManager_VR2.arPadsL[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                CorrectAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniLeft_VR", -1, 0.5f);
                GameManager_Test.isTouch = false;
                GameManager_Test.arPads[padNum - 1] = 0;


                //state�� HIT�� ����
                GameManager_Test.state = GameManager_Test.STATE.HIT;
            }

            //���� ���
            else if (isRight & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] == 2)
            {

                
                //Debug.Log("RC" + Collision_HandR.isRight + GameManager_VR2.arPadsR[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                CorrectAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);

                //���� animation ����, �ʷϻ�
                anim.Play("aniRight_VR", -1, 0.5f);
                GameManager_Test.isTouch = false;
                GameManager_Test.arPads[padNum - 1] = 0;


                //state�� HIT�� ����
                GameManager_Test.state = GameManager_Test.STATE.HIT;
            }

            //Ʋ�� ���
            else if (isLeft & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] != 1)
            {
                
                //Debug.Log("LW" + Collision_HandL.isLeft + GameManager_VR2.arPadsL[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                WrongAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_Test.isTouch = false;


                //state�� WRONG���� ����
                GameManager_Test.state = GameManager_Test.STATE.WRONG;
            }

            
            

            //Ʋ�� ���
            else if (isRight & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] != 2)
            {
                    
                //Debug.Log("RW" + Collision_HandR.isRight + GameManager_VR2.arPadsR[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                WrongAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);

                //Ʋ�� animation ����, ������
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_Test.isTouch = false;
                  

                //state�� WRONG���� ����
                GameManager_Test.state = GameManager_Test.STATE.WRONG;
            }
            
        }
    }
}
