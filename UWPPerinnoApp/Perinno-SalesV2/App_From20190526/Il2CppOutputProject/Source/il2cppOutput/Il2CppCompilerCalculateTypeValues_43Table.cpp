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
// System.String
struct String_t;
// Windows.Devices.Enumeration.IDeviceInformationStatics
struct IDeviceInformationStatics_t1405059880;
// Windows.Devices.Enumeration.IDeviceInformationStatics2
struct IDeviceInformationStatics2_t1405977384;
// Windows.Foundation.IUriEscapeStatics
struct IUriEscapeStatics_t1418340874;
// Windows.Foundation.IUriRuntimeClassFactory
struct IUriRuntimeClassFactory_t1786313621;
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct IWwwFormUrlDecoderRuntimeClassFactory_t1825479388;
// Windows.Graphics.Imaging.ISoftwareBitmapFactory
struct ISoftwareBitmapFactory_t3130980581;
// Windows.Graphics.Imaging.ISoftwareBitmapStatics
struct ISoftwareBitmapStatics_t460328870;
// Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics
struct IMediaFrameSourceGroupStatics_t1400189432;
// Windows.Media.Capture.IMediaCaptureStatics
struct IMediaCaptureStatics_t830978977;
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics
struct IMediaEncodingSubtypesStatics_t3201092463;
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2
struct IMediaEncodingSubtypesStatics2_t2232601455;
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3
struct IMediaEncodingSubtypesStatics3_t276286319;
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics4
struct IMediaEncodingSubtypesStatics4_t3379612527;
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics5
struct IMediaEncodingSubtypesStatics5_t1423297391;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_t870565809;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t946760305;

