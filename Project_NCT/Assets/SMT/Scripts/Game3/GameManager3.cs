using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager3 : MonoBehaviour
{
    private int score = 0;

    public void AddScore(int points)
    {
        score += points;
    }

    public void PrintScore()
    {
        Debug.Log("Score: " + score);
    }
}
