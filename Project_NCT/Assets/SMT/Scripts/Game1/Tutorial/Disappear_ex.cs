using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 이 파일은 GameManager object에 들어가 있음
// SelectLevel 부분의 활성화, 비활성화를 담당
// 이 코드를 SelectLevel에 넣으면 비활성화 되었을 때 활성화 시킬 수 없음
public class Disappear_ex: MonoBehaviour
{
    // isShow가 true이면 활성화
    static public bool isShow = false;
    // isHide가 true이면 비활성화
    static public bool isHide = true;

    // GameObject를 menu 변수로 설정
    // GameManager Inspector에서 object 대상 변경 가능, 현재는 SelectLevel로 되어있음
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
