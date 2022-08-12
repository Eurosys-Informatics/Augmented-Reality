#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// IActivationFactory
struct Il2CppIActivationFactory;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t566903188;
// Windows.Perception.IPerceptionTimestampHelperStatics
struct IPerceptionTimestampHelperStatics_t2092781866;
// Windows.Perception.IPerceptionTimestampHelperStatics2
struct IPerceptionTimestampHelperStatics2_t3159790349;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t3792839446;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t2938905366;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_t2217455388;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_t1343138968;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t624500286;
// Windows.UI.Core.ICoreWindowStatic
struct ICoreWindowStatic_t1678315526;
// Windows.UI.IColorsStatics
struct IColorsStatics_t3904928394;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t2291651573;
// Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
struct IApplicationViewFullscreenStatics_t2572392975;
// Windows.UI.ViewManagement.IApplicationViewInteropStatics
struct IApplicationViewInteropStatics_t945853279;
// Windows.UI.ViewManagement.IApplicationViewStatics
struct IApplicationViewStatics_t254704670;
// Windows.UI.ViewManagement.IApplicationViewStatics2
struct IApplicationViewStatics2_t253525022;
// Windows.UI.ViewManagement.IApplicationViewStatics3
struct IApplicationViewStatics3_t253459486;
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
struct IApplicationViewSwitcherStatics_t2850352759;
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
struct IApplicationViewSwitcherStatics2_t2853629559;
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
struct IApplicationViewSwitcherStatics3_t2853564023;

