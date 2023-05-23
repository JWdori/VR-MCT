using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;
    //public GameObject interactiveUIElements;

    public GameObject playerCamera; // 플레이어 카메라 오브젝트를 할당받을 변수

    private void Start()
    {
        // PlayerPrefs를 사용하여 튜토리얼을 한 번만 보여줌
        if (PlayerPrefs.GetInt("TutorialShown") == 0)
        {
            tutorialUI.SetActive(true);
            //interactiveUIElements.SetActive(false);
            PlayerPrefs.SetInt("TutorialShown", 1);
            Vector3 playerCameraPosition = playerCamera.transform.position;
            playerCamera.transform.position = new Vector3(playerCameraPosition.x, playerCameraPosition.y, playerCameraPosition.z - 2f);
        }
        else
        {
            tutorialUI.SetActive(false);
            // tutorialUI 외의 인터렉티브 UI 요소를 활성화
        }

    }

    public void SetStartPosition()
    {
        // 시작 Z좌표를 플레이어 카메라의 Z좌표로 설정
        Vector3 playerCameraPosition = playerCamera.transform.position;
        playerCamera.transform.position = new Vector3(playerCameraPosition.x, playerCameraPosition.y, 0);
    }
}
