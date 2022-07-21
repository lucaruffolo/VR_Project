using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class FinishLine : NetworkBehaviour
{
    public GameObject cp;
    public static float[] timing = new float[2];

    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;
        Debug.Log(player);
        Debug.Log(player.GetComponent<Timer>().lapTime);
        Debug.Log(player.GetComponent<Timer>().best);

        if (player.GetComponent<gameControl>().cpTaken > cp.GetComponent<CounterCp>().numCp || player.GetComponent<gameControl>().cpTaken == cp.GetComponent<CounterCp>().numCp)
        {
            Debug.Log("1");
            if (player.GetComponent<Timer>().lapTime < player.GetComponent<Timer>().best)
            {
                Debug.Log("2");
                player.GetComponent<Timer>().best = player.GetComponent<Timer>().lapTime;
                if(GetComponent<StartLine>().listPlayer[0] == player)
                {
                    GetComponent<StartLine>().listPlayer[0].GetComponent<Timer>().best = player.GetComponent<Timer>().best;
                    GetComponent<StartLine>().listPlayer[0].GetComponent<gameControl>().arrived = true;
                    player.GetComponent<gameControl>().arrived = true;
                }
                if (GetComponent<StartLine>().listPlayer[1] == player)
                {
                    GetComponent<StartLine>().listPlayer[1].GetComponent<Timer>().best = player.GetComponent<Timer>().best;
                    GetComponent<StartLine>().listPlayer[1].GetComponent<gameControl>().arrived = true;
                    player.GetComponent<gameControl>().arrived = true;
                }
            }


            player.GetComponent<gameControl>().cpTaken = 0;
            player.GetComponent<gameControl>().listOfCpTaken.Clear();

            player.GetComponent<gameControl>().arrived = true;
        }
    }
}
