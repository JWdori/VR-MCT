using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_HARD_Right : MonoBehaviour
{
    bool isRight = false;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("right_hand"))
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

        

        //tag �̿�
        if (tag.Substring(0, 3) == "pad")
        {
            //���� pad�� �ش��ϴ� tag��ȣ�� padNum���� ����
            int padNum = int.Parse(tag.Substring(3));
            //������ ������ padNum�� GameManager�� �ִ� padNum���� ����
            GameManager_VR2.padNum2 = padNum;
            Debug.Log(tag);

            //���� ���̵�
            if (isRight)
            {

                if (GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] == 2)
                {
                    Debug.Log("Correct");
                    CorrectAudio.play();
                    BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
                    //���� animation ����, �ʷϻ�
                    anim.Play("aniRight_VR", -1, 0.5f);
                    GameManager_VR2.isTouch2 = false;
                    GameManager_VR2.arPads[padNum - 1] = 0;
                    GameManager_VR2.state2 = GameManager_VR2.STATE.HIT;
                }
                else if (GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] != 2)
                {
                    WrongAudio.play();
                    Debug.Log("Wrong");
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
}