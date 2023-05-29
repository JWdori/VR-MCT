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

        // 충돌 위치에 파티클 시스템 작동

        // 충돌한 오브젝트 파괴
        Destroy(gameObject);
    }
}