using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using Bhaptics.SDK2;


//using System.IO;
using System.Linq;
//using System.Text;
//using System;
//using Random = UnityEngine.Random;

public class Game2Manager : MonoBehaviour
{
    public TextMeshPro totalTimeText, stageTimeText, WrongAnswerCntText, stageNumText, CorrectAnswerCntText, DifficultyText, LIFEText;
    
    ///Game///
    static public int EASY = 2;
    static public int MIDDLE = 3;
    static public int HARD = 4;

    static public float startTime; // 게임 시작했을때의 시간
    static public float stageTime;// 새로운 stage 들어갈때의 시간
    public int stageCnt = 10; // stage 총 개수


    static public int stageNum = 1; // 현재 stage
    static public int WrongAnswerCnt = 0; // 틀린 횟수 보여주기용
    static public int CorrectAnswerCnt = 0;
    static public int CurrentDifficulty;

    static public bool isLeft = false;
    static public bool isRight = false;
    bool isStage = false;

    static public float totalTime;

    ///Game///
    //////STATE//////
    public enum STATE
    {
        START, HIT, WAIT, IDLE, CLEAR ,RESULT, SELECT , TIMEOUT5
    };
    static public STATE state = STATE.SELECT;

    ///Game///
    //////Attribute//////
    public class Attribute
    {
        public string Color;// 보이는 색 +Mix 있음
        public string Size;//[Big,Middle,Small]
        public int NumofLeg;//[0,2,4]
        public bool Tail;//[T,F] 꼬리가 있음 T
        public bool Flight;//[T,F] 못남 F
        public bool Wings;//[T,F] 날개가 있음 T
        public bool horn;//뿔 [T,F] 
        public bool beak;//부리 [T,F]
        public string fur;//털 [Feather, LongHair, Hair, ShortHair, CurlyHair, Null] 깃털, 실같은털, 없음
        public bool mane;//갈기 [T,F]

        public Attribute(string Coloratt, string Sizeatt, int NumofLegatt, bool Tailatt,bool Flightatt, bool Wingsatt, bool hornatt, bool beakatt, string furatt, bool maneatt)
        {
            Color = Coloratt;
            Size = Sizeatt;
            NumofLeg = NumofLegatt;
            Tail = Tailatt;
            Flight = Flightatt;
            Wings = Wingsatt;
            horn = hornatt;
            beak = beakatt;
            fur = furatt;
            mane = maneatt;
        }
    }
    public Dictionary<int, Attribute> objectAttributes = new Dictionary<int, Attribute>(); // object index 접근이 가능한 dict
    //public Attribute att = new Attribute(); // attribute dict 위한 temp attribute class 인스턴스(클래스의 실체화된 버전)
    
    string[] Att_Array = new string[]
        {
            "Color","Size","NumofLeg",
            "Tail","Flight","Wings","horn",
            "beak","fur","mane"
        };
    
    ///////////////////////////////////

    public int Sum = 0;
    public int True_Button = 0;
    public int ColorMixCondition = 0;
    public int [] ComparisionResult = new int[10];
    
    ///Game///
    //////Button//////
    public string TrueButtonLocation;
    public static string WhichButtonTouch;

    ///Button///
    //public GameObject[] Buttons = new GameObject[0];
    public GameObject[] Buttons = new GameObject[3];

    public bool buttonsSpawned = false;

    Vector3 ButtonPosition_Left = new Vector3(20.02f,1.81f,22.231f);
    Vector3 ButtonPosition_Middle = new Vector3(20.382f, 1.81f, 21.951f);
    Vector3 ButtonPosition_Right = new Vector3(20.73f,1.81f,21.674f);

    ///Spawner///
    //public GameObject[] Objects = new GameObject[0];
    int I1 = 20;
    int I2 = 20;
    public GameObject[] Objects = new GameObject[18];
    bool spawn = false;
    ///Pad///
    public GameObject[] Pads = new GameObject[0];
    public bool Pads_Spawned = false;

    ///Startannouncement///

    /// stage 시작! 안내 text
    public GameObject[] StageStartAnnouncement = new GameObject[0];
    public bool StageStartAnnouncement_Spanwed = false;
    public static int time2;
    //// 시간초과 text 담겨있음
    public GameObject[] StageOverAnnouncement = new GameObject[0];

    public int check5sec;
    public bool Is_check5sec_True = false;
    public int check10sec;
    public bool Is_showstageover = false;


    public bool scorepannel = false;

    /// 정답, 오답 text 담겨있음
    public GameObject[] AnswerObj = new GameObject[0];


    /// hardmode 설명이 담긴 obj
    public GameObject[] HardModeExplainText = new GameObject[0];

    public bool Is_HardModeExplain_Already_Done = false;

    //동물들 소리 저장
    public AudioClip[] AnimalSounds = new AudioClip[18];

    public int LIFE = 2;

