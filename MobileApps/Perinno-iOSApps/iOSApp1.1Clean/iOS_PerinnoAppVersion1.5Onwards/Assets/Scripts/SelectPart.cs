using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SelectPart : MonoBehaviour {

    Material selectedPartMat;
    Material originalMat;
    //const float TIMER_TO_RESET_MAT = 5.0f;
    //float timerToResetMaterial = -1.0f;
    Transform selectedObj;
    //bool partSelected = false;
    ScriptAfterModelInstantiated scriptAFIInstance;
    // Use this for initialization
    void Start()
    {
        selectedPartMat = Resources.Load<Material>("Materials/scibble_green");

        Renderer renderer = gameObject.GetComponent<Renderer>();
        if (renderer == null)
        {
            Debug.Log("INFO: No Renderer Found");
            gameObject.AddComponent<MeshRenderer>();
            //gameObject.GetComponent<Renderer>().material = new Material(Shader.Find("Diffuse"));
            Renderer[] allRenderers = gameObject.GetComponentsInChildren<Renderer>();
            foreach (Renderer R in allRenderers)
            {
                R.gameObject.AddComponent<MeshCollider>();
            }
        }
        scriptAFIInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();
        scriptAFIInstance.BtnUITap.gameObject.SetActive(true);

    }

    // Update is called once per frame
    void Update()
    {

        if (gameObject.GetComponent<Renderer>() == null)
        {
            gameObject.AddComponent<MeshRenderer>();
            Renderer[] allRenderers = gameObject.GetComponentsInChildren<Renderer>();
            foreach (Renderer R in allRenderers)
            {
                R.gameObject.AddComponent<MeshCollider>();
            }
        }

        if (Input.touchCount == 1)
        {
            if (scriptAFIInstance.BtnUITap.gameObject.activeSelf)
            {
                scriptAFIInstance.BtnUITap.gameObject.SetActive(false);
            }
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = Camera.main.ScreenPointToRay(touch.position);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit))
                {
                    selectedObj = hit.transform;
                    originalMat = selectedObj.gameObject.GetComponent<Renderer>().sharedMaterial;
                    if (originalMat != selectedPartMat)
                    {
                        selectedObj.gameObject.GetComponent<Renderer>().material = selectedPartMat;
                    }
                    else
                        selectedObj.gameObject.SetActive(false);
                }
                else
                {
                    Debug.Log("No raycast hit");
                    if (!selectedObj.gameObject.activeSelf && !(EventSystem.current.IsPointerOverGameObject(touch.fingerId)))
                    {
                        selectedObj.gameObject.SetActive(true);
                    }
                    else
                    {
                        selectedObj.gameObject.GetComponent<Renderer>().material = originalMat; 
                    }
                }
            }
        }
    }
}
