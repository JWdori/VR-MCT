using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Level Hard ���
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
        //levelNum�� 3�̸� Hard
        GameManager.levelNum = 3;

        //Hard�� �� 25�� pad, 5X5
        GameManager.padCnt = 25;

        //ȿ���� ����
        StartCoroutine(PlayAudio());
    }

    //Hard ��ư ������ �� ȿ����
    IEnumerator PlayAudio()
    {

        audioSource.Play();

        yield return new WaitForSeconds(1f);

        SceneManager.LoadScene("SMT");
    }
}
