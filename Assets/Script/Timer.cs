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
    public bool sessionReady;

    [SerializeField] public Text timeRacePlayer;
    public string TimeShowCp;

    private void Start()
    {
        sessionReady = false;
        best = 99999.9f;
        timerIsRunning = false;
        timeRacePlayer.enabled = false;
    }
    void Update()
    {
        if (sessionReady)
        {
            timeRacePlayer.enabled = true;

            if (!this.isLocalPlayer)
            {
                timeRacePlayer.GetComponent<Text>().enabled = false;
            }

            if (timerIsRunning)
            {
                lapTime += Time.deltaTime;
                string minutes = ((int)lapTime / 60).ToString();
                string seconds = (lapTime % 60).ToString("f2");
                timeRacePlayer.text = minutes + ":" + seconds;
                TimeShowCp = minutes + ":" + seconds;
            }
        }
    }
}
