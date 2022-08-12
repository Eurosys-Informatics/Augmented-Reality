using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

 public class CreateAssetBundleANDROID

{
    [MenuItem("Assets/CreatAssetAndroid")]
    static void BuildAllAssetBundles()
    {
        string assetBundleDirectory = "Assets/TempFolder";
        BuildPipeline.BuildAssetBundles(assetBundleDirectory, BuildAssetBundleOptions.None, BuildTarget.Android);
    } 
}

