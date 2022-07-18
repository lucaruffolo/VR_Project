using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartLine : MonoBehaviour
{
    public List<GameObject> listPlayer;
    private bool yetInGame = false;
    private int cont = 0;

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
            cont++;
        }
    }

    /*

    void Update()
    {
        if (listPlayer.Count > 1)
        {
            if (listPlayer[1].GetComponent<Timer>().best < listPlayer[0].GetComponent<Timer>().best)
            {
                listPlayer[0].GetComponent<gameControl>().position = 1;
                listPlayer[1].GetComponent<gameControl>().position = 0;
            }
            else
            {
                listPlayer[1].GetComponent<gameControl>().position = 0;
                listPlayer[0].GetComponent<gameControl>().position = 1;
            }
        }
    }
    */
}
