using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class BackManager : MonoBehaviour
{
    //��� �̹���
    Transform back1;
    Transform back2;

    //������ ���� �ð�
    int delayTime = 3;

    //������ �ð�
    float currentTime = 0;

    //�̹��� ����
    int imgCnt = 6;
    //���� �̹��� ��ȣ
    int imgNum = 1;

    void Start()
    {
        //��� ã��
        back1 = transform.Find("Background1");
        back2 = transform.Find("Background2");
    }

    void Update()
    {
        //�����ð� ó��
        currentTime += Time.deltaTime;

        if (currentTime >= delayTime)
        {
            currentTime = 0;

            //�̹��� ������
            StartCoroutine(OverlapImage());
        }
    }

    IEnumerator OverlapImage()
    {
        //�̹��� ���İ� ����
        //�̹����� ������ 0~1�� ���̴�. 0�� ���� ����, 1�� ����������
        for (float alpha = 1; alpha >= 0; alpha -= 0.05f)
        {
            //����̹����� ���� �����ϰ� �����.
            back1.GetComponent<Renderer>().material.color = new Vector4(1, 1, 1, alpha);

            //����̹����� ���� �������ϰ� �����.
            back2.GetComponent<Renderer>().material.color = new Vector4(1, 1, 1, 1 - alpha);

            //ȭ�� ���ű��� ���
            yield return new WaitForFixedUpdate();
        }

        //��� �ٲٱ�
        Transform tmp = back1;
        back1 = back2;
        back2 = tmp;

        //���� �̹��� �غ�
        //Mathf.Repeat() 0~<�Ѱ谪-1>�� �ݺ����� ó���ϴ� �Լ�
        imgNum = (int)Mathf.Repeat(++imgNum, imgCnt);

        //���2�� ���ο� �̹��� �Ҵ�
        back2.GetComponent<Renderer>().material.mainTexture = Resources.Load("imgBack" + imgNum) as Texture2D;

        currentTime = 0;
    }
}
