using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// * : Pad ���� �� 0.5 ĭ ���
// . : 0.05 ĭ ���
// > : x�� ���� 0.5ĭ ���
// ^ : z�� ���� ���� 0.5ĭ �ø���
public class PadSet_Test : MonoBehaviour
{
    static public string[][] stage = new string[][]
    {
        //Test ��� Pad �迭
        new string[]
        {
            "  .*.*.*.*.*.  ",
            "  .*.*.*.*.*.  ",
            "  .*.*.*.*.*.  "
        },

        new string[]
        {
            "  .*.*.*.*.  ",
            "  .*.*.*.*.  ",
            "  .*.*.*.*.  ",
            "  .*.*.*.*.  "
        },

        new string[]
        {
            "  .*.*.*.*.*.  ",
            "  .*.*.*.*.*.  ",
            "  .*.*.*.*.*.  "
        }
    };
}
