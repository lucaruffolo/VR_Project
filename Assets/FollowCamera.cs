using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class FollowCamera : NetworkBehaviour
{

    bool thirdCamera = true;
    bool firstCamera = false;
    void Start()
    {
        if (this.isLocalPlayer)
        {
            GameObject.FindGameObjectWithTag("CameraFirst").GetComponent<Cinemachine.CinemachineVirtualCamera>().enabled = false;
            GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().enabled = true;
            GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().Follow = gameObject.transform;
            GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().LookAt = gameObject.transform;

        }
    }

    void Update()
    {
        if (this.isLocalPlayer)
        {
            if (Input.GetKeyDown(KeyCode.V) && thirdCamera == false)
            {
                firstCamera = false;
                thirdCamera = true;
                GameObject.FindGameObjectWithTag("CameraFirst").GetComponent<Cinemachine.CinemachineVirtualCamera>().enabled = false;
                GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().enabled = true;
                GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().Follow = gameObject.transform;
                GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().LookAt = gameObject.transform;
            }
            else if (Input.GetKeyDown(KeyCode.V) && firstCamera == false)
            {
                firstCamera = true;
                thirdCamera = false;
                GameObject.FindGameObjectWithTag("CameraFirst").GetComponent<Cinemachine.CinemachineVirtualCamera>().enabled = true;
                GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Cinemachine.CinemachineVirtualCamera>().enabled = false;
                GameObject.FindGameObjectWithTag("CameraFirst").GetComponent<Cinemachine.CinemachineVirtualCamera>().Follow = gameObject.transform;
                GameObject.FindGameObjectWithTag("CameraFirst").GetComponent<Cinemachine.CinemachineVirtualCamera>().LookAt = gameObject.transform;
            }
        }
    }
}



 