using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class pop_audio : MonoBehaviour
{
    public AudioClip audioClip1; // 첫 번째 오디오 클립
    public float spatialBlendMax = 1f; // spatialBlend의 최대치

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
            audioSource.spatialBlend = spatialBlendMax; // spatial blend 설정
            audioSource.Play();
        }


    }

    private void Update()
    {
        // 파티클 시스템이 재생 중이지 않으면 파괴
        if (!particleSystem.IsAlive())
        {
            Destroy(gameObject);
        }
    }
}