struct IApplicationData_t28886227;
struct IApplicationView_t1025170592;
struct IAsyncAction_t3072713919;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t3901635704;
struct IAsyncOperation_1_t721183771;
struct IBuffer_t541192229;
struct IDataReader_t3392321383;
struct IDataWriter_t1260434628;
struct IDispatchedHandler_t626468369_ComCallableWrapper;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IOutputStream_t2042351338;
struct IPerceptionTimestamp_t393505964;
struct ISimpleHapticsController_t3936202477;
struct ISpatialInteractionController_t138196805;
struct ISpatialInteractionManager_t354061063;
struct ISpatialInteractionSource_t2185314266;
struct IStorageFolder_t2414910357;
struct ITypedEventHandler_2_t986724726_ComCallableWrapper;
struct IVectorView_1_t554553325;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t1181249698 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1437779878(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2736054029(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2010780058(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct NOVTABLE IVoiceInformation_t3111056019 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_get_DisplayName_m1640391607(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped0_get_Id_m1776229927() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped1_get_Language_m1418474925() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped2_get_Description_m153214867() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped3_get_Gender_m2588825291() = 0;
};
// Windows.Networking.IHostName
struct NOVTABLE IHostName_t3179521082 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped0_get_IPInformation_m2521739025() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped1_get_RawName_m106347642() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped2_get_DisplayName_m68755838() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped3_get_CanonicalName_m2585260616() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped4_get_Type_m1345115460() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped5_IsEqual_m2387015565() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t2985905689 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m4168667700(Il2CppHString ___hostName0, IHostName_t3179521082** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t664333692 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m3120053299() = 0;
};
// Windows.Networking.Sockets.IStreamSocket
struct NOVTABLE IStreamSocket_t3338378904 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped0_get_Control_m3042699933() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped1_get_Information_m1242857083() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped2_get_InputStream_m1126950040() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_OutputStream_m2118890306(IOutputStream_t2042351338** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped3_ConnectAsync_m3193160057() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_ConnectAsync_m1123568840(IHostName_t3179521082* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped4_ConnectAsync_m3193193880() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped5_ConnectAsync_m3193100983() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped6_UpgradeToSslAsync_m1682793150() = 0;
};
// Windows.Networking.Sockets.IStreamSocket2
struct NOVTABLE IStreamSocket2_t2507586357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket2_U24__Stripped0_ConnectAsync_m4213835381() = 0;
};
// Windows.Networking.Sockets.IStreamSocket3
struct NOVTABLE IStreamSocket3_t2507586356 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped0_CancelIOAsync_m1257382553() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped1_EnableTransferOwnership_m2056414540() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped2_EnableTransferOwnership_m1232450313() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped3_TransferOwnership_m1615596381() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped4_TransferOwnership_m541657236() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped5_TransferOwnership_m4286864110() = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_t566903188 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m3680219047() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m2379886354() = 0;
};
// Windows.Perception.IPerceptionTimestamp
struct NOVTABLE IPerceptionTimestamp_t393505964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped0_get_TargetTime_m2051237710() = 0;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped1_get_PredictionAmount_m1234733657() = 0;
};
// Windows.Perception.IPerceptionTimestamp2
struct NOVTABLE IPerceptionTimestamp2_t3069865132 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp2_U24__Stripped0_get_SystemRelativeTargetTime_m2249463434() = 0;
};
// Windows.Perception.IPerceptionTimestampHelperStatics2
struct NOVTABLE IPerceptionTimestampHelperStatics2_t3159790349 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics2_U24__Stripped0_FromSystemRelativeTargetTime_m1688855869() = 0;
};
// Windows.Storage.IApplicationData
struct NOVTABLE IApplicationData_t28886227 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped0_get_Version_m3464523458() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped1_SetVersionAsync_m2657783601() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped2_ClearAsync_m3547980218() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped3_ClearAsync_m3548227419() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped4_get_LocalSettings_m3007367750() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped5_get_RoamingSettings_m907061657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped6_get_LocalFolder_m864445652() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_get_RoamingFolder_m1109609965(IStorageFolder_t2414910357** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped7_get_TemporaryFolder_m3729894556() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped8_add_DataChanged_m2266976657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped9_remove_DataChanged_m2367811666() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped10_SignalDataChanged_m3679481841() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped11_get_RoamingStorageQuota_m423759995() = 0;
};
// Windows.Storage.IApplicationData2
struct NOVTABLE IApplicationData2_t163893929 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData2_U24__Stripped0_get_LocalCacheFolder_m693950201() = 0;
};
// Windows.Storage.IApplicationData3
struct NOVTABLE IApplicationData3_t163893930 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped0_GetPublisherCacheFolder_m4135038805() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped1_ClearPublisherCacheFolderAsync_m842510329() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped2_get_SharedLocalFolder_m775779766() = 0;
};
// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t3792839446 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m1299656078(IApplicationData_t28886227** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t2938905366 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_m2306898698() = 0;
};
// Windows.Storage.IStorageFile2
struct NOVTABLE IStorageFile2_t81501002 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped0_OpenAsync_m165645617() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped1_OpenTransactedWriteAsync_m1104539825() = 0;
};
// Windows.Storage.IStorageFilePropertiesWithAvailability
struct NOVTABLE IStorageFilePropertiesWithAvailability_t1554344922 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFilePropertiesWithAvailability_U24__Stripped0_get_IsAvailable_m2026400567() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t4131808966 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromPathAsync_m2841215677() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_GetFileFromApplicationUriAsync_m807305831() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_CreateStreamedFileAsync_m3773394311() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_ReplaceWithStreamedFileAsync_m2701266470() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_CreateStreamedFileFromUriAsync_m2958466004() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped5_ReplaceWithStreamedFileFromUriAsync_m1390089385() = 0;
};
// Windows.Storage.IStorageFolder2
struct NOVTABLE IStorageFolder2_t3506658410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder2_U24__Stripped0_TryGetItemAsync_m3190903159() = 0;
};
// Windows.Storage.IStorageFolder3
struct NOVTABLE IStorageFolder3_t1940574469 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder3_U24__Stripped0_TryGetChangeTracker_m3453030661() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t333412554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_GetFolderFromPathAsync_m3674878916(Il2CppHString ___path0, IAsyncOperation_1_t3901635704** comReturnValue) = 0;
};
// Windows.Storage.IStorageItem
struct NOVTABLE IStorageItem_t3194585767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped0_RenameAsync_m1111865988() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped1_RenameAsync_m1111899871() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped2_DeleteAsync_m558316365() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped3_DeleteAsync_m558350056() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped4_GetBasicPropertiesAsync_m2561736561() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped5_get_Name_m3157959696() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_get_Path_m1853866705(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped6_get_Attributes_m2913386339() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped7_get_DateCreated_m1722396674() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped8_IsOfType_m2015695515() = 0;
};
// Windows.Storage.IStorageItem2
struct NOVTABLE IStorageItem2_t2827190580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped0_GetParentAsync_m4237091681() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped1_IsEqual_m1153349944() = 0;
};
// Windows.Storage.IStorageItemProperties
struct NOVTABLE IStorageItemProperties_t2031733036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped0_GetThumbnailAsync_m260624717() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped1_GetThumbnailAsync_m3236220828() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped2_GetThumbnailAsync_m3688217351() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped3_get_DisplayName_m3813510564() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped4_get_DisplayType_m553261029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped5_get_FolderRelativeId_m2825143686() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped6_get_Properties_m1148881838() = 0;
};
// Windows.Storage.IStorageItemProperties2
struct NOVTABLE IStorageItemProperties2_t3993257882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped0_GetScaledImageAsThumbnailAsync_m1311815822() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped1_GetScaledImageAsThumbnailAsync_m3789805793() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped2_GetScaledImageAsThumbnailAsync_m1883939878() = 0;
};
// Windows.Storage.IStorageItemPropertiesWithProvider
struct NOVTABLE IStorageItemPropertiesWithProvider_t3527078644 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemPropertiesWithProvider_U24__Stripped0_get_Provider_m1098238941() = 0;
};
// Windows.Storage.Search.IStorageFolderQueryOperations
struct NOVTABLE IStorageFolderQueryOperations_t91328000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped0_GetIndexedStateAsync_m1002212636() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped1_CreateFileQuery_m2610834360() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped2_CreateFileQuery_m2607550361() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped3_CreateFileQueryWithOptions_m3264920027() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped4_CreateFolderQuery_m562621060() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped5_CreateFolderQuery_m293497691() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped6_CreateFolderQueryWithOptions_m3171464593() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped7_CreateItemQuery_m3471952481() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped8_CreateItemQueryWithOptions_m3157268352() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped9_GetFilesAsync_m2850188463() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped10_GetFilesAsync_m2309390520() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped11_GetFoldersAsync_m3312258101() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped12_GetFoldersAsync_m2029391029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped13_GetItemsAsync_m463088250() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped14_AreQueryOptionsSupported_m2004623827() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped15_IsCommonFolderQuerySupported_m3750205277() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped16_IsCommonFileQuerySupported_m2447375717() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
};
// Windows.Storage.Streams.IDataReader
struct NOVTABLE IDataReader_t3392321383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped0_get_UnconsumedBufferLength_m16229785() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped1_get_UnicodeEncoding_m2494153260() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped2_put_UnicodeEncoding_m418317483() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped3_get_ByteOrder_m2032789439() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped4_put_ByteOrder_m671273445() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped5_get_InputStreamOptions_m1340555748() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped6_put_InputStreamOptions_m4180354519() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped7_ReadByte_m4257467755() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_ReadBytes_m3117293785(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped8_ReadBuffer_m1072057890() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped9_ReadBoolean_m3250790026() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped10_ReadGuid_m2368726480() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped11_ReadInt16_m2758551764() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped12_ReadInt32_m428447941() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped13_ReadInt64_m3927627976() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped14_ReadUInt16_m4143445603() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped15_ReadUInt32_m2216220400() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped16_ReadUInt64_m2603405896() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped17_ReadSingle_m1085012947() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped18_ReadDouble_m1657665002() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped19_ReadString_m2482350783() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped20_ReadDateTime_m3187417042() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped21_ReadTimeSpan_m1354735239() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_LoadAsync_m90647872(uint32_t ___count0, IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped22_DetachBuffer_m2943901674() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped23_DetachStream_m3061556472() = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_t2217455388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_m3942767827(IInputStream_t2821136229* ___inputStream0, IDataReader_t3392321383** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_t1343138968 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_U24__Stripped0_FromBuffer_m362330522() = 0;
};
// Windows.Storage.Streams.IDataWriter
struct NOVTABLE IDataWriter_t1260434628 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped0_get_UnstoredBufferLength_m4047016447() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped1_get_UnicodeEncoding_m1051599545() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped2_put_UnicodeEncoding_m860257975() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped3_get_ByteOrder_m3417022626() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped4_put_ByteOrder_m2232773923() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped5_WriteByte_m1325520711() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteBytes_m1463346676(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped6_WriteBuffer_m3625982827() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped7_WriteBuffer_m1947313872() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped8_WriteBoolean_m4206148776() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped9_WriteGuid_m2424249642() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped10_WriteInt16_m1218706367() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteInt32_m3302687114(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped11_WriteInt64_m76875145() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped12_WriteUInt16_m3417848222() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped13_WriteUInt32_m3149825281() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped14_WriteUInt64_m3824854378() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped15_WriteSingle_m4290768671() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped16_WriteDouble_m2734993046() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped17_WriteDateTime_m2945296003() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped18_WriteTimeSpan_m4140056822() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped19_WriteString_m605557536() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped20_MeasureString_m2837992914() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_StoreAsync_m1501074270(IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped21_FlushAsync_m3961762150() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped22_DetachBuffer_m1116051824() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped23_DetachStream_m502815618() = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t624500286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_m3380054010(IOutputStream_t2042351338* ___outputStream0, IDataWriter_t1260434628** comReturnValue) = 0;
};
// Windows.Storage.Streams.IInputStreamReference
struct NOVTABLE IInputStreamReference_t980626503 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStreamReference_U24__Stripped0_OpenSequentialReadAsync_m2665372827() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t2042351338 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m124082296(IBuffer_t541192229* ___buffer0, IAsyncOperationWithProgress_2_t593214123** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m252007188(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t2099996051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m3315994282(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_put_Size_m1188903761() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m2841117993(uint64_t ___position0, IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_GetOutputStreamAt_m2771976110() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3162954653(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m3482800682(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped2_CloneStream_m392898984() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m2334341332(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m1780602347(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamReference
struct NOVTABLE IRandomAccessStreamReference_t2718546672 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStreamReference_OpenReadAsync_m2508312280(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Composition.IAnimationObject
struct NOVTABLE IAnimationObject_t3983737055 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAnimationObject_U24__Stripped0_PopulatePropertyInfo_m3959549909() = 0;
};
// Windows.UI.Core.ICoreAcceleratorKeys
struct NOVTABLE ICoreAcceleratorKeys_t931412490 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreAcceleratorKeys_U24__Stripped0_add_AcceleratorKeyActivated_m3735084724() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreAcceleratorKeys_U24__Stripped1_remove_AcceleratorKeyActivated_m3209733897() = 0;
};
// Windows.UI.Core.ICoreDispatcher2
struct NOVTABLE ICoreDispatcher2_t2392265846 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher2_U24__Stripped0_TryRunAsync_m4275648049() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher2_U24__Stripped1_TryRunIdleAsync_m2875242297() = 0;
};
// Windows.UI.Core.ICoreDispatcherWithTaskPriority
struct NOVTABLE ICoreDispatcherWithTaskPriority_t1942681059 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped0_get_CurrentPriority_m360744912() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped1_put_CurrentPriority_m3352827531() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped2_ShouldYield_m657205659() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped3_ShouldYield_m2796747783() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped4_StopProcessEvents_m2790281737() = 0;
};
// Windows.UI.Core.ICorePointerRedirector
struct NOVTABLE ICorePointerRedirector_t64917422 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped0_add_PointerRoutedAway_m1203158329() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped1_remove_PointerRoutedAway_m3428045678() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped2_add_PointerRoutedTo_m3926024979() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped3_remove_PointerRoutedTo_m2735950669() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped4_add_PointerRoutedReleased_m1378821237() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped5_remove_PointerRoutedReleased_m2328258553() = 0;
};
// Windows.UI.Core.ICoreWindow2
struct NOVTABLE ICoreWindow2_t491607557 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow2_U24__Stripped0_put_PointerPosition_m1560567044() = 0;
};
// Windows.UI.Core.ICoreWindow3
struct NOVTABLE ICoreWindow3_t2830259717 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped0_add_ClosestInteractiveBoundsRequested_m2441516162() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped1_remove_ClosestInteractiveBoundsRequested_m2995678219() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped2_GetCurrentKeyEventDeviceId_m2296197743() = 0;
};
// Windows.UI.Core.ICoreWindow4
struct NOVTABLE ICoreWindow4_t109270533 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped0_add_ResizeStarted_m1040937597() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped1_remove_ResizeStarted_m2417551533() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped2_add_ResizeCompleted_m81633379() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped3_remove_ResizeCompleted_m3583907526() = 0;
};
// Windows.UI.Core.ICoreWindow5
struct NOVTABLE ICoreWindow5_t2447922693 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow5_U24__Stripped0_get_DispatcherQueue_m3451668560() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow5_U24__Stripped1_get_ActivationMode_m1814850626() = 0;
};
// Windows.UI.Core.ICoreWindowEventArgs
struct NOVTABLE ICoreWindowEventArgs_t151143671 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowEventArgs_U24__Stripped0_get_Handled_m2824967326() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindowEventArgs_U24__Stripped1_put_Handled_m1369740630() = 0;
};
// Windows.UI.Core.ICoreWindowStatic
struct NOVTABLE ICoreWindowStatic_t1678315526 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowStatic_U24__Stripped0_GetForCurrentThread_m3665873366() = 0;
};
// Windows.UI.Core.IVisibilityChangedEventArgs
struct NOVTABLE IVisibilityChangedEventArgs_t497166311 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVisibilityChangedEventArgs_get_Visible_m1739340696(bool* comReturnValue) = 0;
};
// Windows.UI.IColors
struct NOVTABLE IColors_t3450879157 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController
struct NOVTABLE ISpatialInteractionController_t138196805 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped0_get_HasTouchpad_m2630947096() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped1_get_HasThumbstick_m627908187() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_get_SimpleHapticsController_m1735849567(ISimpleHapticsController_t3936202477** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped2_get_VendorId_m3678312071() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped3_get_ProductId_m1677934416() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped4_get_Version_m2531622161() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController2
struct NOVTABLE ISpatialInteractionController2_t3418596785 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController2_TryGetRenderableModelAsync_m2032660185(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController3
struct NOVTABLE ISpatialInteractionController3_t689713430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController3_U24__Stripped0_TryGetBatteryReport_m2923472422() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManager
struct NOVTABLE ISpatialInteractionManager_t354061063 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped0_add_SourceDetected_m1164816237() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped1_remove_SourceDetected_m2245090769() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped2_add_SourceLost_m3002472675() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped3_remove_SourceLost_m3408947156() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped4_add_SourceUpdated_m2106248377() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped5_remove_SourceUpdated_m2599047237() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped6_add_SourcePressed_m1288155835() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped7_remove_SourcePressed_m598107626() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped8_add_SourceReleased_m3272587475() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped9_remove_SourceReleased_m2897080590() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped10_add_InteractionDetected_m3770431277() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped11_remove_InteractionDetected_m1175695482() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m3746477042(IPerceptionTimestamp_t393505964* ___timeStamp0, IVectorView_1_t554553325** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t2291651573 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m3067930004(ISpatialInteractionManager_t354061063** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource
struct NOVTABLE ISpatialInteractionSource_t2185314266 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_get_Id_m2383602496(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_U24__Stripped0_get_Kind_m3686833464() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource2
struct NOVTABLE ISpatialInteractionSource2_t2453383580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped0_get_IsPointingSupported_m1454104212() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped1_get_IsMenuSupported_m3484143573() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped2_get_IsGraspSupported_m1550180598() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_get_Controller_m1434681608(ISpatialInteractionController_t138196805** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped3_TryGetStateAtTimestamp_m569091676() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource3
struct NOVTABLE ISpatialInteractionSource3_t887299639 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource3_U24__Stripped0_get_Handedness_m3941985797() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct NOVTABLE ISpatialInteractionSourceState_t1358829803 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_get_Source_m2883277112(ISpatialInteractionSource_t2185314266** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped0_get_Properties_m1189053370() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped1_get_IsPressed_m546887925() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped2_get_Timestamp_m1483989895() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped3_TryGetPointerPose_m837462904() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct NOVTABLE ISpatialInteractionSourceState2_t2977437931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped0_get_IsSelectPressed_m1462024929() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped1_get_IsMenuPressed_m2884506468() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped2_get_IsGrasped_m2033866613() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped3_get_SelectPressedValue_m3876541456() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped4_get_ControllerProperties_m1166340460() = 0;
};
// Windows.UI.ViewManagement.IApplicationView
struct NOVTABLE IApplicationView_t1025170592 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped0_get_Orientation_m4212927907() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped1_get_AdjacentToLeftDisplayEdge_m3385506026() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped2_get_AdjacentToRightDisplayEdge_m1859426273() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped3_get_IsFullScreen_m781960278() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped4_get_IsOnLockScreen_m2577111178() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped5_get_IsScreenCaptureEnabled_m160397198() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped6_put_IsScreenCaptureEnabled_m3463127432() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped7_put_Title_m3528190498() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped8_get_Title_m2096123156() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_get_Id_m3306775227(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped9_add_Consolidated_m2934620777() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped10_remove_Consolidated_m2974605279() = 0;
};
// Windows.UI.ViewManagement.IApplicationView2
struct NOVTABLE IApplicationView2_t2714993344 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped0_get_SuppressSystemOverlays_m299101081() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped1_put_SuppressSystemOverlays_m2335323331() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped2_get_VisibleBounds_m1589056832() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped3_add_VisibleBoundsChanged_m667833365() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped4_remove_VisibleBoundsChanged_m63371914() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped5_SetDesiredBoundsMode_m3048185578() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped6_get_DesiredBoundsMode_m324249149() = 0;
};
// Windows.UI.ViewManagement.IApplicationView3
struct NOVTABLE IApplicationView3_t1148909403 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped0_get_TitleBar_m1366948381() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped1_get_FullScreenSystemOverlayMode_m3412193568() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped2_put_FullScreenSystemOverlayMode_m389904880() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped3_get_IsFullScreenMode_m3243818408() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped4_TryEnterFullScreenMode_m112148633() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped5_ExitFullScreenMode_m425431989() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped6_ShowStandardSystemOverlays_m1469177567() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped7_TryResizeView_m2604594988() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped8_SetPreferredMinSize_m3988102712() = 0;
};
// Windows.UI.ViewManagement.IApplicationView4
struct NOVTABLE IApplicationView4_t1552193930 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped0_get_ViewMode_m1097226819() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped1_IsViewModeSupported_m2001416882() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped2_TryEnterViewModeAsync_m2664907217() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped3_TryEnterViewModeAsync_m498371045() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped4_TryConsolidateAsync_m3797710483() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
struct NOVTABLE IApplicationViewFullscreenStatics_t2572392975 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewFullscreenStatics_U24__Stripped0_TryUnsnapToFullscreen_m2354135936() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewInteropStatics
struct NOVTABLE IApplicationViewInteropStatics_t945853279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewInteropStatics_U24__Stripped0_GetApplicationViewIdForWindow_m808195773() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewStatics
struct NOVTABLE IApplicationViewStatics_t254704670 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics_U24__Stripped0_get_Value_m2177191036() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics_U24__Stripped1_TryUnsnap_m3176766015() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewStatics2
struct NOVTABLE IApplicationViewStatics2_t253525022 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics2_GetForCurrentView_m110374255(IApplicationView_t1025170592** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics2_U24__Stripped0_get_TerminateAppOnFinalViewClose_m4294585108() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics2_U24__Stripped1_put_TerminateAppOnFinalViewClose_m211892866() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewStatics3
struct NOVTABLE IApplicationViewStatics3_t253459486 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped0_get_PreferredLaunchWindowingMode_m3720918806() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped1_put_PreferredLaunchWindowingMode_m378258116() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped2_get_PreferredLaunchViewSize_m4149141959() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped3_put_PreferredLaunchViewSize_m2184768989() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
struct NOVTABLE IApplicationViewSwitcherStatics_t2850352759 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped0_DisableShowingMainViewOnActivation_m1969265274() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_TryShowAsStandaloneAsync_m394236499(int32_t ___viewId0, IAsyncOperation_1_t3013442981** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped1_TryShowAsStandaloneAsync_m491999923() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped2_TryShowAsStandaloneAsync_m3770708965() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped3_SwitchAsync_m3619046467() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped4_SwitchAsync_m1964459072() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped5_SwitchAsync_m3757589568() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped6_PrepareForCustomAnimatedSwitchAsync_m3331554602() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
struct NOVTABLE IApplicationViewSwitcherStatics2_t2853629559 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics2_U24__Stripped0_DisableSystemViewActivationPolicy_m290462612() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
struct NOVTABLE IApplicationViewSwitcherStatics3_t2853564023 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics3_U24__Stripped0_TryShowAsViewModeAsync_m1304638729() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics3_U24__Stripped1_TryShowAsViewModeAsync_m3297872625() = 0;
};
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef EVENTREGISTRATIONTOKEN_T318890788_H
#define EVENTREGISTRATIONTOKEN_T318890788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t318890788 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t318890788, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T318890788_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef VOICEINFORMATION_T4266404632_H
#define VOICEINFORMATION_T4266404632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.VoiceInformation
struct  VoiceInformation_t4266404632  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.IVoiceInformation
	IVoiceInformation_t3111056019* ____ivoiceInformation_t3111056019;

public:
	inline IVoiceInformation_t3111056019* get_____ivoiceInformation_t3111056019()
	{
		IVoiceInformation_t3111056019* returnValue = ____ivoiceInformation_t3111056019;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVoiceInformation_t3111056019>((&____ivoiceInformation_t3111056019), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivoiceInformation_t3111056019;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICEINFORMATION_T4266404632_H
#ifndef HOSTNAME_T2890034819_H
#define HOSTNAME_T2890034819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostName
struct  HostName_t2890034819  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.IHostName
	IHostName_t3179521082* ____ihostName_t3179521082;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IHostName_t3179521082* get_____ihostName_t3179521082()
	{
		IHostName_t3179521082* returnValue = ____ihostName_t3179521082;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostName_t3179521082>((&____ihostName_t3179521082), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostName_t3179521082;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct HostName_t2890034819_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t2985905689* ____ihostNameFactory_t2985905689;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t664333692* ____ihostNameStatics_t664333692;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t2985905689* get_____ihostNameFactory_t2985905689()
	{
		IHostNameFactory_t2985905689* returnValue = ____ihostNameFactory_t2985905689;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t2985905689::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameFactory_t2985905689>((&____ihostNameFactory_t2985905689), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t2985905689;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t664333692* get_____ihostNameStatics_t664333692()
	{
		IHostNameStatics_t664333692* returnValue = ____ihostNameStatics_t664333692;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t664333692::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameStatics_t664333692>((&____ihostNameStatics_t664333692), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t664333692;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTNAME_T2890034819_H
#ifndef STREAMSOCKET_T121918173_H
#define STREAMSOCKET_T121918173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocket
struct  StreamSocket_t121918173  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket
	IStreamSocket_t3338378904* ____istreamSocket_t3338378904;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket2
	IStreamSocket2_t2507586357* ____istreamSocket2_t2507586357;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket3
	IStreamSocket3_t2507586356* ____istreamSocket3_t2507586356;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IStreamSocket_t3338378904* get_____istreamSocket_t3338378904()
	{
		IStreamSocket_t3338378904* returnValue = ____istreamSocket_t3338378904;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket_t3338378904::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket_t3338378904>((&____istreamSocket_t3338378904), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket_t3338378904;
			}
		}
		return returnValue;
	}

	inline IStreamSocket2_t2507586357* get_____istreamSocket2_t2507586357()
	{
		IStreamSocket2_t2507586357* returnValue = ____istreamSocket2_t2507586357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket2_t2507586357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket2_t2507586357>((&____istreamSocket2_t2507586357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket2_t2507586357;
			}
		}
		return returnValue;
	}

	inline IStreamSocket3_t2507586356* get_____istreamSocket3_t2507586356()
	{
		IStreamSocket3_t2507586356* returnValue = ____istreamSocket3_t2507586356;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket3_t2507586356::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket3_t2507586356>((&____istreamSocket3_t2507586356), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket3_t2507586356;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct StreamSocket_t121918173_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_t566903188* ____istreamSocketStatics_t566903188;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_t566903188* get_____istreamSocketStatics_t566903188()
	{
		IStreamSocketStatics_t566903188* returnValue = ____istreamSocketStatics_t566903188;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_t566903188::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketStatics_t566903188>((&____istreamSocketStatics_t566903188), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_t566903188;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKET_T121918173_H
#ifndef PERCEPTIONTIMESTAMP_T25754965_H
#define PERCEPTIONTIMESTAMP_T25754965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t25754965  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Perception.IPerceptionTimestamp
	IPerceptionTimestamp_t393505964* ____iperceptionTimestamp_t393505964;
	// Cached pointer to Windows.Perception.IPerceptionTimestamp2
	IPerceptionTimestamp2_t3069865132* ____iperceptionTimestamp2_t3069865132;

public:
	inline IPerceptionTimestamp_t393505964* get_____iperceptionTimestamp_t393505964()
	{
		IPerceptionTimestamp_t393505964* returnValue = ____iperceptionTimestamp_t393505964;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp_t393505964::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp_t393505964>((&____iperceptionTimestamp_t393505964), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp_t393505964;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestamp2_t3069865132* get_____iperceptionTimestamp2_t3069865132()
	{
		IPerceptionTimestamp2_t3069865132* returnValue = ____iperceptionTimestamp2_t3069865132;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp2_t3069865132::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp2_t3069865132>((&____iperceptionTimestamp2_t3069865132), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp2_t3069865132;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMP_T25754965_H
#ifndef APPLICATIONDATA_T3489691988_H
#define APPLICATIONDATA_T3489691988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.ApplicationData
struct  ApplicationData_t3489691988  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IApplicationData
	IApplicationData_t28886227* ____iapplicationData_t28886227;
	// Cached pointer to Windows.Storage.IApplicationData2
	IApplicationData2_t163893929* ____iapplicationData2_t163893929;
	// Cached pointer to Windows.Storage.IApplicationData3
	IApplicationData3_t163893930* ____iapplicationData3_t163893930;

public:
	inline IApplicationData_t28886227* get_____iapplicationData_t28886227()
	{
		IApplicationData_t28886227* returnValue = ____iapplicationData_t28886227;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData_t28886227::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData_t28886227>((&____iapplicationData_t28886227), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData_t28886227;
			}
		}
		return returnValue;
	}

	inline IApplicationData2_t163893929* get_____iapplicationData2_t163893929()
	{
		IApplicationData2_t163893929* returnValue = ____iapplicationData2_t163893929;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData2_t163893929::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData2_t163893929>((&____iapplicationData2_t163893929), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData2_t163893929;
			}
		}
		return returnValue;
	}

	inline IApplicationData3_t163893930* get_____iapplicationData3_t163893930()
	{
		IApplicationData3_t163893930* returnValue = ____iapplicationData3_t163893930;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData3_t163893930::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData3_t163893930>((&____iapplicationData3_t163893930), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData3_t163893930;
			}
		}
		return returnValue;
	}
};

struct ApplicationData_t3489691988_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t3792839446* ____iapplicationDataStatics_t3792839446;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t2938905366* ____iapplicationDataStatics2_t2938905366;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t3792839446* get_____iapplicationDataStatics_t3792839446()
	{
		IApplicationDataStatics_t3792839446* returnValue = ____iapplicationDataStatics_t3792839446;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t3792839446::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics_t3792839446>((&____iapplicationDataStatics_t3792839446), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t3792839446;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t2938905366* get_____iapplicationDataStatics2_t2938905366()
	{
		IApplicationDataStatics2_t2938905366* returnValue = ____iapplicationDataStatics2_t2938905366;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t2938905366::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics2_t2938905366>((&____iapplicationDataStatics2_t2938905366), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t2938905366;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDATA_T3489691988_H
#ifndef DATAREADER_T2381813649_H
#define DATAREADER_T2381813649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReader
struct  DataReader_t2381813649  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataReader
	IDataReader_t3392321383* ____idataReader_t3392321383;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataReader_t3392321383* get_____idataReader_t3392321383()
	{
		IDataReader_t3392321383* returnValue = ____idataReader_t3392321383;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataReader_t3392321383::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReader_t3392321383>((&____idataReader_t3392321383), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReader_t3392321383;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct DataReader_t2381813649_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_t2217455388* ____idataReaderFactory_t2217455388;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_t1343138968* ____idataReaderStatics_t1343138968;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_t2217455388* get_____idataReaderFactory_t2217455388()
	{
		IDataReaderFactory_t2217455388* returnValue = ____idataReaderFactory_t2217455388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_t2217455388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderFactory_t2217455388>((&____idataReaderFactory_t2217455388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_t2217455388;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_t1343138968* get_____idataReaderStatics_t1343138968()
	{
		IDataReaderStatics_t1343138968* returnValue = ____idataReaderStatics_t1343138968;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_t1343138968::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderStatics_t1343138968>((&____idataReaderStatics_t1343138968), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_t1343138968;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADER_T2381813649_H
#ifndef DATAWRITER_T841151054_H
#define DATAWRITER_T841151054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriter
struct  DataWriter_t841151054  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriter
	IDataWriter_t1260434628* ____idataWriter_t1260434628;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataWriter_t1260434628* get_____idataWriter_t1260434628()
	{
		IDataWriter_t1260434628* returnValue = ____idataWriter_t1260434628;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriter_t1260434628>((&____idataWriter_t1260434628), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriter_t1260434628;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct DataWriter_t841151054_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t624500286* ____idataWriterFactory_t624500286;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataWriterFactory_t624500286* get_____idataWriterFactory_t624500286()
	{
		IDataWriterFactory_t624500286* returnValue = ____idataWriterFactory_t624500286;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t624500286::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriterFactory_t624500286>((&____idataWriterFactory_t624500286), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t624500286;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITER_T841151054_H
#ifndef COLOR_T455321150_H
#define COLOR_T455321150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Color
struct  Color_t455321150 
{
public:
	// System.Byte Windows.UI.Color::<A>k__BackingField
	uint8_t ___U3CAU3Ek__BackingField_0;
	// System.Byte Windows.UI.Color::<R>k__BackingField
	uint8_t ___U3CRU3Ek__BackingField_1;
	// System.Byte Windows.UI.Color::<G>k__BackingField
	uint8_t ___U3CGU3Ek__BackingField_2;
	// System.Byte Windows.UI.Color::<B>k__BackingField
	uint8_t ___U3CBU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Color_t455321150, ___U3CAU3Ek__BackingField_0)); }
	inline uint8_t get_U3CAU3Ek__BackingField_0() const { return ___U3CAU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CAU3Ek__BackingField_0() { return &___U3CAU3Ek__BackingField_0; }
	inline void set_U3CAU3Ek__BackingField_0(uint8_t value)
	{
		___U3CAU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Color_t455321150, ___U3CRU3Ek__BackingField_1)); }
	inline uint8_t get_U3CRU3Ek__BackingField_1() const { return ___U3CRU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CRU3Ek__BackingField_1() { return &___U3CRU3Ek__BackingField_1; }
	inline void set_U3CRU3Ek__BackingField_1(uint8_t value)
	{
		___U3CRU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CGU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Color_t455321150, ___U3CGU3Ek__BackingField_2)); }
	inline uint8_t get_U3CGU3Ek__BackingField_2() const { return ___U3CGU3Ek__BackingField_2; }
	inline uint8_t* get_address_of_U3CGU3Ek__BackingField_2() { return &___U3CGU3Ek__BackingField_2; }
	inline void set_U3CGU3Ek__BackingField_2(uint8_t value)
	{
		___U3CGU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CBU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Color_t455321150, ___U3CBU3Ek__BackingField_3)); }
	inline uint8_t get_U3CBU3Ek__BackingField_3() const { return ___U3CBU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CBU3Ek__BackingField_3() { return &___U3CBU3Ek__BackingField_3; }
	inline void set_U3CBU3Ek__BackingField_3(uint8_t value)
	{
		___U3CBU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T455321150_H
#ifndef COLOR_T455321151_H
#define COLOR_T455321151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Color
struct  Color_t455321151 
{
public:
	// System.Byte Windows.UI.Color::A
	uint8_t ___A_0;
	// System.Byte Windows.UI.Color::R
	uint8_t ___R_1;
	// System.Byte Windows.UI.Color::G
	uint8_t ___G_2;
	// System.Byte Windows.UI.Color::B
	uint8_t ___B_3;

public:
	inline static int32_t get_offset_of_A_0() { return static_cast<int32_t>(offsetof(Color_t455321151, ___A_0)); }
	inline uint8_t get_A_0() const { return ___A_0; }
	inline uint8_t* get_address_of_A_0() { return &___A_0; }
	inline void set_A_0(uint8_t value)
	{
		___A_0 = value;
	}

	inline static int32_t get_offset_of_R_1() { return static_cast<int32_t>(offsetof(Color_t455321151, ___R_1)); }
	inline uint8_t get_R_1() const { return ___R_1; }
	inline uint8_t* get_address_of_R_1() { return &___R_1; }
	inline void set_R_1(uint8_t value)
	{
		___R_1 = value;
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(Color_t455321151, ___G_2)); }
	inline uint8_t get_G_2() const { return ___G_2; }
	inline uint8_t* get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(uint8_t value)
	{
		___G_2 = value;
	}

	inline static int32_t get_offset_of_B_3() { return static_cast<int32_t>(offsetof(Color_t455321151, ___B_3)); }
	inline uint8_t get_B_3() const { return ___B_3; }
	inline uint8_t* get_address_of_B_3() { return &___B_3; }
	inline void set_B_3(uint8_t value)
	{
		___B_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T455321151_H
#ifndef VISIBILITYCHANGEDEVENTARGS_T3731408598_H
#define VISIBILITYCHANGEDEVENTARGS_T3731408598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.VisibilityChangedEventArgs
struct  VisibilityChangedEventArgs_t3731408598  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.IVisibilityChangedEventArgs
	IVisibilityChangedEventArgs_t497166311* ____ivisibilityChangedEventArgs_t497166311;
	// Cached pointer to Windows.UI.Core.ICoreWindowEventArgs
	ICoreWindowEventArgs_t151143671* ____icoreWindowEventArgs_t151143671;

public:
	inline IVisibilityChangedEventArgs_t497166311* get_____ivisibilityChangedEventArgs_t497166311()
	{
		IVisibilityChangedEventArgs_t497166311* returnValue = ____ivisibilityChangedEventArgs_t497166311;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVisibilityChangedEventArgs_t497166311::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVisibilityChangedEventArgs_t497166311>((&____ivisibilityChangedEventArgs_t497166311), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivisibilityChangedEventArgs_t497166311;
			}
		}
		return returnValue;
	}

	inline ICoreWindowEventArgs_t151143671* get_____icoreWindowEventArgs_t151143671()
	{
		ICoreWindowEventArgs_t151143671* returnValue = ____icoreWindowEventArgs_t151143671;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindowEventArgs_t151143671::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindowEventArgs_t151143671>((&____icoreWindowEventArgs_t151143671), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowEventArgs_t151143671;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBILITYCHANGEDEVENTARGS_T3731408598_H
#ifndef SPATIALINTERACTIONCONTROLLER_T3760917144_H
#define SPATIALINTERACTIONCONTROLLER_T3760917144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionController
struct  SpatialInteractionController_t3760917144  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController
	ISpatialInteractionController_t138196805* ____ispatialInteractionController_t138196805;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController2
	ISpatialInteractionController2_t3418596785* ____ispatialInteractionController2_t3418596785;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController3
	ISpatialInteractionController3_t689713430* ____ispatialInteractionController3_t689713430;

public:
	inline ISpatialInteractionController_t138196805* get_____ispatialInteractionController_t138196805()
	{
		ISpatialInteractionController_t138196805* returnValue = ____ispatialInteractionController_t138196805;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController_t138196805::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController_t138196805>((&____ispatialInteractionController_t138196805), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController_t138196805;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController2_t3418596785* get_____ispatialInteractionController2_t3418596785()
	{
		ISpatialInteractionController2_t3418596785* returnValue = ____ispatialInteractionController2_t3418596785;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController2_t3418596785::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController2_t3418596785>((&____ispatialInteractionController2_t3418596785), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController2_t3418596785;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController3_t689713430* get_____ispatialInteractionController3_t689713430()
	{
		ISpatialInteractionController3_t689713430* returnValue = ____ispatialInteractionController3_t689713430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController3_t689713430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController3_t689713430>((&____ispatialInteractionController3_t689713430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController3_t689713430;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONCONTROLLER_T3760917144_H
#ifndef SPATIALINTERACTIONMANAGER_T208992783_H
#define SPATIALINTERACTIONMANAGER_T208992783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionManager
struct  SpatialInteractionManager_t208992783  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManager
	ISpatialInteractionManager_t354061063* ____ispatialInteractionManager_t354061063;

public:
	inline ISpatialInteractionManager_t354061063* get_____ispatialInteractionManager_t354061063()
	{
		ISpatialInteractionManager_t354061063* returnValue = ____ispatialInteractionManager_t354061063;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionManager_t354061063::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManager_t354061063>((&____ispatialInteractionManager_t354061063), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManager_t354061063;
			}
		}
		return returnValue;
	}
};

struct SpatialInteractionManager_t208992783_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t2291651573* ____ispatialInteractionManagerStatics_t2291651573;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t2291651573* get_____ispatialInteractionManagerStatics_t2291651573()
	{
		ISpatialInteractionManagerStatics_t2291651573* returnValue = ____ispatialInteractionManagerStatics_t2291651573;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t2291651573::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManagerStatics_t2291651573>((&____ispatialInteractionManagerStatics_t2291651573), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t2291651573;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONMANAGER_T208992783_H
#ifndef SPATIALINTERACTIONSOURCE_T1043222996_H
#define SPATIALINTERACTIONSOURCE_T1043222996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_t1043222996  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource
	ISpatialInteractionSource_t2185314266* ____ispatialInteractionSource_t2185314266;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource2
	ISpatialInteractionSource2_t2453383580* ____ispatialInteractionSource2_t2453383580;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource3
	ISpatialInteractionSource3_t887299639* ____ispatialInteractionSource3_t887299639;

public:
	inline ISpatialInteractionSource_t2185314266* get_____ispatialInteractionSource_t2185314266()
	{
		ISpatialInteractionSource_t2185314266* returnValue = ____ispatialInteractionSource_t2185314266;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource_t2185314266::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource_t2185314266>((&____ispatialInteractionSource_t2185314266), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource_t2185314266;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource2_t2453383580* get_____ispatialInteractionSource2_t2453383580()
	{
		ISpatialInteractionSource2_t2453383580* returnValue = ____ispatialInteractionSource2_t2453383580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource2_t2453383580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource2_t2453383580>((&____ispatialInteractionSource2_t2453383580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource2_t2453383580;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource3_t887299639* get_____ispatialInteractionSource3_t887299639()
	{
		ISpatialInteractionSource3_t887299639* returnValue = ____ispatialInteractionSource3_t887299639;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource3_t887299639::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource3_t887299639>((&____ispatialInteractionSource3_t887299639), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource3_t887299639;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCE_T1043222996_H
#ifndef SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#define SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t1215688063  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState
	ISpatialInteractionSourceState_t1358829803* ____ispatialInteractionSourceState_t1358829803;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
	ISpatialInteractionSourceState2_t2977437931* ____ispatialInteractionSourceState2_t2977437931;

public:
	inline ISpatialInteractionSourceState_t1358829803* get_____ispatialInteractionSourceState_t1358829803()
	{
		ISpatialInteractionSourceState_t1358829803* returnValue = ____ispatialInteractionSourceState_t1358829803;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState_t1358829803>((&____ispatialInteractionSourceState_t1358829803), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState_t1358829803;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSourceState2_t2977437931* get_____ispatialInteractionSourceState2_t2977437931()
	{
		ISpatialInteractionSourceState2_t2977437931* returnValue = ____ispatialInteractionSourceState2_t2977437931;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState2_t2977437931>((&____ispatialInteractionSourceState2_t2977437931), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState2_t2977437931;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifndef APPLICATIONVIEW_T3708261754_H
#define APPLICATIONVIEW_T3708261754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.ViewManagement.ApplicationView
struct  ApplicationView_t3708261754  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView
	IApplicationView_t1025170592* ____iapplicationView_t1025170592;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView2
	IApplicationView2_t2714993344* ____iapplicationView2_t2714993344;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView3
	IApplicationView3_t1148909403* ____iapplicationView3_t1148909403;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView4
	IApplicationView4_t1552193930* ____iapplicationView4_t1552193930;

public:
	inline IApplicationView_t1025170592* get_____iapplicationView_t1025170592()
	{
		IApplicationView_t1025170592* returnValue = ____iapplicationView_t1025170592;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView_t1025170592::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView_t1025170592>((&____iapplicationView_t1025170592), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView_t1025170592;
			}
		}
		return returnValue;
	}

	inline IApplicationView2_t2714993344* get_____iapplicationView2_t2714993344()
	{
		IApplicationView2_t2714993344* returnValue = ____iapplicationView2_t2714993344;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView2_t2714993344::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView2_t2714993344>((&____iapplicationView2_t2714993344), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView2_t2714993344;
			}
		}
		return returnValue;
	}

	inline IApplicationView3_t1148909403* get_____iapplicationView3_t1148909403()
	{
		IApplicationView3_t1148909403* returnValue = ____iapplicationView3_t1148909403;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView3_t1148909403::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView3_t1148909403>((&____iapplicationView3_t1148909403), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView3_t1148909403;
			}
		}
		return returnValue;
	}

	inline IApplicationView4_t1552193930* get_____iapplicationView4_t1552193930()
	{
		IApplicationView4_t1552193930* returnValue = ____iapplicationView4_t1552193930;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView4_t1552193930::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView4_t1552193930>((&____iapplicationView4_t1552193930), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView4_t1552193930;
			}
		}
		return returnValue;
	}
};

struct ApplicationView_t3708261754_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewStatics
	IApplicationViewStatics_t254704670* ____iapplicationViewStatics_t254704670;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewInteropStatics
	IApplicationViewInteropStatics_t945853279* ____iapplicationViewInteropStatics_t945853279;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewStatics3
	IApplicationViewStatics3_t253459486* ____iapplicationViewStatics3_t253459486;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewStatics2
	IApplicationViewStatics2_t253525022* ____iapplicationViewStatics2_t253525022;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
	IApplicationViewFullscreenStatics_t2572392975* ____iapplicationViewFullscreenStatics_t2572392975;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.ApplicationView"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationViewStatics_t254704670* get_____iapplicationViewStatics_t254704670()
	{
		IApplicationViewStatics_t254704670* returnValue = ____iapplicationViewStatics_t254704670;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewStatics_t254704670::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewStatics_t254704670>((&____iapplicationViewStatics_t254704670), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewStatics_t254704670;
			}
		}
		return returnValue;
	}

	inline IApplicationViewInteropStatics_t945853279* get_____iapplicationViewInteropStatics_t945853279()
	{
		IApplicationViewInteropStatics_t945853279* returnValue = ____iapplicationViewInteropStatics_t945853279;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewInteropStatics_t945853279::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewInteropStatics_t945853279>((&____iapplicationViewInteropStatics_t945853279), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewInteropStatics_t945853279;
			}
		}
		return returnValue;
	}

	inline IApplicationViewStatics3_t253459486* get_____iapplicationViewStatics3_t253459486()
	{
		IApplicationViewStatics3_t253459486* returnValue = ____iapplicationViewStatics3_t253459486;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewStatics3_t253459486::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewStatics3_t253459486>((&____iapplicationViewStatics3_t253459486), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewStatics3_t253459486;
			}
		}
		return returnValue;
	}

	inline IApplicationViewStatics2_t253525022* get_____iapplicationViewStatics2_t253525022()
	{
		IApplicationViewStatics2_t253525022* returnValue = ____iapplicationViewStatics2_t253525022;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewStatics2_t253525022::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewStatics2_t253525022>((&____iapplicationViewStatics2_t253525022), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewStatics2_t253525022;
			}
		}
		return returnValue;
	}

	inline IApplicationViewFullscreenStatics_t2572392975* get_____iapplicationViewFullscreenStatics_t2572392975()
	{
		IApplicationViewFullscreenStatics_t2572392975* returnValue = ____iapplicationViewFullscreenStatics_t2572392975;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewFullscreenStatics_t2572392975::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewFullscreenStatics_t2572392975>((&____iapplicationViewFullscreenStatics_t2572392975), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewFullscreenStatics_t2572392975;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONVIEW_T3708261754_H
#ifndef APPLICATIONVIEWSWITCHER_T551440999_H
#define APPLICATIONVIEWSWITCHER_T551440999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.ViewManagement.ApplicationViewSwitcher
struct  ApplicationViewSwitcher_t551440999  : public Il2CppComObject
{
public:

public:
};

struct ApplicationViewSwitcher_t551440999_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
	IApplicationViewSwitcherStatics_t2850352759* ____iapplicationViewSwitcherStatics_t2850352759;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
	IApplicationViewSwitcherStatics2_t2853629559* ____iapplicationViewSwitcherStatics2_t2853629559;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
	IApplicationViewSwitcherStatics3_t2853564023* ____iapplicationViewSwitcherStatics3_t2853564023;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.ApplicationViewSwitcher"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationViewSwitcherStatics_t2850352759* get_____iapplicationViewSwitcherStatics_t2850352759()
	{
		IApplicationViewSwitcherStatics_t2850352759* returnValue = ____iapplicationViewSwitcherStatics_t2850352759;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewSwitcherStatics_t2850352759::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewSwitcherStatics_t2850352759>((&____iapplicationViewSwitcherStatics_t2850352759), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewSwitcherStatics_t2850352759;
			}
		}
		return returnValue;
	}

	inline IApplicationViewSwitcherStatics2_t2853629559* get_____iapplicationViewSwitcherStatics2_t2853629559()
	{
		IApplicationViewSwitcherStatics2_t2853629559* returnValue = ____iapplicationViewSwitcherStatics2_t2853629559;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewSwitcherStatics2_t2853629559::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewSwitcherStatics2_t2853629559>((&____iapplicationViewSwitcherStatics2_t2853629559), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewSwitcherStatics2_t2853629559;
			}
		}
		return returnValue;
	}

	inline IApplicationViewSwitcherStatics3_t2853564023* get_____iapplicationViewSwitcherStatics3_t2853564023()
	{
		IApplicationViewSwitcherStatics3_t2853564023* returnValue = ____iapplicationViewSwitcherStatics3_t2853564023;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewSwitcherStatics3_t2853564023::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewSwitcherStatics3_t2853564023>((&____iapplicationViewSwitcherStatics3_t2853564023), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewSwitcherStatics3_t2853564023;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONVIEWSWITCHER_T551440999_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef ASYNCSTATUS_T2150485874_H
#define ASYNCSTATUS_T2150485874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_t2150485874 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t2150485874, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATUS_T2150485874_H
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2092781866 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(DateTime_t1679451545  ___targetTime0, IPerceptionTimestamp_t393505964** comReturnValue) = 0;
};
#ifndef CREATIONCOLLISIONOPTION_T2003156443_H
#define CREATIONCOLLISIONOPTION_T2003156443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t2003156443 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t2003156443, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATIONCOLLISIONOPTION_T2003156443_H
#ifndef FILEACCESSMODE_T2616835387_H
#define FILEACCESSMODE_T2616835387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.FileAccessMode
struct  FileAccessMode_t2616835387 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t2616835387, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESSMODE_T2616835387_H
#ifndef INPUTSTREAMOPTIONS_T2901738979_H
#define INPUTSTREAMOPTIONS_T2901738979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t2901738979 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t2901738979, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T2901738979_H
#ifndef COREDISPATCHERPRIORITY_T3632043752_H
#define COREDISPATCHERPRIORITY_T3632043752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcherPriority
struct  CoreDispatcherPriority_t3632043752 
{
public:
	// System.Int32 Windows.UI.Core.CoreDispatcherPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoreDispatcherPriority_t3632043752, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHERPRIORITY_T3632043752_H
// Windows.UI.Core.ICoreWindow
struct NOVTABLE ICoreWindow_t287790597 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped0_get_AutomationHostProvider_m534412341() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped1_get_Bounds_m3578051586() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped2_get_CustomProperties_m750425525() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped3_get_Dispatcher_m2917912710() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped4_get_FlowDirection_m2151066422() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped5_put_FlowDirection_m3172854940() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped6_get_IsInputEnabled_m89968884() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped7_put_IsInputEnabled_m106803782() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped8_get_PointerCursor_m2045827685() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped9_put_PointerCursor_m514208720() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped10_get_PointerPosition_m2667249884() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped11_get_Visible_m3702752999() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped12_Activate_m3655424459() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_Close_m1700493688() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped13_GetAsyncKeyState_m385534424() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped14_GetKeyState_m1193130708() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped15_ReleasePointerCapture_m1743203614() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped16_SetPointerCapture_m404668421() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped17_add_Activated_m455796433() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped18_remove_Activated_m3330834222() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped19_add_AutomationProviderRequested_m2531656904() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped20_remove_AutomationProviderRequested_m1761633799() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped21_add_CharacterReceived_m4191492827() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped22_remove_CharacterReceived_m2562092747() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped23_add_Closed_m1767746568() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped24_remove_Closed_m3027770075() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped25_add_InputEnabled_m239871435() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped26_remove_InputEnabled_m128037670() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped27_add_KeyDown_m3969295651() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped28_remove_KeyDown_m782620710() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped29_add_KeyUp_m1713140250() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped30_remove_KeyUp_m1681659367() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped31_add_PointerCaptureLost_m3546171445() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped32_remove_PointerCaptureLost_m2100532330() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped33_add_PointerEntered_m2245386589() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped34_remove_PointerEntered_m1577997019() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped35_add_PointerExited_m3931126742() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped36_remove_PointerExited_m641502693() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped37_add_PointerMoved_m3051739682() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped38_remove_PointerMoved_m516410003() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped39_add_PointerPressed_m1845199676() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped40_remove_PointerPressed_m1947821892() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped41_add_PointerReleased_m4265394067() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped42_remove_PointerReleased_m110794933() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped43_add_TouchHitTesting_m2127298576() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped44_remove_TouchHitTesting_m996594404() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped45_add_PointerWheelChanged_m2457090262() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped46_remove_PointerWheelChanged_m2934035795() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped47_add_SizeChanged_m1275806859() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped48_remove_SizeChanged_m1114454316() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_add_VisibilityChanged_m3937792719(ITypedEventHandler_2_t986724726_ComCallableWrapper* ___handler0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_remove_VisibilityChanged_m224140673(EventRegistrationToken_t318890788  ___cookie0) = 0;
};
// Windows.UI.IColorsStatics
struct NOVTABLE IColorsStatics_t3904928394 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped0_get_AliceBlue_m2204754272() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped1_get_AntiqueWhite_m1308727399() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped2_get_Aqua_m3518030145() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped3_get_Aquamarine_m2258778239() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped4_get_Azure_m16130992() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped5_get_Beige_m3260819226() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped6_get_Bisque_m3470848817() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_get_Black_m1271850769(Color_t455321150 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped7_get_BlanchedAlmond_m91454638() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped8_get_Blue_m3717468537() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped9_get_BlueViolet_m972297631() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped10_get_Brown_m1555375581() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped11_get_BurlyWood_m524496171() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped12_get_CadetBlue_m2289386024() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped13_get_Chartreuse_m1962587256() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped14_get_Chocolate_m2270024831() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped15_get_Coral_m3124006654() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped16_get_CornflowerBlue_m716342979() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped17_get_Cornsilk_m2466411155() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped18_get_Crimson_m3815819932() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped19_get_Cyan_m1188595004() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped20_get_DarkBlue_m2640242167() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped21_get_DarkCyan_m3097773695() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped22_get_DarkGoldenrod_m1289596875() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped23_get_DarkGray_m4008710325() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped24_get_DarkGreen_m1072305032() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped25_get_DarkKhaki_m655325302() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped26_get_DarkMagenta_m930382921() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped27_get_DarkOliveGreen_m2073601567() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped28_get_DarkOrange_m967699310() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped29_get_DarkOrchid_m1484969731() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped30_get_DarkRed_m2278604015() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped31_get_DarkSalmon_m3199993042() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped32_get_DarkSeaGreen_m1005446383() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped33_get_DarkSlateBlue_m4235443913() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped34_get_DarkSlateGray_m2648844290() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped35_get_DarkTurquoise_m56240622() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped36_get_DarkViolet_m982885715() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped37_get_DeepPink_m1375207288() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped38_get_DeepSkyBlue_m1352213129() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped39_get_DimGray_m961492620() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped40_get_DodgerBlue_m407821927() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped41_get_Firebrick_m1218109919() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped42_get_FloralWhite_m2826245700() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped43_get_ForestGreen_m2660930685() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped44_get_Fuchsia_m2782214765() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped45_get_Gainsboro_m2387972026() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped46_get_GhostWhite_m3554656055() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped47_get_Gold_m3901718035() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped48_get_Goldenrod_m2460317858() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped49_get_Gray_m3265103330() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped50_get_Green_m37457152() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped51_get_GreenYellow_m2657906361() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped52_get_Honeydew_m523708430() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped53_get_HotPink_m3007255960() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped54_get_IndianRed_m394080996() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped55_get_Indigo_m2064114188() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped56_get_Ivory_m220498739() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped57_get_Khaki_m3612799226() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped58_get_Lavender_m2606162369() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped59_get_LavenderBlush_m2535534864() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped60_get_LawnGreen_m604890575() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped61_get_LemonChiffon_m2364114728() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped62_get_LightBlue_m269292814() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped63_get_LightCoral_m407071365() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped64_get_LightCyan_m2927382286() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped65_get_LightGoldenrodYellow_m1959116983() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped66_get_LightGreen_m3506579721() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped67_get_LightGray_m1510817751() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped68_get_LightPink_m3662303613() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped69_get_LightSalmon_m3460997918() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped70_get_LightSeaGreen_m3288131585() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped71_get_LightSkyBlue_m3606681169() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped72_get_LightSlateGray_m2496735409() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped73_get_LightSteelBlue_m3989572584() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped74_get_LightYellow_m1694048965() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped75_get_Lime_m365819718() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped76_get_LimeGreen_m3492343559() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped77_get_Linen_m890937468() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped78_get_Magenta_m1036479244() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped79_get_Maroon_m1286651261() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped80_get_MediumAquamarine_m248288045() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped81_get_MediumBlue_m15798425() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped82_get_MediumOrchid_m136159761() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped83_get_MediumPurple_m591540981() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped84_get_MediumSeaGreen_m2910898593() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped85_get_MediumSlateBlue_m1225533764() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped86_get_MediumSpringGreen_m3779510211() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped87_get_MediumTurquoise_m3169933619() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped88_get_MediumVioletRed_m2125213841() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped89_get_MidnightBlue_m3687072441() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped90_get_MintCream_m3543786298() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped91_get_MistyRose_m2574413746() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped92_get_Moccasin_m2410668104() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped93_get_NavajoWhite_m3894041019() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped94_get_Navy_m1608807435() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped95_get_OldLace_m3840999285() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped96_get_Olive_m1049064069() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped97_get_OliveDrab_m3745827757() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped98_get_Orange_m3716667256() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped99_get_OrangeRed_m919706020() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped100_get_Orchid_m133453678() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped101_get_PaleGoldenrod_m1644082703() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped102_get_PaleGreen_m1033133274() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped103_get_PaleTurquoise_m2723842320() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped104_get_PaleVioletRed_m856791751() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped105_get_PapayaWhip_m364307574() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped106_get_PeachPuff_m1576089651() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped107_get_Peru_m1379921317() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped108_get_Pink_m2483895091() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped109_get_Plum_m1156965333() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped110_get_PowderBlue_m1563117105() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped111_get_Purple_m3933639906() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped112_get_Red_m2961914451() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped113_get_RosyBrown_m1264500493() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped114_get_RoyalBlue_m2439929649() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped115_get_SaddleBrown_m1642467827() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped116_get_Salmon_m2336653397() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped117_get_SandyBrown_m683360139() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped118_get_SeaGreen_m850282750() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped119_get_SeaShell_m3969030841() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped120_get_Sienna_m3941676185() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped121_get_Silver_m222681858() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped122_get_SkyBlue_m2989775887() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped123_get_SlateBlue_m1572850114() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped124_get_SlateGray_m1515320867() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped125_get_Snow_m2476161341() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped126_get_SpringGreen_m1897260380() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped127_get_SteelBlue_m1751977157() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped128_get_Tan_m2433444270() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped129_get_Teal_m2271370791() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped130_get_Thistle_m299105768() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped131_get_Tomato_m627795449() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped132_get_Transparent_m4019035584() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped133_get_Turquoise_m96207938() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped134_get_Violet_m1982241511() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped135_get_Wheat_m1730605541() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_get_White_m3988825304(Color_t455321150 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped136_get_WhiteSmoke_m1931988764() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped137_get_Yellow_m447700227() = 0;
	virtual il2cpp_hresult_t STDCALL IColorsStatics_U24__Stripped138_get_YellowGreen_m4039953491() = 0;
};
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t2425795444 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m488151110(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m774826579(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m1014534200(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m959568370() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m1968429586() = 0;
};
#ifndef PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#define PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestampHelper
struct  PerceptionTimestampHelper_t1405177115  : public Il2CppComObject
{
public:

public:
};

struct PerceptionTimestampHelper_t1405177115_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics
	IPerceptionTimestampHelperStatics_t2092781866* ____iperceptionTimestampHelperStatics_t2092781866;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics2
	IPerceptionTimestampHelperStatics2_t3159790349* ____iperceptionTimestampHelperStatics2_t3159790349;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Perception.PerceptionTimestampHelper"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics_t2092781866* get_____iperceptionTimestampHelperStatics_t2092781866()
	{
		IPerceptionTimestampHelperStatics_t2092781866* returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics_t2092781866::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics_t2092781866>((&____iperceptionTimestampHelperStatics_t2092781866), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics2_t3159790349* get_____iperceptionTimestampHelperStatics2_t3159790349()
	{
		IPerceptionTimestampHelperStatics2_t3159790349* returnValue = ____iperceptionTimestampHelperStatics2_t3159790349;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics2_t3159790349::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics2_t3159790349>((&____iperceptionTimestampHelperStatics2_t3159790349), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics2_t3159790349;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMPHELPER_T1405177115_H
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t455187485 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m1126212897() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3676239059() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_OpenAsync_m1037381949(int32_t ___accessMode0, IAsyncOperation_1_t721183771** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenTransactedWriteAsync_m1588569100() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_CopyAsync_m1826427802() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m1826250819() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m1826495320() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAndReplaceAsync_m3545084853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_MoveAsync_m1671606626() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m1671462051() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m1671424532() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAndReplaceAsync_m870303739() = 0;
};
// Windows.Storage.IStorageFolder
struct NOVTABLE IStorageFolder_t2414910357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped0_CreateFileAsync_m3478046114() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_CreateFileAsync_m3292856642(Il2CppHString ___desiredName0, int32_t ___options1, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped1_CreateFolderAsync_m3554080672() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped2_CreateFolderAsync_m413574889() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_GetFileAsync_m859688798(Il2CppHString ___name0, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped3_GetFolderAsync_m377722965() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped4_GetItemAsync_m831988853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped5_GetFilesAsync_m2162686979() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped6_GetFoldersAsync_m139074646() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped7_GetItemsAsync_m4085621006() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef COLORS_T343133797_H
#define COLORS_T343133797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Colors
struct  Colors_t343133797  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.IColors
	IColors_t3450879157* ____icolors_t3450879157;

public:
	inline IColors_t3450879157* get_____icolors_t3450879157()
	{
		IColors_t3450879157* returnValue = ____icolors_t3450879157;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IColors_t3450879157::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IColors_t3450879157>((&____icolors_t3450879157), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icolors_t3450879157;
			}
		}
		return returnValue;
	}
};

struct Colors_t343133797_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.IColorsStatics
	IColorsStatics_t3904928394* ____icolorsStatics_t3904928394;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Colors"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IColorsStatics_t3904928394* get_____icolorsStatics_t3904928394()
	{
		IColorsStatics_t3904928394* returnValue = ____icolorsStatics_t3904928394;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IColorsStatics_t3904928394::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IColorsStatics_t3904928394>((&____icolorsStatics_t3904928394), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icolorsStatics_t3904928394;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORS_T343133797_H
#ifndef COREWINDOW_T2947181662_H
#define COREWINDOW_T2947181662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreWindow
struct  CoreWindow_t2947181662  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.ICoreWindow
	ICoreWindow_t287790597* ____icoreWindow_t287790597;
	// Cached pointer to Windows.UI.Core.ICoreWindow2
	ICoreWindow2_t491607557* ____icoreWindow2_t491607557;
	// Cached pointer to Windows.UI.Core.ICorePointerRedirector
	ICorePointerRedirector_t64917422* ____icorePointerRedirector_t64917422;
	// Cached pointer to Windows.UI.Core.ICoreWindow3
	ICoreWindow3_t2830259717* ____icoreWindow3_t2830259717;
	// Cached pointer to Windows.UI.Core.ICoreWindow4
	ICoreWindow4_t109270533* ____icoreWindow4_t109270533;
	// Cached pointer to Windows.UI.Core.ICoreWindow5
	ICoreWindow5_t2447922693* ____icoreWindow5_t2447922693;

public:
	inline ICoreWindow_t287790597* get_____icoreWindow_t287790597()
	{
		ICoreWindow_t287790597* returnValue = ____icoreWindow_t287790597;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow_t287790597::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow_t287790597>((&____icoreWindow_t287790597), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow_t287790597;
			}
		}
		return returnValue;
	}

	inline ICoreWindow2_t491607557* get_____icoreWindow2_t491607557()
	{
		ICoreWindow2_t491607557* returnValue = ____icoreWindow2_t491607557;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow2_t491607557::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow2_t491607557>((&____icoreWindow2_t491607557), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow2_t491607557;
			}
		}
		return returnValue;
	}

	inline ICorePointerRedirector_t64917422* get_____icorePointerRedirector_t64917422()
	{
		ICorePointerRedirector_t64917422* returnValue = ____icorePointerRedirector_t64917422;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICorePointerRedirector_t64917422::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICorePointerRedirector_t64917422>((&____icorePointerRedirector_t64917422), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icorePointerRedirector_t64917422;
			}
		}
		return returnValue;
	}

	inline ICoreWindow3_t2830259717* get_____icoreWindow3_t2830259717()
	{
		ICoreWindow3_t2830259717* returnValue = ____icoreWindow3_t2830259717;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow3_t2830259717::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow3_t2830259717>((&____icoreWindow3_t2830259717), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow3_t2830259717;
			}
		}
		return returnValue;
	}

	inline ICoreWindow4_t109270533* get_____icoreWindow4_t109270533()
	{
		ICoreWindow4_t109270533* returnValue = ____icoreWindow4_t109270533;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow4_t109270533::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow4_t109270533>((&____icoreWindow4_t109270533), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow4_t109270533;
			}
		}
		return returnValue;
	}

	inline ICoreWindow5_t2447922693* get_____icoreWindow5_t2447922693()
	{
		ICoreWindow5_t2447922693* returnValue = ____icoreWindow5_t2447922693;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow5_t2447922693::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow5_t2447922693>((&____icoreWindow5_t2447922693), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow5_t2447922693;
			}
		}
		return returnValue;
	}
};

struct CoreWindow_t2947181662_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Core.ICoreWindowStatic
	ICoreWindowStatic_t1678315526* ____icoreWindowStatic_t1678315526;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Core.CoreWindow"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ICoreWindowStatic_t1678315526* get_____icoreWindowStatic_t1678315526()
	{
		ICoreWindowStatic_t1678315526* returnValue = ____icoreWindowStatic_t1678315526;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreWindowStatic_t1678315526::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindowStatic_t1678315526>((&____icoreWindowStatic_t1678315526), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowStatic_t1678315526;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREWINDOW_T2947181662_H
// Windows.UI.Core.ICoreDispatcher
struct NOVTABLE ICoreDispatcher_t3246199926 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped0_get_HasThreadAccess_m161580841() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped1_ProcessEvents_m1437305262() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_RunAsync_m2899900497(int32_t ___priority0, IDispatchedHandler_t626468369_ComCallableWrapper* ___agileCallback1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped2_RunIdleAsync_m3142972481() = 0;
};
#ifndef STORAGEFILE_T1751804116_H
#define STORAGEFILE_T1751804116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFile
struct  StorageFile_t1751804116  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFile
	IStorageFile_t455187485* ____istorageFile_t455187485;
	// Cached pointer to Windows.Storage.Streams.IInputStreamReference
	IInputStreamReference_t980626503* ____iinputStreamReference_t980626503;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamReference
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFilePropertiesWithAvailability
	IStorageFilePropertiesWithAvailability_t1554344922* ____istorageFilePropertiesWithAvailability_t1554344922;
	// Cached pointer to Windows.Storage.IStorageFile2
	IStorageFile2_t81501002* ____istorageFile2_t81501002;

public:
	inline IStorageFile_t455187485* get_____istorageFile_t455187485()
	{
		IStorageFile_t455187485* returnValue = ____istorageFile_t455187485;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile_t455187485::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile_t455187485>((&____istorageFile_t455187485), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile_t455187485;
			}
		}
		return returnValue;
	}

	inline IInputStreamReference_t980626503* get_____iinputStreamReference_t980626503()
	{
		IInputStreamReference_t980626503* returnValue = ____iinputStreamReference_t980626503;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStreamReference_t980626503::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStreamReference_t980626503>((&____iinputStreamReference_t980626503), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStreamReference_t980626503;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamReference_t2718546672* get_____irandomAccessStreamReference_t2718546672()
	{
		IRandomAccessStreamReference_t2718546672* returnValue = ____irandomAccessStreamReference_t2718546672;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamReference_t2718546672::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamReference_t2718546672>((&____irandomAccessStreamReference_t2718546672), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamReference_t2718546672;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFilePropertiesWithAvailability_t1554344922* get_____istorageFilePropertiesWithAvailability_t1554344922()
	{
		IStorageFilePropertiesWithAvailability_t1554344922* returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFilePropertiesWithAvailability_t1554344922::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFilePropertiesWithAvailability_t1554344922>((&____istorageFilePropertiesWithAvailability_t1554344922), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
			}
		}
		return returnValue;
	}

	inline IStorageFile2_t81501002* get_____istorageFile2_t81501002()
	{
		IStorageFile2_t81501002* returnValue = ____istorageFile2_t81501002;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile2_t81501002::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile2_t81501002>((&____istorageFile2_t81501002), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile2_t81501002;
			}
		}
		return returnValue;
	}
};

struct StorageFile_t1751804116_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t4131808966* ____istorageFileStatics_t4131808966;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t4131808966* get_____istorageFileStatics_t4131808966()
	{
		IStorageFileStatics_t4131808966* returnValue = ____istorageFileStatics_t4131808966;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t4131808966::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFileStatics_t4131808966>((&____istorageFileStatics_t4131808966), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t4131808966;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFILE_T1751804116_H
#ifndef STORAGEFOLDER_T985480688_H
#define STORAGEFOLDER_T985480688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFolder
struct  StorageFolder_t985480688  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFolder
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.Search.IStorageFolderQueryOperations
	IStorageFolderQueryOperations_t91328000* ____istorageFolderQueryOperations_t91328000;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageFolder2
	IStorageFolder2_t3506658410* ____istorageFolder2_t3506658410;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFolder3
	IStorageFolder3_t1940574469* ____istorageFolder3_t1940574469;

public:
	inline IStorageFolder_t2414910357* get_____istorageFolder_t2414910357()
	{
		IStorageFolder_t2414910357* returnValue = ____istorageFolder_t2414910357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder_t2414910357>((&____istorageFolder_t2414910357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder_t2414910357;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageFolderQueryOperations_t91328000* get_____istorageFolderQueryOperations_t91328000()
	{
		IStorageFolderQueryOperations_t91328000* returnValue = ____istorageFolderQueryOperations_t91328000;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolderQueryOperations_t91328000::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderQueryOperations_t91328000>((&____istorageFolderQueryOperations_t91328000), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderQueryOperations_t91328000;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageFolder2_t3506658410* get_____istorageFolder2_t3506658410()
	{
		IStorageFolder2_t3506658410* returnValue = ____istorageFolder2_t3506658410;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder2_t3506658410::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder2_t3506658410>((&____istorageFolder2_t3506658410), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder2_t3506658410;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFolder3_t1940574469* get_____istorageFolder3_t1940574469()
	{
		IStorageFolder3_t1940574469* returnValue = ____istorageFolder3_t1940574469;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder3_t1940574469::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder3_t1940574469>((&____istorageFolder3_t1940574469), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder3_t1940574469;
			}
		}
		return returnValue;
	}
};

struct StorageFolder_t985480688_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t333412554* ____istorageFolderStatics_t333412554;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t333412554* get_____istorageFolderStatics_t333412554()
	{
		IStorageFolderStatics_t333412554* returnValue = ____istorageFolderStatics_t333412554;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t333412554::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderStatics_t333412554>((&____istorageFolderStatics_t333412554), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t333412554;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFOLDER_T985480688_H
#ifndef DATAREADERLOADOPERATION_T4248924386_H
#define DATAREADERLOADOPERATION_T4248924386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReaderLoadOperation
struct  DataReaderLoadOperation_t4248924386  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADERLOADOPERATION_T4248924386_H
#ifndef DATAWRITERSTOREOPERATION_T1087990177_H
#define DATAWRITERSTOREOPERATION_T1087990177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriterStoreOperation
struct  DataWriterStoreOperation_t1087990177  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITERSTOREOPERATION_T1087990177_H
#ifndef COREDISPATCHER_T2479646415_H
#define COREDISPATCHER_T2479646415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcher
struct  CoreDispatcher_t2479646415  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.ICoreDispatcher
	ICoreDispatcher_t3246199926* ____icoreDispatcher_t3246199926;
	// Cached pointer to Windows.UI.Core.ICoreAcceleratorKeys
	ICoreAcceleratorKeys_t931412490* ____icoreAcceleratorKeys_t931412490;
	// Cached pointer to Windows.UI.Core.ICoreDispatcherWithTaskPriority
	ICoreDispatcherWithTaskPriority_t1942681059* ____icoreDispatcherWithTaskPriority_t1942681059;
	// Cached pointer to Windows.UI.Core.ICoreDispatcher2
	ICoreDispatcher2_t2392265846* ____icoreDispatcher2_t2392265846;

public:
	inline ICoreDispatcher_t3246199926* get_____icoreDispatcher_t3246199926()
	{
		ICoreDispatcher_t3246199926* returnValue = ____icoreDispatcher_t3246199926;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcher_t3246199926::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcher_t3246199926>((&____icoreDispatcher_t3246199926), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcher_t3246199926;
			}
		}
		return returnValue;
	}

	inline ICoreAcceleratorKeys_t931412490* get_____icoreAcceleratorKeys_t931412490()
	{
		ICoreAcceleratorKeys_t931412490* returnValue = ____icoreAcceleratorKeys_t931412490;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreAcceleratorKeys_t931412490::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreAcceleratorKeys_t931412490>((&____icoreAcceleratorKeys_t931412490), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreAcceleratorKeys_t931412490;
			}
		}
		return returnValue;
	}

	inline ICoreDispatcherWithTaskPriority_t1942681059* get_____icoreDispatcherWithTaskPriority_t1942681059()
	{
		ICoreDispatcherWithTaskPriority_t1942681059* returnValue = ____icoreDispatcherWithTaskPriority_t1942681059;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcherWithTaskPriority_t1942681059::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcherWithTaskPriority_t1942681059>((&____icoreDispatcherWithTaskPriority_t1942681059), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcherWithTaskPriority_t1942681059;
			}
		}
		return returnValue;
	}

	inline ICoreDispatcher2_t2392265846* get_____icoreDispatcher2_t2392265846()
	{
		ICoreDispatcher2_t2392265846* returnValue = ____icoreDispatcher2_t2392265846;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcher2_t2392265846::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcher2_t2392265846>((&____icoreDispatcher2_t2392265846), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcher2_t2392265846;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHER_T2479646415_H
#ifndef DISPATCHEDHANDLER_T626468369_H
#define DISPATCHEDHANDLER_T626468369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.DispatchedHandler
struct  DispatchedHandler_t626468369  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Core.DispatchedHandler
struct IDispatchedHandler_t626468369_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke() = 0;
};

#endif // DISPATCHEDHANDLER_T626468369_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4400 = { sizeof (VoiceInformation_t4266404632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4401 = { sizeof (HostName_t2890034819), -1, sizeof(HostName_t2890034819_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4402 = { 0, sizeof(IHostName_t3179521082*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4403 = { 0, sizeof(IHostNameFactory_t2985905689*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4404 = { 0, sizeof(IHostNameStatics_t664333692*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4405 = { 0, sizeof(IStreamSocket_t3338378904*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4406 = { 0, sizeof(IStreamSocket2_t2507586357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4407 = { 0, sizeof(IStreamSocket3_t2507586356*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4408 = { 0, sizeof(IStreamSocketStatics_t566903188*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4409 = { sizeof (StreamSocket_t121918173), -1, sizeof(StreamSocket_t121918173_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4410 = { 0, sizeof(IPerceptionTimestamp_t393505964*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4411 = { 0, sizeof(IPerceptionTimestamp2_t3069865132*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4412 = { 0, sizeof(IPerceptionTimestampHelperStatics_t2092781866*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4413 = { 0, sizeof(IPerceptionTimestampHelperStatics2_t3159790349*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4414 = { sizeof (PerceptionTimestamp_t25754965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4415 = { sizeof (PerceptionTimestampHelper_t1405177115), -1, sizeof(PerceptionTimestampHelper_t1405177115_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4416 = { sizeof (ApplicationData_t3489691988), -1, sizeof(ApplicationData_t3489691988_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4417 = { sizeof (CreationCollisionOption_t2003156443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4417[5] = 
{
	CreationCollisionOption_t2003156443::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4418 = { sizeof (FileAccessMode_t2616835387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4418[3] = 
{
	FileAccessMode_t2616835387::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4419 = { 0, sizeof(IApplicationData_t28886227*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4420 = { 0, sizeof(IApplicationData2_t163893929*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4421 = { 0, sizeof(IApplicationData3_t163893930*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4422 = { 0, sizeof(IApplicationDataStatics_t3792839446*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4423 = { 0, sizeof(IApplicationDataStatics2_t2938905366*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4424 = { 0, sizeof(IStorageFile_t455187485*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4425 = { 0, sizeof(IStorageFile2_t81501002*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4426 = { 0, sizeof(IStorageFilePropertiesWithAvailability_t1554344922*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4427 = { 0, sizeof(IStorageFileStatics_t4131808966*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4428 = { 0, sizeof(IStorageFolder_t2414910357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4429 = { 0, sizeof(IStorageFolder2_t3506658410*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4430 = { 0, sizeof(IStorageFolder3_t1940574469*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4431 = { 0, sizeof(IStorageFolderStatics_t333412554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4432 = { 0, sizeof(IStorageItem_t3194585767*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4433 = { 0, sizeof(IStorageItem2_t2827190580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4434 = { 0, sizeof(IStorageItemProperties_t2031733036*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4435 = { 0, sizeof(IStorageItemProperties2_t3993257882*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4436 = { 0, sizeof(IStorageItemPropertiesWithProvider_t3527078644*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4437 = { 0, sizeof(IStorageFolderQueryOperations_t91328000*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4438 = { sizeof (StorageFile_t1751804116), -1, sizeof(StorageFile_t1751804116_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4439 = { sizeof (StorageFolder_t985480688), -1, sizeof(StorageFolder_t985480688_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4440 = { sizeof (DataReader_t2381813649), -1, sizeof(DataReader_t2381813649_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4441 = { sizeof (DataReaderLoadOperation_t4248924386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4442 = { sizeof (DataWriter_t841151054), -1, sizeof(DataWriter_t841151054_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4443 = { sizeof (DataWriterStoreOperation_t1087990177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4444 = { 0, sizeof(IBuffer_t541192229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4445 = { 0, sizeof(IContentTypeProvider_t1806097440*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4446 = { 0, sizeof(IDataReader_t3392321383*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4447 = { 0, sizeof(IDataReaderFactory_t2217455388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4448 = { 0, sizeof(IDataReaderStatics_t1343138968*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4449 = { 0, sizeof(IDataWriter_t1260434628*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4450 = { 0, sizeof(IDataWriterFactory_t624500286*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4451 = { 0, sizeof(IInputStream_t2821136229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4452 = { 0, sizeof(IInputStreamReference_t980626503*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4453 = { 0, sizeof(IOutputStream_t2042351338*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4454 = { 0, sizeof(IRandomAccessStream_t2099996051*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4455 = { 0, sizeof(IRandomAccessStreamReference_t2718546672*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4456 = { 0, sizeof(IRandomAccessStreamWithContentType_t3296927652*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4457 = { sizeof (InputStreamOptions_t2901738979)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4457[4] = 
{
	InputStreamOptions_t2901738979::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4458 = { sizeof (Color_t455321151)+ sizeof (RuntimeObject), sizeof(Color_t455321151 ), 0, 0 };
extern const int32_t g_FieldOffsetTable4458[4] = 
{
	Color_t455321151::get_offset_of_A_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t455321151::get_offset_of_R_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t455321151::get_offset_of_G_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t455321151::get_offset_of_B_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4459 = { sizeof (Colors_t343133797), -1, sizeof(Colors_t343133797_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4460 = { 0, sizeof(IAnimationObject_t3983737055*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4461 = { sizeof (CoreDispatcher_t2479646415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4462 = { sizeof (CoreDispatcherPriority_t3632043752)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4462[5] = 
{
	CoreDispatcherPriority_t3632043752::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4463 = { sizeof (CoreWindow_t2947181662), -1, sizeof(CoreWindow_t2947181662_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4464 = { sizeof (DispatchedHandler_t626468369), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4465 = { 0, sizeof(ICoreAcceleratorKeys_t931412490*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4466 = { 0, sizeof(ICoreDispatcher_t3246199926*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4467 = { 0, sizeof(ICoreDispatcher2_t2392265846*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4468 = { 0, sizeof(ICoreDispatcherWithTaskPriority_t1942681059*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4469 = { 0, sizeof(ICorePointerRedirector_t64917422*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4470 = { 0, sizeof(ICoreWindow_t287790597*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4471 = { 0, sizeof(ICoreWindow2_t491607557*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4472 = { 0, sizeof(ICoreWindow3_t2830259717*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4473 = { 0, sizeof(ICoreWindow4_t109270533*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4474 = { 0, sizeof(ICoreWindow5_t2447922693*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4475 = { 0, sizeof(ICoreWindowEventArgs_t151143671*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4476 = { 0, sizeof(ICoreWindowStatic_t1678315526*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4477 = { 0, sizeof(IVisibilityChangedEventArgs_t497166311*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4478 = { sizeof (VisibilityChangedEventArgs_t3731408598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4479 = { 0, sizeof(IColors_t3450879157*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4480 = { 0, sizeof(IColorsStatics_t3904928394*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4481 = { 0, sizeof(ISpatialInteractionController_t138196805*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4482 = { 0, sizeof(ISpatialInteractionController2_t3418596785*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4483 = { 0, sizeof(ISpatialInteractionController3_t689713430*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4484 = { 0, sizeof(ISpatialInteractionManager_t354061063*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4485 = { 0, sizeof(ISpatialInteractionManagerStatics_t2291651573*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4486 = { 0, sizeof(ISpatialInteractionSource_t2185314266*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4487 = { 0, sizeof(ISpatialInteractionSource2_t2453383580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4488 = { 0, sizeof(ISpatialInteractionSource3_t887299639*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4489 = { 0, sizeof(ISpatialInteractionSourceState_t1358829803*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4490 = { 0, sizeof(ISpatialInteractionSourceState2_t2977437931*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4491 = { sizeof (SpatialInteractionController_t3760917144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4492 = { sizeof (SpatialInteractionManager_t208992783), -1, sizeof(SpatialInteractionManager_t208992783_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4493 = { sizeof (SpatialInteractionSource_t1043222996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4494 = { sizeof (SpatialInteractionSourceState_t1215688063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4495 = { sizeof (ApplicationView_t3708261754), -1, sizeof(ApplicationView_t3708261754_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4496 = { sizeof (ApplicationViewSwitcher_t551440999), -1, sizeof(ApplicationViewSwitcher_t551440999_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4497 = { 0, sizeof(IApplicationView_t1025170592*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4498 = { 0, sizeof(IApplicationView2_t2714993344*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4499 = { 0, sizeof(IApplicationView3_t1148909403*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
