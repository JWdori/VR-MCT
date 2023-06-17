using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class Touch_HandR : MonoBehaviour
{
    static public bool isTouchR = false;

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
        if (collision.gameObject.CompareTag("right_hand"))
        {
            Debug.Log("Right Hand");
            BhapticsLibrary.Play(BhapticsEvent.TOUCH_RIGHT);
            isTouchR = true;
        }
    }
}
