using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMplayer : MonoBehaviour
{

    public AudioClip[] Music; // »ç¿ëÇÒ BGM
    private AudioSource AS;
    private bool isPlaying;
    private float pauseTime = 2f;
    private float pauseTimer;

    void Awake()
    {
        AS = GetComponent<AudioSource>();
    }

    void Start()
    {
        isPlaying = false;
        pauseTimer = 0f;
        RandomPlay();
    }

    void Update()
    {
        if (isPlaying)
        {
            if (!AS.isPlaying)
            {
                isPlaying = false;
                pauseTimer = 0f;
            }
        }
        else
        {
            pauseTimer += Time.deltaTime;
            if (pauseTimer >= pauseTime)
            {
                RandomPlay();
                pauseTimer = 0f;
            }
        }
    }

    void RandomPlay()
    {
        AS.clip = Music[Random.Range(0, Music.Length)];
        AS.Play();
        isPlaying = true;
    }
}
