// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;
// using UnityEngine.SceneManagement;
// //using System.IO;
// using System.Linq;
// //using System.Text;
// //using System;
// //using Random = UnityEngine.Random;

// public class Game2Manager : MonoBehaviour
// {
//     ///Game///
//     int EASY = 2;
//     int MIDDLE = 3;
//     int HARD = 4;
//     float startTime; // 게임 시작했을때의 시간
//     float stageTime;// 새로운 stage 들어갈때의 시간
//     int stageCnt = 10; // stage 총 개수
//     static public int stageNum = 1; // 현재 stage
//     static public int LIFE = 2;// 틀리면 -1
//     static public int WrongAnswerCnt = 0; // 틀린 횟수 보여주기용
//     public int CurrentDifficulty;

//     ///Game///
//     //////STATE//////
//     public enum STATE
//     {
//         START, HIT, WAIT, IDLE, CLEAR ,FINISH
//     };
//     static public STATE state = STATE.START;

//     ///Game///
//     //////Attribute//////
//     public class Attribute
//     {
//         public string Color;// 보이는 색 +Mix 있음
//         public string Size;//[Big,Middle,Small]
//         public int NumofLeg;//[0,2,4]
//         public bool Tail;//[T,F] 꼬리가 있음 T
//         public bool Flight;//[T,F] 못남 F
//         public bool Wings;//[T,F] 날개가 있음 T
//         public bool horn;//뿔 [T,F] 
//         public bool beak;//부리 [T,F]
//         public string fur;//털 [Feather, LongHair, Hair, ShortHair, CurlyHair, Null] 깃털, 실같은털, 없음
//         public bool mane;//갈기 [T,F]

//         public Attribute(string Coloratt, string Sizeatt, int NumofLegatt, bool Tailatt,bool Flightatt, bool Wingsatt, bool hornatt, bool beakatt, string furatt, bool maneatt)
//         {
//             Color = Coloratt;
//             Size = Sizeatt;
//             NumofLeg = NumofLegatt;
//             Tail = Tailatt;
//             Flight = Flightatt;
//             Wings = Wingsatt;
//             horn = hornatt;
//             beak = beakatt;
//             fur = furatt;
//             mane = maneatt;
//         }
//     }
//     public Dictionary<int, Attribute> objectAttributes = new Dictionary<int, Attribute>(); // object index 접근이 가능한 dict
//     //public Attribute att = new Attribute(); // attribute dict 위한 temp attribute class 인스턴스(클래스의 실체화된 버전)
    
//     string[] Att_Array = new string[]
//         {
//             "Color","Size","NumofLeg",
//             "Tail","Flight","Wings","horn",
//             "beak","fur","mane"
//         };
    
//     ///////////////////////////////////

//     public int Sum = 0;
//     public int True_Button = 0;
//     public int ColorMixCondition = 0;
//     public int [] ComparisionResult = new int[10];
    
//     ///Game///
//     //////Button//////
//     public string TrueButtonLocation;
//     public static string WhichButtonTouch;

//     ///Button///
//     //public GameObject[] Buttons = new GameObject[0];
//     public GameObject[] Buttons = new GameObject[3];

//     public bool buttonsSpawned = false;

//     Vector3 ButtonPosition_Left = new Vector3(19.7f,1.81f,22.0f);
//     Vector3 ButtonPosition_Middle = new Vector3(20.14f,1.81f,21.67f);
//     Vector3 ButtonPosition_Right = new Vector3(20.6f,1.81f,21.35f);

//     ///Spawner///
//     //public GameObject[] Objects = new GameObject[0];
//     int I1 = 20;
//     int I2 = 20;
//     public GameObject[] Objects = new GameObject[18];
//     bool spawn = false;
//     ///Pad///
//     public GameObject[] Pads = new GameObject[0];
//     public bool Pads_Spawned = false;


//     // Start is called before the first frame update
//     void Start()
//     {
//         Debug.Log("Start");
//         Screen.orientation = ScreenOrientation.LandscapeRight;
//         Screen.sleepTimeout = SleepTimeout.NeverSleep;
        
