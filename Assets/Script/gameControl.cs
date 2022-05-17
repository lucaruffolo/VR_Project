using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameControl : MonoBehaviour {

    public Vector3 restart;
    public Quaternion rotation;
    // Start is called before the first frame update
    void Start() {
       restart = new Vector3(82.89f, 5.156f, 70.6f);
       rotation = new Quaternion(0f, 0f, 0f, 1);
    }

    // Update is called once per frame
    void Update() {
        if (Input.GetKeyDown(KeyCode.R)) {
            transform.position = restart;
            transform.rotation = rotation;
        }
    }
}