using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using UnityEngine.SceneManagement;

public class gameControl : NetworkBehaviour
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
    public GameObject winner;

    void Start()
    {
        listOfCpTaken = new List<string>();
        cpTaken = 0;
        rb = GetComponent<Rigidbody>();
        replay = new Vector3(270.65f, 33.59f, 53.0f);
        restart = new Vector3(270.65f, 33.59f, 53.0f);
        rotation = new Quaternion(0f, 0f, 0f, 1);
        replayRotation = new Quaternion(0f, 0f, 0f, 1);
    }

    void Update()
    {
        DontDestroyOnLoad(transform.gameObject);
        if(SceneManager.GetActiveScene().name == "EndSession")
        {
            string namePlayer = PlayerPrefs.GetString("namePlayer");
            if (this.isLocalPlayer)
            {
                Debug.Log(position);
                if (position == 0)
                {
                    winner.GetComponent<TextMesh>().text = namePlayer;
                    winner.SetActive(true);
                    transform.position = new Vector3(329.7f, 194.79f, 803.5f);
                    transform.rotation = new Quaternion(0f, 180f, 0f, 1);
                }

                if(position == 1)
                {
                    winner.GetComponent<TextMesh>().text = namePlayer;
                    winner.SetActive(true);
                    transform.position = new Vector3(326.5f, 193.4f, 803.5f);
                    transform.rotation = new Quaternion(0f, 180f, 0f, 1);
                }
            }
            else
            {
                Debug.Log("c"+position);
                if (position == 0)
                {
                    transform.position = new Vector3(329.7f, 194.79f, 803.5f);
                    transform.rotation = new Quaternion(0f, 180f, 0f, 1);
                }
                if (position == 1)
                {
                    transform.position = new Vector3(326.5f, 193.4f, 803.5f);
                    transform.rotation = new Quaternion(0f, 180f, 0f, 1);
                }
            }
        }

        if (Input.GetKeyDown(KeyCode.Backspace) && !PauseMenu.GameIsPaused)
        {
            transform.position = replay;
            transform.rotation = replayRotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocità
            Reset();
        }
        
        if (Input.GetKeyDown(KeyCode.Return) && !PauseMenu.GameIsPaused)
        {
            transform.position = restart;
            transform.rotation = rotation;
            rb.Sleep();
            rb.velocity.Set(0.0f, 0.0f, 0.0f); //reset velocità
            GetComponent<TimeOnCheckPoint>().timeOnCp.enabled = false;
            GetComponent<TimeOnCheckPoint>().timerOnCp = false;
            if (this.isLocalPlayer)
            {
                if (listOfCpTaken.Count == 0)
                {
                    GetComponent<Timer>().lapTime = 0f;
                    GetComponent<VehicleControl>().enabledMovement = false;
                    GetComponent<StartingCountDown>().oneTime = true;
                    GetComponent<StartingCountDown>().timerOn = true;
                    GetComponent<StartingCountDown>().timeLeft = 3.0f;
                    GetComponent<VehicleControl>().carSounds.HighEngine.GetComponent<AudioSource>().Stop();
                    GetComponent<VehicleControl>().carSounds.IdleEngine.GetComponent<AudioSource>().Stop();
                    GetComponent<VehicleControl>().carSounds.LowEngine.GetComponent<AudioSource>().Stop();
                    GetComponent<VehicleControl>().carSounds.switchGear.GetComponent<AudioSource>().Stop();
                }
            }
        }

        if (arrived == true)
        {
            Restart();
        }
    }

    private void Reset()
    {
        restart = replay;
        rotation = replayRotation;
        //if (this.isLocalPlayer)
        //{
            GetComponent<Timer>().lapTime = 0f;//reset timer
            GetComponent<TimeOnCheckPoint>().timeOnCp.enabled = false;
            GetComponent<TimeOnCheckPoint>().timerOnCp = false;
            GetComponent<VehicleControl>().enabledMovement = false;
            GetComponent<StartingCountDown>().oneTime = true;
            GetComponent<StartingCountDown>().timerOn = true;
            GetComponent<StartingCountDown>().timeLeft = 3.0f;
            GetComponent<VehicleControl>().carSounds.HighEngine.GetComponent<AudioSource>().Stop();
            GetComponent<VehicleControl>().carSounds.IdleEngine.GetComponent<AudioSource>().Stop();
            GetComponent<VehicleControl>().carSounds.LowEngine.GetComponent<AudioSource>().Stop();
            GetComponent<VehicleControl>().carSounds.switchGear.GetComponent<AudioSource>().Stop();
            cpTaken = 0;
            listOfCpTaken.Clear();
       // }
    }

    private void Restart()
    {
        transform.position = replay;
        transform.rotation = replayRotation;
        rb.Sleep();
        rb.velocity.Set(0.0f, 0.0f, 0.0f);//reset velocità  //sotto abilitato
        Reset();
        arrived = false;
    }

    public void addCpList(string cpName)
    {
        listOfCpTaken.Add(cpName);
    }
}