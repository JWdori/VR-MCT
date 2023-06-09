using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reset_button : MonoBehaviour
{
    public GameObject[] targetObjects;
    private Rigidbody[] targetRigidbodies;

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
