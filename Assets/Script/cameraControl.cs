using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cameraControl : MonoBehaviour
{
    [SerializeField] Camera cameraInFirst;
    [SerializeField] Camera cameraInThird;

    // Start is called before the first frame update
    void Start()
    {
        cameraInFirst.enabled = false;
        cameraInThird.enabled = true;        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.V) && cameraInFirst.enabled == false) {
            cameraInFirst.enabled = true;
            cameraInThird.enabled = false;

        } else if (Input.GetKeyDown(KeyCode.V) && cameraInThird.enabled == false) {
            cameraInThird.enabled = true;
            cameraInFirst.enabled = false;
        } 
    }
}
