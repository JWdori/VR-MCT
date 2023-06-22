using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class isshot : MonoBehaviour
{
    public GameObject[] shotArea;
    public GameObject[] Shot = new GameObject[0];
    private BoxCollider shotAreaBoxCollider; // 변수를 클래스 수준으로 이동시킴

    // Start is called before the first frame update
    void Start()
    {
        shotAreaBoxCollider = shotArea[0].GetComponent<BoxCollider>(); // shotArea의 첫 번째 요소의 BoxCollider를 할당
    }

    // 감지된 오브젝트를 처리하는 로직을 여기에 작성합니다.
    private void OnTriggerEnter(Collider other)
    {
        // 감지된 오브젝트의 태그를 확인하려면 다음과 같이 사용할 수 있습니다.
        if (other.CompareTag("DART"))
        {
            
            // "Player" 태그를 가진 오브젝트가 감지되었을 때 수행할 동작을 여기에 작성합니다.
            Debug.Log("DART 감지됨!");
            StartCoroutine(ShotText());
        }
    }

    

    IEnumerator ShotText()
    {
        Vector3 coord = new Vector3(0.332f, 1.459f, 1.348f);
        GameObject shot = Instantiate(Shot[0], coord, Quaternion.Euler(0, 0, 0));
        shot.tag = "shot";

        yield return new WaitForSeconds(2f);

        GameObject[] sobj = GameObject.FindGameObjectsWithTag("shot");
        foreach (GameObject obj in sobj)
        {
            Destroy(obj);
        }
    }

}

    // public GameObject[] shotArea;

    // // Start is called before the first frame update
    // private void OnTriggerEnter(Collider other)
    // {
    //     // 감지된 오브젝트를 처리하는 로직을 여기에 작성합니다.

    //     // 감지된 오브젝트의 태그를 확인하려면 다음과 같이 사용할 수 있습니다.
    //     if (other.CompareTag("Player"))
    //     {
    //         // "Player" 태그를 가진 오브젝트가 감지되었을 때 수행할 동작을 여기에 작성합니다.
    //         Debug.Log("Player 감지됨!");
    //     }
    // }
    // void Start()
    // {
    //     BoxCollider shotAreaBoxCollider = shotArea.GetComponent<BoxCollider>();
    // }
    // void Update()
    // {
    //     OnTriggerEnter(shotAreaBoxCollider);
    // }
