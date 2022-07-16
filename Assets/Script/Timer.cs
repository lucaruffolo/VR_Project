using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class Timer : NetworkBehaviour
{
    public float lapTime = 0.0f;
    public bool timerIsRunning = false;
    public float best;

    [SerializeField] public Text timeRacePlayer;
    public string TimeShowCp;

    private void Start()
    {
        timerIsRunning = false;
        timeRacePlayer.enabled = false;
    }
    void Update()
    {
      //  if (this.isLocalPlayer)
      //  {
            timeRacePlayer.enabled = true;
            if (timerIsRunning)
            {
                lapTime += Time.deltaTime;
                string minutes = ((int)lapTime / 60).ToString();
                string seconds = (lapTime % 60).ToString("f2");
                timeRacePlayer.text = minutes + ":" + seconds;

                TimeShowCp = minutes + ":" + seconds;
            }
       // }
    }
}
