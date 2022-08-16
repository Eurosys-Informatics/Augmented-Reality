using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Vuforia;

using System;
using Firebase.Auth;

public class ScriptAfterModelInstantiated : MonoBehaviour, ITrackableEventHandler
{
    private TrackableBehaviour mTrackableBehaviour;
    public GameObject targetDefaultObjGO;
    GameObject targetObjTempGO;
    GameObject objGO2;
    GameObject objGO3;
    private bool trackingImageFound = false;
    GameObject scanLogoGO;
    private bool showScanImage = false;
    GameObject audioGO;
    GameObject initialGO;
    //GameObject flowerGO;
    GameObject butterflyGO;
    AudioClip modelClip;
    AudioClip BtnClick;
    AudioSource audioSrc;
    ExplodeOnTap expldOnTapInstance;
    AudioSource audioSrcFromExplodeOnTap;
    Animator animeRef;
    const float TIME_TO_INITIAL_GO = 10.0f;
    float timerInitialGO = TIME_TO_INITIAL_GO;
    bool showInitialGO = true;
    AppInstructionMVP appInstruct;
    bool initGameMode = false;
    public Vector3 GOoriginalScale;

    /////
    GameObject ColorPlateGO;
    //GameObject SliderRotateGO;
    //GameObject SliderResizeGO;
    Button BtnColor;
    Button BtnColor1;
    Button BtnColor2;
    Button BtnColor3;
    GameObject Obj1ColorChangeGO;
    GameObject ColoredGO;
    Renderer[] renderers;
    Renderer[] rendererDefault;
    Material[] matColor = new Material[9];
    Button BtnKey;
    Button BtnResize;
    Button BtnScribble;
    bool BtnScribbleClickedFirstTime = false;
    bool BtnScribbleClickedSecondTime = false;
    Sprite ScribbleRemove;
    Sprite ScribbleImg;
    Text ScribbleBtnTxt;
    UnityEngine.UI.Image ScribbleImgGO;
    const float TIMER_TO_REMOVE_SECONDARY_BUTTONS = 4.0f;
    float timerToRemoveSecBtn = 100000000.0f;
    CodeAreaScript codeAreaScriptInstance;
    Transform targetImageTransform;

    UnityEngine.UI.Image BtnColor1Img;
    UnityEngine.UI.Image BtnColor2Img;
    UnityEngine.UI.Image BtnColor3Img;
    Color color1Default;
    Color color2Default;
    Color color3Default;
    public GameObject loadingGO;
    SharedModelDownload sharedModelDownloadInstance = null;
    string modelFileName;
    string modelURL;
    WWW www;
    bool sharedModelOptionClicked = false;


    const int DOWNLOAD_FROM_CODE = 1;
    const int DOWNLOAD_SHARED_MODEL = 2;

    Scene currentScene;
    bool hereAfterSharedModelClicked = false;

    private FirebaseAuth auth;
    GameObject manipulateBtnsGO;
    Button BtnManipulate;
    Button BtnDisassemble;
    Sprite DisassembleModelSprite;
    Sprite ResetModelSprite;
    Text DisassembleModelTxt;
    UnityEngine.UI.Image SelectResetImg;
    bool toggleDisassembleModelOn = true;
    GameObject targetObjTempGODuplicate;
    Button BtnRotate;
    public Button BtnUIScribble;
    public Button BtnUIRotate;
    public Button BtnUIResize;
    public Button BtnUITap;
    Vector3 positionFlower = new Vector3(0, 0, 60.0f);
    // Use this for initialization

