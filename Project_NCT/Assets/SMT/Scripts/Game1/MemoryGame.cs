using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


//Gamestart Scene���� �޸� �������� �Ѿ���� �ڵ�
public class MemoryGame : MonoBehaviour
{
    public void memory()
    {
        StartCoroutine(Move());
    }

    
    IEnumerator Move()
    {
        //Scene�� �̵��ϴ� �ڵ�, "Memory_game" Scene���� �Ѿ
        SceneManager.LoadScene("Memory_game");

        yield return new WaitForSeconds(2f);
    }
}
