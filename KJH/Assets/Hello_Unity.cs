using System.Collections; //
using System.Collections.Generic; //
using UnityEngine; //

public class Hello_Unity : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello Unity");

        // 1.변수
        
        int level = 4;
        float strength = 3.86f;
        string playerName = "김정현";
        bool isFullLevel = false;

        /*
        Debug.Log("학생의 이름은?");
        Debug.Log(playerName);
        Debug.Log("학생의 학년은?");
        Debug.Log(level);
        Debug.Log("학생의 학점은?");
        Debug.Log(strength);
        Debug.Log("학생은 졸업할 수 있나?");
        Debug.Log(isFullLevel);
        */

        // 2.그룹형 변수
        string[] monsters = { "과제", "팀플", "교수님" };
        /*
        Debug.Log("학교에 존재하는 몬스터");
        Debug.Log(monsters[0]);
        Debug.Log(monsters[1]);
        Debug.Log(monsters[2]);
        */

        int[] monsterLevel = new int[3];
        monsterLevel[0] = 1;
        monsterLevel[1] = 6;
        monsterLevel[2] = 20;
        /*
        Debug.Log("맵에 존재하는 몬스터의 레벨");
        Debug.Log(monsterLevel[0]);
        Debug.Log(monsterLevel[1]);
        Debug.Log(monsterLevel[2]);
        */

        List<string> items = new List<string>(); //generic
        items.Add("아메리카노30"); // 추가
        items.Add("에너지드링크30");

        //items.RemoveAt(0); 제거
        /*
        Debug.Log("가지고 있는 아이템");
        Debug.Log(items[0]);
        Debug.Log(items[1]);
        */

        // 3.연산자
        int exp = 1500;

        exp = 1500 + 320;
        exp = exp - 10;
        level = exp / 300;
        strength = level * 3.1f;

        Debug.Log("학생의 총 경험치는?");
        Debug.Log(exp);
        Debug.Log("학생의 레벨은?");
        Debug.Log(level);
        Debug.Log("학생의 학점은?");
        Debug.Log(strength);

        int nextExp = 300 - (exp % 300);
        Debug.Log("다음 레벨까지 남은 경험치는?");
        Debug.Log(nextExp);

        string title = "전설의";
        Debug.Log("학생의 이름은?");
        Debug.Log(title + " " + playerName);

        int fullLevel = 99;
        isFullLevel = level == fullLevel;
        Debug.Log("학생은 만랩입니까?" + isFullLevel);

        bool isEndTutorial = level > 10;
        Debug.Log("튜토리얼이 끝난 학생입니까?" + isEndTutorial);

        int health = 30;
        int mana = 25;
        bool isBadCondition = health <= 50 && mana <= 20;
        Debug.Log("학생의 상태가 나쁩니까?" + isBadCondition);

        string condition = isBadCondition ? "나쁨" : "좋음"; // ? 앞이 true 이면 ':' 앞에 값 출력, false이면 뒤에 값 출력
        Debug.Log("학생의 상태가 나쁩니까?" + condition);

        // 4.키워드
        // int, float, bool, string, List

        //5. 조건문 if, switch
        //6. 반복문 while, for, foreach, break
        foreach (string monster in monsters)
        {
            Debug.Log("이 지역에 있는 몬스터 : " + monster);
        }

        Debug.Log(health);
        health = Heal(health);
        Debug.Log(health);

        Actor player = new Actor();

    }

    //7. 함수(메소드)
    int Heal(int health)
    {
        health += 10;
        Debug.Log("힐을 받았습니다." + health);
        return health;
    }
}