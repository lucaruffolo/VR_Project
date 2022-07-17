using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartLine : MonoBehaviour
{
    public List<GameObject> listPlayer;
    private bool yetInGame = false;

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
            player.GetComponent<gameControl>().PlayerName = PlayerPrefs.GetString("namePlayer");
        }

        //player.GetComponent<Timer>().lapTime = 0.0f;
        /*foreach (GameObject i in listPlayer)
        {
            Debug.Log(player.GetComponent<gameControl>().PlayerName);
            Debug.Log(PlayerPrefs.GetString("namePlayer"));
        }*/
    }
}
