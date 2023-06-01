using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Bhaptics.SDK2;

public class GameManager3 : MonoBehaviour
{
    //���� ��ü �ð�, �������� �ð�, Ʋ�� Ƚ��, ���� Ƚ��, �������� ��ȣ, (����, ����, ����)�� ��Ÿ���� �ؽ�Ʈ
    public TextMeshPro totalTimeText, stageTimeText, missText, hitText, stageNumText, pushText, levelText;

    //balloon ��ġ ����
    static public bool isTouch = true;
    public AudioClip audioClip; // ����� Ŭ��
    private AudioSource audioSource;
    public GameObject balloonPrefab; // ǳ�� ������
    public GameObject Failed_balloonPrefab; // ǳ�� ������


    //������ �Ǵ� �е� ����

    //Ʋ�� Ƚ��
    int missNum = 2;

    //���������� ��ü �е� ��
    static public int padCnt;
    //���� ���� Ƚ��
    int hitCnt = 0;
    //�������� ��ȣ
    static public int stageNum = 1;

    //���̵� ��ȣ (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs���� ����
    static public int levelNum = 1;

    //�ִ� �������� ��
    static public int stageCnt = 2;

    //�е� ���� �迭
    //ShuffleTouch���� �������� ����
    static public int[] arPads = new int[20];

    //���� ���� �ð�
    static public float startTime;

    //�������� ��� �ð�
    float stageTime;

    //��ü �ð�
    static public float totalTime;

    //��ü miss Ƚ��
    static public int totalMiss;

    //�������� �ð�
    static public int time2 = 60;

    //������ ���������� ���� �� �ð��� ����� �����ϱ� ���� �ð� ���� ����
    int time_temp = 0;

    //�ð� �ʰ��� ���� ���� �Ǵ�
    static public bool over = false;

    //������ ���õǰ� ���� �� �ð� ������ �Ǵ��ϱ� ���� ����
    bool isTotaltime = false;
    bool isStagetime = false;

    //��ġ ���� �迭
    private Vector3[][] stageBalloonPositions = new Vector3[9][];

    int stage_temp = 0;



//���� ���¸� ��Ÿ���� STATE
public enum STATE
    {
        START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR, FINISH, SELECT, RESULT
    };
    //START : ���� �ʱ�ȭ �� stage ����
    //MAKE : ������ ������
    //HIT : ������ ������ ���
    //WRONG : ������ Ʋ���� ���
    //IDLE : ��ġ�� �� �� �ִ� ����
    //CLEAR : �� �������� ����
    //FINISH : ���� ��
    //SELECT : ���̵��� �����ϴ� ����
    //RESULT : ���� ���� �� ��� â ���

    //ó�� ���¸� SELECT�� ����, ���̵� ����
    static public STATE state = STATE.SELECT;
    private int score = 0;
    public int[] Clearcnt = {1,2,2,3,3,3,4,4,4,4};
    bool FailBalloon = false;
    bool SuccessBalloon = false;

