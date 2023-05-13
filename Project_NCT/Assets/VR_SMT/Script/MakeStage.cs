using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MakeStage : MonoBehaviour
{
    public void Make_easy()
    {
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            GameManager_VR.padCnt = 5;
            GameManager_VR.levelNum = 1;
            //���� ����
            //�ܿ��� �Ǵ� Pad�� ������ ���
            GameManager_VR.ShuffleTouch();
            GameManager_VR.startTime = Time.time;
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }

    public void Make_normal()
    {
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            GameManager_VR.padCnt = 8;
            GameManager_VR.levelNum = 2;
            GameManager_VR.ShuffleTouch();
            GameManager_VR.startTime = Time.time;
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }

    public void Make_hard()
    {
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            GameManager_VR.padCnt = 10;
            GameManager_VR.levelNum = 3;
            GameManager_VR.ShuffleTouch();
            GameManager_VR.startTime = Time.time;
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }
}
