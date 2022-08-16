using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class BackButtonNotSignedUser : MonoBehaviour
{
    Button BtnBackButton;
    bool backbuttonClicked;
    Scene currentScene;
    //ScriptAfterModelInstantiated scriptAfterModelInstantiatedInstance;
    // Use this for initialization
    void Start()
    {
        currentScene = SceneManager.GetActiveScene();
        BtnBackButton = GameObject.Find("HelpCanvas/BackButton/Button").GetComponent<Button>();
        BtnBackButton.onClick.AddListener(BackButtonClicked);
        //scriptAfterModelInstantiatedInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();

    }

    private void BackButtonClicked()
    {
        backbuttonClicked = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (backbuttonClicked)
        {
            backbuttonClicked = false;
            StartCoroutine(BackToFirebaseLogin());
        }
    }

    IEnumerator BackToFirebaseLogin()
    {
#if UNITY_IPHONE
        Handheld.SetActivityIndicatorStyle(UnityEngine.iOS.ActivityIndicatorStyle.WhiteLarge);
#elif UNITY_ANDROID
        Handheld.SetActivityIndicatorStyle(AndroidActivityIndicatorStyle.DontShow);
        scriptAfterModelInstantiatedInstance.loadingGO.SetActive(true);
#elif UNITY_TIZEN
        Handheld.SetActivityIndicatorStyle(TizenActivityIndicatorStyle.Small);
#endif
        Handheld.StartActivityIndicator();
        yield return new WaitForSeconds(0);
        //SceneManager.LoadScene("MVPScene1");
        if (currentScene.name == "MVPScene2")
            SceneManager.LoadScene("TrackerNoTracker");
        else if (currentScene.name == "TrackerNoTracker")
            SceneManager.LoadScene("MVPScene1");
        else if (currentScene.name == "UnityARKitScene")
            SceneManager.LoadScene("TrackerNoTracker");

    }
}
