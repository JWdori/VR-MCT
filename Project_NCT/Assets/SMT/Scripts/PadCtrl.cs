using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class PadCtrl : MonoBehaviour
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

    void Update()
    {
        //왼쪽 마우스 버튼 클릭 및 state가 IDLE일 때 및 isTouch가 true일 때
        if (Input.GetMouseButtonDown(0) && GameManager.state == GameManager.STATE.IDLE && GameManager.isTouch)
        {
            CheckPadL();
        }
        //오른쪽 마우스 버튼 클릭 및 state가 IDLE일 때 및 isTouch가 true일 때
        if (Input.GetMouseButtonDown(1) && GameManager.state == GameManager.STATE.IDLE && GameManager.isTouch)
        {
            CheckPadR();
        }

    }

    //패드 체크
    void CheckPadL()
    {
        //사용자가 클릭하는 곳 추적
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //터치한 패드 식별
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            string tag = hit.transform.tag;
            //사용자가 누른 오브젝트의 tag가 pad로 시작하면 실행
            //즉, Pad를 눌렀을 때 실행
            if (tag.Substring(0,3)=="pad")
            {
                //누른 pad의 해당하는 tag번호를 padNum으로 설정
                int padNum = int.Parse(tag.Substring(3));
                //위에서 설정한 padNum을 GameManager에 있는 padNum에도 설정
                GameManager.padNum = padNum;   
                //맞춘 경우
                if (GameManager.arPads[GameManager.step] == padNum)
                {
                    //맞췄을 때 효과음 실행
                    audioSource.clip = clip[0];
                    audioSource.Play();
                    //맞췄을 때 aniTouch animation 실행
                    hit.transform.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
                }
                //틀린 경우
                else
                {
                    //틀렸을 때 효과음 실행
                    audioSource.clip = clip[1];
                    audioSource.Play();
                    //틀렸을 때 aniPad animation 실행
                    hit.transform.SendMessage("WrongPad", SendMessageOptions.DontRequireReceiver);
                }
            }
        }
    }

    //패드 체크
    void CheckPadR()
    {
        //사용자가 클릭하는 곳 추적
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //터치한 패드 식별
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            string tag = hit.transform.tag;
            //사용자가 누른 오브젝트의 tag가 pad로 시작하면 실행
            //즉, Pad를 눌렀을 때 실행
            if (tag.Substring(0, 3) == "pad")
            {
                //누른 pad의 해당하는 tag번호를 padNum으로 설정
                int padNum = int.Parse(tag.Substring(3));
                //위에서 설정한 padNum을 GameManager에 있는 padNum에도 설정
                GameManager.padNum = padNum;
                //맞춘 경우
                if (GameManager.arPads[GameManager.step] == padNum)
                {
                    //맞췄을 때 효과음 실행
                    audioSource.clip = clip[0];
                    audioSource.Play();
                    //맞췄을 때 aniTouch animation 실행
                    hit.transform.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
                }
                //틀린 경우
                else
                {
                    //틀렸을 때 효과음 실행
                    audioSource.clip = clip[1];
                    audioSource.Play();
                    //틀렸을 때 aniPad animation 실행
                    hit.transform.SendMessage("WrongPad", SendMessageOptions.DontRequireReceiver);
                }
            }
        }
    }

    //문제 보여주는 animaion
    void ShowPad()
    {
        anim.Play("aniShow", -1, 0.5f);        
    }
    //문제 보여줄 때 효과음
    void PlayAud()
    {
        audioSource.Play();
    }

    //맞춘 경우 실행
    void TouchPad()
    {
        //터치가 안 되게 설정
        GameManager.isTouch = false;

        //맞춘 animation 실행
        anim.Play("aniTouch",-1,0.5f);
        
        //state를 HIT로 설정
        GameManager.state = GameManager.STATE.HIT;
    }
    void WrongPad()
    {
        //터치가 안 되게 설정
        GameManager.isTouch = false;

        //틀린 animation 실행
        anim.Play("aniPad", -1, 0.5f);

        //state를 WRONG으로 설정
        GameManager.state = GameManager.STATE.WRONG;
    }
}
