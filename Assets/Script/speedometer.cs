using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class speedometer : NetworkBehaviour
{
    [SerializeField] Text contakhm;
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
        if (this.isLocalPlayer)
        {
            contakhm.enabled = true;
            float vel = rb.velocity.magnitude * 0.5f;
            int v = (int)vel;
            contakhm.text = v.ToString();
        }
    }



}