    void Start()
    {

        var vuforia = VuforiaARController.Instance;
        vuforia.RegisterVuforiaStartedCallback(OnVuforiaStarted);
        vuforia.RegisterOnPauseCallback(OnPaused);

        mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        if (mTrackableBehaviour)
        {
            mTrackableBehaviour.RegisterTrackableEventHandler(this);
        }

        targetImageTransform = GameObject.Find("ImageTarget").transform;
        targetDefaultObjGO = GameObject.Find("ImageTarget/Colored_turbine");
        //targetDefaultObjGO.AddComponent<PinchZoom>();
        Obj1ColorChangeGO = GameObject.Find("ImageTarget/Colored_turbine/GTE_EXT_1");

        renderers = Obj1ColorChangeGO.GetComponentsInChildren<Renderer>();
        targetDefaultObjGO.SetActive(false);

        if (GameObject.Find("SharedModelValues") != null)
        {
            sharedModelDownloadInstance = GameObject.Find("SharedModelValues").GetComponent<SharedModelDownload>();
            Debug.Log("INFO: Printed after scene back from shared model scene");
            hereAfterSharedModelClicked = true;
        }

        scanLogoGO = GameObject.Find("ScanImage");
        scanLogoGO.SetActive(false);

        modelClip = Resources.Load<AudioClip>("audios/model_audio");
        BtnClick = Resources.Load<AudioClip>("audios/button_audio");//Reuse this from helpMVP script
        audioGO = new GameObject();
        audioSrc = audioGO.AddComponent<AudioSource>();
        audioSrcFromExplodeOnTap = targetDefaultObjGO.GetComponent<AudioSource>();
        Debug.Log("****" + audioSrcFromExplodeOnTap);
        expldOnTapInstance = targetDefaultObjGO.GetComponent<ExplodeOnTap>();
        //butterflyGO = GameObject.Find("InitialGO/butterfly1");
        //Debug.Log("***buterfly global position****" + butterflyGO.transform.position);
        //initialGO = GameObject.Find("InitialGO");
        //initialGO.SetActive(false);
        if (!hereAfterSharedModelClicked)
        {
            appInstruct = GameObject.Find("AppStart").GetComponent<AppInstructionMVP>();
            appInstruct.initialAppInstructionClickedOK = true;

        }
        //flowerGO = GameObject.Find("lotus");
        //flowerGO.SetActive(false);


        /////
        currentScene = SceneManager.GetActiveScene();
        if (currentScene.name != "SceneUserLogin")
        {
            ColorPlateGO = GameObject.Find("HelpCanvas/Colorbuttons");
            BtnColor = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Color").GetComponent<Button>();
            BtnColor.onClick.AddListener(DislayColorPlate);

            BtnColor1 = GameObject.Find("HelpCanvas/Colorbuttons/Color1").GetComponent<Button>();
            BtnColor1.onClick.AddListener(delegate { ChangeColor(1); });
            BtnColor2 = GameObject.Find("HelpCanvas/Colorbuttons/Color2").GetComponent<Button>();
            BtnColor2.onClick.AddListener(delegate { ChangeColor(2); });
            BtnColor3 = GameObject.Find("HelpCanvas/Colorbuttons/Color3").GetComponent<Button>();
            BtnColor3.onClick.AddListener(delegate { ChangeColor(3); });
            BtnColor1Img = GameObject.Find("HelpCanvas/Colorbuttons/Color1").GetComponent<UnityEngine.UI.Image>();
            color1Default = BtnColor1Img.color;
            BtnColor2Img = GameObject.Find("HelpCanvas/Colorbuttons/Color2").GetComponent<UnityEngine.UI.Image>();
            color2Default = BtnColor2Img.color;
            BtnColor3Img = GameObject.Find("HelpCanvas/Colorbuttons/Color3").GetComponent<UnityEngine.UI.Image>();
            color3Default = BtnColor3Img.color;
            ColorPlateGO.SetActive(false);

            matColor[0] = Resources.Load<Material>("Materials/blue");
            matColor[1] = Resources.Load<Material>("Materials/brass");
            matColor[2] = Resources.Load<Material>("Materials/green");

            matColor[3] = Resources.Load<Material>("Materials/red_color");
            matColor[4] = Resources.Load<Material>("Materials/white_color");
            matColor[5] = Resources.Load<Material>("Materials/blue_color");

            matColor[6] = Resources.Load<Material>("Materials/red_color");
            matColor[7] = Resources.Load<Material>("Materials/blue_color");
            matColor[8] = Resources.Load<Material>("Materials/green");

            //objGO2 = GameObject.Find("ImageTarget/car");
            //objGO2.AddComponent<PinchZoom> ();
            //objGO2.SetActive(false);

            objGO3 = GameObject.Find("ImageTarget/bike");
            //objGO3.AddComponent<PinchZoom> ();
            objGO3.SetActive(false);
            auth = FirebaseAuth.DefaultInstance;
            auth.SignOut(); //Need to do this as in android strange behaviour was observed for not login user
        }



        codeAreaScriptInstance = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/CodeArea").GetComponent<CodeAreaScript>();
        BtnKey = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/CodeArea").GetComponent<Button>();
        BtnKey.interactable = false;

        BtnScribble = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Scribble").GetComponent<Button>();
        BtnScribble.onClick.AddListener(ScribbleFunc);
        ScribbleImgGO = BtnScribble.GetComponent<UnityEngine.UI.Image>();
        ScribbleBtnTxt = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Scribble/Text").GetComponent<Text>();
        BtnScribble.gameObject.SetActive(false);
        if (currentScene.name == "MVPScene2")
        {
            BtnResize = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Resize").GetComponent<Button>();
            BtnResize.onClick.AddListener(ResizeFunc);
            BtnResize.gameObject.SetActive(false);
        }
        else if (currentScene.name == "SceneUserLogin")
        {
            BtnManipulate = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Manipulate").GetComponent<Button>();
            BtnManipulate.onClick.AddListener(ShowManipulationButtons);
            BtnManipulate.gameObject.SetActive(false);
            manipulateBtnsGO = GameObject.Find("HelpCanvas/ManipulateButtons");
            BtnDisassemble = GameObject.Find("HelpCanvas/ManipulateButtons/SelectDisassemble").GetComponent<Button>();
            BtnDisassemble.onClick.AddListener(SelectAndDisassembleFunc);
            BtnResize = GameObject.Find("HelpCanvas/ManipulateButtons/Resize").GetComponent<Button>();
            BtnResize.onClick.AddListener(ResizeFunc);
            SelectResetImg = BtnDisassemble.GetComponent<UnityEngine.UI.Image>();
            DisassembleModelTxt = GameObject.Find("HelpCanvas/ManipulateButtons/SelectDisassemble/Text").GetComponent<Text>();
            BtnRotate = GameObject.Find("HelpCanvas/ManipulateButtons/Rotate").GetComponent<Button>();
            BtnRotate.onClick.AddListener(RotateFunc);
            manipulateBtnsGO.SetActive(false);

            Texture2D DisassembleModelTexture = new Texture2D(128, 128, TextureFormat.RGB24, true);
            DisassembleModelTexture = Resources.Load<Texture2D>("Images/select");
            if (DisassembleModelTexture == null)
            {
                Debug.Log("Cannot load disassemble texture");
            }
            Rect rec2 = new Rect(0, 0, DisassembleModelTexture.width, DisassembleModelTexture.height);
            DisassembleModelSprite = Sprite.Create(DisassembleModelTexture, rec2, new Vector2(0.5f, 0.5f));

            Texture2D ResetModelTexture = new Texture2D(128, 128, TextureFormat.RGB24, true);
            ResetModelTexture = (Texture2D)Resources.Load("Images/resetModel");
            Rect rec3 = new Rect(0, 0, ResetModelTexture.width, ResetModelTexture.height);
            ResetModelSprite = Sprite.Create(ResetModelTexture, rec3, new Vector2(0.5f, 0.5f));

        }



        Texture2D ScribbleRemoveTexture = new Texture2D(4, 4, TextureFormat.RGB24, true);

        ScribbleRemoveTexture = Resources.Load<Texture2D>("Images/delete");
        if (ScribbleRemoveTexture == null)
        {
            Debug.Log("Cannot load scribble texture");
        }
        Rect rec = new Rect(0, 0, ScribbleRemoveTexture.width, ScribbleRemoveTexture.height);
        ScribbleRemove = Sprite.Create(ScribbleRemoveTexture, rec, new Vector2(0.5f, 0.5f));

        Texture2D ScribbleImgTexture = new Texture2D(4, 4, TextureFormat.RGB24, true);
        ScribbleImgTexture = (Texture2D)Resources.Load("Images/pencil");
        Rect rec1 = new Rect(0, 0, ScribbleImgTexture.width, ScribbleImgTexture.height);
        ScribbleImg = Sprite.Create(ScribbleImgTexture, rec1, new Vector2(0.5f, 0.5f));

        loadingGO = GameObject.Find("Loading");
        loadingGO.SetActive(false);

        BtnUIScribble = GameObject.Find("UICanvas/UIScribble").GetComponent<Button>();
        BtnUIScribble.gameObject.SetActive(false);

        BtnUITap = GameObject.Find("UICanvas/UITap").GetComponent<Button>();
        BtnUITap.gameObject.SetActive(false);

        BtnUIResize = GameObject.Find("UICanvas/UIResize").GetComponent<Button>();
        BtnUIResize.gameObject.SetActive(false);

        BtnUIRotate = GameObject.Find("UICanvas/UIRotate").GetComponent<Button>();
        BtnUIRotate.gameObject.SetActive(false);

        //firebaseGO = GameObject.Find("HelpCanvas/FirebaseGO");
        //firebaseGO.SetActive(false);
        //Check to be done as this script is a shared script and used byno login case whereas shared model values is present only after user is login

        Handheld.StopActivityIndicator();
    }