    // Start is called before the first frame update
    void Start()
    {

        
        ///Game///
        startTime = stageTime = Time.time;
        ///Game///
        //////Attribute//////
        ///////////////////////////Attribute///////////////////////////
        Attribute att1 = new Attribute("Brown", "Big",4,true,false,false,true,false,"Hair",false);
        Attribute att2 = new Attribute("Brown", "Small",2,false,true,true,false,false,"Null",false);
        Attribute att3 = new Attribute("Brown", "Big",4,false,false,false,false,false,"Hair",false);
        Attribute att4 = new Attribute("Orange", "Big",4,true,false,false,true,false,"Hair",false);
        Attribute att5 = new Attribute("Brown", "Big",4,true,false,false,true,false,"Hair",false);
        Attribute att6 = new Attribute("Mix", "Small",2,true,true,true,false,true,"Feather",false);
        Attribute att7 = new Attribute("Orange", "Small",4,true,false,false,false,false,"LongHair",false);
        Attribute att8 = new Attribute("Brown", "Big",4,true,false,false,false,false,"Hair",true);
        Attribute att9 = new Attribute("Pink", "Middle",4,true,false,false,false,false,"ShortHair",false);
        Attribute att10 = new Attribute("White", "Big",4,false,false,false,false,false,"Hair",false);
        Attribute att11 = new Attribute("Mix", "Small",4,true,false,false,false,false,"Hair",false);
        Attribute att12 = new Attribute("Black", "Small",2,true,true,true,false,true,"Feather",false);
        Attribute att13 = new Attribute("Mix", "Small",2,true,false,true,false,true,"Feather",false);
        Attribute att14 = new Attribute("White", "Middle",4,true,false,false,false,false,"CurlyHair",false);
        Attribute att15 = new Attribute("White", "Small",2,true,true,true,false,true,"Feather",false);
        Attribute att16 = new Attribute("Gray", "Middle",4,true,false,false,false,false,"LongHair",false);
        Attribute att17 = new Attribute("Orange", "Big",4,true,true,true,true,false,"Null",false);
        Attribute att18 = new Attribute("Brown", "Big",4,false,false,false,true,false,"Hair",false);

        //idx = 0 Aurochs
        //att = AttInput(att, "Brown", "Big",4,true,false,false,true,false,"Hair",false);
        objectAttributes.Add(0, att1);
        //idx = 1 Bat
        //att = AttInput(att, "Brown", "Small",2,false,true,true,false,false,"Null",false);
        objectAttributes.Add(1, att2);
        //idx = 2 brownBear
        //att = AttInput(att, "Brown", "Big",4,false,false,false,false,false,"Hair",false);
        objectAttributes.Add(2, att3);
        //idx = 3 Bull
        //att = AttInput(att, "Orange", "Big",4,true,false,false,true,false,"Hair",false);
        objectAttributes.Add(3, att4);
        //idx = 4 Cow
        //att = AttInput(att, "Brown", "Big",4,true,false,false,true,false,"Hair",false);
        objectAttributes.Add(4, att5);
        //idx = 5 Eagle
        //att = AttInput(att, "Mix", "Small",2,true,true,true,false,true,"Feather",false);
        objectAttributes.Add(5, att6);
        //idx = 6 Fox
        //att = AttInput(att, "Orange", "Small",4,true,false,false,false,false,"LongHair",false);
        objectAttributes.Add(6, att7);
        //idx = 7 Horse
        //att = AttInput(att, "Brown", "Big",4,true,false,false,false,false,"Hair",true);
        objectAttributes.Add(7, att8);
        //idx = 8 Pig
        //att = AttInput(att, "Pink", "Middle",4,true,false,false,false,false,"ShortHair",false);
        objectAttributes.Add(8, att9);
        //idx = 9 polarBear
        //att = AttInput(att, "White", "Big",4,false,false,false,false,false,"Hair",false);
        objectAttributes.Add(9, att10);
        //idx = 10 Rabbit
        //att = AttInput(att, "Mix", "Small",4,true,false,false,false,false,"Hair",false);
        objectAttributes.Add(10, att11);
        //idx = 11 Raven
        //att = AttInput(att, "Black", "Small",2,true,true,true,false,true,"Feather",false);
        objectAttributes.Add(11, att12);
        //idx = 12 Rooster
        //att = AttInput(att, "Mix", "Small",2,true,false,true,false,true,"Feather",false);
        objectAttributes.Add(12, att13);
        //idx = 13 sheep
        //att = AttInput(att, "White", "Middle",4,true,false,false,false,false,"CurlyHair",false);
        objectAttributes.Add(13, att14);
        //idx = 14 Stork
        //att = AttInput(att, "White", "Small",2,true,true,true,false,true,"Feather",false);
        objectAttributes.Add(14, att15);
        //idx = 15 Wolf
        //att = AttInput(att, "Gray", "Middle",4,true,false,false,false,false,"LongHair",false);
        objectAttributes.Add(15, att16);
        //idx = 16 Dragon
        //att = AttInput(att, "Orange", "Big",4,true,true,true,true,false,"Null",false);
        objectAttributes.Add(16, att17);
        //idx = 17 Deer
        //att = AttInput(att, "Brown", "Big",4,false,false,false,true,false,"Hair",false);
        objectAttributes.Add(17, att18);

        //////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////
        CurrentDifficulty = HARD;
        //////////////////////////////////////////////////////////////////
        //////////////////////////////////////////////////////////////////
        Pads_Spawned = false;
        buttonsSpawned = false;

        //stage가 시작되면 5초내에 답을 해야 하는데 이를 체크하는 변수이다.
        check5sec = 0;
        Is_check5sec_True = false;
        Is_showstageover = false;
        scorepannel = false;


        /// hard mode 설명 한번 해야됨
        /// make stage에 들어있어서
        /// stage 바뀔때마다 생김
        /// 한번 설명하면 true로 바뀌어서 더이상 설명 나오지 않음
        Is_HardModeExplain_Already_Done = false;
        LIFE = 2;

    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log("Update");

        totalTime = (int)(Time.time - startTime);

        //stage time은 stage 시작 time임
        //time 2라는게 stage에서 총 걸린 시간임
        time2 = (int)(Time.time - stageTime);

        if(scorepannel == true)
        {
            stageNumText.text = "스테이지 " + stageNum;
            if (Is_check5sec_True&& (Time.time - check5sec) < 5)
            {
                stageTimeText.text = "스테이지 시간 : " + (int)(Time.time - check5sec);
                //if (isStage)
                //{
                //    BhapticsLibrary.Play(BhapticsEvent.TIME);
                //    isStage = false;
                //}
                
            }
            else
            {
                stageTimeText.text = "스테이지 시간 : 0";
            }
            
            totalTimeText.text = "게임 시간 : " + (int)totalTime;
            WrongAnswerCntText.text = "틀림 : " + WrongAnswerCnt;
            CorrectAnswerCntText.text = "맞춤 : " + CorrectAnswerCnt;
            LIFEText.text = "스테이지 기회 :" + LIFE;
            
            if(CurrentDifficulty == EASY)
            {
                DifficultyText.text = "난이도 : 쉬움";
            }
            else if(CurrentDifficulty == MIDDLE)
            {
                DifficultyText.text = "난이도 : 보통";
            }
            else
            {
                DifficultyText.text = "난이도 : 어려움";
            }
        }
        else{
            stageNumText.text = "";
            stageTimeText.text = "";
            totalTimeText.text = "" ;
            WrongAnswerCntText.text = "";
            CorrectAnswerCntText.text = "";
            DifficultyText.text = "";
            LIFEText.text = "";
        }

        // stagetime_in_5sec = time2 - 1;
        // if (stagetime_in_5sec>0){
        //     state = STATE.TIMEOUT;
        // }
        if (Is_check5sec_True && (Time.time - check5sec) > 5)
        {
            state = STATE.TIMEOUT5;
        }

        switch (state)
        {
            case STATE.START:
                scorepannel =true;
                Debug.Log("inswitch Start");
                Debug.Log("objectAttributes");
                Debug.Log(objectAttributes[0].Color);
                Debug.Log(objectAttributes[1].Color);
                Debug.Log(objectAttributes[2].Color);
                Debug.Log(objectAttributes[3].Color);
                Debug.Log(objectAttributes[4].Color);
                Debug.Log(objectAttributes[5].Color);
                Debug.Log(objectAttributes[6].Color);
                Debug.Log(objectAttributes[7].Color);
                Debug.Log(objectAttributes[8].Color);
                Debug.Log(objectAttributes[9].Color);
                Debug.Log(objectAttributes[10].Color);
                Debug.Log(objectAttributes[11].Color);
                Debug.Log(objectAttributes[12].Color);
                Debug.Log(objectAttributes[13].Color);
                Debug.Log(objectAttributes[14].Color);
                Debug.Log(objectAttributes[15].Color);
                Debug.Log(objectAttributes[16].Color);
                Debug.Log(objectAttributes[17].Color);
                StartCoroutine(MakeStage(CurrentDifficulty));
                break;
            case STATE.HIT:
                Is_check5sec_True = false;
                check5sec = 0;
                isStage = true;
                StartCoroutine(IsItRightAnswer(CurrentDifficulty));
                break;
            case STATE.TIMEOUT5:
                Is_check5sec_True = false;
                isStage = true;
                StartCoroutine(ShowOver());
                break;
            case STATE.CLEAR:
                StartCoroutine(StageClear());
                break;
            case STATE.RESULT:
                scorepannel = false;
                Debug.Log("Finish");
                //SceneManager.LoadScene("Result");
                StartCoroutine(ShowResult());
                break;
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }

    IEnumerator PlaySoundsWithDelay1sec(int index1, int index2)
    {
        // 첫 번째 소리 재생
        AudioClip soundClip1 = AnimalSounds[index1];
        StartCoroutine(PlaySound(soundClip1, 2f)); // 2초 동안 재생

        yield return new WaitForSeconds(1f); // 1초 대기

        // 두 번째 소리 재생
        AudioClip soundClip2 = AnimalSounds[index2];
        StartCoroutine(PlaySound(soundClip2, 2f)); // 2초 동안 재생
    }

    IEnumerator PlaySound(AudioClip soundClip, float duration)
    {
        // AudioSource 컴포넌트를 가진 임시 GameObject를 생성합니다.
        GameObject audioObject = new GameObject("AudioObject");
        AudioSource audioSource = audioObject.AddComponent<AudioSource>();

        // AudioClip을 설정합니다.
        audioSource.clip = soundClip;

        // 소리를 재생합니다.
        audioSource.Play();

        float fadeDuration = 1f;
        float fadeTimer = 0f;
        float startVolume = audioSource.volume;

        // 지정된 시간 동안 소리를 출력합니다.
        while (fadeTimer < duration)
        {
            fadeTimer += Time.deltaTime;

            // 마지막 1초 동안 Fade Out 효과를 적용합니다.
            if (fadeTimer >= duration - 1f)
            {
                audioSource.volume = Mathf.Lerp(startVolume, 0f, (fadeTimer - (duration - 1f)) / 1f);
            }

            yield return null;
        }

        // 소리를 정지합니다.
        audioSource.Stop();

        // GameObject를 파괴합니다.
        Destroy(audioObject);
    }


///시간 초과 text보여주는 code이다.
    IEnumerator ShowOver()
    {
        state = STATE.WAIT;
        Is_showstageover = true;
        Debug.Log("HapticHere - StageTimeOver - 5sec");
        BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);
        BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);
        WrongAnswerCnt = WrongAnswerCnt+1;


