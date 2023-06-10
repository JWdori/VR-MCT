using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class reset_button : MonoBehaviour
{
    public GameObject[] targetObjects;
    private Rigidbody[] targetRigidbodies;

    bool isLeft = false;
    bool isRight = false;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            //BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
            isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            //BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
            isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            //Debug.Log("Left Hand");
            isLeft = false;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            //Debug.Log("Right Hand");
            isRight = false;
        }
    }

    // �Ʒ��� 0���� 9������ ��ġ�� ���ǻ� 0,0,0���� �ʱ�ȭ�Ͽ�����, ����Ƽ �ν����Ϳ��� ���� ���ϴ� ��ġ�� �����Ͻø� �˴ϴ�.
    public Vector3[] targetPositions = new Vector3[10]
    {
        new Vector3(0.1977f,1.368f,0.297f),
        new Vector3(0.257f,1.368f,0.297f),
        new Vector3(0.126f,1.368f,0.297f),
        new Vector3(0.332f,1.368f,0.297f),
        new Vector3(0.415f,1.368f,0.297f),
        new Vector3(0.257f,1.368f,0.524f),
        new Vector3(0.1977f,1.368f,0.524f),
        new Vector3(0.332f,1.368f,0.524f),
        new Vector3(0.126f,1.368f,0.524f),
        new Vector3(0.415f,1.368f,0.524f)
    };

    private void Start()
    {
        targetRigidbodies = new Rigidbody[targetObjects.Length];

        for (int i = 0; i < targetObjects.Length; i++)
        {
            targetRigidbodies[i] = targetObjects[i].GetComponent<Rigidbody>();
        }
    }

    public void MoveObjectsToPosition()
    {       
        if (targetObjects != null && targetRigidbodies != null)
        {
            if (isLeft)
            {
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
            }
            else if (isRight)
            {
                BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
            }
            for (int i = 0; i < targetRigidbodies.Length; i++)
            {
                Rigidbody targetRigidbody = targetRigidbodies[i];
                GameObject targetObject = targetObjects[i];

                if (targetRigidbody && !targetRigidbody.IsSleeping())
                {
                    targetRigidbody.isKinematic = true;
                }

                // �� ������Ʈ�� �ش��ϴ� ��ġ�� �̵��մϴ�.
                targetObject.transform.position = targetPositions[i];
                targetObject.transform.rotation = Quaternion.Euler(0f, targetObject.transform.rotation.eulerAngles.y, targetObject.transform.rotation.eulerAngles.z);

                if (targetRigidbody)
                {
                    targetRigidbody.isKinematic = false;
                }
            }
        }
        else
        {
            Debug.LogWarning("Target objects or Rigidbody components are not assigned.");
        }
    }
}
