using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Result : MonoBehaviour
{
    //���⼭�� text�� meshpro�� �����
    //���� ��ü �ð�, ����ڰ� ������ Level, ����ڰ� Ʋ�� ��������, ��ü ���ӿ��� Ʋ�� Ƚ��
    public TextMeshProUGUI TotalTimeText, LevelText, stageNumText, missNumText;

    //����ڰ� ������ level�� ������
    void Start()
    {
        StartCoroutine(ShowLevel());
    }

    // ���� ����� ������� ������
    void Update()
    {
        StartCoroutine(ShowPlaytime());
        StartCoroutine(ShowStageNum());
        StartCoroutine(ShowMissNum());
    }

    //�� ���� �÷��� �ð�
    IEnumerator ShowPlaytime()
    {
        yield return new WaitForSeconds(0.5f);

        TotalTimeText.text = "Total time       -------------------       " + GameManager.totalTime ;

        yield return new WaitForSeconds(1f);
    }

    //����ڰ� �÷����� ���̵�
    IEnumerator ShowLevel()
    {
        //levelNum�� 1�̸� easy
        if (GameManager.levelNum == 1)
        {
            LevelText.text = "EASY";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 2�̸� normal
        else if (GameManager.levelNum == 2)
        {
            LevelText.text = "NORMAL";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 3�̸� hard
        else if (GameManager.levelNum == 3)
        {
            LevelText.text = "HARD";

            yield return new WaitForSeconds(0.5f);
        }

    }

    //����ڰ� ������ ��������
    IEnumerator ShowStageNum()
    {
        yield return new WaitForSeconds(1.5f);

        stageNumText.text = "Stage             -------------------       " + GameManager.stageNum;

        yield return new WaitForSeconds(1f);
    }

    //�� Ʋ�� Ƚ��
    IEnumerator ShowMissNum()
    {
        yield return new WaitForSeconds(2.5f);

        missNumText.text = "Miss               -------------------       " + GameManager.totalMiss;

        yield return new WaitForSeconds(1f);
    }
}
