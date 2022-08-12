using HoloToolkit.Examples.Prototyping;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Net.Security;
//using System.Security.Cryptography.X509Certificates;
using HoloToolkit.UX.Progress;
using HoloToolkit.Examples.UX;
using HoloToolkit.Unity.InputModule;
using TMPro;
using System.Linq;
using HoloToolkit.UI.Keyboard;
using HoloToolkit.Unity;

public class DownloadModelThumbnails : MonoBehaviour, IInputClickHandler
{
    [Serializable]
    public class ModelURLResponse
    {
        public string ModelURL;
        public string FileName;
    }
    [Serializable]
    public class AllGetModelForUserResponse
    {
        public GetModelForUserResponse[] getModelJsonResp;
    }

    [Serializable]
    public class GetModelForUserResponse
    {
        public string date;
        public string code;
        public string filesize;
        public string views;
        public string rating_sum;
        public string shared_with;
    }
    [Serializable]
    public class ThumbnailAPIRespData
    {
        public string ModelCode;
        public string ThumbnailURL;
    }

    Button[] BtnModel;
    private List<Button> BtnModelList;
    //private string[] modelCode = new string[5];
    private string devicePlatform = "uwp";
    public string modelURL;
    public string modelFileName;
    public bool sharedModelSelected = false;
    public bool sharedModelSelectChange = false;
    private const string apiForUserModels = "https://ms.perinno.com:82/api/getUserModels";
    private const string urlThumbnail = "https://ms.perinno.com:82/api/getAssetThumbnail";
    AllGetModelForUserResponse getModelURLResp;
    private List<string> thumbnails = new List<string>();
    private List<string> codesFromThumbnail = new List<string>();
    private List<UnityEngine.UI.Image> thumbnailImages;
    private const float pos = 0.085f;
    private const float width = 180.0f;
    private const float ypos = -0.015f;
    private const float zpos = -0.015f;
    private const float zposSelected = -0.01f;
    private const float zposBack = -0.008f;
    GameObject placeholderGO;
    GameObject btnSpriteGO;
    Sprite spriteTemp;
    //HoloToolkit.Examples.InteractiveElements.Interactive interactiveTemp;
    List<HoloToolkit.Examples.InteractiveElements.Interactive> interactive = new List<HoloToolkit.Examples.InteractiveElements.Interactive>();
    GameObject selectedObjGO;
    public bool downloadedModelfromServer = false;
    WWW www;
    public GameObject targetObjTempGO;
    ProgressExamples examples;
    string emailUser;
    string exceptionMsg = null;
    HttpWebResponse responseData;
    GameObject progressIndicatorGO;
    GameObject directionIndicatorGO;
    //Audio Variables
    GameObject audioGO;
    AudioSource audioSource;
    AudioClip _audioButtonClick;
    AudioClip _audioModelDownloaded;
    AudioClip _audioScanQRCode;
    const short AUDIO_BUTTON_CLICK = 1;
    const short AUDIO_MODEL_DOWNLOADED = 2;
    const short AUDIO_SCAN = 3;
    TurbineManipulation turbineManipulationInstance;
    TextMesh ViewModeText;
    bool isScanMode = false;
    GameObject scanLogoGO1;
    GameObject scanHandGO;
    GameObject scanimationGO;
    TextMeshProUGUI scanInfoTxt;
    GameObject ModelPreviewPanelGO;
    GameObject ScanAgainGO;
    GameObject BtnScanMode;
    GameObject EnterCodeGO;
    GameObject BtnEnterCodeGO;
    GameObject KeyboardGO;
    string modelCode;
    bool codeRead;
    bool codeEntered;
    TextToSpeech textToSpeechMgr = null;
    bool testOnEditor = false;
    float timer = 100.0f;
    bool test = true;
    // Use this for initialization
    void Awake()
    {
        //GCSettings.LatencyMode = GCLatencyMode.SustainedLowLatency;
        InitAudio();
    }


