// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using System.IO;
// using System;


// public class DataManager : MonoBehaviour
// {
//     // Start is called before the first frame update
    

//     public static bool is_Start = true; // ���� ���ǿ� �°� �������ּ���.
//     public bool is_file_exist = false;

//     private string csvFilePath; // CSV ���� ���
//     private StreamWriter fileWriter; // ���� ���⸦ ���� StreamWriter

//     private List<string> A = new List<string>(); // ���� �迭 A
//     private List<string> B = new List<string>(); // ���� �迭 B
//     private List<string> C = new List<string>(); // ���� �迭 C

//     private void Start()
//     {
//         // ���� �ð��� ���ϸ����� ����Ͽ� CSV ���� ����
//         if (is_Start)
//         {
            
//         }
//     }

//     private void Update()
//     {
//         // ���ǿ� ���� ���� �迭�� ������ �߰�
//         if (is_Start)
//         {
//             // if (is_file_exist==false)
//             // {
//             //     string currentTime = DateTime.Now.ToString("yyyyMMdd_HHmmss");
//             //     csvFilePath = Path.Combine(Application.dataPath, currentTime + ".csv");
//             //     fileWriter = new StreamWriter(csvFilePath);
//             //     is_file_exist = true;
//             //     // string currentTime = DateTime.Now.ToString("yyyyMMdd_HHmmss");
//             //     // csvFilePath = Path.Combine(Application.dataPath, currentTime + ".csv");
//             //     // fileWriter = new StreamWriter(csvFilePath);
//             //     // is_file_exist = true;
//             // }
//             if (is_file_exist==false)
//             {
//                 //string currentTime = DateTime.Now.ToString("yyyyMMdd_HHmmss");
//                 string persistentDataPath = Application.persistentDataPath;
//                 csvFilePath = Path.Combine(persistentDataPath, "currentTime" + ".csv");
//                 fileWriter = new StreamWriter(csvFilePath);
//                 is_file_exist = true;
//             }
            
//             if (false) // aaa ���ǿ� �´� ���
//             {
//                 //A.Add("aaaa");
//             }

//             if (false) // bbb ���ǿ� �´� ���
//             {
//                 //B.Add("bbbb");
//             }

//             if (false) // ccc ���ǿ� �´� ���
//             {
//                 //C.Add("cccc");
//             }
//         }
//         else
//         {
//             //WriteArrayToCSV(A);
//             //WriteArrayToCSV(B);
//             //WriteArrayToCSV(C);
//             // is_Start�� false�� �Ǹ� ������ �ݰ� �迭�� ���̻� �����͸� �߰����� ����
//             fileWriter.Close();
//             fileWriter.Dispose();
//             is_file_exist = false;
//         }
//     }

//     //private void OnDestroy()
//     //{
//     //    // ��ũ��Ʈ�� ���ŵ� �� ������ �ݰ�, �޸� ����
//     //    if (fileWriter != null)
//     //    {
//     //        fileWriter.Close();
//     //        fileWriter.Dispose();
//     //    }
//     //}

//     // ���Ͽ� �迭 �����͸� ���� �Լ�
//     private void WriteArrayToCSV(List<string> array)
//     {
//         if (array.Count > 0)
//         {
//             string line = string.Join(",", array.ToArray());
//             fileWriter.WriteLine(line);
//         }
//     }
// }
