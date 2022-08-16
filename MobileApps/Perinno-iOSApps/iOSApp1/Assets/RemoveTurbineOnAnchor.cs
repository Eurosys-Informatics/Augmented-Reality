using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class RemoveTurbineOnAnchor : MonoBehaviour, ITrackableEventHandler
{
	private TrackableBehaviour mTrackableBehaviour;
	private bool destroyGO = false;
	GameObject go = null;
	GameObject codeGO = null;
	string textCode = null;
	GameObject targetObjGO1;
	GameObject targetObjGO2;
	GameObject targetObjGO3;
	GameObject targetObjGO4;
	Vector3 posObj1;
	Vector3 posObj2;
	Vector3 posObj3;
	Vector3 posObj4;
	UnityEngine.UI.InputField inputValues;
	private bool trackingLost = false;
	private bool obj1 = false;
	private bool obj2 = false;
	private bool obj3 = false;
	private bool obj4 = false;
	UnityEngine.UI.Button rotateBtn;
	UnityEngine.UI.Button expandBtn;
	GameObject BtnGO;
	private bool rotate;
	private bool expand;
	float rotationSpeed = 10.0f;
	GameObject scanLogoGO;
	private bool showScanImage = false;
	const float TIMER_VALUE = 10.0f;
	float timer = TIMER_VALUE; //in seconds
	// Use this for initialization

	void Start () 
	{
		mTrackableBehaviour = GetComponent<TrackableBehaviour>();
		if (mTrackableBehaviour)
		{
			mTrackableBehaviour.RegisterTrackableEventHandler(this);
		}

		//go = GameObject.Find ("UnanchoredTurbine");
		codeGO = GameObject.Find ("TextInput");
		inputValues = codeGO.transform.Find ("Canvas/InputField").GetComponent<UnityEngine.UI.InputField> ();
		textCode = inputValues.text;
		inputValues.onEndEdit.AddListener(delegate {ShowTargetObject(inputValues);});
		codeGO.SetActive (false);
		targetObjGO1 =  GameObject.Find ("ImageTarget/car");
		posObj1 = targetObjGO1.transform.localPosition;
		targetObjGO1.SetActive (false);
		targetObjGO2 =  GameObject.Find ("ImageTarget/Colored_turbine");
		posObj2 = targetObjGO2.transform.localPosition;
		targetObjGO2.SetActive (false);
		targetObjGO3 =  GameObject.Find ("ImageTarget/typhoon");
		posObj3 = targetObjGO3.transform.localPosition;
		targetObjGO3.SetActive (false);
		targetObjGO4 =  GameObject.Find ("ImageTarget/plane");
		posObj4 = targetObjGO4.transform.localPosition;
		targetObjGO4.SetActive (false);
		BtnGO = GameObject.Find ("Buttons");
		rotateBtn = GameObject.Find ("Buttons/RotateButton").GetComponent<Button> ();
		expandBtn = GameObject.Find ("Buttons/ExpandButton").GetComponent<Button> ();
		rotateBtn.onClick.AddListener(RotateModel);
		expandBtn.onClick.AddListener (ExpandModel);
		BtnGO.SetActive (false);

		scanLogoGO = GameObject.Find ("ScanImage");
		scanLogoGO.SetActive (false);
	}

	public void RotateModel()
	{
		rotate = true;
	}

	public void ExpandModel()
	{
		expand = true;
	}

	public void ShowTargetObject( UnityEngine.UI.InputField input)
	{
		scanLogoGO.SetActive (false);
		switch (input.text)

		{
		case "1234":
			obj1 = true;
			break;
		case "1235":
			obj2 = true;
			break;
		case "1236":
			obj3 = true;
			break;
		case "1237":
			obj4 = true;
			break;
		default:
			MNPopup popup = new MNPopup ("", "Wrong code entered! Try again!");
			popup.AddAction ("OK", () => {
				Debug.Log ("Ok action callback");
			});
			popup.AddDismissListener (() => {
				Debug.Log ("dismiss listener");
			});
			popup.Show ();
			break;

		}

	}

	public static void clearInputField(UnityEngine.UI.InputField input)
	{
		input.Select ();
		input.text = "";
	}

	public void OnTrackableStateChanged(
		TrackableBehaviour.Status previousStatus,
		TrackableBehaviour.Status newStatus)
	{
		if (newStatus == TrackableBehaviour.Status.DETECTED ||
		    newStatus == TrackableBehaviour.Status.TRACKED) {
			destroyGO = true;  
			trackingLost = true;
			showScanImage = false;
		} else 
		{
			showScanImage = true;
			trackingLost = false;
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

		timer -= Time.deltaTime;

		if (timer < 0 && Input.deviceOrientation != DeviceOrientation.LandscapeLeft) 
		{
			timer = TIMER_VALUE;
			//ResetVariables ();
			trackingLost = true;
		}

		if(destroyGO /*&& go != null*/)
		{
			//go.SetActive (false);
			//Destroy(go);  
			//go = null;
			//scanLogoGO.SetActive (false);
			//codeGO.SetActive (true);
		}

		if (obj1) 
		{
			codeGO.SetActive (false);
			targetObjGO1.SetActive(true);
			BtnGO.SetActive (true);
			if (rotate) 
			{
				targetObjGO1.transform.RotateAround(posObj1, Vector3.up, rotationSpeed * Time.deltaTime);
			}
				
		}

		if(obj2)
			
		{
			codeGO.SetActive (false);
			targetObjGO2.SetActive(true);
			BtnGO.SetActive (true);
			if (rotate) 
			{
				targetObjGO2.transform.RotateAround(posObj2, Vector3.up, rotationSpeed * Time.deltaTime);
			}
		}

		if(obj3)
		{
			codeGO.SetActive (false);
			targetObjGO3.SetActive(true);
			BtnGO.SetActive (true);
			if (rotate) 
			{
				targetObjGO3.transform.RotateAround(posObj3, Vector3.up, rotationSpeed * Time.deltaTime);
			}
		}

		if (obj4) 
		{
			codeGO.SetActive (false);
			targetObjGO4.SetActive(true);
			BtnGO.SetActive (true);
			if (rotate) 
			{
				targetObjGO4.transform.RotateAround(posObj4, Vector3.up, rotationSpeed * Time.deltaTime);
			}

		}

		if (trackingLost && timer > 0) 
		{
			scanLogoGO.SetActive (false);
			codeGO.SetActive (true);
			ResetVariables ();
			BtnGO.SetActive (false);
		}

		if (showScanImage) 
		{
			ResetVariables ();
			BtnGO.SetActive (false);
			showScanImage = false;
			scanLogoGO.SetActive (true);
			codeGO.SetActive (false);
		}

	}



	void ResetVariables()
	{
		clearInputField (inputValues);
		obj1 = false;
		obj2 = false;
		obj3 = false;
		obj4 = false;
		targetObjGO1.transform.position = posObj1;
		targetObjGO2.transform.position = posObj2;
		targetObjGO3.transform.position = posObj3;
		targetObjGO4.transform.position = posObj4;
		targetObjGO1.SetActive (false);
		targetObjGO2.SetActive (false);
		targetObjGO3.SetActive (false);
		targetObjGO4.SetActive (false);
		trackingLost = false;
		rotate = false;
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