    public void OnTrackableStateChanged(
        TrackableBehaviour.Status previousStatus,
        TrackableBehaviour.Status newStatus)
    {
        if (newStatus == TrackableBehaviour.Status.DETECTED ||
            newStatus == TrackableBehaviour.Status.TRACKED)
        {
            //destroyGO = true;  
            trackingImageFound = true;
            showScanImage = false;
            initGameMode = false;
        }
        else
        {
            showScanImage = true;
            trackingImageFound = false;
            timerInitialGO = TIME_TO_INITIAL_GO;
            //showInitialGO = true;

            Debug.Log("****LOST");
        }

    }

    // Update is called once per frame
    void Update()
    {
#if UNITY_ANDROID
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();
#endif



        if (!codeAreaScriptInstance.modelIDSpecificBtnClicked && sharedModelDownloadInstance == null && !sharedModelOptionClicked) //This part should not execute if shared model part or code area part has started
        {
            if (trackingImageFound)
            {
                scanLogoGO.SetActive(false);
                //initialGO.SetActive(false);
                //flowerGO.SetActive(false);
                showInitialGO = false;
                targetDefaultObjGO.SetActive(true);
                //targetDefaultObjGO.transform.position = posObj1;
                trackingImageFound = false;
                audioSrc.clip = modelClip;
                audioSrc.volume = 1.0f;
                audioSrc.Play();

                if (expldOnTapInstance.isAnimPlaying == true)
                {
                    audioSrcFromExplodeOnTap.Play();
                    Debug.Log("####Audio Source not null so play####");
                }
                if (currentScene.name != "SceneUserLogin")
                {
                    BtnColor.interactable = true;
                }
                BtnKey.interactable = true;

                //BtnRotate.interactable = true;
                //BtnResize.interactable = true;
            }

            if (showScanImage)
            {
                if (codeAreaScriptInstance.InputFieldGO.activeSelf)
                {
                    codeAreaScriptInstance.InputFieldGO.SetActive(false);
                }

                if (BtnUIScribble.gameObject.activeSelf)
                {
                    BtnUIScribble.gameObject.SetActive(false);
                }
                if (BtnUIRotate.gameObject.activeSelf)
                {
                    BtnUIRotate.gameObject.SetActive(false);
                }
                if (BtnUITap.gameObject.activeSelf)
                {
                    BtnUITap.gameObject.SetActive(false);
                }
                if (BtnUIResize.gameObject.activeSelf)
                {
                    BtnUIResize.gameObject.SetActive(false);
                }

                if (appInstruct.initialAppInstructionClickedOK)
                {
                    timerInitialGO -= Time.deltaTime;
                }

                if (timerInitialGO > 0)
                {
                    //targetDefaultObjGO.transform.position = posObj1;
                    trackingImageFound = false;
                    //showScanImage = false;
                    scanLogoGO.SetActive(true);
                }
                else if (timerInitialGO < 0 && showInitialGO)
                {
                    MNPopup popup = new MNPopup("Tracker not found!", "Download the perinno tracker at www.perinno.com/p.png and scan it.");
                    popup.AddAction("OK", () =>
                    {
                        Debug.Log("Ok action callback");
                        scanLogoGO.SetActive(true);

                    });
                    popup.AddDismissListener(() =>
                    {
                        Debug.Log("dismiss listener");
                    });
                    popup.Show();
                    showInitialGO = false;
                    //initialGO.SetActive(true);
                    scanLogoGO.SetActive(false);
                    appInstruct.initialAppInstructionClickedOK = false;
                    initGameMode = true;
                }
                /*targetDefaultObjGO.transform.position = posObj1;
			trackingImageFound = false;
			showScanImage = false;
			scanLogoGO.SetActive (true);*/

                if (audioSrcFromExplodeOnTap.isPlaying)
                {
                    audioSrcFromExplodeOnTap.Stop();
                    Debug.Log("####Audio Source not null so stop####");
                }

                if (currentScene.name != "SceneUserLogin")
                {
                    BtnColor.interactable = false;
                    ColorPlateGO.SetActive(false);
                }


                /*BtnRotate.interactable = false;
			BtnResize.interactable = false;
			SliderResizeGO.SetActive (false);
			SliderRotateGO.SetActive (false);*/
            }

            /*
            if (initGameMode)
            {
                if (Input.touchCount > 0)
                {
                    expldOnTapInstance.FindBannerHeight();
                    Debug.Log("Touch Count: " + Input.touchCount);
                    Touch touch = Input.GetTouch(0);
                    if (touch.position.y > expldOnTapInstance.bannerHideHeight && touch.phase == TouchPhase.Began)
                    {
                        //flowerGO.SetActive(true);
                        positionFlower = Camera.main.ScreenToWorldPoint(new Vector3(touch.position.x, touch.position.y, positionFlower.z));
                        Invoke("MoveButterfly", 1.0f);
                    }
                }

            }
            */

            timerToRemoveSecBtn -= Time.deltaTime;

            if (currentScene.name != "SceneUserLogin")
            {
                if (timerToRemoveSecBtn < 0 && ColorPlateGO.activeSelf)
                {
                    ColorPlateGO.SetActive(false);
                    timerToRemoveSecBtn = 100000000.0f;
                }
            }
        }
        else if (codeAreaScriptInstance.modelIDSpecificBtnClicked || sharedModelDownloadInstance != null || sharedModelOptionClicked)
        {

            if (sharedModelDownloadInstance != null)
            {
                sharedModelOptionClicked = true;
                if (sharedModelDownloadInstance.sharedModelSelected)
                {
                    if (targetObjTempGO != null)
                    {
                        if (targetObjTempGO.GetComponent<PinchZoom>())
                        {
                            Destroy(targetObjTempGO.GetComponent<PinchZoom>());
                        }
                        if (targetObjTempGO.GetComponent<RotateModel>())
                        {
                            Destroy(targetObjTempGO.GetComponent<RotateModel>());
                        }
                        if (targetObjTempGO.GetComponent<Scribble>())
                        {
                            BtnScribbleClickedSecondTime = false;
                            GameObject[] TrailLineRendererGO = GameObject.FindGameObjectsWithTag("ScribbleLine");
                            foreach (GameObject tempGO in TrailLineRendererGO)
                            {
                                TrailRenderer tempTR = tempGO.GetComponent<TrailRenderer>();
                                Destroy(tempTR);
                                Destroy(tempGO);
                            }
                            ScribbleImgGO.sprite = ScribbleImg;
                            ScribbleBtnTxt.text = "Annotate";
                            BtnResize.interactable = true;
                            Destroy(targetObjTempGO.GetComponent<Scribble>());
                        }
                        Destroy(targetObjTempGO);
                    }
                    sharedModelDownloadInstance.sharedModelSelected = false;
                    targetDefaultObjGO.SetActive(false);
                    StartCoroutine(DownloadModelFromURL(DOWNLOAD_SHARED_MODEL));
                    //targetObjTempGO.SetActive(false);
                    BtnScribble.gameObject.SetActive(true);
                    BtnResize.gameObject.SetActive(true);
                    BtnManipulate.gameObject.SetActive(true);
                    ResetAllButtons();
                }
                Destroy(GameObject.Find("SharedModelValues"));
            }

            if (codeAreaScriptInstance.iDChanged)
            {
                Debug.Log("INFO: ID CHANGE IS SET TO TRUE");
                codeAreaScriptInstance.iDChanged = false;
                targetDefaultObjGO.SetActive(false);
                if (currentScene.name != "SceneUserLogin")
                {
                    //objGO2.SetActive(false);
                    objGO3.SetActive(false);
                }
                if (targetObjTempGO != null)
                {
                    if (targetObjTempGO.GetComponent<PinchZoom>())
                    {
                        Destroy(targetObjTempGO.GetComponent<PinchZoom>());
                    }
                    if (targetObjTempGO.GetComponent<Scribble>())
                    {
                        BtnScribbleClickedSecondTime = false;
                        GameObject[] TrailLineRendererGO = GameObject.FindGameObjectsWithTag("ScribbleLine");
                        foreach (GameObject tempGO in TrailLineRendererGO)
                        {
                            TrailRenderer tempTR = tempGO.GetComponent<TrailRenderer>();
                            Destroy(tempTR);
                            Destroy(tempGO);
                        }
                        ScribbleImgGO.sprite = ScribbleImg;
                        ScribbleBtnTxt.text = "Annotate";
                        BtnResize.interactable = true;
                        Destroy(targetObjTempGO.GetComponent<Scribble>());
                    }
                    Destroy(targetObjTempGO);
                }
                switch (codeAreaScriptInstance.IDSpecificGameObject)
                {
                    /*case 1:
                        objGO2.SetActive(true);
                        BtnScribble.gameObject.SetActive(true);
                        BtnResize.gameObject.SetActive(true);
                        targetObjTempGO = GameObject.Instantiate(objGO2);
                        //targetObjTempGO.AddComponent<SelectPart>();
                        Vector3 scaleTempGO2 = targetObjTempGO.transform.localScale;
                        GOoriginalScale = scaleTempGO2;
                        targetObjTempGO.transform.parent = targetImageTransform;
                        targetObjTempGO.transform.localScale = scaleTempGO2;
                        ColoredGO = targetObjTempGO.transform.Find("Colored").gameObject;
                        renderers = ColoredGO.GetComponentsInChildren<Renderer>();
                        objGO2.SetActive(false);
                        BtnColor.interactable = true;
                        BtnColor1Img.color = Color.red;
                        BtnColor2Img.color = Color.white;
                        BtnColor3Img.color = Color.blue;
                        break;*/
                    case 2:
                        objGO3.SetActive(true);
                        BtnScribble.gameObject.SetActive(true);
                        BtnResize.gameObject.SetActive(true);
                        targetObjTempGO = GameObject.Instantiate(objGO3);
                        //targetObjTempGO.AddComponent<SelectPart>();
                        Vector3 scaleTempGO3 = targetObjTempGO.transform.localScale;
                        GOoriginalScale = scaleTempGO3;
                        targetObjTempGO.transform.parent = targetImageTransform;
                        targetObjTempGO.transform.localScale = scaleTempGO3;
                        ColoredGO = targetObjTempGO.transform.Find("Colored").gameObject;
                        renderers = ColoredGO.GetComponentsInChildren<Renderer>();
                        objGO3.SetActive(false);
                        BtnColor.interactable = true;
                        BtnColor1Img.color = Color.red;
                        BtnColor2Img.color = Color.blue;
                        BtnColor3Img.color = Color.green;
                        break;
                    case 0:
                        targetDefaultObjGO.SetActive(true);
                        targetObjTempGO = GameObject.Instantiate(targetDefaultObjGO);
                        Vector3 scaleTempGO0 = targetObjTempGO.transform.localScale;
                        targetObjTempGO.transform.parent = targetImageTransform;
                        targetObjTempGO.transform.localScale = scaleTempGO0;
                        renderers = targetObjTempGO.transform.Find("GTE_EXT_1").gameObject.GetComponentsInChildren<Renderer>();
                        targetDefaultObjGO.SetActive(false);
                        BtnColor.interactable = true;
                        BtnColor1Img.color = color1Default;
                        BtnColor2Img.color = color2Default;
                        BtnColor3Img.color = color3Default;
                        break;
                    case 2048:
                        StartCoroutine(DownloadModelFromURL(DOWNLOAD_FROM_CODE));
                        ResetAllButtons();
                        break;
                    case 1001:
                        StartCoroutine(DownloadModelFromURL(DOWNLOAD_FROM_CODE));
                        ResetButtonUserNotLogin();

                        break;
                    default:
                        Debug.Log("ERROR:Something unexpected happened! This part should not be called");
                        break;
                }
            }
            ////////////////////////////
            if (trackingImageFound)
            {
                scanLogoGO.SetActive(false);
                if (targetObjTempGO != null)
                {
                    targetObjTempGO.SetActive(true);
                }

                BtnKey.interactable = true;
                //targetDefaultObjGO.transform.position = posObj1;
                trackingImageFound = false;
                audioSrc.clip = modelClip;
                audioSrc.volume = 1.0f;
                audioSrc.Play();
            }

            if (showScanImage)
            {
                //targetDefaultObjGO.transform.position = posObj1;
                trackingImageFound = false;
                if (targetObjTempGO != null)
                {
                    targetObjTempGO.SetActive(false);
                }
                //showScanImage = false;
                scanLogoGO.SetActive(true);
                codeAreaScriptInstance.InputFieldGO.SetActive(false);
                if (BtnUIScribble.gameObject.activeSelf)
                {
                    BtnUIScribble.gameObject.SetActive(false);
                }
                if (BtnUIRotate.gameObject.activeSelf)
                {
                    BtnUIRotate.gameObject.SetActive(false);
                }
                if (BtnUITap.gameObject.activeSelf)
                {
                    BtnUITap.gameObject.SetActive(false);
                }
                if (BtnUIResize.gameObject.activeSelf)
                {
                    BtnUIResize.gameObject.SetActive(false);
                }
#if UNITY_ANDROID
                if (loadingGO.activeSelf)
                {
                    loadingGO.SetActive(false);
                }
#endif
            }
            //////////////////
            timerToRemoveSecBtn -= Time.deltaTime;
            if (currentScene.name != "SceneUserLogin")
            {
                if (timerToRemoveSecBtn < 0 && ColorPlateGO.activeSelf)
                {
                    ColorPlateGO.SetActive(false);
                    timerToRemoveSecBtn = 100000000.0f;
                }
            }

            if (currentScene.name == "SceneUserLogin")
            {
                if (timerToRemoveSecBtn < 0 && manipulateBtnsGO.activeSelf)
                {
                    manipulateBtnsGO.SetActive(false);
                    timerToRemoveSecBtn = 100000000.0f;
                }
            }

            if (BtnScribbleClickedFirstTime)
            {
                BtnScribbleClickedFirstTime = false;
                ScribbleImgGO.sprite = ScribbleRemove;
                ScribbleBtnTxt.text = "Erase";

                BtnScribbleClickedSecondTime = true;
                Debug.Log("$$$$$ScribbleImgGOChangedtoDelete");
                StartCoroutine(StopActivityIndicator());
            }
        }
    }

