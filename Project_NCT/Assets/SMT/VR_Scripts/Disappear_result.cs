using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 이 파일은 GameManager object에 들어가 있음
public class Disappear_result: MonoBehaviour
{
    // isShow가 true이면 활성화
    static public bool isShow = true;
    // isHide가 true이면 비활성화
    static public bool isHide = false;

    // GameObject를 menu 변수로 설정
    public GameObject menu;

    void Update()
    {
        if (isShow)
        {
            //활성화 코드
            menu.SetActive(true);
            isShow = false;
        }
        else if (isHide)
        {
            //비활성화 코드
            menu.SetActive(false);
            isHide = false;
        }
    }
}
