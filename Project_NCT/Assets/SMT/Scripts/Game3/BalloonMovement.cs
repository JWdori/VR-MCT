using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonMovement : MonoBehaviour
{
    private GameManager3 gameManager;
    private bool movingUp;
    private Rigidbody rb;
    private BoxCollider currentSpawnAreaCollider; // 현재 사용 중인 박스 콜라이더

    public float minSpeed = 1f;
    public float maxSpeed = 10f;
    private float movementSpeed;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        gameManager = FindObjectOfType<GameManager3>();
        movingUp = (Random.Range(0, 2) == 0); // 0 또는 1 중 랜덤으로 선택하여 movingUp 값을 설정
        currentSpawnAreaCollider = null;

        // 풍선의 속도를 조건에 따라 설정
        if (GameManager3.levelNum == 4)
        {
            float randomSpeed = Random.Range(1f, 2.2f);
            SetMovementSpeed(randomSpeed);
        }
        else
        {
            SetMovementSpeed(1f);
        }
    }

    void Update()
    {
        // 풍선의 움직임을 위아래로 반복하도록 구현
        if (movingUp)
        {
            rb.velocity = new Vector3(0f, movementSpeed, 0f);
        }
        else
        {
            rb.velocity = new Vector3(0f, -movementSpeed, 0f);
        }
    }

    private void FixedUpdate()
    {
        // 현재 사용 중인 박스 콜라이더가 변경되었을 경우 해당 박스 콜라이더의 영역으로 위치를 제한
        if (currentSpawnAreaCollider != gameManager.spawnAreas[gameManager.stage_move - 1].GetComponent<BoxCollider>())
        {
            currentSpawnAreaCollider = gameManager.spawnAreas[gameManager.stage_move - 1].GetComponent<BoxCollider>();
        }

        // 풍선의 위치를 확인하고, 현재 사용 중인 박스 콜라이더의 영역 내에 머무를 수 있도록 위치 조정
        Vector3 constrainedPosition = transform.position;
        constrainedPosition.y = Mathf.Clamp(constrainedPosition.y, currentSpawnAreaCollider.bounds.min.y, currentSpawnAreaCollider.bounds.max.y);
        transform.position = constrainedPosition;

        // 위쪽 및 아래쪽 박스 콜라이더와의 충돌 감지하여 방향 변경
        if (transform.position.y >= currentSpawnAreaCollider.bounds.max.y && movingUp)
        {
            movingUp = false;
        }
        else if (transform.position.y <= currentSpawnAreaCollider.bounds.min.y && !movingUp)
        {
            movingUp = true;
        }
    }

    // 풍선의 속도를 설정하는 함수
    public void SetMovementSpeed(float speed)
    {
        movementSpeed = speed;
    }
}
