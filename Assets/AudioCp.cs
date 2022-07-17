using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class AudioCp : NetworkBehaviour
{
    public AudioSource audioCp;

    public void playAudioCp()
    {
        if(this.isLocalPlayer)
            audioCp.Play();
    }
}
