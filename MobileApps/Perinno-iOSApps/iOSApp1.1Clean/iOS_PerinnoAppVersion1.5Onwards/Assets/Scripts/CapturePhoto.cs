using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CapturePhoto : MonoBehaviour {

	UnityEngine.UI.Button BtnCapture;
	GameObject audioGO;
	AudioClip photoCaptureClip;
	AudioSource audioSrc;
	bool photoBtnClicked = false;
	// Use this for initialization
	void Start () {
		BtnCapture = gameObject.GetComponent<UnityEngine.UI.Button> ();
		BtnCapture.onClick.AddListener (CaptureSnapshot);
		photoCaptureClip = Resources.Load<AudioClip>("audios/camera_audio");
		audioGO = new GameObject ();
		audioSrc = audioGO.AddComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (photoBtnClicked) 
		{
			photoBtnClicked = false;
			StartCoroutine("SavePhoto");
			//System.IO.File.Delete (Application.persistentDataPath + "/PerinnoAppScreenShot");
		}
		
	}
	private IEnumerator SavePhoto()
	{
		/*yield return new WaitForEndOfFrame();

		string existingMediaPath = Application.persistentDataPath + "/PerinnoAppScreenShot";
		Debug.Log("Path of snapshot " + existingMediaPath);
		NativeGallery.SaveImageToGallery( existingMediaPath, "PerinnoImages", "PerinnoAppIMG {0}.png" );
		//yield return null;*/

		yield return new WaitForEndOfFrame();

		Texture2D snapshot = new Texture2D( Screen.width, Screen.height, TextureFormat.RGB24, false );
		snapshot.ReadPixels( new Rect( 0, 0, Screen.width, Screen.height ), 0, 0 );
		snapshot.Apply();
        //byte[] mediabyte = snapshot.GetRawTextureData(); 

		// Save the screenshot to Gallery/Photos
		Debug.Log( "Permission result: " + NativeGallery.SaveImageToGallery( snapshot, "PerinnoAppPhotos", "PerinnoAppIMG {0}.png" ) );
        Destroy(snapshot);
        //Debug.Log("Permission result: " + NativeGallery.SaveVideoToGallery(mediabyte, "PerinnoAppPhotos", "PerinnoAppMovie {0}.mov"));
	}


	public void CaptureSnapshot()
	{
		audioSrc.clip = photoCaptureClip;
		audioSrc.volume = 1.0f;
		audioSrc.Play ();
		//ScreenCapture.CaptureScreenshot("PerinnoAppScreenShot",1);
		photoBtnClicked = true;
		Debug.Log ("Screenshot captured");
	}
}
