using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;


public class SceneTrackerNoTracker : MonoBehaviour
{
    GameObject signInGO;
    GameObject noSignInGO;
    Button BtnGoBack;
    Button BtnNoSignIn;
    Button BtnSignIn;
    //bool agreed = false;
    public GameObject loadingGO;
    // Use this for initialization
    void Start()
    {
        noSignInGO = GameObject.Find("HelpCanvas/NoSignInGO");
        signInGO = GameObject.Find("HelpCanvas/SignInGO");
        BtnSignIn = GameObject.Find("HelpCanvas/SignInGO/Button").GetComponent<Button>();
        BtnSignIn.onClick.AddListener(ContinueWithTracker);
        BtnNoSignIn = GameObject.Find("HelpCanvas/NoSignInGO/Button").GetComponent<Button>();
        BtnNoSignIn.onClick.AddListener(ContinueWithoutTracker);
        loadingGO = GameObject.Find("Loading");
        loadingGO.SetActive(false);

        Handheld.StopActivityIndicator();
    }


    private void ContinueWithoutTracker()
    {
        if (CheckARKitSupported())
        {
            StartCoroutine(SceneChangeNoTracker());
        }
        else
        {
            MNPopup popup = new MNPopup("", "Device not supported. Select tracker mode to continue.");
            popup.AddAction("OK", () =>
            {
                Debug.Log("Ok action callback");
            });
            popup.AddDismissListener(() => { Debug.Log("dismiss listener"); });
            popup.Show();
        }

    }
    private void ContinueWithTracker()
    {

            StartCoroutine(SceneChangeTracker());

    }

    // Update is called once per frame
    void Update()
    {

    }


    void GoBack()
    {
        noSignInGO.SetActive(true);
        signInGO.SetActive(true);


    }

    IEnumerator SceneChangeNoTracker()
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
        //SceneManager.LoadScene("MVPScene2");
        SceneManager.LoadScene("UnityARKitScene");
    }



    IEnumerator SceneChangeTracker()
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

    private bool CheckARKitSupported()
    {

        Debug.Log("UnityEngine.iOS.Device.systemVersion:" + UnityEngine.iOS.Device.systemVersion);
        float iOSVersion = 11f;
        string[] ver = UnityEngine.iOS.Device.systemVersion.Split('.');
        float.TryParse(ver[0], out iOSVersion);
        if (iOSVersion < 11f)
        {
            Debug.Log("Not supported iOS version: " + iOSVersion);
            return false;
        }

        var gen = UnityEngine.iOS.Device.generation;
        Debug.Log("gen:" + gen);

        if (gen == UnityEngine.iOS.DeviceGeneration.iPhone4 ||
            gen == UnityEngine.iOS.DeviceGeneration.iPhone4S ||
            gen == UnityEngine.iOS.DeviceGeneration.iPhone5 ||
            gen == UnityEngine.iOS.DeviceGeneration.iPhone5C ||
            gen == UnityEngine.iOS.DeviceGeneration.iPhone5S ||
            gen == UnityEngine.iOS.DeviceGeneration.iPhone6 ||
            gen == UnityEngine.iOS.DeviceGeneration.iPhone6Plus ||
            gen == UnityEngine.iOS.DeviceGeneration.iPad1Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPad2Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPad3Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPad4Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPadAir1 ||
            gen == UnityEngine.iOS.DeviceGeneration.iPadAir2 ||
            gen == UnityEngine.iOS.DeviceGeneration.iPadMini1Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPadMini2Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPadMini3Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPadMini4Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPodTouch1Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPodTouch2Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPodTouch3Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPodTouch4Gen ||
            gen == UnityEngine.iOS.DeviceGeneration.iPodTouch5Gen ||
        gen == UnityEngine.iOS.DeviceGeneration.iPodTouch6Gen)
        {
            Debug.Log("Device not supported");
            return false;
        }

        return true;
    }
}
