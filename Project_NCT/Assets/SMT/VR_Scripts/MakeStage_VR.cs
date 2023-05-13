using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


// Hierachy에 있는 SelectLevel 하위 Easy, Normal, Hard "When Select" 부분에 들어가 있는 코드
public class MakeStage_VR : MonoBehaviour
{

    //easy 버튼을 눌렀을 때 실행
    public void Make_easy()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_VR.isResult = false;
            
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
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }

    //normal 버튼을 눌렀을 때 실행
    public void Make_normal()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_VR.isResult = false;

            //normal 모드는 총 8개의 터치 패드
            GameManager_VR.padCnt = 8;
            //normal 모드는 levelNum 2로 설정
            GameManager_VR.levelNum = 2;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            GameManager_VR.ShuffleTouch();

            //시작 시간 기록
            GameManager_VR.startTime = Time.time;
            //START 상태로 이동
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }

    //hard 버튼을 눌렀을 때 실행
    public void Make_hard()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager_VR.state == GameManager_VR.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_VR.isResult = false;

            //hard 모드는 총 10개의 터치 패드
            GameManager_VR.padCnt = 10;
            //hard 모드는 levelNum 3로 설정
            GameManager_VR.levelNum = 3;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            GameManager_VR.ShuffleTouch();

            //시작 시간 기록
            GameManager_VR.startTime = Time.time;
            //START 상태로 이동
            GameManager_VR.state = GameManager_VR.STATE.START;
        }

    }
}
