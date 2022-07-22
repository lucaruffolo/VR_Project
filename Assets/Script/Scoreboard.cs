using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.UI;

public class Scoreboard : NetworkBehaviour
{
    [SyncVar]
    public int playersConnected;
    public Text warmup;
    public GameObject session;
    public GameObject dayNight;
    public GameObject panel1;
    public GameObject panel2;
    public Text p1;
    public Text tp1;

    void Update()
    {
        if (this.isServer)
        {
            playersConnected = NetworkServer.connections.Count;
        }
        if (playersConnected == 1)
        {
            warmup.text = "WARMUP";
            warmup.color = Color.blue;
        }
        if (playersConnected == 2)
        {
            session.GetComponent<TimeSession>().sessionReady = true; //fa partire timer sessione
            dayNight.GetComponent<Cycle>().startDay = true; //fa partire ciclo giorno notte
            panel1.active = false;
            panel2.active = true;
            p1.enabled = true;
            tp1.enabled = true;
            p1.color = Color.white;
            tp1.color = Color.white;
        }
    }
}
