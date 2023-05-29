using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Balloon_Pop_Fail : MonoBehaviour
{
    public ParticleSystem particleSystem;


    private void OnCollisionEnter(Collision collision)
    {
        particleSystem.gameObject.SetActive(true);


        ParticleSystem instantiatedParticleSystem = Instantiate(particleSystem, collision.contacts[0].point, Quaternion.identity);
        instantiatedParticleSystem.Play();

        // �浹 ��ġ�� ��ƼŬ �ý��� �۵�

        // �浹�� ������Ʈ �ı�
        Destroy(gameObject);
    }
}