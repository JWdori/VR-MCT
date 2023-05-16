using UnityEngine;

public class GameExit : MonoBehaviour
{
    public float delay = 1f; // 게임 종료까지의 지연 시간

    private bool isPointable = false; // pointable 여부

    private void Update()
    {
        if (isPointable && delay > 0f)
        {
            delay -= Time.deltaTime; // 경과 시간을 감소시킵니다.

            if (delay <= 0f)
            {
                QuitGame(); // 경과 시간이 0 이하면 게임을 종료합니다.
            }
        }
    }

    private void QuitGame()
    {
        Application.Quit(); // 게임을 종료합니다.
    }

    // pointable 상태를 설정하는 함수
    public void SetPointable(bool value)
    {
        isPointable = value;
    }
}
