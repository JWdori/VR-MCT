// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;
// using System.IO;
// using System.Linq;
// using System.Text;
// using System.Threading;

// ///Ctrl + K + C 여러줄 주석 처리
// ///Ctrl + K + U 여러줄 주석 해제

// public class PairGameManager : MonoBehaviour
// {

//     public Text totalTimeText, stageTimeText, stageText, stageNumText;

//     static public int stageNum = 1;

//     int stageCnt = 10;

//     int DeltaStageTime = 0;

//     int NumAttribute = 12;

//     float startTime;
//     float stageTime;

//     public class Attribute
//     {
//         public int index;
//         // Color
//         public string Color;

//         // Size = [Big,Middle,Small]
//         public string Size;

//         // NumofLeg = [0,2,4]
//         public int NumofLeg;

//         // Tail = [T,F] // T 꼬리가 있음
//         public bool Tail;

//         // Weight = [heavy, light]
//         public string Weight;

//         // Flight = [T,F] // F 못남
//         public bool Flight;

//         // Wings = [T,F] // T 날개가 있음
//         public bool Wings;

//         // GrassEat = [T,F] //F 육식
//         public bool GrassEat;

//         // habitat = [Water, Ground, Dessert] // 서식지
//         public string Habitat;

//         // night = [T,F] // 야행성
//         public bool Night;
        
//         // child = [Baby, Egg] // Baby - 새끼를 낳음
//         public string Child;

//         // Movement = [Water, Crawl, Walk, Fly]
//         public string Movement;

//         // NonCommon = T; //공통점이 없음
//     }

//     //public string[] Att_Array = {'Color', 'Size', 'NumofLeg', 'Tail', 'Weight', 'Flight', 'Wings', 'GrassEat', 'Habitat', 'Night', 'Child', 'Movement'};

    

//     public enum STATE{
//         START, WAIT, CLEAR, IDLE //(동작을 하지 않는, 정지,대기)
//     }
    
//     static public STATE state = STATE.START;
    
//     // Start is called before the first frame update
//     void Start()
//     {
//         Screen.orientation = ScreenOrientation.LandscapeRight;
//         Screen.sleepTimeout = SleepTimeout.NeverSleep;

//         startTime = stageTime = Time.time;

//         StartCoroutine(MakeStage());

//     }

//     // Update is called once per frame
//     void Update()
//     {
        
//     }

//     /// 눈에 보이지 않는 작업 시행할때 
//     /// StartCoroutine( 시행할거 );
//     /// IEnumerator 시행할 기능 이름 () {  ...  }
//     IEnumerator MakeStage()
//     {
//         state = STATE.WAIT;

//         //RandomObjectSpawner();
        
//         //MakeAttributePad();
//     }

//     IEnumerator RandomObjectSpawner()
//     {
//         int objLen = 16;
//         int Obj1Idx = Random.Range(0, objLen); //objLen = myObjects.Length
//         int Obj2Idx = Random.Range(0, objLen); //RandomObjectSpawner 참고
//         Attribute AttObj1 = new Attribute();
//         Attribute AttObj2 = new Attribute();
//         AttObj1 = ObjAtt(Object1);
//         AttObj2 = ObjAtt(Object2);
//     }
    
//     public Attribute ObjAtt(int ObjIndex)
//     {
//         // AttObj1.idx = ;
//         // AttObj1.Color = ;
//         // AttObj1.Size = ;
//         // AttObj1.NumofLeg = ;
//         // AttObj1.Tail = ;
//         // AttObj1.Weight = ;
//         // AttObj1.Flight = ;
//         // AttObj1.Wings = ;
//         // AttObj1.GrassEat = ;
//         // AttObj1.Habitat = ;
//         // AttObj1.Night = ;
//         // AttObj1.Child = ;
//         // AttObj1.Movement = ;
//     }

//     IEnumerator MakeAttributePad(int Obj1idx, int Obj2idx)
//     {
//         ///
//         Attribute AttObj1 = new Attribute();
        
//         Attribute AttObj1 = new Attribute();

//     }
//     // idx로 관리,
//     // idx별 attribute 정리한 데이터 구조 필요
//     void AttributeofAllObj()
//     {   

//     }

// }
