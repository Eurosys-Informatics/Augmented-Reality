using HoloToolkit.Unity;
using HoloToolkit.Unity.UX;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime;

using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Text;
using System.IO;


/*
#if !UNITY_EDITOR
using Windows.ApplicationModel;
using Windows.ApplicationModel.Activation;
using Windows.ApplicationModel.Core;
using Windows.UI.Xaml;
using System.Threading.Tasks;
using Windows.Storage;
using Windows.Storage.Search;
using System.Runtime.InteropServices;
using Dummiesman;
//using OBJImport;
#endif
 */

public class TurbineManipulation : MonoBehaviour
{
    GameObject _3DModelDuplicate;
    GameObject _3DModel;

    Transform[] modelChildTransform;
    bool rotationStarted = false;
    bool rotationStartedX = false;
    bool rotationStartedY = false;
    bool rotationStartedZ = false;
    bool sizeIncreaseStarted = false;
    bool sizeDecreaseStarted = false;
    GameObject ModelManipulationPanel;
    //GameObject StartRotationGO;
    GameObject StartRotationXGO;
    GameObject StartRotationYGO;
    GameObject StartRotationZGO;
    GameObject ExplodeModelGO;
    GameObject IncreaseModelGO;
    GameObject DecreaseModelGO;
    GameObject DiAssembleModelGO;
    GameObject FreeManipulationGO;
    TextMesh freeManLabel;
    TextMesh rotateButtonXLabel;
    TextMesh rotateButtonYLabel;
    TextMesh rotateButtonZLabel;
    TextMesh explodeModelLabel;
    TextMesh diAssembleModelLabel;
    //TextMesh incModelLabel;
    //TextMesh decModelLabel;
    //bool disassembleModeStarted = false;
    bool manipulationVoiceCommand = false;
    //private bool standAloneMode = false;
    const float ROTATION_PER_SECOND = 5.0f;

    //Audio Variables
    GameObject audioGO;
    AudioSource audioSource;
    AudioClip _audioClipOpen;
    AudioClip _audioClipClose;
    AudioClip _audioClipChatWindow;
    AudioClip _audioToggleButton;
    AudioClip _audioModelExpand;
    AudioClip _audioModelRotate;
    AudioClip _audioScan;
    const short AUDIO_OPEN = 1;
    const short AUDIO_CLOSE = 2;
    const short AUDIO_CHAT = 3;
    const short AUDIO_TOGGLE = 4;
    const short AUDIO_MODEL_ROTATE = 5;
    const short AUDIO_MODEL_EXPAND = 6;
    const short AUDIO_SCAN = 7;

    private TextToSpeech textToSpeechMgr = null;
    //private Animator anime_duplicate;
    //private RuntimeAnimatorController RAC;
    DownloadModelThumbnails dwnldModelThumbnailInstance;
    bool test = true;

    //[SerializeField]
    //private BoundingBox boundingBox; 