    IEnumerator Start()
    {

        //while (LoadingDialog.Instance.IsLoading)
        //{
        //    yield return null;
        //}


        ProgressIndicator.Instance.Close();
        ProgressIndicator.Instance.gameObject.SetActive(false);
        directionIndicatorGO = GameObject.Find("DirectionPointer");
        Debug.Log("INFO: direction indicator found: " + directionIndicatorGO);
        directionIndicatorGO.SetActive(false);
        turbineManipulationInstance = GameObject.Find("TurbineManipulationManager").GetComponent<TurbineManipulation>();
        // progressIndicatorGO = GameObject.Find("ProgressIndicator");
        TextMesh emailInfoText = GameObject.Find("EmailInfoHolder/Text").GetComponent<TextMesh>();
        ViewModeText = GameObject.Find("EmailInfoHolder/ViewMode").GetComponent<TextMesh>();
        Debug.Log("INFO: Model View Option: " + ViewModeText.text);
        emailUser = emailInfoText.text;
        GameObject.Find("scanLogo").GetComponent<Canvas>().worldCamera = GameObject.Find("MixedRealityCameraParent/MixedRealityCamera").GetComponent<Camera>();
        scanimationGO = GameObject.Find("scanLogo/ScanTapGO/Scanimation");
        scanimationGO.SetActive(false);
        scanLogoGO1 = GameObject.Find("scanLogo/ScanTapGO");
        scanLogoGO1.SetActive(false);
        scanHandGO = GameObject.Find("scanLogo/TapHand");
        scanHandGO.SetActive(false);
        scanInfoTxt = GameObject.Find("scanLogo/ScanText/text").GetComponent<TextMeshProUGUI>();
        GameObject.Find("scanLogo/ScanText/text").SetActive(false);
        ModelPreviewPanelGO = GameObject.Find("ModelPanel");
        ScanAgainGO = GameObject.Find("ScanAgain").gameObject;
        BtnScanMode = ScanAgainGO.transform.Find("MainMenu/ScanMode").gameObject;
        ScanAgainGO.SetActive(false);
        EnterCodeGO = GameObject.Find("EnterCode").gameObject;
        BtnEnterCodeGO = EnterCodeGO.transform.Find("MainMenu/OpenCodePanel").gameObject;
        EnterCodeGO.SetActive(false);
        KeyboardGO = GameObject.Find("Keyboard").gameObject;
        //KeyboardGO.GetComponent<Canvas>().worldCamera = GameObject.Find("InputManager/EventSystem/UiRaycastCamera").GetComponent<Camera>();
        KeyboardGO.SetActive(false);
        examples = UnityEngine.Object.FindObjectOfType<ProgressExamples>();
        textToSpeechMgr = GameObject.Find("SpeechManager").GetComponent<TextToSpeech>();
        if (ViewModeText.text == "LinkModelPageOption")
        {
            textToSpeechMgr.StartSpeaking("You can click preview to download your uploaded models and replace the default 3D model. You can pinch and hold panels or 3D model to move them in the scene");
            string reqURI = apiForUserModels + "?userID=" + emailUser;
            Transform transformContent = GameObject.Find("ModelPanel/MainMenu").GetComponent<Transform>();
            placeholderGO = GameObject.Find("ModelPanel/MainMenu/Model1");
            btnSpriteGO = GameObject.Find("ModelPanel/MainMenu/ButtonBackground");
            TextMesh txtMesh = GameObject.Find("ModelPanel/MainMenu/Label").GetComponent<TextMesh>();
            GameObject backgroundGO = GameObject.Find("ModelPanel/MainMenu/Background");
            PanelTransformSize pts = GameObject.Find("ModelPanel/MainMenu/Background").GetComponent<PanelTransformSize>();
            //interactiveTemp = placeholderGO.GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>();
            selectedObjGO = GameObject.Find("ModelPanel/MainMenu/SelectedObjSprite");
            selectedObjGO.SetActive(false);
            Debug.Log("INFO: requestedURI is :" + reqURI);

            //ServicePointManager.ServerCertificateValidationCallback = MyRemoteCertificateValidationCallback;
            try
            {
                var request = (HttpWebRequest)WebRequest.Create(reqURI);
                responseData = (HttpWebResponse)request.GetResponse();
            }
            catch (WebException exception)
            {
                exceptionMsg = exception.Message;
                Debug.Log("ERROR: Webexception Message: " + exception.Message + " Status: " + exception.Status);
            }

            if (responseData != null && exceptionMsg == null)
            {
                //interactive = new HoloToolkit.Examples.InteractiveElements.Interactive[getModelURLResp.getModelJsonResp.Length];
                txtMesh.text = "Model Preview: Click to Download";
                StreamReader reader = new StreamReader(responseData.GetResponseStream());
                string jsonResponse = reader.ReadToEnd();
                getModelURLResp = JsonUtility.FromJson<AllGetModelForUserResponse>("{\"getModelJsonResp\":" + jsonResponse + "}");

                Debug.Log("INFO: JSON Response is :" + getModelURLResp.getModelJsonResp.Length);
                if (getModelURLResp.getModelJsonResp.Length > 3)
                {
                    pts.ItemSize.x = width * getModelURLResp.getModelJsonResp.Length + width;
                    if ((getModelURLResp.getModelJsonResp.Length) % 2 == 0)
                    {
                        backgroundGO.transform.localPosition = new Vector3(0.04f, -0.004f, 0);
                    }
                }

                for (int modelidx = 0; modelidx < getModelURLResp.getModelJsonResp.Length; modelidx++)
                {
                    string reqThumbnailURI = urlThumbnail + "?modelCode=" + getModelURLResp.getModelJsonResp[modelidx].code;
                    var requestThumbnail = (HttpWebRequest)WebRequest.Create(reqThumbnailURI);
                    var responseThumbnail = (HttpWebResponse)requestThumbnail.GetResponse();
                    StreamReader readerThumbnail = new StreamReader(responseThumbnail.GetResponseStream());
                    string jsonResponseThumbnail = readerThumbnail.ReadToEnd();
                    ThumbnailAPIRespData thumbnailResp = JsonUtility.FromJson<ThumbnailAPIRespData>(jsonResponseThumbnail);
                    Debug.Log("INFO: thumbnailResp " + thumbnailResp);
                    thumbnails.Add(thumbnailResp.ThumbnailURL);
                    codesFromThumbnail.Add(thumbnailResp.ModelCode);
                    Debug.Log("INFO: Code for Thumbnail: " + getModelURLResp.getModelJsonResp[modelidx].code);
                    Debug.Log("INFO: Code responded Thumbnail: " + thumbnailResp.ModelCode);
                    Debug.Log("INFO: Thumbnail URL: " + thumbnailResp.ThumbnailURL);
                    int buttonID = modelidx;
                    Texture2D tex = new Texture2D(4, 4, TextureFormat.DXT1, false);
                    //sprite = placeholderGO.GetComponent<SpriteRenderer>().sprite;
                    using (WWW www = new WWW(thumbnailResp.ThumbnailURL))
                    {
                        Debug.Log("INFO: ###### WWW dowload called ######## ");
                        yield return www;
                        if (!string.IsNullOrEmpty(www.error))
                        {
                            Debug.Log("ERROR: WWW Error : " + www.error);
                        }
                        else
                        {
                            www.LoadImageIntoTexture(tex);
                            Debug.Log("INFO: ########## tex details ######### " + tex.width + "##" + tex.height);
                            spriteTemp = Sprite.Create(tex, new Rect(0.0f, 0.0f, tex.width, tex.height), new Vector2(0.5f, 0.5f), 100.0f);
                            Debug.Log("INFO: ########## LoadImageIntoTex Called ######### " + spriteTemp);
                        }
                    }
                    if (modelidx == 0)
                    {
                        SpriteRenderer img = placeholderGO.GetComponent<SpriteRenderer>();
                        img.sprite = spriteTemp;
                        interactive.Add(placeholderGO.GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>());
                        //interactive[buttonID] = placeholderGO.GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>();
                        interactive[buttonID].OnSelectEvents.AddListener(delegate { SelectModel(buttonID); });
                        //BtnModel[buttonID] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model1").GetComponent<Button>();
                        //BtnModel[buttonID].onClick.AddListener(delegate { SelectedModel(buttonID); });

                    }
                    else
                    {
                        if ((modelidx + 1) % 2 == 0)
                        {
                            GameObject modelGO = Instantiate(placeholderGO, transformContent);
                            GameObject btnBackgroundGO = Instantiate(btnSpriteGO, transformContent);
                            btnBackgroundGO.transform.localPosition = new Vector3(((modelidx + 1) / 2) * pos, ypos, zposBack);
                            btnBackgroundGO.name = "buttonBackground" + (modelidx + 1).ToString();
                            modelGO.transform.localPosition = new Vector3(((modelidx + 1) / 2) * pos, ypos, zpos);
                            SpriteRenderer imgModel = modelGO.GetComponent<SpriteRenderer>();
                            imgModel.sprite = spriteTemp;
                            modelGO.name = "Model" + (modelidx + 1).ToString();
                            interactive.Add(GameObject.Find("ModelPanel/MainMenu/Model" + (modelidx + 1).ToString()).GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>());

                            //interactive[buttonID] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model" + (modelidx + 1).ToString()).GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>();
                            interactive[buttonID].OnSelectEvents.AddListener(delegate { SelectModel(buttonID); });
                        }
                        else
                        {
                            GameObject modelGO = Instantiate(placeholderGO, transformContent);
                            GameObject btnBackgroundGO = Instantiate(btnSpriteGO, transformContent);
                            btnBackgroundGO.transform.localPosition = new Vector3(-pos * (modelidx) / 2, ypos, zposBack);
                            btnBackgroundGO.name = "buttonBackground" + (modelidx + 1).ToString();
                            modelGO.transform.localPosition = new Vector3(-pos * (modelidx) / 2, ypos, zpos);
                            SpriteRenderer imgModel = modelGO.GetComponent<SpriteRenderer>();
                            imgModel.sprite = spriteTemp;
                            modelGO.name = "Model" + (modelidx + 1).ToString();
                            interactive.Add(GameObject.Find("ModelPanel/MainMenu/Model" + (modelidx + 1).ToString()).GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>());
                            //interactive[buttonID] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model" + (modelidx + 1).ToString()).GetComponent<HoloToolkit.Examples.InteractiveElements.Interactive>();
                            interactive[buttonID].OnSelectEvents.AddListener(delegate { SelectModel(buttonID); });
                        }
                    }
                    if ((modelidx == getModelURLResp.getModelJsonResp.Length - 1) && testOnEditor)
                    {
                        SelectModel(getModelURLResp.getModelJsonResp.Length - 1);
                    }
                }
            }
        }
        else if (ViewModeText.text == "DemoModeOption")
        {
            textToSpeechMgr.StartSpeaking("You have entered demo mode scene. Use the model manipulation to interact with the turbine. You can pinch and hold panels or 3D model to move them in the scene");
            Debug.Log("INFO: In trial mode");
            directionIndicatorGO.SetActive(true);
            directionIndicatorGO.transform.parent = GameObject.Find("Colored_turbine").transform;
            SelectModel(-1);
        }
        else if(ViewModeText.text == "ScanModeOption")
        {
            textToSpeechMgr.StartSpeaking("Click Scan QR code to scan and download your model and replace the default model. You can pinch and hold panels or 3D model to move them in the scene");
            Debug.Log("INFO: Scanning Mode Selected");
            InputManager.Instance.PushFallbackInputHandler(gameObject);
            GameObject.Find("scanLogo/ScanText/text").SetActive(true);
            ScanAgainGO.SetActive(true);
            ModelPreviewPanelGO.SetActive(false);
        }
        else if (ViewModeText.text == "CodeModeOption")
        {
            textToSpeechMgr.StartSpeaking("Click enter code button to enter code and download your model and replace the default model. You can pinch and hold panels or 3D model to move them in the scene");
            Debug.Log("INFO: Code Mode Selected");
            GameObject.Find("scanLogo").SetActive(false);
            EnterCodeGO.SetActive(true);
            ModelPreviewPanelGO.SetActive(false);

        }
        else
        {
            Debug.Log("INFO: Mode not found");
        }
    }

