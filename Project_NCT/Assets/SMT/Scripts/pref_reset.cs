using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pref_reset : MonoBehaviour
{
    // Start is called before the first frame update
    public void Reset()
    {
        PlayerPrefs.DeleteAll();
        Debug.Log("reset");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
