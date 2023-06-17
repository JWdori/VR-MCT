
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Bhaptics.SDK2;

public class GameManager_VR1 : MonoBehaviour
{
    //게임 전체 시간, 스테이지 시간, 틀린 횟수, 맞춘 횟수, 스테이지 번호, (시작, 성공, 실패)를 나타내는 텍스트
    public TextMeshPro totalTimeText, stageTimeText, missText, hitText, stageNumText, pushText, levelText;

    public GameObject loading;
    //public GameObject panel;
    //public GameObject startbutton;
    //public GameObject tuto;

    //터치 여부
    static public bool isTouch1 = true;

    //틀린 횟수
    int missNum = 2;

    //눌러야 되는 패드 순서
    static public int step1 = 0;

    //클릭한 패드 번호
    static public int padNum1;

    //스테이지의 전체 패드 수
    static public int padCnt1;

    //순서 맞춘 횟수
    int hitCnt = 0;

    //스테이지 번호
    static public int stageNum1 = 1;

    //난이도 번호 (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs에서 설정
    static public int levelNum1 = 1;

    //최대 스테이지 수
    static public int stageCnt1 = 10;

    //패드 문제 배열
    //ShuffleTouch에서 랜덤으로 설정
    static public bool[] arPads1 = new bool[11];

    //게임 시작 시간
    static public float startTime1;

    //스테이지 경과 시간
    float stageTime;

    //전체 시간
    static public float totalTime1;

    //전체 miss 횟수
    static public int totalMiss1;

    //스테이지 시간
    static public int time2_1 = 60;

    //시간 초과로 인한 종료 판단
    static public bool over1 = false;

    //문제가 제시되고 있을 때 시간 정지를 판단하기 위한 변수
    bool isStagetime = false;

    //ShuffleTouch에서 사용
    int r = 0;

    //게임 상태를 나타내는 STATE
    public enum STATE
    {
        EX, START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR, FINISH, SELECT, RESULT
    };
    //START : 변수 초기화 및 stage 세팅
    //MAKE : 문제를 보여줌
    //HIT : 정답을 맞췄을 경우
    //WRONG : 정답을 틀렸을 경우
    //IDLE : 터치를 할 수 있는 상태
    //CLEAR : 한 스테이지 성공
    //FINISH : 게임 끝
    //SELECT : 난이도를 선택하는 상태
    //RESULT : 게임 종류 후 결과 창 출력

    //처음 상태를 SELECT로 설정, 난이도 선택
    static public STATE state1 = STATE.SELECT;

    public void Start()
    {
        //Screen.orientation = ScreenOrientation.LandscapeRight;
        //  Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //시간 초기화
        //startTime = Time.time;

        //문제 생성
        //외워야 되는 Pad가 누적인 경우
        //ShuffleTouch();
    }

    // Update is called once per frame
    public void Update()
    {
        
        //isStagetime이 true이면 stage 시간이 흐름
        if (isStagetime)
        {
            //스테이지 게임 시간 계산
            time2_1 = 60 - (int)(Time.time - stageTime);
            //스테이지 게임 시간 출력
            stageTimeText.text = "남은 시간 : " + time2_1;
        }
        
        //time2는 stage 시간
        //60초 지나면 게임 종료
        if (time2_1 <= 0 && !over1)
        {
            totalTime1 += 60 - time2_1;
            //한 번 더 판단
            over1 = true;
            //시간 다시 초기화
            time2_1 = 60;

            //시간 초과로 인한 게임 종료
            state1 = STATE.FINISH;
        }

        //state에 따라 알맞은 환경 실행
        switch (state1)
        {
            case STATE.EX:
                StartCoroutine(ShowEx());
                break;

            //state가 START이면 Level에 맞는 스테이지 만들기
            //MakeStage() 실행
            case STATE.START:
                stageNum1 = 1;
                missNum = 2;
                totalMiss1 = 2;
                totalTime1 = 0f;
                over1 = false ;
                StartCoroutine(MakeStage());
                Debug.Log("Start");
                break;

            //state가 MAKE이면 문제 제시
            //ShowTouch() 실행
            case STATE.MAKE:
                //틀린 횟수 출력
                missText.text = "목숨 : " + missNum;
                //맞춘 횟수 출력
                hitText.text = "성공 횟수 : " + hitCnt;
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
            //터치패드 제거
            case STATE.FINISH:
                Debug.Log("Finish");
                //게임 끝, 시간도 종료
                isStagetime = false;
                //터치 패드 제거
                StartCoroutine(DestroyPad());
                //SceneManager.LoadScene("Result_VR");
                break;

            // 결과를 보여주는 상태
            case STATE.RESULT:
                Debug.Log("Result");
                StartCoroutine(ShowResult());
                break;
        }
        /*
        //일단 Esc 버튼 누르면 난이도 선택으로 넘어가게 설정
        //나중에 수정
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            //SceneManager.LoadScene("LevelSelect");
        }
        */
    }

