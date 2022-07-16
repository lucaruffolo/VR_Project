using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TimeSession : MonoBehaviour
{
    public float sessionTime;
    public bool timerIsRunning = false;

    [SerializeField] public Text timeSession;

    private void Start()
    {
        timerIsRunning = true;
        timeSession.enabled = true;
        sessionTime = 100.0f;
    }
    void Update()
    {
        if (timerIsRunning)
        {
            sessionTime -= Time.deltaTime;
            string minutes = ((int)sessionTime / 60).ToString();
            string seconds = (sessionTime % 60).ToString("f2");
            timeSession.text = minutes + ":" + seconds;
        }
        if(sessionTime < 0)
        {
            SceneManager.LoadScene(sceneName: "EndSession");
        }
    }
}
