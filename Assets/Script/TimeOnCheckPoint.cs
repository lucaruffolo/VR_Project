using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeOnCheckPoint : MonoBehaviour
{
    public float timeLeftCp;
    public bool timerOnCp = false;
    [SerializeField] Text timeOnCp;
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
        if (timerOnCp)
        {
            if (timeLeftCp > 0)
            {
                timeOnCp.enabled = true;
                //timeOnCp.text = GetComponent<Timer>().TimeShowCp; da impl in timer
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
