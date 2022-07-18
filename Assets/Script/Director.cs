using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class Director : NetworkBehaviour
{
    [SyncVar]
    public int playersConnected;
    public GameObject c2;
    public GameObject c3;

    void Update()
    {
        int vincitoretpm = 0;
        float minimotmp = TimeSession.timing[0];
        for(int i=0; i<TimeSession.timing.Count; i++)
        {
            if(TimeSession.timing[i] < minimotmp)
            {
                vincitoretpm = i;
                minimotmp = TimeSession.timing[i];
            }
        }

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
