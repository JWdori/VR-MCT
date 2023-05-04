
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //���� ��ü �ð�, �������� �ð�, �������� ��ȣ, ���� ī���� ����
    public Text totalTimeText, stageTimeText, missText, hitText, stageNumText;

    //��ġ ����
    static public bool isTouch = false;

    //Ʋ�� Ƚ��
    int missNum = 0;

    //������ �Ǵ� �е� ����
    static public int step = 0;

    //Ŭ���� �е� ��ȣ
    static public int padNum;

    //���������� ��ü ī�� ��
    int padCnt = 9;

    //ī�� Ŭ�� Ƚ��
    int hitCnt = 0;

    //�������� ��ȣ
    static public int stageNum = 1;

    //���̵� ��ȣ
    static public int levelNum = 1;

    //�������� ��
    int stageCnt = 20;

    //�е� ���� �迭
    static public int[] arPads = new int[20];

    //���� ���� �ð�
    float startTime;

    //�������� ��� �ð�
    float stageTime;

    public enum STATE
    {
        START, MAKE, HIT, WRONG, WAIT, IDLE, CLEAR
    };

    static public STATE state = STATE.START;

    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //�ð� �ʱ�ȭ
        startTime = stageTime = Time.time;

        //ShuffleTouch();
        

        
    }
    
    // Update is called once per frame
    void Update()
    {
        int time1 = (int)(Time.time - startTime);
        int time2 = (int)(Time.time - stageTime);

        //���� ��ü �ð�, �������� �ð�, �������� ��ȣ, ���� ī���� ���ڸ� ȭ�鿡 ���
        totalTimeText.text = "Total time : " + time1;
        stageTimeText.text = "Stage Time : " + time2;
        missText.text = "Miss : " + missNum;
        hitText.text = "Hit : " + hitCnt;

        switch (state)
        {
            //�������� �����
            case STATE.START:
                StartCoroutine(MakeStage());
                Debug.Log("Start");
                
                break;

            //���� ����
            case STATE.MAKE:
                Debug.Log("Make");
                //ShuffleTouch();
                StartCoroutine(ShowTouch());
                break;

            case STATE.WRONG:
                Debug.Log("Wrong");
                StartCoroutine(WrongPad());
                break;

            case STATE.HIT:
                Debug.Log("Hit");
                StartCoroutine(CheckPad());
                break;

            case STATE.CLEAR:
                Debug.Log("Clear");
                StartCoroutine(StageClear());
                break;
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
        
    }

    IEnumerator WrongPad()
    {
        state = STATE.WAIT;
        if (arPads[step] != padNum && isTouch)
        {
            Debug.Log("����2");
            Debug.Log("arPads" + arPads[step]);
            Debug.Log("padNum" + padNum);
            Debug.Log("step" + step);
            isTouch = false;
            ++missNum;
            yield return new WaitForSeconds(0.03f);
        }
        yield return new WaitForSeconds(0.03f);
        state = STATE.IDLE;
    }

    IEnumerator CheckPad()
    {
        state = STATE.WAIT;

        if (arPads[step] == padNum && isTouch)
        {
            Debug.Log("arPads" + arPads[step]);
            Debug.Log("padNum" + padNum);
            Debug.Log("����" + step);
            ++hitCnt;
            isTouch = false;
            if (step+1 == stageNum)
            {
                state = STATE.CLEAR;
                yield return new WaitForSeconds(0.03f);
                //return;
            }
            ++step;


        }

        yield return new WaitForSeconds(0.03f);
        state = STATE.IDLE;
    }

    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        yield return new WaitForSeconds(2f);

        //���� �������� ��ȣ
        ++stageNum;
        if(stageNum > stageCnt)
        {
            //Application.LoadLevel("GameStart");
            //return;
        }

        //�������� �ʱ�ȭ
        stageTime = Time.time;
        hitCnt = 0;
        step = 0;
        state = STATE.MAKE;
        
    }

    IEnumerator MakeStage()
    {
        state = STATE.WAIT;
        

        yield return new WaitForSeconds(1f);

        //����ī���� x��ǥ
        float sx = 0;

        //����ī���� z��ǥ
        float sz = 0;

        //�е�迭 ����
        int p = 0;

        SetPadPos(out sx, out sz);

        //���� �е��� ��ȣ
        int n = 1;

        //ī��迭 �б� �迭�� 1���� �а� ���� t�� �Ҵ��Ѵ�
        string[] str = PadSet.stage[levelNum - 1];

        //�迭�� ���� ����ŭ �ݺ�
        foreach (string t in str)
        {
            //������ ���ڿ��� ���� ���� �迭�� ��ȯ(���ڿ� �¿��� ���� ����), ������ �¿� ������ ����(Trim)�ϰ� ���� ���ڹ迭�� ��ȯ
            char[] ch = t.Trim().ToCharArray();

            //ī���� x�� ��ǥ
            float x = sx;

            //1���� ���ڿ� ���̸�ŭ �ݺ�
            //�迭�� ch�� �ѹ��ڸ� �а� ���� c�� �Ҵ��Ѵ�
            foreach (char c in ch)
            {
                switch (c)
                {
                    //���� ������ *�̸� �� ��ġ�� ī�� ���� ��ġ
                    case '*':
                        //ī�� �����
                        GameObject pad = Instantiate(Resources.Load("Prefab/Pad")) as GameObject;

                        //ī�� ��ǥ����
                        pad.transform.position = new Vector3(x, 0, sz);

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
        state = STATE.MAKE;
    }

    //ī���� ���� ��ġ ���
    void SetPadPos(out float sx, out float sz)
    {
        //���� ī�� �� �� ĭ ���� ����
        float x = 0;

        //���� ��� ���� �ణ ����
        float z = 0;

        //���� ī�� �ִ� ��
        float maxX = 0;

        //ī�� �迭 ���� �� �迭�� ����
        string[] str = PadSet.stage[levelNum - 1];

        //���� ����ŭ �ݺ�
        for (int i = 0; i<str.Length; i++)
        {
            //1�� �б�
            string t = str[i].Trim();

            //�� ���� ī�� ��
            x = 0;

            //�� ���� ���� ����ŭ �ݺ�
            for (int j = 0; j<t.Length; j++)
            {
                //���ڿ�(string)�� ���� ����(char)�� �迭�� ����� �� ����
                switch(t[j])
                {
                    case '.':
                    case '*':

                        //ī�� ��ġ�� �ʿ��� ����
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

            //�� ���� �ִ� ī�� �� ���
            if (x>maxX)
            {
                maxX = x;
            }
            //��ü ���� ��
            z++;
        }
        //ī�� ���� ���� ��ġ
        sx = -maxX / 2;
        sz = (z - 1) / 2;

        // StartCoroutine(CardOpen(cardCnt));
    }
    IEnumerator ShowTouch()
    {
        state = STATE.WAIT;
        ShuffleTouch();
        StartCoroutine(ShowStageNum());
        yield return new WaitForSeconds(2f);

        step = 0;

        for (int i = 1; i <= stageNum; i++)
        {
            //Debug.Log(i);
            GameObject pad = GameObject.FindWithTag("pad" + arPads[i-1]);
            pad.SendMessage("ShowPad", SendMessageOptions.DontRequireReceiver);
            yield return new WaitForSeconds(1f);
        }
        
        state = STATE.IDLE;
    }

    void ShuffleTouch()
    {
        for (int i = 0; i < stageNum; i++)
        {
            int r = Random.Range(1, padCnt + 1);
            Debug.Log("r"+r);
            arPads[i] = r;
        }
    }

    //�������� ���۽� �������� ��ȣ�� �����ش�.
    IEnumerator ShowStageNum()
    {
        stageNumText.text = "STATE" + stageNum;

        yield return new WaitForSeconds(1f);

        stageNumText.text = "";
        yield return new WaitForSeconds(2f);
    }

}
