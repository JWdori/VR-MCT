using UnityEngine;

public class dart : MonoBehaviour
{
    private Rigidbody rb;
    private Quaternion originalRotation;
    private Vector3 previousVelocity;
    private bool wasInAir = false;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        originalRotation = transform.rotation;
    }

    void FixedUpdate()
    {
        bool isInAir = !IsGrounded();
        bool isForceApplied = previousVelocity.magnitude < rb.velocity.magnitude;

        if (isInAir && isForceApplied && wasInAir)
        {
            rb.constraints = RigidbodyConstraints.FreezeRotation;
            transform.rotation = originalRotation; // Keep the original rotation
        }
        else if (!isInAir)
        {
            rb.constraints = RigidbodyConstraints.None;
            originalRotation = transform.rotation;
        }

        wasInAir = isInAir;
        previousVelocity = rb.velocity;
    }

    private bool IsGrounded()
    {
        float distanceToGround = GetComponent<Collider>().bounds.extents.y;
        return Physics.Raycast(transform.position, -Vector3.up, distanceToGround + 0.1f);
    }
}
