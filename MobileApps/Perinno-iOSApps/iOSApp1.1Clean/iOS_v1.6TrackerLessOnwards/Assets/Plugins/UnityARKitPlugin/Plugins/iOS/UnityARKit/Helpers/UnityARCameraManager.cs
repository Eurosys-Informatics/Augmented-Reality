using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.iOS;

public class UnityARCameraManager : MonoBehaviour
{

    public Camera m_camera;
    private UnityARSessionNativeInterface m_session;
    private Material savedClearMaterial;
    public float newai = 0;
    [Header("AR Config Options")]
    public UnityARAlignment startAlignment = UnityARAlignment.UnityARAlignmentGravity;
    public UnityARPlaneDetection planeDetection = UnityARPlaneDetection.Horizontal;
    public bool getPointCloud = true;
    public bool enableLightEstimation = true;
    public bool enableAutoFocus = true;
    public UnityAREnvironmentTexturing environmentTexturing = UnityAREnvironmentTexturing.UnityAREnvironmentTexturingNone;

    [Header("Image Tracking")]
    public ARReferenceImagesSet detectionImages = null;
    public int maximumNumberOfTrackedImages = 0;

    [Header("Object Tracking")]
    public ARReferenceObjectsSetAsset detectionObjects = null;
    private bool sessionStarted = false;

    UnityARHitTestExample unityARHitTestExampleInstance;
    MNPopup popup;
    //GameObject go;
    public ARKitWorldTrackingSessionConfiguration sessionConfiguration
    {
        get
        {
            ARKitWorldTrackingSessionConfiguration config = new ARKitWorldTrackingSessionConfiguration();
            config.planeDetection = planeDetection;
            config.alignment = startAlignment;
            config.getPointCloudData = getPointCloud;
            config.enableLightEstimation = enableLightEstimation;
            config.enableAutoFocus = enableAutoFocus;
            config.maximumNumberOfTrackedImages = maximumNumberOfTrackedImages;
            config.environmentTexturing = environmentTexturing;
            if (detectionImages != null)
                config.referenceImagesGroupName = detectionImages.resourceGroupName;

            if (detectionObjects != null)
            {
                config.referenceObjectsGroupName = "";  //lets not read from XCode asset catalog right now
                config.dynamicReferenceObjectsPtr = m_session.CreateNativeReferenceObjectsSet(detectionObjects.LoadReferenceObjectsInSet());
            }

            return config;
        }
    }

    // Use this for initialization
    void Start()
    {
        unityARHitTestExampleInstance = GameObject.Find("HitCubeParent/InstantiatedGO").GetComponent<UnityARHitTestExample>();
        //go = GameObject.Find("IOSPopUp");
        popup = new MNPopup("", "More Light Required");
        m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();

        Application.targetFrameRate = 60;

        var config = sessionConfiguration;
        if (config.IsSupported)
        {
            m_session.RunWithConfig(config);
            UnityARSessionNativeInterface.ARFrameUpdatedEvent += FirstFrameUpdate;
        }

        if (m_camera == null)
        {
            m_camera = Camera.main;
        }
        UnityARSessionNativeInterface.ARFrameUpdatedEvent += UpdateLightEstimation;

        //BtnUILowLight = GameObject.Find("UICanvas/UILowLight").GetComponent<Button>();
        //Debug.Log("INFO: BtnLowLight" + BtnUILowLight);
        //BtnUILowLight.gameObject.SetActive(false);
    }

    void UpdateLightEstimation(UnityARCamera camera)
    {
        if (camera.lightData.arLightingType == LightDataType.LightEstimate)
        {
            // Convert ARKit intensity to Unity intensity
            // ARKit ambient intensity ranges 0-2000
            // Unity ambient intensity ranges 0-8 (for over-bright lights)
            newai = camera.lightData.arLightEstimate.ambientIntensity;
            //Debug.Log("INFO: ########Light Intensity from ARKit is: " + newai);
        }
    }

    void FirstFrameUpdate(UnityARCamera cam)
    {
        sessionStarted = true;
        UnityARSessionNativeInterface.ARFrameUpdatedEvent -= FirstFrameUpdate;
    }

    public void SetCamera(Camera newCamera)
    {
        if (m_camera != null)
        {
            UnityARVideo oldARVideo = m_camera.gameObject.GetComponent<UnityARVideo>();
            if (oldARVideo != null)
            {
                savedClearMaterial = oldARVideo.m_ClearMaterial;
                Destroy(oldARVideo);
            }
        }
        SetupNewCamera(newCamera);
    }

    private void SetupNewCamera(Camera newCamera)
    {
        m_camera = newCamera;

        if (m_camera != null)
        {
            UnityARVideo unityARVideo = m_camera.gameObject.GetComponent<UnityARVideo>();
            if (unityARVideo != null)
            {
                savedClearMaterial = unityARVideo.m_ClearMaterial;
                Destroy(unityARVideo);
            }
            unityARVideo = m_camera.gameObject.AddComponent<UnityARVideo>();
            unityARVideo.m_ClearMaterial = savedClearMaterial;
        }
    }

    // Update is called once per frame

    void Update()
    {


        if (m_camera != null && sessionStarted)
        {
            // JUST WORKS!
            Matrix4x4 matrix = m_session.GetCameraPose();
            m_camera.transform.localPosition = UnityARMatrixOps.GetPosition(matrix);
            m_camera.transform.localRotation = UnityARMatrixOps.GetRotation(matrix);
            m_camera.projectionMatrix = m_session.GetCameraProjection();
        }
        if (newai < 150.0f && !unityARHitTestExampleInstance.objPlaced)
        {



            popup.AddAction("OK", () =>
            {
                Debug.Log("Ok action callback");
            });
            popup.AddDismissListener(() => { Debug.Log("dismiss listener"); });

            popup.Show();


        }
        else
        {
            //popup.Dismiss();
            //GameObject go = GameObject.Find("IOSPopUp");
            //Debug.Log("INFO: Name in AR camera of popup " + go.name);
            //go.SetActive(false);
        }


    }

    void OnDestroy()
    {
        UnityARSessionNativeInterface.ARFrameUpdatedEvent -= UpdateLightEstimation;
    }


}
