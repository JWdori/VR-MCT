using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


// Hierachy�� �ִ� SelectLevel ���� Easy, Normal, Hard "When Select" �κп� �� �ִ� �ڵ�
public class MakeStage_Game3 : MonoBehaviour
{
    public bool testmode = false;
    void Start()
    {

    }
    //easy ��ư�� ������ �� ����
    public void Make_easy()
    {
        //SELECT ������ �� ���� ����
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game3.isResult = false;
            //easy ���� levelNum 1�� ����
            GameManager3.levelNum = 1;
            GameManager3.stage_temp = 0;
            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager3.Shuffle1();
            //���� �ð� ���
            GameManager3.startTime = Time.time;
            //START ���·� �̵�
            GameManager3.state = GameManager3.STATE.START;
        }

    }

    //normal ��ư�� ������ �� ����
    public void Make_normal()
    {
        //SELECT ������ �� ���� ����
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game3.isResult = false;
            //normal ���� levelNum 2�� ����
            GameManager3.levelNum = 2;
            GameManager3.stage_temp = 0;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager3.Shuffle2();

            //���� �ð� ���
            GameManager3.startTime = Time.time;
            //START ���·� �̵�
            GameManager3.state = GameManager3.STATE.START;
        }

    }

    //hard ��ư�� ������ �� ����
    public void Make_hard()
    {
        //SELECT ������ �� ���� ����
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game3.isResult = false;
            //hard ���� levelNum 3�� ����
            GameManager3.levelNum = 3;
            GameManager3.stage_temp = 0;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager3.Shuffle3();

            //���� �ð� ���
            GameManager3.startTime = Time.time;
            //START ���·� �̵�
            GameManager3.state = GameManager3.STATE.START;
        }

    }

    //hard ��ư�� ������ �� ����
    public void Make_Test()
    {
        //SELECT ������ �� ���� ����
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Game3.isResult = false;
            //hard ���� levelNum 3�� ����
            GameManager3.levelNum = 4;
            GameManager3.stage_temp = 0;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager3.Shuffle3();

            //���� �ð� ���
            GameManager3.startTime = Time.time;
            //START ���·� �̵�
            GameManager3.state = GameManager3.STATE.START;
        }

    }
}