    // Update is called once per frame
    public void Update()
    {
        //isTotaltime�� true�̸� ��ü �ð� �帧
        if (isTotaltime)
        {
            //��ü ���� �ð� ���
            totalTime = (int)(time_temp + (int)(Time.time - stageTime));
            /*
            //���� ��ü �ð� ���
            totalTimeText.text = "Total time : " + totalTime;
            */
        }

        //isStagetime�� true�̸� stage �ð��� �帧
        if (isStagetime)
        {
            //�������� ���� �ð� ���
            time2 = 60 - (int)(Time.time - stageTime);
            //�������� ���� �ð� ���
            stageTimeText.text = "���� �ð� : " + time2;
        }

        //time2�� stage �ð�
        //60�� ������ ���� ����
        if (time2 <= 0 && !over)
        {
            totalTime += 60 - time2;
            //�� �� �� �Ǵ�
            over = true;
            //�ð� �ٽ� �ʱ�ȭ
            time2 = 60;
            //�ð� �ʰ��� ���� ���� ����
            isTouch = false;
            isStagetime = false;
            isTotaltime = false;


            StartCoroutine(ShowFail());
            //state�� FINISH�� �ٲ�
            FailAudio.play();
            BhapticsLibrary.Play(BhapticsEvent.FAIL);
            state = STATE.FINISH;
        }





        //state�� ���� �˸��� ȯ�� ����
        switch (state)
        {
            //state�� START�̸� Level�� �´� �������� �����
            //MakeStage() ����
            case STATE.START:
                stageNum = 1;
                missNum = 2;
                totalMiss = 2;
                totalTime = 0f;
                over = false;
                StartCoroutine(MakeStage());
                Debug.Log("Start");
                break;

            //state�� MAKE�̸� ���� ����
            //ShowTouch() ����
            case STATE.MAKE:
                //Ʋ�� Ƚ�� ���
                missText.text = "��� : " + missNum;
                //���� Ƚ�� ���
                hitText.text = "���� Ƚ�� : " + hitCnt;
                Debug.Log("????" + stage_temp);
                Debug.Log("????" + stageCnt);

                if (stage_temp != stageCnt)
                {
                    StartCoroutine(ShowTouch(stageNum));
                    stage_temp++;
                }//ǳ�� �����ֱ�
                break;

            //state�� WRONG�̸� Ʋ���� ���
            //WrongPad() ����
            //state�� WRONG���� �ٲٴ� �κ��� PadCtrl.cs�� ����
            case STATE.WRONG:
                Debug.Log("Wrong");
                StartCoroutine(WrongPad());
                break;

            //state�� HIT�̸� ���� ���
            //CheckPad() ����
            //state�� HIT�� �ٲٴ� �κ��� PadCtrl.cs�� ����
            case STATE.HIT:
                Debug.Log("Hit");
                StartCoroutine(CheckPad());
                break;

            //state�� CLEAR�̸� �� stage �Ϸ�
            //StageClear() ����
            case STATE.CLEAR:
                Debug.Log("Clear");
                StartCoroutine(StageClear());
                break;

            //state�� FINISH�̸� ���� ��
            //Result ȭ������ �Ѿ
            //��ġ�е� ����
            case STATE.FINISH:
                Debug.Log("Finish");
           
                //���� ��, �ð��� ����
                isStagetime = false;
                //isTotaltime = false;
                //��ġ �е� ����
                StartCoroutine(DestroyPad());
                //SceneManager.LoadScene("Result_VR");
                break;

            // ����� �����ִ� ����
            case STATE.RESULT:
                Debug.Log("Result");
                StartCoroutine(ShowResult());
                break;
        }
        /*
        //�ϴ� Esc ��ư ������ ���̵� �������� �Ѿ�� ����
        //���߿� ����
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            //SceneManager.LoadScene("LevelSelect");
        }
        */
    }


    //����� �����ִ� �ڵ�
    //Result_VR.cs ���Ͽ� Update �κ� ����
    IEnumerator ShowResult()
    {
        state = STATE.WAIT;
        //��� UI�� �����ֱ� ���� true�� ����
        Result_Game3.isResult = true;
        //����� �� �Ŀ� �ٽ� ���̵��� ������ �� �ִ� ���·� ��ȯ
        state = STATE.SELECT;
        yield return new WaitForSeconds(1);
    }


    //���� ���� �� ��ġ �е� ����
    IEnumerator DestroyPad()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(1);

        //��ġ �е� �����ϸ鼭 ���� �߰��� ������ UI�� ���� ����
        //Ʋ�� Ƚ�� ���
        missText.text = "";
        //���� Ƚ�� ���
        hitText.text = "";
        stageTimeText.text = "";
        stageNumText.text = "";
        levelText.text = "";
        Debug.Log("123");
        //��ġ �е� tag�� �̿��Ͽ� ����
        Debug.Log("12345" );
        GameObject balloons = GameObject.FindWithTag("balloon" );
        Destroy(balloons);
       
