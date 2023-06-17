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
    public string targetScriptName; // 활성화할 스크립트의 이름

    //balloon 터치 여부
    public AudioClip audioClip; // 오디오 클립
    private AudioSource audioSource;
    public GameObject balloonPrefab; // 풍선 프리팹
    public GameObject Failed_balloonPrefab; // 풍선 프리팹
    //박스콜리더
    public GameObject[] spawnAreas;

    //눌러야 되는 패드 순서

    //틀린 횟수
    private int missNum = 2;

    //스테이지의 전체 패드 수
    static public int padCnt;
    //순서 맞춘 횟수

    //스테이지 번호
    static public int stageNum = 1;
    public int stage_move = 1;
    //난이도 번호 (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs에서 설정
    static public int levelNum = 1;
    static public int stage_temp = 0;
    //최대 스테이지 수
    static public int stageCnt = 10;

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
    private List<Vector3> balloonPositions = new List<Vector3>(); // 생성된 풍선의 위치를 저장할 리스트
    private float balloonRadius = 0.5f; // 풍선의 반지름



void Start()
    {
        Result_Game3.isResult = false;
    }




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
    //private int fail = 0;

    public int[] Clearcnt = {2,2,3,3,3,4,4,5,5,6};
    public int[] FailBalloonscnt = { 1, 1, 1, 2, 2, 2, 2, 3, 3, 3 };
    
    //어려움 난이도
    public int[] Clearcnt_3 = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 5 };
    public int[] FailBalloonscnt_3 = { 0, 1, 1, 2, 2, 2, 2, 3, 3, 3 };

    bool FailBalloon = false;
    //bool SuccessBalloon = false;

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
                Result_Game3.isResult = false;
                over = false;
                StartCoroutine(MakeStage());
                Debug.Log("Start");
                break;

            //state가 MAKE이면 문제 제시
            //ShowTouch() 실행
            case STATE.MAKE:
                
                if (stage_temp != stageCnt)
                {
                    StartCoroutine(ShowTouch(stageNum));
                    stage_temp++;
                }//풍선 보여주기

                //틀린 횟수 출력
                missText.text = "목숨 : " + missNum;
                //맞춘 횟수 출력
                hitText.text = "성공 횟수 : " + score;
                Debug.Log("????" + score);
                Debug.Log("????" + stage_temp);
                Debug.Log("????" + stageCnt);


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

        //터치 패드 tag를 이용하여 제거

        //GameObject balloons = GameObject.FindWithTag("balloon" );
        //Destroy(balloons);
        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {
            Destroy(balloon);
        }
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
        //arPads[step]은 step번째 눌러야 되는 Pad번호
        //padNum은 PadCtrl.cs에서 받아온 사용자가 누른 Pad번호
        if (FailBalloon == true)//
        {
            //틀렸을 경우 missNum과 totalMiss 하나 씩 증가
            //--missNum; //스테이지마다 초기화
            --totalMiss; //누적
            //틀린 횟수 update
            missText.text = "목숨 : " + missNum;

            // missNum이 1보다 크다는 것은 한 스테이지에서 두 번 틀렸다는 뜻
            if (missNum < 1)
            {

                //두 번 틀리면 터치 안 되고, Fail 출력 시간도 안흐르게...
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
        if (levelNum == 1)
        {
            //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
            if (score == Clearcnt[stageNum - 1])
            {
                //SuccessBalloon = false;
                //맞춘 횟수 증가
                //맞춘 횟수 update
                hitText.text = "성공 횟수 : " + score;
                Debug.Log("히트" + score);
                Debug.Log("클리어" + Clearcnt[stageNum - 1]);
                //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
                if (score == Clearcnt[stageNum - 1])
                {
                    //터치 안 되게 바꾸고, state는 CLEAR로 변환
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }

            }
        }
        else if (levelNum == 2)
        {
            Debug.Log("히트" + score+"/"+ (Clearcnt[stageNum - 1] - FailBalloonscnt[stageNum - 1]));
            //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
            if (score == (Clearcnt[stageNum - 1] - FailBalloonscnt[stageNum - 1]))
            {

                //SuccessBalloon = false;
                //맞춘 횟수 증가
                //맞춘 횟수 update
                hitText.text = "성공 횟수 : " + score;
                Debug.Log("히트" + score);
                Debug.Log("클리어" + Clearcnt[stageNum - 1]);
                //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
                if (score == (Clearcnt[stageNum - 1] - FailBalloonscnt[stageNum - 1]))
                {

                    //터치 안 되게 바꾸고, state는 CLEAR로 변환
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }
                
            }
            

        }
        else if (levelNum == 3)
        {
            Debug.Log("히트" + score + "/" + (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]));
            //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
            if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
            {

                //SuccessBalloon = false;
                //맞춘 횟수 증가
                //맞춘 횟수 update
                hitText.text = "성공 횟수 : " + score;
                Debug.Log("히트" + score);
                Debug.Log("클리어" + Clearcnt_3[stageNum - 1]);
                //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
                if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
                {

                    //터치 안 되게 바꾸고, state는 CLEAR로 변환
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }

            }


        }
        else if (levelNum == 4)
        {
            Debug.Log("히트" + score + "/" + (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]));
            //눌러야 되는 Pad와 사용자가 누른 Pad가 같은 경우
            if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
            {

                //SuccessBalloon = false;
                //맞춘 횟수 증가
                //맞춘 횟수 update
                hitText.text = "성공 횟수 : " + score;
                Debug.Log("히트" + score);
                Debug.Log("클리어" + Clearcnt_3[stageNum - 1]);
                //해당 스테이지에서 눌러야 되는 Pad를 모두 눌렀을 경우
                if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
                {

                    //터치 안 되게 바꾸고, state는 CLEAR로 변환
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }

            }


        }










        yield return new WaitForSeconds(0.03f);
        //해당 스테이지에 눌러야 되는 Pad가 남았을 경우 이어서 플레이
        state = STATE.IDLE;
    }

    //해당 스테이지에서 주어진 Pad 모두 눌렀을 경우
    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        isTotaltime = false;
        isStagetime = false;
        //Clear 문구 보여줌
        StartCoroutine(ShowClear());
        stageTimeText.text = "남은 시간 : " + 60;
        yield return new WaitForSeconds(1f);

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
        isTotaltime = false;
        isStagetime = false;

        //현재까지 흐른 전체 시간 저장
        time_temp = (int)(totalTime);

        //스테이지 시간 초기화
        stageTime = Time.time;


        //맞춘 횟수 초기화
        hitText.text = "성공 횟수 : " + score;
        //맞춰야 되는 Pad갯수 초기화
        //틀린 횟수 초기화
        missNum = totalMiss;
        score = 0;
        missText.text = "목숨 : " + missNum;
        //다음 문제 제시
        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {
            Destroy(balloon);
        }
        state = STATE.MAKE;
    }

    //처음 게임에 들어왔을 때 기본 세팅
    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(1f);
        //난이도 선택 창 비활성화
        Disappear_select3.isHide = true;
        state = STATE.MAKE;
    }

    //박스콜리더 위치 지정
    Vector3 GetRandomPositionInBoxCollider(BoxCollider boxCollider)
    {
        Vector3 boxSize = boxCollider.size;
        Vector3 boxCenter = boxCollider.center;

        float randomX = Random.Range(-boxSize.x / 2, boxSize.x / 2) + boxCenter.x;
        float randomY = Random.Range(-boxSize.y / 2, boxSize.y / 2) + boxCenter.y;
        float randomZ = Random.Range(-boxSize.z / 2, boxSize.z / 2) + boxCenter.z;

        Vector3 randomPosition = boxCollider.transform.TransformPoint(new Vector3(randomX, randomY, randomZ));
        return randomPosition;
    }

    //3박스콜리더 위치 지정
    Vector3 GetRandomPositionInBoxCollider_3(BoxCollider boxCollider)
    {

        Vector3 boxSize = boxCollider.size;
        Vector3 boxCenter = boxCollider.center;


        // BoxCollider 영역을 2만큼 늘리는 코드
        float randomX = Random.Range(-boxSize.x / 2, boxSize.x / 2) + boxCenter.x;
        float randomY = Random.Range(-boxSize.y / 2, boxSize.y / 2) + boxCenter.y;
        float randomZ = Random.Range(-boxSize.z / 2, boxSize.z / 2) + boxCenter.z;

        Vector3 randomPosition = boxCollider.transform.TransformPoint(new Vector3(randomX, randomY, randomZ));

        return randomPosition;
    }



    bool IsPositionFree(Vector3 position)
    {
        foreach (Vector3 balloonPosition in balloonPositions)
        {
            float distanceToExistingBalloon = Mathf.Sqrt(Mathf.Pow(position.x - balloonPosition.x, 2f) + Mathf.Pow(position.y - balloonPosition.y, 2f));

            if (distanceToExistingBalloon < balloonRadius*2)
            {
                // 이 위치는 이미 존재하는 풍선과 너무 가까움
                return false;
            }
        }
        // 이 위치는 모든 존재하는 풍선과 충분히 멀리 떨어져 있음
        return true;
    }

    bool IsPositionFree_3(Vector3 position)
    {
        foreach (Vector3 balloonPosition in balloonPositions)
        {
            float distanceToExistingBalloon = Mathf.Abs(position.x - balloonPosition.x);

            if (distanceToExistingBalloon < balloonRadius * 2)
            {
                // 이 위치는 이미 존재하는 풍선과 너무 가까움
                return false;
            }
        }
        // 이 위치는 모든 존재하는 풍선과 충분히 멀리 떨어져 있음
        return true;
    }




    // 스테이지마다 풍선 보여주기
    IEnumerator ShowTouch(int stage)
    {
        state = STATE.WAIT;
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(0.5f);

        if (levelNum == 1)
        {

            // 기존의 풍선 위치를 초기화
            balloonPositions.Clear();
            int balloonCount = Clearcnt[stage - 1];
            int maxAttempts = 10000; // 최대 시도 횟수

            for (int i = 0; i < balloonCount; i++)
            {
                GameObject spawnArea = spawnAreas[stage - 1];
                BoxCollider spawnAreaBoxCollider = spawnArea.GetComponent<BoxCollider>();
                int currentAttempts = 0; // 현재 시도 횟수
                                         // 이 위치에 풍선이 없을 때까지 반복
                while (currentAttempts < maxAttempts)
                {
                    Vector3 randomPosition = GetRandomPositionInBoxCollider(spawnAreaBoxCollider);
                    if (IsPositionFree(randomPosition))
                    {
                        balloonPositions.Add(randomPosition);  // 새 위치를 리스트에 추가
                        GameObject balloon = Instantiate(balloonPrefab, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // 풍선에 태그 추가
                        // 풍선을 생성하고 반복문을 종료
                        break;
                    }
                    else
                    {
                        Debug.Log("위치가 사용 중입니다. 다른 위치 시도 중...");
                        currentAttempts = 0; // 현재 시도 횟수

                    }
                    currentAttempts++;
                }

            }

            yield return null; // 한 프레임 대기
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // 오디오 클립 할당
            audioSource.Play();

            StartCoroutine(ShowPushTiming());


        }
        else if (levelNum == 2)
        {
            // 기존의 풍선 위치를 초기화
            balloonPositions.Clear();
            int balloonCount = Clearcnt[stage - 1];
            int maxAttempts = 10000; // 최대 시도 횟수

            int failedBalloonCount = FailBalloonscnt[stage - 1];
            List<int> failedBalloonIndices = new List<int>(); // Failed_balloonPrefab을 생성할 풍선 인덱스들을 저장하는 리스트


            while (failedBalloonIndices.Count < failedBalloonCount)
            {
                int randomIndex = Random.Range(0, balloonCount);
                if (!failedBalloonIndices.Contains(randomIndex))
                {
                    failedBalloonIndices.Add(randomIndex);
                }
            }

            for (int i = 0; i < balloonCount; i++)
            {
                GameObject spawnArea = spawnAreas[stage - 1];
                BoxCollider spawnAreaBoxCollider = spawnArea.GetComponent<BoxCollider>();
                int currentAttempts = 0; // 현재 시도 횟수
                                         // 이 위치에 풍선이 없을 때까지 반복
                while (currentAttempts < maxAttempts)
                {
                    Vector3 randomPosition = GetRandomPositionInBoxCollider(spawnAreaBoxCollider);
                    if (IsPositionFree(randomPosition))
                    {
                        GameObject balloonPrefabToInstantiate = balloonPrefab;
                        if (failedBalloonIndices.Contains(i))
                        {
                            balloonPrefabToInstantiate = Failed_balloonPrefab;
                        }

                        balloonPositions.Add(randomPosition); // 새 위치를 리스트에 추가
                        GameObject balloon = Instantiate(balloonPrefabToInstantiate, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // 풍선에 태그 추가
                        break;
                    }
                    else
                    {
                        Debug.Log("위치가 사용 중입니다. 다른 위치 시도 중...");
                        currentAttempts = 0; // 현재 시도 횟수

                    }
                    currentAttempts++;
                }


            }

        

            yield return null; // 한 프레임 대기
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // 오디오 클립 할당
            audioSource.Play();

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);



        }
        else if (levelNum == 3)
        {
            // 기존의 풍선 위치를 초기화
            balloonPositions.Clear();
            int balloonCount = Clearcnt_3[stage - 1];
            int maxAttempts = 10000; // 최대 시도 횟수

            int failedBalloonCount = FailBalloonscnt_3[stage - 1];
            List<int> failedBalloonIndices = new List<int>(); // Failed_balloonPrefab을 생성할 풍선 인덱스들을 저장하는 리스트


            while (failedBalloonIndices.Count < failedBalloonCount)
            {
                int randomIndex = Random.Range(0, balloonCount);
                if (!failedBalloonIndices.Contains(randomIndex))
                {
                    failedBalloonIndices.Add(randomIndex);
                }
            }

            for (int i = 0; i < balloonCount; i++)
            {
                GameObject spawnArea = spawnAreas[stage - 1];
                BoxCollider spawnAreaBoxCollider = spawnArea.GetComponent<BoxCollider>();
                int currentAttempts = 0; // 현재 시도 횟수
                                         // 이 위치에 풍선이 없을 때까지 반복
                while (currentAttempts < maxAttempts)
                {
                    Vector3 randomPosition = GetRandomPositionInBoxCollider_3(spawnAreaBoxCollider);

                    if (IsPositionFree_3(randomPosition))
                    {
                        GameObject balloonPrefabToInstantiate = balloonPrefab;
                        if (failedBalloonIndices.Contains(i))
                        {
                            balloonPrefabToInstantiate = Failed_balloonPrefab;
                        }

                        balloonPositions.Add(randomPosition); // 새 위치를 리스트에 추가
                        GameObject balloon = Instantiate(balloonPrefabToInstantiate, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // 풍선에 태그 추가
                        stage_move = stageNum;

                       //이걸로 움직이는 코드 실행
                       MonoBehaviour targetScript = balloon.GetComponent(targetScriptName) as MonoBehaviour;
                        if (targetScript != null)
                        {
                            targetScript.enabled = true;
                        }
                        else
                        {
                            Debug.LogWarning("Script " + targetScriptName + " not found on GameObject " + balloon.name);
                        }
                        Debug.Log("생성 " + targetScript + "/" + targetScriptName + "/" + balloon.name) ;
                        break;
                    }
                    else
                    {
                        Debug.Log("위치가 사용 중입니다. 다른 위치 시도 중...");
                        currentAttempts = 0; // 현재 시도 횟수

                    }
                    currentAttempts++;
                }


            }



            yield return null; // 한 프레임 대기
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // 오디오 클립 할당
            audioSource.Play();

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);



        }
        else if (levelNum == 4)
        {
            // 기존의 풍선 위치를 초기화
            balloonPositions.Clear();
            if (stage == 0)
            {
                yield return new WaitForSeconds(5f);
            }
            int balloonCount = Clearcnt_3[stage - 1];
            int maxAttempts = 10000; // 최대 시도 횟수

            int failedBalloonCount = FailBalloonscnt_3[stage - 1];
            List<int> failedBalloonIndices = new List<int>(); // Failed_balloonPrefab을 생성할 풍선 인덱스들을 저장하는 리스트


            while (failedBalloonIndices.Count < failedBalloonCount)
            {
                int randomIndex = Random.Range(0, balloonCount);
                if (!failedBalloonIndices.Contains(randomIndex))
                {
                    failedBalloonIndices.Add(randomIndex);
                }
            }

            for (int i = 0; i < balloonCount; i++)
            {
                GameObject spawnArea = spawnAreas[stage - 1];
                BoxCollider spawnAreaBoxCollider = spawnArea.GetComponent<BoxCollider>();
                int currentAttempts = 0; // 현재 시도 횟수
                                         // 이 위치에 풍선이 없을 때까지 반복
                while (currentAttempts < maxAttempts)
                {
                    Vector3 randomPosition = GetRandomPositionInBoxCollider_3(spawnAreaBoxCollider);

                    if (IsPositionFree_3(randomPosition))
                    {
                        GameObject balloonPrefabToInstantiate = balloonPrefab;
                        if (failedBalloonIndices.Contains(i))
                        {
                            balloonPrefabToInstantiate = Failed_balloonPrefab;
                        }

                        balloonPositions.Add(randomPosition); // 새 위치를 리스트에 추가
                        GameObject balloon = Instantiate(balloonPrefabToInstantiate, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // 풍선에 태그 추가
                        stage_move = stageNum;
                        if (balloonPrefabToInstantiate != Failed_balloonPrefab)
                        {
                            // 현재 크기에서 랜덤한 비율을 적용하여 크기 조정
                            if (stage - 1 > 9) //10
                            {
                                float currentScale = balloon.transform.localScale.x;
                                float randomScaleFactor = Random.Range(0.25f, 0.25f);
                                float newScale = currentScale * randomScaleFactor;
                                balloon.transform.localScale = new Vector3(newScale, newScale, newScale);
                            }
                            else if (stage - 1 > 7) //8,9,
                            {
                                float currentScale = balloon.transform.localScale.x;
                                float randomScaleFactor = Random.Range(0.25f, 0.5f);
                                float newScale = currentScale * randomScaleFactor;
                                balloon.transform.localScale = new Vector3(newScale, newScale, newScale);
                            }
                            else if (stage - 1 > 4) //567
                            {
                                float currentScale = balloon.transform.localScale.x;
                                float randomScaleFactor = Random.Range(0.4f, 0.6f);
                                float newScale = currentScale * randomScaleFactor;
                                balloon.transform.localScale = new Vector3(newScale, newScale, newScale);
                            }
                            else 
                            {
                                float currentScale = balloon.transform.localScale.x;
                                float randomScaleFactor = Random.Range(0.5f, 0.7f);
                                float newScale = currentScale * randomScaleFactor;
                                balloon.transform.localScale = new Vector3(newScale, newScale, newScale);
                            }
                        }

                        //이걸로 움직이는 코드 실행
                        MonoBehaviour targetScript = balloon.GetComponent(targetScriptName) as MonoBehaviour;
                        if (targetScript != null)
                        {
                            targetScript.enabled = true;
                        }
                        else
                        {
                            Debug.LogWarning("Script " + targetScriptName + " not found on GameObject " + balloon.name);
                        }
                        Debug.Log("생성 " + targetScript + "/" + targetScriptName + "/" + balloon.name);
                        break;
                    }
                    else
                    {
                        Debug.Log("위치가 사용 중입니다. 다른 위치 시도 중...");
                        currentAttempts = 0; // 현재 시도 횟수

                    }
                    currentAttempts++;
                }


            }



            yield return null; // 한 프레임 대기
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // 오디오 클립 할당
            audioSource.Play();

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);



        }


        // 터치할 수 있도록 설정
        state = STATE.IDLE;
    }



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
        else if (levelNum == 4)
        {
            levelText.text = "검사 모드!";

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
        pushText.color = Color.green; // Change the text color to green

        pushText.text = "성공!";

        //1초 후 사라짐

        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {

            Collider balloonCollider = balloon.GetComponent<Collider>();
            balloonCollider.isTrigger = true;
        }
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
        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {
            Collider balloonCollider = balloon.GetComponent<Collider>();
            balloonCollider.isTrigger = true;
        }

        //1초 후 사라짐
        yield return new WaitForSeconds(1f);

        pushText.text = "";
        pushText.color = Color.black; // Change the text color to green

        yield return new WaitForSeconds(1f);

    }




    public void AddScore(int points)
    {
        score += points;
    }

    public void PrintScore()
    {
        Debug.Log("Score: " + score);
        hitText.text = "성공 횟수 : " + score;

    }


    public void PrintFalse()
    {
        FailBalloon = true;
        Debug.Log("fail: " + FailBalloon + missNum + " 점수는 "+score);
    }
    public void MissScore(int points)
    {
        missNum -= points;
    }
}
