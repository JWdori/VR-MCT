using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchPad_VR : MonoBehaviour
{

    static public bool isTouch = false;

    //animation을 사용하기 위해
    //aniTouch, aniPad, aniShow
    Animator anim;
    //효과음 사용
    private AudioSource audioSource;
    [SerializeField] private AudioClip[] clip;

    // Start is called before the first frame update
    void Start()
    {
        //anim = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    public void Touch()
    {
        Debug.Log("A");

        //터치가 안 되게 설정
        GameManager_VR.isTouch = false;

        //틀린 animation 실행
        anim.Play("aniPad_VR", -1, 0.5f);

        //state를 WRONG으로 설정
        GameManager_VR.state = GameManager_VR.STATE.WRONG;
    }


}
