using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// �� ������ GameManager object�� �� ����
// SelectLevel �κ��� Ȱ��ȭ, ��Ȱ��ȭ�� ���
// �� �ڵ带 SelectLevel�� ������ ��Ȱ��ȭ �Ǿ��� �� Ȱ��ȭ ��ų �� ����
public class Disappear_ex2: MonoBehaviour
{
    // isShow�� true�̸� Ȱ��ȭ
    static public bool isShow = false;
    // isHide�� true�̸� ��Ȱ��ȭ
    static public bool isHide = true;

    // GameObject�� menu ������ ����
    // GameManager Inspector���� object ��� ���� ����, ����� SelectLevel�� �Ǿ�����
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
