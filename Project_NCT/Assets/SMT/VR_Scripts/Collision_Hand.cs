using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collision_Hand : MonoBehaviour
{
    static public bool isLeft = false;
    static public bool isRight = false;

    // Start is called before the first frame update
    void Start()
    {
       //Debug.Log("Hand");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            isRight = true;
        }
    }
}
