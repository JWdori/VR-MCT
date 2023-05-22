using UnityEngine;

public class TutorialManager : MonoBehaviour
{
    public GameObject tutorialUI;
    //public GameObject interactiveUIElements;
    private void Start()
    {
        // PlayerPrefs�� ����Ͽ� Ʃ�丮���� �� ���� ������
        if (PlayerPrefs.GetInt("TutorialShown") == 0)
        {
            tutorialUI.SetActive(true);
            //interactiveUIElements.SetActive(false);
            PlayerPrefs.SetInt("TutorialShown", 1);

            // tutorialUI ���� ���ͷ�Ƽ�� UI ��Ҹ� ��Ȱ��ȭ

            // ���� Z��ǥ�� -2�� ����
            transform.position = new Vector3(transform.position.x, transform.position.y, -2f);
        }
        else
        {
            tutorialUI.SetActive(false);
            // tutorialUI ���� ���ͷ�Ƽ�� UI ��Ҹ� Ȱ��ȭ

            // ���� Z��ǥ�� 0���� ����
            transform.position = new Vector3(transform.position.x, transform.position.y, 0f);
        }
    }

    public void SetStartPosition()
    {
        // ���� Z��ǥ�� 0���� ����
        transform.position = new Vector3(transform.position.x, transform.position.y, 0f);
    }

}
