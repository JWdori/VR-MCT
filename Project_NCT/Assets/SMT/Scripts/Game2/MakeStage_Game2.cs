using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;


// Hierachy�� �ִ� SelectLevel ���� Easy, Normal, Hard "When Select" �κп� �� �ִ� �ڵ�
public class MakeStage_Game2 : MonoBehaviour
{
    int EASY = 2;
    int MIDDLE = 3;
    int HARD = 4;

    //easy ��ư�� ������ �� ����
    public void Make_easy()
    {
        //SELECT ������ �� ���� ����
        if (Game2Manager.state == Game2Manager.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game2.isResult = false;
            //easy ���� levelNum 1�� ����
            Game2Manager.CurrentDifficulty = EASY;
            //���� �ð� ���
            Game2Manager.startTime = Time.time;
            //START ���·� �̵�
            Game2Manager.state = Game2Manager.STATE.START;
        }

    }

    //normal ��ư�� ������ �� ����
    public void Make_normal()
    {
        //SELECT ������ �� ���� ����
        if (Game2Manager.state == Game2Manager.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game2.isResult = false;
            //easy ���� levelNum 1�� ����
            Game2Manager.CurrentDifficulty = MIDDLE;
            //���� �ð� ���
            Game2Manager.startTime = Time.time;
            //START ���·� �̵�
            Game2Manager.state = Game2Manager.STATE.START;
        }

    }

    //hard ��ư�� ������ �� ����
    public void Make_hard()
    {
        //SELECT ������ �� ���� ����
        if (Game2Manager.state == Game2Manager.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game2.isResult = false;
            //easy ���� levelNum 1�� ����
            Game2Manager.CurrentDifficulty = HARD;
            //���� �ð� ���
            Game2Manager.startTime = Time.time;
            //START ���·� �̵�
            Game2Manager.state = Game2Manager.STATE.START;
        }

    }
}
