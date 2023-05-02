
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

    //클릭한 패드 번호
    static public int padNum;

    //직전의 카드 번호
    int lastNum = 0;

    //스테이지의 전체 카드 수
    int padCnt;

    //카드 클릭 횟수
    int hitCnt = 0;

    //스테이지 번호
    static public int stageNum = 1;

    //난이도 번호
    static public int levelNum = 1;

    //스테이지 수
    int stageCnt = 20;

    //패드 문제 배열
    int[] arPads = new int[20];

    //패드 배열
    int[] setPads = new int[25];

    //게임 시작 시간
    float startTime;

    //스테이지 경과 시간
    float stageTime;

    public enum STATE
    {
        START, HIT, WAIT, IDLE, CLEAR
    };

    static public STATE state = STATE.START;
    
    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //시간 초기화
        startTime = stageTime = Time.time;
        
        //스테이지 만들기
        StartCoroutine(MakeStage());
        //StartCoroutine(ShuffleTouch());
        ShuffleTouch();

    }

    // Update is called once per frame
    void Update()
    {
        switch (state)
        {
            //스테이지 만들기
            case STATE.START:
                StartCoroutine(MakeStage());               
                break;

            case STATE.HIT:
                CheckPad();
                break;

            case STATE.CLEAR:
                StartCoroutine(StageClear());
                ShowTouch();
                break;
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
        
    }

    void CheckPad()
    {
        state = STATE.WAIT;

        for (int i = 1; i <= stageNum; i++)
        {
            
        }

        state = STATE.IDLE;
    }

    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        yield return new WaitForSeconds(2);

        //다음 스테이지 번호
        ++stageNum;
        if(stageNum > stageCnt)
        {
            //Application.LoadLevel("GameStart");
            //return;
        }

        //스테이지 초기화
        stageTime = Time.time;
        lastNum = 0;
        hitCnt = 0;

        state = STATE.START;
    }

    IEnumerator MakeStage()
    {

        //시작카드의 x좌표
        float sx = 0;

        //시작카드의 z좌표
        float sz = 0;

        //패드배열 순서
        int p = 0;

        SetPadPos(out sx, out sz);

        //시작 패드의 번호
        int n = 1;

        //카드배열 읽기 배열의 1행을 읽고 변수 t에 할당한다
        string[] str = PadSet.stage[levelNum - 1];

        //배열의 행의 수만큼 반복
        foreach (string t in str)
        {
            //각행의 문자열을 단일 문자 배열로 변환(문자열 좌우의 공백 제거), 변수의 좌우 공백을 제거(Trim)하고 단일 문자배열로 변환
            char[] ch = t.Trim().ToCharArray();

            //카드의 x축 좌표
            float x = sx;

            //1행의 문자열 길이만큼 반복
            //배열의 ch의 한문자를 읽고 변수 c에 할당한다
            foreach (char c in ch)
            {
                switch (c)
                {
                    //맵의 내용이 *이면 그 위치에 카드 만들어서 배치
                    case '*':
                        //카드 만들기
                        GameObject pad = Instantiate(Resources.Load("Prefab/Pad")) as GameObject;

                        //카드 좌표설정
                        pad.transform.position = new Vector3(x, 0, sz);

                        pad.tag = "pad" + n++;
                        x++;
                        break;

                    //빈칸 처리
                    case '.':
                        x++;
                        break;

                    //반 칸 공백처리
                    case '>':
                        x += 0.5f;
                        break;

                    //반 줄 행간 처리
                    case '^':
                        sz += 0.5f;
                        break;
                }

                //카드를 표시한 후에는 지연 시간을 두어 카드가 배치되는 과정이 보이도록함
                if (c == '*')
                {
                    yield return new WaitForSeconds(0.03f);
                }
            }

            //한 줄 아래로 이동
            sz--;
        }
        StartCoroutine(ShowTouch());
        state = STATE.IDLE;
    }

    //카드의 시작 위치 계산
    void SetPadPos(out float sx, out float sz)
    {
        //가로 카드 수 반 칸 공백 포함
        float x = 0;

        //세로 행수 반줄 행간 포함
        float z = 0;

        //가로 카드 최대 수
        float maxX = 0;

        //스테이지 전체 카드 수
        padCnt = 0;

        //카드 배열 조사 맵 배열을 읽음
        string[] str = PadSet.stage[levelNum - 1];

        //행의 수만큼 반복
        for (int i = 0; i<str.Length; i++)
        {
            //1행 읽기
            string t = str[i].Trim();

            //각 행의 카드 수
            x = 0;

            //각 행의 글자 수만큼 반복
            for (int j = 0; j<t.Length; j++)
            {
                //문자열(string)은 단일 문자(char)의 배열로 취급할 수 있음
                switch(t[j])
                {
                    case '.':
                    case '*':

                        //카드 배치에 필요한 공간
                        x++;
                        if (t[j] == '*')
                        {
                            //전체 카드 수
                            padCnt++;
                        }
                        break;
                    case '>':
                        x += 0.5f;
                        break;
                    case '^':
                        z -= 0.5f;
                        break;
                }
            }

            //각 행의 최대 카드 수 계산
            if (x>maxX)
            {
                maxX = x;
            }
            //전체 행의 수
            z++;
        }
        //카드 가로 시작 위치
        sx = -maxX / 2;
        sz = (z - 1) / 2;

        // StartCoroutine(CardOpen(cardCnt));
    }
    IEnumerator ShowTouch()
    {
        state = STATE.WAIT;
        for (int i = 1; i <= stageNum; i++)
        {
            Debug.Log(i);
            GameObject pad = GameObject.FindWithTag("pad" + arPads[i-1]);
            pad.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
            yield return new WaitForSeconds(1f);
        }
        
        state = STATE.IDLE;
        //return;
    }

    void ShuffleTouch()
    {
        for (int i = 0; i < stageCnt; i++)
        {
            int r = Random.Range(1, padCnt + 1);
            Debug.Log("r"+r);
            arPads[i] = r;
        }
        //yield return new WaitForSeconds(0.2f);
    }

}
