using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class checkPoint : MonoBehaviour
{
    public GameObject player;
    public GameObject timeCheck;
    private Color visibile = new Color(0, 0, 0, 200);
    private Color invisibile = new Color(0, 0, 0, 0);
    private float timer = 4f;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        if (timer < 3)
        {
            timer += Time.deltaTime;
            //Debug.Log(timer);
            timeCheck.GetComponent<Text>().color = visibile;
        }
        else
        {
            //Debug.Log("we");
            timeCheck.GetComponent<Text>().color = invisibile;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Vector3 cp = transform.position;
        Vector3 poseRespawn = new Vector3(cp.x, cp.y-2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = poseRespawn;
        player.GetComponent<gameControl>().rotation = rotation;
        ResetTimer();
    }

    private void ResetTimer()
    {
        timer = 0f;
    }
}
