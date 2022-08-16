using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoginUserSharedModel : MonoBehaviour {
    Button BtnGoBackButton;
    private bool goBackButtonClicked =  false;
    CodeAreaScript codeAreaScriptInstance;
    GameObject loadingGO;
	// Use this for initialization
	void Start () {
        Handheld.StopActivityIndicator();
        BtnGoBackButton = GameObject.Find("HelpCanvas/GoBack").GetComponent<Button>();
        BtnGoBackButton.onClick.AddListener(GoBackButtonClicked);
        loadingGO = GameObject.Find("Loading");
        loadingGO.SetActive(false); ///Uncomment this is release
	}

    private void GoBackButtonClicked()
    {
        goBackButtonClicked = true;
    }

	// Update is called once per frame
	void Update () {
        if(goBackButtonClicked)
        {
            goBackButtonClicked = false;
            StartCoroutine(GoToUserLoginScene());
        }
	}

    private IEnumerator GoToUserLoginScene()
    {
#if UNITY_IPHONE
        Handheld.SetActivityIndicatorStyle(UnityEngine.iOS.ActivityIndicatorStyle.WhiteLarge);
#elif UNITY_ANDROID
        Handheld.SetActivityIndicatorStyle(AndroidActivityIndicatorStyle.DontShow);
        loadingGO.SetActive(true);
#elif UNITY_TIZEN
        Handheld.SetActivityIndicatorStyle(TizenActivityIndicatorStyle.Small);
#endif
        Handheld.StartActivityIndicator();
        yield return new WaitForSeconds(0);
        SceneManager.LoadScene("SceneUSerLogin");
        
    }

}
