using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Bhaptics.SDK2;

public class GameManager3 : MonoBehaviour
{
    //게임 전체 시간, 스테이지 시간, 틀린 횟수, 맞춘 횟수, 스테이지 번호, (시작, 성공, 실패)를 나타내는 텍스트
    public TextMeshPro totalTimeText, stageTimeText, missText, hitText, stageNumText, pushText, levelText;

    //balloon 터치 여부
    static public bool isTouch = true;
    public AudioClip audioClip; // 오디오 클립
    private AudioSource audioSource;
    public GameObject balloonPrefab; // 풍선 프리팹
    public GameObject Failed_balloonPrefab; // 풍선 프리팹


    //눌러야 되는 패드 순서

    //틀린 횟수
    int missNum = 2;

    //스테이지의 전체 패드 수
    static public int padCnt;
    //순서 맞춘 횟수
    int hitCnt = 0;
    //스테이지 번호
    static public int stageNum = 1;

    //난이도 번호 (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs에서 설정
    static public int levelNum = 1;

    //최대 스테이지 수
    static public int stageCnt = 2;

    //패드 문제 배열
    //ShuffleTouch에서 랜덤으로 설정
    static public int[] arPads = new int[20];

    //게임 시작 시간
    static public float startTime;

    //스테이지 경과 시간
    float stageTime;

    //전체 시간
    static public float totalTime;

    //전체 miss 횟수
    static public int totalMiss;

    //스테이지 시간
    static public int time2 = 60;

    //게임이 진행중이지 않을 때 시간을 멈췄다 진행하기 위한 시간 저장 변수
    int time_temp = 0;

    //시간 초과로 인한 종료 판단
    static public bool over = false;

    //문제가 제시되고 있을 때 시간 정지를 판단하기 위한 변수
    bool isTotaltime = false;
    bool isStagetime = false;

    //위치 정보 배열
    private Vector3[][] stageBalloonPositions = new Vector3[9][];

    int stage_temp = 0;



//게임 상태를 나타내는 STATE
public enum STATE
    {
        START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR, FINISH, SELECT, RESULT
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
    static public STATE state = STATE.SELECT;
    private int score = 0;
    public int[] Clearcnt = {1,2,2,3,3,3,4,4,4,4};
    bool FailBalloon = false;
    bool SuccessBalloon = false;

