using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Bhaptics.SDK2;

public class Result_Test : MonoBehaviour
{
    //여기서는 text를 meshpro를 사용함
    //게임 전체 시간, 사용자가 선택한 Level, 사용자가 틀린 스테이지, 전체 게임에서 틀린 횟수
    public TextMeshPro TotalTimeText, LevelText, stageNumText, missNumText, resultText;

    public GameObject exit;
    public GameObject again;

    //결과창이 보이는 상황가 안 보이는 상황 구별
    static public bool isResult = false;

    //사용자가 선택한 level을 보여줌
    void Start()
    {
        exit.SetActive(false);
        again.SetActive(false);
        /*
        resultText.text = "";
        TotalTimeText.text = "";
        LevelText.text = "";
        stageNumText.text = "";
        missNumText.text = "";
        */

    }

    // 게임 결과를 순서대로 보여줌
    void Update()
    {
        //결과를 보여줘야 할 때 isResult가 true
        if (isResult)
        {
            resultText.text = "결과";
            //Level을 알려줌
            StartCoroutine(ShowLevel());
            //BhapticsLibrary.Play(BhapticsEvent.FINISH);
            //전체 플레이 시간 표시
            StartCoroutine(ShowPlaytime());
            //실패한 stage number 표시
            StartCoroutine(ShowStageNum());
            //틀린 횟수 표시
            StartCoroutine(ShowMissNum());
            //난이도 선택 창 다시 활성화
            Disappear_select.isShow = true;
            exit.SetActive(true);
            again.SetActive(true);

        }

        else
        {
            //isResult가 false일 때
            //결과를 보여주는 상황이 아닐 때
            resultText.text = "";
            TotalTimeText.text = "";
            LevelText.text = "";
            stageNumText.text = "";
            missNumText.text = "";
        }
    }

    //총 게임 플레이 시간
    IEnumerator ShowPlaytime()
    {
        //yield return new WaitForSeconds(0.5f);

        TotalTimeText.text = "소모 시간     -------------------       " + GameManager_Test.totalTime;

        yield return new WaitForSeconds(0.5f);
    }

    //사용자가 플레이한 난이도
    IEnumerator ShowLevel()
    {
        LevelText.text = "테스트";

        yield return new WaitForSeconds(0.1f);

    }

    //사용자가 실패한 스테이지
    IEnumerator ShowStageNum()
    {
        //yield return new WaitForSeconds(1f);

        stageNumText.text = "최종 단계       -------------------       " + GameManager_Test.stageNum;

        yield return new WaitForSeconds(0.5f);
    }

    //총 틀린 횟수
    IEnumerator ShowMissNum()
    {
        //yield return new WaitForSeconds(1.5f);
        // over가 true이면 시간 초과로 게임이 종료되었다는 뜻
        if (GameManager_Test.over)
        {
            missNumText.text = "                        시간 종료!                        ";
        }
        else
        {
            missNumText.text = "목숨            -------------------       " + GameManager_Test.totalMiss;
        }

        yield return new WaitForSeconds(0.5f);
    }
}