    void Awake()
    {
        //GCSettings.LatencyMode = GCLatencyMode.SustainedLowLatency;
        /*
#if !UNITY_EDITOR
        CoreApplication.Suspending += CoreApplication_Suspending;
#endif
        */
        InitAudio();
    }
    /*
#if !UNITY_EDITOR
    private async void CoreApplication_Suspending(object sender, SuspendingEventArgs e)
    {
        Debug.Log("INFO: The app is being suspended");
        SuspendingDeferral deferral = e.SuspendingOperation.GetDeferral();
        try
        {
            Task delay = Task.Delay(2000);
            await Task.WhenAny(delay);

        }
        catch
        {

        }
        finally
        {
            deferral.Complete();
        }
        
    }

    private async void Get3DObjectsInfo()
    {
        StorageFolder objectFolder = await KnownFolders.GetFolderForUserAsync(null, KnownFolderId.PicturesLibrary);
        Debug.Log("INFO: Object folder path:" + objectFolder);
        List<string> fileTypeFilter = new List<string>();
        //fileTypeFilter.Add(".fbx");
        //fileTypeFilter.Add(".FBX");
        fileTypeFilter.Add(".obj");
        fileTypeFilter.Add(".OBJ");
        QueryOptions queryOptions = new QueryOptions(CommonFileQuery.OrderByDate, fileTypeFilter);
        StorageFileQueryResult queryResult = objectFolder.CreateFileQueryWithOptions(queryOptions);
        IReadOnlyList<StorageFile> files = await queryResult.GetFilesAsync();
        if (files.Count > 0)
            foreach (StorageFile file in files)
            {
                Debug.Log("INFO file names:" + file.Name);
                Debug.Log("INFO file path:" + file.Path);
                Debug.Log("INFO file name without extension:" + Path.GetFileNameWithoutExtension(file.Path));
                GameObject loadedObject = new OBJLoader().Load(file.Path);
                GameObject go1 = Instantiate(loadedObject, new Vector3(0.5f, 0.25f, 2.0f), new Quaternion(0, 0, 0, 0));
            }
        else
        {
            Debug.Log("INFO: No Objects found");
        }

    }


#endif
        */



    // Use this for initialization
    void Start()
    {
        //InitAudio();
        dwnldModelThumbnailInstance = GameObject.Find("Scene2Manager").GetComponent<DownloadModelThumbnails>();
        /*
#if !UNITY_EDITOR
            Get3DObjectsInfo();
#endif
*/
        _3DModel = GameObject.Find("Colored_turbine");
        _3DModel.AddComponent<BoundingBoxRig>();
        ModelManipulationPanel = GameObject.Find("ModelManipulation");
        //StartRotationGO         = ModelManipulationPanel.transform.Find("MainMenu/StartRotation").gameObject;
        StartRotationXGO = ModelManipulationPanel.transform.Find("MainMenu/RotateX").gameObject;
        StartRotationYGO = ModelManipulationPanel.transform.Find("MainMenu/RotateY").gameObject;
        StartRotationZGO = ModelManipulationPanel.transform.Find("MainMenu/RotateZ").gameObject;
        ExplodeModelGO = ModelManipulationPanel.transform.Find("MainMenu/ExplodeModel").gameObject;
        DiAssembleModelGO = ModelManipulationPanel.transform.Find("MainMenu/DiAssembleModel").gameObject;
        IncreaseModelGO = ModelManipulationPanel.transform.Find("MainMenu/IncreaseSize").gameObject;
        DecreaseModelGO = ModelManipulationPanel.transform.Find("MainMenu/DecreaseSize").gameObject;
        FreeManipulationGO = ModelManipulationPanel.transform.Find("MainMenu/FreeManipulation").gameObject;
        rotateButtonXLabel = StartRotationXGO.transform.Find("Label").GetComponent<TextMesh>();
        rotateButtonYLabel = StartRotationYGO.transform.Find("Label").GetComponent<TextMesh>();
        rotateButtonZLabel = StartRotationZGO.transform.Find("Label").GetComponent<TextMesh>();
        explodeModelLabel = ExplodeModelGO.transform.Find("Label").GetComponent<TextMesh>();
        diAssembleModelLabel = DiAssembleModelGO.transform.Find("Label").GetComponent<TextMesh>();
        freeManLabel = FreeManipulationGO.transform.Find("Label").GetComponent<TextMesh>();
        textToSpeechMgr = GameObject.Find("SpeechManager").GetComponent<TextToSpeech>();
        //anime                   = _3DModel.GetComponent<Animator>();
        //RAC = Resources.Load("AnimatorExplode") as RuntimeAnimatorController;

        //Renderer renderer = _3DModel.GetComponent<Renderer>();
        //if (renderer == null)
        //{
        //    System.Diagnostics.Debug.WriteLine("INFO: No Renderer Found");
        //    _3DModel.AddComponent<MeshRenderer>();
        //    //gameObject.GetComponent<Renderer>().material = new Material(Shader.Find("Diffuse"));
        //    Renderer[] allRenderers = _3DModel.GetComponentsInChildren<Renderer>();
        //    foreach (Renderer R in allRenderers)
        //    {
        //        R.gameObject.AddComponent<MeshCollider>();
        //    }
        //}
        //textToSpeechMgr.StartSpeaking("You have now entered model view scene. You can pinch and hold panels or 3D model to move them in the scene");
    }

