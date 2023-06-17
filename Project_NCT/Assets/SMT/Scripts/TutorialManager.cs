using UnityEngine;
using System.Collections;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;
    public GameObject tutorialUI2;
    public GameObject tutorialUIMessage;

    //public GameObject interactiveUIElements;

    public GameObject playerCamera; // 플레이어 카메라 오브젝트를 할당받을 변수

    private void Start()
    {
        // PlayerPrefs를 사용하여 튜토리얼을 한 번만 보여줌
        if (PlayerPrefs.GetInt("TutorialShown") == 0)
        {
            tutorialUI.SetActive(true);
            Vector3 playerCameraRotation = playerCamera.transform.rotation.eulerAngles;
            playerCameraRotation.y = 180f;
            playerCamera.transform.rotation = Quaternion.Euler(playerCameraRotation);
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
        tutorialUI2.SetActive(false);
        tutorialUIMessage.SetActive(true);
        StartCoroutine(DelayedStartPosition(2f)); // 1초 대기 후에 실행
    }

    private IEnumerator DelayedStartPosition(float delay)
    {
        yield return new WaitForSeconds(delay); // 지정한 시간(delay) 동안 대기

        tutorialUI.SetActive(false);
        // 시작 Z좌표를 플레이어 카메라의 Z좌표로 설정
        Vector3 playerCameraPosition = playerCamera.transform.position;
        playerCamera.transform.position = new Vector3(playerCameraPosition.x, playerCameraPosition.y, 0f);
        // Y 축 로테이션을 0으로 설정
        Vector3 playerCameraRotation = playerCamera.transform.rotation.eulerAngles;
        playerCameraRotation.y = 0f;
        playerCamera.transform.rotation = Quaternion.Euler(playerCameraRotation);
    }
}
