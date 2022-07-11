using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameControl : MonoBehaviour
{

    private Vector3 replay;
    private Quaternion replayRotation;
    private Rigidbody rb;
    public Vector3 restart;
    public Quaternion rotation;
    public int position;
    public bool arrived = false;
    public int cpTaken = 0;
    public List<string> listOfCpTaken;
    //public GameObject checkPoint;

    void Start()
    {
        listOfCpTaken = new List<string>();
        cpTaken = 0;
        position = 1;
        rb = GetComponent<Rigidbody>();
        replay = new Vector3(82.89f, 5.156f, 70.6f);
        restart = new Vector3(82.89f, 5.156f, 70.6f);
        rotation = new Quaternion(0f, 0f, 0f, 1);
        replayRotation = new Quaternion(0f, 0f, 0f, 1);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Backspace))
        {
            transform.position = restart;
            transform.rotation = rotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f); //reset velocità
        }
        if (Input.GetKeyDown(KeyCode.Return))
        {
            transform.position = replay;
            transform.rotation = replayRotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocità
            Reset();
        }

        if (arrived == true)
        {
            Restart();
        }
        //Debug.Log(cpTaken);
    }

    private void Reset()
    {
        restart = replay;
        rotation = replayRotation;

        GetComponent<Timer>().lapTime = 0f;//reset timer
        cpTaken = 0;
        listOfCpTaken.Clear();
    }

    private void Restart()
    {
        transform.position = replay;
        transform.rotation = replayRotation;
        rb.Sleep();
        rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocità
        Reset();
        arrived = false;
    }

    public void addCpList(string cpName)
    {
        listOfCpTaken.Add(cpName);
    }
}