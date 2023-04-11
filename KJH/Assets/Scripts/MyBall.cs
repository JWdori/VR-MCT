using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyBall : MonoBehaviour
{
    public float jumpPower = 10;
    public int itemCount;
    bool isJump;
    Rigidbody rigid;
    AudioSource audio;

    void Awake()
    { 
        isJump = false;
        rigid = GetComponent<Rigidbody>();
        audio = GetComponent<AudioSource>();
    }

    void Update()
    {
        if(Input.GetButtonDown("Jump")&& !isJump)
        {
            isJump = true;
            rigid.AddForce(new Vector3(0,jumpPower,0), ForceMode.Impulse);
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        float h = Input.GetAxisRaw("Horizontal");
        float v = Input.GetAxisRaw("Vertical");
        Vector3 vec = new Vector3(h, 0, v);

        rigid.AddForce(vec, ForceMode.Impulse);
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Floor")
            isJump = false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.name == "Item")
        {
            itemCount++;
            audio.Play();
            other.gameObject.SetActive(false);
        }
    }
}
