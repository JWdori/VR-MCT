using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reset_button : MonoBehaviour
{
    public GameObject targetObject; // �̵���ų ���� ������Ʈ
    private Rigidbody targetRigidbody; // Ÿ�� ������Ʈ�� Rigidbody ������Ʈ

    private void Start()
    {
        targetRigidbody = targetObject.GetComponent<Rigidbody>();
    }

    public void MoveObjectToPosition()
    {
        if (targetObject != null && targetRigidbody != null)
        {
            // ���� � ������ Ȯ��
            if (targetRigidbody && !targetRigidbody.IsSleeping())
            {
                // ���� ��� ����
                targetRigidbody.isKinematic = true;
            }

            // targetObject�� ��ġ�� (1, 2, 0)���� �̵�
            targetObject.transform.position = new Vector3(0.1739993f, 1.348f, 0.4169995f);
            targetObject.transform.rotation = Quaternion.Euler(-90f, targetObject.transform.rotation.eulerAngles.y, targetObject.transform.rotation.eulerAngles.z);

            // ���� � �簳
            if (targetRigidbody)
            {
                targetRigidbody.isKinematic = false;
            }
        }
        else
        {
            Debug.LogWarning("Target object or Rigidbody component is not assigned.");
        }
    }
}
