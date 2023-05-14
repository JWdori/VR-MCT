using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Gamestart Scene에서 메모리 게임으로 넘어오는 코드
public class Game2_Gamestart : MonoBehaviour
{
    public GameObject messageObject; // "이동합니다" 메시지를 담고 있는 게임 오브젝트
    public float delayTime = 2f; // 지연 시간

    public void memory()
    {
        StartCoroutine(Move());
    }

    IEnumerator Move()
    {
        messageObject.SetActive(true); // "이동합니다" 메시지 게임 오브젝트를 활성화합니다.

        yield return new WaitForSeconds(delayTime);

        // Scene을 이동하는 코드, "Memory_game" Scene으로 넘어갑니다.
        SceneManager.LoadScene("Game2");
    }
}
