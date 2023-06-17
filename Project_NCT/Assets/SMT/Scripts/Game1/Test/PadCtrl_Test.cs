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

    static public string[] Color1 = new string[3] { "aniBlue", "aniIndigo", "aniGreen"};
    static public string[] Color2 = new string[3] { "aniOrange", "aniYellow", "aniPurple"};
    static public string ColorL;
    static public string ColorR;
    static public int order;
    static public int side;

    static public IEnumerator PadColor()
    {
        side = Random.Range(0, 2);
        if (side == 0)
        {
            order = Random.Range(0, 3);
            ColorL = Color1[order];
            ColorR = Color2[order];
            Debug.Log("L" + ColorL + "R" + ColorR);
            yield return new WaitForSeconds(0.1f);
        }
        else
        {
            order = Random.Range(0, 3);
            ColorL = Color2[order];
            ColorR = Color1[order];
            Debug.Log("L" + ColorL + "R" + ColorR);
            yield return new WaitForSeconds(0.1f);
        }
    }

    void ShowPadLeft()
    {
        anim.Play(ColorL, -1, 0.5f);
    }
    void ShowPadRight()
    {
        anim.Play(ColorR, -1, 0.5f);
    }


    //문제 보여줄 때 효과음
    //GameManager에서 사용
    void PlayAudTest()
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
            GameManager_Test.padNum = padNum;


            //테스트


            //맞춘 경우
            if (isLeft & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] == 1)
            {
                
                //Debug.Log("LC" + Collision_HandL.isLeft + GameManager_VR2.arPadsL[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                CorrectAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);

                //맞춘 animation 실행, 초록색
                anim.Play(ColorL, -1, 0.5f);
                GameManager_Test.isTouch = false;
                GameManager_Test.arPads[padNum - 1] = 0;


                //state를 HIT로 설정
                GameManager_Test.state = GameManager_Test.STATE.HIT;
            }

            //맞춘 경우
            else if (isRight & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] == 2)
            {

                
                //Debug.Log("RC" + Collision_HandR.isRight + GameManager_VR2.arPadsR[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                CorrectAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);

                //맞춘 animation 실행, 초록색
                anim.Play(ColorR, -1, 0.5f);
                GameManager_Test.isTouch = false;
                GameManager_Test.arPads[padNum - 1] = 0;


                //state를 HIT로 설정
                GameManager_Test.state = GameManager_Test.STATE.HIT;
            }

            //틀린 경우
            else if (isLeft & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] != 1)
            {
                
                //Debug.Log("LW" + Collision_HandL.isLeft + GameManager_VR2.arPadsL[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                WrongAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);

                //틀린 animation 실행, 빨간색
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_Test.isTouch = false;


                //state를 WRONG으로 설정
                GameManager_Test.state = GameManager_Test.STATE.WRONG;
            }

            
            

            //틀린 경우
            else if (isRight & GameManager_Test.state == GameManager_Test.STATE.IDLE & GameManager_Test.isTouch & GameManager_Test.arPads[padNum - 1] != 2)
            {
                    
                //Debug.Log("RW" + Collision_HandR.isRight + GameManager_VR2.arPadsR[padNum - 1] + (padNum - 1));
                isLeft = false;
                isRight = false;
                WrongAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);

                //틀린 animation 실행, 빨간색
                anim.Play("aniPad_VR", -1, 0.5f);
                GameManager_Test.isTouch = false;
                  

                //state를 WRONG으로 설정
                GameManager_Test.state = GameManager_Test.STATE.WRONG;
            }
            
        }
    }
}
