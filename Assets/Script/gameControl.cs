using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameControl : MonoBehaviour {

    private Vector3 replay;
    private Quaternion replayRotation;
    private Rigidbody rb;
    public Vector3 restart;
    public Quaternion rotation;
    

    // Start is called before the first frame update

    void Start() {
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
            rb.velocity.Set(0.0f, 0.0f, 0.0f); //reset velocit�
        }
        if (Input.GetKeyDown(KeyCode.Return)) {
            transform.position = replay;
            transform.rotation = replayRotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocit�
        }
    }
}