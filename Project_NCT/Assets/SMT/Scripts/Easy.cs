using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Level Easy ���
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

        yield return new WaitForSeconds(1f);

        SceneManager.LoadScene("SMT");
    }
}
