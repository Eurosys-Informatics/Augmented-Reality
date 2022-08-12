using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instantiated3DModelScript : MonoBehaviour {
    Transform[] childTransform;
    Vector3[] targetPosition;
    const float SPEED_EXPLODE = 0.05f;
    Vector3[] direction;
    const float TRANSLATION_FACTOR = 2.25f;
    

    // Use this for initialization
    void Start ()
    {
        Debug.Log("INFO: In Start of instantiated model script to explode the mode");
        childTransform = GetComponentsInChildren<Transform>();
        targetPosition = new Vector3[childTransform.Length];
        direction = new Vector3[childTransform.Length];
        Debug.Log("INFO: Total child in the instantiated object " + childTransform.Length);
        int childIdx = 0;
        foreach (Transform child in childTransform)
        {
            if(child.parent != null) //as it also has the parent component and we dont want to include that
            {
                Debug.Log("INFO: Child name is:" + child.gameObject.name);
                child.gameObject.AddComponent<Gaze3DModelScript>();
                direction[childIdx] = (child.transform.position - this.transform.position);
                direction[childIdx].Normalize();
                Ray ray = new Ray(this.transform.position, direction[childIdx]);
                targetPosition[childIdx] = ray.GetPoint(TRANSLATION_FACTOR * Vector3.Distance(child.transform.position, this.transform.position));
                childIdx++;
            }
        }
        
    } 
	
	// Update is called once per frame
	void Update ()
    {
        int childIdx = 0;
        bool flag = false;
        foreach (Transform child in childTransform)
        {
            if(child.parent != null)
            {
                Renderer renderer = child.gameObject.GetComponent<Renderer>();
                if (renderer == null)
                {
                    child.gameObject.AddComponent<MeshRenderer>();
                }
                if (Vector3.Distance(child.transform.position, this.transform.position) < Vector3.Distance(targetPosition[childIdx], this.transform.position))
                {
                    child.transform.Translate(direction[childIdx] * SPEED_EXPLODE * Time.deltaTime, Space.World);
                    flag = true;
                }
                childIdx++;
            }

        }

        if (!flag)
        {
            System.Diagnostics.Debug.WriteLine("INFO: Explosion Completed and Destroying Script!");
            Destroy(this);
        }
    }
}
