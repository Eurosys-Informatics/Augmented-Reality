using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase.Auth;
using UnityEngine.SceneManagement;

public class LoginedUserSpecificScript : MonoBehaviour
{
    Button BtnLoginForm;
    bool signout = false;
    FirebaseAuth auth;
    bool modelSharedWithThisUser = true; //This should be populated by push notification, default now true for testing
    bool sharedModelPresent = false;
    public bool infoToLoginUserAboutSharedModel = false;
    //AppStartingSceneScript appStartingSceneScriptInstance;
    //GameObject loadingGO;
    ScriptAfterModelInstantiated scriptAfterModelInstantiatedInstance;
    // Use this for initialization
    void Start()
    {
        BtnLoginForm = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/UserHome").GetComponent<Button>();
        BtnLoginForm.onClick.AddListener(OpenLoginForm);
        auth = FirebaseAuth.DefaultInstance;
        scriptAfterModelInstantiatedInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();

    }

    // Update is called once per frame
    void Update()
    {
        if (signout)
        {
            signout = false;
            StartCoroutine(SignoutAndGotoFirebase());
        }

        if (sharedModelPresent)
        {
            sharedModelPresent = false;
            StartCoroutine(RedirectToSharedModelScene());
            infoToLoginUserAboutSharedModel = true;
        }
    }

    void OpenLoginForm()
    {

        Debug.Log("You are logged in as" + auth.CurrentUser.Email);
        MNPopup popup = new MNPopup("", "You are logged in as: " + auth.CurrentUser.Email);
        popup.AddAction("OK", () =>
        {

            Debug.Log("Ok action callback");

        });
        popup.AddAction("Sign out", () =>
        {
            Debug.Log("Sign-out action callback");
            signout = true;

        });
        if (modelSharedWithThisUser)
        {
            popup.AddAction("My Models", () =>
           {
               Debug.Log("Sign-out action callback");
               sharedModelPresent = true;

           });
        }
        popup.AddDismissListener(() =>
        {
            Debug.Log("dismiss listener");
        });
        popup.Show();

    }



    private IEnumerator SignoutAndGotoFirebase()
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
        auth.SignOut();
        SceneManager.LoadScene("MVPScene1");
    }

    private IEnumerator RedirectToSharedModelScene()
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
        SceneManager.LoadScene("LoginUserSharedModelScene");
    }


}
