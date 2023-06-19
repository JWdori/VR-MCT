using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class Touch_HandL : MonoBehaviour
{
    static public bool isTouchL = false;

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
            BhapticsLibrary.Play(BhapticsEvent.TOUCH_LEFT);
            isTouchL = true;
        }
    }
}
