using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class SendResetPasswordEmail : MonoBehaviour
{

    public InputField EmailField;
    Button BtnResetPass;
    Button BtnBackButton;
    private FirebaseAuth auth;
    bool goBackBtnClicked = false;
    GameObject loadingGO;

    // Use this for initialization
    void Start()
    {
        auth = FirebaseAuth.DefaultInstance;
        BtnBackButton = GameObject.Find("HelpCanvas/FirebaseGO/GoBack").GetComponent<Button>();
        BtnBackButton.onClick.AddListener(GoBackButtonClicked);
        BtnResetPass = GameObject.Find("HelpCanvas/FirebaseGO/ResetPassMail").GetComponent<Button>();
        if (BtnResetPass != null)
        {
            Debug.Log("Reset Button found!");
        }
        BtnResetPass.onClick.AddListener(() => SendPasswordResetMailToUser(EmailField.text));

        loadingGO = GameObject.Find("Loading");
        loadingGO.SetActive(false);
        Handheld.StopActivityIndicator();
    }


    // Update is called once per frame
    void Update()
    {
        if (goBackBtnClicked)
        {
            goBackBtnClicked = false;
            StartCoroutine(GoToLoginScene());
        }
    }

    IEnumerator GoToLoginScene()
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
        SceneManager.LoadScene("MVPScene1");
    }

    void SendPasswordResetMailToUser(string email)
    {

        if (string.IsNullOrEmpty(email))
        {
            //Error handling
            return;
        }

        auth.SendPasswordResetEmailAsync(email).ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SendPasswordResetEmailAsync was canceled.");
                DisplayLoginMsg("Signup Cancelled! Try Again!", false);
                return;
            }

            if (task.IsFaulted)
            {
                Debug.LogError("SendPasswordResetEmailAsync error: " + task.Exception);
                if (task.Exception.InnerExceptions.Count > 0)
                {
                    DisplayLoginMsg(task.Exception.InnerExceptions[0].Message, false);
                    //UpdateErrorMessage(task.Exception.InnerExceptions[0].Message);
                }

                return;
            }

            if (task.IsCompleted)
            {
                auth.SignOut();
                DisplayLoginMsg("Steps to reset your password sent to " + email, false);
                SceneManager.LoadScene("MVPScene1");
            }

        });
    }

    public void DisplayLoginMsg(string msg, bool credentialsWrong)
    {
        MNPopup popup = new MNPopup("", msg);
        if (credentialsWrong)
        {
            popup.AddAction("OK", () =>
            {
                Debug.Log("Ok action callback");
            });

            popup.AddAction("Forgot Password?", () =>
            {
                Debug.Log("Ok action callback");
            });

        }
        else
        {
            popup.AddAction("OK", () =>
            {
                Debug.Log("Ok action callback");
            });

        }
        popup.AddDismissListener(() =>
        {
            Debug.Log("dismiss listener");
        });

        popup.Show();
    }

    void GoBackButtonClicked()
    {
        goBackBtnClicked = true;
    }
}
