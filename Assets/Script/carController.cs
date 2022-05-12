using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class carController : MonoBehaviour
{
    private const int FRONT_LEFT = 0;
    private const int FRONT_RIGHT = 1;
    private const int REAR_LEFT = 2;
    private const int REAR_RIGHT = 3;

    [SerializeField] WheelCollider[] wheelsColliders;
    [SerializeField] Transform[] wheelsObjTransforms;

    public float acceleration = 500f;
    public float breakingForce = 300f;
    public float maxTurnAngle = 15f;

    private float currentAcceleration = 0f;
    private float currentBreakForce = 0f;
    private float currentTurnAngle = 0f;

    private void FixedUpdate() {
        currentAcceleration = acceleration * Input.GetAxis("Vertical");
        
        if (Input.GetKey(KeyCode.Space))
            currentBreakForce = breakingForce;
        else
            currentBreakForce = 0f;

        //accellerazione ruote frontali
        wheelsColliders[FRONT_LEFT].motorTorque = currentAcceleration;
        wheelsColliders[FRONT_RIGHT].motorTorque = currentAcceleration;

        //freno a tutte e 4 le ruote
        foreach (WheelCollider i in wheelsColliders){
            i.brakeTorque = currentBreakForce;
        }

        //sterzo
        currentTurnAngle = maxTurnAngle * Input.GetAxis("Horizontal");

        wheelsColliders[FRONT_LEFT].steerAngle = currentTurnAngle;
        wheelsColliders[FRONT_RIGHT].steerAngle = currentTurnAngle;

        // Aggiorno movimento grafico di ogni singola ruota
        for (int i = 0; i < wheelsColliders.Length; i++){
            UpdateWheel(wheelsColliders[i], wheelsObjTransforms[i]);
        }            

        //Debug.Log(currentAcceleration);
    }

    void UpdateWheel(WheelCollider col, Transform transform) {
        Vector3 pos;
        Quaternion rot;
        col.GetWorldPose(out pos, out rot);
        transform.position = pos;
        transform.rotation = rot;
    }
}

