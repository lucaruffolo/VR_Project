using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine;
using UnityEngine.UI;

public class speedometer : MonoBehaviour
{
    [SerializeField] Text contakhm;
    [SerializeField] Light fari;
    private Rigidbody rb;
    private Color white = Color.white;
    private Color red = Color.red;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        float vel = rb.velocity.magnitude * 0.5f;
        int v = (int) vel;
        contakhm.text = v.ToString();
        if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.Space) || Input.GetKey(KeyCode.DownArrow)) {
            fari.enabled = true;
        }else {
            fari.enabled = false;
        }
    }

}
