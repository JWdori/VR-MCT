using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


//���� ��ư ��ġ �� ���Ӽ��� â����
//Gamestart Scene���� �̵�
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
