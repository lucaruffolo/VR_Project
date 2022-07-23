using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetTimer : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        GameObject player = other.gameObject.transform.parent.transform.parent.gameObject;
        player.GetComponent<Timer>().lapTime = 0.0f;
        player.GetComponent<gameControl>().listOfCpTaken.Clear();
        player.GetComponent<gameControl>().cpTaken = 0;
    }
}
