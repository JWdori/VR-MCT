
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    //���� ��ü �ð�, �������� �ð�, Ʋ�� Ƚ��, ���� Ƚ��, �������� ��ȣ, (����, ����, ����)�� ��Ÿ���� �ؽ�Ʈ
    public Text totalTimeText, stageTimeText, missText, hitText, stageNumText, pushText;

    //��ġ ����
    static public bool isTouch = true;

    //Ʋ�� Ƚ��
    int missNum = 0;

    //������ �Ǵ� �е� ����
    static public int step = 0;

    //Ŭ���� �е� ��ȣ
    static public int padNum;

    //���������� ��ü �е� ��
    static public int padCnt;

    //���� ���� Ƚ��
    int hitCnt = 0;

    //�������� ��ȣ
    static public int stageNum = 1;

    //���̵� ��ȣ (1 = easy, 2 = normal, 3 = hard)
    //Easy.cs, Normal.cs, Hard.cs���� ����
    static public int levelNum;

    //�ִ� �������� ��
    int stageCnt = 20;

    //�е� ���� �迭
    //ShuffleTouch���� �������� ����
    static public int[] arPads = new int[20];

    //���� ���� �ð�
    float startTime;

    //�������� ��� �ð�
    float stageTime;

    //��ü �ð�
    static public float totalTime;

    //��ü miss Ƚ��
    static public int totalMiss;

    //�������� �ð�
    static public int time2;

    static public bool over = false;

    //���� ���¸� ��Ÿ���� STATE
    public enum STATE
    {
        START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR, FINISH
    };

    //ó�� ���¸� START�� ����
    static public STATE state = STATE.START;

    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //�ð� �ʱ�ȭ
        startTime = stageTime = Time.time;

        //���� ����
        //�ܿ��� �Ǵ� Pad�� ������ ���
        ShuffleTouch();
    }

    // Update is called once per frame
    void Update()
    {
        //��ü ���� �ð� ���
        totalTime = (int)(Time.time - startTime);
        //�������� ���� �ð� ���
        time2 = (int)(Time.time - stageTime);

        //���� ��ü �ð� ���
        totalTimeText.text = "Total time : " + totalTime;
        //�������� ���� �ð� ���
        stageTimeText.text = "Stage Time : " + time2;
        //Ʋ�� Ƚ�� ���
        missText.text = "Miss : " + missNum;
        //���� Ƚ�� ���
        hitText.text = "Hit : " + hitCnt;

        if (time2 == 60)
        {
            over = true;
            state = STATE.FINISH;
        }

        //state�� ���� �˸��� ȯ�� ����
        switch (state)
        {
            //state�� START�̸� Level�� �´� �������� �����
            //MakeStage() ����
            case STATE.START:
                StartCoroutine(MakeStage());
                Debug.Log("Start");               
                break;

            //state�� MAKE�̸� ���� ����
            //ShowTouch() ����
            case STATE.MAKE:
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
            case STATE.FINISH:
                Debug.Log("Finish");
                SceneManager.LoadScene("Result");
                break;
        }
        //�ϴ� Esc ��ư ������ ���̵� �������� �Ѿ�� ����
        //���߿� ����
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SceneManager.LoadScene("LevelSelect");
        }
        
    }

    //Ʋ���� ��� ����Ǵ� ȯ��
    IEnumerator WrongPad()
    {
        //STATE.WAIT�̶� isTouch�� PadCtrl.cs���� ���콺 Ŭ�� ������ ȯ�� ����
        //STATE.WAIT�� ���¿����� ���콺 Ŭ�� �� ��
        state = STATE.WAIT;
        isTouch = true;
        //arPads[step]�� step��° ������ �Ǵ� Pad��ȣ
        //padNum�� PadCtrl.cs���� �޾ƿ� ����ڰ� ���� Pad��ȣ
        if (arPads[step] != padNum && isTouch)
        {
            //Ʋ���� ��� missNum�� totalMiss �ϳ� �� ����
            ++missNum; //������������ �ʱ�ȭ
            ++totalMiss; //����

            // missNum�� 1���� ũ�ٴ� ���� �� ������������ �� �� Ʋ�ȴٴ� ��
            if (missNum > 1)
            {
                //�� �� Ʋ���� ��ġ �� �ǰ�, Fail ���
                isTouch = false;
                StartCoroutine(ShowFail());
                yield return new WaitForSeconds(2f);
                //state�� FINISH�� �ٲ�
                state = STATE.FINISH;
            }
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
        isTouch = true;

        //������ �Ǵ� Pad�� ����ڰ� ���� Pad�� ���� ���
        if (arPads[step] == padNum && isTouch)
        {
            //���� Ƚ�� ����
            ++hitCnt;
            
            //�ش� ������������ ������ �Ǵ� Pad�� ��� ������ ���
            if (step+1 == stageNum)
            {
                //��ġ �� �ǰ� �ٲٰ�, state�� CLEAR�� ��ȯ
                isTouch = false;
                state = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            //step�� �÷��� ������ �Ǵ� ���� Pad ����
            ++step;


        }

        yield return new WaitForSeconds(0.03f);
        //�ش� ���������� ������ �Ǵ� Pad�� ������ ��� �̾ �÷���
        state = STATE.IDLE;
    }

    //�ش� ������������ �־��� Pad ��� ������ ���
    IEnumerator StageClear()
    {
        state = STATE.WAIT;
        yield return new WaitForSeconds(0.5f);
        //Clear ���� ������
        StartCoroutine(ShowClear());
        yield return new WaitForSeconds(2f);

        //���� �������� ��ȣ
        ++stageNum;
        
        //�ִ� ���������� �Ǿ��� ���
        if (stageNum > stageCnt)
        {
            //���� ��, FINISH ���·�
            state = STATE.FINISH;
            yield return new WaitForSeconds(0.5f);
        }

        //�������� �ð� �ʱ�ȭ
        stageTime = Time.time;
        
        //���� Ƚ�� �ʱ�ȭ
        hitCnt = 0;
        //����� �Ǵ� Pad���� �ʱ�ȭ
        step = 0;
        //Ʋ�� Ƚ�� �ʱ�ȭ
        missNum = 0;
        //���� ���� ����
        state = STATE.MAKE;
        
    }

    //ó�� ���ӿ� ������ �� Level�� ���� Pad ����
    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        
        yield return new WaitForSeconds(1f);

        //����ī���� x��ǥ
        float sx = 0;

        //����ī���� z��ǥ
        float sz = 0;

        SetPadPos(out sx, out sz);

        //���� �е��� ��ȣ
        int n = 1;

        //PadSet.cs���� Pad�迭 �б� �迭�� 1���� �а� ���� t�� �Ҵ��Ѵ�
        string[] str = PadSet.stage[levelNum - 1];

        //�迭�� ���� ����ŭ �ݺ�
        foreach (string t in str)
        {
            //�� ���� ���ڿ��� ���� ���� �迭�� ��ȯ(���ڿ� �¿��� ���� ����), ������ �¿� ������ ����(Trim)�ϰ� ���� ���ڹ迭�� ��ȯ
            char[] ch = t.Trim().ToCharArray();

            //Pad�� x�� ��ǥ
            float x = sx;

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
                        GameObject pad = Instantiate(Resources.Load("Prefab/Pad")) as GameObject;

                        //Pad ��ǥ����
                        pad.transform.position = new Vector3(x, 0, sz);

                        //pad1, pad2, ... pad25���� tag�� �����Ǿ� ����
                        //�����Ǵ� Pad���� tag�� �ٿ���
                        //���߿� ����ڰ� ������ Pad�� ������ �Ǵ� Pad ���� �� ����
                        pad.tag = "pad" + n++;
                        x++;
                        break;

                    //��ĭ ó��
                    case '.':
                        x++;
                        break;

                    //�� ĭ ����ó��
                    case '>':
                        x += 0.5f;
                        break;

                    //�� �� �ణ ó��
                    case '^':
                        sz += 0.5f;
                        break;
                }

                //ī�带 ǥ���� �Ŀ��� ���� �ð��� �ξ� ī�尡 ��ġ�Ǵ� ������ ���̵�����
                if (c == '*')
                {
                    yield return new WaitForSeconds(0.03f);
                }
            }

            //�� �� �Ʒ��� �̵�
            sz--;
        }
        yield return new WaitForSeconds(1);

        //Pad ���� �Ϸ� �� ���� ���� ���·� �Ѿ
        state = STATE.MAKE;
    }

    //Pad�� ���� ��ġ ���
    void SetPadPos(out float sx, out float sz)
    {
        //���� Pad �� �� ĭ ���� ����
        float x = 0;

        //���� ��� ���� �ణ ����
        float z = 0;

        //���� Pad �ִ� ��
        float maxX = 0;

        //Pad �迭 ���� �� �迭�� ����
        string[] str = PadSet.stage[levelNum - 1];

        //���� ����ŭ �ݺ�
        for (int i = 0; i<str.Length; i++)
        {
            //1�� �б�
            string t = str[i].Trim();

            //�� ���� Pad ��
            x = 0;

            //�� ���� ���� ����ŭ �ݺ�
            for (int j = 0; j<t.Length; j++)
            {
                //���ڿ�(string)�� ���� ����(char)�� �迭�� ����� �� ����
                switch(t[j])
                {
                    case '.':
                    case '*':

                        //Pad ��ġ�� �ʿ��� ����
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

            //�� ���� �ִ� Pad �� ���
            if (x>maxX)
            {
                maxX = x;
            }
            //��ü ���� ��
            z++;
        }
        //Pad ���� ���� ��ġ
        sx = -maxX / 2;
        sz = (z - 1) / 2;
    }

    //����ڰ� ��ġ�ؾ� �� Pad���� ������
    IEnumerator ShowTouch()
    {
        state = STATE.WAIT;

        //�������� Pad���� ����
        //stage���� ������ �ٲ� ��
        //ShuffleTouch();

        //���� ���� ���� Stage �˷���
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(2f);
        
        //������ �Ǵ� Pad ���� ó������ �ʱ�ȭ
        step = 0;

        //stageNum��ŭ ������ �Ǵ� Pad ������� ������
        for (int i = 1; i <= stageNum; i++)
        {
            //pad�� tag�� �̿��Ͽ� ����
            //ShuffleTouch���� arPads �迭 ���� ����
            GameObject pad = GameObject.FindWithTag("pad" + arPads[i-1]);
            //���� ������ �� ȿ���� ����
            pad.SendMessage("PlayAud", SendMessageOptions.DontRequireReceiver);
            //������ �Ǵ� Pad �Ķ������� ������
            //"ShowPad"�� PadCtrl.cs���� Ȯ��
            pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            yield return new WaitForSeconds(1f);
        }
        //���� ������ �� ����ڰ� ��ġ�� �� �ִ� ������ �˷���
        StartCoroutine(ShowPushTiming());
        yield return new WaitForSeconds(1f);

        //��ġ�� �� �ֵ��� ����
        isTouch = true;
        state = STATE.IDLE;
    }

    //����ڰ� ������ �Ǵ� Pad�� �������� ���� �� �ֵ��� ����
    //arPads �迭 ����
    void ShuffleTouch()
    {
        for (int i = 0; i < stageCnt; i++)
        {
            //1���� pad���� ���̿� ���ڸ� �������� ����
            int r = Random.Range(1, padCnt + 1);
            //�������� ���� ���ڸ� �迭�� ������� ����
            arPads[i] = r;
        }
    }

    //�������� ���۽� �������� ��ȣ�� �����ش�.
    IEnumerator ShowStageNum()
    {
        stageNumText.text = "STAGE " + stageNum;

        //1�� �� �����
        yield return new WaitForSeconds(1f);
        
        stageNumText.text = "";
        yield return new WaitForSeconds(2f);
    }

    //������ Ÿ�̹��� �˷��ش�.
    IEnumerator ShowPushTiming()
    {
        pushText.text = "Start";

        //1�� �� �����
        yield return new WaitForSeconds(1f);
        
        pushText.text = "";

        yield return new WaitForSeconds(2f);
    }

    //Stage�� Clear�ߴٴ� ���� �˸�
    IEnumerator ShowClear()
    {
        pushText.text = "Clear";

        //1�� �� �����
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }

    //Stage�� Clear���� ����
    IEnumerator ShowFail()
    {
        pushText.text = "Fail";

        //1�� �� �����
        yield return new WaitForSeconds(1f);

        pushText.text = "";

        yield return new WaitForSeconds(1f);
    }

}
