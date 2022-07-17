using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class TimeOnCheckPoint : NetworkBehaviour
{
    public float timeLeftCp;
    public bool timerOnCp = false;
    public Text timeOnCp;
    // Start is called before the first frame update
    void Start()
    {
        timeLeftCp = 3.0f;
        timerOnCp = false;
        timeOnCp.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (this.isLocalPlayer)
        {
            if (timerOnCp)
            {
                if (timeLeftCp > 0)
                {
                    timeOnCp.enabled = true;
                    timeLeftCp -= Time.deltaTime;
                }
                else
                {
                    Debug.Log("Fine tempo cp");
                    timeLeftCp = 0;
                    timerOnCp = false;
                    timeOnCp.enabled = false;
                }
            }
        }
    }
}
