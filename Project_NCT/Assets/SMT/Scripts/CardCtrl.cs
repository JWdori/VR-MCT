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

    //ī��üũ
    void CheckCard()
    {
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //��ġ�� ī�� �ĺ�
        if (Physics.Raycast(ray,out hit, Mathf.Infinity))
        {
            string tag = hit.transform.tag;
            if (tag.Substring(0,4) == "card")
            {
                //��ġ�� ī���� OpenCard() �Լ� ����
                hit.transform.SendMessage("OpenCard", SendMessageOptions.DontRequireReceiver);
            }
        }
    }

    void OpenCard()
    {
        if (isOpen) return;
        isOpen = true;

        //ī�� ��ȣ Substring() ���ڿ��� �Ϻκ��� �����ϴ� �Լ�, ī�� ��ȣ(tag)�� card0~card32 �����Ƿ� ���� 4��°����(card~) ������ �����Ѵ�.
        int cardNum = int.Parse(transform.tag.Substring(4));

        //�̹��� ��ȣ ī�� ���忡 �ϳ��� ���� �̹����� �Ҵ��ϹǷ� �̹��� ��ȣ�� (ī���ȣ +1)/2�� ���Ѵ�. ����/���� = ���� �̹Ƿ� �Ҽ� ���ϴ� �ڵ����� �߸�
        imgNum = (cardNum + 1) / 2;
        //ī�� �ִϸ��̼� ����
        anim.Play("aniOpen");

        //GameManager.cardNum = cardNum;
        //GameManager.state = GameManager.STATE.HIT;
    }

    void CloseCard()
    {
        anim.Play("aniClose");
        isOpen = false;
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
