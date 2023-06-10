using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_HARD_Left : MonoBehaviour
{
    bool isLeft = false;
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = false;
        }
    }
    //animation을 사용하기 위해
    //aniTouch, aniPad, aniShow
    Animator anim;
    //효과음 사용
    private AudioSource audioSource;
    //[SerializeField] private AudioClip[] clip;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    //문제 보여주는 animaion
    //GameManager에서 사용
    //void ShowPad()
    //{
    //    anim.Play("aniShow_VR", -1, 0.5f);
    //}

    //Left 하늘색
    void ShowPadLeft()
    {
        anim.Play("aniLeft_VR", -1, 0.5f);
    }
    //Right 핑크색
    void ShowPadRight()
    {
        anim.Play("aniRight_VR", -1, 0.5f);
    }

    //문제 보여줄 때 효과음
    //GameManager에서 사용
    void PlayAud()
    {
        audioSource.Play();
    }

    //터치했을 때
    public void TouchPad()
    {

        

        //tag 이용
        if (tag.Substring(0, 3) == "pad")
        {
            //누른 pad의 해당하는 tag번호를 padNum으로 설정
            int padNum = int.Parse(tag.Substring(3));
            //위에서 설정한 padNum을 GameManager에 있는 padNum에도 설정
            GameManager_VR2.padNum2 = padNum;
            Debug.Log(tag);

            //쉬움 난이도
            if (isLeft)
            {

                if (GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] == 1)
                {
                    Debug.Log("Correct");
                    CorrectAudio.play();
                    BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
                    //맞춘 animation 실행, 초록색
                    anim.Play("aniLeft_VR", -1, 0.5f);
                    GameManager_VR2.isTouch2 = false;
                    GameManager_VR2.arPads[padNum - 1] = 0;
                    GameManager_VR2.state2 = GameManager_VR2.STATE.HIT;
                }
                else if (GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2 & GameManager_VR2.arPads[padNum - 1] != 1)
                {
                    WrongAudio.play();
                    Debug.Log("Wrong");
                    BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);
                    //틀린 animation 실행, 빨간색
                    anim.Play("aniPad_VR", -1, 0.5f);
                    GameManager_VR2.isTouch2 = false;

                    //state를 WRONG으로 설정
                    GameManager_VR2.state2 = GameManager_VR2.STATE.WRONG;
                }
            }
        }
    }
}