    IEnumerator ShowEx()
    {
        state1 = STATE.WAIT;
        //난이도 선택 창 비활성화
        Disappear_select.isHide = true;

        loading.SetActive(true);
        //tuto.SetActive(true);
        yield return new WaitForSeconds(1f);
        //panel.SetActive(true);
        //startbutton.SetActive(true);
        loading.SetActive(false);
        state1 = STATE.START;
    }

    //결과를 보여주는 코드
    //Result_VR.cs 파일에 Update 부분 실행
    IEnumerator ShowResult()
    {
        state1 = STATE.WAIT;
        //결과 UI를 보여주기 위해 true로 설정
        Result_VR1.isResult1 = true;
        
        //결과를 본 후에 다시 난이도를 선택할 수 있는 상태로 변환
        state1 = STATE.SELECT;
        yield return new WaitForSeconds(1);
    }

    //게임 종료 후 터치 패드 제거
    IEnumerator DestroyPad()
    {
        state1 = STATE.WAIT;

        yield return new WaitForSeconds(1);

        //터치 패드 제거하면서 게임 중간에 나오는 UI도 같이 제거
        //틀린 횟수 출력
        missText.text = "";
        //맞춘 횟수 출력
        hitText.text = "";
        stageTimeText.text = "";
        stageNumText.text = "";
        levelText.text = "";

        //터치 패드 tag를 이용하여 제거
        for (int i = 1; i <= padCnt1; i++)
        {
            GameObject pad = GameObject.FindWithTag("pad" + i);
            Destroy(pad);
        }

        //터치패드 제거 후 결과를 보여주는 상태로 변환
        state1 = STATE.RESULT;
    }

