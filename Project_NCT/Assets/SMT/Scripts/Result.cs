using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Result : MonoBehaviour
{
    //여기서는 text를 meshpro를 사용함
    //게임 전체 시간, 사용자가 선택한 Level, 사용자가 틀린 스테이지, 전체 게임에서 틀린 횟수
    public TextMeshProUGUI TotalTimeText, LevelText, stageNumText, missNumText;

    //사용자가 선택한 level을 보여줌
    void Start()
    {
        StartCoroutine(ShowLevel());
    }

    // 게임 결과를 순서대로 보여줌
    void Update()
    {
        StartCoroutine(ShowPlaytime());
        StartCoroutine(ShowStageNum());
        StartCoroutine(ShowMissNum());
    }

    //총 게임 플레이 시간
    IEnumerator ShowPlaytime()
    {
        yield return new WaitForSeconds(0.5f);

        TotalTimeText.text = "Total time       -------------------       " + GameManager.totalTime ;

        yield return new WaitForSeconds(1f);
    }

    //사용자가 플레이한 난이도
    IEnumerator ShowLevel()
    {
        //levelNum이 1이면 easy
        if (GameManager.levelNum == 1)
        {
            LevelText.text = "EASY";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum이 2이면 normal
        else if (GameManager.levelNum == 2)
        {
            LevelText.text = "NORMAL";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum이 3이면 hard
        else if (GameManager.levelNum == 3)
        {
            LevelText.text = "HARD";

            yield return new WaitForSeconds(0.5f);
        }

    }

    //사용자가 실패한 스테이지
    IEnumerator ShowStageNum()
    {
        yield return new WaitForSeconds(1.5f);

        stageNumText.text = "Stage             -------------------       " + GameManager.stageNum;

        yield return new WaitForSeconds(1f);
    }

    //총 틀린 횟수
    IEnumerator ShowMissNum()
    {
        yield return new WaitForSeconds(2.5f);

        missNumText.text = "Miss               -------------------       " + GameManager.totalMiss;

        yield return new WaitForSeconds(1f);
    }
}