//         ///Game///
//         startTime = stageTime = Time.time;
//         ///Game///
//         //////Attribute//////
//         ///////////////////////////Attribute///////////////////////////
//         Attribute att1 = new Attribute("Brown", "Big",4,true,false,false,true,false,"Hair",false);
//         Attribute att2 = new Attribute("Brown", "Small",2,false,true,true,false,false,"Null",false);
//         Attribute att3 = new Attribute("Brown", "Big",4,false,false,false,false,false,"Hair",false);
//         Attribute att4 = new Attribute("Orange", "Big",4,true,false,false,true,false,"Hair",false);
//         Attribute att5 = new Attribute("Brown", "Big",4,true,false,false,true,false,"Hair",false);
//         Attribute att6 = new Attribute("Mix", "Small",2,true,true,true,false,true,"Feather",false);
//         Attribute att7 = new Attribute("Orange", "Small",4,true,false,false,false,false,"LongHair",false);
//         Attribute att8 = new Attribute("Brown", "Big",4,true,false,false,false,false,"Hair",true);
//         Attribute att9 = new Attribute("Pink", "Middle",4,true,false,false,false,false,"ShortHair",false);
//         Attribute att10 = new Attribute("White", "Big",4,false,false,false,false,false,"Hair",false);
//         Attribute att11 = new Attribute("Mix", "Small",4,true,false,false,false,false,"Hair",false);
//         Attribute att12 = new Attribute("Black", "Small",2,true,true,true,false,true,"Feather",false);
//         Attribute att13 = new Attribute("Mix", "Small",2,true,false,true,false,true,"Feather",false);
//         Attribute att14 = new Attribute("White", "Middle",4,true,false,false,false,false,"CurlyHair",false);
//         Attribute att15 = new Attribute("White", "Small",2,true,true,true,false,true,"Feather",false);
//         Attribute att16 = new Attribute("Gray", "Middle",4,true,false,false,false,false,"LongHair",false);
//         Attribute att17 = new Attribute("Orange", "Big",4,true,true,true,true,false,"Null",false);
//         Attribute att18 = new Attribute("Brown", "Big",4,false,false,false,true,false,"Hair",false);

//         //idx = 0 Aurochs
//         //att = AttInput(att, "Brown", "Big",4,true,false,false,true,false,"Hair",false);
//         objectAttributes.Add(0, att1);
//         //idx = 1 Bat
//         //att = AttInput(att, "Brown", "Small",2,false,true,true,false,false,"Null",false);
//         objectAttributes.Add(1, att2);
//         //idx = 2 brownBear
//         //att = AttInput(att, "Brown", "Big",4,false,false,false,false,false,"Hair",false);
//         objectAttributes.Add(2, att3);
//         //idx = 3 Bull
//         //att = AttInput(att, "Orange", "Big",4,true,false,false,true,false,"Hair",false);
//         objectAttributes.Add(3, att4);
//         //idx = 4 Cow
//         //att = AttInput(att, "Brown", "Big",4,true,false,false,true,false,"Hair",false);
//         objectAttributes.Add(4, att5);
//         //idx = 5 Eagle
//         //att = AttInput(att, "Mix", "Small",2,true,true,true,false,true,"Feather",false);
//         objectAttributes.Add(5, att6);
//         //idx = 6 Fox
//         //att = AttInput(att, "Orange", "Small",4,true,false,false,false,false,"LongHair",false);
//         objectAttributes.Add(6, att7);
//         //idx = 7 Horse
//         //att = AttInput(att, "Brown", "Big",4,true,false,false,false,false,"Hair",true);
//         objectAttributes.Add(7, att8);
//         //idx = 8 Pig
//         //att = AttInput(att, "Pink", "Middle",4,true,false,false,false,false,"ShortHair",false);
//         objectAttributes.Add(8, att9);
//         //idx = 9 polarBear
//         //att = AttInput(att, "White", "Big",4,false,false,false,false,false,"Hair",false);
//         objectAttributes.Add(9, att10);
//         //idx = 10 Rabbit
//         //att = AttInput(att, "Mix", "Small",4,true,false,false,false,false,"Hair",false);
//         objectAttributes.Add(10, att11);
//         //idx = 11 Raven
//         //att = AttInput(att, "Black", "Small",2,true,true,true,false,true,"Feather",false);
//         objectAttributes.Add(11, att12);
//         //idx = 12 Rooster
//         //att = AttInput(att, "Mix", "Small",2,true,false,true,false,true,"Feather",false);
//         objectAttributes.Add(12, att13);
//         //idx = 13 sheep
//         //att = AttInput(att, "White", "Middle",4,true,false,false,false,false,"CurlyHair",false);
//         objectAttributes.Add(13, att14);
//         //idx = 14 Stork
//         //att = AttInput(att, "White", "Small",2,true,true,true,false,true,"Feather",false);
//         objectAttributes.Add(14, att15);
//         //idx = 15 Wolf
//         //att = AttInput(att, "Gray", "Middle",4,true,false,false,false,false,"LongHair",false);
//         objectAttributes.Add(15, att16);
//         //idx = 16 Dragon
//         //att = AttInput(att, "Orange", "Big",4,true,true,true,true,false,"Null",false);
//         objectAttributes.Add(16, att17);
//         //idx = 17 Deer
//         //att = AttInput(att, "Brown", "Big",4,false,false,false,true,false,"Hair",false);
//         objectAttributes.Add(17, att18);

