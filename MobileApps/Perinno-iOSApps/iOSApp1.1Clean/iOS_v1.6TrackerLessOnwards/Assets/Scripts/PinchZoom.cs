using UnityEngine;
using UnityEngine.SceneManagement;
public class PinchZoom : MonoBehaviour
{
    const float maxSize = 5.0f;
    const float minSize = 0.25f;
    const float normalizationScale = 0.025f;
    ScriptAfterModelInstantiated scriptInstance;
    ARKitInstantiatedModel aRKitInstantiatedInstance;
    Vector3 originalScale;
    Scene currentScene;
    void Start()
    {
        currentScene = SceneManager.GetActiveScene();
        if(currentScene.name != "UnityARKitScene")
        {
            scriptInstance = GameObject.Find("ImageTarget").GetComponent<ScriptAfterModelInstantiated>();
            originalScale = scriptInstance.GOoriginalScale;//gameObject.transform.localScale;
            scriptInstance.BtnUIResize.gameObject.SetActive(true);
        }
        else if(currentScene.name == "UnityARKitScene")
        {
            aRKitInstantiatedInstance = GameObject.Find("HitCubeParent").GetComponent<ARKitInstantiatedModel>();
            originalScale = aRKitInstantiatedInstance.GOoriginalScale;//gameObject.transform.localScale;
            aRKitInstantiatedInstance.BtnUIResize.gameObject.SetActive(true);
        }
        else
        {
            Debug.Log("ERROR: No Scene Exist!");
        }

        Renderer renderer = gameObject.GetComponent<Renderer>();
        if (renderer != null)
        {
            Renderer[] allRenderers = gameObject.GetComponentsInChildren<Renderer>();
            foreach (Renderer R in allRenderers)
            {
                Destroy(R.gameObject.GetComponent<MeshCollider>());
            }
            Destroy(renderer); //WARNING:  this will not work for cases when renderer is present in the parent game
            //Object. However, commenting this creates issue for select part if flow is : select part, then zoom and agin then select
            //Check this how can this be handled. One solution could be to assign instantiated gameobject under empty
            //Gameobject
        }

    }

    void Update()
    {
        // If there are two touches on the device...
        if (Input.touchCount == 1 || Input.touchCount == 2)
        {
            if (currentScene.name != "UnityARKitScene")
            {
                if (scriptInstance.BtnUIResize.gameObject.activeSelf)
                {
                    scriptInstance.BtnUIResize.gameObject.SetActive(false);
                }
            }
            else if(currentScene.name == "UnityARKitScene")
            {
                if (aRKitInstantiatedInstance.BtnUIResize.gameObject.activeSelf)
                {
                    aRKitInstantiatedInstance.BtnUIResize.gameObject.SetActive(false);
                }
            }

        }
        if (Input.touchCount == 2)
        {
            // Store both touches.
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);
            Debug.Log("Here in side pinch ");

            // Find the position in the previous frame of each touch.
            Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
            Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

            // Find the magnitude of the vector (the distance) between the touches in each frame.
            float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float touchDeltaMag = (touchZero.position - touchOne.position).magnitude;

            // Find the difference in the distances between each frame.
            float deltaMagnitudeDiff = -prevTouchDeltaMag + touchDeltaMag;

            gameObject.transform.localScale += (deltaMagnitudeDiff * normalizationScale) * gameObject.transform.localScale; //* originalScale.x * normalizationScale
            Debug.Log("Original scale x :" + originalScale.x);
            Debug.Log("Scaled scale x :" + gameObject.transform.localScale.x);
            if (gameObject.transform.localScale.x / originalScale.x > maxSize)
            {
                gameObject.transform.localScale = maxSize * originalScale;
            }

            if (gameObject.transform.localScale.x / originalScale.x < minSize)
            {
                gameObject.transform.localScale = minSize * originalScale;
            }
            //deltaMagnitudeDiff = Mathf.Clamp(deltaMagnitudeDiff, 0.25f * originalScale, 4.0f * originalScale);
            //Debug.Log ("Here in side pinch with size " +  deltaMagnitudeDiff);

            // If the camera is orthographic..
        }
    }
}
