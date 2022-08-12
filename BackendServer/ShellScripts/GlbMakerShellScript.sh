#!/bin/bash

echo "Unity shell script started"
echo "Number of arguments "$#
echo "UUID #1: "$1
echo "Current User: "$USER

PATH_USER_DATA="/home/ubuntu/BackendServer/Temp/"$1
PATH_UPLOAD_DATA="/home/ubuntu/BackendServer/Temp/UploadFolder/"$1
PATH_GLB_DATA="/home/ubuntu/BackendServer/Temp/GlbData"
echo "Path to user uploaded data: "$PATH_USER_DATA
echo "Path to upload folder: "$PATH_UPLOAD_DATA

start=$SECONDS

echo "Clearing upload folder..."
rm -rf $PATH_UPLOAD_DATA
mkdir $PATH_UPLOAD_DATA

##Android glb bundle
echo "Clearing Unity Temp folder..."
rm -rf $PATH_GLB_DATA
mkdir $PATH_GLB_DATA
echo "Copying user data to glb temp folder..."

count=`ls -1 $PATH_USER_DATA/*.FBX 2>/dev/null | wc -l`
if [ $count != 0 ]
then 
echo true
cp $PATH_USER_DATA/*.FBX $PATH_GLB_DATA/glbsource.fbx
fi

count=`ls -1 $PATH_USER_DATA/*.fbx 2>/dev/null | wc -l`
if [ $count != 0 ]
then 
echo true
cp $PATH_USER_DATA/*.fbx $PATH_GLB_DATA/glbsource.fbx
fi

CUR_DIR=$(pwd)
echo "Current directory: "$CUR_DIR
cd /home/ubuntu/BackendServer
echo "Running FBX2gltF command"
sudo ./FBX2glTF-linux-x64 --input $PATH_GLB_DATA/glbsource.fbx --output $PATH_GLB_DATA/glboutput.glb
echo "Finished running gltf"
cd $CUR_DIR

ls -a $PATH_GLB_DATA
echo "Copying glb bundle to Upload folder"
cp $PATH_GLB_DATA/*glb $PATH_UPLOAD_DATA/
echo "* Finished ANDROID glb bundle"

echo "Clearing user data..."
rm -rf $PATH_USER_DATA

echo "** Total time: "$(( SECONDS - start ))
