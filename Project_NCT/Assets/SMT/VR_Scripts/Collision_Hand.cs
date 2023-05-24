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
        if (collision.collider.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
        }
        else if (collision.collider.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
        }
    }
}
