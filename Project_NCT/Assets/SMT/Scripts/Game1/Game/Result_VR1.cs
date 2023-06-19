using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;

public class Result_VR1 : MonoBehaviour
{
    //���⼭�� text�� meshpro�� �����
    //���� ��ü �ð�, ����ڰ� ������ Level, ����ڰ� Ʋ�� ��������, ��ü ���ӿ��� Ʋ�� Ƚ��
    public TextMeshPro TotalTimeText, LevelText, stageNumText, missNumText, resultText;

    //���â�� ���̴� ��Ȳ�� �� ���̴� ��Ȳ ����
    static public bool isResult1 = false;

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
        if (isResult1)
        {
            resultText.text = "���";
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

        else if (!Result_VR.isResult & !isResult1 & !Result_VR2.isResult2)
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
        //yield return new WaitForSeconds(0.5f);

        TotalTimeText.text = "�Ҹ� �ð�     -------------------       " + GameManager_VR1.totalTime1;

        yield return new WaitForSeconds(0.5f);
    }

    //����ڰ� �÷����� ���̵�
    IEnumerator ShowLevel()
    {
        LevelText.text = "����";

        yield return new WaitForSeconds(0.1f);

    }

    //����ڰ� ������ ��������
    IEnumerator ShowStageNum()
    {
        //yield return new WaitForSeconds(1f);

        stageNumText.text = "���� �ܰ�       -------------------       " + GameManager_VR1.stageNum1;

        yield return new WaitForSeconds(0.5f);
    }

    //�� Ʋ�� Ƚ��
    IEnumerator ShowMissNum()
    {
        //yield return new WaitForSeconds(1.5f);
        // over�� true�̸� �ð� �ʰ��� ������ ����Ǿ��ٴ� ��
        if (GameManager_VR1.over1)
        {
            missNumText.text = "                        �ð� ����!                        ";
        }
        else
        {
            missNumText.text = "���            -------------------       " + GameManager_VR1.totalMiss1;
        }

        yield return new WaitForSeconds(0.5f);
    }
}
