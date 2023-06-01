using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reset_button : MonoBehaviour
{
    public GameObject targetObject; // 이동시킬 게임 오브젝트
    private Rigidbody targetRigidbody; // 타겟 오브젝트의 Rigidbody 컴포넌트

    private void Start()
    {
        targetRigidbody = targetObject.GetComponent<Rigidbody>();
    }

    public void MoveObjectToPosition()
    {
        if (targetObject != null && targetRigidbody != null)
        {
            // 공이 운동 중인지 확인
            if (targetRigidbody && !targetRigidbody.IsSleeping())
            {
                // 공의 운동을 멈춤
                targetRigidbody.isKinematic = true;
            }

            // targetObject의 위치를 (1, 2, 0)으로 이동
            targetObject.transform.position = new Vector3(0.1739993f, 1.348f, 0.4169995f);
            targetObject.transform.rotation = Quaternion.Euler(-90f, targetObject.transform.rotation.eulerAngles.y, targetObject.transform.rotation.eulerAngles.z);

            // 공의 운동 재개
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
