using System.Collections; //
using System.Collections.Generic; //
using UnityEngine; //

public class Hello_Unity : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello Unity");

        // 1.����
        
        int level = 4;
        float strength = 3.86f;
        string playerName = "������";
        bool isFullLevel = false;

        /*
        Debug.Log("�л��� �̸���?");
        Debug.Log(playerName);
        Debug.Log("�л��� �г���?");
        Debug.Log(level);
        Debug.Log("�л��� ������?");
        Debug.Log(strength);
        Debug.Log("�л��� ������ �� �ֳ�?");
        Debug.Log(isFullLevel);
        */

        // 2.�׷��� ����
        string[] monsters = { "����", "����", "������" };
        /*
        Debug.Log("�б��� �����ϴ� ����");
        Debug.Log(monsters[0]);
        Debug.Log(monsters[1]);
        Debug.Log(monsters[2]);
        */

        int[] monsterLevel = new int[3];
        monsterLevel[0] = 1;
        monsterLevel[1] = 6;
        monsterLevel[2] = 20;
        /*
        Debug.Log("�ʿ� �����ϴ� ������ ����");
        Debug.Log(monsterLevel[0]);
        Debug.Log(monsterLevel[1]);
        Debug.Log(monsterLevel[2]);
        */

        List<string> items = new List<string>(); //generic
        items.Add("�Ƹ޸�ī��30"); // �߰�
        items.Add("�������帵ũ30");

        //items.RemoveAt(0); ����
        /*
        Debug.Log("������ �ִ� ������");
        Debug.Log(items[0]);
        Debug.Log(items[1]);
        */

        // 3.������
        int exp = 1500;

        exp = 1500 + 320;
        exp = exp - 10;
        level = exp / 300;
        strength = level * 3.1f;

        Debug.Log("�л��� �� ����ġ��?");
        Debug.Log(exp);
        Debug.Log("�л��� ������?");
        Debug.Log(level);
        Debug.Log("�л��� ������?");
        Debug.Log(strength);

        int nextExp = 300 - (exp % 300);
        Debug.Log("���� �������� ���� ����ġ��?");
        Debug.Log(nextExp);

        string title = "������";
        Debug.Log("�л��� �̸���?");
        Debug.Log(title + " " + playerName);

        int fullLevel = 99;
        isFullLevel = level == fullLevel;
        Debug.Log("�л��� �����Դϱ�?" + isFullLevel);

        bool isEndTutorial = level > 10;
        Debug.Log("Ʃ�丮���� ���� �л��Դϱ�?" + isEndTutorial);

        int health = 30;
        int mana = 25;
        bool isBadCondition = health <= 50 && mana <= 20;
        Debug.Log("�л��� ���°� ���޴ϱ�?" + isBadCondition);

        string condition = isBadCondition ? "����" : "����"; // ? ���� true �̸� ':' �տ� �� ���, false�̸� �ڿ� �� ���
        Debug.Log("�л��� ���°� ���޴ϱ�?" + condition);

        // 4.Ű����
        // int, float, bool, string, List

        //5. ���ǹ� if, switch
        //6. �ݺ��� while, for, foreach, break
        foreach (string monster in monsters)
        {
            Debug.Log("�� ������ �ִ� ���� : " + monster);
        }

        Debug.Log(health);
        health = Heal(health);
        Debug.Log(health);

        Actor player = new Actor();

    }

    //7. �Լ�(�޼ҵ�)
    int Heal(int health)
    {
        health += 10;
        Debug.Log("���� �޾ҽ��ϴ�." + health);
        return health;
    }
}