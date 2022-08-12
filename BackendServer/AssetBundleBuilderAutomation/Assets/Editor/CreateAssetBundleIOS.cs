using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

 public class CreateAssetBundleIOS 

{
    [MenuItem("Assets/CreatAsset")]
    static void BuildAllAssetBundles()
    {
        string assetBundleDirectory = "Assets/TempFolder";
        BuildPipeline.BuildAssetBundles(assetBundleDirectory, BuildAssetBundleOptions.None, BuildTarget.iOS);
    } 
}

