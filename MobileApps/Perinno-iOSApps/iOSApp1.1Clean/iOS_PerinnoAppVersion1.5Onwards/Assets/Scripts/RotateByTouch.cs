using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateByTouch : MonoBehaviour {
	private Vector2 startPos;
	private Vector2 endPos;
	private Vector2 deltaPos;
	bool swipeDone = false;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		if (Input.touchCount == 1) 
		{
			Touch touch = Input.GetTouch(0);

			// Handle finger movements based on touch phase.
			switch (touch.phase)
			{
			// Record initial touch position.
			case TouchPhase.Began:
				startPos = touch.position;
				swipeDone = false;
				break;

				// Determine direction by comparing the current touch position with the initial one.
			case TouchPhase.Moved:
				deltaPos = touch.position - startPos;
				break;

				// Report that a direction has been chosen when the finger is lifted.
			case TouchPhase.Ended:
				swipeDone = true;
				endPos = touch.position;
				deltaPos = endPos - startPos;
				break;
			}
		}
			

		if (swipeDone)
		{
			swipeDone = false;
			if(deltaPos.x > 0){
				transform.Rotate (0, 3.0f, 0.0f);
			}

			if(deltaPos.x < 0){
				transform.Rotate (0, -3.0f, 0.0f);
			}

			if(deltaPos.y < 0){
				transform.Rotate (-3.0f, 0.0f, 0.0f);
			}

			if(deltaPos.y > 0){
				transform.Rotate (3.0f, 0.0f, 0.0f);
			}
		}
		
	}
		

}