//         //////////////////////////////////////////////////////////////////
//         //////////////////////////////////////////////////////////////////
//         CurrentDifficulty = HARD;
//         //////////////////////////////////////////////////////////////////
//         //////////////////////////////////////////////////////////////////
//         Pads_Spawned = false;
//         buttonsSpawned = false;

//     }

//     // Update is called once per frame
//     void Update()
//     {
//         Debug.Log("Update");
//         int time1 = (int)(Time.time - startTime);
//         int time2 = (int)(Time.time - stageTime);

//         switch (state)
//         {
//             case STATE.START:
//                 Debug.Log("inswitch Start");
//                 Debug.Log("objectAttributes");
//                 Debug.Log(objectAttributes[0].Color);
//                 Debug.Log(objectAttributes[1].Color);
//                 Debug.Log(objectAttributes[2].Color);
//                 Debug.Log(objectAttributes[3].Color);
//                 Debug.Log(objectAttributes[4].Color);
//                 Debug.Log(objectAttributes[5].Color);
//                 Debug.Log(objectAttributes[6].Color);
//                 Debug.Log(objectAttributes[7].Color);
//                 Debug.Log(objectAttributes[8].Color);
//                 Debug.Log(objectAttributes[9].Color);
//                 Debug.Log(objectAttributes[10].Color);
//                 Debug.Log(objectAttributes[11].Color);
//                 Debug.Log(objectAttributes[12].Color);
//                 Debug.Log(objectAttributes[13].Color);
//                 Debug.Log(objectAttributes[14].Color);
//                 Debug.Log(objectAttributes[15].Color);
//                 Debug.Log(objectAttributes[16].Color);
//                 Debug.Log(objectAttributes[17].Color);
//                 StartCoroutine(MakeStage(CurrentDifficulty));
//                 break;
//             case STATE.HIT:
//                 StartCoroutine(IsItRightAnswer(CurrentDifficulty));
//                 break;
//             case STATE.CLEAR:
//                 StartCoroutine(StageClear());
//                 break;
//             case STATE.FINISH:
//                 Debug.Log("Finish");
//                 //SceneManager.LoadScene("Result");
//                 GameOver();
//                 break;
//         }
//         if (Input.GetKeyDown(KeyCode.Escape))
//         {
//             Application.Quit();
//         }
//     }

// ///Game///
// //////Update switch case function//////
//     IEnumerator IsItRightAnswer(int difficulty)
//     {
//         Debug.Log("IsItRightAnswer");
//         state = STATE.WAIT;
//         yield return new WaitForSeconds(0.1f);
//         //EASY에서 TrueButtonLocation 1 이면 왼쪽 3이면 오른쪽
//         //MIDDLE에서 TrueButtonLocation 1 이면 왼쪽 3이면 오른쪽
//          if (TrueButtonLocation == WhichButtonTouch){
//             Debug.Log("IsItRightAnswer - IF");
//             state = STATE.CLEAR;
//         }
//         else{
//             Debug.Log("IsItRightAnswer - ELSE");
//             LIFE = LIFE-1;
//             if(LIFE == 0){
//                 GameOver();
//                 state = STATE.CLEAR;
//             }
//             state = STATE.CLEAR;
//             stageNum = stageNum+1;
//             if (stageNum == stageCnt){
//                 GameOver();
//                 state = STATE.CLEAR;
//             }
//         }
//     }
// ///Game///
// //////GameOver//////
//     void GameOver(){
//         // code here

//         // data 보여주고
//         // 게임 선택 Scene으로 돌아가기
//     }
// ///Game///
// //////Update switch case function//////
//     IEnumerator MakeStage(int difficulty)
//     {
        
//         state = STATE.WAIT;
//         Debug.Log("MakeStage");
        
//         Debug.Log("MakeStage - state:Wait");
//         StartCoroutine(ShowStageInfo());
//         Debug.Log("ShowStageInfo");

//         int IsItHard = 0;

//         if (difficulty == 4)
//         {
//             difficulty = 3;
//             IsItHard = 1;
//         }

//         Sum=0;
//         True_Button = 0;
//         ColorMixCondition = 0;
//         Debug.Log("before yield");
//         yield return new WaitForSeconds(0.1f);
//         Debug.Log("after yield");
//         ////조건에 맞는 obj 2개 찾기 (idx)
//         do
//         {
//             ColorMixCondition = 0;
//             Debug.Log("In_Do-while_MakeStage");
//             (I1,I2) = Make2IDX();

