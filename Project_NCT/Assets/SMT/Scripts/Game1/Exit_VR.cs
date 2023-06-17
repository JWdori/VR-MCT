using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


// 종료 버튼 터치 시 게임선택 창으로 Gamestart Scene으로 이동
public class Exit_VR : MonoBehaviour
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

        // 랜덤으로 선택된 게임 씬으로 이동합니다.
        int randomGame = UnityEngine.Random.Range(1, 4); // UnityEngine.Random 사용
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
                sceneName = "Gamestart"; // 예외 상황에 대비하여 기본값 설정
                break;
        }

        SceneManager.LoadScene(sceneName);
    }
}
