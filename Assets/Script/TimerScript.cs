using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimerScript : MonoBehaviour
{
    public Text timer;
    private float startTime;
    private bool finishSession = false;
    // Start is called before the first frame update
    void Start()
    {
        startTime = 10.00f; //10 min = 600.00f
    }

    // Update is called once per frame
    void Update()
    {
        float t = startTime - Time.time;
        if (!finishSession)
        {
            string minutes = ((int)t / 60).ToString();
            string seconds = (t % 60).ToString("f2");
            //Debug.Log(seconds);
            timer.text = minutes + ":" + seconds;

            if (((int)t / 60) <= 3)
            {
                timer.color = Color.red;
            }
        }
        
        if(t < 0)
        {
            finishSession = true;
            Destroy(GetComponent<TimerScript>().timer);
            //Debug.Log("fine");
        }
    }
}