//             ComparisionResult= AttCompare_0or1(I1,I2);
//             Debug.Log("ComparisionResult_INMakeStageDoWhile");
//             Debug.Log(ComparisionResult);
//             Debug.Log("1st");
//             Debug.Log(ComparisionResult[0]);
//             Debug.Log("2nd");
//             Debug.Log(ComparisionResult[1]);
//             Debug.Log("3rd");
//             Debug.Log(ComparisionResult[2]);
//             Debug.Log("4th");
//             Debug.Log(ComparisionResult[3]);
//             Debug.Log("5th");
//             Debug.Log(ComparisionResult[4]);
//             Debug.Log("6th");
//             Debug.Log(ComparisionResult[5]);
//             Debug.Log("7th");
//             Debug.Log(ComparisionResult[6]);
//             Debug.Log("8th");
//             Debug.Log(ComparisionResult[7]);
//             Debug.Log("9th");
//             Debug.Log(ComparisionResult[8]);
//             Debug.Log("10th");
//             Debug.Log(ComparisionResult[9]);
            
//             Sum =  ComparisionResult.Sum();
//             ////둘다 MIX면 안됨
//             if (objectAttributes[I1].Color =="Mix" && objectAttributes[I2].Color =="Mix")
//             {
//                 ColorMixCondition = 1;
//             }
//         }
//         while(Sum==0 || Sum > (Att_Array.Length-difficulty+1) || ColorMixCondition == 1);
//         //
//         //(위에서 찾은 object idx2개로 object 생성)
        
//         Debug.Log("MakeObj");
//         TwoObjSpawner(I1,I2,IsItHard);
//         Debug.Log("BeforeMakeCategoryPad");

//         True_Button = MakeCategoryPad(I1,I2, difficulty);
//         Debug.Log("AfterMakeCategoryPad");
//         Debug.Log(True_Button);
        
//         Debug.Log("BeforeButtonActivate");
//         if (difficulty == EASY)
//         {
//             Button_L_Active();
//             Button_R_Active();
//             buttonsSpawned = true;
//         }
//         else
//         {
//             Button_L_Active();
//             Button_M_Active();
//             Button_R_Active();
//             buttonsSpawned = true;
//         }

//         switch (True_Button)
//         {
//             case 1:
//                 TrueButtonLocation = "L";
//                 break;
//             case 2:
//                 TrueButtonLocation = "M";
//                 break;
//             case 3:
//                 TrueButtonLocation = "R";  
//                 break;
//         }
//         // Debug.Log("before yield");
//         // yield return new WaitForSeconds(0.1f);
//         // Debug.Log("after yield");
//         state = STATE.IDLE;
        
//     }



// /////Scene Make
// ////////ObjectSpawn
//     public (int, int) Make2IDX()
//     {
//         int index1 = 0;
//         int index2 = 0;
//         Debug.Log("TwoObjIndex");
//         index1=Random.Range(0,Objects.Length);
//         do
//         {
//             Debug.Log("make 2 Obj_Index In_Do-while");
//             index2 = Random.Range(0,Objects.Length);
//         }
//         while(index1 == index2);

//         return (index1,index2);
//     }

//     public void TwoObjSpawner(int I1, int I2, int Is_It_Hard)
//     {
//         ///for hard mode (obj spawn coordinate)
//         Vector3 [] HardMode_Objcoord = new Vector3[4];
//         HardMode_Objcoord[0] = new Vector3(20.229f,0.87f,27.54f);
//         HardMode_Objcoord[1] = new Vector3(26.928f,1.44f,21.996f);
//         HardMode_Objcoord[2] = new Vector3(29.685f,1.56f,29.187f);
//         HardMode_Objcoord[3] = new Vector3(17.69f,1.7f,25.76f);
//         int coord_idx1;
//         int coord_idx2;

//         ///for check distance
//         float Distance;
//         Debug.Log("Will_Make_Two_Object");

//         //temp obj
//         GameObject Obj1;
//         GameObject Obj2;
//         if(!spawn)
//         {
//             Vector3 position1 =  new Vector3(0,0,0);
//             Vector3 position2 =  new Vector3(0,0,0);
//             switch(Is_It_Hard)
//             {
//                 case 0: /// not hard mode (easy, middle)
//                     do{
//                     Debug.Log("TwoObjSpawner_NotHard-MakeCoordinate_Distance-InDoWhile");
//                     position1 = MakeCoordinate_in_Area();
//                     position2 = MakeCoordinate_in_Area();
//                     Distance = Vector3.Distance(position1,position2);
//                     Debug.Log("After TwoObjSpawner-Coordinate_Distance-DoWhile");
//                     }
//                     while(Distance<1);
                    
