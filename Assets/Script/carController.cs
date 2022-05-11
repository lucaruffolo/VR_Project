using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class carController : MonoBehaviour
{
    public WheelCollider[] wheels;
    public float motorPower = 100;
    public float steerPower = 100;

    public GameObject centerOfMass;
    public Rigidbody rb;

    public GameObject leftWheel;
    public GameObject rightWheel;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.centerOfMass = centerOfMass.transform.localPosition;

    }

    // Update is called once per frame
    void Update() {

        //leftWheel.GetComponent<Transform>().rotation = new Quaternion(0, 0, 0, 1);
        //rightWheel.GetComponent<Transform>().rotation = new Quaternion(0, 0, 0, 1);

        foreach (var wheel in wheels) {
            if (Input.GetAxis("Vertical") >= 1)
                wheel.motorTorque = Input.GetAxis("Vertical") * ((motorPower * 5) / 4);
            else if(Input.GetAxis("Vertical") < 1)
                wheel.motorTorque = Input.GetAxis("Vertical") * ((motorPower * 10) / 4);
            Debug.Log(Input.GetAxis("Vertical"));
        }

        for (int i = 0; i < wheels.Length; i++) {
            if (i < 2) {
                wheels[i].steerAngle = Input.GetAxis("Horizontal") * steerPower;                
            }
        }
    }
}
