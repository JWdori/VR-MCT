using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class reset_button : MonoBehaviour
{
    public GameObject targetObject; // �̵���ų ���� ������Ʈ

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void MoveObjectToPosition()
    {
        if (targetObject != null)
        {
            // targetObject�� ��ġ�� (1, 2, 0)���� �̵�
            targetObject.transform.position = new Vector3(0.1616356f, 1.3955f, 0.396f);
        }
        else
        {
            Debug.LogWarning("Target object is not assigned.");
        }
    }
}