struct IAsyncAction_t3072713919;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1203143875;
struct IAsyncOperation_1_t2729808192;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t3559749573;
struct IAsyncOperation_1_t943527478;
struct IAsyncOperation_1_t986849308;
struct IAudioDeviceController_t3742505345;
struct IBuffer_t541192229;
struct ICoreApplicationView_t3448274634;
struct ICoreDispatcher_t3246199926;
struct ICoreWindow_t287790597;
struct IDeviceInformation_t805337969;
struct IInputStream_t2821136229;
struct IIterator_1_t1506216589;
struct IIterator_1_t817443443;
struct IMapView_2_t1236801670;
struct IMediaCaptureInitializationSettings_t2768046102;
struct IMediaDeviceControl_t2302692936;
struct IMediaFrameReference_t4101965212;
struct IMediaFrameSourceGroup_t3837759288;
struct IMediaFrameSource_t948197825;
struct ISimpleHapticsControllerFeedback_t2199416581;
struct ISoftwareBitmap_t1295572089;
struct IUriRuntimeClass_t921050115;;
struct IVectorView_1_t252326345;
struct IVectorView_1_t3370193478;
struct IVectorView_1_t3605269894;
struct IVideoDeviceController_t134502423;
struct IVideoMediaFrame_t3548715290;
struct IVoiceInformation_t3111056019;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct IWwwFormUrlDecoderRuntimeClass_t497020701;



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
// Windows.ApplicationModel.Core.ICoreApplicationUseCount
struct NOVTABLE ICoreApplicationUseCount_t1878483554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUseCount_U24__Stripped0_IncrementApplicationUseCount_m2457951204() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUseCount_U24__Stripped1_DecrementApplicationUseCount_m4242504034() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView
struct NOVTABLE ICoreApplicationView_t3448274634 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_get_CoreWindow_m2844557995(ICoreWindow_t287790597** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped0_add_Activated_m4275092646() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped1_remove_Activated_m2000306789() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped2_get_IsMain_m1779394889() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped3_get_IsHosted_m514501340() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView2
struct NOVTABLE ICoreApplicationView2_t87912591 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView2_get_Dispatcher_m1256702285(ICoreDispatcher_t3246199926** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView3
struct NOVTABLE ICoreApplicationView3_t2816795946 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped0_get_IsComponent_m3170452197() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped1_get_TitleBar_m4010049929() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped2_add_HostedViewClosing_m2552235617() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped3_remove_HostedViewClosing_m1426467461() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView5
struct NOVTABLE ICoreApplicationView5_t3623365000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView5_U24__Stripped0_get_Properties_m197759884() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView6
struct NOVTABLE ICoreApplicationView6_t2057281059 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView6_U24__Stripped0_get_DispatcherQueue_m63297605() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication
struct NOVTABLE ICoreImmersiveApplication_t3816774728 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped0_get_Views_m445013133() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped1_CreateNewView_m1917106940() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped2_get_MainView_m1528488903() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication2
struct NOVTABLE ICoreImmersiveApplication2_t4020591688 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication2_CreateNewView_m1910091696(ICoreApplicationView_t3448274634** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication3
struct NOVTABLE ICoreImmersiveApplication3_t1681939528 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication3_U24__Stripped0_CreateNewView_m1224320064() = 0;
};
// Windows.Devices.Enumeration.IDeviceInformation
struct NOVTABLE IDeviceInformation_t805337969 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_get_Id_m278788822(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped0_get_Name_m1687094949() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped1_get_IsEnabled_m1200685668() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped2_get_IsDefault_m3292080692() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped3_get_EnclosureLocation_m1863824601() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped4_get_Properties_m1837626888() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped5_Update_m3606151413() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped6_GetThumbnailAsync_m358323314() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation_U24__Stripped7_GetGlyphThumbnailAsync_m857664252() = 0;
};
// Windows.Devices.Enumeration.IDeviceInformation2
struct NOVTABLE IDeviceInformation2_t3800902056 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation2_U24__Stripped0_get_Kind_m1808220738() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformation2_U24__Stripped1_get_Pairing_m1961814124() = 0;
};
// Windows.Devices.Enumeration.IDeviceInformationStatics2
struct NOVTABLE IDeviceInformationStatics2_t1405977384 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped0_GetAqsFilterFromDeviceClass_m2642331593() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped1_CreateFromIdAsync_m3226628871() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped2_FindAllAsync_m4006289962() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics2_U24__Stripped3_CreateWatcher_m3040819037() = 0;
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2199416581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m1427054036(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m1134348836() = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceInformation>
struct NOVTABLE IIterable_1_t1253470576 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m2023579846(IIterator_1_t1506216589** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterable_1_t564697430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m725484364(IIterator_1_t817443443** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceInformation>
struct NOVTABLE IVectorView_1_t2970938378 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4213976326(uint32_t ___index0, IDeviceInformation_t805337969** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3576554256(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m503401119(IDeviceInformation_t805337969* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2778942162(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IDeviceInformation_t805337969** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
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
// Windows.Foundation.IUriEscapeStatics
struct NOVTABLE IUriEscapeStatics_t1418340874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_UnescapeComponent_m4034034788(Il2CppHString ___toUnescape0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_EscapeComponent_m2989309814(Il2CppHString ___toEscape0, Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClass
struct NOVTABLE IUriRuntimeClass_t921050115 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_AbsoluteUri_m1802109736(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_DisplayUri_m486834635(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Domain_m2557921454(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Extension_m3106685299(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Fragment_m2886153123(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Host_m971230776(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Password_m4039608124(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Path_m1403698734(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Query_m49598513(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_QueryParsed_m1061304731(IWwwFormUrlDecoderRuntimeClass_t497020701** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_RawUri_m1303737506(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_SchemeName_m1162666486(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_UserName_m1956155983(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Port_m834193881(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Suspicious_m1231824283(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_Equals_m641048832(IUriRuntimeClass_t921050115* ___pUri0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_CombineUri_m511350015(Il2CppHString ___relativeUri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassFactory
struct NOVTABLE IUriRuntimeClassFactory_t1786313621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateUri_m1347622952(Il2CppHString ___uri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateWithRelativeUri_m922460588(Il2CppHString ___baseUri0, Il2CppHString ___relativeUri1, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
struct NOVTABLE IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m576710761(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m2106498432(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
struct NOVTABLE IWwwFormUrlDecoderRuntimeClass_t497020701 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClass_U24__Stripped0_GetFirstValueByName_m2439676971() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct NOVTABLE IWwwFormUrlDecoderRuntimeClassFactory_t1825479388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClassFactory_U24__Stripped0_CreateWwwFormUrlDecoder_m959935225() = 0;
};
// Windows.Graphics.Imaging.ISoftwareBitmap
struct NOVTABLE ISoftwareBitmap_t1295572089 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped0_get_BitmapPixelFormat_m3222396922() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped1_get_BitmapAlphaMode_m1182941740() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_get_PixelWidth_m2111986902(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_get_PixelHeight_m785601957(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped2_get_IsReadOnly_m4103898636() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped3_put_DpiX_m3510763531() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped4_get_DpiX_m2456251779() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped5_put_DpiY_m3510687221() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped6_get_DpiY_m2456183949() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped7_LockBuffer_m2881501214() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped8_CopyTo_m2431674957() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped9_CopyFromBuffer_m1889784422() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_CopyToBuffer_m2220073806(IBuffer_t541192229* ___buffer0) = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmap_U24__Stripped10_GetReadOnlyView_m2877431273() = 0;
};
// Windows.Graphics.Imaging.ISoftwareBitmapFactory
struct NOVTABLE ISoftwareBitmapFactory_t3130980581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapFactory_U24__Stripped0_Create_m3673262882() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapFactory_U24__Stripped1_CreateWithAlpha_m939732360() = 0;
};
// Windows.Graphics.Imaging.ISoftwareBitmapStatics
struct NOVTABLE ISoftwareBitmapStatics_t460328870 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped0_Copy_m1063328837() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped1_Convert_m2909680612() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped2_Convert_m3095999460() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped3_CreateCopyFromBuffer_m1780122814() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped4_CreateCopyFromBuffer_m1508039806() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped5_CreateCopyFromSurfaceAsync_m1653372474() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped6_CreateCopyFromSurfaceAsync_m1494173313() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameReader
struct NOVTABLE IMediaFrameReader_t1732169958 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader_U24__Stripped0_add_FrameArrived_m282357370() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader_U24__Stripped1_remove_FrameArrived_m1609881432() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader_TryAcquireLatestFrame_m2083243712(IMediaFrameReference_t4101965212** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader_StartAsync_m1839292681(IAsyncOperation_1_t3559749573** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader_StopAsync_m1791246344(IAsyncAction_t3072713919** comReturnValue) = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameReader2
struct NOVTABLE IMediaFrameReader2_t2728388032 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader2_U24__Stripped0_put_AcquisitionMode_m1229348469() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReader2_U24__Stripped1_get_AcquisitionMode_m2443554328() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameReference
struct NOVTABLE IMediaFrameReference_t4101965212 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped0_get_SourceKind_m585228756() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped1_get_Format_m2785397868() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped2_get_SystemRelativeTime_m3533467882() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped3_get_Duration_m2876584195() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped4_get_Properties_m3446115718() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped5_get_BufferMediaFrame_m1448697573() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_get_VideoMediaFrame_m3381647296(IVideoMediaFrame_t3548715290** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference_U24__Stripped6_get_CoordinateSystem_m3979824012() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameReference2
struct NOVTABLE IMediaFrameReference2_t4104979868 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameReference2_U24__Stripped0_get_AudioMediaFrame_m1935325354() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameSource
struct NOVTABLE IMediaFrameSource_t948197825 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped0_get_Info_m4292077643() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped1_get_Controller_m206208304() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped2_get_SupportedFormats_m3768392355() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped3_get_CurrentFormat_m327479430() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped4_SetFormatAsync_m3118318670() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped5_add_FormatChanged_m3725217058() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped6_remove_FormatChanged_m4046813015() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSource_U24__Stripped7_TryGetCameraIntrinsics_m3822134325() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameSourceGroup
struct NOVTABLE IMediaFrameSourceGroup_t3837759288 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceGroup_U24__Stripped0_get_Id_m2755256631() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceGroup_U24__Stripped1_get_DisplayName_m388714583() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceGroup_get_SourceInfos_m900347248(IVectorView_1_t3370193478** comReturnValue) = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics
struct NOVTABLE IMediaFrameSourceGroupStatics_t1400189432 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceGroupStatics_FindAllAsync_m3252325580(IAsyncOperation_1_t986849308** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceGroupStatics_U24__Stripped0_FromIdAsync_m2275591482() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceGroupStatics_U24__Stripped1_GetDeviceSelector_m3581262993() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameSourceInfo2
struct NOVTABLE IMediaFrameSourceInfo2_t965721299 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo2_U24__Stripped0_get_ProfileId_m2084916530() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo2_U24__Stripped1_get_VideoProfileMediaDescription_m1171989797() = 0;
};
// Windows.Media.Capture.Frames.IVideoMediaFrame
struct NOVTABLE IVideoMediaFrame_t3548715290 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped0_get_FrameReference_m1668118124() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped1_get_VideoFormat_m1129247471() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_get_SoftwareBitmap_m301207380(ISoftwareBitmap_t1295572089** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped2_get_Direct3DSurface_m3214891016() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped3_get_CameraIntrinsics_m3608839719() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped4_get_InfraredMediaFrame_m263291893() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped5_get_DepthMediaFrame_m3528373830() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoMediaFrame_U24__Stripped6_GetVideoFrame_m2575663586() = 0;
};
// Windows.Media.Capture.IMediaCapture
struct NOVTABLE IMediaCapture_t2687710539 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped0_InitializeAsync_m2734775711() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_InitializeAsync_m1047720208(IMediaCaptureInitializationSettings_t2768046102* ___mediaCaptureInitializationSettings0, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped1_StartRecordToStorageFileAsync_m2277905929() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped2_StartRecordToStreamAsync_m524428702() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped3_StartRecordToCustomSinkAsync_m1427129835() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped4_StartRecordToCustomSinkAsync_m2149902457() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped5_StopRecordAsync_m2489757986() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped6_CapturePhotoToStorageFileAsync_m2279333691() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped7_CapturePhotoToStreamAsync_m4251918927() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped8_AddEffectAsync_m4061719554() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped9_ClearEffectsAsync_m3638122974() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped10_SetEncoderProperty_m3057842188() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped11_GetEncoderProperty_m231921443() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped12_add_Failed_m1748421629() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped13_remove_Failed_m1371972149() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped14_add_RecordLimitationExceeded_m1035511630() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped15_remove_RecordLimitationExceeded_m3248529578() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped16_get_MediaCaptureSettings_m480135158() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_get_AudioDeviceController_m1759341815(IAudioDeviceController_t3742505345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_get_VideoDeviceController_m986349230(IVideoDeviceController_t134502423** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped17_SetPreviewMirroring_m590522309() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped18_GetPreviewMirroring_m1505523938() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped19_SetPreviewRotation_m4275184866() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped20_GetPreviewRotation_m1294773951() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped21_SetRecordRotation_m3980880445() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped22_GetRecordRotation_m663492844() = 0;
};
// Windows.Media.Capture.IMediaCapture2
struct NOVTABLE IMediaCapture2_t2891527499 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped0_PrepareLowLagRecordToStorageFileAsync_m3891579985() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped1_PrepareLowLagRecordToStreamAsync_m3195632863() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped2_PrepareLowLagRecordToCustomSinkAsync_m918601606() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped3_PrepareLowLagRecordToCustomSinkAsync_m1486446897() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped4_PrepareLowLagPhotoCaptureAsync_m3981611872() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped5_PrepareLowLagPhotoSequenceCaptureAsync_m3850302580() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped6_SetEncodingPropertiesAsync_m1607585546() = 0;
};
// Windows.Media.Capture.IMediaCapture3
struct NOVTABLE IMediaCapture3_t552875339 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped0_PrepareVariablePhotoSequenceCaptureAsync_m2112777480() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped1_add_FocusChanged_m1088698208() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped2_remove_FocusChanged_m2897970096() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped3_add_PhotoConfirmationCaptured_m3862535956() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped4_remove_PhotoConfirmationCaptured_m3160395183() = 0;
};
// Windows.Media.Capture.IMediaCapture4
struct NOVTABLE IMediaCapture4_t2509190475 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped0_AddAudioEffectAsync_m44736820() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped1_AddVideoEffectAsync_m3558464885() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped2_PauseRecordAsync_m2583337994() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped3_ResumeRecordAsync_m1534748683() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped4_add_CameraStreamStateChanged_m2069625330() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped5_remove_CameraStreamStateChanged_m3659784376() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped6_get_CameraStreamState_m1106269311() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped7_GetPreviewFrameAsync_m421750520() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped8_GetPreviewFrameAsync_m3826409942() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped9_add_ThermalStatusChanged_m2218568675() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped10_remove_ThermalStatusChanged_m4176170723() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped11_get_ThermalStatus_m18891453() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped12_PrepareAdvancedPhotoCaptureAsync_m1472122776() = 0;
};
// Windows.Media.Capture.IMediaCapture5
struct NOVTABLE IMediaCapture5_t170538315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped0_RemoveEffectAsync_m1401849217() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped1_PauseRecordWithResultAsync_m3906990276() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped2_StopRecordWithResultAsync_m553374532() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_get_FrameSources_m1243161556(IMapView_2_t1236801670** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped3_CreateFrameReaderAsync_m310135919() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_CreateFrameReaderAsync_m3336363625(IMediaFrameSource_t948197825* ___inputSource0, Il2CppHString ___outputSubtype1, IAsyncOperation_1_t2729808192** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped4_CreateFrameReaderAsync_m1184451091() = 0;
};
// Windows.Media.Capture.IMediaCapture6
struct NOVTABLE IMediaCapture6_t2126853451 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped0_add_CaptureDeviceExclusiveControlStatusChanged_m2901917473() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped1_remove_CaptureDeviceExclusiveControlStatusChanged_m1499551442() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped2_CreateMultiSourceFrameReaderAsync_m2850131425() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings3
struct NOVTABLE IMediaCaptureInitializationSettings3_t2764834838 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped0_put_AudioSource_m3678721786() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped1_get_AudioSource_m2123551225() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped2_put_VideoSource_m1784061944() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped3_get_VideoSource_m2090869932() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings4
struct NOVTABLE IMediaCaptureInitializationSettings4_t2764638230 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped0_get_VideoProfile_m1574429902() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped1_put_VideoProfile_m240344775() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped2_get_PreviewMediaDescription_m781334747() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped3_put_PreviewMediaDescription_m2971038979() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped4_get_RecordMediaDescription_m2034719152() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped5_put_RecordMediaDescription_m4149356239() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped6_get_PhotoMediaDescription_m2857032305() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped7_put_PhotoMediaDescription_m3494437117() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings6
struct NOVTABLE IMediaCaptureInitializationSettings6_t2764507158 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings6_U24__Stripped0_get_AlwaysPlaySystemShutterSound_m3454942465() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings6_U24__Stripped1_put_AlwaysPlaySystemShutterSound_m3153148674() = 0;
};
// Windows.Media.Capture.IMediaCaptureStatics
struct NOVTABLE IMediaCaptureStatics_t830978977 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped0_IsVideoProfileSupported_m1052560789() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped1_FindAllVideoProfiles_m358632705() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped2_FindConcurrentProfiles_m2358028342() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped3_FindKnownVideoProfiles_m330975184() = 0;
};
// Windows.Media.Capture.IMediaCaptureVideoPreview
struct NOVTABLE IMediaCaptureVideoPreview_t535963051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped0_StartPreviewAsync_m58851148() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped1_StartPreviewToCustomSinkAsync_m762417689() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped2_StartPreviewToCustomSinkAsync_m2890038847() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped3_StopPreviewAsync_m4262155444() = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t1703961418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m167098999() = 0;
};
// Windows.Media.Devices.IAdvancedVideoCaptureDeviceController
struct NOVTABLE IAdvancedVideoCaptureDeviceController_t1125634735 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController_U24__Stripped0_SetDeviceProperty_m413268627() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController_U24__Stripped1_GetDeviceProperty_m1836305289() = 0;
};
// Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2
struct NOVTABLE IAdvancedVideoCaptureDeviceController2_t157143727 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped0_get_LowLagPhotoSequence_m2127657390() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped1_get_LowLagPhoto_m3740866764() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped2_get_SceneModeControl_m1803830675() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped3_get_TorchControl_m261195037() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped4_get_FlashControl_m1002896193() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped5_get_WhiteBalanceControl_m837601904() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped6_get_ExposureControl_m2820144312() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped7_get_FocusControl_m1024899535() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped8_get_ExposureCompensationControl_m2525095773() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped9_get_IsoSpeedControl_m2421963725() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped10_get_RegionsOfInterestControl_m3557512355() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped11_get_PrimaryUse_m1306343307() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController2_U24__Stripped12_put_PrimaryUse_m2605807749() = 0;
};
// Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3
struct NOVTABLE IAdvancedVideoCaptureDeviceController3_t2113458863 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController3_U24__Stripped0_get_VariablePhotoSequenceController_m1909298855() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController3_U24__Stripped1_get_PhotoConfirmationControl_m1172594668() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController3_U24__Stripped2_get_ZoomControl_m1876343266() = 0;
};
// Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4
struct NOVTABLE IAdvancedVideoCaptureDeviceController4_t4069773999 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController4_U24__Stripped0_get_ExposurePriorityVideoControl_m3805163124() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController4_U24__Stripped1_get_DesiredOptimization_m3550100813() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController4_U24__Stripped2_put_DesiredOptimization_m3601784830() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController4_U24__Stripped3_get_HdrVideoControl_m1610891065() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController4_U24__Stripped4_get_OpticalImageStabilizationControl_m3665892923() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController4_U24__Stripped5_get_AdvancedPhotoControl_m1544284145() = 0;
};
// Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5
struct NOVTABLE IAdvancedVideoCaptureDeviceController5_t1731121839 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController5_U24__Stripped0_get_Id_m1669796568() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController5_U24__Stripped1_GetDevicePropertyById_m3689526389() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController5_U24__Stripped2_SetDevicePropertyById_m3165487610() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController5_U24__Stripped3_GetDevicePropertyByExtendedId_m637054033() = 0;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController5_U24__Stripped4_SetDevicePropertyByExtendedId_m1940138379() = 0;
};
// Windows.Media.Devices.IAdvancedVideoCaptureDeviceController6
struct NOVTABLE IAdvancedVideoCaptureDeviceController6_t3687436975 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAdvancedVideoCaptureDeviceController6_U24__Stripped0_get_VideoTemporalDenoisingControl_m2333356535() = 0;
};
// Windows.Media.Devices.IAudioDeviceController
struct NOVTABLE IAudioDeviceController_t3742505345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped0_put_Muted_m2939917434() = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_get_Muted_m3616316259(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped1_put_VolumePercent_m4060427833() = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped2_get_VolumePercent_m777035121() = 0;
};
// Windows.Media.Devices.IMediaDeviceControl
struct NOVTABLE IMediaDeviceControl_t2302692936 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceControl_U24__Stripped0_get_Capabilities_m3478630010() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceControl_U24__Stripped1_TryGetValue_m4151201032() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceControl_U24__Stripped2_TrySetValue_m2297060566() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceControl_U24__Stripped3_TryGetAuto_m691797756() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceControl_TrySetAuto_m4143049295(bool ___value0, bool* comReturnValue) = 0;
};
// Windows.Media.Devices.IMediaDeviceController
struct NOVTABLE IMediaDeviceController_t1179508027 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped0_GetAvailableMediaStreamProperties_m179567308() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped1_GetMediaStreamProperties_m3028771074() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped2_SetMediaStreamPropertiesAsync_m2626761744() = 0;
};
// Windows.Media.Devices.IVideoDeviceController
struct NOVTABLE IVideoDeviceController_t134502423 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped0_get_Brightness_m1008342490() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped1_get_Contrast_m753859611() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped2_get_Hue_m629081732() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped3_get_WhiteBalance_m1603901548() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped4_get_BacklightCompensation_m575629444() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped5_get_Pan_m2071845506() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped6_get_Tilt_m3514425890() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped7_get_Zoom_m2235108648() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped8_get_Roll_m4097026538() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped9_get_Exposure_m299262688() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_get_Focus_m1720168091(IMediaDeviceControl_t2302692936** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped10_TrySetPowerlineFrequency_m1395051170() = 0;
	virtual il2cpp_hresult_t STDCALL IVideoDeviceController_U24__Stripped11_TryGetPowerlineFrequency_m2353246076() = 0;
};
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics
struct NOVTABLE IMediaEncodingSubtypesStatics_t3201092463 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped0_get_Aac_m3556336642() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped1_get_AacAdts_m2311831180() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped2_get_Ac3_m3657059640() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped3_get_AmrNb_m2218923653() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped4_get_AmrWb_m3556972190() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped5_get_Argb32_m2734218347() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped6_get_Asf_m2227476200() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped7_get_Avi_m1950044129() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_get_Bgra8_m2489940113(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped8_get_Bmp_m2922460782() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped9_get_Eac3_m1923205434() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped10_get_Float_m860931330() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped11_get_Gif_m1284820663() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped12_get_H263_m2386708684() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped13_get_H264_m2386644171() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped14_get_H264Es_m687127035() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped15_get_Hevc_m3208852613() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped16_get_HevcEs_m438532333() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped17_get_Iyuv_m3649006401() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped18_get_Jpeg_m554184637() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped19_get_JpegXr_m896021068() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped20_get_Mjpg_m184903295() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped21_get_Mpeg_m2109950323() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped22_get_Mpeg1_m981572588() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped23_get_Mpeg2_m2547690288() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped24_get_Mp3_m1040048677() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped25_get_Mpeg4_m1740918416() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped26_get_Nv12_m2584149775() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped27_get_Pcm_m948348737() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped28_get_Png_m1350019700() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped29_get_Rgb24_m2773303306() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped30_get_Rgb32_m2388053084() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped31_get_Tiff_m3318951842() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped32_get_Wave_m2180207226() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped33_get_Wma8_m2710328932() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped34_get_Wma9_m2710264681() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped35_get_Wmv3_m2710650483() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped36_get_Wvc1_m3801236073() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped37_get_Yuy2_m1698592354() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics_U24__Stripped38_get_Yv12_m2954197295() = 0;
};
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2
struct NOVTABLE IMediaEncodingSubtypesStatics2_t2232601455 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics2_U24__Stripped0_get_Vp9_m3225434434() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics2_U24__Stripped1_get_L8_m2556831514() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics2_U24__Stripped2_get_L16_m3247036589() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics2_U24__Stripped3_get_D16_m793828994() = 0;
};
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3
struct NOVTABLE IMediaEncodingSubtypesStatics3_t276286319 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics3_U24__Stripped0_get_Alac_m2519056952() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics3_U24__Stripped1_get_Flac_m2062069022() = 0;
};
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics4
struct NOVTABLE IMediaEncodingSubtypesStatics4_t3379612527 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics4_U24__Stripped0_get_P010_m2306826393() = 0;
};
// Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics5
struct NOVTABLE IMediaEncodingSubtypesStatics5_t1423297391 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaEncodingSubtypesStatics5_U24__Stripped0_get_Heif_m3000779678() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct NOVTABLE IInstalledVoicesStatic_t870565809 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_AllVoices_m3921392764(IVectorView_1_t3605269894** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_U24__Stripped0_get_DefaultVoice_m3710717716() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct NOVTABLE IInstalledVoicesStatic2_t946760305 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic2_U24__Stripped0_TrySetDefaultVoiceAsync_m4121083203() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t764091608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m1331395156() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer
struct NOVTABLE ISpeechSynthesizer_t2734223870 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeTextToStreamAsync_m3255420258(Il2CppHString ___text0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeSsmlToStreamAsync_m781880964(Il2CppHString ___Ssml0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_put_Voice_m2158910037(IVoiceInformation_t3111056019* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_U24__Stripped0_get_Voice_m2158722298() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
struct NOVTABLE ISpeechSynthesizer2_t1865799545 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer2_U24__Stripped0_get_Options_m1005365255() = 0;
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
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
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
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
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
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
#ifndef DEVICEINFORMATIONCOLLECTION_T2581956155_H
#define DEVICEINFORMATIONCOLLECTION_T2581956155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Enumeration.DeviceInformationCollection
struct  DeviceInformationCollection_t2581956155  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.DeviceInformation>
	IVectorView_1_t2970938378* ____ivectorView_1_t2970938378;
	// Cached pointer to Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.DeviceInformation>
	IIterable_1_t1253470576* ____iiterable_1_t1253470576;

public:
	inline IVectorView_1_t2970938378* get_____ivectorView_1_t2970938378()
	{
		IVectorView_1_t2970938378* returnValue = ____ivectorView_1_t2970938378;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVectorView_1_t2970938378::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVectorView_1_t2970938378>((&____ivectorView_1_t2970938378), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivectorView_1_t2970938378;
			}
		}
		return returnValue;
	}

	inline IIterable_1_t1253470576* get_____iiterable_1_t1253470576()
	{
		IIterable_1_t1253470576* returnValue = ____iiterable_1_t1253470576;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IIterable_1_t1253470576::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IIterable_1_t1253470576>((&____iiterable_1_t1253470576), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iiterable_1_t1253470576;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINFORMATIONCOLLECTION_T2581956155_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t913461083  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581;

public:
	inline ISimpleHapticsControllerFeedback_t2199416581* get_____isimpleHapticsControllerFeedback_t2199416581()
	{
		ISimpleHapticsControllerFeedback_t2199416581* returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2199416581>((&____isimpleHapticsControllerFeedback_t2199416581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifndef UNIVERSALAPICONTRACT_T3367004861_H
#define UNIVERSALAPICONTRACT_T3367004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t3367004861 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T3367004861_H
#ifndef URI_T952691556_H
#define URI_T952691556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Uri
struct  Uri_t952691556  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IUriRuntimeClass
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IUriRuntimeClass_t921050115* get_____iuriRuntimeClass_t921050115()
	{
		IUriRuntimeClass_t921050115* returnValue = ____iuriRuntimeClass_t921050115;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClass_t921050115>((&____iuriRuntimeClass_t921050115), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClass_t921050115;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788()
	{
		IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788>((&____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
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

struct Uri_t952691556_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassFactory
	IUriRuntimeClassFactory_t1786313621* ____iuriRuntimeClassFactory_t1786313621;
	// Cached pointer to Windows.Foundation.IUriEscapeStatics
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Uri"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassFactory_t1786313621* get_____iuriRuntimeClassFactory_t1786313621()
	{
		IUriRuntimeClassFactory_t1786313621* returnValue = ____iuriRuntimeClassFactory_t1786313621;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriRuntimeClassFactory_t1786313621::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassFactory_t1786313621>((&____iuriRuntimeClassFactory_t1786313621), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassFactory_t1786313621;
			}
		}
		return returnValue;
	}

	inline IUriEscapeStatics_t1418340874* get_____iuriEscapeStatics_t1418340874()
	{
		IUriEscapeStatics_t1418340874* returnValue = ____iuriEscapeStatics_t1418340874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriEscapeStatics_t1418340874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriEscapeStatics_t1418340874>((&____iuriEscapeStatics_t1418340874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriEscapeStatics_t1418340874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T952691556_H
#ifndef WWWFORMURLDECODER_T4136411681_H
#define WWWFORMURLDECODER_T4136411681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.WwwFormUrlDecoder
struct  WwwFormUrlDecoder_t4136411681  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
	IWwwFormUrlDecoderRuntimeClass_t497020701* ____iwwwFormUrlDecoderRuntimeClass_t497020701;
	// Cached pointer to Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232;
	// Cached pointer to Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IIterable_1_t564697430* ____iiterable_1_t564697430;

public:
	inline IWwwFormUrlDecoderRuntimeClass_t497020701* get_____iwwwFormUrlDecoderRuntimeClass_t497020701()
	{
		IWwwFormUrlDecoderRuntimeClass_t497020701* returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWwwFormUrlDecoderRuntimeClass_t497020701::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClass_t497020701>((&____iwwwFormUrlDecoderRuntimeClass_t497020701), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
			}
		}
		return returnValue;
	}

	inline IVectorView_1_t2282165232* get_____ivectorView_1_t2282165232()
	{
		IVectorView_1_t2282165232* returnValue = ____ivectorView_1_t2282165232;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVectorView_1_t2282165232>((&____ivectorView_1_t2282165232), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivectorView_1_t2282165232;
			}
		}
		return returnValue;
	}

	inline IIterable_1_t564697430* get_____iiterable_1_t564697430()
	{
		IIterable_1_t564697430* returnValue = ____iiterable_1_t564697430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IIterable_1_t564697430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IIterable_1_t564697430>((&____iiterable_1_t564697430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iiterable_1_t564697430;
			}
		}
		return returnValue;
	}
};

struct WwwFormUrlDecoder_t4136411681_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
	IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.WwwFormUrlDecoder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* get_____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388()
	{
		IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClassFactory_t1825479388>((&____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORMURLDECODER_T4136411681_H
#ifndef SOFTWAREBITMAP_T3382934781_H
#define SOFTWAREBITMAP_T3382934781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Graphics.Imaging.SoftwareBitmap
struct  SoftwareBitmap_t3382934781  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Graphics.Imaging.ISoftwareBitmap
	ISoftwareBitmap_t1295572089* ____isoftwareBitmap_t1295572089;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISoftwareBitmap_t1295572089* get_____isoftwareBitmap_t1295572089()
	{
		ISoftwareBitmap_t1295572089* returnValue = ____isoftwareBitmap_t1295572089;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISoftwareBitmap_t1295572089::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISoftwareBitmap_t1295572089>((&____isoftwareBitmap_t1295572089), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isoftwareBitmap_t1295572089;
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

struct SoftwareBitmap_t3382934781_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Imaging.ISoftwareBitmapFactory
	ISoftwareBitmapFactory_t3130980581* ____isoftwareBitmapFactory_t3130980581;
	// Cached pointer to Windows.Graphics.Imaging.ISoftwareBitmapStatics
	ISoftwareBitmapStatics_t460328870* ____isoftwareBitmapStatics_t460328870;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Imaging.SoftwareBitmap"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISoftwareBitmapFactory_t3130980581* get_____isoftwareBitmapFactory_t3130980581()
	{
		ISoftwareBitmapFactory_t3130980581* returnValue = ____isoftwareBitmapFactory_t3130980581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISoftwareBitmapFactory_t3130980581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISoftwareBitmapFactory_t3130980581>((&____isoftwareBitmapFactory_t3130980581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isoftwareBitmapFactory_t3130980581;
			}
		}
		return returnValue;
	}

	inline ISoftwareBitmapStatics_t460328870* get_____isoftwareBitmapStatics_t460328870()
	{
		ISoftwareBitmapStatics_t460328870* returnValue = ____isoftwareBitmapStatics_t460328870;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISoftwareBitmapStatics_t460328870::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISoftwareBitmapStatics_t460328870>((&____isoftwareBitmapStatics_t460328870), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isoftwareBitmapStatics_t460328870;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOFTWAREBITMAP_T3382934781_H
#ifndef MEDIAFRAMEREADER_T4108620472_H
#define MEDIAFRAMEREADER_T4108620472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameReader
struct  MediaFrameReader_t4108620472  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameReader
	IMediaFrameReader_t1732169958* ____imediaFrameReader_t1732169958;
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameReader2
	IMediaFrameReader2_t2728388032* ____imediaFrameReader2_t2728388032;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IMediaFrameReader_t1732169958* get_____imediaFrameReader_t1732169958()
	{
		IMediaFrameReader_t1732169958* returnValue = ____imediaFrameReader_t1732169958;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameReader_t1732169958::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameReader_t1732169958>((&____imediaFrameReader_t1732169958), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameReader_t1732169958;
			}
		}
		return returnValue;
	}

	inline IMediaFrameReader2_t2728388032* get_____imediaFrameReader2_t2728388032()
	{
		IMediaFrameReader2_t2728388032* returnValue = ____imediaFrameReader2_t2728388032;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameReader2_t2728388032::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameReader2_t2728388032>((&____imediaFrameReader2_t2728388032), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameReader2_t2728388032;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMEREADER_T4108620472_H
#ifndef MEDIAFRAMEREFERENCE_T3358375962_H
#define MEDIAFRAMEREFERENCE_T3358375962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameReference
struct  MediaFrameReference_t3358375962  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameReference
	IMediaFrameReference_t4101965212* ____imediaFrameReference_t4101965212;
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameReference2
	IMediaFrameReference2_t4104979868* ____imediaFrameReference2_t4104979868;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IMediaFrameReference_t4101965212* get_____imediaFrameReference_t4101965212()
	{
		IMediaFrameReference_t4101965212* returnValue = ____imediaFrameReference_t4101965212;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameReference_t4101965212::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameReference_t4101965212>((&____imediaFrameReference_t4101965212), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameReference_t4101965212;
			}
		}
		return returnValue;
	}

	inline IMediaFrameReference2_t4104979868* get_____imediaFrameReference2_t4104979868()
	{
		IMediaFrameReference2_t4104979868* returnValue = ____imediaFrameReference2_t4104979868;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameReference2_t4104979868::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameReference2_t4104979868>((&____imediaFrameReference2_t4104979868), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameReference2_t4104979868;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMEREFERENCE_T3358375962_H
#ifndef MEDIAFRAMESOURCE_T3997536003_H
#define MEDIAFRAMESOURCE_T3997536003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameSource
struct  MediaFrameSource_t3997536003  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameSource
	IMediaFrameSource_t948197825* ____imediaFrameSource_t948197825;

public:
	inline IMediaFrameSource_t948197825* get_____imediaFrameSource_t948197825()
	{
		IMediaFrameSource_t948197825* returnValue = ____imediaFrameSource_t948197825;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameSource_t948197825::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameSource_t948197825>((&____imediaFrameSource_t948197825), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSource_t948197825;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMESOURCE_T3997536003_H
#ifndef MEDIAFRAMESOURCEGROUP_T1801238682_H
#define MEDIAFRAMESOURCEGROUP_T1801238682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameSourceGroup
struct  MediaFrameSourceGroup_t1801238682  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameSourceGroup
	IMediaFrameSourceGroup_t3837759288* ____imediaFrameSourceGroup_t3837759288;

public:
	inline IMediaFrameSourceGroup_t3837759288* get_____imediaFrameSourceGroup_t3837759288()
	{
		IMediaFrameSourceGroup_t3837759288* returnValue = ____imediaFrameSourceGroup_t3837759288;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameSourceGroup_t3837759288::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameSourceGroup_t3837759288>((&____imediaFrameSourceGroup_t3837759288), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSourceGroup_t3837759288;
			}
		}
		return returnValue;
	}
};

struct MediaFrameSourceGroup_t1801238682_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics
	IMediaFrameSourceGroupStatics_t1400189432* ____imediaFrameSourceGroupStatics_t1400189432;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.Frames.MediaFrameSourceGroup"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IMediaFrameSourceGroupStatics_t1400189432* get_____imediaFrameSourceGroupStatics_t1400189432()
	{
		IMediaFrameSourceGroupStatics_t1400189432* returnValue = ____imediaFrameSourceGroupStatics_t1400189432;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaFrameSourceGroupStatics_t1400189432::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameSourceGroupStatics_t1400189432>((&____imediaFrameSourceGroupStatics_t1400189432), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSourceGroupStatics_t1400189432;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMESOURCEGROUP_T1801238682_H
#ifndef VIDEOMEDIAFRAME_T3292226982_H
#define VIDEOMEDIAFRAME_T3292226982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.VideoMediaFrame
struct  VideoMediaFrame_t3292226982  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.Frames.IVideoMediaFrame
	IVideoMediaFrame_t3548715290* ____ivideoMediaFrame_t3548715290;

public:
	inline IVideoMediaFrame_t3548715290* get_____ivideoMediaFrame_t3548715290()
	{
		IVideoMediaFrame_t3548715290* returnValue = ____ivideoMediaFrame_t3548715290;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVideoMediaFrame_t3548715290::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVideoMediaFrame_t3548715290>((&____ivideoMediaFrame_t3548715290), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivideoMediaFrame_t3548715290;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMEDIAFRAME_T3292226982_H
#ifndef MEDIACAPTURE_T1516581975_H
#define MEDIACAPTURE_T1516581975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCapture
struct  MediaCapture_t1516581975  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.IMediaCapture
	IMediaCapture_t2687710539* ____imediaCapture_t2687710539;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureVideoPreview
	IMediaCaptureVideoPreview_t535963051* ____imediaCaptureVideoPreview_t535963051;
	// Cached pointer to Windows.Media.Capture.IMediaCapture2
	IMediaCapture2_t2891527499* ____imediaCapture2_t2891527499;
	// Cached pointer to Windows.Media.Capture.IMediaCapture3
	IMediaCapture3_t552875339* ____imediaCapture3_t552875339;
	// Cached pointer to Windows.Media.Capture.IMediaCapture4
	IMediaCapture4_t2509190475* ____imediaCapture4_t2509190475;
	// Cached pointer to Windows.Media.Capture.IMediaCapture5
	IMediaCapture5_t170538315* ____imediaCapture5_t170538315;
	// Cached pointer to Windows.Media.Capture.IMediaCapture6
	IMediaCapture6_t2126853451* ____imediaCapture6_t2126853451;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IMediaCapture_t2687710539* get_____imediaCapture_t2687710539()
	{
		IMediaCapture_t2687710539* returnValue = ____imediaCapture_t2687710539;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture_t2687710539::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture_t2687710539>((&____imediaCapture_t2687710539), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture_t2687710539;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureVideoPreview_t535963051* get_____imediaCaptureVideoPreview_t535963051()
	{
		IMediaCaptureVideoPreview_t535963051* returnValue = ____imediaCaptureVideoPreview_t535963051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureVideoPreview_t535963051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureVideoPreview_t535963051>((&____imediaCaptureVideoPreview_t535963051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureVideoPreview_t535963051;
			}
		}
		return returnValue;
	}

	inline IMediaCapture2_t2891527499* get_____imediaCapture2_t2891527499()
	{
		IMediaCapture2_t2891527499* returnValue = ____imediaCapture2_t2891527499;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture2_t2891527499::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture2_t2891527499>((&____imediaCapture2_t2891527499), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture2_t2891527499;
			}
		}
		return returnValue;
	}

	inline IMediaCapture3_t552875339* get_____imediaCapture3_t552875339()
	{
		IMediaCapture3_t552875339* returnValue = ____imediaCapture3_t552875339;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture3_t552875339::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture3_t552875339>((&____imediaCapture3_t552875339), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture3_t552875339;
			}
		}
		return returnValue;
	}

	inline IMediaCapture4_t2509190475* get_____imediaCapture4_t2509190475()
	{
		IMediaCapture4_t2509190475* returnValue = ____imediaCapture4_t2509190475;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture4_t2509190475::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture4_t2509190475>((&____imediaCapture4_t2509190475), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture4_t2509190475;
			}
		}
		return returnValue;
	}

	inline IMediaCapture5_t170538315* get_____imediaCapture5_t170538315()
	{
		IMediaCapture5_t170538315* returnValue = ____imediaCapture5_t170538315;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture5_t170538315::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture5_t170538315>((&____imediaCapture5_t170538315), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture5_t170538315;
			}
		}
		return returnValue;
	}

	inline IMediaCapture6_t2126853451* get_____imediaCapture6_t2126853451()
	{
		IMediaCapture6_t2126853451* returnValue = ____imediaCapture6_t2126853451;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture6_t2126853451::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture6_t2126853451>((&____imediaCapture6_t2126853451), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture6_t2126853451;
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

struct MediaCapture_t1516581975_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureStatics
	IMediaCaptureStatics_t830978977* ____imediaCaptureStatics_t830978977;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureStatics_t830978977* get_____imediaCaptureStatics_t830978977()
	{
		IMediaCaptureStatics_t830978977* returnValue = ____imediaCaptureStatics_t830978977;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaCaptureStatics_t830978977::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureStatics_t830978977>((&____imediaCaptureStatics_t830978977), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureStatics_t830978977;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTURE_T1516581975_H
#ifndef AUDIODEVICECONTROLLER_T936102736_H
#define AUDIODEVICECONTROLLER_T936102736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Devices.AudioDeviceController
struct  AudioDeviceController_t936102736  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Devices.IAudioDeviceController
	IAudioDeviceController_t3742505345* ____iaudioDeviceController_t3742505345;
	// Cached pointer to Windows.Media.Devices.IMediaDeviceController
	IMediaDeviceController_t1179508027* ____imediaDeviceController_t1179508027;

public:
	inline IAudioDeviceController_t3742505345* get_____iaudioDeviceController_t3742505345()
	{
		IAudioDeviceController_t3742505345* returnValue = ____iaudioDeviceController_t3742505345;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAudioDeviceController_t3742505345::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAudioDeviceController_t3742505345>((&____iaudioDeviceController_t3742505345), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iaudioDeviceController_t3742505345;
			}
		}
		return returnValue;
	}

	inline IMediaDeviceController_t1179508027* get_____imediaDeviceController_t1179508027()
	{
		IMediaDeviceController_t1179508027* returnValue = ____imediaDeviceController_t1179508027;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaDeviceController_t1179508027::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaDeviceController_t1179508027>((&____imediaDeviceController_t1179508027), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaDeviceController_t1179508027;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIODEVICECONTROLLER_T936102736_H
#ifndef MEDIADEVICECONTROL_T2492362702_H
#define MEDIADEVICECONTROL_T2492362702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Devices.MediaDeviceControl
struct  MediaDeviceControl_t2492362702  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Devices.IMediaDeviceControl
	IMediaDeviceControl_t2302692936* ____imediaDeviceControl_t2302692936;

public:
	inline IMediaDeviceControl_t2302692936* get_____imediaDeviceControl_t2302692936()
	{
		IMediaDeviceControl_t2302692936* returnValue = ____imediaDeviceControl_t2302692936;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaDeviceControl_t2302692936::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaDeviceControl_t2302692936>((&____imediaDeviceControl_t2302692936), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaDeviceControl_t2302692936;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIADEVICECONTROL_T2492362702_H
#ifndef VIDEODEVICECONTROLLER_T1589494611_H
#define VIDEODEVICECONTROLLER_T1589494611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Devices.VideoDeviceController
struct  VideoDeviceController_t1589494611  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Devices.IVideoDeviceController
	IVideoDeviceController_t134502423* ____ivideoDeviceController_t134502423;
	// Cached pointer to Windows.Media.Devices.IMediaDeviceController
	IMediaDeviceController_t1179508027* ____imediaDeviceController_t1179508027;
	// Cached pointer to Windows.Media.Devices.IAdvancedVideoCaptureDeviceController
	IAdvancedVideoCaptureDeviceController_t1125634735* ____iadvancedVideoCaptureDeviceController_t1125634735;
	// Cached pointer to Windows.Media.Devices.IAdvancedVideoCaptureDeviceController2
	IAdvancedVideoCaptureDeviceController2_t157143727* ____iadvancedVideoCaptureDeviceController2_t157143727;
	// Cached pointer to Windows.Media.Devices.IAdvancedVideoCaptureDeviceController3
	IAdvancedVideoCaptureDeviceController3_t2113458863* ____iadvancedVideoCaptureDeviceController3_t2113458863;
	// Cached pointer to Windows.Media.Devices.IAdvancedVideoCaptureDeviceController4
	IAdvancedVideoCaptureDeviceController4_t4069773999* ____iadvancedVideoCaptureDeviceController4_t4069773999;
	// Cached pointer to Windows.Media.Devices.IAdvancedVideoCaptureDeviceController5
	IAdvancedVideoCaptureDeviceController5_t1731121839* ____iadvancedVideoCaptureDeviceController5_t1731121839;
	// Cached pointer to Windows.Media.Devices.IAdvancedVideoCaptureDeviceController6
	IAdvancedVideoCaptureDeviceController6_t3687436975* ____iadvancedVideoCaptureDeviceController6_t3687436975;

public:
	inline IVideoDeviceController_t134502423* get_____ivideoDeviceController_t134502423()
	{
		IVideoDeviceController_t134502423* returnValue = ____ivideoDeviceController_t134502423;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVideoDeviceController_t134502423::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVideoDeviceController_t134502423>((&____ivideoDeviceController_t134502423), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivideoDeviceController_t134502423;
			}
		}
		return returnValue;
	}

	inline IMediaDeviceController_t1179508027* get_____imediaDeviceController_t1179508027()
	{
		IMediaDeviceController_t1179508027* returnValue = ____imediaDeviceController_t1179508027;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaDeviceController_t1179508027::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaDeviceController_t1179508027>((&____imediaDeviceController_t1179508027), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaDeviceController_t1179508027;
			}
		}
		return returnValue;
	}

	inline IAdvancedVideoCaptureDeviceController_t1125634735* get_____iadvancedVideoCaptureDeviceController_t1125634735()
	{
		IAdvancedVideoCaptureDeviceController_t1125634735* returnValue = ____iadvancedVideoCaptureDeviceController_t1125634735;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAdvancedVideoCaptureDeviceController_t1125634735::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAdvancedVideoCaptureDeviceController_t1125634735>((&____iadvancedVideoCaptureDeviceController_t1125634735), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iadvancedVideoCaptureDeviceController_t1125634735;
			}
		}
		return returnValue;
	}

	inline IAdvancedVideoCaptureDeviceController2_t157143727* get_____iadvancedVideoCaptureDeviceController2_t157143727()
	{
		IAdvancedVideoCaptureDeviceController2_t157143727* returnValue = ____iadvancedVideoCaptureDeviceController2_t157143727;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAdvancedVideoCaptureDeviceController2_t157143727::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAdvancedVideoCaptureDeviceController2_t157143727>((&____iadvancedVideoCaptureDeviceController2_t157143727), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iadvancedVideoCaptureDeviceController2_t157143727;
			}
		}
		return returnValue;
	}

	inline IAdvancedVideoCaptureDeviceController3_t2113458863* get_____iadvancedVideoCaptureDeviceController3_t2113458863()
	{
		IAdvancedVideoCaptureDeviceController3_t2113458863* returnValue = ____iadvancedVideoCaptureDeviceController3_t2113458863;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAdvancedVideoCaptureDeviceController3_t2113458863::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAdvancedVideoCaptureDeviceController3_t2113458863>((&____iadvancedVideoCaptureDeviceController3_t2113458863), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iadvancedVideoCaptureDeviceController3_t2113458863;
			}
		}
		return returnValue;
	}

	inline IAdvancedVideoCaptureDeviceController4_t4069773999* get_____iadvancedVideoCaptureDeviceController4_t4069773999()
	{
		IAdvancedVideoCaptureDeviceController4_t4069773999* returnValue = ____iadvancedVideoCaptureDeviceController4_t4069773999;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAdvancedVideoCaptureDeviceController4_t4069773999::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAdvancedVideoCaptureDeviceController4_t4069773999>((&____iadvancedVideoCaptureDeviceController4_t4069773999), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iadvancedVideoCaptureDeviceController4_t4069773999;
			}
		}
		return returnValue;
	}

	inline IAdvancedVideoCaptureDeviceController5_t1731121839* get_____iadvancedVideoCaptureDeviceController5_t1731121839()
	{
		IAdvancedVideoCaptureDeviceController5_t1731121839* returnValue = ____iadvancedVideoCaptureDeviceController5_t1731121839;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAdvancedVideoCaptureDeviceController5_t1731121839::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAdvancedVideoCaptureDeviceController5_t1731121839>((&____iadvancedVideoCaptureDeviceController5_t1731121839), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iadvancedVideoCaptureDeviceController5_t1731121839;
			}
		}
		return returnValue;
	}

	inline IAdvancedVideoCaptureDeviceController6_t3687436975* get_____iadvancedVideoCaptureDeviceController6_t3687436975()
	{
		IAdvancedVideoCaptureDeviceController6_t3687436975* returnValue = ____iadvancedVideoCaptureDeviceController6_t3687436975;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAdvancedVideoCaptureDeviceController6_t3687436975::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAdvancedVideoCaptureDeviceController6_t3687436975>((&____iadvancedVideoCaptureDeviceController6_t3687436975), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iadvancedVideoCaptureDeviceController6_t3687436975;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEODEVICECONTROLLER_T1589494611_H
#ifndef MEDIAENCODINGSUBTYPES_T4010123208_H
#define MEDIAENCODINGSUBTYPES_T4010123208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.MediaProperties.MediaEncodingSubtypes
struct  MediaEncodingSubtypes_t4010123208  : public Il2CppComObject
{
public:

public:
};

struct MediaEncodingSubtypes_t4010123208_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3
	IMediaEncodingSubtypesStatics3_t276286319* ____imediaEncodingSubtypesStatics3_t276286319;
	// Cached pointer to Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics4
	IMediaEncodingSubtypesStatics4_t3379612527* ____imediaEncodingSubtypesStatics4_t3379612527;
	// Cached pointer to Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2
	IMediaEncodingSubtypesStatics2_t2232601455* ____imediaEncodingSubtypesStatics2_t2232601455;
	// Cached pointer to Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics
	IMediaEncodingSubtypesStatics_t3201092463* ____imediaEncodingSubtypesStatics_t3201092463;
	// Cached pointer to Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics5
	IMediaEncodingSubtypesStatics5_t1423297391* ____imediaEncodingSubtypesStatics5_t1423297391;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.MediaProperties.MediaEncodingSubtypes"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IMediaEncodingSubtypesStatics3_t276286319* get_____imediaEncodingSubtypesStatics3_t276286319()
	{
		IMediaEncodingSubtypesStatics3_t276286319* returnValue = ____imediaEncodingSubtypesStatics3_t276286319;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaEncodingSubtypesStatics3_t276286319::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaEncodingSubtypesStatics3_t276286319>((&____imediaEncodingSubtypesStatics3_t276286319), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaEncodingSubtypesStatics3_t276286319;
			}
		}
		return returnValue;
	}

	inline IMediaEncodingSubtypesStatics4_t3379612527* get_____imediaEncodingSubtypesStatics4_t3379612527()
	{
		IMediaEncodingSubtypesStatics4_t3379612527* returnValue = ____imediaEncodingSubtypesStatics4_t3379612527;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaEncodingSubtypesStatics4_t3379612527::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaEncodingSubtypesStatics4_t3379612527>((&____imediaEncodingSubtypesStatics4_t3379612527), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaEncodingSubtypesStatics4_t3379612527;
			}
		}
		return returnValue;
	}

	inline IMediaEncodingSubtypesStatics2_t2232601455* get_____imediaEncodingSubtypesStatics2_t2232601455()
	{
		IMediaEncodingSubtypesStatics2_t2232601455* returnValue = ____imediaEncodingSubtypesStatics2_t2232601455;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaEncodingSubtypesStatics2_t2232601455::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaEncodingSubtypesStatics2_t2232601455>((&____imediaEncodingSubtypesStatics2_t2232601455), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaEncodingSubtypesStatics2_t2232601455;
			}
		}
		return returnValue;
	}

	inline IMediaEncodingSubtypesStatics_t3201092463* get_____imediaEncodingSubtypesStatics_t3201092463()
	{
		IMediaEncodingSubtypesStatics_t3201092463* returnValue = ____imediaEncodingSubtypesStatics_t3201092463;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaEncodingSubtypesStatics_t3201092463::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaEncodingSubtypesStatics_t3201092463>((&____imediaEncodingSubtypesStatics_t3201092463), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaEncodingSubtypesStatics_t3201092463;
			}
		}
		return returnValue;
	}

	inline IMediaEncodingSubtypesStatics5_t1423297391* get_____imediaEncodingSubtypesStatics5_t1423297391()
	{
		IMediaEncodingSubtypesStatics5_t1423297391* returnValue = ____imediaEncodingSubtypesStatics5_t1423297391;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaEncodingSubtypesStatics5_t1423297391::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaEncodingSubtypesStatics5_t1423297391>((&____imediaEncodingSubtypesStatics5_t1423297391), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaEncodingSubtypesStatics5_t1423297391;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAENCODINGSUBTYPES_T4010123208_H
#ifndef SPEECHSYNTHESIZER_T2130945875_H
#define SPEECHSYNTHESIZER_T2130945875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct  SpeechSynthesizer_t2130945875  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870;
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
	ISpeechSynthesizer2_t1865799545* ____ispeechSynthesizer2_t1865799545;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesizer_t2734223870* get_____ispeechSynthesizer_t2734223870()
	{
		ISpeechSynthesizer_t2734223870* returnValue = ____ispeechSynthesizer_t2734223870;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer_t2734223870::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer_t2734223870>((&____ispeechSynthesizer_t2734223870), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer_t2734223870;
			}
		}
		return returnValue;
	}

	inline ISpeechSynthesizer2_t1865799545* get_____ispeechSynthesizer2_t1865799545()
	{
		ISpeechSynthesizer2_t1865799545* returnValue = ____ispeechSynthesizer2_t1865799545;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer2_t1865799545::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer2_t1865799545>((&____ispeechSynthesizer2_t1865799545), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer2_t1865799545;
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

struct SpeechSynthesizer_t2130945875_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_t870565809* ____iinstalledVoicesStatic_t870565809;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t946760305* ____iinstalledVoicesStatic2_t946760305;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.SpeechSynthesis.SpeechSynthesizer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic_t870565809* get_____iinstalledVoicesStatic_t870565809()
	{
		IInstalledVoicesStatic_t870565809* returnValue = ____iinstalledVoicesStatic_t870565809;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic_t870565809::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic_t870565809>((&____iinstalledVoicesStatic_t870565809), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic_t870565809;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic2_t946760305* get_____iinstalledVoicesStatic2_t946760305()
	{
		IInstalledVoicesStatic2_t946760305* returnValue = ____iinstalledVoicesStatic2_t946760305;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic2_t946760305::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic2_t946760305>((&____iinstalledVoicesStatic2_t946760305), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic2_t946760305;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESIZER_T2130945875_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef DEVICECLASS_T4276989519_H
#define DEVICECLASS_T4276989519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Enumeration.DeviceClass
struct  DeviceClass_t4276989519 
{
public:
	// System.Int32 Windows.Devices.Enumeration.DeviceClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceClass_t4276989519, ___value___2)); }
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
#endif // DEVICECLASS_T4276989519_H
#ifndef MEDIAFRAMEREADERSTARTSTATUS_T643594557_H
#define MEDIAFRAMEREADERSTARTSTATUS_T643594557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameReaderStartStatus
struct  MediaFrameReaderStartStatus_t643594557 
{
public:
	// System.Int32 Windows.Media.Capture.Frames.MediaFrameReaderStartStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaFrameReaderStartStatus_t643594557, ___value___2)); }
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
#endif // MEDIAFRAMEREADERSTARTSTATUS_T643594557_H
#ifndef MEDIAFRAMESOURCEKIND_T575340432_H
#define MEDIAFRAMESOURCEKIND_T575340432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameSourceKind
struct  MediaFrameSourceKind_t575340432 
{
public:
	// System.Int32 Windows.Media.Capture.Frames.MediaFrameSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaFrameSourceKind_t575340432, ___value___2)); }
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
#endif // MEDIAFRAMESOURCEKIND_T575340432_H
#ifndef MEDIACAPTUREMEMORYPREFERENCE_T3098981657_H
#define MEDIACAPTUREMEMORYPREFERENCE_T3098981657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCaptureMemoryPreference
struct  MediaCaptureMemoryPreference_t3098981657 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCaptureMemoryPreference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCaptureMemoryPreference_t3098981657, ___value___2)); }
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
#endif // MEDIACAPTUREMEMORYPREFERENCE_T3098981657_H
#ifndef MEDIACATEGORY_T3177896276_H
#define MEDIACATEGORY_T3177896276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCategory
struct  MediaCategory_t3177896276 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCategory_t3177896276, ___value___2)); }
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
#endif // MEDIACATEGORY_T3177896276_H
#ifndef MEDIASTREAMTYPE_T1637181335_H
#define MEDIASTREAMTYPE_T1637181335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaStreamType
struct  MediaStreamType_t1637181335 
{
public:
	// System.Int32 Windows.Media.Capture.MediaStreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaStreamType_t1637181335, ___value___2)); }
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
#endif // MEDIASTREAMTYPE_T1637181335_H
#ifndef STREAMINGCAPTUREMODE_T3911325220_H
#define STREAMINGCAPTUREMODE_T3911325220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.StreamingCaptureMode
struct  StreamingCaptureMode_t3911325220 
{
public:
	// System.Int32 Windows.Media.Capture.StreamingCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingCaptureMode_t3911325220, ___value___2)); }
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
#endif // STREAMINGCAPTUREMODE_T3911325220_H
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
// Windows.Devices.Enumeration.IDeviceInformationStatics
struct NOVTABLE IDeviceInformationStatics_t1405059880 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped0_CreateFromIdAsync_m1423870259() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped1_CreateFromIdAsync_m884965993() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped2_FindAllAsync_m2900628677() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_FindAllAsync_m3003575294(int32_t ___deviceClass0, IAsyncOperation_1_t1203143875** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped3_FindAllAsync_m1960645420() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped4_FindAllAsync_m3437368056() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped5_CreateWatcher_m3128862895() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped6_CreateWatcher_m1347004603() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped7_CreateWatcher_m3128992103() = 0;
	virtual il2cpp_hresult_t STDCALL IDeviceInformationStatics_U24__Stripped8_CreateWatcher_m1899734493() = 0;
};
// Windows.Devices.Haptics.ISimpleHapticsController
struct NOVTABLE ISimpleHapticsController_t3936202477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped0_get_Id_m3300049499() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_get_SupportedFeedback_m2326199324(IVectorView_1_t252326345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped1_get_IsIntensitySupported_m991599193() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped2_get_IsPlayCountSupported_m3867764282() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped3_get_IsPlayDurationSupported_m3960541395() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped4_get_IsReplayPauseIntervalSupported_m1218069110() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_StopFeedback_m4220404142() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped5_SendHapticFeedback_m795740151() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedback_m2591754103(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedbackForDuration_m1489257265(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1, TimeSpan_t881159249  ___playDuration2) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped6_SendHapticFeedbackForPlayCount_m3357521888() = 0;
};
// Windows.Media.Capture.Frames.IMediaFrameSourceInfo
struct NOVTABLE IMediaFrameSourceInfo_t3336133413 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_get_Id_m2289192004(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_get_MediaStreamType_m1252693290(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_get_SourceKind_m1716706776(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_U24__Stripped0_get_SourceGroup_m4128200387() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_U24__Stripped1_get_DeviceInformation_m746803582() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_U24__Stripped2_get_Properties_m1522052861() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaFrameSourceInfo_U24__Stripped3_get_CoordinateSystem_m1336741337() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings
struct NOVTABLE IMediaCaptureInitializationSettings_t2768046102 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped0_put_AudioDeviceId_m1633472098() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped1_get_AudioDeviceId_m2392299102() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_put_VideoDeviceId_m2824052457(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped2_get_VideoDeviceId_m1979633966() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_put_StreamingCaptureMode_m2829014800(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped3_get_StreamingCaptureMode_m436280199() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped4_put_PhotoCaptureSource_m3972554925() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped5_get_PhotoCaptureSource_m2236775749() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings2
struct NOVTABLE IMediaCaptureInitializationSettings2_t2764769302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_put_MediaCategory_m817377790(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped0_get_MediaCategory_m65547614() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped1_put_AudioProcessing_m1983699196() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped2_get_AudioProcessing_m2747368394() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings5
struct NOVTABLE IMediaCaptureInitializationSettings5_t2764703766 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped0_get_SourceGroup_m4281738438() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_put_SourceGroup_m1407141064(IMediaFrameSourceGroup_t3837759288* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped1_get_SharingMode_m1302584802() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped2_put_SharingMode_m3593080794() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped3_get_MemoryPreference_m4150781740() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_put_MemoryPreference_m2193556780(int32_t ___value0) = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef DEVICEINFORMATION_T3632073116_H
#define DEVICEINFORMATION_T3632073116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Enumeration.DeviceInformation
struct  DeviceInformation_t3632073116  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformation
	IDeviceInformation_t805337969* ____ideviceInformation_t805337969;
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformation2
	IDeviceInformation2_t3800902056* ____ideviceInformation2_t3800902056;

public:
	inline IDeviceInformation_t805337969* get_____ideviceInformation_t805337969()
	{
		IDeviceInformation_t805337969* returnValue = ____ideviceInformation_t805337969;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDeviceInformation_t805337969::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformation_t805337969>((&____ideviceInformation_t805337969), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformation_t805337969;
			}
		}
		return returnValue;
	}

	inline IDeviceInformation2_t3800902056* get_____ideviceInformation2_t3800902056()
	{
		IDeviceInformation2_t3800902056* returnValue = ____ideviceInformation2_t3800902056;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDeviceInformation2_t3800902056::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformation2_t3800902056>((&____ideviceInformation2_t3800902056), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformation2_t3800902056;
			}
		}
		return returnValue;
	}
};

struct DeviceInformation_t3632073116_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformationStatics2
	IDeviceInformationStatics2_t1405977384* ____ideviceInformationStatics2_t1405977384;
	// Cached pointer to Windows.Devices.Enumeration.IDeviceInformationStatics
	IDeviceInformationStatics_t1405059880* ____ideviceInformationStatics_t1405059880;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Devices.Enumeration.DeviceInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDeviceInformationStatics2_t1405977384* get_____ideviceInformationStatics2_t1405977384()
	{
		IDeviceInformationStatics2_t1405977384* returnValue = ____ideviceInformationStatics2_t1405977384;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDeviceInformationStatics2_t1405977384::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformationStatics2_t1405977384>((&____ideviceInformationStatics2_t1405977384), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformationStatics2_t1405977384;
			}
		}
		return returnValue;
	}

	inline IDeviceInformationStatics_t1405059880* get_____ideviceInformationStatics_t1405059880()
	{
		IDeviceInformationStatics_t1405059880* returnValue = ____ideviceInformationStatics_t1405059880;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDeviceInformationStatics_t1405059880::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDeviceInformationStatics_t1405059880>((&____ideviceInformationStatics_t1405059880), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ideviceInformationStatics_t1405059880;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINFORMATION_T3632073116_H
#ifndef SIMPLEHAPTICSCONTROLLER_T4220085256_H
#define SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsController
struct  SimpleHapticsController_t4220085256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsController
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477;

public:
	inline ISimpleHapticsController_t3936202477* get_____isimpleHapticsController_t3936202477()
	{
		ISimpleHapticsController_t3936202477* returnValue = ____isimpleHapticsController_t3936202477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsController_t3936202477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsController_t3936202477>((&____isimpleHapticsController_t3936202477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsController_t3936202477;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifndef MEDIAFRAMESOURCEINFO_T4031328216_H
#define MEDIAFRAMESOURCEINFO_T4031328216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.Frames.MediaFrameSourceInfo
struct  MediaFrameSourceInfo_t4031328216  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameSourceInfo
	IMediaFrameSourceInfo_t3336133413* ____imediaFrameSourceInfo_t3336133413;
	// Cached pointer to Windows.Media.Capture.Frames.IMediaFrameSourceInfo2
	IMediaFrameSourceInfo2_t965721299* ____imediaFrameSourceInfo2_t965721299;

public:
	inline IMediaFrameSourceInfo_t3336133413* get_____imediaFrameSourceInfo_t3336133413()
	{
		IMediaFrameSourceInfo_t3336133413* returnValue = ____imediaFrameSourceInfo_t3336133413;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameSourceInfo_t3336133413::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameSourceInfo_t3336133413>((&____imediaFrameSourceInfo_t3336133413), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSourceInfo_t3336133413;
			}
		}
		return returnValue;
	}

	inline IMediaFrameSourceInfo2_t965721299* get_____imediaFrameSourceInfo2_t965721299()
	{
		IMediaFrameSourceInfo2_t965721299* returnValue = ____imediaFrameSourceInfo2_t965721299;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaFrameSourceInfo2_t965721299::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaFrameSourceInfo2_t965721299>((&____imediaFrameSourceInfo2_t965721299), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSourceInfo2_t965721299;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAFRAMESOURCEINFO_T4031328216_H
#ifndef MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#define MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCaptureInitializationSettings
struct  MediaCaptureInitializationSettings_t546830356  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings
	IMediaCaptureInitializationSettings_t2768046102* ____imediaCaptureInitializationSettings_t2768046102;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings2
	IMediaCaptureInitializationSettings2_t2764769302* ____imediaCaptureInitializationSettings2_t2764769302;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings3
	IMediaCaptureInitializationSettings3_t2764834838* ____imediaCaptureInitializationSettings3_t2764834838;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings4
	IMediaCaptureInitializationSettings4_t2764638230* ____imediaCaptureInitializationSettings4_t2764638230;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings5
	IMediaCaptureInitializationSettings5_t2764703766* ____imediaCaptureInitializationSettings5_t2764703766;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings6
	IMediaCaptureInitializationSettings6_t2764507158* ____imediaCaptureInitializationSettings6_t2764507158;

public:
	inline IMediaCaptureInitializationSettings_t2768046102* get_____imediaCaptureInitializationSettings_t2768046102()
	{
		IMediaCaptureInitializationSettings_t2768046102* returnValue = ____imediaCaptureInitializationSettings_t2768046102;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings_t2768046102::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings_t2768046102>((&____imediaCaptureInitializationSettings_t2768046102), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings_t2768046102;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings2_t2764769302* get_____imediaCaptureInitializationSettings2_t2764769302()
	{
		IMediaCaptureInitializationSettings2_t2764769302* returnValue = ____imediaCaptureInitializationSettings2_t2764769302;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings2_t2764769302::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings2_t2764769302>((&____imediaCaptureInitializationSettings2_t2764769302), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings2_t2764769302;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings3_t2764834838* get_____imediaCaptureInitializationSettings3_t2764834838()
	{
		IMediaCaptureInitializationSettings3_t2764834838* returnValue = ____imediaCaptureInitializationSettings3_t2764834838;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings3_t2764834838::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings3_t2764834838>((&____imediaCaptureInitializationSettings3_t2764834838), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings3_t2764834838;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings4_t2764638230* get_____imediaCaptureInitializationSettings4_t2764638230()
	{
		IMediaCaptureInitializationSettings4_t2764638230* returnValue = ____imediaCaptureInitializationSettings4_t2764638230;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings4_t2764638230::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings4_t2764638230>((&____imediaCaptureInitializationSettings4_t2764638230), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings4_t2764638230;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings5_t2764703766* get_____imediaCaptureInitializationSettings5_t2764703766()
	{
		IMediaCaptureInitializationSettings5_t2764703766* returnValue = ____imediaCaptureInitializationSettings5_t2764703766;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings5_t2764703766::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings5_t2764703766>((&____imediaCaptureInitializationSettings5_t2764703766), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings5_t2764703766;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings6_t2764507158* get_____imediaCaptureInitializationSettings6_t2764507158()
	{
		IMediaCaptureInitializationSettings6_t2764507158* returnValue = ____imediaCaptureInitializationSettings6_t2764507158;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings6_t2764507158::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings6_t2764507158>((&____imediaCaptureInitializationSettings6_t2764507158), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings6_t2764507158;
			}
		}
		return returnValue;
	}
};

struct MediaCaptureInitializationSettings_t546830356_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCaptureInitializationSettings"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#ifndef SPEECHSYNTHESISSTREAM_T2322339758_H
#define SPEECHSYNTHESISSTREAM_T2322339758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct  SpeechSynthesisStream_t2322339758  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
	ISpeechSynthesisStream_t764091608* ____ispeechSynthesisStream_t764091608;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamWithContentType
	IRandomAccessStreamWithContentType_t3296927652* ____irandomAccessStreamWithContentType_t3296927652;
	// Cached pointer to Windows.Storage.Streams.IContentTypeProvider
	IContentTypeProvider_t1806097440* ____icontentTypeProvider_t1806097440;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStream
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051;
	// Cached pointer to Windows.Storage.Streams.IOutputStream
	IOutputStream_t2042351338* ____ioutputStream_t2042351338;
	// Cached pointer to Windows.Storage.Streams.IInputStream
	IInputStream_t2821136229* ____iinputStream_t2821136229;
	// Cached pointer to Windows.Media.Core.ITimedMetadataTrackProvider
	ITimedMetadataTrackProvider_t1703961418* ____itimedMetadataTrackProvider_t1703961418;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesisStream_t764091608* get_____ispeechSynthesisStream_t764091608()
	{
		ISpeechSynthesisStream_t764091608* returnValue = ____ispeechSynthesisStream_t764091608;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesisStream_t764091608::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesisStream_t764091608>((&____ispeechSynthesisStream_t764091608), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesisStream_t764091608;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamWithContentType_t3296927652* get_____irandomAccessStreamWithContentType_t3296927652()
	{
		IRandomAccessStreamWithContentType_t3296927652* returnValue = ____irandomAccessStreamWithContentType_t3296927652;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamWithContentType_t3296927652::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamWithContentType_t3296927652>((&____irandomAccessStreamWithContentType_t3296927652), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamWithContentType_t3296927652;
			}
		}
		return returnValue;
	}

	inline IContentTypeProvider_t1806097440* get_____icontentTypeProvider_t1806097440()
	{
		IContentTypeProvider_t1806097440* returnValue = ____icontentTypeProvider_t1806097440;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IContentTypeProvider_t1806097440::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IContentTypeProvider_t1806097440>((&____icontentTypeProvider_t1806097440), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icontentTypeProvider_t1806097440;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStream_t2099996051* get_____irandomAccessStream_t2099996051()
	{
		IRandomAccessStream_t2099996051* returnValue = ____irandomAccessStream_t2099996051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStream_t2099996051>((&____irandomAccessStream_t2099996051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStream_t2099996051;
			}
		}
		return returnValue;
	}

	inline IOutputStream_t2042351338* get_____ioutputStream_t2042351338()
	{
		IOutputStream_t2042351338* returnValue = ____ioutputStream_t2042351338;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IOutputStream_t2042351338>((&____ioutputStream_t2042351338), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ioutputStream_t2042351338;
			}
		}
		return returnValue;
	}

	inline IInputStream_t2821136229* get_____iinputStream_t2821136229()
	{
		IInputStream_t2821136229* returnValue = ____iinputStream_t2821136229;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStream_t2821136229>((&____iinputStream_t2821136229), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStream_t2821136229;
			}
		}
		return returnValue;
	}

	inline ITimedMetadataTrackProvider_t1703961418* get_____itimedMetadataTrackProvider_t1703961418()
	{
		ITimedMetadataTrackProvider_t1703961418* returnValue = ____itimedMetadataTrackProvider_t1703961418;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ITimedMetadataTrackProvider_t1703961418::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ITimedMetadataTrackProvider_t1703961418>((&____itimedMetadataTrackProvider_t1703961418), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____itimedMetadataTrackProvider_t1703961418;
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESISSTREAM_T2322339758_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4300 = { 0, sizeof(ICoreApplicationUseCount_t1878483554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4301 = { 0, sizeof(ICoreApplicationView_t3448274634*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4302 = { 0, sizeof(ICoreApplicationView2_t87912591*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4303 = { 0, sizeof(ICoreApplicationView3_t2816795946*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4304 = { 0, sizeof(ICoreApplicationView5_t3623365000*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4305 = { 0, sizeof(ICoreApplicationView6_t2057281059*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4306 = { 0, sizeof(ICoreImmersiveApplication_t3816774728*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4307 = { 0, sizeof(ICoreImmersiveApplication2_t4020591688*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4308 = { 0, sizeof(ICoreImmersiveApplication3_t1681939528*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4309 = { sizeof (DeviceClass_t4276989519)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4309[8] = 
{
	DeviceClass_t4276989519::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4310 = { sizeof (DeviceInformation_t3632073116), -1, sizeof(DeviceInformation_t3632073116_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4311 = { sizeof (DeviceInformationCollection_t2581956155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4312 = { 0, sizeof(IDeviceInformation_t805337969*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4313 = { 0, sizeof(IDeviceInformation2_t3800902056*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4314 = { 0, sizeof(IDeviceInformationStatics_t1405059880*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4315 = { 0, sizeof(IDeviceInformationStatics2_t1405977384*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4316 = { 0, sizeof(ISimpleHapticsController_t3936202477*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4317 = { 0, sizeof(ISimpleHapticsControllerFeedback_t2199416581*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4318 = { sizeof (SimpleHapticsController_t4220085256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4319 = { sizeof (SimpleHapticsControllerFeedback_t913461083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4320 = { 0, sizeof(IUriEscapeStatics_t1418340874*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4321 = { 0, sizeof(IUriRuntimeClass_t921050115*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4322 = { 0, sizeof(IUriRuntimeClassFactory_t1786313621*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4323 = { 0, sizeof(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4324 = { 0, sizeof(IWwwFormUrlDecoderEntry_t2943299970*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4325 = { 0, sizeof(IWwwFormUrlDecoderRuntimeClass_t497020701*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4326 = { 0, sizeof(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4327 = { sizeof (UniversalApiContract_t3367004861)+ sizeof (RuntimeObject), sizeof(UniversalApiContract_t3367004861 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4328 = { sizeof (Uri_t952691556), -1, sizeof(Uri_t952691556_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4329 = { sizeof (WwwFormUrlDecoder_t4136411681), -1, sizeof(WwwFormUrlDecoder_t4136411681_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4330 = { 0, sizeof(ISoftwareBitmap_t1295572089*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4331 = { 0, sizeof(ISoftwareBitmapFactory_t3130980581*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4332 = { 0, sizeof(ISoftwareBitmapStatics_t460328870*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4333 = { sizeof (SoftwareBitmap_t3382934781), -1, sizeof(SoftwareBitmap_t3382934781_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4334 = { 0, sizeof(IMediaFrameReader_t1732169958*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4335 = { 0, sizeof(IMediaFrameReader2_t2728388032*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4336 = { 0, sizeof(IMediaFrameReference_t4101965212*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4337 = { 0, sizeof(IMediaFrameReference2_t4104979868*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4338 = { 0, sizeof(IMediaFrameSource_t948197825*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4339 = { 0, sizeof(IMediaFrameSourceGroup_t3837759288*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4340 = { 0, sizeof(IMediaFrameSourceGroupStatics_t1400189432*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4341 = { 0, sizeof(IMediaFrameSourceInfo_t3336133413*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4342 = { 0, sizeof(IMediaFrameSourceInfo2_t965721299*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4343 = { 0, sizeof(IVideoMediaFrame_t3548715290*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4344 = { sizeof (MediaFrameReader_t4108620472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4345 = { sizeof (MediaFrameReaderStartStatus_t643594557)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4345[6] = 
{
	MediaFrameReaderStartStatus_t643594557::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4346 = { sizeof (MediaFrameReference_t3358375962), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4347 = { sizeof (MediaFrameSource_t3997536003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4348 = { sizeof (MediaFrameSourceGroup_t1801238682), -1, sizeof(MediaFrameSourceGroup_t1801238682_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4349 = { sizeof (MediaFrameSourceInfo_t4031328216), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4350 = { sizeof (MediaFrameSourceKind_t575340432)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4350[7] = 
{
	MediaFrameSourceKind_t575340432::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4351 = { sizeof (VideoMediaFrame_t3292226982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4352 = { 0, sizeof(IMediaCapture_t2687710539*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4353 = { 0, sizeof(IMediaCapture2_t2891527499*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4354 = { 0, sizeof(IMediaCapture3_t552875339*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4355 = { 0, sizeof(IMediaCapture4_t2509190475*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4356 = { 0, sizeof(IMediaCapture5_t170538315*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4357 = { 0, sizeof(IMediaCapture6_t2126853451*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4358 = { 0, sizeof(IMediaCaptureInitializationSettings_t2768046102*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4359 = { 0, sizeof(IMediaCaptureInitializationSettings2_t2764769302*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4360 = { 0, sizeof(IMediaCaptureInitializationSettings3_t2764834838*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4361 = { 0, sizeof(IMediaCaptureInitializationSettings4_t2764638230*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4362 = { 0, sizeof(IMediaCaptureInitializationSettings5_t2764703766*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4363 = { 0, sizeof(IMediaCaptureInitializationSettings6_t2764507158*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4364 = { 0, sizeof(IMediaCaptureStatics_t830978977*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4365 = { 0, sizeof(IMediaCaptureVideoPreview_t535963051*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4366 = { sizeof (MediaCapture_t1516581975), -1, sizeof(MediaCapture_t1516581975_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4367 = { sizeof (MediaCaptureInitializationSettings_t546830356), -1, sizeof(MediaCaptureInitializationSettings_t546830356_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4368 = { sizeof (MediaCaptureMemoryPreference_t3098981657)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4368[3] = 
{
	MediaCaptureMemoryPreference_t3098981657::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4369 = { sizeof (MediaCategory_t3177896276)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4369[6] = 
{
	MediaCategory_t3177896276::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4370 = { sizeof (MediaStreamType_t1637181335)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4370[5] = 
{
	MediaStreamType_t1637181335::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4371 = { sizeof (StreamingCaptureMode_t3911325220)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4371[4] = 
{
	StreamingCaptureMode_t3911325220::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4372 = { 0, sizeof(ITimedMetadataTrackProvider_t1703961418*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4373 = { sizeof (AudioDeviceController_t936102736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4374 = { 0, sizeof(IAdvancedVideoCaptureDeviceController_t1125634735*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4375 = { 0, sizeof(IAdvancedVideoCaptureDeviceController2_t157143727*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4376 = { 0, sizeof(IAdvancedVideoCaptureDeviceController3_t2113458863*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4377 = { 0, sizeof(IAdvancedVideoCaptureDeviceController4_t4069773999*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4378 = { 0, sizeof(IAdvancedVideoCaptureDeviceController5_t1731121839*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4379 = { 0, sizeof(IAdvancedVideoCaptureDeviceController6_t3687436975*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4380 = { 0, sizeof(IAudioDeviceController_t3742505345*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4381 = { 0, sizeof(IMediaDeviceControl_t2302692936*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4382 = { 0, sizeof(IMediaDeviceController_t1179508027*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4383 = { 0, sizeof(IVideoDeviceController_t134502423*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4384 = { sizeof (MediaDeviceControl_t2492362702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4385 = { sizeof (VideoDeviceController_t1589494611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4386 = { 0, sizeof(IMediaEncodingSubtypesStatics_t3201092463*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4387 = { 0, sizeof(IMediaEncodingSubtypesStatics2_t2232601455*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4388 = { 0, sizeof(IMediaEncodingSubtypesStatics3_t276286319*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4389 = { 0, sizeof(IMediaEncodingSubtypesStatics4_t3379612527*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4390 = { 0, sizeof(IMediaEncodingSubtypesStatics5_t1423297391*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4391 = { sizeof (MediaEncodingSubtypes_t4010123208), -1, sizeof(MediaEncodingSubtypes_t4010123208_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4392 = { 0, sizeof(IInstalledVoicesStatic_t870565809*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4393 = { 0, sizeof(IInstalledVoicesStatic2_t946760305*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4394 = { 0, sizeof(ISpeechSynthesisStream_t764091608*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4395 = { 0, sizeof(ISpeechSynthesizer_t2734223870*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4396 = { 0, sizeof(ISpeechSynthesizer2_t1865799545*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4397 = { 0, sizeof(IVoiceInformation_t3111056019*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4398 = { sizeof (SpeechSynthesisStream_t2322339758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4399 = { sizeof (SpeechSynthesizer_t2130945875), -1, sizeof(SpeechSynthesizer_t2130945875_StaticFields), 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
