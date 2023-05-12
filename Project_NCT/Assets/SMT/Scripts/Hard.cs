using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Bhaptics.SDK2;


// Level Hard 모드
// 5X5 Pad
public class Hard : MonoBehaviour
{
    public AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    public void HardScene()
    {
        //levelNum이 3이면 Hard
        GameManager.levelNum = 3;

        //Hard는 총 25개 pad, 5X5
        GameManager.padCnt = 25;

        //효과음 실행
        StartCoroutine(PlayAudio());
    }

    //Hard 버튼 눌렀을 때 효과음
    IEnumerator PlayAudio()
    {

        audioSource.Play();
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_LEFT);
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_RIGHT);

        yield return new WaitForSeconds(1f);

        SceneManager.LoadScene("SMT");
    }
}
