
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    //게임 전체 시간, 스테이지 시간, 틀린 횟수, 맞춘 횟수, 스테이지 번호, (시작, 성공, 실패)를 나타내는 텍스트
    public Text totalTimeText, stageTimeText, missText, hitText, stageNumText, pushText;

    //터치 여부
    static public bool isTouch = true;

    //틀린 횟수
    int missNum = 0;

    //눌러야 되는 패드 순서
    static public int step = 0;

    //클릭한 패드 번호
    static public int padNum;

    //스테이지의 전체 패드 수
    static public int padCnt;

    //순서 맞춘 횟수
    int hitCnt = 0;

    //스테이지 번호
    static public int stageNum = 1;

    //난이도 번호 (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs에서 설정
    static public int levelNum;

    //최대 스테이지 수
    int stageCnt = 20;

    //패드 문제 배열
    //ShuffleTouch에서 랜덤으로 설정
    static public int[] arPads = new int[20];

    //게임 시작 시간
    float startTime;

    //스테이지 경과 시간
    float stageTime;

    //전체 시간
    static public float totalTime;

    //전체 miss 횟수
    static public int totalMiss;

    //게임 상태를 나타내는 STATE
    public enum STATE
    {
        START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR, FINISH
    };

    //처음 상태를 START로 지정
    static public STATE state = STATE.START;

    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //시간 초기화
        startTime = stageTime = Time.time;

        //문제 생성
        //외워야 되는 Pad가 누적인 경우
        ShuffleTouch();
    }

    // Update is called once per frame
    void Update()
    {
        //전체 게임 시간 계산
        totalTime = (int)(Time.time - startTime);
        //스테이지 게임 시간 계산
        int time2 = (int)(Time.time - stageTime);

        //게임 전체 시간 출력
        totalTimeText.text = "Total time : " + totalTime;
        //스테이지 게임 시간 출력
        stageTimeText.text = "Stage Time : " + time2;
        //틀린 횟수 출력
        missText.text = "Miss : " + missNum;
        //맞춘 횟수 출력
        hitText.text = "Hit : " + hitCnt;

        //state에 따라 알맞은 환경 실행
        switch (state)
        {
            //state가 START이면 Level에 맞는 스테이지 만들기
            //MakeStage() 실행
            case STATE.START:
                StartCoroutine(MakeStage());
                Debug.Log("Start");               
                break;

            //state가 MAKE이면 문제 제시
            //ShowTouch() 실행
            case STATE.MAKE:
                Debug.Log("Make");
                StartCoroutine(ShowTouch());
                break;

            //state가 WRONG이면 틀렸을 경우
            //WrongPad() 실행
            //state를 WRONG으로 바꾸는 부분은 PadCtrl.cs에 있음
            case STATE.WRONG:
                Debug.Log("Wrong");
                StartCoroutine(WrongPad());
                break;
            
            //state가 HIT이면 맞은 경우
            //CheckPad() 실행
            //state를 HIT로 바꾸는 부분은 PadCtrl.cs에 있음
            case STATE.HIT:
                Debug.Log("Hit");
                StartCoroutine(CheckPad());
                break;

            //state가 CLEAR이면 한 stage 완료
            //StageClear() 실행
            case STATE.CLEAR:
                Debug.Log("Clear");
                StartCoroutine(StageClear());
                break;

            //state가 FINISH이면 게임 끝
            //Result 화면으로 넘어감
            case STATE.FINISH:
                Debug.Log("Finish");
                SceneManager.LoadScene("Result");
                break;
        }
        //일단 Esc 버튼 누르면 난이도 선택으로 넘어가게 설정
        //나중에 수정
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SceneManager.LoadScene("LevelSelect");
        }
        
    }

    //틀렸을 경우 실행되는 환경
    IEnumerator WrongPad()
    {
        //STATE.WAIT이랑 isTouch는 PadCtrl.cs에서 마우스 클릭 가능한 환경 설정
        //STATE.WAIT인 상태에서는 마우스 클릭 안 됨
        state = STATE.WAIT;
        isTouch = true;
        //arPads[step]은 step번째 눌러야 되는 Pad번호
        //padNum은 PadCtrl.cs에서 받아온 사용자가 누른 Pad번호
        if (arPads[step] != padNum && isTouch)
        {
            //틀렸을 경우 missNum과 totalMiss 하나 씩 증가
            ++missNum; //스테이지마다 초기화
            ++totalMiss; //누적

            // missNum이 1보다 크다는 것은 한 스테이지에서 두 번 틀렸다는 뜻
            if (missNum > 1)
            {
                //두 번 틀리면 터치 안 되고, Fail 출력
                isTouch = false;
                StartCoroutine(ShowFail());
                yield return new WaitForSeconds(2f);
                //state가 FINISH로 바뀜
                state = STATE.FINISH;
            }
            yield return new WaitForSeconds(0.03f);
        }
        yield return new WaitForSeconds(0.03f);
        //missNum이 1인 경우는 이어서 플레이
        state = STATE.IDLE;
    }

    IEnumerator CheckPad()
    {
        //STATE.WAIT이랑 isTouch는 PadCtrl.cs에서 마우스 클릭 가능한 환경 설정
        //STATE.WAIT인 상태에서는 마우스 클릭 안 됨
        state = STATE.WAIT;
        isTouch = true;

        //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
        if (arPads[step] == padNum && isTouch)
        {
            //맞춘 횟수 증가
            ++hitCnt;
            
            //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
            if (step+1 == stageNum)
            {
                //터치 안 되게 바꾸고, state는 CLEAR로 변환
                isTouch = false;
                state = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            //step을 늘려서 눌러야 되는 다음 Pad 설정
            ++step;


        }

        yield return new WaitForSeconds(0.03f);
        //해당 스테이지에 눌러야 되는 Pad가 남았을 경우 이어서 플레이
        state = STATE.IDLE;
    }

    //해당 스테이지에서 주어진 Pad 모두 눌렀을 경우
    IEnumerator StageClear()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.5f);
        //Clear 문구 보여줌
        StartCoroutine(ShowClear());
        yield return new WaitForSeconds(2f);

        //다음 스테이지 번호
        ++stageNum;
        
        //최대 스테이지가 되었을 경우
        if (stageNum > stageCnt)
        {
            //게임 끝, FINISH 상태로
            state = STATE.FINISH;
            yield return new WaitForSeconds(0.5f);
        }

        //스테이지 시간 초기화
        stageTime = Time.time;
        
        //맞춘 횟수 초기화
        hitCnt = 0;
        //맞춰야 되는 Pad갯수 초기화
        step = 0;
        //틀린 횟수 초기화
        missNum = 0;
        //다음 문제 제시
        state = STATE.MAKE;
        
    }

    //처음 게임에 들어왔을 때 Level에 맞춰 Pad 셋팅
    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        
        yield return new WaitForSeconds(1f);

        //시작카드의 x좌표
        float sx = 0;

        //시작카드의 z좌표
        float sz = 0;

        SetPadPos(out sx, out sz);

        //시작 패드의 번호
        int n = 1;

        //PadSet.cs에서 Pad배열 읽기 배열의 1행을 읽고 변수 t에 할당한다
        string[] str = PadSet.stage[levelNum - 1];

        //배열의 행의 수만큼 반복
        foreach (string t in str)
        {
            //각 행의 문자열을 단일 문자 배열로 변환(문자열 좌우의 공백 제거), 변수의 좌우 공백을 제거(Trim)하고 단일 문자배열로 변환
            char[] ch = t.Trim().ToCharArray();

            //Pad의 x축 좌표
            float x = sx;

            //1행의 문자열 길이만큼 반복
            //배열의 ch의 한문자를 읽고 변수 c에 할당한다
            foreach (char c in ch)
            {
                switch (c)
                {
                    //맵의 내용이 *이면 그 위치에 Pad 만들어서 배치
                    case '*':
                        //Pad 만들기
                        //Prefap으로 만들어진 Pad를 GameObject로 설정
                        GameObject pad = Instantiate(Resources.Load("Prefab/Pad")) as GameObject;

                        //Pad 좌표설정
                        pad.transform.position = new Vector3(x, 0, sz);

                        //pad1, pad2, ... pad25까지 tag로 설정되어 있음
                        //생성되는 Pad마다 tag를 붙여줌
                        //나중에 사용자가 선택한 Pad와 눌러야 되는 Pad 비교할 때 쓰임
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
        yield return new WaitForSeconds(1);

        //Pad 셋팅 완료 후 문제 제시 상태로 넘어감
        state = STATE.MAKE;
    }

    //Pad의 시작 위치 계산
    void SetPadPos(out float sx, out float sz)
    {
        //가로 Pad 수 반 칸 공백 포함
        float x = 0;

        //세로 행수 반줄 행간 포함
        float z = 0;

        //가로 Pad 최대 수
        float maxX = 0;

        //Pad 배열 조사 맵 배열을 읽음
        string[] str = PadSet.stage[levelNum - 1];

        //행의 수만큼 반복
        for (int i = 0; i<str.Length; i++)
        {
            //1행 읽기
            string t = str[i].Trim();

            //각 행의 Pad 수
            x = 0;

            //각 행의 글자 수만큼 반복
            for (int j = 0; j<t.Length; j++)
            {
                //문자열(string)은 단일 문자(char)의 배열로 취급할 수 있음
                switch(t[j])
                {
                    case '.':
                    case '*':

                        //Pad 배치에 필요한 공간
                        x++;

                        break;
                    case '>':
                        x += 0.5f;
                        break;
                    case '^':
                        z -= 0.5f;
                        break;
                }
            }

            //각 행의 최대 Pad 수 계산
            if (x>maxX)
            {
                maxX = x;
            }
            //전체 행의 수
            z++;
        }
        //Pad 가로 시작 위치
        sx = -maxX / 2;
        sz = (z - 1) / 2;
    }

    //사용자가 터치해야 할 Pad들을 보여줌
    IEnumerator ShowTouch()
    {
        state = STATE.WAIT;

        //랜덤으로 Pad순서 생성
        //stage마다 문제가 바뀔 때
        //ShuffleTouch();

        //문제 제시 전에 Stage 알려줌
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(2f);
        
        //눌러야 되는 Pad 순서 처음으로 초기화
        step = 0;

        //stageNum만큼 눌러야 되는 Pad 순서대로 보여줌
        for (int i = 1; i <= stageNum; i++)
        {
            //pad를 tag를 이용하여 설정
            //ShuffleTouch에서 arPads 배열 랜덤 생성
            GameObject pad = GameObject.FindWithTag("pad" + arPads[i-1]);
            //문제 보여줄 때 효과음 실행
            pad.SendMessage("PlayAud", SendMessageOptions.DontRequireReceiver);
            //눌러야 되는 Pad 파란색으로 보여줌
            //"ShowPad"는 PadCtrl.cs에서 확인
            pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            yield return new WaitForSeconds(1f);
        }
        //문제 보여준 후 사용자가 터치할 수 있는 순간을 알려줌
        StartCoroutine(ShowPushTiming());
        yield return new WaitForSeconds(1f);

        //터치할 수 있도록 설정
        isTouch = true;
        state = STATE.IDLE;
    }

    //사용자가 눌러야 되는 Pad를 랜덤으로 받을 수 있도록 설정
    //arPads 배열 설정
    void ShuffleTouch()
    {
        for (int i = 0; i < stageCnt; i++)
        {
            //1부터 pad갯수 사이에 숫자를 랜덤으로 설정
            int r = Random.Range(1, padCnt + 1);
            //랜덤으로 뽑은 숫자를 배열에 순서대로 설정
            arPads[i] = r;
        }
    }

    //스테이지 시작시 스테이지 번호를 보여준다.
    IEnumerator ShowStageNum()
    {
        stageNumText.text = "STAGE " + stageNum;

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);
        
        stageNumText.text = "";
        yield return new WaitForSeconds(2f);
    }

    //누르는 타이밍을 알려준다.
    IEnumerator ShowPushTiming()
    {
        pushText.text = "Start";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);
        
        pushText.text = "";

        yield return new WaitForSeconds(2f);
    }

    //Stage를 Clear했다는 것을 알림
    IEnumerator ShowClear()
    {
        pushText.text = "Clear";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }

    //Stage를 Clear하지 못함
    IEnumerator ShowFail()
    {
        pushText.text = "Fail";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }

}
