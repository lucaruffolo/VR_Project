using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartLine : MonoBehaviour
{
    public List<GameObject> listPlayer;
    private bool yetInGame = false;
    private int cont = 0;
    public bool multi;
    public bool oneClick;

    private void Start()
    {
        multi = false;
        oneClick = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;
        
        foreach(GameObject i in listPlayer)
        {
            if (i == player)
                yetInGame = true;
        }

        if (!yetInGame)
        {
            listPlayer.Add(player);
            player.GetComponent<gameControl>().position = cont;
            cont += 1;
            if(cont == 2)
            {
                multi = true;
            }
        }
    }

    

    void Update()
    {
        if (multi)
        {
            /*if (oneClick) spostare su scoreboard
            {
                listPlayer[0].transform.position = new Vector3(270.65f, 33.59f, 53.0f);
                listPlayer[0].transform.rotation = new Quaternion(0f, 0f, 0f, 1);
                listPlayer[1].transform.position = new Vector3(270.65f, 33.59f, 53.0f);
                listPlayer[1].transform.rotation = new Quaternion(0f, 0f, 0f, 1);
                oneClick = false;
            }*/ 
            if (listPlayer[1].GetComponent<Timer>().best < listPlayer[0].GetComponent<Timer>().best)
            {
                listPlayer[0].GetComponent<gameControl>().position = 1;
                listPlayer[1].GetComponent<gameControl>().position = 0;
            }
            else if(listPlayer[1].GetComponent<Timer>().best > listPlayer[0].GetComponent<Timer>().best)
            {
                listPlayer[1].GetComponent<gameControl>().position = 1;
                listPlayer[0].GetComponent<gameControl>().position = 0;
            }
        }
    }
   
}