    void OnDestroy()
    {
        //Free the memory for asset bundle. Should be done before loading a new bundle. For the shared model to get downloaded
        /* if (www != null)
         {
             www.assetBundle.Unload(true);
         }*/

    }

    private void MoveButterfly()
    {
        butterflyGO.transform.position = Vector3.Lerp(butterflyGO.transform.position, positionFlower, 1.0f);
    }

    void DislayColorPlate()
    {
        ColorPlateGO.SetActive(true);
        timerToRemoveSecBtn = TIMER_TO_REMOVE_SECONDARY_BUTTONS;
        playButtonClick();
    }

    void ChangeColor(int color)
    {
        playButtonClick();
        foreach (var childRenderer in renderers)
        {
            childRenderer.material = matColor[color - 1 + (3 * codeAreaScriptInstance.IDSpecificGameObject)];
        }
        timerToRemoveSecBtn = TIMER_TO_REMOVE_SECONDARY_BUTTONS;
    }


    private void ShowManipulationButtons()
    {
        playButtonClick();
        manipulateBtnsGO.SetActive(true);
        timerToRemoveSecBtn = TIMER_TO_REMOVE_SECONDARY_BUTTONS;
    }

    void playButtonClick()
    {
        audioSrc.clip = BtnClick;
        audioSrc.volume = 1.0f;
        audioSrc.Play();
    }

