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
    public GameObject line;
    public GameObject session;
    public GameObject dayNight;

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
        }
    }
}
