using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class checkPoint : MonoBehaviour
{
    public GameObject player;
    public GameObject timeCheck;
    private bool cooldown = false;
    private Color visibile = new Color(0, 0, 0, 200);
    private Color invisibile = new Color(0, 0, 0, 0);
    private float startTime;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(transform.position);
        startTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        if (cooldown == true)
        {
            float t =  Time.time - startTime;
            Debug.Log(startTime);
            /*if (t < -3)
            {
                timeCheck.GetComponent<Text>().color = invisibile;
                cooldown = false;
            }*/
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Vector3 cp = transform.position;
        Vector3 poseRespawn = new Vector3(cp.x, cp.y-2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = poseRespawn;
        player.GetComponent<gameControl>().rotation = rotation;
        cooldown = true;
        timeCheck.GetComponent<Text>().color = visibile;
        //Debug.Log(GetComponent<gameControl>().restart);
        //Debug.Log(cooldown);
    }
}
