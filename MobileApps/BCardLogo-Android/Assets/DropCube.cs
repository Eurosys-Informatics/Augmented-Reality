using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DropCube : MonoBehaviour {
    public float fallSpeed = 25.0f;
        // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        transform.Translate(Vector3.down * fallSpeed * Time.deltaTime, Space.World);
       // transform.Rotate(Vector3.forward, spinSpeed * Time.deltaTime);

    }
}