        LIFE = LIFE-1;


        showstageover();
        yield return new WaitForSeconds(0.001f);
        state = STATE.CLEAR;
    }
    public void showstageover()
    {
        Vector3 overtextpos1 =  new Vector3(20.596f,2.253f,22.233f);
        GameObject StageOverObj = Instantiate(StageOverAnnouncement[0], overtextpos1, Quaternion.Euler(0,36.149f,0));
        StageOverObj.tag =  "OverTextObj";
    }
    public void showstageoverdestroy()
    {
        if (Is_showstageover)
        {
            GameObject[] OverTextObj = GameObject.FindGameObjectsWithTag("OverTextObj");
            foreach (GameObject obj in OverTextObj)
            {
                Destroy(obj);
            }
        }
    }

////stage가 모두 끝나면, 실행되는 script이다. state = state.result
    IEnumerator ShowResult()
    {
        state = STATE.WAIT;
        Result_Game2.isResult = true;
        state = STATE.SELECT;
        stageNum = 1;
        LIFE = 2;
        yield return new WaitForSeconds(1);
    }
///Game///
//////Update switch case function//////
    IEnumerator IsItRightAnswer(int difficulty)
    {
        Debug.Log("IsItRightAnswer");
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.1f);
        //EASY에서 TrueButtonLocation 1 이면 왼쪽 3이면 오른쪽
        //MIDDLE에서 TrueButtonLocation 1 이면 왼쪽 3이면 오른쪽

        //맞았을때
        if (TrueButtonLocation == WhichButtonTouch){
            CorrectAnswer();
            Debug.Log("HapticHere - RightAnswer");
            if (isRight)
            {
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
            }
            else if (isLeft)
            {
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
            }
            
            CorrectAnswerCnt = CorrectAnswerCnt +1;
            yield return new WaitForSeconds(1f);
            wrongCorrectAnswerDestroy();
            Debug.Log("IsItRightAnswer - IF");
            state = STATE.CLEAR;
        }
        //틀렸을때
        else{
            WrongAnswer();
            Debug.Log("HapticHere - WrongAnswer");
            Debug.Log("IsItRightAnswer - ELSE");
            if (isRight)
            {
                BhapticsLibrary.Play(BhapticsEvent.WRONG_RIGHT);
            }
            else if (isLeft)
            {
                BhapticsLibrary.Play(BhapticsEvent.WRONG_LEFT);
            }
            WrongAnswerCnt = WrongAnswerCnt +1;
            yield return new WaitForSeconds(1f);
            wrongCorrectAnswerDestroy();


            LIFE = LIFE-1;


            state = STATE.CLEAR;

            
        }
    }

