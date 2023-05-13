using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// * : Pad 위치
// . : 한 칸 띄기
// > : x축 방향 0.5칸 띄기
// ^ : z축 방향 위로 0.5칸 올리기
public class PadSet_VR : MonoBehaviour
{
    static public string[][] stage = new string[][]
    {
        //Easy 모드 Pad 배열
        new string[]
        {
            "               ",
            "  .*.*.*.*.*.  ",
            "               "
        },

        //Normal 모드 Pad 배열
        new string[]
        {
            "  .*.*.*.*.  ",
            "  .......  ",
            "  .*.*.*.*.  "
        },

        //Hard 모드 Pad 배열
        new string[]
        {
            "  >.*.*.*.*.  ",
            "*>>>>....*  ",
            "  >.*.*.*.*.  "
        }
    };
}
