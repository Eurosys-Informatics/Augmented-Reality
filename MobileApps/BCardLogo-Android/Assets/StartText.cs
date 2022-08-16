using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class StartText : MonoBehaviour, ITrackableEventHandler
{

    private TrackableBehaviour mTrackableBehaviour;

    private bool mShowGUIButton = false;
    private Rect mButtonRect = new Rect(50, 50, 120, 60);

    void Start()
    {
        mTrackableBehaviour = GetComponent<TrackableBehaviour>();
        if (mTrackableBehaviour)
        {
            mTrackableBehaviour.RegisterTrackableEventHandler(this);
        }
    }

    public void OnTrackableStateChanged(
                                    TrackableBehaviour.Status previousStatus,
                                    TrackableBehaviour.Status newStatus)
    {
        if (newStatus == TrackableBehaviour.Status.DETECTED ||
            newStatus == TrackableBehaviour.Status.TRACKED)
        {
            mShowGUIButton = false;            
        }
        else
        {
            mShowGUIButton = true;
            
        }
    }
    
    void OnGUI()
    {
       if (mShowGUIButton)
           
        {
            GUIStyle guiStyle = new GUIStyle();
            guiStyle.stretchHeight = true;
            guiStyle.stretchWidth = true;
            guiStyle.fontSize = 72;
            guiStyle.normal.textColor = Color.grey;
            guiStyle.wordWrap = true;
            GUI.Label(new Rect(Screen.width / 4, Screen.height / 3, Screen.width/2, Screen.height), "Scan back of the Perinno business card...", guiStyle);
            
        }
    }
}