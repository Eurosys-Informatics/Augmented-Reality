using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

 public class CreateAssetBundleUWP 

{
    [MenuItem("Assets/CreatAssetUWP")]
    static void BuildAllAssetBundles()
    {
        string assetBundleDirectory = "Assets/TempFolder";
        BuildPipeline.BuildAssetBundles(assetBundleDirectory, BuildAssetBundleOptions.None, BuildTarget.WSAPlayer);
    } 
}

