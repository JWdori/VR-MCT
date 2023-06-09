using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


//종료 버튼 터치 시 게임선택 창으로
//Gamestart Scene으로 이동
public class Exit_VR : MonoBehaviour
{
    public void exit()
    {
        SceneManager.LoadScene("Gamestart");
    }

    public void move()
    {
        SceneManager.LoadScene("TestMode_Memory");
    }
}