    // Update is called once per frame
    void Update()
    {


        if (dwnldModelThumbnailInstance.downloadedModelfromServer)
        {
            Debug.Log("INFO: Default model overwritten with downloaded model");
            dwnldModelThumbnailInstance.downloadedModelfromServer = false;
            //ResetAllButtons();
            if (_3DModel != null)
            {
                Debug.Log("INFO: Default model not null");
                Destroy(_3DModel);
                _3DModel = null;
                _3DModel = dwnldModelThumbnailInstance.targetObjTempGO;
                _3DModel.AddComponent<BoundingBoxRig>();
                _3DModel.GetComponent<BoundingBoxRig>().Deactivate();
            }
            else
            {
                Debug.Log("INFO: Default model null");
                _3DModel = dwnldModelThumbnailInstance.targetObjTempGO;
                _3DModel.AddComponent<BoundingBoxRig>();
                _3DModel.GetComponent<BoundingBoxRig>().Deactivate();
            }
        }

        if (rotationStarted)
        {
            if (_3DModel != null || _3DModelDuplicate != null)
            {
                if (_3DModel != null)
                {
                    if (rotationStartedX)
                    {
                        _3DModel.transform.Rotate(ROTATION_PER_SECOND * Time.deltaTime, 0, 0, Space.Self);
                    }

                    if (rotationStartedY)
                    {
                        _3DModel.transform.Rotate(0, ROTATION_PER_SECOND * Time.deltaTime, 0, Space.Self);
                    }

                    if (rotationStartedZ)
                    {
                        _3DModel.transform.Rotate(0, 0, ROTATION_PER_SECOND * Time.deltaTime, Space.Self);
                    }

                }
                if (_3DModelDuplicate != null)
                {
                    if (rotationStartedX)
                    {
                        _3DModelDuplicate.transform.Rotate(ROTATION_PER_SECOND * Time.deltaTime, 0, 0, Space.Self);
                    }

                    if (rotationStartedY)
                    {
                        _3DModelDuplicate.transform.Rotate(0, ROTATION_PER_SECOND * Time.deltaTime, 0, Space.Self);
                    }

                    if (rotationStartedZ)
                    {
                        _3DModelDuplicate.transform.Rotate(0, 0, ROTATION_PER_SECOND * Time.deltaTime, Space.Self);
                    }
                }
                PlaySound(AUDIO_MODEL_ROTATE);
            }
            else
            {
                textToSpeechMgr.StartSpeaking("No model to rotate");
                Debug.Log("WARNING: No model to rotate");
            }
        }

        if (StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && rotateButtonXLabel.text == "Rotate X")
        {
            test = false;
            PlaySound(AUDIO_TOGGLE);
            rotationStarted = true; //turn it to true in non test mode
            rotationStartedX = true;
            rotateButtonXLabel.text = "Stop";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            Debug.Log("INFO: Inside StartRotGO_ON######");
        }
        else if (!StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && rotateButtonXLabel.text == "Stop")
        {
            PlaySound(AUDIO_TOGGLE);
            rotationStarted = false;
            rotationStartedX = false;
            rotateButtonXLabel.text = "Rotate X";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside StartRotGO_OFF######");
        }

        if (StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && rotateButtonYLabel.text == "Rotate Y")
        {
            PlaySound(AUDIO_TOGGLE);
            rotationStarted = true;
            rotationStartedY = true;
            rotateButtonYLabel.text = "Stop";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            Debug.Log("INFO: Inside StartRotGO_ON######");
        }
        else if (!StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && rotateButtonYLabel.text == "Stop")
        {
            PlaySound(AUDIO_TOGGLE);
            rotationStarted = false;
            rotationStartedY = false;
            rotateButtonYLabel.text = "Rotate Y";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside StartRotGO_OFF######");
        }

        if (StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && rotateButtonZLabel.text == "Rotate Z")
        {
            PlaySound(AUDIO_TOGGLE);
            rotationStarted = true;
            rotationStartedZ = true;
            rotateButtonZLabel.text = "Stop";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            Debug.Log("INFO: Inside StartRotGO_ON######");
        }
        else if (!StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && rotateButtonZLabel.text == "Stop")
        {
            PlaySound(AUDIO_TOGGLE);
            rotationStarted = false;
            rotationStartedZ = false;
            rotateButtonZLabel.text = "Rotate Z";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside StartRotGO_OFF######");
        }

        if ((ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && explodeModelLabel.text == "Explode Model"))
        //if(dwnldModelThumbnailInstance.downloadedModelfromServer == false && dwnldModelThumbnailInstance.targetObjTempGO != null && test)
        {
            test = false;
            PlaySound(AUDIO_TOGGLE);
            if(_3DModel.GetComponentsInChildren<MeshRenderer>().Length > 1) //3 because one is parent, one is direction pointer and a single piece will have one child
            {
                StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                DecreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                IncreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                System.Diagnostics.Debug.WriteLine("INFO: Inside ExplodeModelGO_ON######");
                Debug.Log("INFO: Inside ExplodeModelGO_ON######");
                explodeModelLabel.text = "Reset Model";
                if (_3DModelDuplicate)
                {
                    //Destroy(_3DModelDuplicate);
                    Destroy(_3DModelDuplicate);
                    _3DModelDuplicate = null;
                    _3DModel.SetActive(true);
                }

                if (_3DModelDuplicate == null)
                {
                    textToSpeechMgr.StartSpeaking("Exploding Model");
                    _3DModelDuplicate = Instantiate(_3DModel);
                    System.Diagnostics.Debug.WriteLine("INFO: Instantiated 3D model" + _3DModelDuplicate);
                    Debug.Log("INFO: Instantiated 3D model " + _3DModelDuplicate);
                    //_3DModel.transform.Find("DirectionPointer").GetComponent<DirectionIndicator>().DirectionIndicatorObject.SetActive(false);
                    _3DModel.SetActive(false);
                    Debug.Log("INFO: Instantiated 3D model " + _3DModelDuplicate);
                    // _3DModelDuplicate.GetComponent<Animator>().enabled = true;
                    //anime_duplicate = _3DModelDuplicate.GetComponent<Animator>();
                    //anime_duplicate.runtimeAnimatorController = RAC;
                    _3DModelDuplicate.AddComponent<Instantiated3DModelScript>();
                    //if (_3DModelDuplicate.GetComponent<Instantiated3DModelScript>())
                    //{
                    //    Debug.Log("INFO: Explosion script attached");
                    //}
                    //else
                    //{
                    //    Debug.Log("INFO: Explosion script was not attached");
                    //}
                    Destroy(_3DModelDuplicate.GetComponent<HoloToolkit.Unity.InputModule.HandDraggable>());
                    modelChildTransform = _3DModelDuplicate.GetComponentsInChildren<Transform>();
                    PlaySound(AUDIO_MODEL_EXPAND);
                }
                else if (!manipulationVoiceCommand)
                {
                    textToSpeechMgr.StartSpeaking("Model is already exploded");
                    System.Diagnostics.Debug.WriteLine("INFO: Called from manual button######");
                }
            }
            else
            {
                explodeModelLabel.text = "Explode Model";
                ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
                textToSpeechMgr.StartSpeaking("Model is a single piece model and can't have an exploded view");
            }

        }

        if (!ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && explodeModelLabel.text == "Reset Model")
        {
            PlaySound(AUDIO_TOGGLE);
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DecreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            IncreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            explodeModelLabel.text = "Explode Model";
            Destroy(_3DModelDuplicate);
            _3DModel.SetActive(true);
            System.Diagnostics.Debug.WriteLine("INFO: Inside ExplodeModelGO_OFF######");
        }

        if (DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && diAssembleModelLabel.text == "Disassemble Model")
        {
            PlaySound(AUDIO_TOGGLE);

            if (_3DModel.GetComponentsInChildren<MeshRenderer>().Length > 1)
            {
                StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                DecreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                IncreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
                diAssembleModelLabel.text = "Reset Model";
                System.Diagnostics.Debug.WriteLine("INFO: Inside DisassembleModelGO_ON######");
                if (_3DModelDuplicate == null)
                {
                    textToSpeechMgr.StartSpeaking("Disassemble Mode Started. Gaze a model part for three seconds to highlight it and then pinch and hold to move the part.");
                    _3DModelDuplicate = Instantiate(_3DModel);
                    _3DModel.SetActive(false);
                    Destroy(_3DModelDuplicate.GetComponent<HoloToolkit.Unity.InputModule.HandDraggable>());
                    modelChildTransform = _3DModelDuplicate.GetComponentsInChildren<Transform>();
                    foreach (Transform child in modelChildTransform)
                    {
                        child.gameObject.AddComponent<Gaze3DModelScript>();
                    }
                }
                else if (!manipulationVoiceCommand)
                {
                    textToSpeechMgr.StartSpeaking("Already model manipulation in Progress. Reset the model first.");
                }
            }
            else
            {
                diAssembleModelLabel.text = "Disassemble Model";
                DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
                textToSpeechMgr.StartSpeaking("Model is a single piece model and can't be disassembled");
            }
        }

        if (!DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && diAssembleModelLabel.text == "Reset Model")
        {
            PlaySound(AUDIO_TOGGLE);
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DecreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            IncreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            diAssembleModelLabel.text = "Disassemble Model";
            Destroy(_3DModelDuplicate);
            _3DModel.SetActive(true);
            System.Diagnostics.Debug.WriteLine("INFO: Inside DisassembleModelGO_OFF######");
        }

        if (IncreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && sizeIncreaseStarted == false)
        {
            PlaySound(AUDIO_TOGGLE);
            Debug.Log("INFO: Size before incremenet : " + _3DModel.transform.localScale);
            _3DModel.transform.localScale = _3DModel.transform.localScale + 0.5f * _3DModel.transform.localScale;
            Debug.Log("INFO: Size after incremenet : " + _3DModel.transform.localScale);
            IncreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            Debug.Log("INFO: Inside IncreaseModelGO");
            /*
#if !UNITY_EDITOR
            Get3DObjectsInfo();
#endif
*/
        }

        if (DecreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && sizeDecreaseStarted == false)
        {
            PlaySound(AUDIO_TOGGLE);
            Debug.Log("INFO: Size before decrement : " + _3DModel.transform.localScale);
            _3DModel.transform.localScale = _3DModel.transform.localScale - 0.5f * _3DModel.transform.localScale;
            Debug.Log("INFO: Size after decrement : " + _3DModel.transform.localScale);
            DecreaseModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            Debug.Log("INFO: Inside DecreaseModelGO");
        }

        if (FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && freeManLabel.text == "Free Rotate & Resize")
        {
            PlaySound(AUDIO_TOGGLE);
            _3DModel.GetComponent<BoundingBoxRig>().Activate();
            textToSpeechMgr.StartSpeaking("Pinch, hold and move the corner cubes to resize. Pinch, hold and move the circles to rotate");
            freeManLabel.text = "Done";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = false;
        }
        else if (!FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().IsSelected && freeManLabel.text == "Done")
        {
            PlaySound(AUDIO_TOGGLE);
            _3DModel.GetComponent<BoundingBoxRig>().Deactivate();
            freeManLabel.text = "Free Rotate & Resize";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
        }
    }

