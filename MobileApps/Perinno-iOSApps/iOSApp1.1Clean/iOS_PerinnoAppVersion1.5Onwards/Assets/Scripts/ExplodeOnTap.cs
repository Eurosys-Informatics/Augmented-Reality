using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ExplodeOnTap : MonoBehaviour {
	public Animator anim;
	//private bool mShowGUIButton = true;
	public bool isAnimPlaying = false;
	RuntimeAnimatorController tempAnim = null;
	AudioClip explodeClip;
	AudioSource audioSrc;
	public float bannerHideHeight;
	RectTransform rtBannerHide;
	float canvasScaledFactor = 1;
	Canvas canvasGO;

	// Use this for initialization
	void Start () {
		anim = GetComponent<Animator> ();
		tempAnim = Instantiate (Resources.Load ("AnimatorExplode")) as RuntimeAnimatorController;
		explodeClip = Resources.Load<AudioClip> ("audios/machine_audio");
		audioSrc = gameObject.GetComponent<AudioSource> ();
		audioSrc.clip = explodeClip;
		audioSrc.volume = 1.0f;
		audioSrc.loop = true;
		rtBannerHide = GameObject.Find ("HelpCanvas/VuforiaHidingBanner").GetComponent<RectTransform> ();
		canvasGO = GameObject.Find ("HelpCanvas").GetComponent<Canvas> ();
		FindBannerHeight ();
	}


	
	// Update is called once per frame
	void Update () {
		if (Input.touchCount == 1) 
		{
			FindBannerHeight ();
			Debug.Log ("Touch Count: " + Input.touchCount);

			Touch touch = Input.GetTouch(0);
			Debug.Log("over UI" + EventSystem.current.IsPointerOverGameObject(touch.fingerId));
			if (touch.position.y > bannerHideHeight && (touch.phase == TouchPhase.Began) && !(EventSystem.current.IsPointerOverGameObject(touch.fingerId))) 
			{
				Debug.Log ("banner height " + bannerHideHeight);
				//mShowGUIButton = false;
				if (isAnimPlaying == false) {
					StartCoroutine ("startExpansion");
				} else {
					StartCoroutine ("stopExpansion");
				}
			}
		}


		/*if (Input.GetMouseButtonDown(0)) 
		{
			FindBannerHeight ();
			//Debug.Log ("Touch Count: " + Input.touchCount);
			if(Input.mousePosition.y > bannerHideHeight)
			 {
				Debug.Log ("banner height " + bannerHideHeight);
				//mShowGUIButton = false;
				if (isAnimPlaying == false) {
					StartCoroutine ("startExpansion");

				} else {
					StartCoroutine ("stopExpansion");
				}
			}
		}*/
	}

	public void FindBannerHeight () {

		StartCoroutine("UpdatedFrameBannerHeight");

	}
	private IEnumerator UpdatedFrameBannerHeight()
	{
		canvasScaledFactor = canvasGO.scaleFactor;
		bannerHideHeight = rtBannerHide.rect.height * canvasScaledFactor;
		Debug.Log ("Updated banner height " + bannerHideHeight);
		yield return 0;
	}

	IEnumerator startExpansion()
	{
		isAnimPlaying = true;
		if (anim.runtimeAnimatorController == null)
			anim.runtimeAnimatorController = tempAnim;
		else
			anim.speed = 1.0f;
		audioSrc.Play ();

		yield return null;
	}

	IEnumerator stopExpansion()
	{
		isAnimPlaying = false;
		anim.speed = 0;
		audioSrc.Stop ();
		yield return null;
	}
}