using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.UI;

public class Scoreboard : NetworkBehaviour
{
    [SyncVar]
    public int playersConnected;
    public Text p1;
    public Text tp1;
    public Text p2;
    public Text tp2;
    public Text p3;
    public Text tp3;
    public GameObject line;

    void Update()
    {
        if (this.isServer)
        {
            playersConnected = NetworkServer.connections.Count;
        }
        if(playersConnected == 1)
        {
            p1.GetComponent<Text>().enabled = true; 
            tp1.GetComponent<Text>().enabled = true;
            if (line.GetComponent<StartLine>().listPlayer.Count != 0)
            {
                //if (GetComponent<StartLine>().listPlayer[0].GetComponent<Timer>().best == 99999.9f)
                //    p1.text = "DNF";
            }
        }
        if (playersConnected == 2)
        {
            p1.GetComponent<Text>().enabled = true;
            tp1.GetComponent<Text>().enabled = true;
            p2.GetComponent<Text>().enabled = true;
            tp2.GetComponent<Text>().enabled = true;
        }
        if (playersConnected == 3)
        {
            p1.GetComponent<Text>().enabled = true;
            tp1.GetComponent<Text>().enabled = true;
            p2.GetComponent<Text>().enabled = true;
            tp2.GetComponent<Text>().enabled = true;
            p3.GetComponent<Text>().enabled = true;
            tp3.GetComponent<Text>().enabled = true;
        }
    }
}