    void ScribbleFunc()
    {
        playButtonClick();
        StartCoroutine(ScribbleOnOff());
    }

    void ResizeFunc()
    {
        playButtonClick();
        BtnResize.interactable = true;
        //BtnScribble.interactable = false;
        //StartCoroutine(Load());
        if (targetObjTempGO.GetComponent<BoxCollider>())
        {
            Destroy(targetObjTempGO.AddComponent<BoxCollider>());
        }

        if (targetObjTempGO.GetComponent<PinchZoom>() == null)
        {
            targetObjTempGO.AddComponent<PinchZoom>();
            /*  MNPopup popup = new MNPopup("", "Pinch and zoom to resize the 3D model");
              popup.AddAction("OK", () =>
              {
                  Debug.Log("Ok action callback");

              });
              popup.AddDismissListener(() =>
              {
                  Debug.Log("dismiss listener");
              });
              popup.Show();*/

        }
        else if (!targetObjTempGO.GetComponent<PinchZoom>().enabled)
        {
            targetObjTempGO.GetComponent<PinchZoom>().enabled = true;
        }
    }

    void RotateFunc()
    {
        playButtonClick();
        if (targetObjTempGO.GetComponent<RotateModel>() == null)
        {
            targetObjTempGO.AddComponent<RotateModel>();
            /* MNPopup popup = new MNPopup("", "Swipe a finger to rotate the 3D model");
             popup.AddAction("OK", () =>
             {
                 Debug.Log("Ok action callback");

             });
             popup.AddDismissListener(() =>
             {
                 Debug.Log("dismiss listener");
             });
             popup.Show();*/
        }
        //Remove box collider once rotation is done 
    }

