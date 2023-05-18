using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl_VR : MonoBehaviour
{
    //animation을 사용하기 위해
    //aniTouch, aniPad, aniShow
    Animator anim;
    //효과음 사용
    private AudioSource audioSource;
    [SerializeField] private AudioClip[] clip;

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

        Debug.Log(tag);

        //tag 이용
        if (tag.Substring(0, 3) == "pad")
        {
            //누른 pad의 해당하는 tag번호를 padNum으로 설정
            int padNum = int.Parse(tag.Substring(3));
            //위에서 설정한 padNum을 GameManager에 있는 padNum에도 설정
            GameManager_VR.padNum = padNum;
            //맞춘 경우, IDLE 상태에서만 누르는 게 가능
            if (GameManager_VR.arPads[GameManager_VR.step] == padNum && GameManager_VR.state == GameManager_VR.STATE.IDLE && GameManager_VR.isTouch)
            {
                CorrectAudio.play();

                //맞춘 animation 실행, 초록색
                anim.Play("aniTouch_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;

                //state를 HIT로 설정
                GameManager_VR.state = GameManager_VR.STATE.HIT;

            }
            //틀린 경우
            else if (GameManager_VR.arPads[GameManager_VR.step] != padNum && GameManager_VR.state == GameManager_VR.STATE.IDLE && GameManager_VR.isTouch)
            {
                WrongAudio.play();

                //틀린 animation 실행, 빨간색
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_VR.isTouch = false;

                //state를 WRONG으로 설정
                GameManager_VR.state = GameManager_VR.STATE.WRONG;
            }
        }
    }
}