    //private void Keyboard_OnTextUpdated(string enteredCode)
    //{
    //    modelCode = enteredCode.ToUpper();
    //    codeEntered = true;
    //}

    private void Keyboard_OnClosed(object sender, EventArgs e)
    {
        // Unsubscribe from delegate functions
        //Keyboard.Instance.OnTextUpdated -= Keyboard_OnTextUpdated;
        Keyboard.Instance.OnTextSubmitted -= Keyboard_OnTextSubmitted;
        Keyboard.Instance.OnClosed -= Keyboard_OnClosed;
    }

    // Update is called once per frame
    void Update()
    {
        //timer -= Time.deltaTime;
        if (timer < 0 && testOnEditor)
        {
            timer = 5000.0f;
            SelectModel(getModelURLResp.getModelJsonResp.Length - 3);
        }

        if(codeRead)
        {
            codeRead = false;
            SelectModel(-1);
        }

        if (codeEntered)
        {
            codeEntered = false;
            //test = false;
            //modelCode = "EY2F";
            SelectModel(-1);
        }

        if (BtnScanMode.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected)
        {
            //test = false;
            Debug.Log("INFO: Scan mode button selected");
            PlaySound(AUDIO_BUTTON_CLICK);
            BtnScanMode.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            OnScanMode();
        }

        if (BtnEnterCodeGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected)
        {
            //test = false;
            Debug.Log("INFO: Code mode button selected");
            PlaySound(AUDIO_BUTTON_CLICK);
            BtnEnterCodeGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            //KeyboardGO.SetActive(true);
            //Keyboard.Instance.Close();
            Keyboard.Instance.PresentKeyboard();
            //Keyboard.Instance.OnTextUpdated += Keyboard_OnTextUpdated;
            Keyboard.Instance.OnTextSubmitted += Keyboard_OnTextSubmitted;
            Keyboard.Instance.OnClosed += Keyboard_OnClosed;
            //KeyboardGO.SetActive(true);
        }
    }

