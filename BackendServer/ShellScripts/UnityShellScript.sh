#!/bin/bash

echo "Unity shell script started"
echo "Number of arguments "$#
echo "UUID #1: "$1
echo "Current User: "$USER

PATH_USER_DATA="/home/ubuntu/BackendServer/Temp/"$1
PATH_UPLOAD_DATA="/home/ubuntu/BackendServer/Temp/UploadFolder/"$1
PATH_UNITY_TEMP="/home/ubuntu/BackendServer/AssetBundleBuilderAutomation/Assets/TempFolder"
echo "Path to user uploaded data: "$PATH_USER_DATA
echo "Path to upload folder: "$PATH_UPLOAD_DATA
echo "Path to Unity temp folder: "$PATH_UNITY_TEMP

start=$SECONDS

echo "Clearing upload folder..."
rm -rf $PATH_UPLOAD_DATA
mkdir $PATH_UPLOAD_DATA

##iOS asset bundle
echo "Clearing Unity Temp folder..."
rm -rf $PATH_UNITY_TEMP/*
echo "Copying user data to Unity temp folder..."
cp $PATH_USER_DATA/* $PATH_UNITY_TEMP/
#cp $PATH_USER_DATA/* $PATH_UPLOAD_DATA

CUR_DIR=$(pwd)
echo "Current directory: "$CUR_DIR
cd /home/ubuntu/Unity/Editor
echo "Running Unity command"
sudo ./Unity -logfile logIOS1.txt -quit -batchmode -nographics -projectPath /home/ubuntu/BackendServer/AssetBundleBuilderAutomation -executeMethod AddModelToAssetDatabaseIOS.AssetBundleBuilder
sudo ./Unity -logfile logIOS2.txt -quit -batchmode -nographics -projectPath /home/ubuntu/BackendServer/AssetBundleBuilderAutomation -executeMethod CreateAssetBundleIOS.BuildAllAssetBundles
echo "Finished running Unity"
cd $CUR_DIR

ls -a $PATH_UNITY_TEMP
echo "Copying asset bundle to Upload folder"
cp $PATH_UNITY_TEMP/*ios $PATH_UPLOAD_DATA/
#cp $PATH_UNITY_TEMP/*thumbnail.png $PATH_UPLOAD_DATA/
echo "* Finished IOS asset bundle"

##Android asset bundle
echo "Clearing Unity Temp folder..."
rm -rf $PATH_UNITY_TEMP/*
echo "Copying user data to Unity temp folder..."
cp $PATH_USER_DATA/* $PATH_UNITY_TEMP/

CUR_DIR=$(pwd)
echo "Current directory: "$CUR_DIR
cd /home/ubuntu/Unity/Editor
echo "Running Unity command"
sudo ./Unity -logfile logAND1.txt -quit -batchmode -nographics -projectPath /home/ubuntu/BackendServer/AssetBundleBuilderAutomation -executeMethod AddModelToAssetDatabaseANDROID.AssetBundleBuilder
sudo ./Unity -logfile logAND2.txt -quit -batchmode -nographics -projectPath /home/ubuntu/BackendServer/AssetBundleBuilderAutomation -executeMethod CreateAssetBundleANDROID.BuildAllAssetBundles
echo "Finished running Unity"
cd $CUR_DIR

ls -a $PATH_UNITY_TEMP
echo "Copying asset bundle to Upload folder"
cp $PATH_UNITY_TEMP/*and $PATH_UPLOAD_DATA/
echo "* Finished ANDROID asset bundle"

##UWP asset bundle
#echo "Clearing Unity Temp folder..."
#rm -rf $PATH_UNITY_TEMP/*
#echo "Copying user data to Unity temp folder..."
#cp $PATH_USER_DATA/* $PATH_UNITY_TEMP/

#CUR_DIR=$(pwd)
#echo "Current directory: "$CUR_DIR
#cd /home/ubuntu/Unity/Editor
#echo "Running Unity command"
#sudo ./Unity -logfile logUWP1.txt -quit -batchmode -nographics -projectPath /home/ubuntu/BackendServer/AssetBundleBuilderAutomation -executeMethod AddModelToAssetDatabaseUWP.AssetBundleBuilder
#sudo ./Unity -logfile logUWP2.txt -quit -batchmode -nographics -projectPath /home/ubuntu/BackendServer/AssetBundleBuilderAutomation -executeMethod CreateAssetBundleUWP.BuildAllAssetBundles
#echo "Finished running Unity"
#cd $CUR_DIR

#ls -a $PATH_UNITY_TEMP
#echo "Copying asset bundle to Upload folder"
#cp $PATH_UNITY_TEMP/*uwp $PATH_UPLOAD_DATA/
#echo "* Finished UWP asset bundle"

echo "Clearing user data..."
rm -rf $PATH_USER_DATA

echo "** Total time: "$(( SECONDS - start ))
