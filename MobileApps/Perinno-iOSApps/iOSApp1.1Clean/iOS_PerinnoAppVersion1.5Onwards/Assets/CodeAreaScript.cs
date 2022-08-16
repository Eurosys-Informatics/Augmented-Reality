using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Net;
using System.Net.NetworkInformation;
using System;
using System.IO;
using Firebase.Auth;
#if UNITY_ANDROID
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
#endif

public class CodeAreaScript : MonoBehaviour
{

    [Serializable]
    public class ModelURLResponse
    {
        public string ModelURL;
        public string FileName;
    }

    UnityEngine.UI.Button Btn;
    private GameObject audioGO;
    private AudioClip buttonClip;
    private AudioSource audioSrc;
    public GameObject InputFieldGO;
    UnityEngine.UI.InputField inputField;

    public bool modelIDSpecificBtnClicked = false;
    public int IDSpecificGameObject = 0;
    //ScriptAfterModelInstantiated scriptAFIInstance;
    private string tempText = "dummy";
    public bool iDChanged = false;
    private FirebaseAuth auth;
    public string modelURL = null;
    public string modelFileName;
    private string devicePlatform;
    bool fileNotFound = false;



    void Start()
    {

        Btn = gameObject.GetComponent<UnityEngine.UI.Button>();
        Btn.onClick.AddListener(IDSpecificModelOperation);
        buttonClip = Resources.Load<AudioClip>("audios/button_audio");
        audioGO = new GameObject();
        audioSrc = audioGO.AddComponent<AudioSource>();
        InputFieldGO = GameObject.Find("HelpCanvas/InputField");
        inputField = GameObject.Find("HelpCanvas/InputField").GetComponent<UnityEngine.UI.InputField>();
        //inputID = inputField.text;
        inputField.text = "";
        inputField.onEndEdit.AddListener(delegate { ShowTargetObject(inputField); });
        InputFieldGO.SetActive(false);
        auth = FirebaseAuth.DefaultInstance;
        //scriptAFIInstance = GameObject.Find ("ImageTarget").GetComponent<ScriptAfterModelInstantiated> ();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void IDSpecificModelOperation()
    {
        modelIDSpecificBtnClicked = true;
        InputFieldGO.SetActive(true);
        audioSrc.clip = buttonClip;
        audioSrc.volume = 1.0f;
        audioSrc.Play();
    }

    private void ShowTargetObject(UnityEngine.UI.InputField inputField)
    {
        if (inputField.text == "")
            return;
        inputField.text = inputField.text.ToUpper();
        Debug.Log("INFO: Input Text" + inputField.text);
        //if (auth.CurrentUser != null)
        if (inputField.text != "BIK5" && inputField.text != "TUR0")
        {
            //bool serverStatusDown = ServerStatusBy("backend.perinno.com");
            // bool serverStatusDown = false; //hardcoding to false at bug/issue in iOS does not work with Ping

            // if (!serverStatusDown)
            // {
            Debug.Log("INFO: Inside httprequest part");
            try
            {
                if (Application.platform == RuntimePlatform.Android)
                {
                    devicePlatform = "and";
                }
                else if (Application.platform == RuntimePlatform.IPhonePlayer)
                {
                    devicePlatform = "ios";
                }
                else
                {
#if UNITY_EDITOR
                    devicePlatform = "ios";
#endif
                    Debug.Log("Unknown device type");
                }

#if UNITY_ANDROID
                ServicePointManager.ServerCertificateValidationCallback = MyRemoteCertificateValidationCallback;
#endif
                var request = (HttpWebRequest)WebRequest.Create(String.Format("https://ms.perinno.com:82/api/getModelAssetBundle?key={0}&Platform={1}",
                                                                              inputField.text, devicePlatform));
                var response = (HttpWebResponse)request.GetResponse();
                StreamReader reader = new StreamReader(response.GetResponseStream());
                string jsonResponse = reader.ReadToEnd();
                ModelURLResponse modelURLResp = JsonUtility.FromJson<ModelURLResponse>(jsonResponse);
                Debug.Log("Model Response:" + modelURLResp.FileName + " " + modelURLResp.ModelURL);
                modelURL = modelURLResp.ModelURL;
                modelFileName = modelURLResp.FileName;

            }
            catch (WebException ex)
            {
                fileNotFound = true;
                Debug.Log("Webexception Message: " + ex.Message + " #Status# " + ex.Status);

                string errMsg = "Something went wrong! Try Again!";
                if (ex.Status == WebExceptionStatus.ProtocolError)
                    errMsg = "No model found for the entered ID! Try again";
                else if (ex.Status == WebExceptionStatus.ConnectFailure)
                    errMsg = "No internet connection. Connect to internet and try again!";
                else
                    errMsg = "Something went wrong! Try Again. If problem remains, email at contact@perinno.com";

                MNPopup popup = new MNPopup("", errMsg);
                popup.AddAction("OK", () =>
                {
                    Debug.Log("Ok action callback");
                    iDChanged = false; //make this false so that download is not called in scriptAftermodelInst.

                });
                popup.AddDismissListener(() =>
                {
                    Debug.Log("dismiss listener");
                });
                popup.Show();

                //modelURL = null; //clears any previous modelURL
                //iDChanged = false; //make this false so that download is not called in scriptAftermodelInst.
            }

            if (modelURL != null && auth.CurrentUser != null)
            {
                inputField.text = "URL";
            }

            if (modelURL != null && auth.CurrentUser == null)
            {
                inputField.text = "NLU"; // No login user
            }

            if (modelURL == null && auth.CurrentUser == null)
            {
                inputField.text = inputField.text.ToUpper();
            }

            // }
            /*  else
              {
                  MNPopup popup = new MNPopup("", "Server Down! Try after sometime!");
                  popup.AddAction("OK", () =>
                  {
                      Debug.Log("Ok action callback");

                  });
                  popup.AddDismissListener(() =>
                  {
                      Debug.Log("dismiss listener");
                  });
                  popup.Show();
                  return;
              }*/

        }

        if (( inputField.text == "BIK5" || inputField.text == "TUR0") && auth.CurrentUser != null)
        {
            inputField.text = "DEMO0";
            fileNotFound = true;
        }


        if (tempText != inputField.text || modelURL != null)
        {
            iDChanged = true;
            tempText = inputField.text;
            if (fileNotFound)
            {
                iDChanged = false;
                fileNotFound = false;

            }
        }
        switch (inputField.text)
        {
            /*case "CAR1":
                IDSpecificGameObject = 1;
                InputFieldGO.SetActive(false);
                inputField.text = "";
                break;*/
            case "BIK5":
                IDSpecificGameObject = 2;
                InputFieldGO.SetActive(false);
                inputField.text = "";
                break;
            case "TUR0":
                IDSpecificGameObject = 0;
                InputFieldGO.SetActive(false);
                inputField.text = "";
                break;
            case "URL":
                IDSpecificGameObject = 2048;
                InputFieldGO.SetActive(false);
                inputField.text = "";
                break;
            case "NLU":
                IDSpecificGameObject = 1001;
                InputFieldGO.SetActive(false);
                inputField.text = "";
                break;
            case "DEMO0":
                inputField.text = "";
                string msg = "Demo Model ID, can be used only when you are not logged-in.";
                MNPopup popup1 = new MNPopup("", msg);
                popup1.AddAction("OK", () =>
                {
                    Debug.Log("Ok action callback");
                    iDChanged = false; //make this false so that download is not called in scriptAftermodelInst.


                });
                popup1.AddDismissListener(() =>
                {
                    Debug.Log("dismiss listener");
                });
                popup1.Show();
                break;
            default:
                inputField.text = "";
                MNPopup popup = new MNPopup("", "No model found for the entered ID! Try again! OR Go back to the default model by entering TUR0");
                popup.AddAction("OK", () =>
                {
                    Debug.Log("Ok action callback");
                });
                popup.AddDismissListener(() =>
                {
                    Debug.Log("dismiss listener");
                });
                popup.Show();
                break;
        }

    }

    bool ServerStatusBy(string url)

    {
        //Return true if server is down or not found
        System.Net.NetworkInformation.Ping pingSender = new System.Net.NetworkInformation.Ping();
        try
        {
            PingReply reply = pingSender.Send(url, 30 * 1000);
            Debug.Log("Status of Host: {0}" + url);
            if (reply.Status == IPStatus.Success)
            {
                Debug.Log("IP Address: {0}" + reply.Address.ToString());
                Debug.Log("RoundTrip time: {0}" + reply.RoundtripTime);
                Debug.Log("Time to live: {0}" + reply.Options.Ttl);
                Debug.Log("Don't fragment: {0}" + reply.Options.DontFragment);
                Debug.Log("Buffer size: {0}" + reply.Buffer.Length);
                return false;
            }

            else
            {
                return true;
            }
        }
        catch (Exception ex)
        {
            Debug.Log("WARNING: Server name does not exist as " + ex.Message);
            return true;
        }

    }

#if UNITY_ANDROID
    public bool MyRemoteCertificateValidationCallback(System.Object sender,
    X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
    {
        bool isOk = true;
        // If there are errors in the certificate chain,
        // look at each error to determine the cause.
        if (sslPolicyErrors != SslPolicyErrors.None)
        {
            for (int i = 0; i < chain.ChainStatus.Length; i++)
            {
                if (chain.ChainStatus[i].Status == X509ChainStatusFlags.RevocationStatusUnknown)
                {
                    continue;
                }
                chain.ChainPolicy.RevocationFlag = X509RevocationFlag.EntireChain;
                chain.ChainPolicy.RevocationMode = X509RevocationMode.Online;
                chain.ChainPolicy.UrlRetrievalTimeout = new TimeSpan(0, 1, 0);
                chain.ChainPolicy.VerificationFlags = X509VerificationFlags.AllFlags;
                bool chainIsValid = chain.Build((X509Certificate2)certificate);
                if (!chainIsValid)
                {
                    isOk = false;
                    break;
                }
            }
        }
        return isOk;
    }
#endif

}
