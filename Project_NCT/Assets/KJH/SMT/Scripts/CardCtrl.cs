using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardCtrl : MonoBehaviour
{
    //�̹��� ��ȣ
    int imgNum = 1;

    //ī�� �޸� �̹��� ��ȣ
    int backNum = 1;

    //���µ� ī���� �Ǻ�����
    bool isOpen = false;

    Animator anim;

    void Start()
    {
        anim = GetComponent<Animator>();
    }

    void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            CheckCard();
        }
    }

    //ī�� �ո��� �̹����� ������ �´�
    void ShowImage()
    {
        transform.GetComponent<Renderer>().material.mainTexture = Resources.Load("card" + imgNum) as Texture2D;
    }

    void HideImage()
    {
        transform.GetComponent<Renderer>().material.mainTexture = Resources.Load("back" + backNum) as Texture2D;
    }
}
