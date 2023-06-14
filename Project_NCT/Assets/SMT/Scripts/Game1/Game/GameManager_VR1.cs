
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
using Bhaptics.SDK2;

public class GameManager_VR1 : MonoBehaviour
{
    //���� ��ü �ð�, �������� �ð�, Ʋ�� Ƚ��, ���� Ƚ��, �������� ��ȣ, (����, ����, ����)�� ��Ÿ���� �ؽ�Ʈ
    public TextMeshPro totalTimeText, stageTimeText, missText, hitText, stageNumText, pushText, levelText;

    public GameObject loading;
    //public GameObject panel;
    //public GameObject startbutton;
    //public GameObject tuto;

    //��ġ ����
    static public bool isTouch1 = true;

    //Ʋ�� Ƚ��
    int missNum = 2;

    //������ �Ǵ� �е� ����
    static public int step1 = 0;

    //Ŭ���� �е� ��ȣ
    static public int padNum1;

    //���������� ��ü �е� ��
    static public int padCnt1;

    //���� ���� Ƚ��
    int hitCnt = 0;

    //�������� ��ȣ
    static public int stageNum1 = 1;

    //���̵� ��ȣ (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs���� ����
    static public int levelNum1 = 1;

    //�ִ� �������� ��
    static public int stageCnt1 = 10;

    //�е� ���� �迭
    //ShuffleTouch���� �������� ����
    static public bool[] arPads1 = new bool[11];

    //���� ���� �ð�
    static public float startTime1;

    //�������� ��� �ð�
    float stageTime;

    //��ü �ð�
    static public float totalTime1;

    //��ü miss Ƚ��
    static public int totalMiss1;

    //�������� �ð�
    static public int time2_1 = 60;

    //�ð� �ʰ��� ���� ���� �Ǵ�
    static public bool over1 = false;

    //������ ���õǰ� ���� �� �ð� ������ �Ǵ��ϱ� ���� ����
    bool isStagetime = false;

    //ShuffleTouch���� ���
    int r = 0;

    //���� ���¸� ��Ÿ���� STATE
    public enum STATE
    {
        EX, START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR, FINISH, SELECT, RESULT
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
    static public STATE state1 = STATE.SELECT;

    public void Start()
    {
        //Screen.orientation = ScreenOrientation.LandscapeRight;
        //  Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //�ð� �ʱ�ȭ
        //startTime = Time.time;

        //���� ����
        //�ܿ��� �Ǵ� Pad�� ������ ���
        //ShuffleTouch();
    }

