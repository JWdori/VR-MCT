using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
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
    //int stageCnt = 6;

    //ī�� �迭 ī�� �����
    int[] arCards = new int[50];

    //���� ���� �ð�
    float startTime;

    //�������� ��� �ð�
    float stageTime;

    void Start()
    {
        //�ð� �ʱ�ȭ
        startTime = stageTime = Time.time;
        //�������� �����
        StartCoroutine(MakeStage());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator MakeStage()
    {
        //����ī���� x��ǥ
        float sx = 0;

        //����ī���� z��ǥ
        float sz = 0;

        SetCardPos(out sx, out sz);

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
            foreach (string c in ch)
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
                        card.tag = "card" + n++;
                        //card.tag = "card" + arCards[n++];
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
}
