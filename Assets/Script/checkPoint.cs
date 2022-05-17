using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkPoint : MonoBehaviour
{
    public GameObject player;
    // Start is called before the first frame update
    void Start()
    {
        //Debug.Log(transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(cp);
    }

    private void OnTriggerEnter(Collider other)
    {
        Vector3 cp = transform.position;
        Vector3 poseRespawn = new Vector3(cp.x, cp.y-2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = poseRespawn;
        player.GetComponent<gameControl>().rotation = rotation;
        //Debug.Log(GetComponent<gameControl>().restart);
    }
}
