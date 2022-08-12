using HoloToolkit.Examples.InteractiveElements;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Experimental.UIElements;
using UnityEngine.UI;
using System.Net;
using System.IO;
using System.Security.Cryptography.X509Certificates;
using System.Net.Security;
using HoloToolkit.Examples.UX;
using HoloToolkit.UX.Progress;
using HoloToolkit.Unity;
//using Dummiesman;

public class LoginSceneScript : MonoBehaviour {
    [Serializable]
    public class HoloLinkedAccount
    {
        public string email;
        public string holoid;
    }

    TextMesh accountTxt;
    const float TIME_TO_WAIT = 3.0f;
    float timer = TIME_TO_WAIT;
    const string urlToCheck = "https://ms.perinno.com:82/api/checkhololenslink?key=";
    string devicename;
    bool accountInfoChanged = false;
    GameObject SceneContentGO;
    GameObject LinkModelSceneGO;
    GameObject BtnGO;
    TextMesh BtnLabel;
    GameObject LinkMMPageGO;
    TextMesh linkMMPageTxt;
    GameObject ScanQRCodeGO;
    TextMesh scanQRText;
    GameObject EnterCodeGO;
    TextMesh enterCodeText;
    GameObject BtnDemo;
    TextMesh BtnDemoLabel;
    GameObject HelpGO;
    TextMesh emailHolderInfoTxt;
    TextMesh ViewModeTxt;
    GameObject BtnGoBackGO;
    GameObject HelpSceneGO;
    GameObject BtnGoBackHelpSceneGO;
    public GameObject EmailInfoHolderGO;  
    ProgressExamples examples;
    bool IsLinkModelPageOption = false;
    bool IsScanQRCodeOption = false;
    bool IsEnterCodeOption = false;
    private TextToSpeech textToSpeechMgr = null;
    GameObject audioGO;
    AudioSource audioSource;
    AudioClip _audioButtonClick;
    //AudioClip _audioModelDownloaded;
    const short AUDIO_BUTTON_CLICK = 1;
    bool test = true;
    // Use this for initialization
    void Awake()
    {
        //GCSettings.LatencyMode = GCLatencyMode.SustainedLowLatency;
        InitAudio();
    }

