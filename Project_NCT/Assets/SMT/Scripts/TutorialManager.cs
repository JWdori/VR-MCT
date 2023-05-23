using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;
    //public GameObject interactiveUIElements;

    public GameObject playerCamera; // �÷��̾� ī�޶� ������Ʈ�� �Ҵ���� ����

    private void Start()
    {
        // PlayerPrefs�� ����Ͽ� Ʃ�丮���� �� ���� ������
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
            // tutorialUI ���� ���ͷ�Ƽ�� UI ��Ҹ� Ȱ��ȭ
        }

    }

    public void SetStartPosition()
    {
        // ���� Z��ǥ�� �÷��̾� ī�޶��� Z��ǥ�� ����
        Vector3 playerCameraPosition = playerCamera.transform.position;
        playerCamera.transform.position = new Vector3(playerCameraPosition.x, playerCameraPosition.y, 0);
    }
}
