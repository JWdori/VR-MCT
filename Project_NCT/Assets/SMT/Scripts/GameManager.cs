using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    //���� ��ü �ð�, �������� �ð�, �������� ��ȣ, ���� ī���� ����
    public Text totalTimeText, stageTimeText, stageText, hitText, stageNumText;

    //Ŭ���� ī�� ��ȣ
    static public int cardNum;

    //������ ī�� ��ȣ
    int lastNum = 0;

    //���������� ��ü ī�� ��
    int cardCnt;

    //ī�� Ŭ�� Ƚ��
    int hitCnt = 0;

    //�������� ��ȣ
    static public int stageNum = 1;

    //�������� ��
    int stageCnt = 6;

    //ī�� �迭 ī�� �����
    int[] arCards = new int[50];

    //���� ���� �ð�
    float startTime;

    //�������� ��� �ð�
    float stageTime;

    //�������� �ڷḦ �����ϴ� ���ǹ� ������ �ڷ�� 0,1,2...�� ���� �Ҵ�ȴ�
    public enum STATE
    {
        START, HIT, WAIT, IDLE, CLEAR
    }

    static public STATE state = STATE.START;

    
    void Start()
    {

        Screen.orientation = ScreenOrientation.LandscapeRight;
        Screen.sleepTimeout = SleepTimeout.NeverSleep;

        //�ð� �ʱ�ȭ
        startTime = stageTime = Time.time;
        //�������� �����
        StartCoroutine(MakeStage());
    }

    // Update is called once per frame
    void Update()
    {
        int time1 = (int)(Time.time - startTime);
        int time2 = (int)(Time.time - stageTime);

        //���� ��ü �ð�, �������� �ð�, �������� ��ȣ, ���� ī���� ���ڸ� ȭ�鿡 ���
        totalTimeText.text = "Total time : " + time1;
        stageTimeText.text = "Stage Time : " + time2;
        stageText.text = "Stage : " + stageNum;
        hitText.text = "Hit : " + hitCnt;

        switch (state)
        {
            //�������� �����
            case STATE.START:
                StartCoroutine(MakeStage());
                break;

            //���� �׸����� ����
            case STATE.HIT:

                CheckCard();
                break;

            //���������� Ŭ�����ϰ� ���� ���������� ����
            case STATE.CLEAR:
                StartCoroutine(StageClear());
                break;
        }

        //��������
        if (Input.GetKeyDown(KeyCode.Escape)) // ESC ��ư
        {
            Application.Quit();
        }
    }

    void CheckCard()
    {
        state = STATE.WAIT;

        //ù ��° ī��
        if (lastNum == 0) //������ ī���ȣ�� 0�� ��
        {
            //���� ī�� ����
            lastNum = cardNum; // Ŭ���� ī�� ��ȣ�� �Ҵ�
            state = STATE.IDLE;
            return;
        }

        //�̹��� ã��
        int img1 = (cardNum + 1) / 2;
        int img2 = (lastNum + 1) / 2;

        //�ٸ� ī�� �̸� ī�带 �ݰ� �Ѵ�
        if (img1 != img2)
        {
            StartCoroutine(CloseTwoCards());

            lastNum = 0;
            state = STATE.IDLE;
            return;
        }

        //���� ī���
        hitCnt += 2; //Ŭ�� Ƚ�� +2

        //ī�尡 ��� ������ ���������� Ŭ���� �Ѵ�.
        if (hitCnt == cardCnt)
        {
            state = STATE.CLEAR;
            return;
        }

        //ī�尡 ���������� �ٸ� ī�带 �����Ѵ�.
        lastNum = 0;
        state = STATE.IDLE;
    }

    //ī�� �ݱ�
    IEnumerator CloseTwoCards()
    {
        //�±׷� ī�� ã��
        GameObject card1 = GameObject.FindWithTag("card" + lastNum);
        GameObject card2 = GameObject.FindWithTag("card" + cardNum);

        //ī�� �ݱ�
        yield return new WaitForSeconds(0.2f);
        card1.SendMessage("CloseCard", SendMessageOptions.DontRequireReceiver);
        card2.SendMessage("CloseCard", SendMessageOptions.DontRequireReceiver);

    }

    //���������� Ŭ����
    IEnumerator StageClear()
    {
        state = STATE.WAIT;

        yield return new WaitForSeconds(2);

        //�������� ī�� ����
        for (int i = 1; i<=cardCnt; i++)
        {
            GameObject card = GameObject.FindWithTag("card" + i);
            Destroy(card);
        }

        //���� �������� ��ȣ
        ++stageNum;
        if (stageNum > stageCnt)
        {
            Application.LoadLevel("GameStart");
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
        //���� �۾������� ����
        state = STATE.WAIT;

        StartCoroutine(ShowStageNum());

        //����ī���� x��ǥ
        float sx = 0;

        //����ī���� z��ǥ
        float sz = 0;

        SetCardPos(out sx, out sz);

        //ī�弯��
        ShuffleCard();

        //���� ī���� ��ȣ
        int n = 1;

        //ī��迭 �б� �迭�� 1���� �а� ���� t�� �Ҵ��Ѵ�
        string[] str = StageSet.stage[stageNum - 1];

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
                        GameObject card = Instantiate(Resources.Load("Prefab/Card")) as GameObject;

                        //ī�� ��ǥ����
                        card.transform.position = new Vector3(x, 0, sz);

                        //�±� �ޱ�
                        //card.tag = "card" + n++;

                        //���� ī��
                        card.tag = "card" + arCards[n++];
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
        //�Է� ��������� ����
        state = STATE.IDLE;
    }

    //ī���� ���� ��ġ ���
    void SetCardPos(out float sx, out float sz)
    {
        //���� ī�� �� �� ĭ ���� ����
        float x = 0;

        //���� ��� ���� �ణ ����
        float z = 0;

        //���� ī�� �ִ� ��
        float maxX = 0;

        //�������� ��ü ī�� ��
        cardCnt = 0;

        //ī�� �迭 ���� �� �迭�� ����
        string[] str = StageSet.stage[stageNum - 1];

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

    void ShuffleCard()
    {
        for (int i = 1; i <= cardCnt; i++)
        {
            arCards[i] = i;
        }
        //return

        //ī�弯�� 15ȸ���� �ݺ�
        for (int i = 1; i <= 15; i++)
        {
            //������ ������ �� �� �����
            int n1 = Random.Range(1, cardCnt + 1);
            int n2 = Random.Range(1, cardCnt + 1);

            //��ȯ
            int t = arCards[n1]; //�迭�� ���� �ٲ۴�
            arCards[n1] = arCards[n2];
            arCards[n2] = t;

            //StartCoroutine(CardOpen(arCards[n1]));
        }
    }

    //�������� ���۽� �������� ��ȣ�� �����ش�
    IEnumerator ShowStageNum()
    {
        stageNumText.text = "STATE" + stageNum;

        yield return new WaitForSeconds(2f);

        stageNumText.text = "";
    }
}
