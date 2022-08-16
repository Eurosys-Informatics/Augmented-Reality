using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppInstructionMVP : MonoBehaviour
{

    // Use this for initialization
    public bool initialAppInstructionClickedOK = false;
    void Start()
    {
        if (GameObject.Find("SharedModelValues") == null)
        {
            MNPopup popup = new MNPopup("Instructions to use this App", "1. With this App you can see 3D objects in Augmented Reality\n" +
                "2. You can anchor the 3D object on a tracker image, which can be downloaded at perinno.com/p.png\n" +
                "3. Manipulate the 3D model (more features if you are logged in.)\n" +
                "4. If you have received a model specific ID, enter it to view the model by clicking the model ID button.");
            popup.AddAction("OK", () =>
            {
                Debug.Log("Ok action callback");
                initialAppInstructionClickedOK = true;
            });
            popup.AddDismissListener(() => { Debug.Log("dismiss listener"); });
            popup.Show();
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
