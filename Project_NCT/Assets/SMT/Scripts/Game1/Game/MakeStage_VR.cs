using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;


// Hierachy에 있는 SelectLevel 하위 Easy, Normal, Hard "When Select" 부분에 들어가 있는 코드
public class MakeStage_VR : MonoBehaviour
{

    public GameObject gm1;
    public GameObject gm2;
    public GameObject gm3;

    //easy 버튼을 눌렀을 때 실행
    public void Make_easy()
    {

        gm1.SetActive(true);
        gm2.SetActive(false);
        gm3.SetActive(false);
        //SELECT 상태일 때 실행 가능
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_VR.isResult = false;
            Result_VR1.isResult1 = false;
            Result_VR2.isResult2 = false;

            //easy 모드는 총 5개의 터치 패드
            GameManager_VR.padCnt = 5;
            //easy 모드는 levelNum 1로 설정
            GameManager_VR.levelNum = 1;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            GameManager_VR.ShuffleTouch();

            //시작 시간 기록
            GameManager_VR.startTime = Time.time;
            //START 상태로 이동
            GameManager_VR.state = GameManager_VR.STATE.EX;
        }

    }

    //normal 버튼을 눌렀을 때 실행
    public void Make_normal()
    {
        gm1.SetActive(false);
        gm2.SetActive(true);
        gm3.SetActive(false);
        //SELECT 상태일 때 실행 가능
        if (GameManager_VR1.state1 == GameManager_VR1.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_VR.isResult = false;
            Result_VR1.isResult1 = false;
            Result_VR2.isResult2 = false;

            //normal 모드는 총 11개의 터치 패드
            GameManager_VR1.padCnt1 = 11;
            //normal 모드는 levelNum 2로 설정
            GameManager_VR1.levelNum1 = 2;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            //GameManager_VR1.ShuffleTouch();

            //시작 시간 기록
            GameManager_VR1.startTime1 = Time.time;
            //START 상태로 이동
            GameManager_VR1.state1 = GameManager_VR1.STATE.EX;
        }

    }

    //hard 버튼을 눌렀을 때 실행
    public void Make_hard()
    {
        gm1.SetActive(false);
        gm2.SetActive(false);
        gm3.SetActive(true);
        //SELECT 상태일 때 실행 가능
        if (GameManager_VR2.state2 == GameManager_VR2.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_VR.isResult = false;
            Result_VR1.isResult1 = false;
            Result_VR2.isResult2 = false;

            //normal 모드는 총 11개의 터치 패드
            GameManager_VR2.padCnt2 = 11;
            //normal 모드는 levelNum 2로 설정
            GameManager_VR2.levelNum2 = 3;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            //GameManager_VR1.ShuffleTouch();

            //시작 시간 기록
            GameManager_VR2.startTime2 = Time.time;
            //START 상태로 이동
            GameManager_VR2.state2 = GameManager_VR2.STATE.EX;
        }

    }
}
