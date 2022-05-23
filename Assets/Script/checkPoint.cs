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
    private float duration = 3f;
    private float timer;
    private bool cooldown = false;

    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        if (timer > 0.5)
        {
            timer -= Time.deltaTime;
            Debug.Log(timer);
            
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Vector3 cp = transform.position;
        Vector3 poseRespawn = new Vector3(cp.x, cp.y-2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = poseRespawn;
        player.GetComponent<gameControl>().rotation = rotation;
        timeCheck.GetComponent<Text>().color = visibile;
        ResetTimer();
    }

    private void ResetTimer()
    {
        timer = 3f;
    }
}
