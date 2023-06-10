using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_NOLMAL_Right : MonoBehaviour
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
    void ShowPad()
    {
        anim.Play("aniShow_VR", -1, 0.5f);
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
            GameManager_VR1.padNum1 = padNum;
            Debug.Log(tag);

            //쉬움 난이도
            if (isRight)
            {

                if (GameManager_VR1.arPads1[padNum - 1] & GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE & GameManager_VR1.isTouch1)
                {
                    Debug.Log("Correct");
                    CorrectAudio.play();
                    BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
                    //맞춘 animation 실행, 초록색
                    anim.Play("aniTouch_VR", -1, 0.5f);
                    GameManager_VR1.isTouch1 = false;
                    GameManager_VR1.arPads1[padNum - 1] = false;
                    GameManager_VR1.state1 = GameManager_VR1.STATE.HIT;
                }
                else if (!GameManager_VR1.arPads1[padNum - 1] && GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE && GameManager_VR1.isTouch1)
                {
                    WrongAudio.play();
                    Debug.Log("Wrong");
                    BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);
                    //틀린 animation 실행, 빨간색
                    anim.Play("aniPad_VR", -1, 0.5f);
                    GameManager_VR1.isTouch1 = false;

                    //state를 WRONG으로 설정
                    GameManager_VR1.state1 = GameManager_VR1.STATE.WRONG;
                }
            }
        }
    }
}