    // Update is called once per frame
    public void Update()
    {
        //isTotaltime이 true이면 전체 시간 흐름
        if (isTotaltime)
        {
            //전체 게임 시간 계산
            totalTime = (int)(time_temp + (int)(Time.time - stageTime));
            /*
            //게임 전체 시간 출력
            totalTimeText.text = "Total time : " + totalTime;
            */
        }

        //isStagetime이 true이면 stage 시간이 흐름
        if (isStagetime)
        {
            //스테이지 게임 시간 계산
            time2 = 60 - (int)(Time.time - stageTime);
            //스테이지 게임 시간 출력
            stageTimeText.text = "남은 시간 : " + time2;
        }

        //time2는 stage 시간
        //60초 지나면 게임 종료
        if (time2 <= 0 && !over)
        {
            totalTime += 60 - time2;
            //한 번 더 판단
            over = true;
            //시간 다시 초기화
            time2 = 60;
            //시간 초과로 인한 게임 종료
            isTouch = false;
            isStagetime = false;
            isTotaltime = false;


            StartCoroutine(ShowFail());
            //state가 FINISH로 바뀜
            FailAudio.play();
            BhapticsLibrary.Play(BhapticsEvent.FAIL);
            state = STATE.FINISH;
        }





        //state에 따라 알맞은 환경 실행
        switch (state)
        {
            //state가 START이면 Level에 맞는 스테이지 만들기
            //MakeStage() 실행
            case STATE.START:
                stageNum = 1;
                missNum = 2;
                totalMiss = 2;
                totalTime = 0f;
                over = false;
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
                Debug.Log("????" + stage_temp);
                Debug.Log("????" + stageCnt);

                if (stage_temp != stageCnt)
                {
                    StartCoroutine(ShowTouch(stageNum));
                    stage_temp++;
                }//풍선 보여주기
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
                //isTotaltime = false;
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


    //결과를 보여주는 코드
    //Result_VR.cs 파일에 Update 부분 실행
    IEnumerator ShowResult()
    {
        state = STATE.WAIT;
        //결과 UI를 보여주기 위해 true로 설정
        Result_Game3.isResult = true;
        //결과를 본 후에 다시 난이도를 선택할 수 있는 상태로 변환
        state = STATE.SELECT;
        yield return new WaitForSeconds(1);
    }


    //게임 종료 후 터치 패드 제거
    IEnumerator DestroyPad()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(1);

        //터치 패드 제거하면서 게임 중간에 나오는 UI도 같이 제거
        //틀린 횟수 출력
        missText.text = "";
        //맞춘 횟수 출력
        hitText.text = "";
        stageTimeText.text = "";
        stageNumText.text = "";
        levelText.text = "";
        Debug.Log("123");
        //터치 패드 tag를 이용하여 제거
        Debug.Log("12345" );
        GameObject balloons = GameObject.FindWithTag("balloon" );
        Destroy(balloons);
       
        //터치패드 제거 후 결과를 보여주는 상태로 변환
        state = STATE.RESULT;
    }


    //빨간 풍선 맞췄을 떄틀렸을 경우 실행되는 환경
    IEnumerator WrongPad()
    {
        //STATE.WAIT이랑 isTouch는 PadCtrl.cs에서 마우스 클릭 가능한 환경 설정
        //STATE.WAIT인 상태에서는 마우스 클릭 안 됨
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.1f);
        isTouch = true;
        //arPads[step]은 step번째 눌러야 되는 Pad번호
        //padNum은 PadCtrl.cs에서 받아온 사용자가 누른 Pad번호
        if (FailBalloon == true)//
        {
            //틀렸을 경우 missNum과 totalMiss 하나 씩 증가
            --missNum; //스테이지마다 초기화
            --totalMiss; //누적
            //틀린 횟수 update
            missText.text = "목숨 : " + missNum;

            // missNum이 1보다 크다는 것은 한 스테이지에서 두 번 틀렸다는 뜻
            if (missNum < 1)
            {

                //두 번 틀리면 터치 안 되고, Fail 출력 시간도 안흐르게...
                isTouch = false;
                isStagetime = false;
                isTotaltime = false;
                totalTime += 60 - time2;

                StartCoroutine(ShowFail());
                yield return new WaitForSeconds(2f);
                //state가 FINISH로 바뀜
                FailAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.FAIL);
                state = STATE.FINISH;
            }
            FailBalloon = false; // 다시 false로
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
        yield return new WaitForSeconds(0.1f);
        isTouch = true;

        //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
        if (SuccessBalloon == true)
        {
            //맞춘 횟수 증가
            ++hitCnt;
            //맞춘 횟수 update
            hitText.text = "성공 횟수 : " + hitCnt;
            //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
            if (hitCnt == Clearcnt[stageNum-1])
            {
                //터치 안 되게 바꾸고, state는 CLEAR로 변환
                isTouch = false;
                isTotaltime = false;
                isStagetime = false;
                state = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            //step을 늘려서 눌러야 되는 다음 Pad 설정
            SuccessBalloon = false;

        }

        yield return new WaitForSeconds(0.03f);
        //해당 스테이지에 눌러야 되는 Pad가 남았을 경우 이어서 플레이
        state = STATE.IDLE;
    }

    //해당 스테이지에서 주어진 Pad 모두 눌렀을 경우
    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        isTouch = false;
        isTotaltime = false;
        isStagetime = false;

        yield return new WaitForSeconds(0.5f);
        //Clear 문구 보여줌
        StartCoroutine(ShowClear());
        stageTimeText.text = "남은 시간 : " + 60;
        yield return new WaitForSeconds(2f);

        //다음 스테이지 번호
        if (stageNum < stageCnt)
        {
            ++stageNum;
        }
        //최대 스테이지가 되었을 경우
        else if(stageNum == stageCnt)
        {
            BhapticsLibrary.Play(BhapticsEvent.CLEAR);
            ClearAudio.play();
            //게임 끝, FINISH 상태로
            state = STATE.FINISH;
            yield return new WaitForSeconds(0.5f);
        }
        //stage가 바뀌는 순간에는 시간이 안 흐름
        isTouch = false;
        isTotaltime = false;
        isStagetime = false;

        //현재까지 흐른 전체 시간 저장
        time_temp = (int)(totalTime);

        //스테이지 시간 초기화
        stageTime = Time.time;


        //맞춘 횟수 초기화
        hitCnt = 0;
        hitText.text = "성공 횟수 : " + hitCnt;
        //맞춰야 되는 Pad갯수 초기화
        //틀린 횟수 초기화
        missNum = totalMiss;
        missText.text = "목숨 : " + missNum;
        //다음 문제 제시
        state = STATE.MAKE;

    }

    //처음 게임에 들어왔을 때 기본 세팅
    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(1f);
        //난이도 선택 창 비활성화
        Disappear_select3.isHide = true;
    //SetPadPos(out sx, out sy);

    //배열의 행의 수만큼 반복
    //foreach (string t in str)
    //{
    //    //각 행의 문자열을 단일 문자 배열로 변환(문자열 좌우의 공백 제거), 변수의 좌우 공백을 제거(Trim)하고 단일 문자배열로 변환
    //    char[] ch = t.Trim().ToCharArray();

    //    //Pad의 x축 좌표
    //    float x = 1.3f;

