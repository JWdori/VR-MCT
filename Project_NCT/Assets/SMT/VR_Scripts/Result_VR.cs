using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;

public class Result_VR : MonoBehaviour
{
    //���⼭�� text�� meshpro�� �����
    //���� ��ü �ð�, ����ڰ� ������ Level, ����ڰ� Ʋ�� ��������, ��ü ���ӿ��� Ʋ�� Ƚ��
    public TextMeshPro TotalTimeText, LevelText, stageNumText, missNumText, resultText;

    //���â�� ���̴� ��Ȳ�� �� ���̴� ��Ȳ ����
    static public bool isResult = false;

    //����ڰ� ������ level�� ������
    void Start()
    {
        /*
        resultText.text = "";
        TotalTimeText.text = "";
        LevelText.text = "";
        stageNumText.text = "";
        missNumText.text = "";
        */

    }

    // ���� ����� ������� ������
    void Update()
    {
        //����� ������� �� �� isResult�� true
        if (isResult)
        {
            resultText.text = "Result";
            //Level�� �˷���
            StartCoroutine(ShowLevel());
            //BhapticsLibrary.Play(BhapticsEvent.FINISH);
            //��ü �÷��� �ð� ǥ��
            StartCoroutine(ShowPlaytime());
            //������ stage number ǥ��
            StartCoroutine(ShowStageNum());
            //Ʋ�� Ƚ�� ǥ��
            StartCoroutine(ShowMissNum());
            //���̵� ���� â �ٽ� Ȱ��ȭ
            Disappear_select.isShow = true;

        }

        else
        {
            //isResult�� false�� ��
            //����� �����ִ� ��Ȳ�� �ƴ� ��
            resultText.text = "";
            TotalTimeText.text = "";
            LevelText.text = "";
            stageNumText.text = "";
            missNumText.text = "";
        }
    }

    //�� ���� �÷��� �ð�
    IEnumerator ShowPlaytime()
    {
        yield return new WaitForSeconds(0.5f);

        TotalTimeText.text = "Total time       -------------------       " + GameManager_VR.totalTime;

        yield return new WaitForSeconds(0.5f);
    }

    //����ڰ� �÷����� ���̵�
    IEnumerator ShowLevel()
    {
        //levelNum�� 1�̸� easy
        if (GameManager_VR.levelNum == 1)
        {
            LevelText.text = "EASY";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 2�̸� normal
        else if (GameManager_VR.levelNum == 2)
        {
            LevelText.text = "NORMAL";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 3�̸� hard
        else if (GameManager_VR.levelNum == 3)
        {
            LevelText.text = "HARD";

            yield return new WaitForSeconds(0.5f);
        }

    }

    //����ڰ� ������ ��������
    IEnumerator ShowStageNum()
    {
        yield return new WaitForSeconds(1.5f);

        stageNumText.text = "Stage             -------------------       " + GameManager_VR.stageNum;

        yield return new WaitForSeconds(0.5f);
    }

    //�� Ʋ�� Ƚ��
    IEnumerator ShowMissNum()
    {
        yield return new WaitForSeconds(2.5f);
        // over�� true�̸� �ð� �ʰ��� ������ ����Ǿ��ٴ� ��
        if (GameManager_VR.over)
        {
            missNumText.text = "                        Time Over                        ";
        }
        else
        {
            missNumText.text = "Miss               -------------------       " + GameManager_VR.totalMiss;
        }

        yield return new WaitForSeconds(0.5f);
    }
}