    IEnumerator ScribbleOnOff()
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

        BtnResize.interactable = false;
        BtnScribble.interactable = true;
        if (!BtnScribbleClickedSecondTime)
        {

            if (targetObjTempGO.GetComponent<BoxCollider>())
            {
                Destroy(targetObjTempGO.AddComponent<BoxCollider>());
            }



            if (targetObjTempGO.GetComponent<Scribble>() == null)
            {
                targetObjTempGO.AddComponent<Scribble>();
            }

            if (!targetObjTempGO.GetComponent<Scribble>().enabled)
            {
                targetObjTempGO.GetComponent<Scribble>().enabled = true;
            }

            BtnScribbleClickedFirstTime = true;
            Debug.Log("ScribblebuttonClickedForFirstTime");
            if (targetObjTempGO.GetComponent<PinchZoom>())
            {
                //targetObjTempGO.GetComponent<PinchZoom>().enabled = false;
                Destroy(targetObjTempGO.GetComponent<PinchZoom>());
            }
            if (targetObjTempGO.GetComponent<RotateModel>())
            {
                Destroy(targetObjTempGO.GetComponent<RotateModel>());
            }
            //Handheld.StopActivityIndicator();
        }
        else
        {
            //Debug.Log("DestroyingScribble :" + targetObjTempGO.GetComponent<Scribble>().trailRendererGOTemp);
            BtnScribbleClickedSecondTime = false;
            GameObject[] TrailLineRendererGO = GameObject.FindGameObjectsWithTag("ScribbleLine");
            foreach (GameObject tempGO in TrailLineRendererGO)
            {
                TrailRenderer tempTR = tempGO.GetComponent<TrailRenderer>();
                Destroy(tempTR);
                Destroy(tempGO);
            }
            //Destroy(targetObjTempGO.GetComponent<Scribble>().trailRendererGOTemp);
            //Destroy(targetObjTempGO.GetComponent<Scribble>());
            ScribbleImgGO.sprite = ScribbleImg;
            ScribbleBtnTxt.text = "Annotate";
            BtnResize.interactable = true;
            targetObjTempGO.GetComponent<Scribble>().enabled = false;
            Handheld.StopActivityIndicator();
#if UNITY_ANDROID
            loadingGO.SetActive(false);
#endif
        }

