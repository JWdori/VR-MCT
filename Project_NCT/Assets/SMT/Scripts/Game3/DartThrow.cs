using UnityEngine;

public class DartThrow : MonoBehaviour
{
    public float throwForce = 10f; // 다트를 던질 힘의 크기

    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.constraints = RigidbodyConstraints.FreezeRotation; // 회전 제약 설정
    }

    void Update()
    {

    }

    public void ThrowDart()
    {

    }
}