//                     break;

//                 case 1: /// hard mode
//                     Debug.Log("TwoObjSpawner_ItIsHard-MakeCoordinate_Distance-InDoWhile");
                    
//                     coord_idx1 = Random.Range(0,HardMode_Objcoord.Length);
//                     Debug.Log("HardObjCoord_idx1 Make Done");
//                     do{
//                         Debug.Log("HardObjCoord_idx2 Making - in do-while");
//                         coord_idx2 = Random.Range(0,HardMode_Objcoord.Length);
//                     }
//                     while(coord_idx1==coord_idx2);
//                     Debug.Log("HardObjCoord_idx2 Makedone");

//                     position1 = HardMode_Objcoord[coord_idx1];
//                     position2 = HardMode_Objcoord[coord_idx2];
//                     break;
//             }
//             Debug.Log("TwoObjSpawn_position_Make");

//             Obj1 = Instantiate(Objects[I1], position1, Quaternion.identity);
//             Debug.Log("TwoObjSpawn_Obj1");
//             Obj1.tag = "SpawnedObject";
//             Obj2 = Instantiate(Objects[I2], position2, Quaternion.identity);
//             Debug.Log("TwoObjSpawn_Obj2");
//             Obj2.tag = "SpawnedObject";
//             spawn = true;
//         }
//     }

//     public Vector3 MakeCoordinate_in_Area()
//     {
//         Debug.Log("MakeCorrdinate_in_Area");

//         float x = 0f;
//         float z = 0f;
//         do{
//             x = (float)Random.Range(20.1f,27.6f); 
//             z = (float)Random.Range(22.8f,27.1f);
//             Debug.Log("MakeCoordinate_in_Area_In_Do-While");
//         }
//         while((((1.13*(x-20.1)+25.3)<z) || ((0.76*(x-27.6)+25.0)>z) || ((-0.54*(x-20.1)+25.3)>z)||((-0.36*(x-21.7)+27.1)<z)));

//         Vector3 coordinates = new Vector3(x,1.2f,z);
//         return coordinates;
//     }

//     public void RemoveObjects()
//     {
//         GameObject[] spawnedObjects = GameObject.FindGameObjectsWithTag("SpawnedObject");
//         foreach (GameObject obj in spawnedObjects)
//         {
//             Destroy(obj);
//         }
//         spawn = false;
//     }


//     public int[] AttCompare_0or1(int idx1, int idx2)
//     {
//         Debug.Log("Attcompare0or1");
//         //두 object의 index 받아서
//         // 두 인덱스에 해당하는 Attribute에 대해
//         // 같 = 1 다름 = 0 인 int 배열 생성

//         int[] result = new int[10]; // 결과를 저장할 T/F 배열
//         //삼항 연산자 TRUE 일 경우 1, FALSE일 경우 0
//         result[0] = (objectAttributes[idx1].Color == objectAttributes[idx2].Color) ? 1 : 0;
//         result[1] = (objectAttributes[idx1].Size == objectAttributes[idx2].Size) ? 1 : 0;
//         result[2] = (objectAttributes[idx1].NumofLeg == objectAttributes[idx2].NumofLeg) ? 1 : 0;
//         result[3] = (objectAttributes[idx1].Tail == objectAttributes[idx2].Tail) ? 1 : 0;
//         result[4] = (objectAttributes[idx1].Flight == objectAttributes[idx2].Flight) ? 1 : 0;
//         result[5] = (objectAttributes[idx1].Wings == objectAttributes[idx2].Wings) ? 1 : 0;
//         result[6] = (objectAttributes[idx1].horn == objectAttributes[idx2].horn) ? 1 : 0;
//         result[7] = (objectAttributes[idx1].beak == objectAttributes[idx2].beak) ? 1 : 0;
//         result[8] = (objectAttributes[idx1].fur == objectAttributes[idx2].fur) ? 1 : 0;
//         result[9] = (objectAttributes[idx1].mane == objectAttributes[idx2].mane) ? 1 : 0;

//         return result;
//     }

// ///// Scene Make
// //////// PadSpawn
//     public int PadSpawner(int [] idx_T, int [] idx_F, int difficulty)
//     {
//         Debug.Log("PadSpawner");
//         int PadNum = difficulty;
//         int CorrectAnswer_Location = 0;

//         Debug.Log("idx_T Length");
//         Debug.Log(Sum);
//         Debug.Log(idx_T.Length);
//         Debug.Log(idx_T);

