using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


// ���� ��ư ��ġ �� ���Ӽ��� â���� Gamestart Scene���� �̵�
public class Exit_VR : MonoBehaviour
{
    public GameObject messageObject; // "�̵��մϴ�" �޽����� ��� �ִ� ���� ������Ʈ
    public float delayTime = 2f; // ���� �ð�

    public void memory()
    {
        StartCoroutine(Move());
    }

    IEnumerator Move()
    {
        messageObject.SetActive(true); // "�̵��մϴ�" �޽��� ���� ������Ʈ�� Ȱ��ȭ�մϴ�.

        yield return new WaitForSeconds(delayTime);

        // �������� ���õ� ���� ������ �̵��մϴ�.
        int randomGame = UnityEngine.Random.Range(1, 4); // UnityEngine.Random ���
        string sceneName;

        switch (randomGame)
        {
            case 1:
                sceneName = "TestMode_Memory";
                break;
            case 2:
                sceneName = "Test_Game3";
                break;
            case 3:
                sceneName = "Text_Game2";
                break;
            default:
                sceneName = "Gamestart"; // ���� ��Ȳ�� ����Ͽ� �⺻�� ����
                break;
        }

        SceneManager.LoadScene(sceneName);
    }
}