/// 맞음 글자 나타나게
    public void CorrectAnswer()
    {
        Vector3 AnswerPos =  new Vector3(20.569f,2.342f,22.233f);
        GameObject Answer = Instantiate(AnswerObj[0], AnswerPos, Quaternion.Euler(0,36.149f,0));
        Answer.tag =  "Answer";
    }

/// 틀림 글자 나타나게
    public void WrongAnswer()
    {
        Vector3 AnswerPos =  new Vector3(20.569f, 2.342f, 22.233f);
        GameObject Answer = Instantiate(AnswerObj[1], AnswerPos, Quaternion.Euler(0,36.149f,0));
        Answer.tag =  "Answer";
    }
    public void wrongCorrectAnswerDestroy()
    {
        GameObject[] AnswerObject = GameObject.FindGameObjectsWithTag("Answer");
        foreach (GameObject obj in AnswerObject)
        {
            Destroy(obj);
        }
    }

///Game///
//////Update switch case function//////
    IEnumerator MakeStage(int difficulty)
    {
        
        state = STATE.WAIT;

        Disappear_selectMenu.isHide = true;

        Debug.Log("MakeStage");
        
        Debug.Log("MakeStage - state:Wait");

        if ((difficulty == HARD) && (Is_HardModeExplain_Already_Done == false))
        {
            HardModeExplain();
            yield return new WaitForSeconds(5f);
            Is_HardModeExplain_Already_Done = true;
            HardModeExplainDestroy();
        }

        int IsItHard = 0;

        if (difficulty == 4)
        {
            difficulty = 3;
            IsItHard = 1;
        }

        Sum=0;
        True_Button = 0;
        ColorMixCondition = 0;
        Debug.Log("before yield");
        yield return new WaitForSeconds(0.1f);
        Debug.Log("after yield");
        ////조건에 맞는 obj 2개 찾기 (idx)
        do
        {
            ColorMixCondition = 0;
            Debug.Log("In_Do-while_MakeStage");
            (I1,I2) = Make2IDX();

            ComparisionResult= AttCompare_0or1(I1,I2);
            Debug.Log("ComparisionResult_INMakeStageDoWhile");
            Debug.Log(ComparisionResult);
            Debug.Log("1st");
            Debug.Log(ComparisionResult[0]);
            Debug.Log("2nd");
            Debug.Log(ComparisionResult[1]);
            Debug.Log("3rd");
            Debug.Log(ComparisionResult[2]);
            Debug.Log("4th");
            Debug.Log(ComparisionResult[3]);
            Debug.Log("5th");
            Debug.Log(ComparisionResult[4]);
            Debug.Log("6th");
            Debug.Log(ComparisionResult[5]);
            Debug.Log("7th");
            Debug.Log(ComparisionResult[6]);
            Debug.Log("8th");
            Debug.Log(ComparisionResult[7]);
            Debug.Log("9th");
            Debug.Log(ComparisionResult[8]);
            Debug.Log("10th");
            Debug.Log(ComparisionResult[9]);
            
            Sum =  ComparisionResult.Sum();
            ////둘다 MIX면 안됨
            if (objectAttributes[I1].Color =="Mix" && objectAttributes[I2].Color =="Mix")
            {
                ColorMixCondition = 1;
            }
        }
        while(Sum==0 || Sum > (Att_Array.Length-difficulty+1) || ColorMixCondition == 1);
        //
        //(위에서 찾은 object idx2개로 object 생성)

        ////////////////////////////////
        /////////[Obj 보여주기]//////////

        Debug.Log("MakeObj");
        /// object2개를 생성하고
        /// 소리를 출력하기
        TwoObjSpawner(I1,I2,IsItHard);
        Debug.Log("BeforeMakeCategoryPad");

        yield return new WaitForSeconds(2.0f);

        /////////////////////////////////
        /////////[시작 보여주기]//////////
        StageStartAnouncment();
        yield return new WaitForSeconds(4.0f);
        StageStartAnouncmentDestroy();

        ////////////////////////////////
        ///////[stagetime count]////////
        ////////////////////////////////
        check5sec = (int)Time.time;
        Is_check5sec_True = true;
        isStage = true;


        True_Button = MakeCategoryPad(I1,I2, difficulty);
        Debug.Log("AfterMakeCategoryPad");
        Debug.Log(True_Button);
        
        Debug.Log("BeforeButtonActivate");
        if (difficulty == EASY)
        {
            Button_L_Active();
            Button_R_Active();
            buttonsSpawned = true;
        }
        else
        {
            Button_L_Active();
            Button_M_Active();
            Button_R_Active();
            buttonsSpawned = true;
        }

        switch (True_Button)
        {
            case 1:
                TrueButtonLocation = "L";
                break;
            case 2:
                TrueButtonLocation = "M";
                break;
            case 3:
                TrueButtonLocation = "R";  
                break;
        }
        // Debug.Log("before yield");
        // yield return new WaitForSeconds(0.1f);
        // Debug.Log("after yield");
        state = STATE.IDLE;
        
    }

    ///Hardmode는 Hard mode에 대한 설명이 필요하다.
    public void HardModeExplain()
    {
        Vector3 HardModeExplain_Pos =  new Vector3(20.569f,2.592f,22.233f);
        GameObject HModeExp = Instantiate(HardModeExplainText[0], HardModeExplain_Pos, Quaternion.Euler(0,36.149f,0));
        HModeExp.tag =  "HardModeExplain";
    }
    public void HardModeExplainDestroy()
    {
        GameObject[] HExp = GameObject.FindGameObjectsWithTag("HardModeExplain");
        foreach (GameObject obj in HExp)
        {
            Destroy(obj);
        }
    }

    ///stage start Anouncement
    public void StageStartAnouncment()
    {
        if (!StageStartAnnouncement_Spanwed)
        {
            ////////////////////////////////
            //////[시작 뜨게 만드는 곳]//////

            ///start
            Vector3 starttextpos0 =  new Vector3(20.569f,2.57f,22.233f);
            GameObject Start0 = Instantiate(StageStartAnnouncement[0], starttextpos0, Quaternion.Euler(0,36.149f,0));
            Start0.tag =  "StartTextObj";
            
            //설명
            Vector3 starttextpos1 =  new Vector3(20.569f, 2.253f, 22.233f);
            GameObject Start1 = Instantiate(StageStartAnnouncement[1], starttextpos1, Quaternion.Euler(0,36.149f,0));
            Start1.tag =  "StartTextObj";
            StageStartAnnouncement_Spanwed = true;
        }
    }

    public void StageStartAnouncmentDestroy()
    {
        GameObject[] spawnedStartAnnounceObj = GameObject.FindGameObjectsWithTag("StartTextObj");
        foreach (GameObject obj in spawnedStartAnnounceObj)
        {
            Destroy(obj);
        }

        StageStartAnnouncement_Spanwed = false;
    }



