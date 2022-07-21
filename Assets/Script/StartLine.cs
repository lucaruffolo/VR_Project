using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartLine : MonoBehaviour
{
    public List<GameObject> listPlayer;
    private bool yetInGame = false;
    private int cont = 0;
    public bool multi;

    private void Start()
    {
        multi = false;
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
            if (listPlayer[1].GetComponent<Timer>().best < listPlayer[0].GetComponent<Timer>().best)
            {
                Debug.Log("scambio");
                listPlayer[0].GetComponent<gameControl>().position = 1;
                listPlayer[1].GetComponent<gameControl>().position = 0;
            }
            else if(listPlayer[1].GetComponent<Timer>().best > listPlayer[0].GetComponent<Timer>().best)
            {
                Debug.Log("MAX");
                listPlayer[1].GetComponent<gameControl>().position = 1;
                listPlayer[0].GetComponent<gameControl>().position = 0;
            }
        }
    }
   
}
