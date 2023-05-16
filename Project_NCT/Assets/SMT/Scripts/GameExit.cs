using UnityEngine;

public class GameExit : MonoBehaviour
{
    public float delay = 1f; // ���� ��������� ���� �ð�

    private bool isPointable = false; // pointable ����

    private void Update()
    {
        if (isPointable && delay > 0f)
        {
            delay -= Time.deltaTime; // ��� �ð��� ���ҽ�ŵ�ϴ�.

            if (delay <= 0f)
            {
                QuitGame(); // ��� �ð��� 0 ���ϸ� ������ �����մϴ�.
            }
        }
    }

    private void QuitGame()
    {
        Application.Quit(); // ������ �����մϴ�.
    }

    // pointable ���¸� �����ϴ� �Լ�
    public void SetPointable(bool value)
    {
        isPointable = value;
    }
}