/////Scene Make
////////ObjectSpawn
    public (int, int) Make2IDX()
    {
        int index1 = 0;
        int index2 = 0;
        Debug.Log("TwoObjIndex");
        do
        {
            index1 = Random.Range(0, Objects.Length);
        }
        while (index1 == 1);
        
        do
        {
            Debug.Log("make 2 Obj_Index In_Do-while");
            index2 = Random.Range(0,Objects.Length);
        }
        while(index1 == index2 || index2 ==1);

        return (index1,index2);
    }

    public void TwoObjSpawner(int I1, int I2, int Is_It_Hard)
    {
        ///for hard mode (obj spawn coordinate)
        Vector3 [] HardMode_Objcoord = new Vector3[4];
        HardMode_Objcoord[0] = new Vector3(20.229f,0.87f,27.54f);
        HardMode_Objcoord[1] = new Vector3(26.928f,1.44f,21.996f);
        HardMode_Objcoord[2] = new Vector3(29.685f,1.56f,29.187f);
        HardMode_Objcoord[3] = new Vector3(17.69f,1.7f,25.76f);
        int coord_idx1;
        int coord_idx2;

        ///for check distance
        float Distance;
        Debug.Log("Will_Make_Two_Object");

        //temp obj
        GameObject Obj1;
        GameObject Obj2;
        if(!spawn)
        {
            Vector3 position1 =  new Vector3(0,0,0);
            Vector3 position2 =  new Vector3(0,0,0);
            switch(Is_It_Hard)
            {
                case 0: /// not hard mode (easy, middle)
                    do{
                    Debug.Log("TwoObjSpawner_NotHard-MakeCoordinate_Distance-InDoWhile");
                    position1 = MakeCoordinate_in_Area(I1);
                    position2 = MakeCoordinate_in_Area(I2);
                    Distance = Vector3.Distance(position1,position2);
                    Debug.Log("After TwoObjSpawner-Coordinate_Distance-DoWhile");
                    }
                    while(Distance<1.6);
                    
                    break;

                case 1: /// hard mode
                    Debug.Log("TwoObjSpawner_ItIsHard-MakeCoordinate_Distance-InDoWhile");
                    
                    coord_idx1 = Random.Range(0,HardMode_Objcoord.Length);
                    Debug.Log("HardObjCoord_idx1 Make Done");
                    do{
                        Debug.Log("HardObjCoord_idx2 Making - in do-while");
                        coord_idx2 = Random.Range(0,HardMode_Objcoord.Length);
                    }
                    while(coord_idx1==coord_idx2);
                    Debug.Log("HardObjCoord_idx2 Makedone");

                    position1 = HardMode_Objcoord[coord_idx1];
                    position2 = HardMode_Objcoord[coord_idx2];
                    break;
            }
            Debug.Log("TwoObjSpawn_position_Make");

            Obj1 = Instantiate(Objects[I1], position1, Quaternion.identity);
            Debug.Log("TwoObjSpawn_Obj1");
            Obj1.tag = "SpawnedObject";

            Obj2 = Instantiate(Objects[I2], position2, Quaternion.identity);
            Debug.Log("TwoObjSpawn_Obj2");
            Obj2.tag = "SpawnedObject";
            spawn = true;

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
            // 인덱스에 해당하는 동물의 오디오 출력
            // 1초 텀을 두고 출력된다.
            StartCoroutine(PlaySoundsWithDelay1sec(I1,I2));
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
        }
    }

    public Vector3 MakeCoordinate_in_Area(int i)
    {
        float y = 1.2f;
        
        
        Debug.Log("MakeCorrdinate_in_Area");

        float x = 0f;
        float z = 0f;

        float Random_range_x_start = 20.1f;
        float Random_range_x_end = 27.6f;
        float Random_range_z_start = 22.8f;
        float Random_range_z_end = 27.1f;

        // 박쥐 위치 예외처리 index = 1
        if (i == 1)
        {
            y = 2.4f;
        }

        // 작은 동물 예외처리
        // Bat  Rabbit Raven Rooster Stork
    //index 1     10    11      12     14
        if (i==1||i==10||i==11||i==12||i==14)
        {
            Random_range_x_start = 20.285f;
            Random_range_x_end = 24.0f;
            Random_range_z_start = 23.2f;
            Random_range_z_end = 25.2f;
        }

        do{
            x = (float)Random.Range(Random_range_x_start,Random_range_x_end); 
            z = (float)Random.Range(Random_range_z_start,Random_range_z_end);
            Debug.Log("MakeCoordinate_in_Area_In_Do-While");
        }
        while((((1.13*(x-20.1)+25.3)<z) || ((0.76*(x-27.6)+25.0)>z) || ((-0.54*(x-20.1)+25.3)>z)||((-0.36*(x-21.7)+27.1)<z)));

        Vector3 coordinates = new Vector3(x,y,z);
        return coordinates;
    }

    public void RemoveObjects()
    {
        GameObject[] spawnedObjects = GameObject.FindGameObjectsWithTag("SpawnedObject");
        foreach (GameObject obj in spawnedObjects)
        {
            Destroy(obj);
        }
        spawn = false;
    }


    public int[] AttCompare_0or1(int idx1, int idx2)
    {
        Debug.Log("Attcompare0or1");
        //두 object의 index 받아서
        // 두 인덱스에 해당하는 Attribute에 대해
        // 같 = 1 다름 = 0 인 int 배열 생성

        int[] result = new int[10]; // 결과를 저장할 T/F 배열
        //삼항 연산자 TRUE 일 경우 1, FALSE일 경우 0
        result[0] = (objectAttributes[idx1].Color == objectAttributes[idx2].Color) ? 1 : 0;
        result[1] = (objectAttributes[idx1].Size == objectAttributes[idx2].Size) ? 1 : 0;
        result[2] = (objectAttributes[idx1].NumofLeg == objectAttributes[idx2].NumofLeg) ? 1 : 0;
        result[3] = (objectAttributes[idx1].Tail == objectAttributes[idx2].Tail) ? 1 : 0;
        result[4] = (objectAttributes[idx1].Flight == objectAttributes[idx2].Flight) ? 1 : 0;
        result[5] = (objectAttributes[idx1].Wings == objectAttributes[idx2].Wings) ? 1 : 0;
        result[6] = (objectAttributes[idx1].horn == objectAttributes[idx2].horn) ? 1 : 0;
        result[7] = (objectAttributes[idx1].beak == objectAttributes[idx2].beak) ? 1 : 0;
        result[8] = (objectAttributes[idx1].fur == objectAttributes[idx2].fur) ? 1 : 0;
        result[9] = (objectAttributes[idx1].mane == objectAttributes[idx2].mane) ? 1 : 0;

        return result;
    }

