using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkPoint : MonoBehaviour
{

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
        //Debug.Log(other);
        Vector3 cp = new Vector3(100, 5, 70);
        GetComponent<gameControl>().restart = cp;
    }
}