    //    //1행의 문자열 길이만큼 반복
    //    //배열의 ch의 한문자를 읽고 변수 c에 할당한다
    //    foreach (char c in ch)
    //    {
    //        switch (c)
    //        {
    //            //맵의 내용이 *이면 그 위치에 Pad 만들어서 배치
    //            case '*':
    //                //Pad 만들기
    //                //Prefap으로 만들어진 Pad를 GameObject로 설정
    //                GameObject pad = Instantiate(Resources.Load("Prefab/Pad_VR")) as GameObject;

    //                //Pad 좌표설정
    //                pad.transform.position = new Vector3(x, sy, 1.1f);

    //                //pad1, pad2, ... pad25까지 tag로 설정되어 있음
    //                //생성되는 Pad마다 tag를 붙여줌
    //                //나중에 사용자가 선택한 Pad와 눌러야 되는 Pad 비교할 때 쓰임
    //                //pad.tag = "pad" + n++;
    //                x += 0.3f;
    //                break;

    //            //빈칸 처리
    //            case '.':
    //                x += 0.05f;
    //                break;

    //            //반 칸 공백처리
    //            case '>':
    //                x += 0.5f;
    //                break;

    //            //반 줄 행간 처리
    //            case '^':
    //                sy += 0.05f;
    //                break;
    //        }

    //        //카드를 표시한 후에는 지연 시간을 두어 카드가 배치되는 과정이 보이도록함
    //        if (c == '*')
    //        {
    //            yield return new WaitForSeconds(0.03f);
    //        }
    //    }

    //    //한 줄 아래로 이동
    //    sy -= 0.05f;
    //}

        //Pad 셋팅 완료 후 문제 제시 상태로 넘어감
        state = STATE.MAKE;
    }



    //스테이지마다 풍선 보여주기
    IEnumerator ShowTouch(int stage)
    {
        state = STATE.WAIT;

        //랜덤으로 Pad순서 생성
        //stage마다 문제가 바뀔 때
        //ShuffleTouch();

        // 풍선 위치 입력
            StartCoroutine(ShowStageNum());
            yield return new WaitForSeconds(0.5f);
            if (stage == 1)
            {
                // 스테이지 1의 풍선 위치
                stageBalloonPositions[0] = new Vector3[] { new Vector3(-1.11f, 2.047f, 2.331f) };
            }
            else if (stage == 2)
            {
                // 스테이지 2의 풍선 위치
                stageBalloonPositions[1] = new Vector3[] { new Vector3(1f, 2f, 1f), new Vector3(1f, 0f, 1f) };
            }


            // 풍선 생성 및 배치
            foreach (Vector3 position in stageBalloonPositions[stage - 1])
            {
                GameObject balloon = Instantiate(balloonPrefab);
                balloon.transform.position = position;
                balloon.tag = "balloon"; // 풍선에 태그 추가


                yield return null; // 한 프레임 대기
                audioSource = gameObject.AddComponent<AudioSource>();
                audioSource.clip = audioClip; // 오디오 클립 할당
                audioSource.Play();

            }

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);

        
        //터치할 수 있도록 설정
        isTouch = true;
        state = STATE.IDLE;
    }

    ////사용자가 눌러야 되는 Pad를 랜덤으로 받을 수 있도록 설정
    ////arPads 배열 설정
    ////이걸로 빨간 풍선 구현하기
    //static public void Shuffle()
    //{
    //    for (int i = 0; i < stageCnt; i++)
    //    {
    //        //1부터 pad갯수 사이에 숫자를 랜덤으로 설정
    //        int r = Random.Range(1, padCnt + 1);
    //        //랜덤으로 뽑은 숫자를 배열에 순서대로 설정
    //        arPads[i] = r;
    //    }
    //}


    //스테이지 시작시 스테이지 번호를 보여준다.
    IEnumerator ShowStageNum()
    {
        stageNumText.text = stageNum + " 단계";
        //levelNum이 1이면 easy
        if (levelNum == 1)
        {
            levelText.text = "쉬움";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum이 2이면 normal
        else if (levelNum == 2)
        {
            levelText.text = "보통";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum이 3이면 hard
        else if (levelNum == 3)
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
        isTotaltime = true;
        //왜지?
        yield return new WaitForSeconds(1f);
    }

    //Stage를 Clear했다는 것을 알림
    IEnumerator ShowClear()
    {
        pushText.text = "성공!";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }

    //Stage를 Clear하지 못함
    IEnumerator ShowFail()
    {
        pushText.text = "실패!";

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }




    public void AddScore(int points)
    {
        score += points;
    }

    public void PrintScore()
    {
        Debug.Log("Score: " + score);
    }

    public void PrintTrue()
    {
        SuccessBalloon = true;
        Debug.Log("Score: " + SuccessBalloon);
    }

    public void PrintFalse()
    {
        FailBalloon = true;
        Debug.Log("Score: " + FailBalloon);
    }
}
