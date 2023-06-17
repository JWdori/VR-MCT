using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


// Hierachy에 있는 SelectLevel 하위 Easy, Normal, Hard "When Select" 부분에 들어가 있는 코드
public class MakeStage_Game3 : MonoBehaviour
{
    public bool testmode = false;
    void Start()
    {

    }
    //easy 버튼을 눌렀을 때 실행
    public void Make_easy()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_Game3.isResult = false;
            //easy 모드는 levelNum 1로 설정
            GameManager3.levelNum = 1;
            GameManager3.stage_temp = 0;
            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            //GameManager3.Shuffle1();
            //시작 시간 기록
            GameManager3.startTime = Time.time;
            //START 상태로 이동
            GameManager3.state = GameManager3.STATE.START;
        }

    }

    //normal 버튼을 눌렀을 때 실행
    public void Make_normal()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_Game3.isResult = false;
            //normal 모드는 levelNum 2로 설정
            GameManager3.levelNum = 2;
            GameManager3.stage_temp = 0;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            //GameManager3.Shuffle2();

            //시작 시간 기록
            GameManager3.startTime = Time.time;
            //START 상태로 이동
            GameManager3.state = GameManager3.STATE.START;
        }

    }

    //hard 버튼을 눌렀을 때 실행
    public void Make_hard()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_Game3.isResult = false;
            //hard 모드는 levelNum 3로 설정
            GameManager3.levelNum = 3;
            GameManager3.stage_temp = 0;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            //GameManager3.Shuffle3();

            //시작 시간 기록
            GameManager3.startTime = Time.time;
            //START 상태로 이동
            GameManager3.state = GameManager3.STATE.START;
        }

    }

    //hard 버튼을 눌렀을 때 실행
    public void Make_Test()
    {
        //SELECT 상태일 때 실행 가능
        if (GameManager3.state == GameManager3.STATE.SELECT)
        {
            //결과창이 나와있는 상태에서 실행할 때 결과창을 없애주고 실행할 수 있도록 함
            Result_Game3.isResult = false;
            //hard 모드는 levelNum 3로 설정
            GameManager3.levelNum = 4;
            GameManager3.stage_temp = 0;

            //문제 생성
            //외워야 되는 Pad가 누적인 경우
            //GameManager3.Shuffle3();

            //시작 시간 기록
            GameManager3.startTime = Time.time;
            //START 상태로 이동
            GameManager3.state = GameManager3.STATE.START;
        }

    }
}
