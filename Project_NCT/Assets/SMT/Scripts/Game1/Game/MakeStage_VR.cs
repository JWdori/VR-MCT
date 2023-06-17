using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;


// Hierachy�� �ִ� SelectLevel ���� Easy, Normal, Hard "When Select" �κп� �� �ִ� �ڵ�
public class MakeStage_VR : MonoBehaviour
{

    public GameObject gm1;
    public GameObject gm2;
    public GameObject gm3;

    //easy ��ư�� ������ �� ����
    public void Make_easy()
    {

        gm1.SetActive(true);
        gm2.SetActive(false);
        gm3.SetActive(false);
        //SELECT ������ �� ���� ����
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_VR.isResult = false;
            Result_VR1.isResult1 = false;
            Result_VR2.isResult2 = false;

            //easy ���� �� 5���� ��ġ �е�
            GameManager_VR.padCnt = 5;
            //easy ���� levelNum 1�� ����
            GameManager_VR.levelNum = 1;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            GameManager_VR.ShuffleTouch();

            //���� �ð� ���
            GameManager_VR.startTime = Time.time;
            //START ���·� �̵�
            GameManager_VR.state = GameManager_VR.STATE.EX;
        }

    }

    //normal ��ư�� ������ �� ����
    public void Make_normal()
    {
        gm1.SetActive(false);
        gm2.SetActive(true);
        gm3.SetActive(false);
        //SELECT ������ �� ���� ����
        if (GameManager_VR1.state1 == GameManager_VR1.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_VR.isResult = false;
            Result_VR1.isResult1 = false;
            Result_VR2.isResult2 = false;

            //normal ���� �� 11���� ��ġ �е�
            GameManager_VR1.padCnt1 = 11;
            //normal ���� levelNum 2�� ����
            GameManager_VR1.levelNum1 = 2;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager_VR1.ShuffleTouch();

            //���� �ð� ���
            GameManager_VR1.startTime1 = Time.time;
            //START ���·� �̵�
            GameManager_VR1.state1 = GameManager_VR1.STATE.EX;
        }

    }

    //hard ��ư�� ������ �� ����
    public void Make_hard()
    {
        gm1.SetActive(false);
        gm2.SetActive(false);
        gm3.SetActive(true);
        //SELECT ������ �� ���� ����
        if (GameManager_VR2.state2 == GameManager_VR2.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_VR.isResult = false;
            Result_VR1.isResult1 = false;
            Result_VR2.isResult2 = false;

            //normal ���� �� 11���� ��ġ �е�
            GameManager_VR2.padCnt2 = 11;
            //normal ���� levelNum 2�� ����
            GameManager_VR2.levelNum2 = 3;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager_VR1.ShuffleTouch();

            //���� �ð� ���
            GameManager_VR2.startTime2 = Time.time;
            //START ���·� �̵�
            GameManager_VR2.state2 = GameManager_VR2.STATE.EX;
        }

    }
}
