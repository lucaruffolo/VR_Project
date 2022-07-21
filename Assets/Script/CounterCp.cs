using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CounterCp : MonoBehaviour
{
    public GameObject[] childsG;
    public int numCp;

    void Start()
    {
        numCp = transform.childCount;
        childsG = new GameObject[transform.childCount];
        int i = 0;
        foreach (Transform child in transform)
        {
            childsG[i] = child.gameObject;
            i++;
        }
    }
}