//         Debug.Log("idx_F Length");
//         Debug.Log(Att_Array.Length - Sum);
//         Debug.Log(idx_F.Length);
//         Debug.Log(idx_F);

//         if (!Pads_Spawned)
//         {
//             switch(PadNum)
//             {
//                 case 2:
//                     Debug.Log("PadSpawner - Before Pad_2_Spawn");
//                     CorrectAnswer_Location = Pad_2_Spawn(idx_T, idx_F);
//                     Debug.Log("PadSpawner - case2");
//                     //1 왼쪽
//                     //2 오른쪽
//                     break;
//                 case 3:
//                     Debug.Log("PadSpawner - Before Pad_3_Spawn");
//                     CorrectAnswer_Location = Pad_3_Spawn(idx_T, idx_F);
//                     Debug.Log("PadSpawner - case3");
//                     //1 왼쪽
//                     //2 중간
//                     //3 오른쪽
//                     break;
//             }

//             Pads_Spawned = true;
//         }
//         return CorrectAnswer_Location;
//     }
//     public int Pad_2_Spawn(int [] idx_T, int [] idx_F)
//     {
//         Quaternion [] PadRot = new Quaternion[2];
//         PadRot[0].eulerAngles = new Vector3(0,26,0);
//         Debug.Log(PadRot[0]);
//         Debug.Log(PadRot[0]);
//         Debug.Log(PadRot[0]);
//         PadRot[1].eulerAngles = new Vector3(0,46,0);
//         Debug.Log(PadRot[1]);
//         Debug.Log(PadRot[1]);
//         Debug.Log(PadRot[1]);

//         Debug.Log("Pad2Spawn");
//         int T_coord1_idx;
//         int coord2_idx;
//         int T1;
//         int F1;
//         // random 하게 True att_idx 고르기
//         // random 하게 false att_idx 고르기
//         T1 = (int)Random.Range(0,idx_T.Length);
//         F1 = (int)Random.Range(0,idx_F.Length);

//         Debug.Log(T1);
//         Debug.Log(F1);

//         int idxT = idx_T[T1];
//         int idxF = idx_F[F1];

//         Vector3 [] coord = new Vector3[2];
//         coord[0] = new Vector3(19.526f,2.1f,22.431f);
//         coord[1] = new Vector3(20.894f,2.1f,21.457f);

//         //위의 coord값에 대해 idx를 random하게 접근해서
//         //true 와 false의 위치가 매번 랜덤하게 생성되게 함
//         T_coord1_idx = (int)Random.Range(0,2); // 0 이상 2 미만 = 0 or 1
//         coord2_idx = 1- T_coord1_idx; //if coord1=0,coord1=1,coord1=1,coord1=0
//         //true pad



//         // GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], Quaternion.identity);
//         // Pad1.tag =  "PadObject";
//         // //false pad
//         // GameObject Pad2 = Instantiate(Pads[idxF], coord[coord2_idx], Quaternion.identity);
//         // Pad2.tag =  "PadObject";
//         GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], PadRot[T_coord1_idx]);
//         Pad1.tag =  "PadObject";
//         //false pad
//         GameObject Pad2 = Instantiate(Pads[idxF], coord[coord2_idx], PadRot[coord2_idx]);
//         Pad2.tag =  "PadObject";



//         // T_coord1_idx = 0 -> 1반환 왼쪽
//         // T_coord1_idx = 1 -> 2반환 오른쪽
//         return T_coord1_idx+1;
//     }
//     public int Pad_3_Spawn(int [] idx_T, int [] idx_F)
//     {

//         Quaternion [] PadRot = new Quaternion[3];
//         PadRot[0].eulerAngles = new Vector3(0,20,0);
//         Debug.Log(PadRot[0]);
//         Debug.Log(PadRot[0]);
//         Debug.Log(PadRot[0]);
//         PadRot[1].eulerAngles = new Vector3(0,36,0);
//         Debug.Log(PadRot[1]);
//         Debug.Log(PadRot[1]);
//         Debug.Log(PadRot[1]);
//         PadRot[2].eulerAngles = new Vector3(0,52,0);
//         Debug.Log(PadRot[2]);
//         Debug.Log(PadRot[2]);
//         Debug.Log(PadRot[2]);

//         Debug.Log("Pad3Spawn");
//         int T_coord1_idx;
//         int coord2_idx;
//         int coord3_idx;
//         int T1;
//         int F1;
//         int F2;
//         // random 하게 True att_idx 고르기
//         // random 하게 false att_idx 고르기
//         T1 = (int)Random.Range(0,idx_T.Length);
//         F1 = (int)Random.Range(0,idx_F.Length);
//         do
//         {
//             F2 = (int)Random.Range(0,idx_F.Length);
//             Debug.Log("Pad_3_Spawn_In_Do-while_False_idx");
//         }while(F2 == F1); // F1, F2 다를때까지 실행

