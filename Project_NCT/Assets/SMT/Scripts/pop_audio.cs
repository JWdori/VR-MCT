using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pop_audio : MonoBehaviour
{
    public AudioClip audioClip1; // ù ��° ����� Ŭ��
    public AudioClip audioClip2; // �� ��° ����� Ŭ��

    public float spatialBlendMax = 1f; // spatialBlend�� �ִ�ġ

    private ParticleSystem particleSystem;
    private AudioSource audioSource;

    private void Start()
    {
        particleSystem = GetComponent<ParticleSystem>();
        audioSource = gameObject.AddComponent<AudioSource>();
        PlayRandomAudio();
    }

    private void PlayRandomAudio()
    {
        float randomValue = Random.value;

        if (randomValue <= 0.3f && audioClip1 != null)
        {
            audioSource.clip = audioClip1;
        }
        else if (audioClip2 != null)
        {
            audioSource.clip = audioClip2;
        }

        if (audioSource.clip != null)
        {
            audioSource.spatialBlend = spatialBlendMax; // spatial blend ����
            audioSource.Play();
        }
    }

    private void Update()
    {
        // ��ƼŬ �ý����� ��� ������ ������ �ı�
        if (!particleSystem.IsAlive())
        {
            Destroy(gameObject);
        }
    }
}
