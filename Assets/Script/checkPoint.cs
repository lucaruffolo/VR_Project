using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class checkPoint : MonoBehaviour
{
    Vector3 cp;

    // Start is called before the first frame update
    void Start()
    {
        cp = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(cp);
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(cp);
        GetComponent<gameControl>().restart = cp;
    }
}
