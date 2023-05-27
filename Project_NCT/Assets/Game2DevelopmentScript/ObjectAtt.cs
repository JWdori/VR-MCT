using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectAtt : MonoBehaviour
{
    public class Attribute
    {
        public int index;
        // Color
        public string Color;
        // Size = [Big,Middle,Small]
        public string Size;
        // NumofLeg = [0,2,4]
        public int NumofLeg;
        // Tail = [T,F] // T 꼬리가 있음
        public bool Tail;
        // Weight = [heavy, light]
        public string Weight;
        // Flight = [T,F] // F 못남
        public bool Flight;
        // Wings = [T,F] // T 날개가 있음
        public bool Wings;
        // GrassEat = [T,F] //F 육식
        public bool GrassEat;
        // habitat = [Water, Ground, Dessert] // 서식지
        public string Habitat;
        // night = [T,F] // 야행성
        public bool Night;
        // child = [Baby, Egg] // Baby - 새끼를 낳음
        public string Child;
        // Movement = [Water, Crawl, Walk, Fly]
        // public string Movement;
        // NonCommon = T; //공통점이 없음
    }

    //public string[] Att_Array = {'Color', 'Size', 'NumofLeg', 'Tail', 'Weight', 'Flight', 'Wings', 'GrassEat', 'Habitat', 'Night', 'Child', 'Movement'};

}
