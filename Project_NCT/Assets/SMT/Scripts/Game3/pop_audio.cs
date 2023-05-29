using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pop_audio : MonoBehaviour
{
    public AudioClip audioClip1; // ù ��° ����� Ŭ��
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

        audioSource.clip = audioClip1;
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
