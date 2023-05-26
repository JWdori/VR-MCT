using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collision_Hand : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
        }
    }

    private void OnTriggerEnter(Collider collider)
    {
        if (collider.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
        }
        else if (collider.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
        }
    }
}
