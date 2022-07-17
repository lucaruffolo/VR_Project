using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class speedometer : NetworkBehaviour
{
    [SerializeField] Text contakhm;
    [SerializeField] RectTransform barkhm;
    [SerializeField] GameObject barra;
    private Rigidbody rb;
    private Color white = Color.white;
    private Color red = Color.red;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        contakhm.enabled = false;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (this.isLocalPlayer && !PauseMenu.GameIsPaused)
        {
            barra.SetActive(true);
            contakhm.enabled = true;
            float vel = rb.velocity.magnitude * 0.5f;
            int v = (int)vel;
            Vector3 tmp1 = new Vector3(0.0f, 1.0f, 1.0f);
            tmp1.x = vel/25;
            if (tmp1.x <= 1)
            {
                barkhm.localScale = tmp1;
            }
            contakhm.text = v.ToString();
        }else
        { barra.SetActive(false); }

    }



}
