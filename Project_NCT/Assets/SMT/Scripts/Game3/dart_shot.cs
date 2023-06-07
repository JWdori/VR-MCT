using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class dart_shot : MonoBehaviour
{
    List<Vector3> trackingPos = new List<Vector3>();
    public float velocity = 1000f;
    bool pickUp = false;
    GameObject parentHand;
    Rigidbody rb;

    private void Update()
    {
        if (pickUp == true)
        {
            rb.useGravity = false;

            transform.position = parentHand.transform.position;
            transform.rotation = parentHand.transform.rotation;

            if (trackingPos.Count > 15)
            {
                trackingPos.RemoveAt(0);
            }
            trackingPos.Add(transform.position);

            float triggerRight = OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger);
            if (triggerRight < 0.1f)
            {
                pickUp = false;
                Vector3 direction = trackingPos[trackingPos.Count - 1] - trackingPos[0];
                rb.AddForce(direction * velocity);
                rb.useGravity = true;
                rb.isKinematic = false;
                GetComponent<Collider>().isTrigger = false;
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        float triggerRight = OVRInput.Get(OVRInput.RawAxis1D.RIndexTrigger);
        if (other.gameObject.tag == "hand" && triggerRight > 0.9f)
        {
            pickUp = true;
            parentHand = other.gameObject;
        }
    }
    private void OnTriggerStay(Collider collision)
    {
        if (collision.tag == "right_hand" & Grab_bhaptics.bhaptics_grab)
        {
            Debug.Log("Right Hand");
            BhapticsLibrary.Play(BhapticsEvent.DART_RIGHT);
        }
        else if (collision.tag == "left_hand" & Grab_bhaptics.bhaptics_grab)
        {
            Debug.Log("Left Hand");
            BhapticsLibrary.Play(BhapticsEvent.DART_LEFT);
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.tag == "right_hand" & Grab_bhaptics.bhaptics_throw)
        {
            Debug.Log("Right Hand Throw");
            BhapticsLibrary.Play(BhapticsEvent.DART_SHOT_RIGHT);
        }
        else if (collision.tag == "left_hand" & Grab_bhaptics.bhaptics_throw)
        {
            Debug.Log("Left Hand Throw");
            BhapticsLibrary.Play(BhapticsEvent.DART_SHOT_LEFT);
        }
    }
}
