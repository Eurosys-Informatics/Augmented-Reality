using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class RemoveTurbineOnAnchorMVP : MonoBehaviour, ITrackableEventHandler
{
	private TrackableBehaviour mTrackableBehaviour;
//	private bool destroyGO = false;
//	GameObject go = null;
	GameObject targetObjGO1;
	Vector3 posObj1;
	private bool trackingImageFound = false;
//	private bool obj1 = false;
	GameObject scanLogoGO;
	private bool showScanImage = false;
	// Use this for initialization

	void Start () 
	{
		mTrackableBehaviour = GetComponent<TrackableBehaviour>();
		if (mTrackableBehaviour)
		{
			mTrackableBehaviour.RegisterTrackableEventHandler(this);
		}
			
		targetObjGO1 =  GameObject.Find ("ImageTarget/Colored_turbine");
		posObj1 = targetObjGO1.transform.localPosition;
		targetObjGO1.SetActive (false);

		scanLogoGO = GameObject.Find ("ScanImage");
		scanLogoGO.SetActive (false);
	}


//	public void ShowTargetObject( UnityEngine.UI.InputField input)
//	{
//		scanLogoGO.SetActive (false);
//		switch (input.text)
//
//		{
//		case "1234":
//			obj1 = true;
//			break;
//		case "1235":
//			obj2 = true;
//			break;
//		case "1236":
//			obj3 = true;
//			break;
//		case "1237":
//			obj4 = true;
//			break;
//		default:
//			MNPopup popup = new MNPopup ("", "Wrong code entered! Try again!");
//			popup.AddAction ("OK", () => {
//				Debug.Log ("Ok action callback");
//			});
//			popup.AddDismissListener (() => {
//				Debug.Log ("dismiss listener");
//			});
//			popup.Show ();
//			break;
//
//		}
//
//	}



	public void OnTrackableStateChanged(
		TrackableBehaviour.Status previousStatus,
		TrackableBehaviour.Status newStatus)
	{
		if (newStatus == TrackableBehaviour.Status.DETECTED ||
		    newStatus == TrackableBehaviour.Status.TRACKED) {
			//destroyGO = true;  
			trackingImageFound = true;
			showScanImage = false;
		} else 
		{
			showScanImage = true;
			trackingImageFound = false;
			Debug.Log ("****LOST");
		}
			

		/*if (newStatus == TrackableBehaviour.Status.NOT_FOUND) 
		{
			showScanImage = true;
		}*/
	}


		
	
	// Update is called once per frame
	void Update () 
	{

//		if(destroyGO /*&& go != null*/)
//		{
//			//go.SetActive (false);
//			//Destroy(go);  
//			//go = null;
//			//scanLogoGO.SetActive (false);
//			//codeGO.SetActive (true);
//		}
//
//		if (obj1) 
//		{
//			targetObjGO1.SetActive(true);
//				
//		}
			

		if (trackingImageFound) 
		{
			scanLogoGO.SetActive (false);
			targetObjGO1.SetActive(true);
			targetObjGO1.transform.position = posObj1;
			trackingImageFound = false;
		}

		if (showScanImage) 
		{
			
			targetObjGO1.transform.position = posObj1;
			targetObjGO1.SetActive (false);
			trackingImageFound = false;
			showScanImage = false;
			scanLogoGO.SetActive (true);
		}

	}

	/*
	 * void OnGUI()
	{
		if (!destroyGO) 
		{
			GUIStyle guiStyle = new GUIStyle ();
			guiStyle.stretchHeight = true;
			guiStyle.stretchWidth = true;
			guiStyle.fontSize = 35;
			guiStyle.normal.textColor = Color.yellow;
			guiStyle.wordWrap = true;
			GUI.Label (new Rect (Screen.width / 20, Screen.height / 30, Screen.width, Screen.height), "Anchor 3D model by scanning tracker image available at perinno.com/p.png", guiStyle);
		}
	}*/
}