        //��ġ�е� ���� �� ����� �����ִ� ���·� ��ȯ
        state = STATE.RESULT;
    }


    //���� ǳ�� ������ ��Ʋ���� ��� ����Ǵ� ȯ��
    IEnumerator WrongPad()
    {
        //STATE.WAIT�̶� isTouch�� PadCtrl.cs���� ���콺 Ŭ�� ������ ȯ�� ����
        //STATE.WAIT�� ���¿����� ���콺 Ŭ�� �� ��
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.1f);
        isTouch = true;
        //arPads[step]�� step��° ������ �Ǵ� Pad��ȣ
        //padNum�� PadCtrl.cs���� �޾ƿ� ����ڰ� ���� Pad��ȣ
        if (FailBalloon == true)//
        {
            //Ʋ���� ��� missNum�� totalMiss �ϳ� �� ����
            --missNum; //������������ �ʱ�ȭ
            --totalMiss; //����
            //Ʋ�� Ƚ�� update
            missText.text = "��� : " + missNum;

            // missNum�� 1���� ũ�ٴ� ���� �� ������������ �� �� Ʋ�ȴٴ� ��
            if (missNum < 1)
            {

                //�� �� Ʋ���� ��ġ �� �ǰ�, Fail ��� �ð��� ���帣��...
                isTouch = false;
                isStagetime = false;
                isTotaltime = false;
                totalTime += 60 - time2;

                StartCoroutine(ShowFail());
                yield return new WaitForSeconds(2f);
                //state�� FINISH�� �ٲ�
                FailAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.FAIL);
                state = STATE.FINISH;
            }
            FailBalloon = false; // �ٽ� false��
            yield return new WaitForSeconds(0.03f);
        }
        yield return new WaitForSeconds(0.03f);
        //missNum�� 1�� ���� �̾ �÷���
   
        state = STATE.IDLE;

    }

    IEnumerator CheckPad()
    {
        //STATE.WAIT�̶� isTouch�� PadCtrl.cs���� ���콺 Ŭ�� ������ ȯ�� ����
        //STATE.WAIT�� ���¿����� ���콺 Ŭ�� �� ��
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.1f);
        isTouch = true;

        //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
        if (SuccessBalloon == true)
        {
            //���� Ƚ�� ����
            ++hitCnt;
            //���� Ƚ�� update
            hitText.text = "���� Ƚ�� : " + hitCnt;
            //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
            if (hitCnt == Clearcnt[stageNum-1])
            {
                //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                isTouch = false;
                isTotaltime = false;
                isStagetime = false;
                state = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            //step�� �÷��� ������ �Ǵ� ���� Pad ����
            SuccessBalloon = false;

        }

        yield return new WaitForSeconds(0.03f);
        //�ش� ���������� ������ �Ǵ� Pad�� ������ ��� �̾ �÷���
        state = STATE.IDLE;
    }

    //�ش� ������������ �־��� Pad ��� ������ ���
    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        isTouch = false;
        isTotaltime = false;
        isStagetime = false;

        yield return new WaitForSeconds(0.5f);
        //Clear ���� ������
        StartCoroutine(ShowClear());
        stageTimeText.text = "���� �ð� : " + 60;
        yield return new WaitForSeconds(2f);

        //���� �������� ��ȣ
        if (stageNum < stageCnt)
        {
            ++stageNum;
        }
        //�ִ� ���������� �Ǿ��� ���
        else if(stageNum == stageCnt)
        {
            BhapticsLibrary.Play(BhapticsEvent.CLEAR);
            ClearAudio.play();
            //���� ��, FINISH ���·�
            state = STATE.FINISH;
            yield return new WaitForSeconds(0.5f);
        }
        //stage�� �ٲ�� �������� �ð��� �� �帧
        isTouch = false;
        isTotaltime = false;
        isStagetime = false;

        //������� �帥 ��ü �ð� ����
        time_temp = (int)(totalTime);

        //�������� �ð� �ʱ�ȭ
        stageTime = Time.time;


        //���� Ƚ�� �ʱ�ȭ
        hitCnt = 0;
        hitText.text = "���� Ƚ�� : " + hitCnt;
        //����� �Ǵ� Pad���� �ʱ�ȭ
        //Ʋ�� Ƚ�� �ʱ�ȭ
        missNum = totalMiss;
        missText.text = "��� : " + missNum;
        //���� ���� ����
        state = STATE.MAKE;

    }

    //ó�� ���ӿ� ������ �� �⺻ ����
    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(1f);
        //���̵� ���� â ��Ȱ��ȭ
        Disappear_select3.isHide = true;
    //SetPadPos(out sx, out sy);

    //�迭�� ���� ����ŭ �ݺ�
    //foreach (string t in str)
    //{
    //    //�� ���� ���ڿ��� ���� ���� �迭�� ��ȯ(���ڿ� �¿��� ���� ����), ������ �¿� ������ ����(Trim)�ϰ� ���� ���ڹ迭�� ��ȯ
    //    char[] ch = t.Trim().ToCharArray();

    //    //Pad�� x�� ��ǥ
    //    float x = 1.3f;

    //    //1���� ���ڿ� ���̸�ŭ �ݺ�
    //    //�迭�� ch�� �ѹ��ڸ� �а� ���� c�� �Ҵ��Ѵ�
    //    foreach (char c in ch)
    //    {
    //        switch (c)
    //        {
    //            //���� ������ *�̸� �� ��ġ�� Pad ���� ��ġ
    //            case '*':
    //                //Pad �����
    //                //Prefap���� ������� Pad�� GameObject�� ����
    //                GameObject pad = Instantiate(Resources.Load("Prefab/Pad_VR")) as GameObject;

    //                //Pad ��ǥ����
    //                pad.transform.position = new Vector3(x, sy, 1.1f);

    //                //pad1, pad2, ... pad25���� tag�� �����Ǿ� ����
    //                //�����Ǵ� Pad���� tag�� �ٿ���
    //                //���߿� ����ڰ� ������ Pad�� ������ �Ǵ� Pad ���� �� ����
    //                //pad.tag = "pad" + n++;
    //                x += 0.3f;
    //                break;

    //            //��ĭ ó��
    //            case '.':
    //                x += 0.05f;
    //                break;

    //            //�� ĭ ����ó��
    //            case '>':
    //                x += 0.5f;
    //                break;

    //            //�� �� �ణ ó��
    //            case '^':
    //                sy += 0.05f;
    //                break;
    //        }

    //        //ī�带 ǥ���� �Ŀ��� ���� �ð��� �ξ� ī�尡 ��ġ�Ǵ� ������ ���̵�����
    //        if (c == '*')
    //        {
    //            yield return new WaitForSeconds(0.03f);
    //        }
    //    }

    //    //�� �� �Ʒ��� �̵�
    //    sy -= 0.05f;
    //}

        //Pad ���� �Ϸ� �� ���� ���� ���·� �Ѿ
        state = STATE.MAKE;
    }



    //������������ ǳ�� �����ֱ�
    IEnumerator ShowTouch(int stage)
    {
        state = STATE.WAIT;

        //�������� Pad���� ����
        //stage���� ������ �ٲ� ��
        //ShuffleTouch();

        // ǳ�� ��ġ �Է�
            StartCoroutine(ShowStageNum());
            yield return new WaitForSeconds(0.5f);
            if (stage == 1)
            {
                // �������� 1�� ǳ�� ��ġ
                stageBalloonPositions[0] = new Vector3[] { new Vector3(-1.11f, 2.047f, 2.331f) };
            }
            else if (stage == 2)
            {
                // �������� 2�� ǳ�� ��ġ
                stageBalloonPositions[1] = new Vector3[] { new Vector3(1f, 2f, 1f), new Vector3(1f, 0f, 1f) };
            }


            // ǳ�� ���� �� ��ġ
            foreach (Vector3 position in stageBalloonPositions[stage - 1])
            {
                GameObject balloon = Instantiate(balloonPrefab);
                balloon.transform.position = position;
                balloon.tag = "balloon"; // ǳ���� �±� �߰�


                yield return null; // �� ������ ���
                audioSource = gameObject.AddComponent<AudioSource>();
                audioSource.clip = audioClip; // ����� Ŭ�� �Ҵ�
                audioSource.Play();

            }

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);

        
        //��ġ�� �� �ֵ��� ����
        isTouch = true;
        state = STATE.IDLE;
    }

    ////����ڰ� ������ �Ǵ� Pad�� �������� ���� �� �ֵ��� ����
    ////arPads �迭 ����
    ////�̰ɷ� ���� ǳ�� �����ϱ�
    //static public void Shuffle()
    //{
    //    for (int i = 0; i < stageCnt; i++)
    //    {
    //        //1���� pad���� ���̿� ���ڸ� �������� ����
    //        int r = Random.Range(1, padCnt + 1);
    //        //�������� ���� ���ڸ� �迭�� ������� ����
    //        arPads[i] = r;
    //    }
    //}


    //�������� ���۽� �������� ��ȣ�� �����ش�.
    IEnumerator ShowStageNum()
    {
        stageNumText.text = stageNum + " �ܰ�";
        //levelNum�� 1�̸� easy
        if (levelNum == 1)
        {
            levelText.text = "����";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 2�̸� normal
        else if (levelNum == 2)
        {
            levelText.text = "����";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 3�̸� hard
        else if (levelNum == 3)
        {
            levelText.text = "�����";

            yield return new WaitForSeconds(0.5f);
        }

        //1�� �� �����
        yield return new WaitForSeconds(1f);
    }



    //������ Ÿ�̹��� �˷��ش�.
    IEnumerator ShowPushTiming()
    {
        pushText.text = "����!";

        //1�� �� �����
        yield return new WaitForSeconds(1f);

        stageTime = Time.time;
        pushText.text = "";
        isStagetime = true;
        isTotaltime = true;
        //����?
        yield return new WaitForSeconds(1f);
    }

    //Stage�� Clear�ߴٴ� ���� �˸�
    IEnumerator ShowClear()
    {
        pushText.text = "����!";

        //1�� �� �����
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }

    //Stage�� Clear���� ����
    IEnumerator ShowFail()
    {
        pushText.text = "����!";

        //1�� �� �����
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
