using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class endGame : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Invoke("backhome", 60f);  // Time in seconds

    }
    public void backhome()
    {
        SceneManager.LoadScene("Menu");
    }
}
