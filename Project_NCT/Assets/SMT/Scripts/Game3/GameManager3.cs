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
    public string targetScriptName; // Ȱ��ȭ�� ��ũ��Ʈ�� �̸�

    //balloon ��ġ ����
    public AudioClip audioClip; // ����� Ŭ��
    private AudioSource audioSource;
    public GameObject balloonPrefab; // ǳ�� ������
    public GameObject Failed_balloonPrefab; // ǳ�� ������
    //�ڽ��ݸ���
    public GameObject[] spawnAreas;

    //������ �Ǵ� �е� ����

    //Ʋ�� Ƚ��
    private int missNum = 2;

    //���������� ��ü �е� ��
    static public int padCnt;
    //���� ���� Ƚ��

    //�������� ��ȣ
    static public int stageNum = 1;
    public int stage_move = 1;
    //���̵� ��ȣ (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs���� ����
    static public int levelNum = 1;
    static public int stage_temp = 0;
    //�ִ� �������� ��
    static public int stageCnt = 10;

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
    private List<Vector3> balloonPositions = new List<Vector3>(); // ������ ǳ���� ��ġ�� ������ ����Ʈ
    private float balloonRadius = 0.5f; // ǳ���� ������








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
    //private int fail = 0;

    public int[] Clearcnt = {2,2,3,3,3,4,4,5,5,6};
    public int[] FailBalloonscnt = { 1, 1, 1, 2, 2, 2, 2, 3, 3, 3 };
    
    //����� ���̵�
    public int[] Clearcnt_3 = { 1, 2, 2, 3, 3, 3, 4, 4, 4, 5 };
    public int[] FailBalloonscnt_3 = { 0, 1, 1, 2, 2, 2, 2, 3, 3, 3 };

    bool FailBalloon = false;
    //bool SuccessBalloon = false;

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
                
                if (stage_temp != stageCnt)
                {
                    StartCoroutine(ShowTouch(stageNum));
                    stage_temp++;
                }//ǳ�� �����ֱ�

                //Ʋ�� Ƚ�� ���
                missText.text = "��� : " + missNum;
                //���� Ƚ�� ���
                hitText.text = "���� Ƚ�� : " + score;
                Debug.Log("????" + score);
                Debug.Log("????" + stage_temp);
                Debug.Log("????" + stageCnt);


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

        //��ġ �е� tag�� �̿��Ͽ� ����

        //GameObject balloons = GameObject.FindWithTag("balloon" );
        //Destroy(balloons);
        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {
            Destroy(balloon);
        }
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
        //arPads[step]�� step��° ������ �Ǵ� Pad��ȣ
        //padNum�� PadCtrl.cs���� �޾ƿ� ����ڰ� ���� Pad��ȣ
        if (FailBalloon == true)//
        {
            //Ʋ���� ��� missNum�� totalMiss �ϳ� �� ����
            //--missNum; //������������ �ʱ�ȭ
            --totalMiss; //����
            //Ʋ�� Ƚ�� update
            missText.text = "��� : " + missNum;

            // missNum�� 1���� ũ�ٴ� ���� �� ������������ �� �� Ʋ�ȴٴ� ��
            if (missNum < 1)
            {

                //�� �� Ʋ���� ��ġ �� �ǰ�, Fail ��� �ð��� ���帣��...
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
        if (levelNum == 1)
        {
            //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
            if (score == Clearcnt[stageNum - 1])
            {
                //SuccessBalloon = false;
                //���� Ƚ�� ����
                //���� Ƚ�� update
                hitText.text = "���� Ƚ�� : " + score;
                Debug.Log("��Ʈ" + score);
                Debug.Log("Ŭ����" + Clearcnt[stageNum - 1]);
                //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
                if (score == Clearcnt[stageNum - 1])
                {
                    //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }

            }
        }
        else if (levelNum == 2)
        {
            Debug.Log("��Ʈ" + score+"/"+ (Clearcnt[stageNum - 1] - FailBalloonscnt[stageNum - 1]));
            //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
            if (score == (Clearcnt[stageNum - 1] - FailBalloonscnt[stageNum - 1]))
            {

                //SuccessBalloon = false;
                //���� Ƚ�� ����
                //���� Ƚ�� update
                hitText.text = "���� Ƚ�� : " + score;
                Debug.Log("��Ʈ" + score);
                Debug.Log("Ŭ����" + Clearcnt[stageNum - 1]);
                //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
                if (score == (Clearcnt[stageNum - 1] - FailBalloonscnt[stageNum - 1]))
                {

                    //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }
                
            }
            

        }
        else if (levelNum == 3)
        {
            Debug.Log("��Ʈ" + score + "/" + (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]));
            //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
            if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
            {

                //SuccessBalloon = false;
                //���� Ƚ�� ����
                //���� Ƚ�� update
                hitText.text = "���� Ƚ�� : " + score;
                Debug.Log("��Ʈ" + score);
                Debug.Log("Ŭ����" + Clearcnt_3[stageNum - 1]);
                //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
                if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
                {

                    //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }

            }


        }
        else if (levelNum == 4)
        {
            Debug.Log("��Ʈ" + score + "/" + (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]));
            //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
            if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
            {

                //SuccessBalloon = false;
                //���� Ƚ�� ����
                //���� Ƚ�� update
                hitText.text = "���� Ƚ�� : " + score;
                Debug.Log("��Ʈ" + score);
                Debug.Log("Ŭ����" + Clearcnt_3[stageNum - 1]);
                //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
                if (score == (Clearcnt_3[stageNum - 1] - FailBalloonscnt_3[stageNum - 1]))
                {

                    //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                    isTotaltime = false;
                    isStagetime = false;
                    state = STATE.CLEAR;
                    //return;
                }

            }


        }










        yield return new WaitForSeconds(0.03f);
        //�ش� ���������� ������ �Ǵ� Pad�� ������ ��� �̾ �÷���
        state = STATE.IDLE;
    }

    //�ش� ������������ �־��� Pad ��� ������ ���
    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        isTotaltime = false;
        isStagetime = false;
        //Clear ���� ������
        StartCoroutine(ShowClear());
        stageTimeText.text = "���� �ð� : " + 60;
        yield return new WaitForSeconds(1f);

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
        isTotaltime = false;
        isStagetime = false;

        //������� �帥 ��ü �ð� ����
        time_temp = (int)(totalTime);

        //�������� �ð� �ʱ�ȭ
        stageTime = Time.time;


        //���� Ƚ�� �ʱ�ȭ
        hitText.text = "���� Ƚ�� : " + score;
        //����� �Ǵ� Pad���� �ʱ�ȭ
        //Ʋ�� Ƚ�� �ʱ�ȭ
        missNum = totalMiss;
        score = 0;
        missText.text = "��� : " + missNum;
        //���� ���� ����
        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {
            Destroy(balloon);
        }
        state = STATE.MAKE;
    }

    //ó�� ���ӿ� ������ �� �⺻ ����
    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(1f);
        //���̵� ���� â ��Ȱ��ȭ
        Disappear_select3.isHide = true;
        state = STATE.MAKE;
    }

    //�ڽ��ݸ��� ��ġ ����
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

    //3�ڽ��ݸ��� ��ġ ����
    Vector3 GetRandomPositionInBoxCollider_3(BoxCollider boxCollider)
    {

        Vector3 boxSize = boxCollider.size;
        Vector3 boxCenter = boxCollider.center;


        // BoxCollider ������ 2��ŭ �ø��� �ڵ�
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
                // �� ��ġ�� �̹� �����ϴ� ǳ���� �ʹ� �����
                return false;
            }
        }
        // �� ��ġ�� ��� �����ϴ� ǳ���� ����� �ָ� ������ ����
        return true;
    }

    bool IsPositionFree_3(Vector3 position)
    {
        foreach (Vector3 balloonPosition in balloonPositions)
        {
            float distanceToExistingBalloon = Mathf.Abs(position.x - balloonPosition.x);

            if (distanceToExistingBalloon < balloonRadius * 2)
            {
                // �� ��ġ�� �̹� �����ϴ� ǳ���� �ʹ� �����
                return false;
            }
        }
        // �� ��ġ�� ��� �����ϴ� ǳ���� ����� �ָ� ������ ����
        return true;
    }




    // ������������ ǳ�� �����ֱ�
    IEnumerator ShowTouch(int stage)
    {
        state = STATE.WAIT;
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(0.5f);

        if (levelNum == 1)
        {

            // ������ ǳ�� ��ġ�� �ʱ�ȭ
            balloonPositions.Clear();
            int balloonCount = Clearcnt[stage - 1];
            int maxAttempts = 10000; // �ִ� �õ� Ƚ��

            for (int i = 0; i < balloonCount; i++)
            {
                GameObject spawnArea = spawnAreas[stage - 1];
                BoxCollider spawnAreaBoxCollider = spawnArea.GetComponent<BoxCollider>();
                int currentAttempts = 0; // ���� �õ� Ƚ��
                                         // �� ��ġ�� ǳ���� ���� ������ �ݺ�
                while (currentAttempts < maxAttempts)
                {
                    Vector3 randomPosition = GetRandomPositionInBoxCollider(spawnAreaBoxCollider);
                    if (IsPositionFree(randomPosition))
                    {
                        balloonPositions.Add(randomPosition);  // �� ��ġ�� ����Ʈ�� �߰�
                        GameObject balloon = Instantiate(balloonPrefab, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // ǳ���� �±� �߰�
                        // ǳ���� �����ϰ� �ݺ����� ����
                        break;
                    }
                    else
                    {
                        Debug.Log("��ġ�� ��� ���Դϴ�. �ٸ� ��ġ �õ� ��...");
                        currentAttempts = 0; // ���� �õ� Ƚ��

                    }
                    currentAttempts++;
                }

            }

            yield return null; // �� ������ ���
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // ����� Ŭ�� �Ҵ�
            audioSource.Play();

            StartCoroutine(ShowPushTiming());


        }
        else if (levelNum == 2)
        {
            // ������ ǳ�� ��ġ�� �ʱ�ȭ
            balloonPositions.Clear();
            int balloonCount = Clearcnt[stage - 1];
            int maxAttempts = 10000; // �ִ� �õ� Ƚ��

            int failedBalloonCount = FailBalloonscnt[stage - 1];
            List<int> failedBalloonIndices = new List<int>(); // Failed_balloonPrefab�� ������ ǳ�� �ε������� �����ϴ� ����Ʈ


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
                int currentAttempts = 0; // ���� �õ� Ƚ��
                                         // �� ��ġ�� ǳ���� ���� ������ �ݺ�
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

                        balloonPositions.Add(randomPosition); // �� ��ġ�� ����Ʈ�� �߰�
                        GameObject balloon = Instantiate(balloonPrefabToInstantiate, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // ǳ���� �±� �߰�
                        break;
                    }
                    else
                    {
                        Debug.Log("��ġ�� ��� ���Դϴ�. �ٸ� ��ġ �õ� ��...");
                        currentAttempts = 0; // ���� �õ� Ƚ��

                    }
                    currentAttempts++;
                }


            }

        

            yield return null; // �� ������ ���
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // ����� Ŭ�� �Ҵ�
            audioSource.Play();

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);



        }
        else if (levelNum == 3)
        {
            // ������ ǳ�� ��ġ�� �ʱ�ȭ
            balloonPositions.Clear();
            int balloonCount = Clearcnt_3[stage - 1];
            int maxAttempts = 10000; // �ִ� �õ� Ƚ��

            int failedBalloonCount = FailBalloonscnt_3[stage - 1];
            List<int> failedBalloonIndices = new List<int>(); // Failed_balloonPrefab�� ������ ǳ�� �ε������� �����ϴ� ����Ʈ


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
                int currentAttempts = 0; // ���� �õ� Ƚ��
                                         // �� ��ġ�� ǳ���� ���� ������ �ݺ�
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

                        balloonPositions.Add(randomPosition); // �� ��ġ�� ����Ʈ�� �߰�
                        GameObject balloon = Instantiate(balloonPrefabToInstantiate, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // ǳ���� �±� �߰�
                        stage_move = stageNum;

                       //�̰ɷ� �����̴� �ڵ� ����
                       MonoBehaviour targetScript = balloon.GetComponent(targetScriptName) as MonoBehaviour;
                        if (targetScript != null)
                        {
                            targetScript.enabled = true;
                        }
                        else
                        {
                            Debug.LogWarning("Script " + targetScriptName + " not found on GameObject " + balloon.name);
                        }
                        Debug.Log("���� " + targetScript + "/" + targetScriptName + "/" + balloon.name) ;
                        break;
                    }
                    else
                    {
                        Debug.Log("��ġ�� ��� ���Դϴ�. �ٸ� ��ġ �õ� ��...");
                        currentAttempts = 0; // ���� �õ� Ƚ��

                    }
                    currentAttempts++;
                }


            }



            yield return null; // �� ������ ���
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // ����� Ŭ�� �Ҵ�
            audioSource.Play();

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);



        }
        else if (levelNum == 4)
        {
            // ������ ǳ�� ��ġ�� �ʱ�ȭ
            balloonPositions.Clear();
            if (stage == 0)
            {
                yield return new WaitForSeconds(5f);
            }
            int balloonCount = Clearcnt_3[stage - 1];
            int maxAttempts = 10000; // �ִ� �õ� Ƚ��

            int failedBalloonCount = FailBalloonscnt_3[stage - 1];
            List<int> failedBalloonIndices = new List<int>(); // Failed_balloonPrefab�� ������ ǳ�� �ε������� �����ϴ� ����Ʈ


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
                int currentAttempts = 0; // ���� �õ� Ƚ��
                                         // �� ��ġ�� ǳ���� ���� ������ �ݺ�
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

                        balloonPositions.Add(randomPosition); // �� ��ġ�� ����Ʈ�� �߰�
                        GameObject balloon = Instantiate(balloonPrefabToInstantiate, randomPosition, Quaternion.Euler(-90f, 0f, 0f));
                        balloon.tag = "balloon"; // ǳ���� �±� �߰�
                        stage_move = stageNum;
                        if (balloonPrefabToInstantiate != Failed_balloonPrefab)
                        {
                            // ���� ũ�⿡�� ������ ������ �����Ͽ� ũ�� ����
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

                        //�̰ɷ� �����̴� �ڵ� ����
                        MonoBehaviour targetScript = balloon.GetComponent(targetScriptName) as MonoBehaviour;
                        if (targetScript != null)
                        {
                            targetScript.enabled = true;
                        }
                        else
                        {
                            Debug.LogWarning("Script " + targetScriptName + " not found on GameObject " + balloon.name);
                        }
                        Debug.Log("���� " + targetScript + "/" + targetScriptName + "/" + balloon.name);
                        break;
                    }
                    else
                    {
                        Debug.Log("��ġ�� ��� ���Դϴ�. �ٸ� ��ġ �õ� ��...");
                        currentAttempts = 0; // ���� �õ� Ƚ��

                    }
                    currentAttempts++;
                }


            }



            yield return null; // �� ������ ���
            audioSource = gameObject.AddComponent<AudioSource>();
            audioSource.clip = audioClip; // ����� Ŭ�� �Ҵ�
            audioSource.Play();

            StartCoroutine(ShowPushTiming());
            yield return new WaitForSeconds(0.5f);



        }


        // ��ġ�� �� �ֵ��� ����
        state = STATE.IDLE;
    }



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
        else if (levelNum == 4)
        {
            levelText.text = "�˻� ���!";

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

        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {

            Collider balloonCollider = balloon.GetComponent<Collider>();
            balloonCollider.isTrigger = true;
        }
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);


    }

    //Stage�� Clear���� ����
    IEnumerator ShowFail()
    {
        pushText.text = "����!";
        GameObject[] balloons = GameObject.FindGameObjectsWithTag("balloon");
        foreach (GameObject balloon in balloons)
        {
            Collider balloonCollider = balloon.GetComponent<Collider>();
            balloonCollider.isTrigger = true;
        }

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
        hitText.text = "���� Ƚ�� : " + score;

    }


    public void PrintFalse()
    {
        FailBalloon = true;
        Debug.Log("fail: " + FailBalloon + missNum + " ������ "+score);
    }
    public void MissScore(int points)
    {
        missNum -= points;
    }
}
