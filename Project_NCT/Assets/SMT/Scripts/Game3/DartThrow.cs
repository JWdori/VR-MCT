using UnityEngine;

public class DartThrow : MonoBehaviour
{
    public float throwForce = 10f; // ��Ʈ�� ���� ���� ũ��

    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.constraints = RigidbodyConstraints.FreezeRotation; // ȸ�� ���� ����
    }

    void Update()
    {

    }

    public void ThrowDart()
    {

    }
}
