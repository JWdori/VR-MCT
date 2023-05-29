using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Balloon_Pop : MonoBehaviour
{
    public ParticleSystem particleSystem;
    private GameManager3 gameManager;

    private void Start()
    {
        gameManager = FindObjectOfType<GameManager3>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        particleSystem.gameObject.SetActive(true);

        ParticleSystem instantiatedParticleSystem = Instantiate(particleSystem, collision.contacts[0].point, Quaternion.identity);
        instantiatedParticleSystem.Play();

        // �浹 ��ġ�� ��ƼŬ �ý��� �۵�

        // ���� ����
        gameManager.AddScore(1);
        gameManager.PrintScore();

        // �浹�� ������Ʈ �ı�
        Destroy(gameObject);
    }
}
