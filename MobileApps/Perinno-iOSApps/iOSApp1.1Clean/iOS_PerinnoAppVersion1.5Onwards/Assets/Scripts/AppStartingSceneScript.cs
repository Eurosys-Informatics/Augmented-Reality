using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class AppStartingSceneScript : MonoBehaviour
{
    GameObject firebaseGO;
    GameObject signInGO;
    GameObject noSignInGO;
    Button BtnGoBack;
    Button BtnNoSignIn;
    Button BtnSignIn;
    //bool agreed = false;
    Text txtBanner;
    string orgText;
    InputField passIF;
    public GameObject loadingGO;
    GameObject BtnPPToSGO;
    Button BtnPPToS;
    // Use this for initialization
    void Start()
    {
        firebaseGO = GameObject.Find("HelpCanvas/FirebaseGO");
        BtnGoBack = GameObject.Find("HelpCanvas/FirebaseGO/GoBack").GetComponent<Button>();
        passIF = GameObject.Find("HelpCanvas/FirebaseGO/Password").GetComponent<InputField>();
        passIF.asteriskChar = "●"[0];
        BtnGoBack.onClick.AddListener(GoBack);
        firebaseGO.SetActive(false);
        noSignInGO = GameObject.Find("HelpCanvas/NoSignInGO");
        signInGO = GameObject.Find("HelpCanvas/SignInGO");
        BtnSignIn = GameObject.Find("HelpCanvas/SignInGO/Button").GetComponent<Button>();
        BtnSignIn.onClick.AddListener(RedirectToFirebase);
        BtnNoSignIn = GameObject.Find("HelpCanvas/NoSignInGO/Button").GetComponent<Button>();
        BtnNoSignIn.onClick.AddListener(ContinueWithoutSignIn);
        txtBanner = GameObject.Find("HelpCanvas/VuforiaHidingBanner/Text").GetComponent<Text>();
        orgText = txtBanner.text;
        loadingGO = GameObject.Find("Loading");
        loadingGO.SetActive(false);
        BtnPPToSGO = GameObject.Find("HelpCanvas/VuforiaHidingBanner/PPToS");
        BtnPPToS = GameObject.Find("HelpCanvas/VuforiaHidingBanner/PPToS").GetComponent<Button>();
        BtnPPToS.onClick.AddListener(OpenPPToSPage);

        Handheld.StopActivityIndicator();
    }

    private void OpenPPToSPage()
    {
        SceneManager.LoadScene("PPTermOfService");
    }

    private void ContinueWithoutSignIn()
    {
        StartCoroutine(SceneChange());
    }

    // Update is called once per frame
    void Update()
    {

    }


    void RedirectToFirebase()
    {
        noSignInGO.SetActive(false);
        signInGO.SetActive(false);
        firebaseGO.SetActive(true);
        BtnPPToSGO.SetActive(false);
        txtBanner.text = "Sign-in provided by Google Firebase. Perinno doesn't have access to your credentials and will not post on your behalf.";
    }

    void GoBack()
    {
        noSignInGO.SetActive(true);
        signInGO.SetActive(true);
        firebaseGO.SetActive(false);
        BtnPPToSGO.SetActive(true);
        txtBanner.text = orgText;
    }

    IEnumerator SceneChange()
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
        SceneManager.LoadScene("MVPScene2");
    }
}
