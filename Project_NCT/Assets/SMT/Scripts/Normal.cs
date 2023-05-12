using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Bhaptics.SDK2;


// Level Normal 모드
// 4X4 Pad
public class Normal : MonoBehaviour
{
    public AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public void NormalScene()
    {
        //levelNum이 2이면 Normal
        GameManager.levelNum = 2;

        //Normal은 총 16개 pad, 4X4
        GameManager.padCnt = 16;

        //효과음 실행
        StartCoroutine(PlayAudio());
    }

    //Normal 버튼 눌렀을 때 효과음
    IEnumerator PlayAudio()
    {

        audioSource.Play();
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_LEFT);
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_RIGHT);

        yield return new WaitForSeconds(1f);

        SceneManager.LoadScene("SMT");
    }
}
