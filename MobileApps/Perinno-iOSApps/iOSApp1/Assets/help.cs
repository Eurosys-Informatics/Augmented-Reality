using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class help : MonoBehaviour {

	// Use this for initialization
	UnityEngine.UI.Button Btn;
	void Start () {
		
		Btn = gameObject.GetComponent<UnityEngine.UI.Button> ();
		Btn.onClick.AddListener (DisplayHelp);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void DisplayHelp()
	{
		MNPopup popup = new MNPopup ("Instructions to use this App", "1. With this App you can see 3D objects in Augmented Reality\n" +
			"2. You can anchor the 3D object on a tracker image, which can be downloaded at perinno.com/p.png\n" +
			"3. Enter 4 digit code to view the anchored 3D object\n" +
			"4. Different 3D object correspends to different code");
		popup.AddAction ("OK", () => {Debug.Log("Ok action callback");});
		popup.AddDismissListener (() => {Debug.Log("dismiss listener");});
		popup.Show ();
	}
}