    private void Keyboard_OnTextSubmitted(object sender, EventArgs e)
    {
        Keyboard keyboard = (Keyboard)sender;
        modelCode = (keyboard.InputField.text).ToUpper();
        Debug.Log("INFO: modecode is:" + modelCode);
        codeEntered = true;
    }


    //public bool MyRemoteCertificateValidationCallback(System.Object sender, X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
    //{
    //    bool isOk = true;
    //    // If there are errors in the certificate chain,
    //    // look at each error to determine the cause.
    //    if (sslPolicyErrors != SslPolicyErrors.None)
    //    {
    //        for (int i = 0; i < chain.ChainStatus.Length; i++)
    //        {
    //            if (chain.ChainStatus[i].Status == X509ChainStatusFlags.RevocationStatusUnknown)
    //            {
    //                continue;
    //            }
    //            chain.ChainPolicy.RevocationFlag = X509RevocationFlag.EntireChain;
    //            chain.ChainPolicy.RevocationMode = X509RevocationMode.Online;
    //            chain.ChainPolicy.UrlRetrievalTimeout = new TimeSpan(0, 1, 0);
    //            chain.ChainPolicy.VerificationFlags = X509VerificationFlags.AllFlags;
    //            bool chainIsValid = chain.Build((X509Certificate2)certificate);
    //            if (!chainIsValid)
    //            {
    //                isOk = false;
    //                break;
    //            }
    //        }
    //    }
    //    return isOk;
    //}

