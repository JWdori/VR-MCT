using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


// Level Normal ���
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
        //levelNum�� 2�̸� Normal
        GameManager.levelNum = 2;

        //Normal�� �� 16�� pad, 4X4
        GameManager.padCnt = 16;

        //ȿ���� ����
        StartCoroutine(PlayAudio());
    }

    //Normal ��ư ������ �� ȿ����
    IEnumerator PlayAudio()
    {

        audioSource.Play();

        yield return new WaitForSeconds(1f);

        SceneManager.LoadScene("SMT");
    }
}