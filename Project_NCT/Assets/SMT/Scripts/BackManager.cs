using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class BackManager : MonoBehaviour
{
    //배경 이미지
    Transform back1;
    Transform back2;

    //오버랩 지연 시간
    int delayTime = 3;

    //현재의 시간
    float currentTime = 0;

    //이미지 갯수
    int imgCnt = 6;
    //현재 이미지 번호
    int imgNum = 1;

    void Start()
    {
        //배경 찾기
        back1 = transform.Find("Background1");
        back2 = transform.Find("Background2");
    }

    void Update()
    {
        //지연시간 처리
        currentTime += Time.deltaTime;

        if (currentTime >= delayTime)
        {
            currentTime = 0;

            //이미지 오버랩
            StartCoroutine(OverlapImage());
        }
    }

    IEnumerator OverlapImage()
    {
        //이미지 알파값 설정
        //이미지의 투명도는 0~1의 값이다. 0은 완전 투명, 1은 완전불투명
        for (float alpha = 1; alpha >= 0; alpha -= 0.05f)
        {
            //배경이미지를 점점 투명하게 만든다.
            back1.GetComponent<Renderer>().material.color = new Vector4(1, 1, 1, alpha);

            //배경이미지를 점점 불투명하게 만든다.
            back2.GetComponent<Renderer>().material.color = new Vector4(1, 1, 1, 1 - alpha);

            //화면 갱신까지 대기
            yield return new WaitForFixedUpdate();
        }

        //배경 바꾸기
        Transform tmp = back1;
        back1 = back2;
        back2 = tmp;

        //다음 이미지 준비
        //Mathf.Repeat() 0~<한계값-1>을 반복으로 처리하는 함수
        imgNum = (int)Mathf.Repeat(++imgNum, imgCnt);

        //배경2에 새로운 이미지 할당
        back2.GetComponent<Renderer>().material.mainTexture = Resources.Load("imgBack" + imgNum) as Texture2D;

        currentTime = 0;
    }
}
