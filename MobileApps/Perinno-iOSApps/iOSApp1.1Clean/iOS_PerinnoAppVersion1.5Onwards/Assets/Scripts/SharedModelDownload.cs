using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Firebase.Auth;

public class SharedModelDownload : MonoBehaviour
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

    private FirebaseAuth auth;
    Button[] BtnModel; //The size needs to be dynamic! Check this
    private List<Button> BtnModelList;
    private string[] modelCode = new string[5];
    private string devicePlatform;
    public string modelURL;
    public string modelFileName;
    public bool sharedModelSelected = false;
    public bool sharedModelSelectChange = false;
    //private string tempStr = "dummy";
    GameObject loadingGO;
    private const string apiForUserModels = "https://ms.perinno.com:82/api/getUserModels";
    private const string urlThumbnail = "https://ms.perinno.com:82/api/getAssetThumbnail";
    AllGetModelForUserResponse getModelURLResp;
    private List<string> thumbnails = new List<string>();
    private List<string> codesFromThumbnail = new List<string>();
    private List<UnityEngine.UI.Image> thumbnailImages;
    private const float height = 230.0f;
    private const float width = 200.0f;
    GameObject placeholderGO;

    private void Awake()
    {
        DontDestroyOnLoad(this);
    }

    // Use this for initialization
    IEnumerator Start()
    {
        auth = FirebaseAuth.DefaultInstance;
        string emailUser = auth.CurrentUser.Email;
        string reqURI = apiForUserModels + "?userID=" + emailUser;
        Text placegolderTextGO = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model1/Text").GetComponent<Text>(); 
        //RectTransform rectText = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model1/Text").GetComponent<RectTransform>();
        Transform transformContent = GameObject.Find("HelpCanvas/ScrollBackground/Content").GetComponent<Transform>();
        RectTransform rctTransformContent = GameObject.Find("HelpCanvas/ScrollBackground/Content").GetComponent<RectTransform>();
        placeholderGO = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model1");
        Debug.Log("INFO: requestedURI is :" + reqURI);
        var request = (HttpWebRequest)WebRequest.Create(reqURI);
        var response = (HttpWebResponse)request.GetResponse();
        if (response != null)
        {
            StreamReader reader = new StreamReader(response.GetResponseStream());
            string jsonResponse = reader.ReadToEnd();
            getModelURLResp = JsonUtility.FromJson<AllGetModelForUserResponse>("{\"getModelJsonResp\":" + jsonResponse + "}");

            Debug.Log("INFO: JSON Response is :" + getModelURLResp.getModelJsonResp.Length);
            placegolderTextGO.text = "";
            placegolderTextGO.fontSize = 24;
            rctTransformContent.sizeDelta = new Vector2(width, height * getModelURLResp.getModelJsonResp.Length);
            BtnModel = new Button[getModelURLResp.getModelJsonResp.Length];

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
                Texture2D tex;
                Sprite sprite;
                tex = new Texture2D(4, 4, TextureFormat.DXT1, false);
                using (WWW www = new WWW(thumbnailResp.ThumbnailURL))
                {
                    yield return www;
                    www.LoadImageIntoTexture(tex);
                    sprite = Sprite.Create(tex, new Rect(0.0f, 0.0f, tex.width, tex.height), new Vector2(0.5f, 0.5f), 100.0f);
                }
                if (modelidx == 0)
                {
                    UnityEngine.UI.Image img = placeholderGO.GetComponent<Image>();
                    img.sprite = sprite;

                    placegolderTextGO.text = "Model ID: " + getModelURLResp.getModelJsonResp[modelidx].code;
                    Debug.Log("INFO: Model1 Code: " + placegolderTextGO.text);
                    BtnModel[buttonID] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model1").GetComponent<Button>();
                    BtnModel[buttonID].onClick.AddListener(delegate { SelectedModel(buttonID); });

                }
                else
                {
                    if ((modelidx + 1) % 2 == 0)
                    {

                        GameObject modelGO = Instantiate(placeholderGO, transformContent);
                        RectTransform rctModelGO = modelGO.GetComponent<RectTransform>();
                        rctModelGO.localPosition = new Vector3(0, height * ((modelidx + 1)/2), 0);
                        UnityEngine.UI.Image imgModelGO = modelGO.GetComponent<Image>();
                        imgModelGO.sprite = sprite;
                        modelGO.name = "Model" + (modelidx + 1).ToString();
                        Text modelTextGO = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model" + (modelidx + 1).ToString() + "/Text").GetComponent<Text>();
                        modelTextGO.text = "";
                        modelTextGO.text = "Model ID: " + getModelURLResp.getModelJsonResp[modelidx].code;
                        Debug.Log("INFO:" + modelGO.name + " code " + modelTextGO.text);
                        BtnModel[buttonID] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model" + (modelidx + 1).ToString()).GetComponent<Button>();
                        BtnModel[buttonID].onClick.AddListener(delegate { SelectedModel(buttonID); });

                    }
                    else
                    {
                        GameObject modelGO = Instantiate(placeholderGO, transformContent);
                        RectTransform rctModelGO = modelGO.GetComponent<RectTransform>();
                        rctModelGO.localPosition = new Vector3(0, -height * (modelidx)/2, 0);
                        UnityEngine.UI.Image imgModelGO = modelGO.GetComponent<Image>();
                        imgModelGO.sprite = sprite;
                        modelGO.name = "Model" + (modelidx + 1).ToString();
                        Text modelTextGO = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model" + (modelidx + 1).ToString() + "/Text").GetComponent<Text>();
                        modelTextGO.text = "";
                        modelTextGO.text = "Model ID: " + getModelURLResp.getModelJsonResp[modelidx].code;
                        Debug.Log("INFO:" + modelGO.name + " code " + modelTextGO.text);
                        BtnModel[buttonID] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model" + (modelidx + 1).ToString()).GetComponent<Button>();
                        BtnModel[buttonID].onClick.AddListener(delegate { SelectedModel(buttonID); });

                    }


                }



            }
        }

        //BtnModel[0] = GameObject.Find("HelpCanvas/ScrollBackground/Content/Model1Parent/Mask/Model1").GetComponent<Button>();
        //BtnModel[0].onClick.AddListener(delegate { SelectedModel(0); });
        //modelCode[0] = "BATA";
        loadingGO = GameObject.Find("Loading");
        loadingGO.SetActive(false);
    }


    // Update is called once per frame
    void Update()
    {

    }


    private void SelectedModel(int button_id)
    {
        sharedModelSelected = true;
        Debug.Log("INFO: Button ID Clicked of Model" + button_id);

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
            Debug.Log("INFO: Model Code " + getModelURLResp.getModelJsonResp[button_id].code);
            var request = (HttpWebRequest)WebRequest.Create(String.Format("https://ss.perinno.com:82/api/getModelAssetBundle?key={0}&Platform={1}",
                                                                          getModelURLResp.getModelJsonResp[button_id].code, devicePlatform));
            var response = (HttpWebResponse)request.GetResponse();
            StreamReader reader = new StreamReader(response.GetResponseStream());
            string jsonResponse = reader.ReadToEnd();
            ModelURLResponse modelURLResp = JsonUtility.FromJson<ModelURLResponse>(jsonResponse);
            Debug.Log("Model Response:" + modelURLResp.FileName + " " + modelURLResp.ModelURL);
            modelURL = modelURLResp.ModelURL;
            modelFileName = modelURLResp.FileName;
            if (modelURL != null)
            {
                StartCoroutine(ChangeSceneToUserLoginScene());
            }
            else
            {
                MNPopup popup = new MNPopup("", "Something wrong happened!");
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
        }
        catch (WebException ex)
        {
            Debug.Log("Webexcption " + ex.Message);
        }

    }

    IEnumerator ChangeSceneToUserLoginScene()
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
        SceneManager.LoadScene("SceneUserLogin");
    }
}
