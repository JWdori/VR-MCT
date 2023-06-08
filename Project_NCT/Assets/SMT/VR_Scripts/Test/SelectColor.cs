using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectColor : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public GameObject YI;
    public GameObject IY;
    public GameObject BO;
    public GameObject OB;
    public GameObject GP;
    public GameObject PG;
    public GameObject startbutton;
    //float time1;
    //float time2;

    public void ShowTuto()
    {
        startbutton.SetActive(false);
        if (PadCtrl_Test.side == 0 & PadCtrl_Test.order == 0)
        {
            //time1 = Time.time;
            //time2 = Time.time;
            BO.SetActive(true);
            //while (time2-time1 < 3f)
            //{
            //    time2 = Time.time;
            //}
            BO.SetActive(false);
            GameManager_Test.state = GameManager_Test.STATE.START;
        }
        else if (PadCtrl_Test.side == 1 & PadCtrl_Test.order == 0)
        {
            //time1 = Time.time;
            //time2 = Time.time;
            OB.SetActive(true);
            //while (time2 - time1 < 3f)
            //{
            //    time2 = Time.time;
            //}
            OB.SetActive(false);
            GameManager_Test.state = GameManager_Test.STATE.START;
        }
        else if (PadCtrl_Test.side == 0 & PadCtrl_Test.order == 1)
        {
            //time1 = Time.time;
            //time2 = Time.time;
            IY.SetActive(true);
            //while (time2 - time1 < 3f)
            //{
            //    time2 = Time.time;
            //}
            IY.SetActive(false);
            GameManager_Test.state = GameManager_Test.STATE.START;
        }
        else if (PadCtrl_Test.side == 1 & PadCtrl_Test.order == 1)
        {
            //time1 = Time.time;
            //time2 = Time.time;
            YI.SetActive(true);
            //while (time2 - time1 < 3f)
            //{
            //    time2 = Time.time;
            //}
            YI.SetActive(false);
            GameManager_Test.state = GameManager_Test.STATE.START;
        }
        else if (PadCtrl_Test.side == 0 & PadCtrl_Test.order == 2)
        {
            //time1 = Time.time;
            //time2 = Time.time;
            GP.SetActive(true);
            //while (time2 - time1 < 3f)
            //{
            //    time2 = Time.time;
            //}
            GP.SetActive(false);
            GameManager_Test.state = GameManager_Test.STATE.START;
        }
        else if (PadCtrl_Test.side == 1 & PadCtrl_Test.order == 2)
        {
            //time1 = Time.time;
            //time2 = Time.time;
            PG.SetActive(true);
            //while (time2 - time1 < 3f)
            //{
            //    time2 = Time.time;
            //}
            PG.SetActive(false);
            GameManager_Test.state = GameManager_Test.STATE.START;
        }
        
    }
}
