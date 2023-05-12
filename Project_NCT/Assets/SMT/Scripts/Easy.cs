using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Bhaptics.SDK2;

// Level Easy 모드
// 3X3 Pad
public class Easy : MonoBehaviour
{
    public AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }
    public void EasyScene()
    {
        //levelNum이 1이면 easy
        GameManager.levelNum = 1;

        //easy는 pad가 총 9개, 3X3
        GameManager.padCnt = 9;

        //효과음 실행
        StartCoroutine(PlayAudio());
    }

    //Easy 버튼 눌렀을 때 효과음
    IEnumerator PlayAudio()
    {
         
        audioSource.Play();
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_LEFT);
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_RIGHT);

        yield return new WaitForSeconds(1f);

        SceneManager.LoadScene("SMT");
    }
}
