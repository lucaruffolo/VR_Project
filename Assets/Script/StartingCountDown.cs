using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class StartingCountDown : NetworkBehaviour
{
    public float timeLeft;
    public bool timerOn = false;
    [SerializeField] Text countDown;
    // Start is called before the first frame update
    void Start()
    {
        timeLeft = 3.0f;
        timerOn = true;
        countDown.enabled = true;
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
                countDown.enabled = true;
                GetComponent<Timer>().timerIsRunning = false;
                if (timeLeft < 0.99)
                {
                    countDown.text = "VIA";
                }
                else
                {
                    countDown.text = timeLeft.ToString("f0");
                }  
                timeLeft -= Time.deltaTime;
            }
            else
            {
                Debug.Log("Fine tempo");
                timeLeft = 0;
                timerOn = false;
                GetComponent<carController>().enabledMovement = true;
                countDown.enabled = false;
                GetComponent<Timer>().timerIsRunning = true;
            }
        }
        //} 
    }
}
