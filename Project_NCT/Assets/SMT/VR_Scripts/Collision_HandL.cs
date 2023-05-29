using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Collision_HandL : MonoBehaviour
{
    static public bool isLeft = false;

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
        if (collision.gameObject.CompareTag("left_hand"))
        {
            Debug.Log("Left Hand");
            isLeft = true;
            ClearAudio.play();
            Collision_HandR.isRight = false;
        }
    }
}
