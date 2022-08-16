using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class helpMVP : MonoBehaviour {

	// Use this for initialization
	UnityEngine.UI.Button Btn;
	GameObject audioGO;
	AudioClip buttonClip;
	AudioSource audioSrc;
	void Start () {
		
		Btn = gameObject.GetComponent<UnityEngine.UI.Button> ();
		Btn.onClick.AddListener (DisplayHelp);
		buttonClip = Resources.Load<AudioClip>("audios/button_audio");
		audioGO = new GameObject ();
		audioSrc = audioGO.AddComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void DisplayHelp()
	{
		MNPopup popup = new MNPopup ("Instructions to use this App", "1. With this App you can see 3D objects in Augmented Reality\n" +
			"2. You can anchor the 3D object on a tracker image, which can be downloaded at perinno.com/p.png\n" +
			"3. Tap to start or stop the 3D object expansion");
		popup.AddAction ("OK", () => {Debug.Log("Ok action callback");});
		popup.AddDismissListener (() => {Debug.Log("dismiss listener");});
		popup.Show ();
		audioSrc.clip = buttonClip;
		audioSrc.volume = 1.0f;
		audioSrc.Play ();
	}
}
