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
            /*if (line.GetComponent<StartLine>().listPlayer.Count != 0)
            {
                for (int i = 0; i < line.GetComponent<StartLine>().listPlayer.Count; i++)
                {
                    line.GetComponent<StartLine>().listPlayer[i].GetComponent<Timer>().sessionReady = true;
                    if (oneClick2)
                    {
                        line.GetComponent<StartLine>().listPlayer[1].GetComponent<gameControl>().position = 2;
                        p2.text = line.GetComponent<StartLine>().listPlayer[1].GetComponent<gameControl>().PlayerName;
                        if (line.GetComponent<StartLine>().listPlayer[i].GetComponent<Timer>().best == 99999.9f)
                        {
                            tp1.text = "DNF";
                            tp2.text = "DNF";
                        }
                        oneClick2 = false;
                    }
                }

            }*/

            session.GetComponent<TimeSession>().sessionReady = true; //fa partire timer sessione
            dayNight.GetComponent<Cycle>().startDay = true; //fa partire ciclo giorno notte
        }
    }
}
