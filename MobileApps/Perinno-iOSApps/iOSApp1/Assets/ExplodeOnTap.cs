using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplodeOnTap : MonoBehaviour {
	Animator anim;
	//private bool mShowGUIButton = true;
	private bool isAnimPlaying = false;
	RuntimeAnimatorController tempAnim = null;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator>();
		tempAnim = Instantiate (Resources.Load ("AnimatorExplode")) as RuntimeAnimatorController;
		//Invoke ("DisableLabel", 15);
		/*
		MNPopup popup = new MNPopup ("Instructions to use this App", "1. With this App you can see 3D objects in Augmented Reality\n" +
			"2. You can anchor the 3D object on a tracker image, which can be downloaded at perinno.com/p.png\n" +
			"3. You can tap on the screen to start or stop disassembling the 3D object");
		popup.AddAction ("OK", () => {Debug.Log("Ok action callback");});
		popup.AddDismissListener (() => {Debug.Log("dismiss listener");});
		popup.Show ();*/

		//EditorUtility.DisplayDialog ("Instructions to use this App", "1. With this App you can see 3D objects in Augmented Reality\n2. You can anchor the 3D object on a tracker image, which can be downloaded at perinno.com/p.png\n3. Tap on the screen to disassemble the 3D object", "OK");
	}

	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount > 0) {
			//mShowGUIButton = false;
			if (!isAnimPlaying) {
				if(anim.runtimeAnimatorController == null)
					anim.runtimeAnimatorController = tempAnim;
				anim.StartPlayback ();
				isAnimPlaying = true;
			} 
			else {
				anim.StopPlayback();
				isAnimPlaying = false;
			}
		}
	}
}