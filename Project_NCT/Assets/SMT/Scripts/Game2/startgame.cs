using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class startgame : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public GameObject button;

    public void start()
    {
        button.SetActive(false);
        Game2Manager_TestMode.state = Game2Manager_TestMode.STATE.EXPLAIN;
    }

}
