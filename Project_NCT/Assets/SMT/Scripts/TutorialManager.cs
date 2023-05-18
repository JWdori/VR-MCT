using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;

    private void Start()
    {
        // PlayerPrefs�� ����Ͽ� Ʃ�丮���� �� ���� ������
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
