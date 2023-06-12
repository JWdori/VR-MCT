using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;

public class Result_Game2 : MonoBehaviour
{
    //���⼭�� text�� meshpro�� �����
    //���� ��ü �ð�, ����ڰ� ������ Level, ����ڰ� Ʋ�� ��������, ��ü ���ӿ��� Ʋ�� Ƚ��
    public TextMeshPro TotalTimeText, LevelText, stageNumText, missNumText, correctNumText,resultText;

    //���â�� ���̴� ��Ȳ�� �� ���̴� ��Ȳ ����
    static public bool isResult = false;

///////////////////////////////////////////////////////////
    public bool forresulttotaltimebool = false;
    public int totaltimecheck = 0;
//////////////////////////////////////////////////////////


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
////////////////////////////////////////////////////////////
        forresulttotaltimebool = false;
////////////////////////////////////////////////////////////
    }

    // ���� ����� ������� ������
    void Update()
    {
        //����� ������� �� �� isResult�� true
        if (isResult)
        {
////////////////////[Result에서 시간 고정]//////////////////////
            if (forresulttotaltimebool == false)
            {
                totaltimecheck = (int)Game2Manager.totalTime;
                forresulttotaltimebool = true;
            }
///////////////////////////////////////////////////////////////

            resultText.text = "게임종료";
            //Level�� �˷���
            StartCoroutine(ShowLevel());
            //BhapticsLibrary.Play(BhapticsEvent.FINISH);
            //��ü �÷��� �ð� ǥ��
            StartCoroutine(ShowPlaytime(totaltimecheck));
            //������ stage number ǥ��
            StartCoroutine(ShowStageNum());
            //Ʋ�� Ƚ�� ǥ��
            StartCoroutine(ShowMissNum());
            StartCoroutine(ShowCorrectNum());
            //���̵� ���� â �ٽ� Ȱ��ȭ
            Disappear_selectMenu.isShow = true;
            //Disappear_result.isShow = true;
        }

        else if (!isResult)
        {
            resultText.text = "";
            TotalTimeText.text = "";
            LevelText.text = "";
            stageNumText.text = "";
            missNumText.text = "";
            correctNumText.text="";
        }
    }

    //�� ���� �÷��� �ð�
    IEnumerator ShowPlaytime(int totalT)
    {
        //yield return new WaitForSeconds(0.5f);
        //totalgametime =(int)Game2Manager.totalTime;
        TotalTimeText.text = "게임 총 시간     -------------------       " + totalT;

        yield return new WaitForSeconds(0.5f);
    }

    //����ڰ� �÷����� ���̵�
    IEnumerator ShowLevel()
    {
        if (Game2Manager.CurrentDifficulty == Game2Manager.EASY)
        {
            LevelText.text = "쉬움";
        }
        else if (Game2Manager.CurrentDifficulty == Game2Manager.MIDDLE)
        {
            LevelText.text = "보통";
        }
        else
        {
            LevelText.text = "어려움";
        }

        yield return new WaitForSeconds(0.5f);
       
    }

    IEnumerator ShowStageNum()
    {
        stageNumText.text = "스테이지 개수       -------------------       " + (Game2Manager.stageNum - 1);
        yield return new WaitForSeconds(0.5f);
    }

    //�� Ʋ�� Ƚ��
    IEnumerator ShowMissNum()
    {
        missNumText.text = "틀린횟수            -------------------       " + Game2Manager.WrongAnswerCnt;
        yield return new WaitForSeconds(0.5f);
    }
//CorrectAnswerCnt
//WrongAnswerCnt
    IEnumerator ShowCorrectNum()
    {  
        correctNumText.text = "맞춘횟수            -------------------       " + Game2Manager.CorrectAnswerCnt;
        yield return new WaitForSeconds(0.5f);
    }
}
