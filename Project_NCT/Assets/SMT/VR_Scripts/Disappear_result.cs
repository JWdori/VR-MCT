using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// �� ������ GameManager object�� �� ����
public class Disappear_result: MonoBehaviour
{
    // isShow�� true�̸� Ȱ��ȭ
    static public bool isShow = true;
    // isHide�� true�̸� ��Ȱ��ȭ
    static public bool isHide = false;

    // GameObject�� menu ������ ����
    public GameObject menu;

    void Update()
    {
        if (isShow)
        {
            //Ȱ��ȭ �ڵ�
            menu.SetActive(true);
            isShow = false;
        }
        else if (isHide)
        {
            //��Ȱ��ȭ �ڵ�
            menu.SetActive(false);
            isHide = false;
        }
    }
}
