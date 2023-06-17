using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collision_HandR : MonoBehaviour
{
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

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("right_hand") & GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE & GameManager_VR2.isTouch2)
        {
            Debug.Log("Right Hand");
            isRight = true;
            Collision_HandL.isLeft = false;
        }
    }
}
