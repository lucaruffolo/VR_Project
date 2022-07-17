using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class checkPoint : NetworkBehaviour
{ 
    public bool oneclick = false;
    public AudioSource audioCp;
    //public GameObject timeCheck; 
    //private Color visibile = new Color(0, 0, 0, 200);
    //private Color invisibile = new Color(0, 0, 0, 0);
    private void Start()
    {
        audioCp.mute = true;
    }
    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;

        //riposizionamento
        Vector3 cp = transform.position;
        Vector3 posRespawn = new Vector3(cp.x, cp.y - 2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = posRespawn;
        player.GetComponent<gameControl>().rotation = rotation;

        //controllo cp
        bool yetTaken = false;
        foreach (string i in player.GetComponent<gameControl>().listOfCpTaken)
        {
            if (i == name)
                yetTaken = true;
        }

        if (!yetTaken)
        {
            oneclick = false;
            if (oneclick == false)
            {
                audioCp.mute = false;
                playAudioCp();
                if (!this.isLocalPlayer)
                {
                    audioCp.GetComponent<AudioSource>().enabled = false;
                }
                player.GetComponent<gameControl>().cpTaken += 1;
                player.GetComponent<gameControl>().addCpList(name);
                player.GetComponent<TimeOnCheckPoint>().timeOnCp.text = player.GetComponent<Timer>().TimeShowCp;
                oneclick = true;
            }
            //timerOnCp
            player.GetComponent<TimeOnCheckPoint>().timerOnCp = true;
            player.GetComponent<TimeOnCheckPoint>().timeLeftCp = 3.0f;
        }

        
    }

    public void playAudioCp()
    {
        audioCp.Play();
    }
}