    void Start () {
        devicename = SystemInfo.deviceName;

        //C:\Data\Users\rohit\Pictures\sh.obj
        //GameObject loadedObject = new OBJLoader().Load(@"C:/Data/Users/rohit/Pictures/sh.obj");
        //GameObject loadedObject = new OBJLoader().Load(@"C:/Users/R/Downloads/Lotus_Hot_Wheels_OBJ/Lotus_Hot_Wheels_OBJ/Lotus_HW_OBJ.obj");
        ////GameObject go1 = Instantiate(loadedObject, new Vector3(0.5f, 0.25f, 2.0f), new Quaternion(0, 0, 0, 0));
        //loadedObject.transform.localScale = new Vector3(0.002f, 0.002f, 0.002f);
        //loadedObject.transform.localPosition = new Vector3(0.5f, 0.25f, 2.0f);
        /*
        BtnGO = GameObject.Find("SceneContent/MainMenu/Button").gameObject;
        BtnLabel = BtnGO.transform.Find("Label").GetComponent<TextMesh>();
        BtnGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsEnabled = false;
        BtnDemo = GameObject.Find("SceneContent/MainMenu/Demo").gameObject;
        BtnDemoLabel = BtnDemo.transform.Find("Label").GetComponent<TextMesh>();
        EmailInfoHolderGO = GameObject.Find("EmailInfoHolder");
        DontDestroyOnLoad(EmailInfoHolderGO);
        emailHolderInfoTxt = GameObject.Find("EmailInfoHolder/Text").GetComponent<TextMesh>();
        isTrialModeTxt = GameObject.Find("EmailInfoHolder/IsTrialMode").GetComponent<TextMesh>();
        examples = UnityEngine.Object.FindObjectOfType<ProgressExamples>();
        textToSpeechMgr = GameObject.Find("SpeechManager").GetComponent<TextToSpeech>();
        Debug.Log("INFO: Found textToSpeechMgr " + textToSpeechMgr.Voice);
        */
        textToSpeechMgr = GameObject.Find("SpeechManager").GetComponent<TextToSpeech>();

        SceneContentGO = GameObject.Find("SceneContent").gameObject;

        LinkMMPageGO = GameObject.Find("SceneContent/MainMenu/LinkModelManagementPage").gameObject;
        linkMMPageTxt = LinkMMPageGO.transform.Find("Label").GetComponent<TextMesh>();

        ScanQRCodeGO = GameObject.Find("SceneContent/MainMenu/ScanQRCode").gameObject;
        scanQRText = ScanQRCodeGO.transform.Find("Label").GetComponent<TextMesh>();

        EnterCodeGO = GameObject.Find("SceneContent/MainMenu/UseCode").gameObject;
        enterCodeText = EnterCodeGO.transform.Find("Label").GetComponent<TextMesh>();

        BtnDemo = GameObject.Find("SceneContent/MainMenu/Demo").gameObject;
        BtnDemoLabel = BtnDemo.transform.Find("Label").GetComponent<TextMesh>();

        HelpGO = GameObject.Find("SceneContent/MainMenu/Help").gameObject;

        EmailInfoHolderGO = GameObject.Find("EmailInfoHolder");
        DontDestroyOnLoad(EmailInfoHolderGO);
        emailHolderInfoTxt = GameObject.Find("EmailInfoHolder/Text").GetComponent<TextMesh>();
        ViewModeTxt = GameObject.Find("EmailInfoHolder/ViewMode").GetComponent<TextMesh>();

        examples = UnityEngine.Object.FindObjectOfType<ProgressExamples>();

        LinkModelSceneGO = GameObject.Find("LinkModelScene").gameObject;
        BtnGO = GameObject.Find("LinkModelScene/MainMenu/Button").gameObject;
        BtnLabel = BtnGO.transform.Find("Label").GetComponent<TextMesh>();
        BtnGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsEnabled = false;
        BtnGoBackGO = GameObject.Find("LinkModelScene/MainMenu/GoBack").gameObject;
        TextMesh infoTxt = GameObject.Find("LinkModelScene/MainMenu/Code/Text").GetComponent<TextMesh>();
        accountTxt = GameObject.Find("LinkModelScene/MainMenu/Email/Text").GetComponent<TextMesh>();
        infoTxt.text = devicename;
        LinkModelSceneGO.SetActive(false);

        HelpSceneGO = GameObject.Find("HelpScene").gameObject;
        BtnGoBackHelpSceneGO = GameObject.Find("HelpScene/MainMenu/GoBack").gameObject;
        HelpSceneGO.SetActive(false);
        ServicePointManager.ServerCertificateValidationCallback = MyRemoteCertificateValidationCallback;
    }


