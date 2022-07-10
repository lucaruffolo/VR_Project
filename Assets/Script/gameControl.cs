using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameControl : MonoBehaviour {

    private Vector3 replay;
    private Quaternion replayRotation;
    private Rigidbody rb;
    public Vector3 restart;
    public Quaternion rotation;
    public int position;
    public bool arrived = false;
    public GameObject checkPoint;
    public int cpTaken;

    // Start is called before the first frame update

    void Start() {
        cpTaken = 0;
        position = 1;
        rb = GetComponent<Rigidbody>();
        replay = new Vector3(82.89f, 5.156f, 70.6f);
        restart = new Vector3(82.89f, 5.156f, 70.6f);
        rotation = new Quaternion(0f, 0f, 0f, 1);
        replayRotation = new Quaternion(0f, 0f, 0f, 1);
    }

    // Update is called once per frame
    void Update() {
        if (Input.GetKeyDown(KeyCode.Backspace)) {
            transform.position = restart;
            transform.rotation = rotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f); //reset velocità
        }
        if (Input.GetKeyDown(KeyCode.Return)) {
            transform.position = replay;
            transform.rotation = replayRotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocità
            Reset();
        }

        if (arrived == true)
        {
            //animazioni varie
            //Debug.Log("serie b");
            Restart();
        }
        Debug.Log(cpTaken);
    }

    private void Reset()
    {
        restart = replay;
        rotation = replayRotation;

        GetComponent<TimerScript>().delta = 0f;
        cpTaken = 0;
        checkPoint.GetComponent<CounterCp>().resetOneClick();
    }

    private void Restart()
    {
        transform.position = replay;
        transform.rotation = replayRotation;
        rb.Sleep();
        rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocità
        Reset();
        arrived = false;
    }
}