    void SelectModel(int buttonID)
    {
        Debug.Log("INFO: Select Model Button clicked");
        if (ViewModeText.text != "DemoModeOption")
        {
            PlaySound(AUDIO_BUTTON_CLICK);
            Debug.Log("INFO: Not a demo mode button click");
        }

        turbineManipulationInstance.ResetAllButtons();
        try
        {
            if (ViewModeText.text == "LinkModelPageOption")
            {
                modelCode = getModelURLResp.getModelJsonResp[buttonID].code;
            }
            else if (ViewModeText.text == "ScanModeOption")
            {
                Debug.Log("INFO: Model Downloading through:" + ViewModeText.text);
            }
            else if (ViewModeText.text == "CodeModeOption")
            {
                Debug.Log("INFO: Model Downloading through:" + ViewModeText.text);
            }
            else if(ViewModeText.text == "DemoModeOption")
            {
                modelCode = "DEMO_MODE";
            }
            else
            {
                Debug.Log("WARNING: Unknown Mode");
            }

            var request = (HttpWebRequest)WebRequest.Create(String.Format("https://ss.perinno.com:82/api/getModelAssetBundle?key={0}&Platform={1}",
                                                                          modelCode, devicePlatform));
            var response = (HttpWebResponse)request.GetResponse();
            StreamReader reader = new StreamReader(response.GetResponseStream());
            string jsonResponse = reader.ReadToEnd();
            ModelURLResponse modelURLResp = JsonUtility.FromJson<ModelURLResponse>(jsonResponse);
            Debug.Log("INFO: Model Response:" + modelURLResp.FileName + " : " + modelURLResp.ModelURL);
            modelURL = modelURLResp.ModelURL;
            modelFileName = modelURLResp.FileName;
            if(ViewModeText.text == "LinkModelPageOption")
            {
                selectedObjGO.SetActive(true);
                if ((buttonID + 1) % 2 == 0)
                {
                    selectedObjGO.transform.localPosition = new Vector3(((buttonID + 1) / 2) * pos, ypos, zposSelected);
                }
                else
                {
                    selectedObjGO.transform.localPosition = new Vector3(-pos * (buttonID) / 2, ypos, zposSelected);
                }
            }
            if (ViewModeText.text == "ScanModeOption")
            {
                scanInfoTxt.text = "QR code:" + modelCode;
            }
  

            StartCoroutine(DownloadModelFromURL(modelURL, modelFileName));
        }
        catch (WebException ex)
        {
            Debug.Log("ERROR: Webexception Message: " + ex.Message + " Status: " + ex.Status);
            if(ViewModeText.text == "ScanModeOption")
            {
                scanInfoTxt.text = "Download failed or no model associated with the QR code: " + System.Environment.NewLine + modelCode + System.Environment.NewLine + "Try scanning again";
            }

            if (ViewModeText.text == "CodeModeOption")
            {
                Debug.Log("INFO: No model associated with the entered code. Try again. Model code:" + modelCode);
                textToSpeechMgr.StartSpeaking("Download failed or no model associated with the entered code. Try again.");
            }
        }

    }

