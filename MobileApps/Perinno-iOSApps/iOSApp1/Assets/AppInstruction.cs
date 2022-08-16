﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppInstruction : MonoBehaviour {

	// Use this for initialization
	void Start () {
		MNPopup popup = new MNPopup ("Instructions to use this App", "1. With this App you can see 3D objects in Augmented Reality\n" +
			"2. You can anchor the 3D object on a tracker image, which can be downloaded at perinno.com/p.png\n" +
			"3. Enter 4 digit code to view the anchored 3D object"
			);
		popup.AddAction ("OK", () => {Debug.Log("Ok action callback");});
		popup.AddDismissListener (() => {Debug.Log("dismiss listener");});
		popup.Show ();
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}