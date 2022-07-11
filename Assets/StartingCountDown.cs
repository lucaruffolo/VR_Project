using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class StartingCountDown : NetworkBehaviour
{
    public float timeLeft;
    public bool timerOn = false;
    // Start is called before the first frame update
    void Start()
    {
        timeLeft = 3.0f;
        timerOn = true;
        GetComponent<carController>().enabledMovement = false;
    }

    // Update is called once per frame
    void Update()
    {
        //if (this.isLocalPlayer)
        //{
            if (timerOn)
            {
                if (timeLeft > 0)
                {
                    timeLeft -= Time.deltaTime;
                }
                else
                {
                    Debug.Log("Fine tempo");
                    timeLeft = 0;
                    timerOn = false;
                    GetComponent<carController>().enabledMovement = true;
                }
            }
        //} 
    }
}
