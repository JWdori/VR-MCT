using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Balloon_Pop : MonoBehaviour
{
    public ParticleSystem particleSystem;
    private GameManager3 gameManager;
    private bool popped = false; // 충돌 시 한 번만 실행하기 위한 변수


    private void Start()
    {
        gameManager = FindObjectOfType<GameManager3>();
    }

    private void OnCollisionEnter(Collision collision)
    {

        if (!popped)
        {
            particleSystem.gameObject.SetActive(true);

            ParticleSystem instantiatedParticleSystem = Instantiate(particleSystem, collision.contacts[0].point, Quaternion.identity);
            instantiatedParticleSystem.Play();

            // 충돌 위치에 파티클 시스템 작동

            // 점수 증가
            GameManager3 gameManager = FindObjectOfType<GameManager3>();
            gameManager.AddScore(1);
            gameManager.PrintScore();
            GameManager3.state = GameManager3.STATE.HIT;
            popped = true; // 한 번 실행되었음을 표시
        }


        // 충돌한 오브젝트 파괴
        Destroy(gameObject);
    }
}
