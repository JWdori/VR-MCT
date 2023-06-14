using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class startgame : MonoBehaviour
{
    static public bool startbool = false;
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
        //button.SetActive(startbool);
        
        Result_Game2_Test.isResult = false;
        if(startbool == false)
        {
            Game2Manager_TestMode.state = Game2Manager_TestMode.STATE.EXPLAIN;
            startbool = true;
        }
        else
        {
            Game2Manager_TestMode.stageNum = 1;
            Game2Manager_TestMode.LIFE = 2;
            Game2Manager_TestMode.WrongAnswerCnt = 0;
            Game2Manager_TestMode.CorrectAnswerCnt = 0;
            Game2Manager_TestMode.state = Game2Manager_TestMode.STATE.START;
        }
        
    }

}
