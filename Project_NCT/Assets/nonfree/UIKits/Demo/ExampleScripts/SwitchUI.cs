using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SwitchUI : MonoBehaviour
{
    public List<GameObject> canvas;
    int currentIndex = 0;

    public void NextUI()
    {
        if (canvas.Count == 0)
        {
            return;
        }

        canvas[currentIndex].SetActive(false);
        currentIndex += 1; // Increment current index
        if (currentIndex >= canvas.Count)
        {
            currentIndex = 0;
        }
        canvas[currentIndex].SetActive(true);
    }
}
