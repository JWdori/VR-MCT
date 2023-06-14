using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// * : Pad ¼³Á¤ ÈÄ 0.5 Ä­ ¶ç±â
// . : 0.05 Ä­ ¶ç±â
// > : xÃà ¹æÇâ 0.5Ä­ ¶ç±â
// ^ : zÃà ¹æÇâ À§·Î 0.5Ä­ ¿Ã¸®±â
public class PadSet_VR : MonoBehaviour
{
    static public string[][] stage = new string[][]
    {
        //Easy ¸ðµå Pad ¹è¿­
        new string[]
        {
            "               ",
            "  .*.*.*.*.*.  ",
            "               "
        },

        //Normal ¸ðµå Pad ¹è¿­
        new string[]
        {
            "  .>.>.*.>.>.  ",
            "  .>.*.>.*.>.  ",
            "  .*.*.*.*.*.  ",
            "  .>.*.>.*.>.  ",
            "  .>.>.*.>.>.  "
        },

        //Hard ¸ðµå Pad ¹è¿­
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
