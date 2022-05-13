using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameControl : MonoBehaviour {

    Vector3 start = new Vector3(82.89f, 5.156f, 70.6f);
    // Start is called before the first frame update
    void Start() {

    }

    // Update is called once per frame
    void Update() {
        if (Input.GetKeyDown(KeyCode.R)) {
            transform.position = start;
            transform.rotation = new Quaternion(0f,0f,0f,1);
        }
    }
}