//         Debug.Log("T1");
//         Debug.Log(T1);
//         Debug.Log("F1");
//         Debug.Log(F1);
//         Debug.Log("F2");
//         Debug.Log(F2);

//         int idxT = idx_T[T1];
//         int idxF1 = idx_F[F1];
//         int idxF2 = idx_F[F2];

//         Vector3 [] coord = new Vector3[3];
//         coord[0] = new Vector3(19.526f,2.1f,22.431f);
//         coord[1] = new Vector3(20.382f,2.1f,21.976f);
//         coord[2] = new Vector3(20.894f,2.1f,21.457f);

//         //위의 coord값에 대해 idx를 random하게 접근해서
//         //true 와 false의 위치가 매번 랜덤하게 생성되게 함
//         T_coord1_idx = (int)Random.Range(0,3); // 0 이상 3 미만 = 0,1,2
//         do
//         {
//             coord2_idx = (int)Random.Range(0,3);
//             Debug.Log("Pad_3_Spawn_In_Do-while_False_coord");

//         }while(T_coord1_idx == coord2_idx); // coord1, coord2 다를때까지 실행

//         coord3_idx = 3- (T_coord1_idx+coord2_idx); /// 0 or 1 or 2이어야 하니까 sum = 3이므로...

//         Debug.Log("T_coord1_idx");
//         Debug.Log(T_coord1_idx);
//         Debug.Log("coord2_idx");
//         Debug.Log(coord2_idx);
//         Debug.Log("coord3_idx");
//         Debug.Log(coord3_idx);
        
        
        
//         //true pad
//         GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], PadRot[T_coord1_idx]);
//         Pad1.tag =  "PadObject";

//         Debug.Log("Pad1");
//         //false pad
//         GameObject Pad2 = Instantiate(Pads[idxF1], coord[coord2_idx], PadRot[coord2_idx]);
//         Pad2.tag =  "PadObject";
//         Debug.Log("Pad2");
//         GameObject Pad3 = Instantiate(Pads[idxF2], coord[coord3_idx], PadRot[coord3_idx]);
//         Pad3.tag =  "PadObject";
//         Debug.Log("Pad3");

//         // //true pad
//         // GameObject Pad1 = Instantiate(Pads[idxT], coord[T_coord1_idx], Quaternion.identity);
//         // Pad1.tag =  "PadObject";
//         // //false pad
//         // GameObject Pad2 = Instantiate(Pads[idxF1], coord[coord2_idx], Quaternion.identity);
//         // Pad2.tag =  "PadObject";
//         // GameObject Pad3 = Instantiate(Pads[idxF2], coord[coord3_idx], Quaternion.identity);
//         // Pad3.tag =  "PadObject";

//         Debug.Log("PadDone");


//         // T_coord1_idx = 0 -> 1반환 왼쪽
//         // T_coord1_idx = 1 -> 2반환 중간
//         // T_coord1_idx = 2 -> 3반환 오른쪽
//         return T_coord1_idx+1;
//     }
//     public void RemovePads()
//     {
//         GameObject[] spawnedPads = GameObject.FindGameObjectsWithTag("PadObject");
//         foreach (GameObject obj in spawnedPads)
//         {
//             Destroy(obj);
//         }
//         Pads_Spawned = false;
//     }

//     public int MakeCategoryPad(int obj1, int obj2, int gamedifficulty)
//     {
//         Debug.Log("MakeCategoryPad");
//         // ComparisionResult - 두 object의 att 비교, 같 = 1 다 = 0
//         int [] ComparisionResult= AttCompare_0or1(obj1,obj2);
//         Debug.Log("ComparisionResult");
//         Debug.Log(ComparisionResult);
//         int Sum =  ComparisionResult.Sum();
//         Debug.Log("Sum");
//         Debug.Log(Sum);
//         //1 or 0 으로 이루어진 데이터임
//         // Sum = true 개수임
//         //true인 index를 저장하는 array
//         int [] idx_T = new int [Sum];// true개수에 맞게

//         int Location = 0;

//         //false인 index를 저장하는 array
//         int [] idx_F = new int [Att_Array.Length - Sum];//false개수에 맞게
//         Debug.Log("idx_T Length");
//         Debug.Log(Sum);
//         Debug.Log(idx_T.Length);

//         Debug.Log("idx_F Length");
//         Debug.Log(Att_Array.Length - Sum);
//         Debug.Log(idx_F.Length);

//         Debug.Log("MakeCategoryPad");