///// Scene Make
//////// PadSpawn
    public int PadSpawner(int [] idx_T, int [] idx_F, int difficulty)
    {
        Debug.Log("PadSpawner");
        int PadNum = difficulty;
        int CorrectAnswer_Location = 0;

        Debug.Log("idx_T Length");
        Debug.Log(Sum);
        Debug.Log(idx_T.Length);
        Debug.Log(idx_T);

        Debug.Log("idx_F Length");
        Debug.Log(Att_Array.Length - Sum);
        Debug.Log(idx_F.Length);
        Debug.Log(idx_F);

        if (!Pads_Spawned)
        {
            switch(PadNum)
            {
                case 2:
                    Debug.Log("PadSpawner - Before Pad_2_Spawn");
                    CorrectAnswer_Location = Pad_2_Spawn(idx_T, idx_F);
                    Debug.Log("PadSpawner - case2");
                    //1 왼쪽
                    //2 오른쪽
                    break;
                case 3:
                    Debug.Log("PadSpawner - Before Pad_3_Spawn");
                    CorrectAnswer_Location = Pad_3_Spawn(idx_T, idx_F);
                    Debug.Log("PadSpawner - case3");
                    //1 왼쪽
                    //2 중간
                    //3 오른쪽
                    break;
            }

            Pads_Spawned = true;
        }
        return CorrectAnswer_Location;
    }
    public int Pad_2_Spawn(int [] idx_T, int [] idx_F)
    {
        Quaternion [] PadRot = new Quaternion[2];
        PadRot[0].eulerAngles = new Vector3(0,21,0);
        Debug.Log(PadRot[0]);
        Debug.Log(PadRot[0]);
        Debug.Log(PadRot[0]);
        PadRot[1].eulerAngles = new Vector3(0,51,0);
        Debug.Log(PadRot[1]);
        Debug.Log(PadRot[1]);
        Debug.Log(PadRot[1]);

        Debug.Log("Pad2Spawn");
        int T_coord1_idx;
        int coord2_idx;
        int T1;
        int F1;
        // random 하게 True att_idx 고르기
        // random 하게 false att_idx 고르기
        T1 = (int)Random.Range(0,idx_T.Length);
        F1 = (int)Random.Range(0,idx_F.Length);

        Debug.Log(T1);
        Debug.Log(F1);

        int idxT = idx_T[T1];
        int idxF = idx_F[F1];
        
        Vector3 [] coord = new Vector3[2];
        coord[0] = new Vector3(20.02f, 2.1f, 22.231f);
        coord[1] = new Vector3(20.73f, 2.1f, 21.674f);

        //coord[0] = new Vector3(19.526f,2.1f,22.431f);
        //coord[1] = new Vector3(20.894f,2.1f,21.457f);

        //위의 coord값에 대해 idx를 random하게 접근해서
        //true 와 false의 위치가 매번 랜덤하게 생성되게 함
        T_coord1_idx = (int)Random.Range(0,2); // 0 이상 2 미만 = 0 or 1
        coord2_idx = 1- T_coord1_idx; //if coord1=0,coord1=1,coord1=1,coord1=0
        //true pad



        // GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], Quaternion.identity);
        // Pad1.tag =  "PadObject";
        // //false pad
        // GameObject Pad2 = Instantiate(Pads[idxF], coord[coord2_idx], Quaternion.identity);
        // Pad2.tag =  "PadObject";
        GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], PadRot[T_coord1_idx]);
        Pad1.tag =  "PadObject";
        //false pad
        GameObject Pad2 = Instantiate(Pads[idxF], coord[coord2_idx], PadRot[coord2_idx]);
        Pad2.tag =  "PadObject";



        // T_coord1_idx = 0 -> 1반환 왼쪽
        // T_coord1_idx = 1 -> 2반환 오른쪽
        return T_coord1_idx+1;
    }
    public int Pad_3_Spawn(int [] idx_T, int [] idx_F)
    {

        Quaternion [] PadRot = new Quaternion[3];
        PadRot[0].eulerAngles = new Vector3(0,20,0);
        Debug.Log(PadRot[0]);
        Debug.Log(PadRot[0]);
        Debug.Log(PadRot[0]);
        PadRot[1].eulerAngles = new Vector3(0,36,0);
        Debug.Log(PadRot[1]);
        Debug.Log(PadRot[1]);
        Debug.Log(PadRot[1]);
        PadRot[2].eulerAngles = new Vector3(0,52,0);
        Debug.Log(PadRot[2]);
        Debug.Log(PadRot[2]);
        Debug.Log(PadRot[2]);

        Debug.Log("Pad3Spawn");
        int T_coord1_idx;
        int coord2_idx;
        int coord3_idx;
        int T1;
        int F1;
        int F2;
        // random 하게 True att_idx 고르기
        // random 하게 false att_idx 고르기
        T1 = (int)Random.Range(0,idx_T.Length);
        F1 = (int)Random.Range(0,idx_F.Length);
        do
        {
            F2 = (int)Random.Range(0,idx_F.Length);
            Debug.Log("Pad_3_Spawn_In_Do-while_False_idx");
        }while(F2 == F1); // F1, F2 다를때까지 실행

        Debug.Log("T1");
        Debug.Log(T1);
        Debug.Log("F1");
        Debug.Log(F1);
        Debug.Log("F2");
        Debug.Log(F2);

        int idxT = idx_T[T1];
        int idxF1 = idx_F[F1];
        int idxF2 = idx_F[F2];

        Vector3 [] coord = new Vector3[3];
        coord[0] = new Vector3(20.02f, 2.1f, 22.231f);
        coord[1] = new Vector3(20.382f,2.1f,21.951f);
        coord[2] = new Vector3(20.73f, 2.1f, 21.674f);

        // coord[0] = new Vector3(19.526f,2.1f,22.431f);
        // coord[1] = new Vector3(20.382f,2.1f,21.976f);
        // coord[2] = new Vector3(20.894f,2.1f,21.457f);

        //위의 coord값에 대해 idx를 random하게 접근해서
        //true 와 false의 위치가 매번 랜덤하게 생성되게 함
        T_coord1_idx = (int)Random.Range(0,3); // 0 이상 3 미만 = 0,1,2
        do
        {
            coord2_idx = (int)Random.Range(0,3);
            Debug.Log("Pad_3_Spawn_In_Do-while_False_coord");

        }while(T_coord1_idx == coord2_idx); // coord1, coord2 다를때까지 실행

        coord3_idx = 3- (T_coord1_idx+coord2_idx); /// 0 or 1 or 2이어야 하니까 sum = 3이므로...

        Debug.Log("T_coord1_idx");
        Debug.Log(T_coord1_idx);
        Debug.Log("coord2_idx");
        Debug.Log(coord2_idx);
        Debug.Log("coord3_idx");
        Debug.Log(coord3_idx);
        
        
        
        //true pad
        GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], PadRot[T_coord1_idx]);
        Pad1.tag =  "PadObject";

        Debug.Log("Pad1");
        //false pad
        GameObject Pad2 = Instantiate(Pads[idxF1], coord[coord2_idx], PadRot[coord2_idx]);
        Pad2.tag =  "PadObject";
        Debug.Log("Pad2");
        GameObject Pad3 = Instantiate(Pads[idxF2], coord[coord3_idx], PadRot[coord3_idx]);
        Pad3.tag =  "PadObject";
        Debug.Log("Pad3");

        // //true pad
        // GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], Quaternion.identity);
        // Pad1.tag =  "PadObject";
        // //false pad
        // GameObject Pad2 = Instantiate(Pads[idxF1], coord[coord2_idx], Quaternion.identity);
        // Pad2.tag =  "PadObject";
        // GameObject Pad3 = Instantiate(Pads[idxF2], coord[coord3_idx], Quaternion.identity);
        // Pad3.tag =  "PadObject";

        Debug.Log("PadDone");


        // T_coord1_idx = 0 -> 1반환 왼쪽
        // T_coord1_idx = 1 -> 2반환 중간
        // T_coord1_idx = 2 -> 3반환 오른쪽
        return T_coord1_idx+1;
    }
    public void RemovePads()
    {
        GameObject[] spawnedPads = GameObject.FindGameObjectsWithTag("PadObject");
        foreach (GameObject obj in spawnedPads)
        {
            Destroy(obj);
        }
        Pads_Spawned = false;
    }

    public int MakeCategoryPad(int obj1, int obj2, int gamedifficulty)
    {
        Debug.Log("MakeCategoryPad");
        // ComparisionResult - 두 object의 att 비교, 같 = 1 다 = 0
        int [] ComparisionResult= AttCompare_0or1(obj1,obj2);
        Debug.Log("ComparisionResult");
        Debug.Log(ComparisionResult);
        int Sum =  ComparisionResult.Sum();
        Debug.Log("Sum");
        Debug.Log(Sum);
        //1 or 0 으로 이루어진 데이터임
        // Sum = true 개수임
        //true인 index를 저장하는 array
        int [] idx_T = new int [Sum];// true개수에 맞게

        int Location = 0;

        //false인 index를 저장하는 array
        int [] idx_F = new int [Att_Array.Length - Sum];//false개수에 맞게
        Debug.Log("idx_T Length");
        Debug.Log(Sum);
        Debug.Log(idx_T.Length);

        Debug.Log("idx_F Length");
        Debug.Log(Att_Array.Length - Sum);
        Debug.Log(idx_F.Length);

        Debug.Log("MakeCategoryPad");

        int t = 0;
        int f = 0;
        //T,F인 곳의 idx를 따로 저장
        for (t = 0; t+f<Att_Array.Length;)
        {
            ///t+f = idx
            if (ComparisionResult[t+f]==1)
            {
                idx_T[t] = t+f;
                t = t+1;
            }
            else
            {
                idx_F[f] = t+f;
                f = f+1;
            }
        }

        Debug.Log("idx_T Length");
        Debug.Log(Sum);
        Debug.Log(idx_T.Length);

        Debug.Log("idx_F Length");
        Debug.Log(Att_Array.Length - Sum);
        Debug.Log(idx_F.Length);

        
        Debug.Log("Before Pad Spawner");
        Location = PadSpawner(idx_T,idx_F,gamedifficulty);
        
        if (gamedifficulty == EASY){
        //Location 1 왼쪽
        //Location 2 오른쪽
            if (Location ==1){
                return Location; // return 1 -- Button 입장에서 왼쪽

            }
            else{ //Location = 2
                return Location +1; // return 3 -- Button입장에서 오른쪽
            }
            
        }
        else if(gamedifficulty == MIDDLE){
        // Location 1반환 왼쪽
        // Location 2반환 중간
        // Location 3반환 오른쪽
            return Location;//Button 입장에서 왼, 중, 오 같음
        }
        else{
            return Location;
            ///HARD
        }

        //// MakePad의 PadSpawner(int [] idx_T, int [] idx_F, int difficulty)
        //// PadSpawner내의 switch case문 - pad 개수에 따른 obj 생성
        //// idx_T - attribute idx임
        //// idx_F - attribute idx임
        //// attribute - idx 에 맞게 cube object with text 만들기 (10개 필요)
        //// prefab에 저장
        //// 해서
        //// padspawner 내의 switch case문에 있는
        //// Pad_2_Spawn(int [] idx_T, int [] idx_F)에
        //// False idx와 True idx 전달 해야됨
        //// 얘가 알아서 random하게 접근하게 만들어 놓음
    }

