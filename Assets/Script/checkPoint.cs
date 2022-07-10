using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class checkPoint : MonoBehaviour
{
    public GameObject timeCheck;
    private Color visibile = new Color(0, 0, 0, 200);
    private Color invisibile = new Color(0, 0, 0, 0);
    public bool oneclick = false;
    //private float timer = 4f;

    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;
        //riposizionamento
        Vector3 cp = transform.position;
        Vector3 poseRespawn = new Vector3(cp.x, cp.y-2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = poseRespawn;
        player.GetComponent<gameControl>().rotation = rotation;

        //getione timer
        ResetTimer();

        //controllo cp
        bool yetTaken = false;
        foreach (string i in player.GetComponent<gameControl>().listOfCpTaken)
        {
            if (i == name)
                yetTaken = true;
        }

        if (!yetTaken)
        {
            oneclick = false;
            if (oneclick == false)
            {
                player.GetComponent<gameControl>().cpTaken += 1;
                player.GetComponent<gameControl>().addCpList(name);
                oneclick = true;
            }
        }   
    }

    private void ResetTimer()
    {
        //timer = 0f;
        /*while (timer < 3)
        {
            timer += 0.1f;
            Debug.Log("qui");
            timeCheck.GetComponent<Text>().color = visibile;
        }
        //Debug.Log("we");
        timeCheck.GetComponent<Text>().color = invisibile;*/
    }
}
