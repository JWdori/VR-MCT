using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Bhaptics.SDK2;
//using Oculus.Interaction.Samples;

// Level Easy ���
// 3X3 Pad
public class Easy_VR : MonoBehaviour
{
    public AudioSource audioSource;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }
    public void EasyScene()
    {
        //levelNum�� 1�̸� easy
        GameManager.levelNum = 1;

        //easy�� pad�� �� 9��, 3X3
        GameManager.padCnt = 9;

        //ȿ���� ����
        StartCoroutine(PlayAudio());
    }

    //Easy ��ư ������ �� ȿ����
    IEnumerator PlayAudio()
    {

        audioSource.Play();
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_LEFT);
        BhapticsLibrary.Play(BhapticsEvent.TOUCH_RIGHT);

        yield return new WaitForSeconds(1f);

        //SceneManager.LoadScene("MainGame");
        //SceneLoader.Load("main")
    }
}