        //Handheld.StopActivityIndicator();
    }


    IEnumerator StopActivityIndicator()
    {
        Handheld.StopActivityIndicator();
#if UNITY_ANDROID
        loadingGO.SetActive(false);
#endif
        yield return new WaitForSeconds(0);
    }

    private void SelectAndDisassembleFunc()
    {
        playButtonClick();
        StartCoroutine(SelectDisassembleReset());
    }

    IEnumerator SelectDisassembleReset()
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

        if (toggleDisassembleModelOn)
        {
            BtnRotate.interactable = false;
            /* MNPopup popup = new MNPopup("", "Tap on a part to highlight. Tap again to remove the part. Tap outside the 3D model to undo the last operation");
             popup.AddAction("OK", () =>
             {
                 Debug.Log("Ok action callback");

             });
             popup.AddDismissListener(() =>
             {
                 Debug.Log("dismiss listener");
             });
             popup.Show();*/
            toggleDisassembleModelOn = false;
            BtnResize.interactable = false;
            BtnScribble.interactable = false;
            SelectResetImg.sprite = ResetModelSprite;
            DisassembleModelTxt.text = "Reset";
            //BtnDisassemble.interactable = true;
            targetObjTempGODuplicate = Instantiate(targetObjTempGO, targetImageTransform, true);
            if (targetObjTempGODuplicate.GetComponent<PinchZoom>())
            {
                Destroy(targetObjTempGODuplicate.GetComponent<PinchZoom>());
            }

            if (targetObjTempGODuplicate.GetComponent<Scribble>())
            {
                Destroy(targetObjTempGODuplicate.GetComponent<Scribble>());
            }

            if (targetObjTempGODuplicate.GetComponent<RotateModel>())
            {
                Destroy(targetObjTempGODuplicate.GetComponent<RotateModel>());
            }

            if (targetObjTempGODuplicate.GetComponent<BoxCollider>())
            {
                Destroy(targetObjTempGODuplicate.AddComponent<BoxCollider>());
            }
            //targetObjTempGODuplicate.transform.localScale = GOoriginalScale * 55.0f; //Size of parent //Need to implement this with more flexibility
            targetObjTempGO.SetActive(false);
            targetObjTempGODuplicate.AddComponent<SelectPart>();
            Handheld.StopActivityIndicator();
        }
        else
        {
            toggleDisassembleModelOn = true;
            BtnResize.interactable = true;
            BtnScribble.interactable = true;
            BtnRotate.interactable = true;
            Destroy(targetObjTempGODuplicate);
            targetObjTempGO.SetActive(true);
            SelectResetImg.sprite = DisassembleModelSprite;
            DisassembleModelTxt.text = "Disassemble";
            Handheld.StopActivityIndicator();
        }


#if UNITY_ANDROID
            loadingGO.SetActive(false);
#endif

    }


    IEnumerator DownloadModelFromURL(int download_method)
    {
        //string modelFileName = codeAreaScriptInstance.modelURL.Substring
#if UNITY_IPHONE
        Handheld.SetActivityIndicatorStyle(UnityEngine.iOS.ActivityIndicatorStyle.WhiteLarge);
#elif UNITY_ANDROID
        Handheld.SetActivityIndicatorStyle(AndroidActivityIndicatorStyle.DontShow);
        loadingGO.SetActive(true);
#elif UNITY_TIZEN
        Handheld.SetActivityIndicatorStyle(TizenActivityIndicatorStyle.Small);
#endif

        Handheld.StartActivityIndicator();

        //string perinnoFileServerURL = "http://ss.perinno.com:81/";
        if (download_method == DOWNLOAD_FROM_CODE)
        {
            modelFileName = codeAreaScriptInstance.modelFileName;
            modelURL = codeAreaScriptInstance.modelURL;
            Debug.Log("INFO: Model File Name is: " + modelFileName);
        }

        if (download_method == DOWNLOAD_SHARED_MODEL)
        {
            modelFileName = sharedModelDownloadInstance.modelFileName;
            modelURL = sharedModelDownloadInstance.modelURL;
        }

        if (modelFileName.Contains("car")) //temp check, need to be removed
        {
            modelFileName = "Z3_fbx";
        }

        /*
        if (www != null)
        {
            //www.assetBundle.Unload(true);   
            Debug.Log("www.assetBundle.name= " + www.assetBundle.name);
            if (www.assetBundle.name == modelFileName)
            {
                Debug.Log("Same file asset bundle already downloaded");
                UnityEngine.Object assetObject = WWW.LoadFromCacheOrDownload(modelURL, 1).assetBundle.LoadAsset(modelFileName);
            }
            else
                www = null;

        }
        if( www == null )*/
        {
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
                        MNPopup popup = new MNPopup("", "Failed to download the model");
                        popup.AddAction("Try Again", () =>
                        {
                            Debug.Log("Ok action callback");

                        });
                        popup.AddDismissListener(() =>
                        {
                            Debug.Log("dismiss listener");
                        });
                        popup.Show();
                    }
                    else
                    {
                        targetObjTempGO = (GameObject)Instantiate(assetObject, targetImageTransform, true);
                        ///////////
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
                                // c.material.mainTexture = textures[0];
                                c.material.SetTexture("_MainTex", mainTexture); //Replace this with mainTexture
                            }
                        }
                        /*
                                        if (textures.Length != 0)
                                        {
                                            foreach (var c in targetObjTempGO.GetComponentsInChildren<MeshRenderer>())
                                            {
                                                // c.material.mainTexture = textures[0];
                                                c.material.SetTexture("_MainTex", textures[0]); //Replace this with mainTexture
                                            }

                                        }*/

                        ///////////


                        Debug.Log("Scale of original gameobject" + targetObjTempGO.transform.localScale);
                        GameObject sphereGO = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                        sphereGO.transform.position = new Vector3(0, 0, 0);

                        SphereCollider sphere = sphereGO.AddComponent<SphereCollider>();
                        sphere.radius = 2.0f * 55.0f; //multiplied by 55 as it sise of image target
                        targetObjTempGO.transform.localScale = ScaleToCollider(targetObjTempGO, sphere);
                        Destroy(sphereGO);

                        Vector3 scaleTempGO3 = targetObjTempGO.transform.localScale;
                        Debug.Log("Updated Scale of gameobject" + targetObjTempGO.transform.localScale);
                        GOoriginalScale = scaleTempGO3;
                        Handheld.StopActivityIndicator();