    IEnumerator DownloadModelFromURL(string modelURL, string modelFileName)
    {
        Debug.Log("INFO: Download of asset bundle started");
        examples.LaunchProgress(HoloToolkit.UX.Progress.IndicatorStyleEnum.AnimatedOrbs, HoloToolkit.UX.Progress.ProgressStyleEnum.None);

        using (www = new WWW(modelURL))
        {
            yield return www;

            if (www.error != null)
            {
                Debug.Log("ERROR: Failed to get Asset Bundle " + www.error);
            }
            else
            {
                AssetBundle bundle = www.assetBundle;
                Debug.Log("AssetBundle" + bundle);
                UnityEngine.Object assetObject = bundle.LoadAsset(modelFileName);


                Texture2D[] textures = bundle.LoadAllAssets<Texture2D>();

                if (assetObject == null)
                {
                    Debug.Log("ERROR: Failed to Load 3D Model, model file name extracted from the bundle is not same as that of original file used to make bundle");
                }
                else
                {
                    //if(targetObjTempGO != null)
                    //{
                    //    Destroy(targetObjTempGO);
                    //    targetObjTempGO = null;
                    //}
                    targetObjTempGO = (GameObject)Instantiate(assetObject, new Vector3(0, 0.25f, 2.0f), new Quaternion(0, 0, 0, 0));
                    if (targetObjTempGO.transform.Find("Camera") != null)
                    {
                        Destroy(targetObjTempGO.transform.Find("Camera").gameObject);//.SetActive(false);
                    }

                    if (targetObjTempGO.transform.Find("Lamp") != null)
                    {
                        Destroy(targetObjTempGO.transform.Find("Lamp").gameObject);//.SetActive(false);
                    }
                    PlaySound(AUDIO_MODEL_DOWNLOADED);
                    ProgressIndicator.Instance.Close();
                    ProgressIndicator.Instance.gameObject.SetActive(false);
                    if (ViewModeText.text == "ScanModeOption")
                    {
                        scanInfoTxt.text = "";
                    }

                    if(ViewModeText.text == "CodeModeOption")
                    {
                        Keyboard.Instance.Close();
                    }
                       
                    Debug.Log("INFO: Instantiated gameobject is:" + targetObjTempGO.name);
                    if (textures.Length != 0)
                    {
                        Debug.Log("Textures are:" + textures[0].name + textures.Length);
                        Texture2D mainTexture = null;

                        for (int i = 0; i < textures.Length; i++)
                        {
                            if (textures[i].name == "MainTexture")
                            {
                                mainTexture = textures[i];

                            }
                        }
                        //ADD CONDITION IF PARENTS HAVE SOME PART THAT IS RENDERER
                        if (targetObjTempGO.GetComponent<Renderer>() != null)
                        {
                            targetObjTempGO.GetComponent<Renderer>().sharedMaterial.mainTexture = mainTexture;
                        }
                        foreach (var c in targetObjTempGO.GetComponentsInChildren<MeshRenderer>())
                        {
                            c.material.SetTexture("_MainTex", mainTexture); //Replace this with mainTexture
                        }
                    }

                    ///////////

                    ApplyCollider(targetObjTempGO);
                    Debug.Log("INFO: Scale of original gameobject" + targetObjTempGO.transform.localScale);
                    GameObject sphereGO = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                    sphereGO.transform.position = new Vector3(0, 0.25f, 2.0f);

                    SphereCollider sphere = sphereGO.AddComponent<SphereCollider>();
                    sphere.radius = 0.5f;
                    targetObjTempGO.transform.localScale = ScaleToCollider(targetObjTempGO, sphere);
                    Destroy(sphereGO);
                    Vector3 scaleTempGO3 = targetObjTempGO.transform.localScale;
                    Debug.Log("Updated Scale of gameobject" + targetObjTempGO.transform.localScale);
                    //GOoriginalScale = scaleTempGO3;
                    //ApplyCollider(targetObjTempGO);
                    Vector3 targetObjTempGOCenter = GetMeshHierarchyBounds(targetObjTempGO).center;//targetObjTempGO.GetComponent<Collider>().bounds.center;//
                    Debug.Log("INFO: Instantiated gameobject redenrer center:" + targetObjTempGOCenter);
                    targetObjTempGO.transform.Translate(new Vector3(0 - targetObjTempGOCenter.x, 0.25f - targetObjTempGOCenter.y, 2.0f - targetObjTempGOCenter.z), Space.World);
                    directionIndicatorGO.SetActive(true);
                    directionIndicatorGO.transform.parent = targetObjTempGO.transform;
                    targetObjTempGO.AddComponent<HoloToolkit.Unity.InputModule.HandDraggable>();
                    downloadedModelfromServer = true;
                    if (targetObjTempGO == null)
                    {
                        Debug.Log("ERROR: Failed to Instantiate 3D Model");
                    }

                    StartCoroutine(UnloadAssetBundle(bundle));
                }
            }
        }
    }


