using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bhaptics.SDK2;
using System.IO;
using System;

public class DataCollect : MonoBehaviour
{
    bool isLeft = false;
    bool isRight = false;
    public static bool ScoreCollect = false; // data collect 모드 켜진건지 꺼진건지

    public GameObject[] OnOff = new GameObject[0];


    public bool is_file_exist = false;
    public string csvFilePath; // CSV ���� ���
    private StreamWriter fileWriter; // ���� ���⸦ ���� StreamWriter

    public List<string> ThrowCnt = new List<string>(); 
    public List<string> FellCnt = new List<string>(); 
    public List<string> SuccessTime = new List<string>();
    public List<string> StageCnt = new List<string>();


    void Start()
    {
    }
    void Update()
    {
        if(is_file_exist == true)
        {
            if (false) // aaa ���ǿ� �´� ���
            {
                ThrowCnt.Add("aaaa");
            }

            if (false) // bbb ���ǿ� �´� ���
            {
                FellCnt.Add("bbbb");
            }

            if (false) // ccc ���ǿ� �´� ���
            {
                SuccessTime.Add("cccc");
            }

            if (false)
            {
                //StageCnt.Add(Time.time- gamemanager3.stagestarttime)
            }
        }
        else //is_file_exist == false
        {
            // 배열들을 초기화
            ThrowCnt.Clear();
            FellCnt.Clear();
            SuccessTime.Clear();
            StageCnt.Clear();
        }

    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            //BhapticsLibrary.Play(BhapticsEvent.CORRECT_LEFT);
            isLeft = true;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            //BhapticsLibrary.Play(BhapticsEvent.CORRECT_RIGHT);
            isRight = true;
        }
    }
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("left_hand"))
        {
            //Debug.Log("Left Hand");
            isLeft = false;
        }
        else if (collision.gameObject.CompareTag("right_hand"))
        {
            //Debug.Log("Right Hand");
            isRight = false;
        }
    }

    public void TouchButton()
    { 
        // switch on off      
        if(ScoreCollect == false) //ScoreCollect == false; -->true로
        {
            ///OFF Text 끄고
            RemoveOnOff();
            ///ON Text 켜기
            Vector3 coord = new Vector3(-0.817f, 1.5f, -0.116f);
            GameObject On = Instantiate(OnOff[0], coord, Quaternion.Euler(0, -90.0f, 0));
            On.tag = "OnOff";
            /// 한번 누를때마다 on off 되도록 구현해줌
            ScoreCollect = true;


            /// data collect 모드 키면 현재 시간을 이름으로 파일 생성함
            string currentTime = DateTime.Now.ToString("yyyyMMdd_HHmmss");
            /// 오큘러스 내부에 저장이 되도록 해줌
            string persistentDataPath = Application.persistentDataPath;
            csvFilePath = Path.Combine(persistentDataPath, currentTime + ".csv");
            /// 파일 path에 맞는 csv 파일 생성
            fileWriter = new StreamWriter(csvFilePath);
            is_file_exist = true;


            Debug.Log("DataCollectOn");
        }
        else //ScoreCollect == true; -->false로
        {
            ///On Text 끄고
            RemoveOnOff();

            //Off Text 켜기
            Vector3 coord = new Vector3(-0.817f, 1.5f, -0.116f);
            GameObject Off = Instantiate(OnOff[1], coord, Quaternion.Euler(0, -90.0f, 0));
            Off.tag = "OnOff";


            // WriteArrayToCSV(ThrowCnt);
            // WriteArrayToCSV(FellCnt);
            // WriteArrayToCSV(SuccessTime);
            // WriteArrayToCSV(StageCnt);

            ///파일에 입력(임의의값으로 테스트)
            string[] myArray1 = new string[] { "value1", "value2", "value3" };
            List<string> myList1 = new List<string>(myArray1);
            string[] myArray2 = new string[] { "value3", "value2", "value6" };
            List<string> myList2 = new List<string>(myArray2);
            WriteArrayToCSV(myList1);
            WriteArrayToCSV(myList2);

            ////파일 닫음
            fileWriter.Close();
            fileWriter.Dispose();
            is_file_exist = false;

            /// 한번 누를때마다 on off 되도록 구현해줌
            ScoreCollect = false;
            Debug.Log("DataCollectOff");
        }
    }

    public void RemoveOnOff()
    {
        GameObject[] spawnedOnOff = GameObject.FindGameObjectsWithTag("OnOff");
        foreach (GameObject obj in spawnedOnOff)
        {
            Destroy(obj);
        }
    }

    private void WriteArrayToCSV(List<string> array)
    {
        if (array.Count > 0)
        {
            string line = string.Join(",", array.ToArray());
            fileWriter.WriteLine(line);
        }
    }
}
