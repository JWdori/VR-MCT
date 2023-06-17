using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartGame_Test : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
   
    public GameObject startbutton;
    public GameObject tuto;

    public void startgame()
    {
        startbutton.SetActive(false);
        tuto.SetActive(false);
        GameManager_Test.state = GameManager_Test.STATE.START;
    }
}