    private void InitAudio()
    {
        try
        {
            _audioClipOpen = Resources.Load<AudioClip>("ImageModelRx");
            _audioClipClose = Resources.Load<AudioClip>("exit");
            _audioClipChatWindow = Resources.Load<AudioClip>("chat");
            _audioToggleButton = Resources.Load<AudioClip>("toggle_audio");
            _audioModelRotate = Resources.Load<AudioClip>("rotation_audio");
            _audioModelExpand = Resources.Load<AudioClip>("machine_sound");
            _audioScan = Resources.Load<AudioClip>("scan");
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
        if (audioID == AUDIO_OPEN)
        {
            audioSource.clip = _audioClipOpen;
            audioSource.Play();
        }
        else if (audioID == AUDIO_CLOSE)
        {
            audioSource.clip = _audioClipClose;
            audioSource.Play();
        }
        else if (audioID == AUDIO_CHAT)
        {
            audioSource.clip = _audioClipChatWindow;
            audioSource.Play();
        }
        else if (audioID == AUDIO_TOGGLE)
        {
            audioSource.clip = _audioToggleButton;
            audioSource.Play();
        }
        else if (audioID == AUDIO_MODEL_EXPAND)
        {
            audioSource.clip = _audioModelExpand;
            audioSource.volume = 0.5f;
            audioSource.Play();
        }
        else if (audioID == AUDIO_MODEL_ROTATE)
        {
            audioSource.clip = _audioModelRotate;
            audioSource.volume = 1.0f;
            audioSource.Play();
        }
        else if (audioID == AUDIO_SCAN)
        {
            audioSource.clip = _audioScan;
            audioSource.volume = 1.0f;
            audioSource.Play();
        }
    }

    public void ResetAllButtons()
    {
        Debug.Log("INFO: Reset Button Called");
        if (rotateButtonXLabel.text == "Stop")
        {
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            rotationStarted = false;
            rotationStartedX = false;
            rotateButtonXLabel.text = "Rotate X";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside Reset all buttons");
        }

        if (rotateButtonYLabel.text == "Stop")
        {
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            rotationStarted = false;
            rotationStartedY = false;
            rotateButtonYLabel.text = "Rotate Y";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside Reset all buttons");
        }

        if (rotateButtonZLabel.text == "Stop")
        {
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            rotationStarted = false;
            rotationStartedZ = false;
            rotateButtonZLabel.text = "Rotate Z";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside Reset all buttons");
        }

        if (explodeModelLabel.text == "Reset Model")
        {
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            explodeModelLabel.text = "Explode Model";
            Destroy(_3DModelDuplicate);
            _3DModel.SetActive(true);
            Debug.Log("INFO: Inside Reset all buttons");
        }

        if (diAssembleModelLabel.text == "Reset Model")
        {
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            diAssembleModelLabel.text = "Disassemble Model";
            Destroy(_3DModelDuplicate);
            _3DModel.SetActive(true);
            Debug.Log("INFO: Inside Reset all buttons");
        }

        if (freeManLabel.text == "Done")
        {
            FreeManipulationGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().ToggleLogic();
            _3DModel.GetComponent<BoundingBoxRig>().Deactivate();
            freeManLabel.text = "Free Rotate & Resize";
            ExplodeModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            DiAssembleModelGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationYGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationZGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            StartRotationXGO.GetComponent<HoloToolkit.Examples.InteractiveElements.InteractiveToggle>().AllowSelection = true;
            Debug.Log("INFO: Inside Reset all buttons");
        }
    }
}
