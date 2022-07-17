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
        if(playersConnected == 1)
        {
            p1.GetComponent<Text>().enabled = true; 
            tp1.GetComponent<Text>().enabled = true;
            warmup.text = "WARMUP";
            if (line.GetComponent<StartLine>().listPlayer.Count != 0)
            {
                p1.text = line.GetComponent<StartLine>().listPlayer[0].GetComponent<gameControl>().PlayerName;
                if (line.GetComponent<StartLine>().listPlayer[0].GetComponent<Timer>().best == 99999.9f)
                    tp1.text = "DNF";
            }
        }
        if (playersConnected == 2)
        {
            p1.GetComponent<Text>().enabled = true;
            tp1.GetComponent<Text>().enabled = true;
            p2.GetComponent<Text>().enabled = true;
            tp2.GetComponent<Text>().enabled = true;
            if (line.GetComponent<StartLine>().listPlayer.Count != 0)
            {
                for (int i= 0; i<line.GetComponent<StartLine>().listPlayer.Count; i++)
                {
                    line.GetComponent<StartLine>().listPlayer[i].GetComponent<Timer>().sessionReady = true;
                    if(i == 1)
                    {
                        p2.text = line.GetComponent<StartLine>().listPlayer[1].GetComponent<gameControl>().PlayerName;
                        if (line.GetComponent<StartLine>().listPlayer[1].GetComponent<Timer>().best == 99999.9f)
                            tp2.text = "DNF";
                    }
                }
                
            }

            session.GetComponent<TimeSession>().sessionReady = true; //fa partire timer sessione
            dayNight.GetComponent<Cycle>().startDay = true; //fa partire ciclo giorno notte
        }
        if (playersConnected == 3)
        {
            p1.GetComponent<Text>().enabled = true;
            tp1.GetComponent<Text>().enabled = true;
            p2.GetComponent<Text>().enabled = true;
            tp2.GetComponent<Text>().enabled = true;
            p3.GetComponent<Text>().enabled = true;
            tp3.GetComponent<Text>().enabled = true;
            if (line.GetComponent<StartLine>().listPlayer.Count != 0)
            {
                for (int i = 0; i < line.GetComponent<StartLine>().listPlayer.Count; i++)
                {
                    line.GetComponent<StartLine>().listPlayer[i].GetComponent<Timer>().sessionReady = true;
                    if (i == 2)
                    {
                        p3.text = line.GetComponent<StartLine>().listPlayer[2].GetComponent<gameControl>().PlayerName;
                        if (line.GetComponent<StartLine>().listPlayer[2].GetComponent<Timer>().best == 99999.9f)
                            tp3.text = "DNF";
                    }
                }
                
            }
        }
    }
}
