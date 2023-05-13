using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MemoryGame : MonoBehaviour
{
    public void memory()
    {
        StartCoroutine(Move());
    }

    IEnumerator Move()
    {
        SceneManager.LoadScene("Memory_game");

        yield return new WaitForSeconds(2f);
    }
}
