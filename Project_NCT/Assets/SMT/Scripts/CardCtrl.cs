using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CardCtrl : MonoBehaviour
{
    //이미지 번호
    int imgNum = 1;

    //카드 뒷면 이미지 번호
    int backNum = 1;

    //오픈된 카드의 판별여부
    bool isOpen = false;

    Animator anim;

    void Start()
    {
        anim = GetComponent<Animator>();

        Cardview();
    }

    //스테이지 첫 시작할 때 전체 그림을 보여준다
    void Cardview()
    {
        int cardNum = int.Parse(transform.tag.Substring(4));

        imgNum = (cardNum + 1) / 2;
        anim.Play("aniOpen");

        GameManager.cardNum = cardNum;

        StartCoroutine(CardCloseStart());
    }

    IEnumerator CardCloseStart()
    {
        yield return new WaitForSeconds(2f);
        anim.Play("aniClose");
    }

    void Update()
    {
        if (Input.GetButtonDown("Fire1") && GameManager.state == GameManager.STATE.IDLE)
        {
            CheckCard();
        }
    }

    //카드체크
    void CheckCard()
    {
        RaycastHit hit;
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

        //터치한 카드 식별
        if (Physics.Raycast(ray,out hit, Mathf.Infinity))
        {
            string tag = hit.transform.tag;
            if (tag.Substring(0,4) == "card")
            {
                //터치한 카드의 OpenCard() 함수 실행
                hit.transform.SendMessage("OpenCard", SendMessageOptions.DontRequireReceiver);
            }
        }
    }

    void OpenCard()
    {
        //열린 카드는 처리 없음
        if (isOpen) return;
        //열린 카드 참거짓 판정
        isOpen = true;

        //카드 번호 Substring() 문자열의 일부분을 추출하는 함수, 카드 번호(tag)는 card0~card32 있으므로 문자 4번째부터(card~) 끝까지 추출한다.
        int cardNum = int.Parse(transform.tag.Substring(4));

        //이미지 번호 카드 두장에 하나씩 같은 이미지를 할당하므로 이미지 번호는 (카드번호 +1)/2로 구한다. 정수/정수 = 정수 이므로 소수 이하는 자동으로 잘림
        imgNum = (cardNum + 1) / 2;
        //카드 애니메이션 실행
        anim.Play("aniOpen");

        GameManager.cardNum = cardNum;
        GameManager.state = GameManager.STATE.HIT;
    }

    void CloseCard()
    {
        anim.Play("aniClose");
        isOpen = false;
    }

    //카드 앞면을 이미지를 가지고 온다
    void ShowImage()
    {
        transform.GetComponent<Renderer>().material.mainTexture = Resources.Load("card" + imgNum) as Texture2D;
    }

    void HideImage()
    {
        transform.GetComponent<Renderer>().material.mainTexture = Resources.Load("back" + backNum) as Texture2D;
    }
}
