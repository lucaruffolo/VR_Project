using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CounterCp : MonoBehaviour
{
    public GameObject[] childsG;
    // Start is called before the first frame update
    void Start()
    {
        childsG = new GameObject[transform.childCount];
        int i = 0;
        foreach (Transform child in transform)
        {
            childsG[i] = child.gameObject;
            i++;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
