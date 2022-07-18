using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.UI;

public class Director : NetworkBehaviour
{
    [SyncVar]
    public int playersConnected;
    public GameObject c2;
    public GameObject c3;
    public GameObject first;
    public GameObject second;

    void Update()
    {
        /*if (this.isLocalPlayer)
        {
            if (FinishLine.timing[0] <= FinishLine.timing[1])
            {
                first.active = true;
            }
        }*/

        if (this.isServer)
        {
            playersConnected = NetworkServer.connections.Count;
        }
        if (playersConnected == 2)
        {
            c2.active = true;
        }
        if (playersConnected == 3)
        {
            c2.active = true;
            c3.active = true;
        }
    }
}
