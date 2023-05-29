using UnityEngine;
using System.Collections;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;
    public GameObject tutorialUI2;
    public GameObject tutorialUIMessage;

    //public GameObject interactiveUIElements;

    public GameObject playerCamera; // �÷��̾� ī�޶� ������Ʈ�� �Ҵ���� ����

    private void Start()
    {
        // PlayerPrefs�� ����Ͽ� Ʃ�丮���� �� ���� ������
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
            // tutorialUI ���� ���ͷ�Ƽ�� UI ��Ҹ� Ȱ��ȭ
        }

    }

    public void SetStartPosition()
    {
        tutorialUI2.SetActive(false);
        tutorialUIMessage.SetActive(true);
        StartCoroutine(DelayedStartPosition(2f)); // 1�� ��� �Ŀ� ����
    }

    private IEnumerator DelayedStartPosition(float delay)
    {
        yield return new WaitForSeconds(delay); // ������ �ð�(delay) ���� ���

        tutorialUI.SetActive(false);
        // ���� Z��ǥ�� �÷��̾� ī�޶��� Z��ǥ�� ����
        Vector3 playerCameraPosition = playerCamera.transform.position;
        playerCamera.transform.position = new Vector3(playerCameraPosition.x, playerCameraPosition.y, 0f);
        // Y �� �����̼��� 0���� ����
        Vector3 playerCameraRotation = playerCamera.transform.rotation.eulerAngles;
        playerCameraRotation.y = 0f;
        playerCamera.transform.rotation = Quaternion.Euler(playerCameraRotation);
    }
}
