using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartGame : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public GameObject panel1;
    public GameObject panel2;
    public GameObject panel3;
    public GameObject startbutton;
    public GameObject tuto;

    public void startgame()
    {
        if (GameManager_VR.state == GameManager_VR.STATE.IDLE)
        {
            panel1.SetActive(false);
            startbutton.SetActive(false);
            tuto.SetActive(false);
            GameManager_VR.state = GameManager_VR.STATE.START;
        }
        else if (GameManager_VR1.state1 == GameManager_VR1.STATE.IDLE)
        {
            panel2.SetActive(false);
            startbutton.SetActive(false);
            tuto.SetActive(false);
            GameManager_VR1.state1 = GameManager_VR1.STATE.START;
        }
        else if (GameManager_VR2.state2 == GameManager_VR2.STATE.IDLE)
        {
            panel3.SetActive(false);
            startbutton.SetActive(false);
            tuto.SetActive(false);
            GameManager_VR2.state2 = GameManager_VR2.STATE.START;
        }
    }
}
