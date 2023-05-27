using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading;

public class GameManager2 : MonoBehaviour
{
    /////< Field >/////
    /////[전역변수]/////
    float startTime;
    float StageTime;
    int stageCnt = 10;
    static public int stageNum = 1; // stage 현재 번호
    static public int LIFE = 2;// 틀리면 -1
    ///////////////////
    public Text totalTimeText, stageTimeText, stageText, LifeText, stageNumText;

    ///STATE 관리
    public enum STATE
    {
        START, PLAY, WAIT, IDLE, CLEAR
    }
    /////[MEMO]/////
    //IDLE
    //- 게임이 진행중이지만 동작을 수행하지 않을때를 의미 
    // 게임의 플로우, 로직 제어할때 사용
    // ex) 카드게임 - 카드를 뒤집고 대기
    //      (두장의 카드를 비교하고 결과를 확인할때 사용)

    //START
    //Object 2개 생성
    //시간 보여주기 Text
    //해야하는 일 Text로 알려주기

    //WAIT
    //누른 category pad 가 맞는지 아닌지
    ////////////////


    // Start is called before the first frame update
    void Start()
    {
        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
        startTime = stageTime = Time.time;
        StartCoroutine(MakeStage());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator MakeStage()
    {
        STATE = STATE.WAIT;
        
    }
}