#if UNITY_ANDROID
                        loadingGO.SetActive(false);
        Debug.Log("INFO: Model download AI called");
#endif
                        if (targetObjTempGO == null)
                        {
                            Debug.Log("ERROR: Failed to Instantiate 3D Model");
                        }

                        StartCoroutine(UnloadAssetBundle(bundle));
                        // bundle.Unload(false); // To do clear the memory, may be needed to change this for cache version, check! 
                    }
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

        var targetSize = (sphere.radius * 2);

        float newSizeRatioX = targetSize / currentSize.x;
        float newSizeRatioY = targetSize / currentSize.y;
        float newSizeRatioZ = targetSize / currentSize.z;

        float minimumNewSizeRatio = Math.Min(newSizeRatioX, Math.Min(newSizeRatioY, newSizeRatioZ));

        Vector3 newScale = currentScale * minimumNewSizeRatio;

        Debug.Log("Current scale:" + currentScale + "targetSize:" + targetSize + "currentSize:" + currentSize + "newScale:" + newScale + "currentScale.x:" + currentScale.x + "currentSize.x:" + currentSize.x);


        //DoorDevice_meshBase                   Current scale: (0.1, 4.0, 3.0), targetSize: 5, currentSize: (2.9, 4.0, 1.1), newScale: (0.2, 5.0, 13.4), currentScale.x: 0.125, currentSize.x: 2.869114
        //RedControlPanelForAirlock_meshBase    Current scale: (1.0, 1.0, 1.0), targetSize: 5, currentSize: (0.0, 0.3, 0.2), newScale: (147.1, 16.7, 25.0), currentScale.x: 1, currentSize.x: 0.03400017

        return newScale;
    }

    private Bounds GetMeshHierarchyBounds(GameObject go)
    {
        var bounds = new Bounds(); // Not used, but a struct needs to be instantiated

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
        //Destroy(go.GetComponent<Renderer>()); //TEST THIS
        return bounds;
    }


    private void OnVuforiaStarted()
    {
        Debug.Log("INFO: Camera autofocus called on Vuforia start");
        CameraDevice.Instance.SetFocusMode(
            CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
    }

    private void OnPaused(bool paused)
    {
        Debug.Log("INFO: Camera autofocus called on Paused");
        if (!paused) // resumed
        {
            // Set again autofocus mode when app is resumed
            CameraDevice.Instance.SetFocusMode(
                CameraDevice.FocusMode.FOCUS_MODE_CONTINUOUSAUTO);
        }
    }
    void ResetAllButtons()
    {
        BtnScribble.gameObject.SetActive(true);
        BtnManipulate.gameObject.SetActive(true);
        toggleDisassembleModelOn = true;
        BtnResize.interactable = true;
        BtnScribble.interactable = true;
        BtnRotate.interactable = true;
        if (targetObjTempGODuplicate != null)
        {
            Destroy(targetObjTempGODuplicate);
        }
        SelectResetImg.sprite = DisassembleModelSprite;
        DisassembleModelTxt.text = "Disassemble";
        BtnScribbleClickedSecondTime = false;
        ScribbleImgGO.sprite = ScribbleImg;
        ScribbleBtnTxt.text = "Annotate";
        BtnResize.interactable = true;
    }

    void ResetButtonUserNotLogin()
    {
        BtnScribble.gameObject.SetActive(true);
        BtnResize.gameObject.SetActive(true);
        BtnResize.interactable = true;
        BtnScribble.interactable = true;
        BtnScribbleClickedSecondTime = false;
        ScribbleImgGO.sprite = ScribbleImg;
        ScribbleBtnTxt.text = "Annotate";
        BtnColor.interactable = false;
    }
}