//         int t = 0;
//         int f = 0;
//         //T,F인 곳의 idx를 따로 저장
//         for (t = 0; t+f<Att_Array.Length;)
//         {
//             ///t+f = idx
//             if (ComparisionResult[t+f]==1)
//             {
//                 idx_T[t] = t+f;
//                 t = t+1;
//             }
//             else
//             {
//                 idx_F[f] = t+f;
//                 f = f+1;
//             }
//         }

//         Debug.Log("idx_T Length");
//         Debug.Log(Sum);
//         Debug.Log(idx_T.Length);

//         Debug.Log("idx_F Length");
//         Debug.Log(Att_Array.Length - Sum);
//         Debug.Log(idx_F.Length);

        
//         Debug.Log("Before Pad Spawner");
//         Location = PadSpawner(idx_T,idx_F,gamedifficulty);
        
//         if (gamedifficulty == EASY){
//         //Location 1 왼쪽
//         //Location 2 오른쪽
//             if (Location ==1){
//                 return Location; // return 1 -- Button 입장에서 왼쪽

//             }
//             else{ //Location = 2
//                 return Location +1; // return 3 -- Button입장에서 오른쪽
//             }
            
//         }
//         else if(gamedifficulty == MIDDLE){
//         // Location 1반환 왼쪽
//         // Location 2반환 중간
//         // Location 3반환 오른쪽
//             return Location;//Button 입장에서 왼, 중, 오 같음
//         }
//         else{
//             return Location;
//             ///HARD
//         }

//         //// MakePad의 PadSpawner(int [] idx_T, int [] idx_F, int difficulty)
//         //// PadSpawner내의 switch case문 - pad 개수에 따른 obj 생성
//         //// idx_T - attribute idx임
//         //// idx_F - attribute idx임
//         //// attribute - idx 에 맞게 cube object with text 만들기 (10개 필요)
//         //// prefab에 저장
//         //// 해서
//         //// padspawner 내의 switch case문에 있는
//         //// Pad_2_Spawn(int [] idx_T, int [] idx_F)에
//         //// False idx와 True idx 전달 해야됨
//         //// 얘가 알아서 random하게 접근하게 만들어 놓음
//     }

// /////Scene Make
// ////////Button
//     public void Button_L_Active()
//     {
//         Debug.Log("Button_L_Active");
//         GameObject ButtonL = Instantiate(Buttons[0], ButtonPosition_Left,Quaternion.identity);//as GameObject;
//         ButtonL.tag = "Button";
//     }

//     public void Button_M_Active()
//     {
//         Debug.Log("Button_M_Active");
//         GameObject ButtonM = Instantiate(Buttons[1], ButtonPosition_Middle,Quaternion.identity);//as GameObject
//         ButtonM.tag = "Button";
//     }

//     public void Button_R_Active()
//     {
//         Debug.Log("Button_R_Active");
//         GameObject ButtonR = Instantiate(Buttons[2], ButtonPosition_Right,Quaternion.identity);//as GameObject
//         ButtonR.tag = "Button";
//     }
    

//     public void ButtonsDeActive()
//     {
        
//         GameObject[] spawnedButtons = GameObject.FindGameObjectsWithTag("Button");
//         foreach (GameObject obj in spawnedButtons)
//         {
//             Destroy(obj);
//         }
//         buttonsSpawned = false;
//     }
    
// /////아래쪽 코드 내장한 버전 적용 안되었음
//     IEnumerator StageClear()
//     {
//         state = STATE.WAIT;
//         yield return new WaitForSeconds(2f);
//         // 기존 오브젝트 제거

//         if (spawn)
//         {
//             RemoveObjects();
//         }
//         if (Pads_Spawned)
//         {
//             RemovePads();
//         }
//         if(buttonsSpawned)
//         {
//             ButtonsDeActive();
//         }

//         ++stageNum;

//         if (stageNum>stageCnt)
//         {
//             state = STATE.FINISH;
//             yield return new WaitForSeconds(0.5f);
//         }

//         stageTime = Time.time;
//         state = STATE.START;
//     }

//     IEnumerator ShowStageInfo()
//     {
//         Debug.Log("InSHowStageInfo");
//         ////////////////////////[TextNotNow]////////
//         //stageNumText.text = "Stage" +stageNum;
//         //stageInfoText.text = "두 동물의 공통점을 파악해 패드를 누르세요.";
//         ////////////////////////[TextNotNow]////////

//         yield return new WaitForSeconds(0.0001f);

//         ////////////////////////[TextNotNow]////////
//         //stageNumText.text = "";
//         ////////////////////////[TextNotNow]////////
//     }
// }
