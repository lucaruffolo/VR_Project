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
    public AudioSource audioCountDown;
    public bool oneTime = true;
    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        timeLeft = 3.0f;
        timerOn = true;
        countDown.enabled = false;
        GetComponent<VehicleControl>().enabledMovement = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (timerOn)
        {
            if (timeLeft > 0)
            {
                rb.constraints = RigidbodyConstraints.FreezeAll;
                if (oneTime)
                {
                    playAudioCountDown();
                    oneTime = false;
                }

                countDown.enabled = true;
                if (!this.isLocalPlayer)
                {
                    audioCountDown.GetComponent<AudioSource>().enabled = false;
                    countDown.GetComponent<Text>().enabled = false;
                }
                GetComponent<Timer>().timerIsRunning = false;
                if (timeLeft < 0.99)
                {
                    if(timeLeft < 0.20)
                    {
                        countDown.text = "VIA";
                    }    
                }
                else
                {
                    countDown.text = timeLeft.ToString("f0");
                }  
                timeLeft -= Time.deltaTime;
            }
            else
            {
                rb.constraints = RigidbodyConstraints.None;
                Debug.Log("Fine tempo");
                timeLeft = 0;
                timerOn = false;
                GetComponent<VehicleControl>().enabledMovement = true;
                countDown.enabled = false;
                GetComponent<Timer>().timerIsRunning = true;

                //riattivo suoni
                GetComponent<VehicleControl>().carSounds.HighEngine.GetComponent<AudioSource>().Play();
                GetComponent<VehicleControl>().carSounds.IdleEngine.GetComponent<AudioSource>().Play();
                GetComponent<VehicleControl>().carSounds.LowEngine.GetComponent<AudioSource>().Play();
                GetComponent<VehicleControl>().carSounds.switchGear.GetComponent<AudioSource>().Play();
                GetComponent<VehicleControl>().carSounds.nitro.GetComponent<AudioSource>().Play();
            }
        }

    }

    public void playAudioCountDown()
    {
        audioCountDown.Play();
    }
}
