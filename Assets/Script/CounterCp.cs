using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CounterCp : MonoBehaviour
{
    public GameObject[] childsG;
    public int cpTaken = 0;
    public  int numCp;
    // Start is called before the first frame update
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

    // Update is called once per frame
    void Update()
    {
        
    }

    public void resetOneClick()
    {
        for (int i = 0; i<numCp; i++)
        {
            childsG[i].GetComponent<checkPoint>().oneclick = false;
        }
    }
}
