using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WrongAudio : MonoBehaviour
{
    static private AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    static public void play()
    {

        audioSource.Play();

    }
}
