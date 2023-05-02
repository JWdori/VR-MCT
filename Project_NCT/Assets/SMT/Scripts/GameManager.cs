
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

    //Ŭ���� �е� ��ȣ
    static public int padNum;

    //������ ī�� ��ȣ
    int lastNum = 0;

    //���������� ��ü ī�� ��
    int padCnt;

    //ī�� Ŭ�� Ƚ��
    int hitCnt = 0;

    //�������� ��ȣ
    static public int stageNum = 1;

    //���̵� ��ȣ
    static public int levelNum = 1;

    //�������� ��
    int stageCnt = 20;

    //�е� ���� �迭
    int[] arPads = new int[20];

    //�е� �迭
    int[] setPads = new int[25];

    //���� ���� �ð�
    float startTime;

    //�������� ��� �ð�
    float stageTime;

    public enum STATE
    {
        START, HIT, WAIT, IDLE, CLEAR
    };

    static public STATE state = STATE.START;
    
    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //�ð� �ʱ�ȭ
        startTime = stageTime = Time.time;
        
        //�������� �����
        StartCoroutine(MakeStage());
        //StartCoroutine(ShuffleTouch());
        ShuffleTouch();

    }

    // Update is called once per frame
    void Update()
    {
        switch (state)
        {
            //�������� �����
            case STATE.START:
                StartCoroutine(MakeStage());               
                break;

            case STATE.HIT:
                CheckPad();
                break;

            case STATE.CLEAR:
                StartCoroutine(StageClear());
                ShowTouch();
                break;
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
        
    }

    void CheckPad()
    {
        state = STATE.WAIT;

        for (int i = 1; i <= stageNum; i++)
        {
            
        }

        state = STATE.IDLE;
    }

    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        yield return new WaitForSeconds(2);

        //���� �������� ��ȣ
        ++stageNum;
        if(stageNum > stageCnt)
        {
            //Application.LoadLevel("GameStart");
            //return;
        }

        //�������� �ʱ�ȭ
        stageTime = Time.time;
        lastNum = 0;
        hitCnt = 0;

        state = STATE.START;
    }

    IEnumerator MakeStage()
    {

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
        StartCoroutine(ShowTouch());
        state = STATE.IDLE;
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

        //�������� ��ü ī�� ��
        padCnt = 0;

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
                        if (t[j] == '*')
                        {
                            //��ü ī�� ��
                            padCnt++;
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
        for (int i = 1; i <= stageNum; i++)
        {
            Debug.Log(i);
            GameObject pad = GameObject.FindWithTag("pad" + arPads[i-1]);
            pad.SendMessage("TouchPad", SendMessageOptions.DontRequireReceiver);
            yield return new WaitForSeconds(1f);
        }
        
        state = STATE.IDLE;
        //return;
    }

    void ShuffleTouch()
    {
        for (int i = 0; i < stageCnt; i++)
        {
            int r = Random.Range(1, padCnt + 1);
            Debug.Log("r"+r);
            arPads[i] = r;
        }
        //yield return new WaitForSeconds(0.2f);
    }

}
