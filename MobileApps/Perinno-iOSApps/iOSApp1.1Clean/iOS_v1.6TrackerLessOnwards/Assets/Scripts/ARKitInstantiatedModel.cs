using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

using System;
using UnityEngine.XR.iOS;

public class ARKitInstantiatedModel : MonoBehaviour
{
    CodeAreaScript codeAreaScriptInstance;
    GameObject targetObjTempGO;
    const int DOWNLOAD_FROM_CODE = 1;
    const int DOWNLOAD_SHARED_MODEL = 2;
    string modelFileName;
    string modelURL;
    WWW www;
    SharedModelDownload sharedModelDownloadInstance;
    bool hereAfterSharedModelClicked = false;
    Transform targetObjTransform;
    public Vector3 GOoriginalScale;
    Button BtnKey;
    UnityARHitTestExample unityARHitTestExampleInstance;
    bool objMoved = false;
    Button BtnResize;

    AudioClip modelClip;
    AudioClip BtnClick;
    AudioSource audioSrc;
    GameObject audioGO;
    public Button BtnUIResize;
    Button BtnRotate;
    public Button BtnUIRotate;

    UnityARCameraManager unityARCameraManagerInstance;
    // Use this for initialization
    void Start()
    {
        Handheld.StopActivityIndicator();
        codeAreaScriptInstance = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/CodeArea").GetComponent<CodeAreaScript>();
        /*
        if (GameObject.Find("SharedModelValues") != null)
        {
            sharedModelDownloadInstance = GameObject.Find("SharedModelValues").GetComponent<SharedModelDownload>();
            Debug.Log("INFO: Printed after scene back from shared model scene");
            hereAfterSharedModelClicked = true;
        }
        */
        targetObjTransform = GameObject.Find("HitCubeParent/InstantiatedGO").transform;
        codeAreaScriptInstance = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/CodeArea").GetComponent<CodeAreaScript>();
        BtnKey = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/CodeArea").GetComponent<Button>();
        BtnKey.interactable = true;
        unityARHitTestExampleInstance = GameObject.Find("HitCubeParent/InstantiatedGO").GetComponent<UnityARHitTestExample>();
        ScanFlatSurfaceInstruction();
        BtnResize = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Resize").GetComponent<Button>();
        BtnResize.onClick.AddListener(ResizeFunc);
        BtnResize.gameObject.SetActive(false);
        modelClip = Resources.Load<AudioClip>("audios/model_audio");
        BtnClick = Resources.Load<AudioClip>("audios/button_audio");//Reuse this from helpMVP script
        audioGO = new GameObject();
        audioSrc = audioGO.AddComponent<AudioSource>();
        BtnUIResize = GameObject.Find("UICanvas/UIResize").GetComponent<Button>();
        BtnUIResize.gameObject.SetActive(false);
        BtnRotate = GameObject.Find("HelpCanvas/VuforiaHidingBanner/buttons/Rotate").GetComponent<Button>();
        BtnRotate.onClick.AddListener(RotateFunc);
        BtnRotate.gameObject.SetActive(false);
        BtnUIRotate = GameObject.Find("UICanvas/UIRotate").GetComponent<Button>();
        BtnUIRotate.gameObject.SetActive(false);
        //BtnUILowLight = GameObject.Find("UICanvas/UILowLight").GetComponent<Button>();
        //BtnUILowLight.gameObject.SetActive(false);
        //unityARCameraManagerInstance = GameObject.Find("ARCameraManager").GetComponent<UnityARCameraManager>();
        //UnityARSessionNativeInterface.ARFrameUpdatedEvent += UpdateLightEstimation;

    }



    // Update is called once per frame
    void Update()
    {
        /*
        if (newai < 150.0f && !unityARHitTestExampleInstance.objPlaced)
        {
            BtnUILowLight.gameObject.SetActive(true);
        }
        else
        {
            BtnUILowLight.gameObject.SetActive(false);
        }
    
    */

        if (unityARHitTestExampleInstance.objPlaced && objMoved == false)
        {
            objMoved = true;
            targetObjTempGO.SetActive(true);
            targetObjTempGO.transform.position = unityARHitTestExampleInstance.m_HitTransform.position;
            targetObjTempGO.transform.rotation = unityARHitTestExampleInstance.m_HitTransform.rotation;
        }

        if (codeAreaScriptInstance.modelIDSpecificBtnClicked && codeAreaScriptInstance.iDChanged)
        {
            Debug.Log("INFO: ID CHANGE IS SET TO TRUE");
            codeAreaScriptInstance.iDChanged = false;
            if (targetObjTempGO)
            {
                Destroy(targetObjTempGO);
            }
            switch (codeAreaScriptInstance.IDSpecificGameObject)
            {
                case 1001:
                    StartCoroutine(DownloadModelFromURL(DOWNLOAD_FROM_CODE));
                    BtnResize.gameObject.SetActive(true);
                    BtnRotate.gameObject.SetActive(true);
                    // ResetButtonUserNotLogin();

                    break;
                default:
                    Debug.Log("ERROR:Something unexpected happened! This part should not be called");
                    break;
            }
        }

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
                        targetObjTempGO = (GameObject)Instantiate(assetObject, targetObjTransform, true);
                        targetObjTempGO.SetActive(false);
                        unityARHitTestExampleInstance.objPlaced = false;
                        objMoved = false;
                        MNPopup popup = new MNPopup("", "Model Downloaded! Tap on the rectangle to place it.");
                        popup.AddAction("OK", () =>
                        {
                            Debug.Log("Ok action callback");
                            /*
                            GameObject[] allObjects = UnityEngine.Object.FindObjectsOfType<GameObject>();
                            foreach (GameObject go in allObjects)
                                if (go.activeInHierarchy)
                                {
                                    Debug.Log("INFO: GameObject is ###########: " + go.name);
                                }
                            */
                        });
                        popup.AddDismissListener(() =>
                        {
                            Debug.Log("dismiss listener");
                        });
                        popup.Show();
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
                        sphere.radius = 0.1f; //multiplied by 55 as it sise of image target
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
        return bounds;
    }

    void ScanFlatSurfaceInstruction()
    {
        MNPopup popup = new MNPopup("Instructions", "1. Scan a flat horizontal surfacel\n" +
        "2. Once done, a rectangle will be created\n" +
        "3. Enter Model ID to download the model\n" +
        "4. Tap anywhere on rectangle to place the model");
        popup.AddAction("OK", () =>
        {
            Debug.Log("Ok action callback");

        });
        popup.AddDismissListener(() =>
        {
            Debug.Log("dismiss listener");
        });
        popup.Show();
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
        }
    }

    void playButtonClick()
    {
        audioSrc.clip = BtnClick;
        audioSrc.volume = 1.0f;
        audioSrc.Play();
    }


/*
    void UpdateLightEstimation(UnityARCamera camera)
    {
       // if (camera.lightData.arLightingType == LightDataType.LightEstimate)
        {
            // Convert ARKit intensity to Unity intensity
            // ARKit ambient intensity ranges 0-2000
            // Unity ambient intensity ranges 0-8 (for over-bright lights)
            newai = camera.lightData.arLightEstimate.ambientIntensity;
            Debug.Log("INFO: ########Light Intensity from ARKit is: " + newai);
        }
    }

    void OnDestroy()
    {
        UnityARSessionNativeInterface.ARFrameUpdatedEvent -= UpdateLightEstimation;
    }
        */
}
