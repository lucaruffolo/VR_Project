using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class checkPoint : MonoBehaviour
{ 
    public bool oneclick = false;
    //public GameObject timeCheck; 
    //private Color visibile = new Color(0, 0, 0, 200);
    //private Color invisibile = new Color(0, 0, 0, 0);

    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;


        //riposizionamento
        Vector3 cp = transform.position;
        Vector3 posRespawn = new Vector3(cp.x, cp.y - 2, cp.z);
        Quaternion rotation = transform.rotation;
        player.GetComponent<gameControl>().restart = posRespawn;
        player.GetComponent<gameControl>().rotation = rotation;

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

        //timerOnCp
        player.GetComponent<TimeOnCheckPoint>().timerOnCp = true;
        player.GetComponent<TimeOnCheckPoint>().timeLeftCp = 3.0f;
    }
}
