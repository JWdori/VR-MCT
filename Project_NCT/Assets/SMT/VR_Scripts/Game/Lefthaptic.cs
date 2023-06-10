using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;

public class Lefthaptic : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    bool isLeft = true;

    private void OnCollisionEnter(Collision collision)
    {
        if (isLeft)
        {
            Debug.Log("haptic Left");
            BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
            isLeft = false;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        isLeft = true;
    }
}
