using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomObjectSpawner : MonoBehaviour
{
    public GameObject[] myObjects;

    bool objectsSpawned = false; // 생성 여부를 나타내는 플래그 변수

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        /// Random Object Index
        if (!objectsSpawned)
        {
            int Obj_RandomIndex_1 = Random.Range(0, myObjects.Length);
            int Obj_RandomIndex_2 = 0;

            ///Object 두개 생성, 서로 다른 index값이어야 함 (다른 Object)
            do //최초 한번은 무조건 실행
            {
                Obj_RandomIndex_2 = Random.Range(0, myObjects.Length);
            }
            while(Obj_RandomIndex_1 == Obj_RandomIndex_2); //조건식 만족하면 while문 재실행


            Vector3 position_Obj1 = MakeCoordinate_in_SemiCircle();
            Vector3 position_Obj2 = MakeCoordinate_in_SemiCircle();


            //Obj1

            Instantiate(myObjects[Obj_RandomIndex_1], position_Obj1, Quaternion.identity);
            
            //Obj2
            Instantiate(myObjects[Obj_RandomIndex_2], position_Obj2, Quaternion.identity);

            objectsSpawned = true;
        }

    }
        
    //Instantiate : 유니티 Object 생성 함수
    //(Object, 위치, 회전)
    //(Quaternion.identity) 회전 없음, 기본상태



    public Vector3 MakeCoordinate_in_SemiCircle()
    {
        float x = 0f; // c# float 이용하기 위해서 필요한 접미사 f
        float z = 0f;
        do{
            // Random.Range(a,b) - a이상 b미만
            // (a,b == float) -> 소수점에 맞게 random 생성
            x = (float)Random.Range(11.50f,32.27f); // type double to float 
            z = (float)Random.Range(20.50f,35.27f); //(Random.Range return double)
        }
        while( (((x-21.5)*(x-21.5)+(z-24.5)*(z-24.5)) > 116.0) || (z+0.4*x -33.1 < 0) );

        Vector3 coordinates = new Vector3(x,1,z);
        return coordinates;
    }

    //x = Random.Range(11.50,32.27); // Random.Range(a,b) - a이상 b미만
    //z = Random.Range(20.50,35.27); // (a,b == float) -> 소수점에 맞게 random 생성


    //(((x-21.5)*(x-21.5)+(z-24.5)*(z-24.5))<116.0) && (z+0.4*x -33.1 >0) 원하는 조건
    // while은 조건 만족할때 도는 loop
    // 맞추고 싶은 조건 A && B
    // while (not A || not B)
    // A나 B중 하나만 만족 안해도 다시 도는것임

    //(((x-21.5)*(x-21.5)+(z-24.5)*(z-24.5))<116) 원
    //(z+0.4*x -33.1 >0) 직선
    //원하는 조건의 반원 내에 존재하도록 함
}