    // Update is called once per frame
    public void Update()
    {
        
        //isStagetime�� true�̸� stage �ð��� �帧
        if (isStagetime)
        {
            //�������� ���� �ð� ���
            time2_1 = 60 - (int)(Time.time - stageTime);
            //�������� ���� �ð� ���
            stageTimeText.text = "���� �ð� : " + time2_1;
        }
        
        //time2�� stage �ð�
        //60�� ������ ���� ����
        if (time2_1 <= 0 && !over1)
        {
            totalTime1 += 60 - time2_1;
            //�� �� �� �Ǵ�
            over1 = true;
            //�ð� �ٽ� �ʱ�ȭ
            time2_1 = 60;

            //�ð� �ʰ��� ���� ���� ����
            state1 = STATE.FINISH;
        }

        //state�� ���� �˸��� ȯ�� ����
        switch (state1)
        {
            case STATE.EX:
                StartCoroutine(ShowEx());
                break;

            //state�� START�̸� Level�� �´� �������� �����
            //MakeStage() ����
            case STATE.START:
                stageNum1 = 1;
                missNum = 2;
                totalMiss1 = 2;
                totalTime1 = 0f;
                over1 = false ;
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
                Debug.Log("Make");
                StartCoroutine(ShowTouch());
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

    IEnumerator ShowEx()
    {
        state1 = STATE.WAIT;
        //���̵� ���� â ��Ȱ��ȭ
        Disappear_select.isHide = true;

        loading.SetActive(true);
        //tuto.SetActive(true);
        yield return new WaitForSeconds(1f);
        //panel.SetActive(true);
        //startbutton.SetActive(true);
        loading.SetActive(false);
        state1 = STATE.START;
    }

    //����� �����ִ� �ڵ�
    //Result_VR.cs ���Ͽ� Update �κ� ����
    IEnumerator ShowResult()
    {
        state1 = STATE.WAIT;
        //��� UI�� �����ֱ� ���� true�� ����
        Result_VR1.isResult1 = true;
        
        //����� �� �Ŀ� �ٽ� ���̵��� ������ �� �ִ� ���·� ��ȯ
        state1 = STATE.SELECT;
        yield return new WaitForSeconds(1);
    }

    //���� ���� �� ��ġ �е� ����
    IEnumerator DestroyPad()
    {
        state1 = STATE.WAIT;

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
        for (int i = 1; i <= padCnt1; i++)
        {
            GameObject pad = GameObject.FindWithTag("pad" + i);
            Destroy(pad);
        }

        //��ġ�е� ���� �� ����� �����ִ� ���·� ��ȯ
        state1 = STATE.RESULT;
    }

    //Ʋ���� ��� ����Ǵ� ȯ��
    IEnumerator WrongPad()
    {
        //STATE.WAIT�̶� isTouch�� PadCtrl.cs���� ���콺 Ŭ�� ������ ȯ�� ����
        //STATE.WAIT�� ���¿����� ���콺 Ŭ�� �� ��
        state1 = STATE.WAIT;
        yield return new WaitForSeconds(0.5f);
        isTouch1 = true;
        //arPads[step]�� step��° ������ �Ǵ� Pad��ȣ
        //padNum�� PadCtrl.cs���� �޾ƿ� ����ڰ� ���� Pad��ȣ
        if (isTouch1)
        {
            //Ʋ���� ��� missNum�� totalMiss �ϳ� �� ����
            --missNum; //������������ �ʱ�ȭ
            --totalMiss1; //����
            //Ʋ�� Ƚ�� update
            missText.text = "��� : " + missNum;
            
            // missNum�� 1���� ũ�ٴ� ���� �� ������������ �� �� Ʋ�ȴٴ� ��
            if (missNum < 1)
            {
                //�� �� Ʋ���� ��ġ �� �ǰ�, Fail ��� �ð��� ���帣��...
                isTouch1 = false;
                isStagetime = false;
                totalTime1 += 60 - time2_1;

                StartCoroutine(ShowFail());
                yield return new WaitForSeconds(2f);
                FailAudio.play();
                BhapticsLibrary.Play(BhapticsEvent.FAIL);
                //state�� FINISH�� �ٲ�
                state1 = STATE.FINISH;
            }
            yield return new WaitForSeconds(0.03f);
        }
        yield return new WaitForSeconds(0.03f);
        //missNum�� 1�� ���� �̾ �÷���
        state1 = STATE.IDLE;
    }

    IEnumerator CheckPad()
    {
        //STATE.WAIT�̶� isTouch�� PadCtrl.cs���� ���콺 Ŭ�� ������ ȯ�� ����
        //STATE.WAIT�� ���¿����� ���콺 Ŭ�� �� ��
        state1 = STATE.WAIT;
        yield return new WaitForSeconds(0.5f);
        isTouch1 = true;
        //Debug.Log(step1);

        //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
        if (isTouch1)
        {
            //���� Ƚ�� ����
            ++hitCnt;
            //���� Ƚ�� update
            hitText.text = "���� Ƚ�� : " + hitCnt;
            //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
            if (step1+1 == (stageNum1 + 3) / 2)
            {
                //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                isTouch1 = false;
                isStagetime = false;
                state1 = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            //step�� �÷��� ������ �Ǵ� ���� Pad ����
            ++step1;


        }

        yield return new WaitForSeconds(0.03f);
        //�ش� ���������� ������ �Ǵ� Pad�� ������ ��� �̾ �÷���
        state1 = STATE.IDLE;
    }

    //�ش� ������������ �־��� Pad ��� ������ ���
    IEnumerator StageClear()
    {
        state1 = STATE.WAIT;

        isTouch1 = false;
        isStagetime = false;

        yield return new WaitForSeconds(0.5f);
        //Clear ���� ������
        StartCoroutine(ShowClear());
        stageTimeText.text = "���� �ð� : " + 60;
        yield return new WaitForSeconds(2f);

        //���� �������� ��ȣ
        if (stageNum1 < stageCnt1)
        {
            ++stageNum1;
        }
        //�ִ� ���������� �Ǿ��� ���
        else if (stageNum1 == stageCnt1)
        {
            BhapticsLibrary.Play(BhapticsEvent.CLEAR);
            ClearAudio.play();
            //���� ��, FINISH ���·�
            state1 = STATE.FINISH;
            yield return new WaitForSeconds(0.5f);
        }

        //stage�� �ٲ�� �������� �ð��� �� �帧
        isTouch1 = false;
        isStagetime = false;

        //������� �帥 ��ü �ð� ����
        totalTime1 += 60 - time2_1;

        //�������� �ð� �ʱ�ȭ
        stageTime = Time.time;


        //���� Ƚ�� �ʱ�ȭ
        hitCnt = 0;
        hitText.text = "���� Ƚ�� : " + hitCnt;
        //����� �Ǵ� Pad���� �ʱ�ȭ
        step1 = 0;
        //Ʋ�� Ƚ�� �ʱ�ȭ
        missNum = totalMiss1;
        missText.text = "��� : " + missNum;
        
        //���� ���� ����
        state1 = STATE.MAKE;

    }

    //ó�� ���ӿ� ������ �� Level�� ���� Pad ����
    IEnumerator MakeStage()
    {
        state1 = STATE.WAIT;

        loading.SetActive(false);

        //����ī���� x��ǥ
        float sx = 0;

        //����ī���� y��ǥ
        float sy = 0;

        SetPadPos(out sx, out sy);

        //���� �е��� ��ȣ
        int n = 1;

        //PadSet.cs���� Pad�迭 �б� �迭�� 1���� �а� ���� t�� �Ҵ��Ѵ�
        string[] str = PadSet_VR.stage[levelNum1 - 1];

        //�迭�� ���� ����ŭ �ݺ�
        foreach (string t in str)
        {
            //�� ���� ���ڿ��� ���� ���� �迭�� ��ȯ(���ڿ� �¿��� ���� ����), ������ �¿� ������ ����(Trim)�ϰ� ���� ���ڹ迭�� ��ȯ
            char[] ch = t.Trim().ToCharArray();

            //Pad�� x�� ��ǥ
            float x = 1.3f;

            //1���� ���ڿ� ���̸�ŭ �ݺ�
            //�迭�� ch�� �ѹ��ڸ� �а� ���� c�� �Ҵ��Ѵ�
            foreach (char c in ch)
            {
                switch (c)
                {
                    //���� ������ *�̸� �� ��ġ�� Pad ���� ��ġ
                    case '*':
                        //Pad �����
                        //Prefap���� ������� Pad�� GameObject�� ����
                        GameObject pad = Instantiate(Resources.Load("Prefab/Pad_Normal")) as GameObject;

                        //Pad ��ǥ����
                        pad.transform.position = new Vector3(x, sy, 1.2f);

                        //pad1, pad2, ... pad25���� tag�� �����Ǿ� ����
                        //�����Ǵ� Pad���� tag�� �ٿ���
                        //���߿� ����ڰ� ������ Pad�� ������ �Ǵ� Pad ���� �� ����
                        pad.tag = "pad" + n;
                        arPads1[n-1] = false;
                        ++n;
                        x += 0.15f;
                        break;

                    //��ĭ ó��
                    case '.':
                        x += 0.15f;
                        break;

                    //�� ĭ ����ó��
                    case '>':
                        x += 0.15f;
                        break;

                    //�� �� �ణ ó��
                    case '^':
                        sy += 0.05f;
                        break;
                }

                //ī�带 ǥ���� �Ŀ��� ���� �ð��� �ξ� ī�尡 ��ġ�Ǵ� ������ ���̵�����
                if (c == '*')
                {
                    yield return new WaitForSeconds(0.03f);
                }
            }

            //�� �� �Ʒ��� �̵�
            sy-=0.2f;
        }
        yield return new WaitForSeconds(1);
        loading.SetActive(false);

        //Pad ���� �Ϸ� �� ���� ���� ���·� �Ѿ
        state1 = STATE.MAKE;
    }

    //Pad�� ���� ��ġ ���
    void SetPadPos(out float sx, out float sy)
    {
        //���� Pad �� �� ĭ ���� ����
        float x = 0;

        //���� ��� ���� �ణ ����
        float y = 3f;

        //���� Pad �ִ� ��
        float maxX = 0;

        //Pad �迭 ���� �� �迭�� ����
        string[] str = PadSet_VR.stage[levelNum1 - 1];

        //���� ����ŭ �ݺ�
        for (int i = 0; i < str.Length; i++)
        {
            //1�� �б�
            string t = str[i].Trim();

            //�� ���� Pad ��
            x = 0;

            //�� ���� ���� ����ŭ �ݺ�
            for (int j = 0; j < t.Length; j++)
            {
                //���ڿ�(string)�� ���� ����(char)�� �迭�� ����� �� ����
                switch (t[j])
                {
                    case '.':
                    case '*':

                        //Pad ��ġ�� �ʿ��� ����
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

            //�� ���� �ִ� Pad �� ���
            if (x > maxX)
            {
                maxX = x;
            }
            //��ü ���� ��
            y++;
        }
        //Pad ���� ���� ��ġ
        sx = -maxX / 2;
        sy = (y - 1) / 2;
    }

    //����ڰ� ��ġ�ؾ� �� Pad���� ������
    IEnumerator ShowTouch()
    {
        state1 = STATE.WAIT;


        //�������� Pad���� ����
        //stage���� ������ �ٲ� ��
        //ShuffleTouch();
        StartCoroutine(ShuffleTouch());
        yield return new WaitForSeconds(0.1f);

        //���� ���� ���� Stage �˷���
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(0.5f);

        //������ �Ǵ� Pad ���� ó������ �ʱ�ȭ
        step1 = 0;

        for(int i = 0; i < padCnt1; i++)
        {
            if (arPads1[i])
            {
                //pad�� tag�� �̿��Ͽ� ����
                //ShuffleTouch���� arPads �迭 ���� ����
                GameObject pad = GameObject.FindWithTag("pad" + (i+1));
                //���� ������ �� ȿ���� ����
                pad.SendMessage("PlayAud", SendMessageOptions.DontRequireReceiver);
                //������ �Ǵ� Pad �Ķ������� ������
                //"ShowPad"�� PadCtrl.cs���� Ȯ��
                pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            }
        }

        /*
        //stageNum��ŭ ������ �Ǵ� Pad ������� ������
        for (int i = 1; i <= (stageNum1+3)/2; i++)
        {
            //pad�� tag�� �̿��Ͽ� ����
            //ShuffleTouch���� arPads �迭 ���� ����
            GameObject pad = GameObject.FindWithTag("pad" + arPads1[i - 1]);
            //���� ������ �� ȿ���� ����
            pad.SendMessage("PlayAud", SendMessageOptions.DontRequireReceiver);
            //������ �Ǵ� Pad �Ķ������� ������
            //"ShowPad"�� PadCtrl.cs���� Ȯ��
            pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            //yield return new WaitForSeconds(1f);
        }
        */
        //���� ������ �� ����ڰ� ��ġ�� �� �ִ� ������ �˷���
        yield return new WaitForSeconds(1f);
        StartCoroutine(ShowPushTiming());
        yield return new WaitForSeconds(0.1f);

        //��ġ�� �� �ֵ��� ����
        isTouch1 = true;
        state1 = STATE.IDLE;
    }

    //����ڰ� ������ �Ǵ� Pad�� �������� ���� �� �ֵ��� ����
    //arPads �迭 ����
    IEnumerator ShuffleTouch()
    {
        r = 0;

        while (r < (stageNum1+3)/2)
        {
            //1���� pad���� ���̿� ���ڸ� �������� ����
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

    
    //�������� ���۽� �������� ��ȣ�� �����ش�.
    IEnumerator ShowStageNum()
    {
        stageNumText.text =  stageNum1 + " �ܰ�";
        //levelNum�� 1�̸� easy
        if (levelNum1 == 1)
        {
            levelText.text = "����";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 2�̸� normal
        else if (levelNum1 == 2)
        {
            levelText.text = "����";

            yield return new WaitForSeconds(0.5f);
        }

        //levelNum�� 3�̸� hard
        else if (levelNum1 == 3)
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
        //����?
        yield return new WaitForSeconds(2f);
    }

    //Stage�� Clear�ߴٴ� ���� �˸�
    IEnumerator ShowClear()
    {
        pushText.color = Color.green; // Change the text color to green

        pushText.text = "����!";

        //1�� �� �����
        yield return new WaitForSeconds(1f);

        pushText.text = "";
        pushText.color = Color.black; // Change the text color to green

        yield return new WaitForSeconds(1f);
    }

    //Stage�� Clear���� ����
    IEnumerator ShowFail()
    {
        pushText.color = Color.red; // Change the text color to green

        pushText.text = "����!";

        //1�� �� �����
        yield return new WaitForSeconds(1f);

        pushText.text = "";
        pushText.color = Color.black; // Change the text color to green

        yield return new WaitForSeconds(1f);
    }
    

}
