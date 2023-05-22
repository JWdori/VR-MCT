using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;
    //public GameObject interactiveUIElements;
    private void Start()
    {
        // PlayerPrefs를 사용하여 튜토리얼을 한 번만 보여줌
        if (PlayerPrefs.GetInt("TutorialShown") == 0)
        {
            tutorialUI.SetActive(true);
            //interactiveUIElements.SetActive(false);
            PlayerPrefs.SetInt("TutorialShown", 1);

            // tutorialUI 외의 인터렉티브 UI 요소를 비활성화

            // 시작 Z좌표를 -2로 설정
            transform.position = new Vector3(transform.position.x, transform.position.y, -2f);
        }
        else
        {
            tutorialUI.SetActive(false);
            // tutorialUI 외의 인터렉티브 UI 요소를 활성화

            // 시작 Z좌표를 0으로 설정
            transform.position = new Vector3(transform.position.x, transform.position.y, 0f);
        }
    }

    public void SetStartPosition()
    {
        // 시작 Z좌표를 0으로 설정
        transform.position = new Vector3(transform.position.x, transform.position.y, 0f);
    }

}