    // Update is called once per frame
    void Update () {
      
        if(!accountInfoChanged && IsLinkModelPageOption)
        {
            timer -= Time.deltaTime;
            examples.LaunchProgress(HoloToolkit.UX.Progress.IndicatorStyleEnum.AnimatedOrbs, HoloToolkit.UX.Progress.ProgressStyleEnum.None);

        }

     
      if(timer < 0 && !accountInfoChanged && IsLinkModelPageOption)
      {
          timer = TIME_TO_WAIT;
          try
          {
              
              string checkIfHoloConnectedURI = urlToCheck + devicename;
              var request = (HttpWebRequest)WebRequest.Create(checkIfHoloConnectedURI);
              var response = (HttpWebResponse)request.GetResponse();
              if (response != null)
              {
                  StreamReader reader = new StreamReader(response.GetResponseStream());
                  string jsonResponse = reader.ReadToEnd();
                  HoloLinkedAccount holoLinkedAccount = JsonUtility.FromJson<HoloLinkedAccount>(jsonResponse);
                  string tempAccountHolder = accountTxt.text;
                  emailHolderInfoTxt.text = holoLinkedAccount.email;
                  accountTxt.text = holoLinkedAccount.email;
                  ViewModeTxt.text = "LinkModelPageOption";
                  //accountTxt.horizontalOverflow = HorizontalWrapMode.Wrap;
                  if (tempAccountHolder != accountTxt.text)
                  {
                      ProgressIndicator.Instance.Close();
                      ProgressIndicator.Instance.gameObject.SetActive(false);
                      accountInfoChanged = true;
                      BtnGO.SetActive(true);
                      BtnGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsEnabled = true;
                      textToSpeechMgr.StartSpeaking("Click proceed to enter the model view. It may take few seconds.");
                      //LoadModelScene();//test
                  }
              }
          }
          catch (WebException ex)
          {
              Debug.Log("ERROR: Webexception Message: " + ex.Message + " Status: " + ex.Status);
          }

      }

      if(BtnGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && BtnLabel.text == "Proceed" && accountInfoChanged)
      {
          //test = false;
          PlaySound(AUDIO_BUTTON_CLICK);
          BtnLabel.text = "Proceeding";
          LoadModelScene();
      }
      

        if (LinkMMPageGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && linkMMPageTxt.text == "Link Model Page")
        {
            //test = false;
            PlaySound(AUDIO_BUTTON_CLICK);
            LinkMMPageGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            linkMMPageTxt.text = "Proceeding";
            SceneContentGO.SetActive(false);
            LinkModelSceneGO.SetActive(true);
            IsLinkModelPageOption = true;
        }

        if (BtnGoBackGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected )
        {
            PlaySound(AUDIO_BUTTON_CLICK);
            BtnGoBackGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            SceneContentGO.SetActive(true);
            LinkModelSceneGO.SetActive(false);
            IsLinkModelPageOption = false;
            linkMMPageTxt.text = "Link Model Page";
            ViewModeTxt.text = "dummy";
            ProgressIndicator.Instance.Close();
            ProgressIndicator.Instance.gameObject.SetActive(false);
        }

        if (BtnDemo.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && BtnDemoLabel.text == "Demo")
        {
            test = false;
            textToSpeechMgr.StartSpeaking("Proceeding. It may take few seconds.");
            BtnDemo.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            BtnDemoLabel.text = "Proceeding";
            ViewModeTxt.text = "DemoModeOption";
            PlaySound(AUDIO_BUTTON_CLICK);
            LoadModelScene();
        }

        if (HelpGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected)
        {
            test = false;
            PlaySound(AUDIO_BUTTON_CLICK);
            HelpGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            SceneContentGO.SetActive(false);
            HelpSceneGO.SetActive(true);
            Debug.Log("INFO: Help Requested");
        }

        if (BtnGoBackHelpSceneGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected)
        {
            PlaySound(AUDIO_BUTTON_CLICK);
            BtnGoBackHelpSceneGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            SceneContentGO.SetActive(true);
            ViewModeTxt.text = "dummy";
            HelpSceneGO.SetActive(false);
        }

        if (ScanQRCodeGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected )
        {
            //test = false;
            PlaySound(AUDIO_BUTTON_CLICK);
            ScanQRCodeGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            SceneContentGO.SetActive(false);
            IsScanQRCodeOption = true;
            ViewModeTxt.text = "ScanModeOption";
            LoadModelScene();
        }

        if (EnterCodeGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected)
        {
           // test = false;
            PlaySound(AUDIO_BUTTON_CLICK);
            EnterCodeGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            SceneContentGO.SetActive(false);
            IsEnterCodeOption = true;
            ViewModeTxt.text = "CodeModeOption";
            LoadModelScene();
        }
    }


    private void LoadModelScene()
    {
        PlaySound(AUDIO_BUTTON_CLICK);
            examples.LaunchProgress(HoloToolkit.UX.Progress.IndicatorStyleEnum.AnimatedOrbs, HoloToolkit.UX.Progress.ProgressStyleEnum.None);
            SceneManager.LoadSceneAsync("scene2");
        
    }

    public bool MyRemoteCertificateValidationCallback(System.Object sender, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
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

    private void InitAudio()
    {
        try
        {
            _audioButtonClick = Resources.Load<AudioClip>("click");
            //_audioModelDownloaded = Resources.Load<AudioClip>("ImageModelRx");

        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine("WARNING: Failed to Load Audio Clips! " + ex.Message);
        }
        audioGO = new GameObject();
        audioSource = audioGO.AddComponent<AudioSource>();
    }

    private void PlaySound(short audioID)
    {
        if (audioID == AUDIO_BUTTON_CLICK)
        {
            audioSource.clip = _audioButtonClick;
            audioSource.Play();
        }

    }


}
