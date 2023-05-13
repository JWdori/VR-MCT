using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


// Hierachy�� �ִ� SelectLevel ���� Easy, Normal, Hard "When Select" �κп� �� �ִ� �ڵ�
public class MakeStage_VR : MonoBehaviour
{

    //easy ��ư�� ������ �� ����
    public void Make_easy()
    {
        //SELECT ������ �� ���� ����
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_VR.isResult = false;
            
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
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }

    //normal ��ư�� ������ �� ����
    public void Make_normal()
    {
        //SELECT ������ �� ���� ����
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_VR.isResult = false;

            //normal ���� �� 8���� ��ġ �е�
            GameManager_VR.padCnt = 8;
            //normal ���� levelNum 2�� ����
            GameManager_VR.levelNum = 2;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            GameManager_VR.ShuffleTouch();

            //���� �ð� ���
            GameManager_VR.startTime = Time.time;
            //START ���·� �̵�
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }

    //hard ��ư�� ������ �� ����
    public void Make_hard()
    {
        //SELECT ������ �� ���� ����
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_VR.isResult = false;

            //hard ���� �� 10���� ��ġ �е�
            GameManager_VR.padCnt = 10;
            //hard ���� levelNum 3�� ����
            GameManager_VR.levelNum = 3;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            GameManager_VR.ShuffleTouch();

            //���� �ð� ���
            GameManager_VR.startTime = Time.time;
            //START ���·� �̵�
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }
}
