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
    public GameObject result;
    public GameObject exit;
    //float time1;
    //float time2;

    public void ShowTuto()
    {
        StartCoroutine(PadCtrl_Test.PadColor());
        result.SetActive(false);
        startbutton.SetActive(false);
        exit.SetActive(false);
        if (PadCtrl_Test.side == 0 & PadCtrl_Test.order == 0)
        {            
            BO.SetActive(true);
            StartCoroutine(Wait(BO));           
        }
        else if (PadCtrl_Test.side == 1 & PadCtrl_Test.order == 0)
        {
            OB.SetActive(true);
            StartCoroutine(Wait(OB));
        }
        else if (PadCtrl_Test.side == 0 & PadCtrl_Test.order == 1)
        {
            IY.SetActive(true);
            StartCoroutine(Wait(IY));
        }
        else if (PadCtrl_Test.side == 1 & PadCtrl_Test.order == 1)
        {
            YI.SetActive(true);
            StartCoroutine(Wait(YI));
        }
        else if (PadCtrl_Test.side == 0 & PadCtrl_Test.order == 2)
        {
            GP.SetActive(true);
            StartCoroutine(Wait(GP));
        }
        else if (PadCtrl_Test.side == 1 & PadCtrl_Test.order == 2)
        {
            PG.SetActive(true);
            StartCoroutine(Wait(PG));
        }
        
    }

    IEnumerator Wait(GameObject p)
    {
        Debug.Log("Á¤Áö" + p);
        yield return new WaitForSeconds(3f);
        p.SetActive(false);
        GameManager_Test.state = GameManager_Test.STATE.START;
    }
}
