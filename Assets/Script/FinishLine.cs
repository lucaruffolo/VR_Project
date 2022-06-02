using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FinishLine : MonoBehaviour
{
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        //fare i controlli che hai preso tutti i cp
        Debug.Log(player.GetComponent<TimerScript>().delta);
        if(player.GetComponent<TimerScript>().delta < player.GetComponent<TimerScript>().finishTime)
        {
            player.GetComponent<TimerScript>().finishTime = player.GetComponent<TimerScript>().delta;
            //scena medaglie
        }
        player.GetComponent<gameControl>().arrived = true;
    }
}
