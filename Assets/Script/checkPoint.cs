using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class checkPoint : MonoBehaviour
{
    public GameObject player;
    public GameObject timeCheck;
    public GameObject counter;
    private Color visibile = new Color(0, 0, 0, 200);
    private Color invisibile = new Color(0, 0, 0, 0);
    public bool oneclick = false;
    //private float timer = 4f;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        //riposizionamento
        Vector3 cp = transform.position;
        Vector3 poseRespawn = new Vector3(cp.x, cp.y-2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = poseRespawn;
        player.GetComponent<gameControl>().rotation = rotation;

        //getione timer
        ResetTimer();

        //controllo cp
        if (oneclick == false)
        {
            counter.GetComponent<CounterCp>().cpTaken += 1;
            oneclick = true;
        }
        
    }

    private void ResetTimer()
    {
        //timer = 0f;
        /*while (timer < 3)
        {
            timer += 0.1f;
            Debug.Log("qui");
            timeCheck.GetComponent<Text>().color = visibile;
        }
        //Debug.Log("we");
        timeCheck.GetComponent<Text>().color = invisibile;*/
    }
}
