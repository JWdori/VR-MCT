using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    void Update()
    {
        //Input : ���� �� �Է��� �����ϴ� Ŭ����
        if (Input.anyKeyDown) // �ƹ� �Է��� ���ʷ� ���� �� true (type : bool)
            Debug.Log("�÷��̾ �ƹ� Ű�� �������ϴ�.");

        /*
        if (Input.anyKey) // �ƹ� �Է��� ������ true (type : bool)
            Debug.Log("�÷��̾ �ƹ� Ű�� ������ �ֽ��ϴ�.");
        */

        /*
        // GetKey: Ű���� ��ư �Է��� ������ true
        if (Input.GetKeyDown(KeyCode.Return)) //Return�� ����, Escape�� ESC
            Debug.Log("�������� �����Ͽ����ϴ�.");
        if (Input.GetKey(KeyCode.LeftArrow))
            Debug.Log("�������� �̵� ��");
        if (Input.GetKeyUp(KeyCode.RightArrow))
            Debug.Log("������ �̵��� ������ϴ�.");
        */

        /*
        // GetMouse : ���콺 ��ư �Է��� ������ true
        if (Input.GetMouseButtonDown(0)) // 0�� ����, 1�� ������
            Debug.Log("�̻��� �߻�!");
        if (Input.GetMouseButton(0))
            Debug.Log("�̻��� ������ ��...");
        if (Input.GetMouseButtonUp(0))
            Debug.Log("���� �̻��� �߻�!!");
        */

        /*
        // GetButton : Input ��ư �Է��� ������ true
        if (Input.GetButtonDown("Jump"))
            Debug.Log("����!");
        if (Input.GetButton("Jump"))
            Debug.Log("���� ������ ��...");
        if (Input.GetButtonUp("Jump"))
            Debug.Log("���� ����!!");
        */

        if (Input.GetButton("Horizontal"))
            Debug.Log("Ⱦ �̵� ��..." + Input.GetAxis("Horizontal"));
        

    }
}
