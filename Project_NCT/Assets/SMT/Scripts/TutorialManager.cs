using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;

    private void Start()
    {
        // PlayerPrefs를 사용하여 튜토리얼을 한 번만 보여줌
        if (PlayerPrefs.GetInt("TutorialShown") == 0)
        {
            tutorialUI.SetActive(true);
            PlayerPrefs.SetInt("TutorialShown", 1);
        }
        else
        {
            tutorialUI.SetActive(false);
        }
    }
}
