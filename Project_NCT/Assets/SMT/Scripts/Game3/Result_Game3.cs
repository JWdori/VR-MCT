using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;

public class Result_Game3 : MonoBehaviour
{
    //���⼭�� text�� meshpro�� �����
    //���� ��ü �ð�, ����ڰ� ������ Level, ����ڰ� Ʋ�� ��������, ��ü ���ӿ��� Ʋ�� Ƚ��
    public TextMeshPro TotalTimeText, LevelText, stageNumText, missNumText, resultText;

    //���â�� ���̴� ��Ȳ�� �� ���̴� ��Ȳ ����
    static public bool isResult = false;

    //����ڰ� ������ level�� ������
    void Start()
    {


    }

    // ���� ����� ������� ������
    void Update()
    {
        //����� ������� �� �� isResult�� true
        if (isResult)
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
            Disappear_select3.isShow = true;

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
        yield return new WaitForSeconds(0);

        TotalTimeText.text = "�Ҹ� �ð�     -------------------       " + GameManager3.totalTime;

        //yield return new WaitForSeconds(0.5f);
    }

    //����ڰ� �÷����� ���̵�
    IEnumerator ShowLevel()
    {
        //levelNum�� 1�̸� easy
        if (GameManager3.levelNum == 1)
        {
            LevelText.text = "����";

            yield return new WaitForSeconds(0);
        }

        //levelNum�� 2�̸� normal
        else if (GameManager3.levelNum == 2)
        {
            LevelText.text = "����";

            yield return new WaitForSeconds(0);
        }

        //levelNum�� 3�̸� hard
        else if (GameManager3.levelNum == 3)
        {
            LevelText.text = "�����";

            yield return new WaitForSeconds(0);
        }

    }

    //����ڰ� ������ ��������
    IEnumerator ShowStageNum()
    {
        yield return new WaitForSeconds(0);

        stageNumText.text = "���� �ܰ�       -------------------       " + GameManager3.stageNum;

        //yield return new WaitForSeconds(0.5f);
    }

    //�� Ʋ�� Ƚ��
    IEnumerator ShowMissNum()
    {
        yield return new WaitForSeconds(0);
        // over�� true�̸� �ð� �ʰ��� ������ ����Ǿ��ٴ� ��
        if (GameManager3.over)
        {
            missNumText.text = "                        �ð� ����!                        ";
        }
        else
        {
            missNumText.text = "���            -------------------       " + GameManager3.totalMiss;
        }

        //yield return new WaitForSeconds(0.5f);
    }
}

//��Ʈ��kc