using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class RotateModel : MonoBehaviour {

    float rotationSpeed = 30.0f;
    ScriptAfterModelInstantiated scriptAFIInstance;
    // Use this for initialization
	void Start () {
        if(!gameObject.GetComponent<BoxCollider>())
        {
            gameObject.AddComponent<BoxCollider>();
        }
        scriptAFIInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();
        scriptAFIInstance.BtnUIRotate.gameObject.SetActive(true);
	}
	
	// Update is called once per frame
	void Update () 
    {
        if (Input.touchCount == 1)
        {
            if (scriptAFIInstance.BtnUIRotate.gameObject.activeSelf)
            {
                scriptAFIInstance.BtnUIRotate.gameObject.SetActive(false);
            }
            Touch touch = Input.GetTouch(0);
            if((touch.phase == TouchPhase.Moved) && !(EventSystem.current.IsPointerOverGameObject(touch.fingerId)))
            {
                float rotationX = Input.GetAxis("Mouse X") * rotationSpeed * Mathf.Deg2Rad;
                float rotationY = Input.GetAxis("Mouse Y") * rotationSpeed * Mathf.Deg2Rad;
                gameObject.transform.Rotate(Vector3.up, -rotationX);
                gameObject.transform.Rotate(Vector3.right, -rotationY);
            }
        }
	}
}
