using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchDragRotate : MonoBehaviour {

	private Vector2 startPos;
	private Vector2 endPos;
	private Vector2 direction;
	private bool directionChosen;
	private float rotation;
	void Update()
	{
		// Track a single touch as a direction control.
		if (Input.touchCount == 1)
		{
			Touch touch = Input.GetTouch(0);

			// Handle finger movements based on touch phase.
			switch (touch.phase)
			{
			// Record initial touch position.
			case TouchPhase.Began:
				startPos = touch.position;
				directionChosen = false;
				break;

				// Determine direction by comparing the current touch position with the initial one.
			case TouchPhase.Moved:
				direction = touch.position - startPos;
				break;

				// Report that a direction has been chosen when the finger is lifted.
			case TouchPhase.Ended:
				directionChosen = true;
				endPos = touch.position;
				direction = endPos - startPos;
				Vector2 horizontal = new Vector2(startPos.x + Screen.width / 2, startPos.y) - startPos;
				rotation = Vector2.SignedAngle (direction,horizontal);
				Debug.Log ("Diretion$$$$$$$$$$$$" + direction);
				Debug.Log ("Horicontal%%%%%%" + horizontal);
				break;
			}
		}
		if (directionChosen)
		{
			gameObject.transform.Rotate (0.0f, rotation, 0.0f);
			directionChosen = false;
			Debug.Log ("$$$$$$Rotation$$$$$$$$$" + rotation);
			Debug.Log ("$$$$$$startPos$$$$$$$$$" + startPos);
			Debug.Log ("$$$$$$endPos$$$$$$$$$" + endPos);


		}
	}
}
