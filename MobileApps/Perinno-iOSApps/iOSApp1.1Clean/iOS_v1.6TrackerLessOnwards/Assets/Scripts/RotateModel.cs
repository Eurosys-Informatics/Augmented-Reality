using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class RotateModel : MonoBehaviour {

    float rotationSpeed = 30.0f;
    ScriptAfterModelInstantiated scriptAFIInstance;
    ARKitInstantiatedModel aRKitInstantiatedInstance;
    Scene currentScene;
    // Use this for initialization
    void Start () {
        currentScene = SceneManager.GetActiveScene();
        if (!gameObject.GetComponent<BoxCollider>())
        {
            gameObject.AddComponent<BoxCollider>();
        }
        if (currentScene.name == "SceneUserLogin")
        {
            scriptAFIInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();
            scriptAFIInstance.BtnUIRotate.gameObject.SetActive(true);
        }
        else if (currentScene.name == "UnityARKitScene")
        {
            aRKitInstantiatedInstance = GameObject.Find("HitCubeParent").GetComponent<ARKitInstantiatedModel>();
            aRKitInstantiatedInstance.BtnUIRotate.gameObject.SetActive(true);
        }
        else
        {
            Debug.Log("ERROR: No Scene Found!");
        }


    }
	
	// Update is called once per frame
	void Update () 
    {
        if (Input.touchCount == 1)
        {

            if(currentScene.name == "SceneUserLogin")
            {
                if (scriptAFIInstance.BtnUIRotate.gameObject.activeSelf)
                {
                    scriptAFIInstance.BtnUIRotate.gameObject.SetActive(false);
                }
            }

            if(currentScene.name == "UnityARKitScene")
            {
                if (aRKitInstantiatedInstance.BtnUIRotate.gameObject.activeSelf)
                {
                    aRKitInstantiatedInstance.BtnUIRotate.gameObject.SetActive(false);
                }
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
