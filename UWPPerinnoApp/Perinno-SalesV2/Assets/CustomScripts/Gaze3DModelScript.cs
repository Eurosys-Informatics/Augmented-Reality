
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Gaze3DModelScript : MonoBehaviour
{
    HoloToolkit.Unity.InputModule.GazeManager gazeManager;
    GameObject childBeingGazed;
    const float TIMER_FOR_HIGHLIGHT = 2.0f;
    const float TIMER_TO_RESET_HIGHLIGHT = 30.0f;
    float targetTime = TIMER_FOR_HIGHLIGHT;
    float timeToResetOrgColor;
    Color originalColor;
    bool highlighted = false;

    //HoloToolkit.Unity.UX.BoundingBox boundingBoxPrefab;


    // Use this for initialization
    void Start()
    {
        gazeManager = GameObject.Find("InputManager").GetComponent<HoloToolkit.Unity.InputModule.GazeManager>();
        //boundingBoxPrefab = Instantiate(Resources.Load("BoundingBoxBasic")) as HoloToolkit.Unity.UX.BoundingBox;
    }

    // Update is called once per frame
    void Update()
    {
        childBeingGazed = gazeManager.HitObject;

        if (childBeingGazed != null && gameObject == childBeingGazed)
        {
            targetTime -= Time.deltaTime;
            timeToResetOrgColor = TIMER_TO_RESET_HIGHLIGHT;
            if (targetTime <= 0.0f && !highlighted)
            {
                originalColor = gameObject.GetComponent<Renderer>().material.color;
                gameObject.GetComponent<Renderer>().material.color = Color.green;
                if (childBeingGazed.GetComponent<HoloToolkit.Unity.InputModule.HandDraggable>() == null)
                {
                    gameObject.AddComponent<HoloToolkit.Unity.InputModule.HandDraggable>();
                   // gameObject.AddComponent<HoloToolkit.Unity.UX.BoundingBoxRig>();
                }

                //gameObject.GetComponent<HoloToolkit.Unity.UX.BoundingBoxRig>().BoundingBoxPrefab = boundingBoxPrefab;
                highlighted = true;
            }
        }

        else
        {
            targetTime = TIMER_FOR_HIGHLIGHT;
            timeToResetOrgColor -= Time.deltaTime;

            if (timeToResetOrgColor <= 0.0f && highlighted)
            {
                gameObject.GetComponent<Renderer>().material.color = originalColor;
                highlighted = false;
               // Destroy(gameObject.GetComponent<HoloToolkit.Unity.UX.BoundingBoxRig>());
            }
        }
    }

}

