using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


//Gamestart Scene에서 메모리 게임으로 넘어오는 코드
public class MemoryGame : MonoBehaviour
{
    public void memory()
    {
        StartCoroutine(Move());
    }

    
    IEnumerator Move()
    {
        //Scene을 이동하는 코드, "Memory_game" Scene으로 넘어감
        SceneManager.LoadScene("Memory_game");

        yield return new WaitForSeconds(2f);
    }
}
