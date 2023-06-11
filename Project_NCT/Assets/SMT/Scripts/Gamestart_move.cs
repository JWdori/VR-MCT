using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Gamestart Scene���� �޸� �������� �Ѿ���� �ڵ�
public class Gamestart_move : MonoBehaviour
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

        // Scene�� �̵��ϴ� �ڵ�, "Memory_game" Scene���� �Ѿ�ϴ�.
        SceneManager.LoadScene("Gamestart");
    }
}
