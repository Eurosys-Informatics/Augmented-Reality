using UnityEngine;
using UnityEditor;
using System.IO;

class AddModelToAssetDatabaseIOS
{
    static string tempFolderPath = "Assets/TempFolder";
    static DirectoryInfo dir = new DirectoryInfo(tempFolderPath);
    static FileInfo[] info = dir.GetFiles("*.*");
    static string modelFileName;
    static GameObject Obj;
    static Texture2D thumbnail;
    static Texture2D mainTex;
    [MenuItem("Assets/CreateThumbnailIOS", false, 0)]
    static void AssetBundleBuilder()
    {
        string path = "";
        foreach (FileInfo f in info)
        {
            Debug.Log("File Name is " + f.FullName);
            if (f.Extension == ".FBX" || f.Extension == ".fbx" || 
				f.Extension == ".OBJ" || f.Extension == ".obj" || 
				f.Extension == ".3DS" || f.Extension == ".3ds" ||
				f.Extension == ".DAE" || f.Extension == ".dae" ||
				f.Extension == ".SKP" || f.Extension == ".skp" ||
				f.Extension == ".DXF" || f.Extension == ".dxf")
            {
                path = tempFolderPath + "/" + f.Name;
                modelFileName = Path.GetFileNameWithoutExtension(path);
                Debug.Log("Found 3D file");
            }

            else if (f.Extension == ".PNG" || f.Extension == ".png" || 
                     f.Extension == ".JPG" || f.Extension == ".jpg" || 
                     f.Extension == ".JPEG" || f.Extension == ".jpeg" ||
                     f.Extension == ".TGA" || f.Extension == ".tga" )
            {
                Debug.Log("Texture Name is " + f.Name);
                string texturePath = tempFolderPath + "/" + f.Name;
                string textureType = Path.GetFileNameWithoutExtension(texturePath);
                if (textureType == "MainTexture")
                {
                    mainTex = AssetDatabase.LoadAssetAtPath<Texture2D>(texturePath);
                    Debug.Log("Found Texture file");
                }
            }
        }

        if (path != "")
        {
            Debug.Log("Path not null for 3D model");
            Obj = AssetDatabase.LoadAssetAtPath<GameObject>(path);
            if (mainTex != null)
            {
                if (Obj.GetComponent<Renderer>() != null)
                {
                    Obj.GetComponent<Renderer>().sharedMaterial.mainTexture = mainTex;
                }
                foreach (var c in Obj.GetComponentsInChildren<MeshRenderer>())
                {
                    Debug.Log("INFO: Applying texture to child object :" + c.name);
                    c.sharedMaterial.mainTexture = mainTex;
                }
            }
            AssetDatabase.Refresh();
            AssetImporter.GetAtPath(path).assetBundleName = modelFileName + "bundle_ios";
            //AssetDatabase.ImportAsset(AssetDatabase.GetAssetPath(Obj), ImportAssetOptions.ForceUpdate);
            //thumbnail = AssetPreview.GetAssetPreview(Obj);
            /*
            Transform t = Obj.transform;
            thumbnail = RuntimePreviewGenerator.GenerateModelPreview(t, 64, 64, false);*/
            /*
            int counter = 0;
            while (thumbnail == null && counter < 1)
            {
                thumbnail = AssetPreview.GetAssetPreview(Obj);
                counter++;
				Debug.Log("Thumbnail is null " + counter);
                System.Threading.Thread.Sleep(500);
            }
			*/
            /*
            if (thumbnail != null)
            {
                Debug.Log("Thumbnail Created");
                byte[] bytes = thumbnail.EncodeToPNG();
                File.WriteAllBytes(tempFolderPath + "/" + modelFileName + "thumbnail.png", bytes);
            }*/
        }
    }
}

