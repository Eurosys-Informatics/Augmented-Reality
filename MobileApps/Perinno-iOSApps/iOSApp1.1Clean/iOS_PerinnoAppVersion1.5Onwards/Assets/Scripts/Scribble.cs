using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scribble : MonoBehaviour
{
    TrailRenderer trailRenderer;// = new TrailRenderer();
    List<Vector3> touchpoints;
    bool scribbleDone = false;
    GameObject trailRendererGO;
    public GameObject trailRendererGOTemp;
    float offset = 10.0f;
    ScriptAfterModelInstantiated scriptAFIInstance;
 

	// Use this for initialization
	void Start () {
        Renderer renderer = gameObject.GetComponent<Renderer>();
        trailRendererGO = GameObject.Find("Line");
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
        //trailRenderer.material.color = Color.green;
        touchpoints = new List<Vector3>();
        scriptAFIInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();
        scriptAFIInstance.BtnUIScribble.gameObject.SetActive(true);
		
	}
	
	// Update is called once per frame
	void Update () 
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
            if(scriptAFIInstance.BtnUIScribble.gameObject.activeSelf == true)
            {
                scriptAFIInstance.BtnUIScribble.gameObject.SetActive(false);
            }
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                scribbleDone = false;
                trailRendererGOTemp = Instantiate(trailRendererGO);
            }
            if((touch.phase == TouchPhase.Began || touch.phase == TouchPhase.Moved))
            {
                Ray ray = Camera.main.ScreenPointToRay(touch.position);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit))
                {
                    touchpoints.Add(hit.point);
                    if (scribbleDone == false)
                    {
                        trailRendererGOTemp.tag = "ScribbleLine";
                        trailRendererGOTemp.transform.position = hit.point - ray.direction.normalized * offset;
                    }
                }
            }

            if(touch.phase == TouchPhase.Ended)
            {
                scribbleDone = true;
            }

        }

        if (scribbleDone)
        {
            /*lineRenderer.SetPositions(touchpoints.ToArray());
            scribbleDone = false;
            Debug.Log("total_points are: " + touchpoints.Count);
            Debug.Log("total_points are: " + touchpoints.ToArray().GetLength(0));
            for (var i = 0; i <= touchpoints.Count; ++i)
            {
                Debug.Log("points§§§§§§§ :" + touchpoints.ToArray().GetValue(i)); 
            }
                
            touchpoints.Clear();
            touchpoints = new List<Vector3>(); */
        }

		
	}
}
