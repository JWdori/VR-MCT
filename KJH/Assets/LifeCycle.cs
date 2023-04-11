using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LifeCycle : MonoBehaviour
{
    // 게임 오브젝트 생성할 때, 최초 실행, 딱 한 번만 실행
    void Awake()
    {
        Debug.Log("플레이어 데이터가 준비되었습니다.");
    }

    // 활성화 영역은 Awake와 Start 사이
    // 게임 오브젝트가 활성화 되었을 때, 최초 실행이 아님
    void OnEnable()
    {
        Debug.Log("플레이어가 로그인했습니다.");
    }

    // 업데이트 시작 직전, 최초 실행, 딱 한 번만 실행
    void Start()
    {
        Debug.Log("사냥 장비를 챙겼습니다.");
    }
    // 여기까지 초기화 영역

    // 여기부터 물리연산 영역

    // 물리연산 업데이트, 업데이트 함수는 1초에 여러 번 작동
    // 고정된 실행 주기로 CPU를 많이 사용, CPU 부화가 많음 (50Hz)
    void FixedUpdate()
    {
        //물리연산과 관련된 로직만
        Debug.Log("이동~");
    }

    //여기부터 게임 로직 영역

    // 게임 로직 업데이트
    // 물리 연산 영역에 업데이트를 제외한 나머지 영역 업데이트(주기적으로 변하는)
    // 환경에 따라 실행 주기가 달라짐 (보통 60프레임)
    void Update()
    {
        Debug.Log("몬스터 사냥!!");
    }

    // 모든 업데이트 끝난 후
    // 보통 캐릭터를 따라가는 카메라, 로직의 후처리
    void LateUpdate()
    {
        Debug.Log("경험치 획득");
    }

    //비활성화 영역 LateUpdate와 OnDestroy 사이
    // 게임 오브젝트가 비활성화 되었을 때
    void OnDisable()
    {
        Debug.Log("플레이어가 로그아웃했습니다.");
    }

    //여기부터 해체 영역

    //게임 오브젝트가 삭제될 때
    void OnDestroy()
    {
        Debug.Log("플레이어 데이터를 해제하였습니다.");
    }
}
