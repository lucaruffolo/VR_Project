using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLine : MonoBehaviour
{
    public GameObject cp;
    public static float[] timing = new float[2];

    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;
        //Debug.Log(player.GetComponent<TimerScript>().delta);
        if (player.GetComponent<gameControl>().cpTaken > cp.GetComponent<CounterCp>().numCp || player.GetComponent<gameControl>().cpTaken == cp.GetComponent<CounterCp>().numCp)
        {
            if (player.GetComponent<Timer>().lapTime < player.GetComponent<Timer>().best)
            {
                player.GetComponent<Timer>().best = player.GetComponent<Timer>().lapTime;
                if(player.GetComponent<gameControl>().position == 0)
                {
                    timing[0] = player.GetComponent<Timer>().best;
                }
                else if(player.GetComponent<gameControl>().position == 1)
                {
                    timing[1] = player.GetComponent<Timer>().best;
                }
            }

            
            player.GetComponent<gameControl>().cpTaken = 0;
            player.GetComponent<gameControl>().listOfCpTaken.Clear();
           
            player.GetComponent<gameControl>().arrived = true;
        }
    }
}
