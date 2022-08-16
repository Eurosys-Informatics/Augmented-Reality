using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Auth;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class EmailPassword : MonoBehaviour
{

    private FirebaseAuth auth;
    public InputField UserNameInput, PasswordInput;
    public Button SignupButton, LoginButton;
    public Text ErrorText;
    bool userVerifiedMailWhileAppRunning = false;
    bool userRequestedResetPassword = false;
    AppStartingSceneScript appStartingSceneScriptInstance;

    void Start()
    {
        //loadingGO = GameObject.Find("Loading");
        //loadingGO.SetActive(false);
        auth = FirebaseAuth.DefaultInstance;
        auth.StateChanged += Auth_StateChanged;

        SignupButton.onClick.AddListener(() => Signup(UserNameInput.text, PasswordInput.text));
        LoginButton.onClick.AddListener(() => Login(UserNameInput.text, PasswordInput.text));
        appStartingSceneScriptInstance = GameObject.Find("HelpCanvas").GetComponent<AppStartingSceneScript>();

        //This below is for Android, test for iOS (without this iOS was working though)
        if (auth.CurrentUser != null && auth.CurrentUser.IsEmailVerified)
        {
            SceneManager.LoadScene("SceneUserLogin");
        }
    }

    private void Update()
    {
        if (userRequestedResetPassword)
        {
            userRequestedResetPassword = false;
            StartCoroutine(ChangeSceneForPasswordReset());

        }
    }
   

    private void Auth_StateChanged(object sender, EventArgs e)
    {
        Debug.Log("Auth user state changed");
        if (auth.CurrentUser != null && auth.CurrentUser.IsEmailVerified)
        {
            SceneManager.LoadScene("SceneUserLogin");
        }
    }

    public void Signup(string email, string password)
    {

        if (string.IsNullOrEmpty(email) || string.IsNullOrEmpty(password))
        {
            //Error handling
            return;
        }

        auth.CreateUserWithEmailAndPasswordAsync(email, password).ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("CreateUserWithEmailAndPasswordAsync was canceled.");
                DisplayLoginMsg("Signup Cancelled! Try Again!", false);
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("CreateUserWithEmailAndPasswordAsync error: " + task.Exception);
                if (task.Exception.InnerExceptions.Count > 0)
                {
                    DisplayLoginMsg(task.Exception.InnerExceptions[0].Message, false);
                    //UpdateErrorMessage(task.Exception.InnerExceptions[0].Message);
                }

                return;
            }

            FirebaseUser newUser = task.Result; // Firebase user has been created.
            Debug.LogFormat("Firebase user created successfully: {0} ({1})",
                newUser.DisplayName, newUser.UserId);
            //UpdateErrorMessage("Signup Success");
            newUser.SendEmailVerificationAsync();
            //SceneManager.LoadScene("MVPScene1");
            DisplayLoginMsg("Verification email sent to " + newUser.Email + ". Check your spam folder in case you don't find the mail. Verify your email and then login to continue", false);
            auth.SignOut();
        });
    }

    private void UpdateErrorMessage(string message)
    {
        ErrorText.text = message;
        Invoke("ClearErrorMessage", 3);
    }

    void ClearErrorMessage()
    {
        ErrorText.text = "";
    }

    public void Login(string email, string password)
    {
        if (string.IsNullOrEmpty(email) || string.IsNullOrEmpty(password))
        {
            //Error handling
            return;
        }
        auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync canceled.");
                DisplayLoginMsg("Login Cancelled! Try Again!", false);
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync error: " + task.Exception);
                if (task.Exception.InnerExceptions.Count > 0)
                {
                    //UpdateErrorMessage(task.Exception.InnerExceptions[0].Message);
                    DisplayLoginMsg("Wrong email or password! OR you have not signed-up. Try again or sign-up.", true);
                }


                return;
            }
            FirebaseUser user = task.Result;
            Debug.LogFormat("User signed in successfully: {0} ({1})",
                user.DisplayName, user.UserId);

            PlayerPrefs.SetString("LoginUser", user != null ? user.Email : "Unknown");
            if (!user.IsEmailVerified)
            {
                DisplayLoginMsg("Email not verified. Check your email account for verification mail.", false);
                return;
            }
            else
            {
                Debug.Log("userverified while app running and auth curent user is" + auth.CurrentUser.Email);
                userVerifiedMailWhileAppRunning = true;
            }
            /*
            else
            {
                //user.ReloadAsync();
                userVerifiedMailWhileAppRunning = true;
                Debug.Log("userverified while app running");
            }*/
            //DisplayLoginMsg("Login Successful!");
            //SceneManager.LoadScene("LoginResults");
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
                userRequestedResetPassword = true;
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

    IEnumerator ChangeSceneForPasswordReset()
    {
#if UNITY_IPHONE
        Handheld.SetActivityIndicatorStyle(UnityEngine.iOS.ActivityIndicatorStyle.WhiteLarge);
#elif UNITY_ANDROID
        Handheld.SetActivityIndicatorStyle(AndroidActivityIndicatorStyle.DontShow);
        appStartingSceneScriptInstance.loadingGO.SetActive(true);
#elif UNITY_TIZEN
        Handheld.SetActivityIndicatorStyle(TizenActivityIndicatorStyle.Small);
#endif
        Handheld.StartActivityIndicator();
        yield return new WaitForSeconds(0);
        SceneManager.LoadScene("PasswordForget");
    }
}
