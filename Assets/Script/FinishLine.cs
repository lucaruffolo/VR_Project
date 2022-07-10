using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLine : MonoBehaviour
{
    public GameObject cp;
    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;
        //fare i controlli che hai preso tutti i cp
        Debug.Log(player.GetComponent<TimerScript>().delta);
        if (player.GetComponent<gameControl>().cpTaken == cp.GetComponent<CounterCp>().numCp)
        {
            if (player.GetComponent<TimerScript>().delta < player.GetComponent<TimerScript>().finishTime)
            {
                player.GetComponent<TimerScript>().finishTime = player.GetComponent<TimerScript>().delta;
            }

            AggiornaClassifica();

            player.GetComponent<gameControl>().cpTaken = 0;
            cp.GetComponent<CounterCp>().resetOneClick();
            player.GetComponent<gameControl>().arrived = true;
        }
    }

    void AggiornaClassifica()
    {

    }
}
