using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reset_button : MonoBehaviour
{
    public GameObject[] targetObjects;
    private Rigidbody[] targetRigidbodies;

    // 아래의 0부터 9까지의 위치는 편의상 0,0,0으로 초기화하였으며, 유니티 인스펙터에서 각각 원하는 위치로 수정하시면 됩니다.
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

                // 각 오브젝트를 해당하는 위치로 이동합니다.
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
