using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BalloonMovement : MonoBehaviour
{
    private GameManager3 gameManager;
    private bool movingUp;
    private Rigidbody rb;
    private BoxCollider currentSpawnAreaCollider; // ���� ��� ���� �ڽ� �ݶ��̴�

    public float minSpeed = 1f;
    public float maxSpeed = 10f;
    private float movementSpeed;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        gameManager = FindObjectOfType<GameManager3>();
        movingUp = (Random.Range(0, 2) == 0); // 0 �Ǵ� 1 �� �������� �����Ͽ� movingUp ���� ����
        currentSpawnAreaCollider = null;

        // ǳ���� �ӵ��� ���ǿ� ���� ����
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
        // ǳ���� �������� ���Ʒ��� �ݺ��ϵ��� ����
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
        // ���� ��� ���� �ڽ� �ݶ��̴��� ����Ǿ��� ��� �ش� �ڽ� �ݶ��̴��� �������� ��ġ�� ����
        if (currentSpawnAreaCollider != gameManager.spawnAreas[gameManager.stage_move - 1].GetComponent<BoxCollider>())
        {
            currentSpawnAreaCollider = gameManager.spawnAreas[gameManager.stage_move - 1].GetComponent<BoxCollider>();
        }

        // ǳ���� ��ġ�� Ȯ���ϰ�, ���� ��� ���� �ڽ� �ݶ��̴��� ���� ���� �ӹ��� �� �ֵ��� ��ġ ����
        Vector3 constrainedPosition = transform.position;
        constrainedPosition.y = Mathf.Clamp(constrainedPosition.y, currentSpawnAreaCollider.bounds.min.y, currentSpawnAreaCollider.bounds.max.y);
        transform.position = constrainedPosition;

        // ���� �� �Ʒ��� �ڽ� �ݶ��̴����� �浹 �����Ͽ� ���� ����
        if (transform.position.y >= currentSpawnAreaCollider.bounds.max.y && movingUp)
        {
            movingUp = false;
        }
        else if (transform.position.y <= currentSpawnAreaCollider.bounds.min.y && !movingUp)
        {
            movingUp = true;
        }
    }

    // ǳ���� �ӵ��� �����ϴ� �Լ�
    public void SetMovementSpeed(float speed)
    {
        movementSpeed = speed;
    }
}