/////Scene Make
////////Button
    public void Button_L_Active()
    {
        Debug.Log("Button_L_Active");
        GameObject ButtonL = Instantiate(Buttons[0], ButtonPosition_Left,Quaternion.identity);//as GameObject;
        ButtonL.tag = "Button";
    }

    public void Button_M_Active()
    {
        Debug.Log("Button_M_Active");
        GameObject ButtonM = Instantiate(Buttons[1], ButtonPosition_Middle,Quaternion.identity);//as GameObject
        ButtonM.tag = "Button";
    }

    public void Button_R_Active()
    {
        Debug.Log("Button_R_Active");
        GameObject ButtonR = Instantiate(Buttons[2], ButtonPosition_Right,Quaternion.identity);//as GameObject
        ButtonR.tag = "Button";
    }
    

    public void ButtonsDeActive()
    {
        
        GameObject[] spawnedButtons = GameObject.FindGameObjectsWithTag("Button");
        foreach (GameObject obj in spawnedButtons)
        {
            Destroy(obj);
        }
        buttonsSpawned = false;
    }
    
/////아래쪽 코드 내장한 버전 적용 안되었음
    IEnumerator StageClear()
    {
        state = STATE.WAIT;
        if (Pads_Spawned)
        {
            RemovePads();
        }
        if(buttonsSpawned)
        {
            ButtonsDeActive();
        }

        yield return new WaitForSeconds(1f);
        showstageoverdestroy();

        yield return new WaitForSeconds(1f);
        // 기존 오브젝트 제거
        if (spawn)
        {
            RemoveObjects();
        }
        

        stageNum = stageNum+1;
        stageTime = Time.time;

        check5sec = 0;
        Is_check5sec_True = false;



        if (stageNum>stageCnt || LIFE<=0)
        {
            state = STATE.RESULT;
            yield return new WaitForSeconds(0.5f);
        }
        else
        {
            state = STATE.START;
            yield return new WaitForSeconds(0.5f);
        }
        
    }
}