    //틀렸을 경우 실행되는 환경
    IEnumerator WrongPad()
    {
        //STATE.WAIT이랑 isTouch는 PadCtrl.cs에서 마우스 클릭 가능한 환경 설정
        //STATE.WAIT인 상태에서는 마우스 클릭 안 됨
        state1 = STATE.WAIT;
        yield return new WaitForSeconds(0.5f);
        isTouch1 = true;
        //arPads[step]은 step번째 눌러야 되는 Pad번호
        //padNum은 PadCtrl.cs에서 받아온 사용자가 누른 Pad번호
        if (isTouch1)
        {
            //틀렸을 경우 missNum과 totalMiss 하나 씩 증가
            --missNum; //스테이지마다 초기화
            --totalMiss1; //누적
            //틀린 횟수 update
            missText.text = "목숨 : " + missNum;
            
            // missNum이 1보다 크다는 것은 한 스테이지에서 두 번 틀렸다는 뜻
            if (missNum < 1)
            {
                //두 번 틀리면 터치 안 되고, Fail 출력 시간도 안흐르게...
                isTouch1 = false;
                isStagetime = false;
                totalTime1 += 60 - time2_1;

                StartCoroutine(ShowFail());
                yield return new WaitForSeconds(2f);
                FailAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.FAIL);
                //state가 FINISH로 바뀜
                state1 = STATE.FINISH;
            }
            yield return new WaitForSeconds(0.03f);
        }
        yield return new WaitForSeconds(0.03f);
        //missNum이 1인 경우는 이어서 플레이
        state1 = STATE.IDLE;
    }

    IEnumerator CheckPad()
    {
        //STATE.WAIT이랑 isTouch는 PadCtrl.cs에서 마우스 클릭 가능한 환경 설정
        //STATE.WAIT인 상태에서는 마우스 클릭 안 됨
        state1 = STATE.WAIT;
        yield return new WaitForSeconds(0.5f);
        isTouch1 = true;
        //Debug.Log(step1);

        //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
        if (isTouch1)
        {
            //맞춘 횟수 증가
            ++hitCnt;
            //맞춘 횟수 update
            hitText.text = "성공 횟수 : " + hitCnt;
            //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
            if (step1+1 == (stageNum1 + 3) / 2)
            {
                //터치 안 되게 바꾸고, state는 CLEAR로 변환
                isTouch1 = false;
                isStagetime = false;
                state1 = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            //step을 늘려서 눌러야 되는 다음 Pad 설정
            ++step1;


        }

        yield return new WaitForSeconds(0.03f);
        //해당 스테이지에 눌러야 되는 Pad가 남았을 경우 이어서 플레이
        state1 = STATE.IDLE;
    }

    //해당 스테이지에서 주어진 Pad 모두 눌렀을 경우
    IEnumerator StageClear()
    {
        state1 = STATE.WAIT;

        isTouch1 = false;
        isStagetime = false;

        yield return new WaitForSeconds(0.5f);
        //Clear 문구 보여줌
        StartCoroutine(ShowClear());
        stageTimeText.text = "남은 시간 : " + 60;
        yield return new WaitForSeconds(2f);

        //다음 스테이지 번호
        if (stageNum1 < stageCnt1)
        {
            ++stageNum1;
        }
        //최대 스테이지가 되었을 경우
        else if (stageNum1 == stageCnt1)
        {
            BhapticsLibrary.Play(BhapticsEvent.CLEAR);
            ClearAudio.play();
            //게임 끝, FINISH 상태로
            state1 = STATE.FINISH;
            yield return new WaitForSeconds(0.5f);
        }

        //stage가 바뀌는 순간에는 시간이 안 흐름
        isTouch1 = false;
        isStagetime = false;

        //현재까지 흐른 전체 시간 저장
        totalTime1 += 60 - time2_1;

        //스테이지 시간 초기화
        stageTime = Time.time;


        //맞춘 횟수 초기화
        hitCnt = 0;
        hitText.text = "성공 횟수 : " + hitCnt;
        //맞춰야 되는 Pad갯수 초기화
        step1 = 0;
        //틀린 횟수 초기화
        missNum = totalMiss1;
        missText.text = "목숨 : " + missNum;
        
        //다음 문제 제시
        state1 = STATE.MAKE;

    }

    //처음 게임에 들어왔을 때 Level에 맞춰 Pad 셋팅
    IEnumerator MakeStage()
    {
        state1 = STATE.WAIT;

        loading.SetActive(false);

        //시작카드의 x좌표
        float sx = 0;

        //시작카드의 y좌표
        float sy = 0;

        SetPadPos(out sx, out sy);

        //시작 패드의 번호
        int n = 1;

        //PadSet.cs에서 Pad배열 읽기 배열의 1행을 읽고 변수 t에 할당한다
        string[] str = PadSet_VR.stage[levelNum1 - 1];

        //배열의 행의 수만큼 반복
        foreach (string t in str)
        {
            //각 행의 문자열을 단일 문자 배열로 변환(문자열 좌우의 공백 제거), 변수의 좌우 공백을 제거(Trim)하고 단일 문자배열로 변환
            char[] ch = t.Trim().ToCharArray();

            //Pad의 x축 좌표
            float x = 1.3f;

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
                        GameObject pad = Instantiate(Resources.Load("Prefab/Pad_Normal")) as GameObject;

                        //Pad 좌표설정
                        pad.transform.position = new Vector3(x, sy, 1.2f);

                        //pad1, pad2, ... pad25까지 tag로 설정되어 있음
                        //생성되는 Pad마다 tag를 붙여줌
                        //나중에 사용자가 선택한 Pad와 눌러야 되는 Pad 비교할 때 쓰임
                        pad.tag = "pad" + n;
                        arPads1[n-1] = false;
                        ++n;
                        x += 0.15f;
                        break;

                    //빈칸 처리
                    case '.':
                        x += 0.15f;
                        break;

                    //반 칸 공백처리
                    case '>':
                        x += 0.15f;
                        break;

                    //반 줄 행간 처리
                    case '^':
                        sy += 0.05f;
                        break;
                }

                //카드를 표시한 후에는 지연 시간을 두어 카드가 배치되는 과정이 보이도록함
                if (c == '*')
                {
                    yield return new WaitForSeconds(0.03f);
                }
            }

            //한 줄 아래로 이동
            sy-=0.2f;
        }
        yield return new WaitForSeconds(1);
        loading.SetActive(false);

        //Pad 셋팅 완료 후 문제 제시 상태로 넘어감
        state1 = STATE.MAKE;
    }

    //Pad의 시작 위치 계산
    void SetPadPos(out float sx, out float sy)
    {
        //가로 Pad 수 반 칸 공백 포함
        float x = 0;

        //세로 행수 반줄 행간 포함
        float y = 3f;

        //가로 Pad 최대 수
        float maxX = 0;

        //Pad 배열 조사 맵 배열을 읽음
        string[] str = PadSet_VR.stage[levelNum1 - 1];

        //행의 수만큼 반복
        for (int i = 0; i < str.Length; i++)
        {
            //1행 읽기
            string t = str[i].Trim();

            //각 행의 Pad 수
            x = 0;

            //각 행의 글자 수만큼 반복
            for (int j = 0; j < t.Length; j++)
            {
                //문자열(string)은 단일 문자(char)의 배열로 취급할 수 있음
                switch (t[j])
                {
                    case '.':
                    case '*':

                        //Pad 배치에 필요한 공간
                        x += 0.15f;

                        break;
                    case '>':
                        x += 0.15f;
                        break;
                    case '^':
                        y -= 0.05f;
                        break;
                }
            }

            //각 행의 최대 Pad 수 계산
            if (x > maxX)
            {
                maxX = x;
            }
            //전체 행의 수
            y++;
        }
        //Pad 가로 시작 위치
        sx = -maxX / 2;
        sy = (y - 1) / 2;
    }

    //사용자가 터치해야 할 Pad들을 보여줌
    IEnumerator ShowTouch()
    {
        state1 = STATE.WAIT;


        //랜덤으로 Pad순서 생성
        //stage마다 문제가 바뀔 때
        //ShuffleTouch();
        StartCoroutine(ShuffleTouch());
        yield return new WaitForSeconds(0.1f);

        //문제 제시 전에 Stage 알려줌
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(0.5f);

        //눌러야 되는 Pad 순서 처음으로 초기화
        step1 = 0;

        for(int i = 0; i < padCnt1; i++)
        {
            if (arPads1[i])
            {
                //pad를 tag를 이용하여 설정
                //ShuffleTouch에서 arPads 배열 랜덤 생성
                GameObject pad = GameObject.FindWithTag("pad" + (i+1));
                //문제 보여줄 때 효과음 실행
                pad.SendMessage("PlayAud", SendMessageOptions.DontRequireReceiver);
                //눌러야 되는 Pad 파란색으로 보여줌
                //"ShowPad"는 PadCtrl.cs에서 확인
                pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            }
        }

        /*
        //stageNum만큼 눌러야 되는 Pad 순서대로 보여줌
        for (int i = 1; i <= (stageNum1+3)/2; i++)
        {
            //pad를 tag를 이용하여 설정
            //ShuffleTouch에서 arPads 배열 랜덤 생성
            GameObject pad = GameObject.FindWithTag("pad" + arPads1[i - 1]);
            //문제 보여줄 때 효과음 실행
            pad.SendMessage("PlayAud", SendMessageOptions.DontRequireReceiver);
            //눌러야 되는 Pad 파란색으로 보여줌
            //"ShowPad"는 PadCtrl.cs에서 확인
            pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            //yield return new WaitForSeconds(1f);
        }
        */
        //문제 보여준 후 사용자가 터치할 수 있는 순간을 알려줌
        yield return new WaitForSeconds(1f);
        StartCoroutine(ShowPushTiming());
        yield return new WaitForSeconds(0.1f);

        //터치할 수 있도록 설정
        isTouch1 = true;
        state1 = STATE.IDLE;
    }

    //사용자가 눌러야 되는 Pad를 랜덤으로 받을 수 있도록 설정
    //arPads 배열 설정
    IEnumerator ShuffleTouch()
    {
        r = 0;

        while (r < (stageNum1+3)/2)
        {
            //1부터 pad갯수 사이에 숫자를 랜덤으로 설정
            int PadN = Random.Range(0, padCnt1);
            
            if (!arPads1[PadN])
            {
                arPads1[PadN] = true;
                ++r;
            }
            else
            {
                continue;
            }
            
        }
        yield return new WaitForSeconds(0.1f);
    }

    
    //스테이지 시작시 스테이지 번호를 보여준다.
    IEnumerator ShowStageNum()
    {
        stageNumText.text =  stageNum1 + " 단계";
        //levelNum이 1이면 easy
        if (levelNum1 == 1)
        {
            levelText.text = "쉬움";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum이 2이면 normal
        else if (levelNum1 == 2)
        {
            levelText.text = "보통";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum이 3이면 hard
        else if (levelNum1 == 3)
        {
            levelText.text = "어려움";

            yield return new WaitForSeconds(0.5f);
        }

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);
    }

    //누르는 타이밍을 알려준다.
    IEnumerator ShowPushTiming()
    {
        pushText.text = "시작!";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        stageTime = Time.time;
        pushText.text = "";
        isStagetime = true;
        //왜지?
        yield return new WaitForSeconds(2f);
    }

    //Stage를 Clear했다는 것을 알림
    IEnumerator ShowClear()
    {
        pushText.color = Color.green; // Change the text color to green

        pushText.text = "성공!";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";
        pushText.color = Color.black; // Change the text color to green

        yield return new WaitForSeconds(1f);
    }

    //Stage를 Clear하지 못함
    IEnumerator ShowFail()
    {
        pushText.color = Color.red; // Change the text color to green

        pushText.text = "실패!";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";
        pushText.color = Color.black; // Change the text color to green

        yield return new WaitForSeconds(1f);
    }
    

}
