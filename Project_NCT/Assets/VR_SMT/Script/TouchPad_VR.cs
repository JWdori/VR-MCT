using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchPad_VR : MonoBehaviour
{

    static public bool isTouch = false;

    //animation�� ����ϱ� ����
    //aniTouch, aniPad, aniShow
    Animator anim;
    //ȿ���� ���
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

        //��ġ�� �� �ǰ� ����
        GameManager_VR.isTouch = false;

        //Ʋ�� animation ����
        anim.Play("aniPad_VR", -1, 0.5f);

        //state�� WRONG���� ����
        GameManager_VR.state = GameManager_VR.STATE.WRONG;
    }


}
