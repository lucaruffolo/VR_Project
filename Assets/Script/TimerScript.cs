using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour
{
    public Text timer;
    public Text timeRace;
    private float startTime;
    private float startTimeRace;
    private bool finishSession = false;
    // Start is called before the first frame update
    void Start()
    {
        startTime = 20.00f; //10 min = 600.00f
        startTimeRace = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        //timer sessione
        float t = startTime - Time.time;
        float delta = Time.time - startTimeRace;
        if (!finishSession)
        {
            string minutes = ((int)t / 60).ToString();
            string seconds = (t % 60).ToString("f0");


            //timer gara
            string minutesRace = ((int)delta / 60).ToString();
            string secondsRace = (delta % 60).ToString("f2");
            timeRace.text = minutesRace + ":" + secondsRace;
            //Debug.Log(seconds);
            if ((t % 60) <= 9)
            {
                timer.text = minutes + ":0" + seconds;
            }
            else
                timer.text = minutes + ":" + seconds;
            

            if (((int)t / 60) <= 3)
            {
                timer.color = Color.red;
            }
        
        
            if(t < 0)
            {
                finishSession = true;
                Destroy(GetComponent<TimerScript>().timer);
                GetComponent<TimerScript>().timer = null;
            
                Destroy(GetComponent<TimerScript>().timeRace);
                GetComponent<TimerScript>().timeRace = null;
                //Debug.Log("fine");
            }
        }
    }
}