    IEnumerator UnloadAssetBundle(AssetBundle bundle)
    {
        //Need to do this in seperate thread so that assetLoad is not interupted
        yield return new WaitForSeconds(3);
        bundle.Unload(false); // To do clear the memory, may be needed to change this for cache version, check! 

    }

    private Vector3 ScaleToCollider(GameObject objectToScale, SphereCollider sphere)
    {
        var currentScale = objectToScale.transform.localScale;
        var currentSize = GetMeshHierarchyBounds(objectToScale).size;
        Debug.Log("INFO : Current Size:" + currentSize);
        var targetSize = (sphere.radius * 2);

        float newSizeRatioX = targetSize / currentSize.x;
        float newSizeRatioY = targetSize / currentSize.y;
        float newSizeRatioZ = targetSize / currentSize.z;

        float minimumNewSizeRatio = Math.Min(newSizeRatioX, Math.Min(newSizeRatioY, newSizeRatioZ));

        Vector3 newScale = currentScale * minimumNewSizeRatio;

        Debug.Log("INFO: Current scale:" + currentScale + "targetSize:" + targetSize + "currentSize:" + currentSize + "newScale:" + newScale + "currentScale.x:" + currentScale.x + "currentSize.x:" + currentSize.x);

        return newScale;
    }

    private Bounds GetMeshHierarchyBounds(GameObject go)
    {
        var bounds = new Bounds(); // Not used, but a struct needs to be instantiated

        SkinnedMeshRenderer[] skinR = go.GetComponentsInChildren<SkinnedMeshRenderer>();
        Debug.Log("INFO: skinR" + skinR.Length);
        if (skinR.Length > 0)
        {
            Debug.Log("INFO: Skinned Mesh Renderer Present");
            foreach (var c in go.GetComponentsInChildren<Transform>())
            {
                if(c.gameObject.GetComponent<SkinnedMeshRenderer>() != null)
                {
                    if(c.localScale.x > 1)
                    {
                        var bounds1 = Vector3.Scale(c.gameObject.GetComponent<SkinnedMeshRenderer>().localBounds.extents, c.localScale * 0.5f);
                        bounds.Encapsulate(bounds1);
                    }
                    else
                    {
                        bounds.Encapsulate(c.gameObject.GetComponent<SkinnedMeshRenderer>().localBounds);
                    }
                    
                    
                }
            }
        }
        else
        {

            if (go.GetComponent<Renderer>() != null)
            {
                bounds = go.GetComponent<Renderer>().bounds;
                // Make sure the parent is included
                Debug.Log("Found parent bounds: " + bounds);
                //bounds.Encapsulate(go.renderer.bounds);
            }

            foreach (var c in go.GetComponentsInChildren<MeshRenderer>())
            {
                //Debug.Log("Found {0} bounds are {1}" + c.name + c.bounds);
                if (bounds.size == Vector3.zero)
                {
                    bounds = c.bounds;
                }
                else
                {
                    bounds.Encapsulate(c.bounds);
                }
            }
        }
        //Destroy(go.GetComponent<Renderer>()); //TEST THIS
        return bounds;
    }

