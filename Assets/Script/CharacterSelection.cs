using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CharacterSelection : MonoBehaviour
{

    public GameObject[] players;
    public int selectedPlayer = 0;
    public InputField namePlayer;

    // Start is called before the first frame update
    public void NextPlayer()
    {
        players[selectedPlayer].SetActive(false);
        selectedPlayer = (selectedPlayer + 1) % players.Length;
        players[selectedPlayer].SetActive(true);

    }

    // Update is called once per frame
    public void PreviusPlayer()
    {
        players[selectedPlayer].SetActive(false);
        selectedPlayer--;
        if (selectedPlayer < 0)
            selectedPlayer += players.Length;
        players[selectedPlayer].SetActive(true);
    }


    public void StartGame()
    {
        if (namePlayer.text.Length > 0)
        {
            PlayerPrefs.SetString("namePlayer", namePlayer.text);
            PlayerPrefs.SetInt("selectedPlayer", selectedPlayer);
            SceneManager.LoadScene(2, LoadSceneMode.Single);
        }
        else
        {
            Debug.Log("Nome non inserito!");
        }
    }
}
