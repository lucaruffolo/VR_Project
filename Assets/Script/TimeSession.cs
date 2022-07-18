using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class TimeSession : MonoBehaviour
{
    public float sessionTime;
    public bool timerIsRunning = false;
    public bool sessionReady;
    public static List<float> timing;

    [SerializeField] public Text timeSession;

    private void Start()
    {
        sessionReady = false;
        timerIsRunning = true;
        timeSession.enabled = true;
        sessionTime = 10.0f;
    }
    void Update()
    {
        if (sessionReady)
        {
            if (timerIsRunning)
            {
                sessionTime -= Time.deltaTime;
                if (sessionTime < 120)
                {
                    timeSession.color = Color.red;
                }
                else
                    timeSession.color = Color.blue;
                string minutes = ((int)sessionTime / 60).ToString();
                string seconds = (sessionTime % 60).ToString("f2");
                timeSession.text = minutes + ":" + seconds;
            }
            if (sessionTime < 0)
            {
                /*if (GetComponent<StartLine>().listPlayer.Count != 0) {
                    for (int i = 0; i < GetComponent<StartLine>().listPlayer.Count; i++)
                    {
                        timing.Add(GetComponent<StartLine>().listPlayer[i].GetComponent<Timer>().best);
                    }
                }*/
                SceneManager.LoadScene(sceneName: "EndSession");
                GameAudio.instance.GetComponent<AudioSource>().Play();
            }
        }
    }
}
