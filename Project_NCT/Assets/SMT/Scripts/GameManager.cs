using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //게임 전체 시간, 스테이지 시간, 스테이지 번호, 맞춘 카드의 숫자
    public Text totalTimeText, stageTimeText, stageText, hitText, stageNumText;

    //클릭한 카드 번호
    static public int cardNum;

    //직전의 카드 번호
    int lastNum = 0;

    //스테이지의 전체 카드 수
    int cardCnt;

    //카드 클릭 횟수
    int hitCnt = 0;

    //스테이지 번호
    static public int stageNum = 1;

    //스테이지 수
    int stageCnt = 6;

    //카드 배열 카드 섞기용
    int[] arCards = new int[50];

    //게임 시작 시간
    float startTime;

    //스테이지 경과 시간
    float stageTime;

    //열거형의 자료를 설정하는 정의문 나열의 자료는 0,1,2...의 값이 할당된다
    public enum STATE
    {
        START, HIT, WAIT, IDLE, CLEAR
    }

    static public STATE state = STATE.START;

    
    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //시간 초기화
        startTime = stageTime = Time.time;
        //스테이지 만들기
        StartCoroutine(MakeStage());
    }

    // Update is called once per frame
    void Update()
    {
        int time1 = (int)(Time.time - startTime);
        int time2 = (int)(Time.time - stageTime);

        //게임 저체 시간, 스테이지 시간, 스테이지 번호, 맞춘 카드의 숫자를 화면에 출력
        totalTimeText.text = "Total time : " + time1;
        stageTimeText.text = "Stage Time : " + time2;
        stageText.text = "Stage : " + stageNum;
        hitText.text = "Hit : " + hitCnt;

        switch (state)
        {
            //스테이지 만들기
            case STATE.START:
                StartCoroutine(MakeStage());
                break;

            //같은 그림인지 판정
            case STATE.HIT:

                CheckCard();
                break;

            //스테이지를 클리어하고 다음 스테이지를 만듬
            case STATE.CLEAR:
                StartCoroutine(StageClear());
                break;
        }

        //게임중지
        if (Input.GetKeyDown(KeyCode.Escape)) // ESC 버튼
        {
            Application.Quit();
        }
    }

    void CheckCard()
    {
        state = STATE.WAIT;

        //첫 번째 카드
        if (lastNum == 0) //직전의 카드번호가 0일 때
        {
            //현재 카드 보존
            lastNum = cardNum; // 클릭한 카드 번호를 할당
            state = STATE.IDLE;
            return;
        }

        //이미지 찾기
        int img1 = (cardNum + 1) / 2;
        int img2 = (lastNum + 1) / 2;

        //다른 카드 이면 카드를 닫게 한다
        if (img1 != img2)
        {
            StartCoroutine(CloseTwoCards());

            lastNum = 0;
            state = STATE.IDLE;
            return;
        }

        //같은 카드면
        hitCnt += 2; //클릭 횟수 +2

        //카드가 모두 열리면 스테이지를 클리어 한다.
        if (hitCnt == cardCnt)
        {
            state = STATE.CLEAR;
            return;
        }

        //카드가 남아있으면 다른 카드를 조사한다.
        lastNum = 0;
        state = STATE.IDLE;
    }

    //카드 닫기
    IEnumerator CloseTwoCards()
    {
        //태그로 카드 찾기
        GameObject card1 = GameObject.FindWithTag("card" + lastNum);
        GameObject card2 = GameObject.FindWithTag("card" + cardNum);

        //카드 닫기
        yield return new WaitForSeconds(0.2f);
        card1.SendMessage("CloseCard", SendMessageOptions.DontRequireReceiver);
        card2.SendMessage("CloseCard", SendMessageOptions.DontRequireReceiver);

    }

    //스테이지를 클리어
    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        yield return new WaitForSeconds(2);

        //스테이지 카드 제거
        for (int i = 1; i<=cardCnt; i++)
        {
            GameObject card = GameObject.FindWithTag("card" + i);
            Destroy(card);
        }

        //다음 스테이지 번호
        ++stageNum;
        if (stageNum > stageCnt)
        {
            Application.LoadLevel("GameStart");
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
        //현재 작업중으로 설정
        state = STATE.WAIT;

        StartCoroutine(ShowStageNum());

        //시작카드의 x좌표
        float sx = 0;

        //시작카드의 z좌표
        float sz = 0;

        SetCardPos(out sx, out sz);

        //카드섞기
        ShuffleCard();

        //시작 카드의 번호
        int n = 1;

        //카드배열 읽기 배열의 1행을 읽고 변수 t에 할당한다
        string[] str = StageSet.stage[stageNum - 1];

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
                        GameObject card = Instantiate(Resources.Load("Prefab/Card")) as GameObject;

                        //카드 좌표설정
                        card.transform.position = new Vector3(x, 0, sz);

                        //태그 달기
                        //card.tag = "card" + n++;

                        //섞인 카드
                        card.tag = "card" + arCards[n++];
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
        //입력 대기중으로 설정
        state = STATE.IDLE;
    }

    //카드의 시작 위치 계산
    void SetCardPos(out float sx, out float sz)
    {
        //가로 카드 수 반 칸 공백 포함
        float x = 0;

        //세로 행수 반줄 행간 포함
        float z = 0;

        //가로 카드 최대 수
        float maxX = 0;

        //스테이지 전체 카드 수
        cardCnt = 0;

        //카드 배열 조사 맵 배열을 읽음
        string[] str = StageSet.stage[stageNum - 1];

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
                            cardCnt++;
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

    void ShuffleCard()
    {
        for (int i = 1; i <= cardCnt; i++)
        {
            arCards[i] = i;
        }
        //return

        //카드섞기 15회정도 반복
        for (int i = 1; i <= 15; i++)
        {
            //임의의 난수를 두 개 만든다
            int n1 = Random.Range(1, cardCnt + 1);
            int n2 = Random.Range(1, cardCnt + 1);

            //교환
            int t = arCards[n1]; //배열의 값을 바꾼다
            arCards[n1] = arCards[n2];
            arCards[n2] = t;

            //StartCoroutine(CardOpen(arCards[n1]));
        }
    }

    //스테이지 시작시 스테이지 번호를 보여준다
    IEnumerator ShowStageNum()
    {
        stageNumText.text = "STATE" + stageNum;

        yield return new WaitForSeconds(2f);

        stageNumText.text = "";
    }
}