    void ApplyCollider(GameObject gameObjectToApplyRenderer)
    {
        Renderer renderer = gameObjectToApplyRenderer.GetComponent<Renderer>();
        if (renderer == null)
        {
            Debug.Log("INFO: No Renderer Found");
            gameObjectToApplyRenderer.AddComponent<MeshRenderer>();
            //gameObject.GetComponent<Renderer>().material = new Material(Shader.Find("Diffuse"));
            Renderer[] allRenderers = gameObjectToApplyRenderer.GetComponentsInChildren<Renderer>();
            foreach (Renderer R in allRenderers)
            {
                R.gameObject.AddComponent<MeshCollider>();
            }
        }

        SkinnedMeshRenderer[] skinR = gameObjectToApplyRenderer.GetComponentsInChildren<SkinnedMeshRenderer>();
        if (skinR.Length > 0)
        {

            foreach (var c in gameObjectToApplyRenderer.GetComponentsInChildren<SkinnedMeshRenderer>())
            {
                Mesh colliderMesh = new Mesh();
                c.BakeMesh(colliderMesh);
                c.gameObject.GetComponent<MeshCollider>().sharedMesh = null;
                c.gameObject.GetComponent<MeshCollider>().sharedMesh = colliderMesh;
                c.gameObject.AddComponent<MeshFilter>();
                c.gameObject.GetComponent<MeshFilter>().sharedMesh = null;
                c.gameObject.GetComponent<MeshFilter>().sharedMesh = colliderMesh;
            }

        }
    }

    private void InitAudio()
    {
        try
        {
            _audioButtonClick = Resources.Load<AudioClip>("click");
            _audioModelDownloaded = Resources.Load<AudioClip>("ImageModelRx");
            _audioScanQRCode = Resources.Load<AudioClip>("scan");

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
        else if (audioID == AUDIO_MODEL_DOWNLOADED)
        {
            audioSource.clip = _audioModelDownloaded;
            audioSource.Play();
        }
        else if(audioID == AUDIO_SCAN)
        {
            audioSource.clip = _audioScanQRCode;
            audioSource.Play();
        }
    }

    public void OnInputClicked(InputClickedEventData eventData)
    {
        Debug.Log("INFO: Onclick Input Source" + eventData.InputSource);

        if (isScanMode)
        {
            Debug.Log("INFO: QR Code Clicked");
            PlaySound(AUDIO_BUTTON_CLICK);
            OnScan(); 
        }
    }

    public void OnScanMode()
    {
            isScanMode = true;
            scanLogoGO1.SetActive(true);
            scanHandGO.SetActive(true);
            scanimationGO.SetActive(false);
            scanInfoTxt.text = "";
            Debug.Log("INFO: Entering Scan Mode...");
#if UNITY_EDITOR
            OnScan();
#endif
    }


    void OnScan()
    {
        if (isScanMode)
        {
            scanInfoTxt.text = "Scanning...";
            scanHandGO.SetActive(false);
            scanimationGO.SetActive(true);
            PlaySound(AUDIO_SCAN);
#if UNITY_EDITOR
            codeRead = true;
#endif
#if !UNITY_EDITOR
            Debug.Log("INFO: Inside MediaFrameQRPRocessing");
            MediaFrameQrProcessing.Wrappers.ZXingQrCodeScanner.ScanFirstCameraForQrCode(
                result =>
                {
                    UnityEngine.WSA.Application.InvokeOnAppThread(() =>
                    {
                        if (result != null)
                        {
                            scanInfoTxt.text = "QR Code : " + result;
                            Debug.Log("INFO: Model Code Inside If:" + result);
                            codeRead = true;
                            modelCode = result;
                            isScanMode = false;
                            scanLogoGO1.SetActive(false);
                            scanimationGO.SetActive(false);
                            audioSource.Stop();
                        }
                        else
                        {
                            Debug.Log("INFO: No QR code found");
                            scanInfoTxt.text = "No QR code found. Try Again!";
                        }
            },
            false);
                },
                TimeSpan.FromSeconds(30));
#endif
        }
        else
            Debug.Log("INFO: Cannot scan when it is not scan mode");

    }
}
