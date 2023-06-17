using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// * : Pad ���� �� 0.5 ĭ ���
// . : 0.05 ĭ ���
// > : x�� ���� 0.5ĭ ���
// ^ : z�� ���� ���� 0.5ĭ �ø���
public class PadSet_VR : MonoBehaviour
{
    static public string[][] stage = new string[][]
    {
        //Easy ��� Pad �迭
        new string[]
        {
            "               ",
            "  .*.*.*.*.*.  ",
            "               "
        },

        //Normal ��� Pad �迭
        new string[]
        {
            "  .>.>.*.>.>.  ",
            "  .>.*.>.*.>.  ",
            "  .*.*.*.*.*.  ",
            "  .>.*.>.*.>.  ",
            "  .>.>.*.>.>.  "
        },

        //Hard ��� Pad �迭
        new string[]
        {
            "  .>.>.*.>.>.  ",
            "  .>.*.>.*.>.  ",
            "  .*.*.*.*.*.  ",
            "  .>.*.>.*.>.  ",
            "  .>.>.*.>.>.  "
        }
    };
}
