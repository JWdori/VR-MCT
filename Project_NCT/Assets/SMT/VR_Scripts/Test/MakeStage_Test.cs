using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;


// Hierachy�� �ִ� SelectLevel ���� Easy, Normal, Hard "When Select" �κп� �� �ִ� �ڵ�
public class MakeStage_Test : MonoBehaviour
{

    //hard ��ư�� ������ �� ����
    public void Make_Test()
    {
        //SELECT ������ �� ���� ����
        if (GameManager_Test.state == GameManager_Test.STATE.SELECT)
        {
            //���â�� �����ִ� ���¿��� ������ �� ���â�� �����ְ� ������ �� �ֵ��� ��
            Result_Test.isResult = false;

            //normal ���� �� 11���� ��ġ �е�
            GameManager_Test.padCnt = 15;

            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            //GameManager_VR1.ShuffleTouch();

            //���� �ð� ���
            GameManager_Test.startTime = Time.time;
            //START ���·� �̵�
            GameManager_Test.state = GameManager_Test.STATE.EX;
        }

    }
}
