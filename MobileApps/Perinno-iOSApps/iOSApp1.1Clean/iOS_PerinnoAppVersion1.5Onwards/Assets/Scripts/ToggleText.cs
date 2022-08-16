using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ToggleText : MonoBehaviour {

    Button BtnPP;
    Button BtnToS;
    Text txtContent;
    string txtToS;
    GameObject txtToSGO;
    string ppTxt;
    Button BtnGoBack;
    Scrollbar scrollbar;
	// Use this for initialization
	void Start () {
        BtnPP = GameObject.Find("BannerTop/PP").GetComponent<Button>();
        BtnPP.onClick.AddListener(ShowPP);
        BtnToS = GameObject.Find("BannerTop/ToS").GetComponent<Button>();
        BtnToS.onClick.AddListener(ShowToS);
        txtContent = GameObject.Find("TextCanvas/ScrollView/Viewport/Content/Text").GetComponent<Text>();
        ppTxt = txtContent.text;
        txtToSGO = GameObject.Find("TextToS");
        txtToS = txtToSGO.GetComponent<Text>().text;
        txtToSGO.SetActive(false);
        BtnGoBack = GameObject.Find("BannerBottom/GoBack").GetComponent<Button>();
        BtnGoBack.onClick.AddListener(GoBackToFirstScene);
        scrollbar = GameObject.Find("TextCanvas/ScrollView/Scrollbar Vertical").GetComponent<Scrollbar>();
        scrollbar.value = 1;
	}

    private void GoBackToFirstScene()
    {
        SceneManager.LoadScene("MVPScene1");
    }

    private void ShowToS()
    {
        scrollbar.value = 1;
        txtContent.text = txtToS;

    }

    private void ShowPP()
    {
        scrollbar.value = 1;
        txtContent.text = ppTxt;
    }

	// Update is called once per frame
	void Update () {
		
	}
}
