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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.Attribute
struct Attribute_t861562559;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<ZXing.ResultMetadataType,System.Object>[]
struct EntryU5BU5D_t3987230152;
// System.Collections.Generic.Dictionary`2/KeyCollection<ZXing.ResultMetadataType,System.Object>
struct KeyCollection_t2569801196;
// System.Collections.Generic.Dictionary`2/ValueCollection<ZXing.ResultMetadataType,System.Object>
struct ValueCollection_t4096170043;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct Dictionary_2_t2380125725;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t3788232239;
// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>
struct IDictionary_2_t1434567506;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t843977116;
// System.Collections.Generic.IEqualityComparer`1<ZXing.ResultMetadataType>
struct IEqualityComparer_1_t2328215373;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t1637000144;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Void
struct Void_t1185182177;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t541192229;
// Windows.UI.Xaml.IDependencyObjectFactory
struct IDependencyObjectFactory_t1390337327;
// Windows.UI.Xaml.Media.FontFamily
struct FontFamily_t3809835137;
// Windows.UI.Xaml.Media.IFontFamilyFactory
struct IFontFamilyFactory_t2978174881;
// Windows.UI.Xaml.Media.IFontFamilyStatics2
struct IFontFamilyStatics2_t3436591565;
// Windows.UI.Xaml.Media.IImageSourceFactory
struct IImageSourceFactory_t2872845293;
// Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory
struct IBitmapSourceFactory_t792340512;
// Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics
struct IBitmapSourceStatics_t1674258844;
// Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory
struct IWriteableBitmapFactory_t3636748068;
// Windows.UI.Xaml.Media.Imaging.WriteableBitmap
struct WriteableBitmap_t4235865023;
// ZXing.BaseLuminanceSource
struct BaseLuminanceSource_t3215128144;
// ZXing.Binarizer
struct Binarizer_t2848741980;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3514195023;
// ZXing.Common.BitArray
struct BitArray_t261046764;
// ZXing.Common.BitMatrix
struct BitMatrix_t2873240750;
// ZXing.Common.DecoderResult
struct DecoderResult_t4252639067;
// ZXing.Common.DetectorResult
struct DetectorResult_t2934418424;
// ZXing.Common.EncodingOptions
struct EncodingOptions_t288987117;
// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct ReedSolomonDecoder_t4136138852;
// ZXing.LuminanceSource
struct LuminanceSource_t3713829503;
// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t2868153292;
// ZXing.QrCode.Internal.Decoder
struct Decoder_t1927175606;
// ZXing.QrCode.Internal.Detector
struct Detector_t1946199639;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2910789944;
// ZXing.QrCode.Internal.ErrorCorrectionLevel[]
struct ErrorCorrectionLevelU5BU5D_t1870060265;
// ZXing.QrCode.Internal.Mode
struct Mode_t636918511;
// ZXing.QrCode.Internal.QRCode
struct QRCode_t4150242837;
// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct QRCodeDecoderMetaData_t3242363773;
// ZXing.QrCode.Internal.Version
struct Version_t833662726;
// ZXing.QrCode.Internal.Version/ECB
struct ECB_t144347634;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t719977991;
// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t2689482655;
// ZXing.QrCode.QRCodeReader
struct QRCodeReader_t3363387111;
// ZXing.QrCode.QRCodeWriter
struct QRCodeWriter_t1467281458;
// ZXing.RGBLuminanceSource
struct RGBLuminanceSource_t91581829;
// ZXing.ReaderException
struct ReaderException_t3787909692;
// ZXing.Rendering.PixelData
struct PixelData_t619138477;
// ZXing.Rendering.PixelDataRenderer
struct PixelDataRenderer_t163934832;
// ZXing.Result
struct Result_t940650810;
// ZXing.ResultPoint
struct ResultPoint_t1473505336;
// ZXing.ResultPointCallback
struct ResultPointCallback_t922799438;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t569055209;
// ZXing.SerializableAttribute
struct SerializableAttribute_t2987426206;
// ZXing.WriterException
struct WriterException_t375399354;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* BarcodeFormat_t1017833927_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* BitMatrix_t2873240750_il2cpp_TypeInfo_var;
extern RuntimeClass* BitmapFormat_t1949044204_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Decoder_t1927175606_il2cpp_TypeInfo_var;
extern RuntimeClass* Detector_t1946199639_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2380125725_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoder_t1190713841_il2cpp_TypeInfo_var;
extern RuntimeClass* ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1434567506_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t3788232239_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t843977116_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3757650781_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t915401064_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* PixelDataRenderer_t163934832_il2cpp_TypeInfo_var;
extern RuntimeClass* PixelData_t619138477_il2cpp_TypeInfo_var;
extern RuntimeClass* QRCodeDecoderMetaData_t3242363773_il2cpp_TypeInfo_var;
extern RuntimeClass* QRCodeReader_t3363387111_il2cpp_TypeInfo_var;
extern RuntimeClass* RGBLuminanceSource_t91581829_il2cpp_TypeInfo_var;
extern RuntimeClass* ReaderException_t3787909692_il2cpp_TypeInfo_var;
extern RuntimeClass* ResultPointU5BU5D_t569055209_il2cpp_TypeInfo_var;
extern RuntimeClass* ResultPoint_t1473505336_il2cpp_TypeInfo_var;
extern RuntimeClass* Result_t940650810_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* WriteableBitmap_t4235865023_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1003240159;
extern String_t* _stringLiteral1229876613;
extern String_t* _stringLiteral1669413489;
extern String_t* _stringLiteral210055874;
extern String_t* _stringLiteral2505242827;
extern String_t* _stringLiteral2975982805;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral404267128;
extern String_t* _stringLiteral791040696;
extern const RuntimeMethod* Dictionary_2__ctor_m787323069_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1628704204_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4115895800_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m2962682148_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3898097692_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m4080082266_RuntimeMethod_var;
extern const RuntimeMethod* QRCodeWriter_encode_m293161781_RuntimeMethod_var;
extern const RuntimeMethod* QRCodeWriter_renderResult_m3827833113_RuntimeMethod_var;
extern const RuntimeMethod* RGBLuminanceSource_CalculateLuminance_m2874680238_RuntimeMethod_var;
extern const RuntimeMethod* RGBLuminanceSource_DetermineBitmapFormat_m3960214113_RuntimeMethod_var;
extern const RuntimeMethod* Result__ctor_m2674064399_RuntimeMethod_var;
extern const uint32_t PixelDataRenderer_Render_m791243673_MetadataUsageId;
extern const uint32_t PixelDataRenderer__ctor_m3438459401_MetadataUsageId;
extern const uint32_t PixelData_ToBitmap_m1486987577_MetadataUsageId;
extern const uint32_t QRCodeReader__cctor_m924770295_MetadataUsageId;
extern const uint32_t QRCodeReader__ctor_m378600991_MetadataUsageId;
extern const uint32_t QRCodeReader_decode_m2011586155_MetadataUsageId;
extern const uint32_t QRCodeReader_extractPureBits_m1638805205_MetadataUsageId;
extern const uint32_t QRCodeWriter_encode_m293161781_MetadataUsageId;
extern const uint32_t QRCodeWriter_renderResult_m3827833113_MetadataUsageId;
extern const uint32_t RGBLuminanceSource_CalculateLuminance_m2874680238_MetadataUsageId;
extern const uint32_t RGBLuminanceSource_CreateLuminanceSource_m3516503597_MetadataUsageId;
extern const uint32_t RGBLuminanceSource_DetermineBitmapFormat_m3960214113_MetadataUsageId;
extern const uint32_t ReaderException__cctor_m2852144789_MetadataUsageId;
extern const uint32_t ReaderException__ctor_m3886147231_MetadataUsageId;
extern const uint32_t ResultPoint_Equals_m4105026231_MetadataUsageId;
extern const uint32_t ResultPoint_ToString_m1972261536_MetadataUsageId;
extern const uint32_t ResultPoint__ctor_m850511562_MetadataUsageId;
extern const uint32_t Result_ToString_m2617897279_MetadataUsageId;
extern const uint32_t Result__ctor_m2674064399_MetadataUsageId;
extern const uint32_t Result__ctor_m95352135_MetadataUsageId;
extern const uint32_t Result_addResultPoints_m1158456689_MetadataUsageId;
extern const uint32_t Result_putAllMetadata_m2105747124_MetadataUsageId;
extern const uint32_t Result_putMetadata_m2997266180_MetadataUsageId;
extern const uint32_t SupportClass_ToBinaryString_m2575833209_MetadataUsageId;
extern const uint32_t WriterException__ctor_m1883063621_MetadataUsageId;
extern const uint32_t WriterException__ctor_m3142821443_MetadataUsageId;
extern const uint32_t WriterException__ctor_m804388596_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IBuffer_t541192229;
struct IFontFamily_t293443646;
struct IMap_2_t1029762545;
struct IMap_2_t1620352935;
struct IWriteableBitmap_t3747397532;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct DelegateU5BU5D_t1703627840;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct ECBU5BU5D_t719977991;
struct ResultPointU5BU5D_t569055209;


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
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.UI.Xaml.IDependencyObject
struct NOVTABLE IDependencyObject_t3468341335 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped0_GetValue_m1957740890() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped1_SetValue_m1035023860() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped2_ClearValue_m1609098810() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped3_ReadLocalValue_m4161021806() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped4_GetAnimationBaseValue_m182226023() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped5_get_Dispatcher_m187262419() = 0;
};
// Windows.UI.Xaml.IDependencyObject2
struct NOVTABLE IDependencyObject2_t3465326679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped0_RegisterPropertyChangedCallback_m1182027682() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped1_UnregisterPropertyChangedCallback_m2683655511() = 0;
};
// Windows.UI.Xaml.IDependencyObjectFactory
struct NOVTABLE IDependencyObjectFactory_t1390337327 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObjectFactory_U24__Stripped0_CreateInstance_m2528011140() = 0;
};
// Windows.UI.Xaml.Media.IFontFamily
struct NOVTABLE IFontFamily_t293443646 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFontFamily_U24__Stripped0_get_Source_m496163941() = 0;
};
// Windows.UI.Xaml.Media.IFontFamilyFactory
struct NOVTABLE IFontFamilyFactory_t2978174881 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFontFamilyFactory_U24__Stripped0_CreateInstanceWithName_m2038544513() = 0;
};
// Windows.UI.Xaml.Media.IFontFamilyStatics2
struct NOVTABLE IFontFamilyStatics2_t3436591565 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFontFamilyStatics2_U24__Stripped0_get_XamlAutoFontFamily_m2015341850() = 0;
};
// Windows.UI.Xaml.Media.IImageSource
struct NOVTABLE IImageSource_t3784102825 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.Media.IImageSourceFactory
struct NOVTABLE IImageSourceFactory_t2872845293 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.Media.Imaging.IBitmapSource
struct NOVTABLE IBitmapSource_t3900997959 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBitmapSource_get_PixelWidth_m2161566277(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitmapSource_get_PixelHeight_m3763625019(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitmapSource_U24__Stripped0_SetSource_m1506844938() = 0;
	virtual il2cpp_hresult_t STDCALL IBitmapSource_U24__Stripped1_SetSourceAsync_m4267729583() = 0;
};
// Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory
struct NOVTABLE IBitmapSourceFactory_t792340512 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBitmapSourceFactory_U24__Stripped0_CreateInstance_m4164354484() = 0;
};
// Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics
struct NOVTABLE IBitmapSourceStatics_t1674258844 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBitmapSourceStatics_U24__Stripped0_get_PixelWidthProperty_m4219129597() = 0;
	virtual il2cpp_hresult_t STDCALL IBitmapSourceStatics_U24__Stripped1_get_PixelHeightProperty_m302473072() = 0;
};
// Windows.UI.Xaml.Media.Imaging.IWriteableBitmap
struct NOVTABLE IWriteableBitmap_t3747397532 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWriteableBitmap_get_PixelBuffer_m117355910(IBuffer_t541192229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IWriteableBitmap_Invalidate_m2492491650() = 0;
};
// Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory
struct NOVTABLE IWriteableBitmapFactory_t3636748068 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWriteableBitmapFactory_CreateInstanceWithDimensions_m1691525336(int32_t ___pixelWidth0, int32_t ___pixelHeight1, IWriteableBitmap_t3747397532** comReturnValue) = 0;
};
// ZXing.Common.IEncodingOptions
struct NOVTABLE IEncodingOptions_t2573455057 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEncodingOptions_get_Hints_m3074810233(IMap_2_t1620352935** comReturnValue) = 0;
};
// ZXing.Common.IEncodingOptionsClass
struct NOVTABLE IEncodingOptionsClass_t2681192122 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_get_Height_m2604891131(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_get_Margin_m1144484569(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_get_PureBarcode_m1941118381(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_get_Width_m4211194730(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_put_Height_m3987248253(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_put_Margin_m2177371731(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_put_PureBarcode_m3676067665(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IEncodingOptionsClass_put_Width_m305409629(int32_t ___value0) = 0;
};
// ZXing.IResultPointClass
struct NOVTABLE IResultPointClass_t1633747827 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IResultPointClass_Equals_m689863731(Il2CppIInspectable* ___other0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultPointClass_get_X_m2295293562(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultPointClass_get_Y_m4251608698(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultPointClass_GetHashCode_m2737048445(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultPointClass_ToString_m320159263(Il2CppHString* comReturnValue) = 0;
};
// ZXing.QrCode.Internal.IErrorCorrectionLevelClass
struct NOVTABLE IErrorCorrectionLevelClass_t2406692834 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IErrorCorrectionLevelClass_get_Bits_m3720973533(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorCorrectionLevelClass_get_Name_m2128756618(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorCorrectionLevelClass_ordinal_m1970959793(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorCorrectionLevelClass_ToString_m3894279027(Il2CppHString* comReturnValue) = 0;
};
// ZXing.QrCode.Internal.IQRCodeDecoderMetaDataClass
struct NOVTABLE IQRCodeDecoderMetaDataClass_t867614159 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IQRCodeDecoderMetaDataClass_get_IsMirrored_m2235945858(bool* comReturnValue) = 0;
};
// ZXing.Rendering.IPixelDataClass
struct NOVTABLE IPixelDataClass_t286966874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPixelDataClass_get_Heigth_m351338663(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataClass_get_Pixel_m3476594406(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataClass_get_Width_m1676710164(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataClass_ToBitmap_m2660717829(Il2CppIInspectable** comReturnValue) = 0;
};
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef DICTIONARY_2_T2380125725_H
#define DICTIONARY_2_T2380125725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct  Dictionary_2_t2380125725  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3987230152* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2569801196 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4096170043 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___entries_1)); }
	inline EntryU5BU5D_t3987230152* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3987230152** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3987230152* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___keys_7)); }
	inline KeyCollection_t2569801196 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2569801196 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2569801196 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___values_8)); }
	inline ValueCollection_t4096170043 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4096170043 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4096170043 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2380125725_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef BINARYBITMAP_T3514195023_H
#define BINARYBITMAP_T3514195023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BinaryBitmap
struct  BinaryBitmap_t3514195023  : public RuntimeObject
{
public:
	// ZXing.Binarizer ZXing.BinaryBitmap::binarizer
	Binarizer_t2848741980 * ___binarizer_0;
	// ZXing.Common.BitMatrix ZXing.BinaryBitmap::matrix
	BitMatrix_t2873240750 * ___matrix_1;

public:
	inline static int32_t get_offset_of_binarizer_0() { return static_cast<int32_t>(offsetof(BinaryBitmap_t3514195023, ___binarizer_0)); }
	inline Binarizer_t2848741980 * get_binarizer_0() const { return ___binarizer_0; }
	inline Binarizer_t2848741980 ** get_address_of_binarizer_0() { return &___binarizer_0; }
	inline void set_binarizer_0(Binarizer_t2848741980 * value)
	{
		___binarizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___binarizer_0), value);
	}

	inline static int32_t get_offset_of_matrix_1() { return static_cast<int32_t>(offsetof(BinaryBitmap_t3514195023, ___matrix_1)); }
	inline BitMatrix_t2873240750 * get_matrix_1() const { return ___matrix_1; }
	inline BitMatrix_t2873240750 ** get_address_of_matrix_1() { return &___matrix_1; }
	inline void set_matrix_1(BitMatrix_t2873240750 * value)
	{
		___matrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___matrix_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYBITMAP_T3514195023_H
#ifndef DECODERRESULT_T4252639067_H
#define DECODERRESULT_T4252639067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DecoderResult
struct  DecoderResult_t4252639067  : public RuntimeObject
{
public:
	// System.Byte[] ZXing.Common.DecoderResult::<RawBytes>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CRawBytesU3Ek__BackingField_0;
	// System.String ZXing.Common.DecoderResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::<ByteSegments>k__BackingField
	RuntimeObject* ___U3CByteSegmentsU3Ek__BackingField_2;
	// System.String ZXing.Common.DecoderResult::<ECLevel>k__BackingField
	String_t* ___U3CECLevelU3Ek__BackingField_3;
	// System.Int32 ZXing.Common.DecoderResult::<ErrorsCorrected>k__BackingField
	int32_t ___U3CErrorsCorrectedU3Ek__BackingField_4;
	// System.Int32 ZXing.Common.DecoderResult::<StructuredAppendSequenceNumber>k__BackingField
	int32_t ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5;
	// System.Int32 ZXing.Common.DecoderResult::<Erasures>k__BackingField
	int32_t ___U3CErasuresU3Ek__BackingField_6;
	// System.Int32 ZXing.Common.DecoderResult::<StructuredAppendParity>k__BackingField
	int32_t ___U3CStructuredAppendParityU3Ek__BackingField_7;
	// System.Object ZXing.Common.DecoderResult::<Other>k__BackingField
	RuntimeObject * ___U3COtherU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CRawBytesU3Ek__BackingField_0)); }
	inline ByteU5BU5D_t4116647657* get_U3CRawBytesU3Ek__BackingField_0() const { return ___U3CRawBytesU3Ek__BackingField_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CRawBytesU3Ek__BackingField_0() { return &___U3CRawBytesU3Ek__BackingField_0; }
	inline void set_U3CRawBytesU3Ek__BackingField_0(ByteU5BU5D_t4116647657* value)
	{
		___U3CRawBytesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawBytesU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextU3Ek__BackingField_1() const { return ___U3CTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_1() { return &___U3CTextU3Ek__BackingField_1; }
	inline void set_U3CTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CByteSegmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CByteSegmentsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CByteSegmentsU3Ek__BackingField_2() const { return ___U3CByteSegmentsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CByteSegmentsU3Ek__BackingField_2() { return &___U3CByteSegmentsU3Ek__BackingField_2; }
	inline void set_U3CByteSegmentsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CByteSegmentsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CByteSegmentsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CECLevelU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CECLevelU3Ek__BackingField_3)); }
	inline String_t* get_U3CECLevelU3Ek__BackingField_3() const { return ___U3CECLevelU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CECLevelU3Ek__BackingField_3() { return &___U3CECLevelU3Ek__BackingField_3; }
	inline void set_U3CECLevelU3Ek__BackingField_3(String_t* value)
	{
		___U3CECLevelU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CECLevelU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CErrorsCorrectedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CErrorsCorrectedU3Ek__BackingField_4)); }
	inline int32_t get_U3CErrorsCorrectedU3Ek__BackingField_4() const { return ___U3CErrorsCorrectedU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CErrorsCorrectedU3Ek__BackingField_4() { return &___U3CErrorsCorrectedU3Ek__BackingField_4; }
	inline void set_U3CErrorsCorrectedU3Ek__BackingField_4(int32_t value)
	{
		___U3CErrorsCorrectedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5)); }
	inline int32_t get_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5() const { return ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5() { return &___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5; }
	inline void set_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5(int32_t value)
	{
		___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CErasuresU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CErasuresU3Ek__BackingField_6)); }
	inline int32_t get_U3CErasuresU3Ek__BackingField_6() const { return ___U3CErasuresU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CErasuresU3Ek__BackingField_6() { return &___U3CErasuresU3Ek__BackingField_6; }
	inline void set_U3CErasuresU3Ek__BackingField_6(int32_t value)
	{
		___U3CErasuresU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CStructuredAppendParityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CStructuredAppendParityU3Ek__BackingField_7)); }
	inline int32_t get_U3CStructuredAppendParityU3Ek__BackingField_7() const { return ___U3CStructuredAppendParityU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CStructuredAppendParityU3Ek__BackingField_7() { return &___U3CStructuredAppendParityU3Ek__BackingField_7; }
	inline void set_U3CStructuredAppendParityU3Ek__BackingField_7(int32_t value)
	{
		___U3CStructuredAppendParityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3COtherU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3COtherU3Ek__BackingField_8)); }
	inline RuntimeObject * get_U3COtherU3Ek__BackingField_8() const { return ___U3COtherU3Ek__BackingField_8; }
	inline RuntimeObject ** get_address_of_U3COtherU3Ek__BackingField_8() { return &___U3COtherU3Ek__BackingField_8; }
	inline void set_U3COtherU3Ek__BackingField_8(RuntimeObject * value)
	{
		___U3COtherU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3COtherU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERRESULT_T4252639067_H
#ifndef DETECTORRESULT_T2934418424_H
#define DETECTORRESULT_T2934418424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DetectorResult
struct  DetectorResult_t2934418424  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::<Bits>k__BackingField
	BitMatrix_t2873240750 * ___U3CBitsU3Ek__BackingField_0;
	// ZXing.ResultPoint[] ZXing.Common.DetectorResult::<Points>k__BackingField
	ResultPointU5BU5D_t569055209* ___U3CPointsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBitsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetectorResult_t2934418424, ___U3CBitsU3Ek__BackingField_0)); }
	inline BitMatrix_t2873240750 * get_U3CBitsU3Ek__BackingField_0() const { return ___U3CBitsU3Ek__BackingField_0; }
	inline BitMatrix_t2873240750 ** get_address_of_U3CBitsU3Ek__BackingField_0() { return &___U3CBitsU3Ek__BackingField_0; }
	inline void set_U3CBitsU3Ek__BackingField_0(BitMatrix_t2873240750 * value)
	{
		___U3CBitsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBitsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetectorResult_t2934418424, ___U3CPointsU3Ek__BackingField_1)); }
	inline ResultPointU5BU5D_t569055209* get_U3CPointsU3Ek__BackingField_1() const { return ___U3CPointsU3Ek__BackingField_1; }
	inline ResultPointU5BU5D_t569055209** get_address_of_U3CPointsU3Ek__BackingField_1() { return &___U3CPointsU3Ek__BackingField_1; }
	inline void set_U3CPointsU3Ek__BackingField_1(ResultPointU5BU5D_t569055209* value)
	{
		___U3CPointsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTORRESULT_T2934418424_H
#ifndef LUMINANCESOURCE_T3713829503_H
#define LUMINANCESOURCE_T3713829503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.LuminanceSource
struct  LuminanceSource_t3713829503  : public RuntimeObject
{
public:
	// System.Int32 ZXing.LuminanceSource::width
	int32_t ___width_0;
	// System.Int32 ZXing.LuminanceSource::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(LuminanceSource_t3713829503, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(LuminanceSource_t3713829503, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUMINANCESOURCE_T3713829503_H
#ifndef BYTEMATRIX_T2868153292_H
#define BYTEMATRIX_T2868153292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.ByteMatrix
struct  ByteMatrix_t2868153292  : public RuntimeObject
{
public:
	// System.Byte[][] ZXing.QrCode.Internal.ByteMatrix::bytes
	ByteU5BU5DU5BU5D_t457913172* ___bytes_0;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::width
	int32_t ___width_1;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::height
	int32_t ___height_2;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(ByteMatrix_t2868153292, ___bytes_0)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_0), value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ByteMatrix_t2868153292, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ByteMatrix_t2868153292, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEMATRIX_T2868153292_H
#ifndef DECODER_T1927175606_H
#define DECODER_T1927175606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Decoder
struct  Decoder_t1927175606  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.ReedSolomonDecoder ZXing.QrCode.Internal.Decoder::rsDecoder
	ReedSolomonDecoder_t4136138852 * ___rsDecoder_0;

public:
	inline static int32_t get_offset_of_rsDecoder_0() { return static_cast<int32_t>(offsetof(Decoder_t1927175606, ___rsDecoder_0)); }
	inline ReedSolomonDecoder_t4136138852 * get_rsDecoder_0() const { return ___rsDecoder_0; }
	inline ReedSolomonDecoder_t4136138852 ** get_address_of_rsDecoder_0() { return &___rsDecoder_0; }
	inline void set_rsDecoder_0(ReedSolomonDecoder_t4136138852 * value)
	{
		___rsDecoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsDecoder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T1927175606_H
#ifndef DETECTOR_T1946199639_H
#define DETECTOR_T1946199639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Detector
struct  Detector_t1946199639  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::image
	BitMatrix_t2873240750 * ___image_0;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.Detector::resultPointCallback
	ResultPointCallback_t922799438 * ___resultPointCallback_1;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(Detector_t1946199639, ___image_0)); }
	inline BitMatrix_t2873240750 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2873240750 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2873240750 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_resultPointCallback_1() { return static_cast<int32_t>(offsetof(Detector_t1946199639, ___resultPointCallback_1)); }
	inline ResultPointCallback_t922799438 * get_resultPointCallback_1() const { return ___resultPointCallback_1; }
	inline ResultPointCallback_t922799438 ** get_address_of_resultPointCallback_1() { return &___resultPointCallback_1; }
	inline void set_resultPointCallback_1(ResultPointCallback_t922799438 * value)
	{
		___resultPointCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___resultPointCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTOR_T1946199639_H
#ifndef QRCODE_T4150242837_H
#define QRCODE_T4150242837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.QRCode
struct  QRCode_t4150242837  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.QRCode::<Mode>k__BackingField
	Mode_t636918511 * ___U3CModeU3Ek__BackingField_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.QRCode::<ECLevel>k__BackingField
	ErrorCorrectionLevel_t2910789944 * ___U3CECLevelU3Ek__BackingField_2;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.QRCode::<Version>k__BackingField
	Version_t833662726 * ___U3CVersionU3Ek__BackingField_3;
	// System.Int32 ZXing.QrCode.Internal.QRCode::<MaskPattern>k__BackingField
	int32_t ___U3CMaskPatternU3Ek__BackingField_4;
	// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::<Matrix>k__BackingField
	ByteMatrix_t2868153292 * ___U3CMatrixU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CModeU3Ek__BackingField_1)); }
	inline Mode_t636918511 * get_U3CModeU3Ek__BackingField_1() const { return ___U3CModeU3Ek__BackingField_1; }
	inline Mode_t636918511 ** get_address_of_U3CModeU3Ek__BackingField_1() { return &___U3CModeU3Ek__BackingField_1; }
	inline void set_U3CModeU3Ek__BackingField_1(Mode_t636918511 * value)
	{
		___U3CModeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CModeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CECLevelU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CECLevelU3Ek__BackingField_2)); }
	inline ErrorCorrectionLevel_t2910789944 * get_U3CECLevelU3Ek__BackingField_2() const { return ___U3CECLevelU3Ek__BackingField_2; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_U3CECLevelU3Ek__BackingField_2() { return &___U3CECLevelU3Ek__BackingField_2; }
	inline void set_U3CECLevelU3Ek__BackingField_2(ErrorCorrectionLevel_t2910789944 * value)
	{
		___U3CECLevelU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CECLevelU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CVersionU3Ek__BackingField_3)); }
	inline Version_t833662726 * get_U3CVersionU3Ek__BackingField_3() const { return ___U3CVersionU3Ek__BackingField_3; }
	inline Version_t833662726 ** get_address_of_U3CVersionU3Ek__BackingField_3() { return &___U3CVersionU3Ek__BackingField_3; }
	inline void set_U3CVersionU3Ek__BackingField_3(Version_t833662726 * value)
	{
		___U3CVersionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVersionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CMaskPatternU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CMaskPatternU3Ek__BackingField_4)); }
	inline int32_t get_U3CMaskPatternU3Ek__BackingField_4() const { return ___U3CMaskPatternU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMaskPatternU3Ek__BackingField_4() { return &___U3CMaskPatternU3Ek__BackingField_4; }
	inline void set_U3CMaskPatternU3Ek__BackingField_4(int32_t value)
	{
		___U3CMaskPatternU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CMatrixU3Ek__BackingField_5)); }
	inline ByteMatrix_t2868153292 * get_U3CMatrixU3Ek__BackingField_5() const { return ___U3CMatrixU3Ek__BackingField_5; }
	inline ByteMatrix_t2868153292 ** get_address_of_U3CMatrixU3Ek__BackingField_5() { return &___U3CMatrixU3Ek__BackingField_5; }
	inline void set_U3CMatrixU3Ek__BackingField_5(ByteMatrix_t2868153292 * value)
	{
		___U3CMatrixU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMatrixU3Ek__BackingField_5), value);
	}
};

struct QRCode_t4150242837_StaticFields
{
public:
	// System.Int32 ZXing.QrCode.Internal.QRCode::NUM_MASK_PATTERNS
	int32_t ___NUM_MASK_PATTERNS_0;

public:
	inline static int32_t get_offset_of_NUM_MASK_PATTERNS_0() { return static_cast<int32_t>(offsetof(QRCode_t4150242837_StaticFields, ___NUM_MASK_PATTERNS_0)); }
	inline int32_t get_NUM_MASK_PATTERNS_0() const { return ___NUM_MASK_PATTERNS_0; }
	inline int32_t* get_address_of_NUM_MASK_PATTERNS_0() { return &___NUM_MASK_PATTERNS_0; }
	inline void set_NUM_MASK_PATTERNS_0(int32_t value)
	{
		___NUM_MASK_PATTERNS_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODE_T4150242837_H
#ifndef ECB_T144347634_H
#define ECB_T144347634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version/ECB
struct  ECB_t144347634  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_t144347634, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_t144347634, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECB_T144347634_H
#ifndef ECBLOCKS_T2689482655_H
#define ECBLOCKS_T2689482655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version/ECBlocks
struct  ECBlocks_t2689482655  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::ecCodewordsPerBlock
	int32_t ___ecCodewordsPerBlock_0;
	// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::ecBlocks
	ECBU5BU5D_t719977991* ___ecBlocks_1;

public:
	inline static int32_t get_offset_of_ecCodewordsPerBlock_0() { return static_cast<int32_t>(offsetof(ECBlocks_t2689482655, ___ecCodewordsPerBlock_0)); }
	inline int32_t get_ecCodewordsPerBlock_0() const { return ___ecCodewordsPerBlock_0; }
	inline int32_t* get_address_of_ecCodewordsPerBlock_0() { return &___ecCodewordsPerBlock_0; }
	inline void set_ecCodewordsPerBlock_0(int32_t value)
	{
		___ecCodewordsPerBlock_0 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_1() { return static_cast<int32_t>(offsetof(ECBlocks_t2689482655, ___ecBlocks_1)); }
	inline ECBU5BU5D_t719977991* get_ecBlocks_1() const { return ___ecBlocks_1; }
	inline ECBU5BU5D_t719977991** get_address_of_ecBlocks_1() { return &___ecBlocks_1; }
	inline void set_ecBlocks_1(ECBU5BU5D_t719977991* value)
	{
		___ecBlocks_1 = value;
		Il2CppCodeGenWriteBarrier((&___ecBlocks_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECBLOCKS_T2689482655_H
#ifndef QRCODEREADER_T3363387111_H
#define QRCODEREADER_T3363387111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QRCodeReader
struct  QRCodeReader_t3363387111  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::decoder
	Decoder_t1927175606 * ___decoder_1;

public:
	inline static int32_t get_offset_of_decoder_1() { return static_cast<int32_t>(offsetof(QRCodeReader_t3363387111, ___decoder_1)); }
	inline Decoder_t1927175606 * get_decoder_1() const { return ___decoder_1; }
	inline Decoder_t1927175606 ** get_address_of_decoder_1() { return &___decoder_1; }
	inline void set_decoder_1(Decoder_t1927175606 * value)
	{
		___decoder_1 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_1), value);
	}
};

struct QRCodeReader_t3363387111_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.QrCode.QRCodeReader::NO_POINTS
	ResultPointU5BU5D_t569055209* ___NO_POINTS_0;

public:
	inline static int32_t get_offset_of_NO_POINTS_0() { return static_cast<int32_t>(offsetof(QRCodeReader_t3363387111_StaticFields, ___NO_POINTS_0)); }
	inline ResultPointU5BU5D_t569055209* get_NO_POINTS_0() const { return ___NO_POINTS_0; }
	inline ResultPointU5BU5D_t569055209** get_address_of_NO_POINTS_0() { return &___NO_POINTS_0; }
	inline void set_NO_POINTS_0(ResultPointU5BU5D_t569055209* value)
	{
		___NO_POINTS_0 = value;
		Il2CppCodeGenWriteBarrier((&___NO_POINTS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEREADER_T3363387111_H
#ifndef SUPPORTCLASS_T3136216679_H
#define SUPPORTCLASS_T3136216679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.SupportClass
struct  SupportClass_t3136216679  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTCLASS_T3136216679_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_3), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_4), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef DEPENDENCYOBJECT_T3266284141_H
#define DEPENDENCYOBJECT_T3266284141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.DependencyObject
struct  DependencyObject_t3266284141  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.IDependencyObject
	IDependencyObject_t3468341335* ____idependencyObject_t3468341335;
	// Cached pointer to Windows.UI.Xaml.IDependencyObject2
	IDependencyObject2_t3465326679* ____idependencyObject2_t3465326679;

public:
	inline IDependencyObject_t3468341335* get_____idependencyObject_t3468341335()
	{
		IDependencyObject_t3468341335* returnValue = ____idependencyObject_t3468341335;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject_t3468341335::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject_t3468341335>((&____idependencyObject_t3468341335), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject_t3468341335;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IDependencyObject2_t3465326679* get_____idependencyObject2_t3465326679()
	{
		IDependencyObject2_t3465326679* returnValue = ____idependencyObject2_t3465326679;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject2_t3465326679::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject2_t3465326679>((&____idependencyObject2_t3465326679), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject2_t3465326679;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct DependencyObject_t3266284141_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IDependencyObjectFactory
	IDependencyObjectFactory_t1390337327* ____idependencyObjectFactory_t1390337327;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.DependencyObject"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDependencyObjectFactory_t1390337327* get_____idependencyObjectFactory_t1390337327()
	{
		IDependencyObjectFactory_t1390337327* returnValue = ____idependencyObjectFactory_t1390337327;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDependencyObjectFactory_t1390337327::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObjectFactory_t1390337327>((&____idependencyObjectFactory_t1390337327), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObjectFactory_t1390337327;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPENDENCYOBJECT_T3266284141_H
#ifndef FONTFAMILY_T3809835137_H
#define FONTFAMILY_T3809835137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Media.FontFamily
struct  FontFamily_t3809835137  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Media.IFontFamily
	IFontFamily_t293443646* ____ifontFamily_t293443646;

public:
	inline IFontFamily_t293443646* get_____ifontFamily_t293443646()
	{
		IFontFamily_t293443646* returnValue = ____ifontFamily_t293443646;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IFontFamily_t293443646::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IFontFamily_t293443646>((&____ifontFamily_t293443646), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ifontFamily_t293443646;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct FontFamily_t3809835137_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Media.IFontFamilyFactory
	IFontFamilyFactory_t2978174881* ____ifontFamilyFactory_t2978174881;
	// Cached pointer to Windows.UI.Xaml.Media.IFontFamilyStatics2
	IFontFamilyStatics2_t3436591565* ____ifontFamilyStatics2_t3436591565;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Media.FontFamily"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IFontFamilyFactory_t2978174881* get_____ifontFamilyFactory_t2978174881()
	{
		IFontFamilyFactory_t2978174881* returnValue = ____ifontFamilyFactory_t2978174881;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFontFamilyFactory_t2978174881::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IFontFamilyFactory_t2978174881>((&____ifontFamilyFactory_t2978174881), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ifontFamilyFactory_t2978174881;
			}
		}
		return returnValue;
	}

	inline IFontFamilyStatics2_t3436591565* get_____ifontFamilyStatics2_t3436591565()
	{
		IFontFamilyStatics2_t3436591565* returnValue = ____ifontFamilyStatics2_t3436591565;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFontFamilyStatics2_t3436591565::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IFontFamilyStatics2_t3436591565>((&____ifontFamilyStatics2_t3436591565), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ifontFamilyStatics2_t3436591565;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTFAMILY_T3809835137_H
#ifndef BASELUMINANCESOURCE_T3215128144_H
#define BASELUMINANCESOURCE_T3215128144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BaseLuminanceSource
struct  BaseLuminanceSource_t3215128144  : public LuminanceSource_t3713829503
{
public:
	// System.Byte[] ZXing.BaseLuminanceSource::luminances
	ByteU5BU5D_t4116647657* ___luminances_2;

public:
	inline static int32_t get_offset_of_luminances_2() { return static_cast<int32_t>(offsetof(BaseLuminanceSource_t3215128144, ___luminances_2)); }
	inline ByteU5BU5D_t4116647657* get_luminances_2() const { return ___luminances_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_luminances_2() { return &___luminances_2; }
	inline void set_luminances_2(ByteU5BU5D_t4116647657* value)
	{
		___luminances_2 = value;
		Il2CppCodeGenWriteBarrier((&___luminances_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASELUMINANCESOURCE_T3215128144_H
#ifndef ENCODINGOPTIONS_T288987117_H
#define ENCODINGOPTIONS_T288987117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.EncodingOptions
struct  EncodingOptions_t288987117  : public Il2CppComObject
{
public:
	// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object> ZXing.Common.EncodingOptions::<Hints>k__BackingField
	RuntimeObject* ___U3CHintsU3Ek__BackingField_0;
	// Cached pointer to ZXing.Common.IEncodingOptions
	IEncodingOptions_t2573455057* ____iencodingOptions_t2573455057;
	// Cached pointer to ZXing.Common.IEncodingOptionsClass
	IEncodingOptionsClass_t2681192122* ____iencodingOptionsClass_t2681192122;

public:
	inline static int32_t get_offset_of_U3CHintsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(EncodingOptions_t288987117, ___U3CHintsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CHintsU3Ek__BackingField_0() const { return ___U3CHintsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CHintsU3Ek__BackingField_0() { return &___U3CHintsU3Ek__BackingField_0; }
	inline void set_U3CHintsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CHintsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHintsU3Ek__BackingField_0), value);
	}
	inline IEncodingOptions_t2573455057* get_____iencodingOptions_t2573455057()
	{
		IEncodingOptions_t2573455057* returnValue = ____iencodingOptions_t2573455057;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IEncodingOptions_t2573455057::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IEncodingOptions_t2573455057>((&____iencodingOptions_t2573455057), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iencodingOptions_t2573455057;
			}
		}
		return returnValue;
	}

	inline IEncodingOptionsClass_t2681192122* get_____iencodingOptionsClass_t2681192122()
	{
		IEncodingOptionsClass_t2681192122* returnValue = ____iencodingOptionsClass_t2681192122;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IEncodingOptionsClass_t2681192122::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IEncodingOptionsClass_t2681192122>((&____iencodingOptionsClass_t2681192122), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iencodingOptionsClass_t2681192122;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGOPTIONS_T288987117_H
#ifndef ERRORCORRECTIONLEVEL_T2910789944_H
#define ERRORCORRECTIONLEVEL_T2910789944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct  ErrorCorrectionLevel_t2910789944  : public Il2CppComObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::bits
	int32_t ___bits_5;
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::ordinal_Renamed_Field
	int32_t ___ordinal_Renamed_Field_6;
	// System.String ZXing.QrCode.Internal.ErrorCorrectionLevel::name
	String_t* ___name_7;
	// Cached pointer to ZXing.QrCode.Internal.IErrorCorrectionLevelClass
	IErrorCorrectionLevelClass_t2406692834* ____ierrorCorrectionLevelClass_t2406692834;

public:
	inline static int32_t get_offset_of_bits_5() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944, ___bits_5)); }
	inline int32_t get_bits_5() const { return ___bits_5; }
	inline int32_t* get_address_of_bits_5() { return &___bits_5; }
	inline void set_bits_5(int32_t value)
	{
		___bits_5 = value;
	}

	inline static int32_t get_offset_of_ordinal_Renamed_Field_6() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944, ___ordinal_Renamed_Field_6)); }
	inline int32_t get_ordinal_Renamed_Field_6() const { return ___ordinal_Renamed_Field_6; }
	inline int32_t* get_address_of_ordinal_Renamed_Field_6() { return &___ordinal_Renamed_Field_6; }
	inline void set_ordinal_Renamed_Field_6(int32_t value)
	{
		___ordinal_Renamed_Field_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}
	inline IErrorCorrectionLevelClass_t2406692834* get_____ierrorCorrectionLevelClass_t2406692834()
	{
		IErrorCorrectionLevelClass_t2406692834* returnValue = ____ierrorCorrectionLevelClass_t2406692834;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IErrorCorrectionLevelClass_t2406692834::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IErrorCorrectionLevelClass_t2406692834>((&____ierrorCorrectionLevelClass_t2406692834), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ierrorCorrectionLevelClass_t2406692834;
			}
		}
		return returnValue;
	}
};

struct ErrorCorrectionLevel_t2910789944_StaticFields
{
public:
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::l
	ErrorCorrectionLevel_t2910789944 * ___l_0;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::m
	ErrorCorrectionLevel_t2910789944 * ___m_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::q
	ErrorCorrectionLevel_t2910789944 * ___q_2;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::h
	ErrorCorrectionLevel_t2910789944 * ___h_3;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel[] ZXing.QrCode.Internal.ErrorCorrectionLevel::FOR_BITS
	ErrorCorrectionLevelU5BU5D_t1870060265* ___FOR_BITS_4;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___l_0)); }
	inline ErrorCorrectionLevel_t2910789944 * get_l_0() const { return ___l_0; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(ErrorCorrectionLevel_t2910789944 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_m_1() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___m_1)); }
	inline ErrorCorrectionLevel_t2910789944 * get_m_1() const { return ___m_1; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_m_1() { return &___m_1; }
	inline void set_m_1(ErrorCorrectionLevel_t2910789944 * value)
	{
		___m_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_1), value);
	}

	inline static int32_t get_offset_of_q_2() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___q_2)); }
	inline ErrorCorrectionLevel_t2910789944 * get_q_2() const { return ___q_2; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_q_2() { return &___q_2; }
	inline void set_q_2(ErrorCorrectionLevel_t2910789944 * value)
	{
		___q_2 = value;
		Il2CppCodeGenWriteBarrier((&___q_2), value);
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___h_3)); }
	inline ErrorCorrectionLevel_t2910789944 * get_h_3() const { return ___h_3; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(ErrorCorrectionLevel_t2910789944 * value)
	{
		___h_3 = value;
		Il2CppCodeGenWriteBarrier((&___h_3), value);
	}

	inline static int32_t get_offset_of_FOR_BITS_4() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___FOR_BITS_4)); }
	inline ErrorCorrectionLevelU5BU5D_t1870060265* get_FOR_BITS_4() const { return ___FOR_BITS_4; }
	inline ErrorCorrectionLevelU5BU5D_t1870060265** get_address_of_FOR_BITS_4() { return &___FOR_BITS_4; }
	inline void set_FOR_BITS_4(ErrorCorrectionLevelU5BU5D_t1870060265* value)
	{
		___FOR_BITS_4 = value;
		Il2CppCodeGenWriteBarrier((&___FOR_BITS_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCORRECTIONLEVEL_T2910789944_H
#ifndef QRCODEDECODERMETADATA_T3242363773_H
#define QRCODEDECODERMETADATA_T3242363773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct  QRCodeDecoderMetaData_t3242363773  : public Il2CppComObject
{
public:
	// System.Boolean ZXing.QrCode.Internal.QRCodeDecoderMetaData::mirrored
	bool ___mirrored_0;
	// Cached pointer to ZXing.QrCode.Internal.IQRCodeDecoderMetaDataClass
	IQRCodeDecoderMetaDataClass_t867614159* ____iqRCodeDecoderMetaDataClass_t867614159;

public:
	inline static int32_t get_offset_of_mirrored_0() { return static_cast<int32_t>(offsetof(QRCodeDecoderMetaData_t3242363773, ___mirrored_0)); }
	inline bool get_mirrored_0() const { return ___mirrored_0; }
	inline bool* get_address_of_mirrored_0() { return &___mirrored_0; }
	inline void set_mirrored_0(bool value)
	{
		___mirrored_0 = value;
	}
	inline IQRCodeDecoderMetaDataClass_t867614159* get_____iqRCodeDecoderMetaDataClass_t867614159()
	{
		IQRCodeDecoderMetaDataClass_t867614159* returnValue = ____iqRCodeDecoderMetaDataClass_t867614159;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IQRCodeDecoderMetaDataClass_t867614159::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IQRCodeDecoderMetaDataClass_t867614159>((&____iqRCodeDecoderMetaDataClass_t867614159), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iqRCodeDecoderMetaDataClass_t867614159;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEDECODERMETADATA_T3242363773_H
#ifndef READEREXCEPTION_T3787909692_H
#define READEREXCEPTION_T3787909692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ReaderException
struct  ReaderException_t3787909692  : public Exception_t
{
public:

public:
};

struct ReaderException_t3787909692_StaticFields
{
public:
	// ZXing.ReaderException ZXing.ReaderException::instance
	ReaderException_t3787909692 * ___instance_17;

public:
	inline static int32_t get_offset_of_instance_17() { return static_cast<int32_t>(offsetof(ReaderException_t3787909692_StaticFields, ___instance_17)); }
	inline ReaderException_t3787909692 * get_instance_17() const { return ___instance_17; }
	inline ReaderException_t3787909692 ** get_address_of_instance_17() { return &___instance_17; }
	inline void set_instance_17(ReaderException_t3787909692 * value)
	{
		___instance_17 = value;
		Il2CppCodeGenWriteBarrier((&___instance_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READEREXCEPTION_T3787909692_H
#ifndef PIXELDATA_T619138477_H
#define PIXELDATA_T619138477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Rendering.PixelData
struct  PixelData_t619138477  : public Il2CppComObject
{
public:
	// System.Byte[] ZXing.Rendering.PixelData::<Pixel>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CPixelU3Ek__BackingField_0;
	// System.Int32 ZXing.Rendering.PixelData::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_1;
	// System.Int32 ZXing.Rendering.PixelData::<Heigth>k__BackingField
	int32_t ___U3CHeigthU3Ek__BackingField_2;
	// Cached pointer to ZXing.Rendering.IPixelDataClass
	IPixelDataClass_t286966874* ____ipixelDataClass_t286966874;

public:
	inline static int32_t get_offset_of_U3CPixelU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PixelData_t619138477, ___U3CPixelU3Ek__BackingField_0)); }
	inline ByteU5BU5D_t4116647657* get_U3CPixelU3Ek__BackingField_0() const { return ___U3CPixelU3Ek__BackingField_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CPixelU3Ek__BackingField_0() { return &___U3CPixelU3Ek__BackingField_0; }
	inline void set_U3CPixelU3Ek__BackingField_0(ByteU5BU5D_t4116647657* value)
	{
		___U3CPixelU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPixelU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PixelData_t619138477, ___U3CWidthU3Ek__BackingField_1)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_1() const { return ___U3CWidthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_1() { return &___U3CWidthU3Ek__BackingField_1; }
	inline void set_U3CWidthU3Ek__BackingField_1(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CHeigthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PixelData_t619138477, ___U3CHeigthU3Ek__BackingField_2)); }
	inline int32_t get_U3CHeigthU3Ek__BackingField_2() const { return ___U3CHeigthU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CHeigthU3Ek__BackingField_2() { return &___U3CHeigthU3Ek__BackingField_2; }
	inline void set_U3CHeigthU3Ek__BackingField_2(int32_t value)
	{
		___U3CHeigthU3Ek__BackingField_2 = value;
	}
	inline IPixelDataClass_t286966874* get_____ipixelDataClass_t286966874()
	{
		IPixelDataClass_t286966874* returnValue = ____ipixelDataClass_t286966874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPixelDataClass_t286966874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPixelDataClass_t286966874>((&____ipixelDataClass_t286966874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipixelDataClass_t286966874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXELDATA_T619138477_H
#ifndef RESULTPOINT_T1473505336_H
#define RESULTPOINT_T1473505336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultPoint
struct  ResultPoint_t1473505336  : public Il2CppComObject
{
public:
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_t4116647657* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_t4116647657* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;
	// Cached pointer to ZXing.IResultPointClass
	IResultPointClass_t1633747827* ____iresultPointClass_t1633747827;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_bytesX_2() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___bytesX_2)); }
	inline ByteU5BU5D_t4116647657* get_bytesX_2() const { return ___bytesX_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytesX_2() { return &___bytesX_2; }
	inline void set_bytesX_2(ByteU5BU5D_t4116647657* value)
	{
		___bytesX_2 = value;
		Il2CppCodeGenWriteBarrier((&___bytesX_2), value);
	}

	inline static int32_t get_offset_of_bytesY_3() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___bytesY_3)); }
	inline ByteU5BU5D_t4116647657* get_bytesY_3() const { return ___bytesY_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytesY_3() { return &___bytesY_3; }
	inline void set_bytesY_3(ByteU5BU5D_t4116647657* value)
	{
		___bytesY_3 = value;
		Il2CppCodeGenWriteBarrier((&___bytesY_3), value);
	}

	inline static int32_t get_offset_of_toString_4() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___toString_4)); }
	inline String_t* get_toString_4() const { return ___toString_4; }
	inline String_t** get_address_of_toString_4() { return &___toString_4; }
	inline void set_toString_4(String_t* value)
	{
		___toString_4 = value;
		Il2CppCodeGenWriteBarrier((&___toString_4), value);
	}
	inline IResultPointClass_t1633747827* get_____iresultPointClass_t1633747827()
	{
		IResultPointClass_t1633747827* returnValue = ____iresultPointClass_t1633747827;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IResultPointClass_t1633747827::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IResultPointClass_t1633747827>((&____iresultPointClass_t1633747827), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iresultPointClass_t1633747827;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINT_T1473505336_H
#ifndef SERIALIZABLEATTRIBUTE_T2987426206_H
#define SERIALIZABLEATTRIBUTE_T2987426206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.SerializableAttribute
struct  SerializableAttribute_t2987426206  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T2987426206_H
#ifndef WRITEREXCEPTION_T375399354_H
#define WRITEREXCEPTION_T375399354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.WriterException
struct  WriterException_t375399354  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEREXCEPTION_T375399354_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
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
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef IMAGESOURCE_T2462296863_H
#define IMAGESOURCE_T2462296863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Media.ImageSource
struct  ImageSource_t2462296863  : public DependencyObject_t3266284141
{
public:
	// Cached pointer to Windows.UI.Xaml.Media.IImageSource
	IImageSource_t3784102825* ____iimageSource_t3784102825;

public:
	inline IImageSource_t3784102825* get_____iimageSource_t3784102825()
	{
		IImageSource_t3784102825* returnValue = ____iimageSource_t3784102825;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IImageSource_t3784102825::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IImageSource_t3784102825>((&____iimageSource_t3784102825), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iimageSource_t3784102825;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct ImageSource_t2462296863_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Media.IImageSourceFactory
	IImageSourceFactory_t2872845293* ____iimageSourceFactory_t2872845293;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Media.ImageSource"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IImageSourceFactory_t2872845293* get_____iimageSourceFactory_t2872845293()
	{
		IImageSourceFactory_t2872845293* returnValue = ____iimageSourceFactory_t2872845293;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IImageSourceFactory_t2872845293::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IImageSourceFactory_t2872845293>((&____iimageSourceFactory_t2872845293), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iimageSourceFactory_t2872845293;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGESOURCE_T2462296863_H
#ifndef BARCODEFORMAT_T1017833927_H
#define BARCODEFORMAT_T1017833927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeFormat
struct  BarcodeFormat_t1017833927 
{
public:
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BarcodeFormat_t1017833927, ___value___2)); }
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
#endif // BARCODEFORMAT_T1017833927_H
#ifndef BITMAPFORMAT_T1949044204_H
#define BITMAPFORMAT_T1949044204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BitmapFormat
struct  BitmapFormat_t1949044204 
{
public:
	// System.Int32 ZXing.BitmapFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitmapFormat_t1949044204, ___value___2)); }
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
#endif // BITMAPFORMAT_T1949044204_H
#ifndef DECODEHINTTYPE_T1227477060_H
#define DECODEHINTTYPE_T1227477060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.DecodeHintType
struct  DecodeHintType_t1227477060 
{
public:
	// System.Int32 ZXing.DecodeHintType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecodeHintType_t1227477060, ___value___2)); }
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
#endif // DECODEHINTTYPE_T1227477060_H
#ifndef ENCODEHINTTYPE_T1815309725_H
#define ENCODEHINTTYPE_T1815309725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.EncodeHintType
struct  EncodeHintType_t1815309725 
{
public:
	// System.Int32 ZXing.EncodeHintType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncodeHintType_t1815309725, ___value___2)); }
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
#endif // ENCODEHINTTYPE_T1815309725_H
#ifndef RGBLUMINANCESOURCE_T91581829_H
#define RGBLUMINANCESOURCE_T91581829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.RGBLuminanceSource
struct  RGBLuminanceSource_t91581829  : public BaseLuminanceSource_t3215128144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RGBLUMINANCESOURCE_T91581829_H
// ZXing.Rendering.IPixelDataRendererClass
struct NOVTABLE IPixelDataRendererClass_t3414219393 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_get_Background_m1094999544(Color_t455321150 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_get_FontFamily_m267802261(IFontFamily_t293443646** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_get_FontSize_m1586404351(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_get_Foreground_m850494675(Color_t455321150 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_put_Background_m3702125496(Color_t455321150  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_put_FontFamily_m2925159832(IFontFamily_t293443646* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_put_FontSize_m3405700070(double ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPixelDataRendererClass_put_Foreground_m1602194986(Color_t455321150  ___value0) = 0;
};
#ifndef RESULTMETADATATYPE_T220883355_H
#define RESULTMETADATATYPE_T220883355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultMetadataType
struct  ResultMetadataType_t220883355 
{
public:
	// System.Int32 ZXing.ResultMetadataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultMetadataType_t220883355, ___value___2)); }
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
#endif // RESULTMETADATATYPE_T220883355_H
#ifndef KEYVALUEPAIR_2_T482830596_H
#define KEYVALUEPAIR_2_T482830596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>
struct  KeyValuePair_2_t482830596 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t482830596, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t482830596, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T482830596_H
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
#ifndef BITMAPSOURCE_T1849346723_H
#define BITMAPSOURCE_T1849346723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Media.Imaging.BitmapSource
struct  BitmapSource_t1849346723  : public ImageSource_t2462296863
{
public:
	// Cached pointer to Windows.UI.Xaml.Media.Imaging.IBitmapSource
	IBitmapSource_t3900997959* ____ibitmapSource_t3900997959;

public:
	inline IBitmapSource_t3900997959* get_____ibitmapSource_t3900997959()
	{
		IBitmapSource_t3900997959* returnValue = ____ibitmapSource_t3900997959;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBitmapSource_t3900997959::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBitmapSource_t3900997959>((&____ibitmapSource_t3900997959), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibitmapSource_t3900997959;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct BitmapSource_t1849346723_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory
	IBitmapSourceFactory_t792340512* ____ibitmapSourceFactory_t792340512;
	// Cached pointer to Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics
	IBitmapSourceStatics_t1674258844* ____ibitmapSourceStatics_t1674258844;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Media.Imaging.BitmapSource"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IBitmapSourceFactory_t792340512* get_____ibitmapSourceFactory_t792340512()
	{
		IBitmapSourceFactory_t792340512* returnValue = ____ibitmapSourceFactory_t792340512;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IBitmapSourceFactory_t792340512::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBitmapSourceFactory_t792340512>((&____ibitmapSourceFactory_t792340512), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibitmapSourceFactory_t792340512;
			}
		}
		return returnValue;
	}

	inline IBitmapSourceStatics_t1674258844* get_____ibitmapSourceStatics_t1674258844()
	{
		IBitmapSourceStatics_t1674258844* returnValue = ____ibitmapSourceStatics_t1674258844;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IBitmapSourceStatics_t1674258844::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBitmapSourceStatics_t1674258844>((&____ibitmapSourceStatics_t1674258844), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibitmapSourceStatics_t1674258844;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMAPSOURCE_T1849346723_H
// ZXing.Common.IBitMatrixClass
struct NOVTABLE IBitMatrixClass_t3868409507 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_clear_m1645600500() = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_Clone_m2278920456(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_Equals_m3752959601(Il2CppIInspectable* ___obj0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_flip_m2895817966(int32_t ___x0, int32_t ___y1) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_get_Dimension_m2013256435(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_get_Height_m4142861978(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_get_Width_m294944122(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_getBottomRightOnBit_m3129971860(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_getEnclosingRectangle_m358506034(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_GetHashCode_m1460352145(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_getRow_m3070226865(int32_t ___y0, BitArray_t261046764 * ___row1, BitArray_t261046764 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_get_m3706864896(int32_t ___x0, int32_t ___y1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_getTopLeftOnBit_m2974606628(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_rotate180_m489112817() = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_setRegion_m3968322172(int32_t ___left0, int32_t ___top1, int32_t ___width2, int32_t ___height3) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_setRow_m4069971373(int32_t ___y0, BitArray_t261046764 * ___row1) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_ToBitmap_m2178963893(PixelData_t619138477 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_ToBitmap_m332302510(int32_t ___format0, Il2CppHString ___content1, PixelData_t619138477 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitMatrixClass_ToString_m3895665264(Il2CppHString* comReturnValue) = 0;
};
// ZXing.IResultClass
struct NOVTABLE IResultClass_t445684574 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IResultClass_addResultPoints_m2326113901(uint32_t ___newPoints0ArraySize, ResultPoint_t1473505336 ** ___newPoints0) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_get_BarcodeFormat_m4016444527(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_get_RawBytes_m500852380(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_get_ResultMetadata_m2056621706(IMap_2_t1029762545** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_get_ResultPoints_m1288198794(uint32_t* comReturnValueArraySize, ResultPoint_t1473505336 *** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_get_Text_m1076019681(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_get_Timestamp_m1098211564(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_putAllMetadata_m4081924921(IMap_2_t1029762545* ___metadata0) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_putMetadata_m1228628715(int32_t ___type0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IResultClass_ToString_m736314433(Il2CppHString* comReturnValue) = 0;
};
// ZXing.Rendering.IBarcodeRenderer
struct NOVTABLE IBarcodeRenderer_t3198017015 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBarcodeRenderer_Render_m3848897652(BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, Il2CppHString ___content2, PixelData_t619138477 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeRenderer_Render_m2512804034(BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, Il2CppHString ___content2, EncodingOptions_t288987117 * ___options3, PixelData_t619138477 ** comReturnValue) = 0;
};
// ZXing.Writer
struct NOVTABLE Writer_t1994170402 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Writer_encode_m678751478(Il2CppHString ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, BitMatrix_t2873240750 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL Writer_encode_m1637322283(Il2CppHString ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, IMap_2_t1620352935* ___hints4, BitMatrix_t2873240750 ** comReturnValue) = 0;
};
#ifndef WRITEABLEBITMAP_T4235865023_H
#define WRITEABLEBITMAP_T4235865023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Media.Imaging.WriteableBitmap
struct  WriteableBitmap_t4235865023  : public BitmapSource_t1849346723
{
public:
	// Cached pointer to Windows.UI.Xaml.Media.Imaging.IWriteableBitmap
	IWriteableBitmap_t3747397532* ____iwriteableBitmap_t3747397532;

public:
	inline IWriteableBitmap_t3747397532* get_____iwriteableBitmap_t3747397532()
	{
		IWriteableBitmap_t3747397532* returnValue = ____iwriteableBitmap_t3747397532;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWriteableBitmap_t3747397532::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWriteableBitmap_t3747397532>((&____iwriteableBitmap_t3747397532), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwriteableBitmap_t3747397532;
			}
		}
		return returnValue;
	}
};

struct WriteableBitmap_t4235865023_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory
	IWriteableBitmapFactory_t3636748068* ____iwriteableBitmapFactory_t3636748068;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Media.Imaging.WriteableBitmap"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWriteableBitmapFactory_t3636748068* get_____iwriteableBitmapFactory_t3636748068()
	{
		IWriteableBitmapFactory_t3636748068* returnValue = ____iwriteableBitmapFactory_t3636748068;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWriteableBitmapFactory_t3636748068::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWriteableBitmapFactory_t3636748068>((&____iwriteableBitmapFactory_t3636748068), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwriteableBitmapFactory_t3636748068;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEABLEBITMAP_T4235865023_H
#ifndef BITMATRIX_T2873240750_H
#define BITMATRIX_T2873240750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.BitMatrix
struct  BitMatrix_t2873240750  : public Il2CppComObject
{
public:
	// System.Int32 ZXing.Common.BitMatrix::width
	int32_t ___width_0;
	// System.Int32 ZXing.Common.BitMatrix::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.BitMatrix::rowSize
	int32_t ___rowSize_2;
	// System.Int32[] ZXing.Common.BitMatrix::bits
	Int32U5BU5D_t385246372* ___bits_3;
	// Cached pointer to ZXing.Common.IBitMatrixClass
	IBitMatrixClass_t3868409507* ____ibitMatrixClass_t3868409507;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_rowSize_2() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___rowSize_2)); }
	inline int32_t get_rowSize_2() const { return ___rowSize_2; }
	inline int32_t* get_address_of_rowSize_2() { return &___rowSize_2; }
	inline void set_rowSize_2(int32_t value)
	{
		___rowSize_2 = value;
	}

	inline static int32_t get_offset_of_bits_3() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___bits_3)); }
	inline Int32U5BU5D_t385246372* get_bits_3() const { return ___bits_3; }
	inline Int32U5BU5D_t385246372** get_address_of_bits_3() { return &___bits_3; }
	inline void set_bits_3(Int32U5BU5D_t385246372* value)
	{
		___bits_3 = value;
		Il2CppCodeGenWriteBarrier((&___bits_3), value);
	}
	inline IBitMatrixClass_t3868409507* get_____ibitMatrixClass_t3868409507()
	{
		IBitMatrixClass_t3868409507* returnValue = ____ibitMatrixClass_t3868409507;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBitMatrixClass_t3868409507::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBitMatrixClass_t3868409507>((&____ibitMatrixClass_t3868409507), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibitMatrixClass_t3868409507;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMATRIX_T2873240750_H
#ifndef QRCODEWRITER_T1467281458_H
#define QRCODEWRITER_T1467281458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QRCodeWriter
struct  QRCodeWriter_t1467281458  : public Il2CppComObject
{
public:
	// Cached pointer to ZXing.Writer
	Writer_t1994170402* ____writer_t1994170402;

public:
	inline Writer_t1994170402* get_____writer_t1994170402()
	{
		Writer_t1994170402* returnValue = ____writer_t1994170402;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(Writer_t1994170402::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Writer_t1994170402>((&____writer_t1994170402), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____writer_t1994170402;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEWRITER_T1467281458_H
#ifndef PIXELDATARENDERER_T163934832_H
#define PIXELDATARENDERER_T163934832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Rendering.PixelDataRenderer
struct  PixelDataRenderer_t163934832  : public Il2CppComObject
{
public:
	// Windows.UI.Color ZXing.Rendering.PixelDataRenderer::<Foreground>k__BackingField
	Color_t455321150  ___U3CForegroundU3Ek__BackingField_1;
	// Windows.UI.Color ZXing.Rendering.PixelDataRenderer::<Background>k__BackingField
	Color_t455321150  ___U3CBackgroundU3Ek__BackingField_2;
	// Windows.UI.Xaml.Media.FontFamily ZXing.Rendering.PixelDataRenderer::<FontFamily>k__BackingField
	FontFamily_t3809835137 * ___U3CFontFamilyU3Ek__BackingField_3;
	// System.Double ZXing.Rendering.PixelDataRenderer::<FontSize>k__BackingField
	double ___U3CFontSizeU3Ek__BackingField_4;
	// Cached pointer to ZXing.Rendering.IBarcodeRenderer
	IBarcodeRenderer_t3198017015* ____ibarcodeRenderer_t3198017015;
	// Cached pointer to ZXing.Rendering.IPixelDataRendererClass
	IPixelDataRendererClass_t3414219393* ____ipixelDataRendererClass_t3414219393;

public:
	inline static int32_t get_offset_of_U3CForegroundU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PixelDataRenderer_t163934832, ___U3CForegroundU3Ek__BackingField_1)); }
	inline Color_t455321150  get_U3CForegroundU3Ek__BackingField_1() const { return ___U3CForegroundU3Ek__BackingField_1; }
	inline Color_t455321150 * get_address_of_U3CForegroundU3Ek__BackingField_1() { return &___U3CForegroundU3Ek__BackingField_1; }
	inline void set_U3CForegroundU3Ek__BackingField_1(Color_t455321150  value)
	{
		___U3CForegroundU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBackgroundU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PixelDataRenderer_t163934832, ___U3CBackgroundU3Ek__BackingField_2)); }
	inline Color_t455321150  get_U3CBackgroundU3Ek__BackingField_2() const { return ___U3CBackgroundU3Ek__BackingField_2; }
	inline Color_t455321150 * get_address_of_U3CBackgroundU3Ek__BackingField_2() { return &___U3CBackgroundU3Ek__BackingField_2; }
	inline void set_U3CBackgroundU3Ek__BackingField_2(Color_t455321150  value)
	{
		___U3CBackgroundU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFontFamilyU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PixelDataRenderer_t163934832, ___U3CFontFamilyU3Ek__BackingField_3)); }
	inline FontFamily_t3809835137 * get_U3CFontFamilyU3Ek__BackingField_3() const { return ___U3CFontFamilyU3Ek__BackingField_3; }
	inline FontFamily_t3809835137 ** get_address_of_U3CFontFamilyU3Ek__BackingField_3() { return &___U3CFontFamilyU3Ek__BackingField_3; }
	inline void set_U3CFontFamilyU3Ek__BackingField_3(FontFamily_t3809835137 * value)
	{
		___U3CFontFamilyU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFontFamilyU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CFontSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PixelDataRenderer_t163934832, ___U3CFontSizeU3Ek__BackingField_4)); }
	inline double get_U3CFontSizeU3Ek__BackingField_4() const { return ___U3CFontSizeU3Ek__BackingField_4; }
	inline double* get_address_of_U3CFontSizeU3Ek__BackingField_4() { return &___U3CFontSizeU3Ek__BackingField_4; }
	inline void set_U3CFontSizeU3Ek__BackingField_4(double value)
	{
		___U3CFontSizeU3Ek__BackingField_4 = value;
	}
	inline IBarcodeRenderer_t3198017015* get_____ibarcodeRenderer_t3198017015()
	{
		IBarcodeRenderer_t3198017015* returnValue = ____ibarcodeRenderer_t3198017015;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBarcodeRenderer_t3198017015::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBarcodeRenderer_t3198017015>((&____ibarcodeRenderer_t3198017015), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibarcodeRenderer_t3198017015;
			}
		}
		return returnValue;
	}

	inline IPixelDataRendererClass_t3414219393* get_____ipixelDataRendererClass_t3414219393()
	{
		IPixelDataRendererClass_t3414219393* returnValue = ____ipixelDataRendererClass_t3414219393;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPixelDataRendererClass_t3414219393::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPixelDataRendererClass_t3414219393>((&____ipixelDataRendererClass_t3414219393), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipixelDataRendererClass_t3414219393;
			}
		}
		return returnValue;
	}
};

struct PixelDataRenderer_t163934832_StaticFields
{
public:
	// Windows.UI.Xaml.Media.FontFamily ZXing.Rendering.PixelDataRenderer::DefaultFontFamily
	FontFamily_t3809835137 * ___DefaultFontFamily_0;

public:
	inline static int32_t get_offset_of_DefaultFontFamily_0() { return static_cast<int32_t>(offsetof(PixelDataRenderer_t163934832_StaticFields, ___DefaultFontFamily_0)); }
	inline FontFamily_t3809835137 * get_DefaultFontFamily_0() const { return ___DefaultFontFamily_0; }
	inline FontFamily_t3809835137 ** get_address_of_DefaultFontFamily_0() { return &___DefaultFontFamily_0; }
	inline void set_DefaultFontFamily_0(FontFamily_t3809835137 * value)
	{
		___DefaultFontFamily_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultFontFamily_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PIXELDATARENDERER_T163934832_H
#ifndef RESULT_T940650810_H
#define RESULT_T940650810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Result
struct  Result_t940650810  : public Il2CppComObject
{
public:
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t569055209* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
	// Cached pointer to ZXing.IResultClass
	IResultClass_t445684574* ____iresultClass_t445684574;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CRawBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t4116647657* get_U3CRawBytesU3Ek__BackingField_1() const { return ___U3CRawBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CRawBytesU3Ek__BackingField_1() { return &___U3CRawBytesU3Ek__BackingField_1; }
	inline void set_U3CRawBytesU3Ek__BackingField_1(ByteU5BU5D_t4116647657* value)
	{
		___U3CRawBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawBytesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CResultPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CResultPointsU3Ek__BackingField_2)); }
	inline ResultPointU5BU5D_t569055209* get_U3CResultPointsU3Ek__BackingField_2() const { return ___U3CResultPointsU3Ek__BackingField_2; }
	inline ResultPointU5BU5D_t569055209** get_address_of_U3CResultPointsU3Ek__BackingField_2() { return &___U3CResultPointsU3Ek__BackingField_2; }
	inline void set_U3CResultPointsU3Ek__BackingField_2(ResultPointU5BU5D_t569055209* value)
	{
		___U3CResultPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultPointsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CBarcodeFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CBarcodeFormatU3Ek__BackingField_3() const { return ___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CBarcodeFormatU3Ek__BackingField_3() { return &___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline void set_U3CBarcodeFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CBarcodeFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CResultMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CResultMetadataU3Ek__BackingField_4() const { return ___U3CResultMetadataU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CResultMetadataU3Ek__BackingField_4() { return &___U3CResultMetadataU3Ek__BackingField_4; }
	inline void set_U3CResultMetadataU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CResultMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultMetadataU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CTimestampU3Ek__BackingField_5)); }
	inline int64_t get_U3CTimestampU3Ek__BackingField_5() const { return ___U3CTimestampU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CTimestampU3Ek__BackingField_5() { return &___U3CTimestampU3Ek__BackingField_5; }
	inline void set_U3CTimestampU3Ek__BackingField_5(int64_t value)
	{
		___U3CTimestampU3Ek__BackingField_5 = value;
	}
	inline IResultClass_t445684574* get_____iresultClass_t445684574()
	{
		IResultClass_t445684574* returnValue = ____iresultClass_t445684574;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IResultClass_t445684574::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IResultClass_t445684574>((&____iresultClass_t445684574), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iresultClass_t445684574;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULT_T940650810_H
#ifndef RESULTPOINTCALLBACK_T922799438_H
#define RESULTPOINTCALLBACK_T922799438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultPointCallback
struct  ResultPointCallback_t922799438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for ZXing.ResultPointCallback
struct IResultPointCallback_t922799438_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(ResultPoint_t1473505336 * ___point0) = 0;
};

#endif // RESULTPOINTCALLBACK_T922799438_H
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t719977991  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ECB_t144347634 * m_Items[1];

public:
	inline ECB_t144347634 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECB_t144347634 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECB_t144347634 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ECB_t144347634 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECB_t144347634 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECB_t144347634 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t569055209  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResultPoint_t1473505336 * m_Items[1];

public:
	inline ResultPoint_t1473505336 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultPoint_t1473505336 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultPoint_t1473505336 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ResultPoint_t1473505336 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultPoint_t1473505336 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultPoint_t1473505336 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2962682148_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3898097692_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m4080082266_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m787323069_gshared (Dictionary_2_t2380125725 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m1628704204_gshared (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m4115895800_gshared (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ECB_get_Count_m2776975345 (ECB_t144347634 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_m718354733 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.BinaryBitmap::get_BlackMatrix()
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * BinaryBitmap_get_BlackMatrix_m3451161154 (BinaryBitmap_t3514195023 * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeReader_extractPureBits_m1638805205 (RuntimeObject * __this /* static, unused */, BitMatrix_t2873240750 * ___image0, const RuntimeMethod* method);
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.Decoder::decode(ZXing.Common.BitMatrix,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR DecoderResult_t4252639067 * Decoder_decode_m1435328704 (Decoder_t1927175606 * __this, BitMatrix_t2873240750 * ___bits0, RuntimeObject* ___hints1, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.Detector::.ctor(ZXing.Common.BitMatrix)
extern "C" IL2CPP_METHOD_ATTR void Detector__ctor_m1334970264 (Detector_t1946199639 * __this, BitMatrix_t2873240750 * ___image0, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::get_Bits()
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * DetectorResult_get_Bits_m4189804177 (DetectorResult_t2934418424 * __this, const RuntimeMethod* method);
// ZXing.ResultPoint[] ZXing.Common.DetectorResult::get_Points()
extern "C" IL2CPP_METHOD_ATTR ResultPointU5BU5D_t569055209* DetectorResult_get_Points_m1848339834 (DetectorResult_t2934418424 * __this, const RuntimeMethod* method);
// System.Object ZXing.Common.DecoderResult::get_Other()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DecoderResult_get_Other_m269939721 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.QRCodeDecoderMetaData::applyMirroredCorrection(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void QRCodeDecoderMetaData_applyMirroredCorrection_m2911832081 (QRCodeDecoderMetaData_t3242363773 * __this, ResultPointU5BU5D_t569055209* ___points0, const RuntimeMethod* method);
// System.String ZXing.Common.DecoderResult::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* DecoderResult_get_Text_m2697615970 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Byte[] ZXing.Common.DecoderResult::get_RawBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DecoderResult_get_RawBytes_m1556132229 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m95352135 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::get_ByteSegments()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DecoderResult_get_ByteSegments_m1871338528 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Result_putMetadata_m2997266180 (Result_t940650810 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String ZXing.Common.DecoderResult::get_ECLevel()
extern "C" IL2CPP_METHOD_ATTR String_t* DecoderResult_get_ECLevel_m2757680265 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Boolean ZXing.Common.DecoderResult::get_StructuredAppend()
extern "C" IL2CPP_METHOD_ATTR bool DecoderResult_get_StructuredAppend_m2238126092 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendSequenceNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t DecoderResult_get_StructuredAppendSequenceNumber_m1979357853 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendParity()
extern "C" IL2CPP_METHOD_ATTR int32_t DecoderResult_get_StructuredAppendParity_m1411842703 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Int32[] ZXing.Common.BitMatrix::getTopLeftOnBit()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* BitMatrix_getTopLeftOnBit_m448340650 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Int32[] ZXing.Common.BitMatrix::getBottomRightOnBit()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* BitMatrix_getBottomRightOnBit_m854157020 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool QRCodeReader_moduleSize_m3273018994 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___leftTopBlack0, BitMatrix_t2873240750 * ___image1, float* ___msize2, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BitMatrix__ctor_m1968282877 (BitMatrix_t2873240750 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean ZXing.Common.BitMatrix::get_Item(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool BitMatrix_get_Item_m2278467565 (BitMatrix_t2873240750 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::put_Item(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BitMatrix_put_Item_m1437430290 (BitMatrix_t2873240750 * __this, int32_t ___x0, int32_t ___y1, bool ___value2, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m443640565 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_m1458139234 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.Decoder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Decoder__ctor_m570344096 (Decoder_t1927175606 * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_encode_m293161781 (QRCodeWriter_t1467281458 * __this, String_t* ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, RuntimeObject* ___hints4, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::get_L()
extern "C" IL2CPP_METHOD_ATTR ErrorCorrectionLevel_t2910789944 * ErrorCorrectionLevel_get_L_m535283558 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m2962682148 (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2962682148_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3898097692 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3898097692_gshared)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m4080082266 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_Value_m4080082266_gshared)(__this, method);
}
// ZXing.QrCode.Internal.QRCode ZXing.QrCode.Internal.Encoder::encode(System.String,ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR QRCode_t4150242837 * Encoder_encode_m3744739426 (RuntimeObject * __this /* static, unused */, String_t* ___content0, ErrorCorrectionLevel_t2910789944 * ___ecLevel1, RuntimeObject* ___hints2, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::renderResult(ZXing.QrCode.Internal.QRCode,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_renderResult_m3827833113 (RuntimeObject * __this /* static, unused */, QRCode_t4150242837 * ___code0, int32_t ___width1, int32_t ___height2, int32_t ___quietZone3, const RuntimeMethod* method);
// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::get_Matrix()
extern "C" IL2CPP_METHOD_ATTR ByteMatrix_t2868153292 * QRCode_get_Matrix_m1016202570 (QRCode_t4150242837 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Width_m3082606094 (ByteMatrix_t2868153292 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Height_m739555276 (ByteMatrix_t2868153292 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Item(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Item_m4007001019 (ByteMatrix_t2868153292 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::setRegion(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BitMatrix_setRegion_m687586433 (BitMatrix_t2873240750 * __this, int32_t ___left0, int32_t ___top1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// System.Void ZXing.BaseLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BaseLuminanceSource__ctor_m3969803434 (BaseLuminanceSource_t3215128144 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.BitmapFormat)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m2874680238 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___bitmapFormat1, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m1595216681 (RGBLuminanceSource_t91581829 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// ZXing.BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m3960214113 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_m1315598610 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_m2603599186 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m1124159396 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m3554397092 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_m3332001761 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_m3473742514 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_m1927994209 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_m2271742964 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgb565RawData0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Void ZXing.ReaderException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReaderException__ctor_m3886147231 (ReaderException_t3787909692 * __this, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelData::put_Heigth(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PixelData_put_Heigth_m1066803655 (PixelData_t619138477 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelData::put_Width(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PixelData_put_Width_m2441723029 (PixelData_t619138477 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelData::put_Pixel(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void PixelData_put_Pixel_m3323957101 (PixelData_t619138477 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.Int32 ZXing.Rendering.PixelData::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t PixelData_get_Width_m518351077 (PixelData_t619138477 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Rendering.PixelData::get_Heigth()
extern "C" IL2CPP_METHOD_ATTR int32_t PixelData_get_Heigth_m3852989936 (PixelData_t619138477 * __this, const RuntimeMethod* method);
// System.Void Windows.UI.Xaml.Media.Imaging.WriteableBitmap::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WriteableBitmap__ctor_m2874719745 (WriteableBitmap_t4235865023 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer Windows.UI.Xaml.Media.Imaging.WriteableBitmap::get_PixelBuffer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* WriteableBitmap_get_PixelBuffer_m2731379386 (WriteableBitmap_t4235865023 * __this, const RuntimeMethod* method);
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * WindowsRuntimeBufferExtensions_AsStream_m2594335144 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Byte[] ZXing.Rendering.PixelData::get_Pixel()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* PixelData_get_Pixel_m866160207 (PixelData_t619138477 * __this, const RuntimeMethod* method);
// System.Void Windows.UI.Xaml.Media.Imaging.WriteableBitmap::Invalidate()
extern "C" IL2CPP_METHOD_ATTR void WriteableBitmap_Invalidate_m2043426389 (WriteableBitmap_t4235865023 * __this, const RuntimeMethod* method);
// Windows.UI.Color Windows.UI.Colors::get_Black()
extern "C" IL2CPP_METHOD_ATTR Color_t455321150  Colors_get_Black_m3792740446 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelDataRenderer::put_Foreground(Windows.UI.Color)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_Foreground_m3284587762 (PixelDataRenderer_t163934832 * __this, Color_t455321150  ___value0, const RuntimeMethod* method);
// Windows.UI.Color Windows.UI.Colors::get_White()
extern "C" IL2CPP_METHOD_ATTR Color_t455321150  Colors_get_White_m409860529 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelDataRenderer::put_Background(Windows.UI.Color)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_Background_m2951291109 (PixelDataRenderer_t163934832 * __this, Color_t455321150  ___value0, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelDataRenderer::put_FontFamily(Windows.UI.Xaml.Media.FontFamily)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_FontFamily_m2669586123 (PixelDataRenderer_t163934832 * __this, FontFamily_t3809835137 * ___value0, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelDataRenderer::put_FontSize(System.Double)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_FontSize_m545556506 (PixelDataRenderer_t163934832 * __this, double ___value0, const RuntimeMethod* method);
// ZXing.Rendering.PixelData ZXing.Rendering.PixelDataRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
extern "C" IL2CPP_METHOD_ATTR PixelData_t619138477 * PixelDataRenderer_Render_m791243673 (PixelDataRenderer_t163934832 * __this, BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, String_t* ___content2, EncodingOptions_t288987117 * ___options3, const RuntimeMethod* method);
// System.Boolean ZXing.Common.EncodingOptions::get_PureBarcode()
extern "C" IL2CPP_METHOD_ATTR bool EncodingOptions_get_PureBarcode_m3929270868 (EncodingOptions_t288987117 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.EncodingOptions::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t EncodingOptions_get_Width_m2239302375 (EncodingOptions_t288987117 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.EncodingOptions::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t EncodingOptions_get_Height_m1114802633 (EncodingOptions_t288987117 * __this, const RuntimeMethod* method);
// Windows.UI.Color ZXing.Rendering.PixelDataRenderer::get_Background()
extern "C" IL2CPP_METHOD_ATTR Color_t455321150  PixelDataRenderer_get_Background_m3055912720 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method);
// Windows.UI.Color ZXing.Rendering.PixelDataRenderer::get_Foreground()
extern "C" IL2CPP_METHOD_ATTR Color_t455321150  PixelDataRenderer_get_Foreground_m3858031009 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method);
// System.Byte Windows.UI.Color::get_B()
extern "C" IL2CPP_METHOD_ATTR uint8_t Color_get_B_m2583298325 (Color_t455321150 * __this, const RuntimeMethod* method);
// System.Byte Windows.UI.Color::get_G()
extern "C" IL2CPP_METHOD_ATTR uint8_t Color_get_G_m2583298328 (Color_t455321150 * __this, const RuntimeMethod* method);
// System.Byte Windows.UI.Color::get_R()
extern "C" IL2CPP_METHOD_ATTR uint8_t Color_get_R_m2583298309 (Color_t455321150 * __this, const RuntimeMethod* method);
// System.Byte Windows.UI.Color::get_A()
extern "C" IL2CPP_METHOD_ATTR uint8_t Color_get_A_m2583298326 (Color_t455321150 * __this, const RuntimeMethod* method);
// System.Void ZXing.Rendering.PixelData::.ctor(System.Int32,System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void PixelData__ctor_m3707272540 (PixelData_t619138477 * __this, int32_t ___width0, int32_t ___heigth1, ByteU5BU5D_t4116647657* ___pixel2, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m2674064399 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, int64_t ___timestamp4, const RuntimeMethod* method);
// System.Void ZXing.Result::put_Text(System.String)
extern "C" IL2CPP_METHOD_ATTR void Result_put_Text_m2446999827 (Result_t940650810 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::put_RawBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Result_put_RawBytes_m4023429989 (Result_t940650810 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::put_ResultPoints(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void Result_put_ResultPoints_m44493398 (Result_t940650810 * __this, ResultPointU5BU5D_t569055209* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::put_BarcodeFormat(ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result_put_BarcodeFormat_m816001088 (Result_t940650810 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::put_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Result_put_ResultMetadata_m2006161685 (Result_t940650810 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::put_Timestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result_put_Timestamp_m2575241685 (Result_t940650810 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m1040463511 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>::.ctor()
inline void Dictionary_2__ctor_m787323069 (Dictionary_2_t2380125725 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2380125725 *, const RuntimeMethod*))Dictionary_2__ctor_m787323069_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m1628704204 (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t482830596 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1628704204_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m4115895800 (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t482830596 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4115895800_gshared)(__this, method);
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
extern "C" IL2CPP_METHOD_ATTR ResultPointU5BU5D_t569055209* Result_get_ResultPoints_m3627826647 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.String ZXing.Result::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_get_Text_m2949802363 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.Byte[] ZXing.Result::get_RawBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Result_get_RawBytes_m308223286 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m692533364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentUICulture_m959203371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m4227532852 (StringBuilder_t * __this, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_distance_m3645129194 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pattern10, ResultPoint_t1473505336 * ___pattern21, const RuntimeMethod* method);
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m2627131603 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pointA0, ResultPoint_t1473505336 * ___pointB1, ResultPoint_t1473505336 * ___pointC2, const RuntimeMethod* method);
// System.Single ZXing.Common.Detector.MathUtils::distance(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float MathUtils_distance_m2055009390 (RuntimeObject * __this /* static, unused */, float ___aX0, float ___aY1, float ___bX2, float ___bY3, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m816310962 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1406832249 (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.Internal.Version/ECB::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ECB__ctor_m4118142840 (ECB_t144347634 * __this, int32_t ___count0, int32_t ___dataCodewords1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		__this->set_count_0(L_0);
		int32_t L_1 = ___dataCodewords1;
		__this->set_dataCodewords_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ECB_get_Count_m2776975345 (ECB_t144347634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_DataCodewords()
extern "C" IL2CPP_METHOD_ATTR int32_t ECB_get_DataCodewords_m2330952189 (ECB_t144347634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dataCodewords_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.QrCode.Internal.Version/ECB[])
extern "C" IL2CPP_METHOD_ATTR void ECBlocks__ctor_m1439209832 (ECBlocks_t2689482655 * __this, int32_t ___ecCodewordsPerBlock0, ECBU5BU5D_t719977991* ___ecBlocks1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewordsPerBlock0;
		__this->set_ecCodewordsPerBlock_0(L_0);
		ECBU5BU5D_t719977991* L_1 = ___ecBlocks1;
		__this->set_ecBlocks_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_ECCodewordsPerBlock()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_ECCodewordsPerBlock_m1342966053 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_m718354733 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ECB_t144347634 * V_1 = NULL;
	ECBU5BU5D_t719977991* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		ECBU5BU5D_t719977991* L_0 = __this->get_ecBlocks_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_001e;
	}

IL_000d:
	{
		ECBU5BU5D_t719977991* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ECB_t144347634 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		ECB_t144347634 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = ECB_get_Count_m2776975345(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_9 = V_3;
		ECBU5BU5D_t719977991* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_TotalECCodewords()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_TotalECCodewords_m2284668403 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		int32_t L_1 = ECBlocks_get_NumBlocks_m718354733(__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::getECBlocks()
extern "C" IL2CPP_METHOD_ATTR ECBU5BU5D_t719977991* ECBlocks_getECBlocks_m3475268168 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	{
		ECBU5BU5D_t719977991* L_0 = __this->get_ecBlocks_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::getDecoder()
extern "C" IL2CPP_METHOD_ATTR Decoder_t1927175606 * QRCodeReader_getDecoder_m456608319 (QRCodeReader_t3363387111 * __this, const RuntimeMethod* method)
{
	{
		Decoder_t1927175606 * L_0 = __this->get_decoder_1();
		return L_0;
	}
}
// ZXing.Result ZXing.QrCode.QRCodeReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR Result_t940650810 * QRCodeReader_decode_m2011586155 (QRCodeReader_t3363387111 * __this, BinaryBitmap_t3514195023 * ___image0, RuntimeObject* ___hints1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader_decode_m2011586155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DecoderResult_t4252639067 * V_0 = NULL;
	ResultPointU5BU5D_t569055209* V_1 = NULL;
	BitMatrix_t2873240750 * V_2 = NULL;
	DetectorResult_t2934418424 * V_3 = NULL;
	QRCodeDecoderMetaData_t3242363773 * V_4 = NULL;
	Result_t940650810 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		BinaryBitmap_t3514195023 * L_0 = ___image0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		BinaryBitmap_t3514195023 * L_1 = ___image0;
		NullCheck(L_1);
		BitMatrix_t2873240750 * L_2 = BinaryBitmap_get_BlackMatrix_m3451161154(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (Result_t940650810 *)NULL;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___hints1;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_4 = ___hints1;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_t3788232239_il2cpp_TypeInfo_var, L_4, 1);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		BinaryBitmap_t3514195023 * L_6 = ___image0;
		NullCheck(L_6);
		BitMatrix_t2873240750 * L_7 = BinaryBitmap_get_BlackMatrix_m3451161154(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_t3363387111_il2cpp_TypeInfo_var);
		BitMatrix_t2873240750 * L_8 = QRCodeReader_extractPureBits_m1638805205(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		BitMatrix_t2873240750 * L_9 = V_2;
		if (L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (Result_t940650810 *)NULL;
	}

IL_002a:
	{
		Decoder_t1927175606 * L_10 = __this->get_decoder_1();
		BitMatrix_t2873240750 * L_11 = V_2;
		RuntimeObject* L_12 = ___hints1;
		NullCheck(L_10);
		DecoderResult_t4252639067 * L_13 = Decoder_decode_m1435328704(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_t3363387111_il2cpp_TypeInfo_var);
		ResultPointU5BU5D_t569055209* L_14 = ((QRCodeReader_t3363387111_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeReader_t3363387111_il2cpp_TypeInfo_var))->get_NO_POINTS_0();
		V_1 = L_14;
		goto IL_0071;
	}

IL_0040:
	{
		BinaryBitmap_t3514195023 * L_15 = ___image0;
		NullCheck(L_15);
		BitMatrix_t2873240750 * L_16 = BinaryBitmap_get_BlackMatrix_m3451161154(L_15, /*hidden argument*/NULL);
		Detector_t1946199639 * L_17 = (Detector_t1946199639 *)il2cpp_codegen_object_new(Detector_t1946199639_il2cpp_TypeInfo_var);
		Detector__ctor_m1334970264(L_17, L_16, /*hidden argument*/NULL);
		RuntimeObject* L_18 = ___hints1;
		NullCheck(L_17);
		DetectorResult_t2934418424 * L_19 = VirtFuncInvoker1< DetectorResult_t2934418424 *, RuntimeObject* >::Invoke(5 /* ZXing.Common.DetectorResult ZXing.QrCode.Internal.Detector::detect(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>) */, L_17, L_18);
		V_3 = L_19;
		DetectorResult_t2934418424 * L_20 = V_3;
		if (L_20)
		{
			goto IL_0057;
		}
	}
	{
		return (Result_t940650810 *)NULL;
	}

IL_0057:
	{
		Decoder_t1927175606 * L_21 = __this->get_decoder_1();
		DetectorResult_t2934418424 * L_22 = V_3;
		NullCheck(L_22);
		BitMatrix_t2873240750 * L_23 = DetectorResult_get_Bits_m4189804177(L_22, /*hidden argument*/NULL);
		RuntimeObject* L_24 = ___hints1;
		NullCheck(L_21);
		DecoderResult_t4252639067 * L_25 = Decoder_decode_m1435328704(L_21, L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		DetectorResult_t2934418424 * L_26 = V_3;
		NullCheck(L_26);
		ResultPointU5BU5D_t569055209* L_27 = DetectorResult_get_Points_m1848339834(L_26, /*hidden argument*/NULL);
		V_1 = L_27;
	}

IL_0071:
	{
		DecoderResult_t4252639067 * L_28 = V_0;
		if (L_28)
		{
			goto IL_0076;
		}
	}
	{
		return (Result_t940650810 *)NULL;
	}

IL_0076:
	{
		DecoderResult_t4252639067 * L_29 = V_0;
		NullCheck(L_29);
		RuntimeObject * L_30 = DecoderResult_get_Other_m269939721(L_29, /*hidden argument*/NULL);
		V_4 = ((QRCodeDecoderMetaData_t3242363773 *)IsInstSealed((RuntimeObject*)L_30, QRCodeDecoderMetaData_t3242363773_il2cpp_TypeInfo_var));
		QRCodeDecoderMetaData_t3242363773 * L_31 = V_4;
		if (!L_31)
		{
			goto IL_008f;
		}
	}
	{
		QRCodeDecoderMetaData_t3242363773 * L_32 = V_4;
		ResultPointU5BU5D_t569055209* L_33 = V_1;
		NullCheck(L_32);
		QRCodeDecoderMetaData_applyMirroredCorrection_m2911832081(L_32, L_33, /*hidden argument*/NULL);
	}

IL_008f:
	{
		DecoderResult_t4252639067 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = DecoderResult_get_Text_m2697615970(L_34, /*hidden argument*/NULL);
		DecoderResult_t4252639067 * L_36 = V_0;
		NullCheck(L_36);
		ByteU5BU5D_t4116647657* L_37 = DecoderResult_get_RawBytes_m1556132229(L_36, /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_38 = V_1;
		Result_t940650810 * L_39 = (Result_t940650810 *)il2cpp_codegen_object_new(Result_t940650810_il2cpp_TypeInfo_var);
		Result__ctor_m95352135(L_39, L_35, L_37, L_38, ((int32_t)2048), /*hidden argument*/NULL);
		V_5 = L_39;
		DecoderResult_t4252639067 * L_40 = V_0;
		NullCheck(L_40);
		RuntimeObject* L_41 = DecoderResult_get_ByteSegments_m1871338528(L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		RuntimeObject* L_42 = V_6;
		if (!L_42)
		{
			goto IL_00be;
		}
	}
	{
		Result_t940650810 * L_43 = V_5;
		RuntimeObject* L_44 = V_6;
		NullCheck(L_43);
		Result_putMetadata_m2997266180(L_43, 2, L_44, /*hidden argument*/NULL);
	}

IL_00be:
	{
		DecoderResult_t4252639067 * L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46 = DecoderResult_get_ECLevel_m2757680265(L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		String_t* L_47 = V_7;
		if (!L_47)
		{
			goto IL_00d4;
		}
	}
	{
		Result_t940650810 * L_48 = V_5;
		String_t* L_49 = V_7;
		NullCheck(L_48);
		Result_putMetadata_m2997266180(L_48, 3, L_49, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		DecoderResult_t4252639067 * L_50 = V_0;
		NullCheck(L_50);
		bool L_51 = DecoderResult_get_StructuredAppend_m2238126092(L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0103;
		}
	}
	{
		Result_t940650810 * L_52 = V_5;
		DecoderResult_t4252639067 * L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = DecoderResult_get_StructuredAppendSequenceNumber_m1979357853(L_53, /*hidden argument*/NULL);
		int32_t L_55 = L_54;
		RuntimeObject * L_56 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_52);
		Result_putMetadata_m2997266180(L_52, 8, L_56, /*hidden argument*/NULL);
		Result_t940650810 * L_57 = V_5;
		DecoderResult_t4252639067 * L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59 = DecoderResult_get_StructuredAppendParity_m1411842703(L_58, /*hidden argument*/NULL);
		int32_t L_60 = L_59;
		RuntimeObject * L_61 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_57);
		Result_putMetadata_m2997266180(L_57, ((int32_t)9), L_61, /*hidden argument*/NULL);
	}

IL_0103:
	{
		Result_t940650810 * L_62 = V_5;
		return L_62;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::reset()
extern "C" IL2CPP_METHOD_ATTR void QRCodeReader_reset_m64534779 (QRCodeReader_t3363387111 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeReader_extractPureBits_m1638805205 (RuntimeObject * __this /* static, unused */, BitMatrix_t2873240750 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader_extractPureBits_m1638805205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	BitMatrix_t2873240750 * V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		BitMatrix_t2873240750 * L_0 = ___image0;
		NullCheck(L_0);
		Int32U5BU5D_t385246372* L_1 = BitMatrix_getTopLeftOnBit_m448340650(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t2873240750 * L_2 = ___image0;
		NullCheck(L_2);
		Int32U5BU5D_t385246372* L_3 = BitMatrix_getBottomRightOnBit_m854157020(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Int32U5BU5D_t385246372* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t385246372* L_5 = V_1;
		if (L_5)
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0016:
	{
		Int32U5BU5D_t385246372* L_6 = V_0;
		BitMatrix_t2873240750 * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_t3363387111_il2cpp_TypeInfo_var);
		bool L_8 = QRCodeReader_moduleSize_m3273018994(NULL /*static, unused*/, L_6, L_7, (float*)(&V_2), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0023;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0023:
	{
		Int32U5BU5D_t385246372* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t385246372* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = 1;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t385246372* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		Int32U5BU5D_t385246372* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		int32_t L_21 = V_5;
		int32_t L_22 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0043;
		}
	}

IL_0041:
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0043:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_4;
		int32_t L_31 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31))));
	}

IL_0057:
	{
		int32_t L_32 = V_6;
		int32_t L_33 = V_5;
		float L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		double L_35 = bankers_round((((double)((double)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)1)))))/(float)L_34))))));
		V_7 = (((int32_t)((int32_t)L_35)));
		int32_t L_36 = V_4;
		int32_t L_37 = V_3;
		float L_38 = V_2;
		double L_39 = bankers_round((((double)((double)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)), (int32_t)1)))))/(float)L_38))))));
		V_8 = (((int32_t)((int32_t)L_39)));
		int32_t L_40 = V_7;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_41 = V_8;
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			goto IL_0088;
		}
	}

IL_0086:
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0088:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_7;
		if ((((int32_t)L_42) == ((int32_t)L_43)))
		{
			goto IL_0090;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0090:
	{
		float L_44 = V_2;
		V_9 = (((int32_t)((int32_t)((float)((float)L_44/(float)(2.0f))))));
		int32_t L_45 = V_3;
		int32_t L_46 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
		int32_t L_47 = V_5;
		int32_t L_48 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		int32_t L_49 = V_5;
		int32_t L_50 = V_7;
		float L_51 = V_2;
		int32_t L_52 = V_6;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1))))), (float)L_51))))))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)1))));
		int32_t L_53 = V_10;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_9;
		if ((((int32_t)L_54) <= ((int32_t)L_55)))
		{
			goto IL_00c5;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_00c5:
	{
		int32_t L_56 = V_5;
		int32_t L_57 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)L_57));
	}

IL_00cc:
	{
		int32_t L_58 = V_3;
		int32_t L_59 = V_8;
		float L_60 = V_2;
		int32_t L_61 = V_4;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1))))), (float)L_60))))))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)1))));
		int32_t L_62 = V_11;
		if ((((int32_t)L_62) <= ((int32_t)0)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_63 = V_11;
		int32_t L_64 = V_9;
		if ((((int32_t)L_63) <= ((int32_t)L_64)))
		{
			goto IL_00ea;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_00ea:
	{
		int32_t L_65 = V_3;
		int32_t L_66 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66));
	}

IL_00ef:
	{
		int32_t L_67 = V_7;
		int32_t L_68 = V_8;
		BitMatrix_t2873240750 * L_69 = (BitMatrix_t2873240750 *)il2cpp_codegen_object_new(BitMatrix_t2873240750_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m1968282877(L_69, L_67, L_68, /*hidden argument*/NULL);
		V_12 = L_69;
		V_13 = 0;
		goto IL_013f;
	}

IL_00ff:
	{
		int32_t L_70 = V_3;
		int32_t L_71 = V_13;
		float L_72 = V_2;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)L_72)))))));
		V_15 = 0;
		goto IL_0133;
	}

IL_010e:
	{
		BitMatrix_t2873240750 * L_73 = ___image0;
		int32_t L_74 = V_5;
		int32_t L_75 = V_15;
		float L_76 = V_2;
		int32_t L_77 = V_14;
		NullCheck(L_73);
		bool L_78 = BitMatrix_get_Item_m2278467565(L_73, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_75))), (float)L_76))))))), L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_012d;
		}
	}
	{
		BitMatrix_t2873240750 * L_79 = V_12;
		int32_t L_80 = V_15;
		int32_t L_81 = V_13;
		NullCheck(L_79);
		BitMatrix_put_Item_m1437430290(L_79, L_80, L_81, (bool)1, /*hidden argument*/NULL);
	}

IL_012d:
	{
		int32_t L_82 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_0133:
	{
		int32_t L_83 = V_15;
		int32_t L_84 = V_7;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_85 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_013f:
	{
		int32_t L_86 = V_13;
		int32_t L_87 = V_8;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_00ff;
		}
	}
	{
		BitMatrix_t2873240750 * L_88 = V_12;
		return L_88;
	}
}
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool QRCodeReader_moduleSize_m3273018994 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___leftTopBlack0, BitMatrix_t2873240750 * ___image1, float* ___msize2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		BitMatrix_t2873240750 * L_0 = ___image1;
		NullCheck(L_0);
		int32_t L_1 = BitMatrix_get_Height_m443640565(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t2873240750 * L_2 = ___image1;
		NullCheck(L_2);
		int32_t L_3 = BitMatrix_get_Width_m1458139234(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Int32U5BU5D_t385246372* L_4 = ___leftTopBlack0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Int32U5BU5D_t385246372* L_7 = ___leftTopBlack0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		int32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		V_4 = (bool)1;
		V_5 = 0;
		goto IL_0043;
	}

IL_001e:
	{
		bool L_10 = V_4;
		BitMatrix_t2873240750 * L_11 = ___image1;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		bool L_14 = BitMatrix_get_Item_m2278467565(L_11, L_12, L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_15 = V_5;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		V_5 = L_16;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_004b;
		}
	}
	{
		bool L_17 = V_4;
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
	}

IL_003b:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001e;
		}
	}

IL_004b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_005c;
		}
	}

IL_0053:
	{
		float* L_28 = ___msize2;
		*((float*)L_28) = (float)(0.0f);
		return (bool)0;
	}

IL_005c:
	{
		float* L_29 = ___msize2;
		int32_t L_30 = V_2;
		Int32U5BU5D_t385246372* L_31 = ___leftTopBlack0;
		NullCheck(L_31);
		int32_t L_32 = 0;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		*((float*)L_29) = (float)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_33)))))/(float)(7.0f)));
		return (bool)1;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeReader__ctor_m378600991 (QRCodeReader_t3363387111 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader__ctor_m378600991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decoder_t1927175606 * L_0 = (Decoder_t1927175606 *)il2cpp_codegen_object_new(Decoder_t1927175606_il2cpp_TypeInfo_var);
		Decoder__ctor_m570344096(L_0, /*hidden argument*/NULL);
		__this->set_decoder_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::.cctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeReader__cctor_m924770295 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader__cctor_m924770295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResultPointU5BU5D_t569055209* L_0 = (ResultPointU5BU5D_t569055209*)SZArrayNew(ResultPointU5BU5D_t569055209_il2cpp_TypeInfo_var, (uint32_t)0);
		((QRCodeReader_t3363387111_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeReader_t3363387111_il2cpp_TypeInfo_var))->set_NO_POINTS_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_encode_m3504011550 (QRCodeWriter_t1467281458 * __this, String_t* ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___contents0;
		int32_t L_1 = ___format1;
		int32_t L_2 = ___width2;
		int32_t L_3 = ___height3;
		BitMatrix_t2873240750 * L_4 = QRCodeWriter_encode_m293161781(__this, L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_4;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_encode_m293161781 (QRCodeWriter_t1467281458 * __this, String_t* ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, RuntimeObject* ___hints4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeWriter_encode_m293161781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorCorrectionLevel_t2910789944 * V_0 = NULL;
	int32_t V_1 = 0;
	ErrorCorrectionLevel_t2910789944 * V_2 = NULL;
	Nullable_1_t378540539  V_3;
	memset(&V_3, 0, sizeof(V_3));
	QRCode_t4150242837 * V_4 = NULL;
	ObjectU5BU5D_t2843939325* V_5 = NULL;
	Nullable_1_t378540539  V_6;
	memset(&V_6, 0, sizeof(V_6));
	ErrorCorrectionLevel_t2910789944 * G_B11_0 = NULL;
	Nullable_1_t378540539  G_B16_0;
	memset(&G_B16_0, 0, sizeof(G_B16_0));
	{
		String_t* L_0 = ___contents0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1003240159, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, QRCodeWriter_encode_m293161781_RuntimeMethod_var);
	}

IL_0013:
	{
		int32_t L_3 = ___format1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = ___format1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(BarcodeFormat_t1017833927_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1669413489, L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, QRCodeWriter_encode_m293161781_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_9 = ___width2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = ___height3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}

IL_003a:
	{
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		V_5 = L_11;
		ObjectU5BU5D_t2843939325* L_12 = V_5;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral210055874);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral210055874);
		ObjectU5BU5D_t2843939325* L_13 = V_5;
		int32_t L_14 = ___width2;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = V_5;
		Il2CppChar L_18 = ((Il2CppChar)((int32_t)120));
		RuntimeObject * L_19 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = V_5;
		int32_t L_21 = ___height3;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = V_5;
		String_t* L_25 = String_Concat_m2971454694(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_26 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, QRCodeWriter_encode_m293161781_RuntimeMethod_var);
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var);
		ErrorCorrectionLevel_t2910789944 * L_27 = ErrorCorrectionLevel_get_L_m535283558(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_27;
		V_1 = 4;
		RuntimeObject* L_28 = ___hints4;
		if (!L_28)
		{
			goto IL_00de;
		}
	}
	{
		RuntimeObject* L_29 = ___hints4;
		NullCheck(L_29);
		bool L_30 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_29, 3);
		if (L_30)
		{
			goto IL_0091;
		}
	}
	{
		G_B11_0 = ((ErrorCorrectionLevel_t2910789944 *)(NULL));
		goto IL_009e;
	}

IL_0091:
	{
		RuntimeObject* L_31 = ___hints4;
		NullCheck(L_31);
		RuntimeObject * L_32 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::get_Item(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_31, 3);
		G_B11_0 = ((ErrorCorrectionLevel_t2910789944 *)CastclassSealed((RuntimeObject*)L_32, ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var));
	}

IL_009e:
	{
		V_2 = G_B11_0;
		ErrorCorrectionLevel_t2910789944 * L_33 = V_2;
		if (!L_33)
		{
			goto IL_00a4;
		}
	}
	{
		ErrorCorrectionLevel_t2910789944 * L_34 = V_2;
		V_0 = L_34;
	}

IL_00a4:
	{
		RuntimeObject* L_35 = ___hints4;
		NullCheck(L_35);
		bool L_36 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_35, 5);
		if (L_36)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_37 = V_6;
		G_B16_0 = L_37;
		goto IL_00cc;
	}

IL_00ba:
	{
		RuntimeObject* L_38 = ___hints4;
		NullCheck(L_38);
		RuntimeObject * L_39 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::get_Item(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_38, 5);
		Nullable_1_t378540539  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Nullable_1__ctor_m2962682148((&L_40), ((*(int32_t*)((int32_t*)UnBox(L_39, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m2962682148_RuntimeMethod_var);
		G_B16_0 = L_40;
	}

IL_00cc:
	{
		V_3 = G_B16_0;
		bool L_41 = Nullable_1_get_HasValue_m3898097692((Nullable_1_t378540539 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m3898097692_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_42 = Nullable_1_get_Value_m4080082266((Nullable_1_t378540539 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_m4080082266_RuntimeMethod_var);
		V_1 = L_42;
	}

IL_00de:
	{
		String_t* L_43 = ___contents0;
		ErrorCorrectionLevel_t2910789944 * L_44 = V_0;
		RuntimeObject* L_45 = ___hints4;
		IL2CPP_RUNTIME_CLASS_INIT(Encoder_t1190713841_il2cpp_TypeInfo_var);
		QRCode_t4150242837 * L_46 = Encoder_encode_m3744739426(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		QRCode_t4150242837 * L_47 = V_4;
		int32_t L_48 = ___width2;
		int32_t L_49 = ___height3;
		int32_t L_50 = V_1;
		BitMatrix_t2873240750 * L_51 = QRCodeWriter_renderResult_m3827833113(NULL /*static, unused*/, L_47, L_48, L_49, L_50, /*hidden argument*/NULL);
		return L_51;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::renderResult(ZXing.QrCode.Internal.QRCode,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_renderResult_m3827833113 (RuntimeObject * __this /* static, unused */, QRCode_t4150242837 * ___code0, int32_t ___width1, int32_t ___height2, int32_t ___quietZone3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeWriter_renderResult_m3827833113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteMatrix_t2868153292 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	BitMatrix_t2873240750 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		QRCode_t4150242837 * L_0 = ___code0;
		NullCheck(L_0);
		ByteMatrix_t2868153292 * L_1 = QRCode_get_Matrix_m1016202570(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteMatrix_t2868153292 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, QRCodeWriter_renderResult_m3827833113_RuntimeMethod_var);
	}

IL_0010:
	{
		ByteMatrix_t2868153292 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = ByteMatrix_get_Width_m3082606094(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteMatrix_t2868153292 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ByteMatrix_get_Height_m739555276(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___quietZone3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)L_9<<(int32_t)1))));
		int32_t L_10 = V_2;
		int32_t L_11 = ___quietZone3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11<<(int32_t)1))));
		int32_t L_12 = ___width1;
		int32_t L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_14 = Math_Max_m1873195862(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		int32_t L_15 = ___height2;
		int32_t L_16 = V_4;
		int32_t L_17 = Math_Max_m1873195862(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		int32_t L_18 = V_5;
		int32_t L_19 = V_3;
		int32_t L_20 = V_6;
		int32_t L_21 = V_4;
		int32_t L_22 = Math_Min_m3468062251(NULL /*static, unused*/, ((int32_t)((int32_t)L_18/(int32_t)L_19)), ((int32_t)((int32_t)L_20/(int32_t)L_21)), /*hidden argument*/NULL);
		V_7 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		int32_t L_25 = V_7;
		V_8 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_25))))/(int32_t)2));
		int32_t L_26 = V_6;
		int32_t L_27 = V_2;
		int32_t L_28 = V_7;
		V_9 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28))))/(int32_t)2));
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		BitMatrix_t2873240750 * L_31 = (BitMatrix_t2873240750 *)il2cpp_codegen_object_new(BitMatrix_t2873240750_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m1968282877(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		V_11 = 0;
		int32_t L_32 = V_9;
		V_12 = L_32;
		goto IL_00bc;
	}

IL_0078:
	{
		V_13 = 0;
		int32_t L_33 = V_8;
		V_14 = L_33;
		goto IL_00aa;
	}

IL_0081:
	{
		ByteMatrix_t2868153292 * L_34 = V_0;
		int32_t L_35 = V_13;
		int32_t L_36 = V_11;
		NullCheck(L_34);
		int32_t L_37 = ByteMatrix_get_Item_m4007001019(L_34, L_35, L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}
	{
		BitMatrix_t2873240750 * L_38 = V_10;
		int32_t L_39 = V_14;
		int32_t L_40 = V_12;
		int32_t L_41 = V_7;
		int32_t L_42 = V_7;
		NullCheck(L_38);
		BitMatrix_setRegion_m687586433(L_38, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_009d:
	{
		int32_t L_43 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_44 = V_14;
		int32_t L_45 = V_7;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45));
	}

IL_00aa:
	{
		int32_t L_46 = V_13;
		int32_t L_47 = V_1;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_48 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_12;
		int32_t L_50 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50));
	}

IL_00bc:
	{
		int32_t L_51 = V_11;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0078;
		}
	}
	{
		BitMatrix_t2873240750 * L_53 = V_10;
		return L_53;
	}
}
// System.Void ZXing.QrCode.QRCodeWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeWriter__ctor_m3312778843 (QRCodeWriter_t1467281458 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.QrCode.QRCodeWriter::Finalize()
extern "C" IL2CPP_METHOD_ATTR void QRCodeWriter_Finalize_m740458461 (QRCodeWriter_t1467281458 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void ZXing.QrCode.QRCodeWriter::Finalize()' has no implementation."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m1595216681 (RGBLuminanceSource_t91581829 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		BaseLuminanceSource__ctor_m3969803434(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,ZXing.BitmapFormat)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m1386662133 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, int32_t ___bitmapFormat3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		BaseLuminanceSource__ctor_m3969803434(__this, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = ___rgbRawBytes0;
		int32_t L_3 = ___bitmapFormat3;
		RGBLuminanceSource_CalculateLuminance_m2874680238(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// ZXing.LuminanceSource ZXing.RGBLuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR LuminanceSource_t3713829503 * RGBLuminanceSource_CreateLuminanceSource_m3516503597 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___newLuminances0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_CreateLuminanceSource_m3516503597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RGBLuminanceSource_t91581829 * V_0 = NULL;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		RGBLuminanceSource_t91581829 * L_2 = (RGBLuminanceSource_t91581829 *)il2cpp_codegen_object_new(RGBLuminanceSource_t91581829_il2cpp_TypeInfo_var);
		RGBLuminanceSource__ctor_m1595216681(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RGBLuminanceSource_t91581829 * L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = ___newLuminances0;
		NullCheck(L_3);
		((BaseLuminanceSource_t3215128144 *)L_3)->set_luminances_2(L_4);
		RGBLuminanceSource_t91581829 * L_5 = V_0;
		return L_5;
	}
}
// ZXing.BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m3960214113 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_DetermineBitmapFormat_m3960214113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
		ByteU5BU5D_t4116647657* L_2 = ___rgbRawBytes0;
		NullCheck(L_2);
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))/(int32_t)L_3));
		int32_t L_4 = V_1;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_002e;
	}

IL_0026:
	{
		return (int32_t)(1);
	}

IL_0028:
	{
		return (int32_t)(8);
	}

IL_002a:
	{
		return (int32_t)(2);
	}

IL_002c:
	{
		return (int32_t)(3);
	}

IL_002e:
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral404267128, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, RGBLuminanceSource_DetermineBitmapFormat_m3960214113_RuntimeMethod_var);
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.BitmapFormat)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m2874680238 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___bitmapFormat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_CalculateLuminance_m2874680238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	ByteU5BU5D_t4116647657* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	ByteU5BU5D_t4116647657* G_B6_3 = NULL;
	int32_t G_B5_0 = 0;
	ByteU5BU5D_t4116647657* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	ByteU5BU5D_t4116647657* G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	ByteU5BU5D_t4116647657* G_B7_2 = NULL;
	int32_t G_B7_3 = 0;
	ByteU5BU5D_t4116647657* G_B7_4 = NULL;
	{
		int32_t L_0 = ___bitmapFormat1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___rgbRawBytes0;
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 ZXing.LuminanceSource::get_Width() */, __this);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 ZXing.LuminanceSource::get_Height() */, __this);
		int32_t L_4 = RGBLuminanceSource_DetermineBitmapFormat_m3960214113(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		___bitmapFormat1 = L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___bitmapFormat1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_0098;
			}
			case 4:
			{
				goto IL_0078;
			}
			case 5:
			{
				goto IL_0088;
			}
			case 6:
			{
				goto IL_00a0;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0090;
			}
		}
	}
	{
		goto IL_00b0;
	}

IL_0047:
	{
		ByteU5BU5D_t4116647657* L_7 = ___rgbRawBytes0;
		ByteU5BU5D_t4116647657* L_8 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		ByteU5BU5D_t4116647657* L_9 = ___rgbRawBytes0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_10);
		G_B5_0 = 0;
		G_B5_1 = L_8;
		G_B5_2 = 0;
		G_B5_3 = L_7;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			G_B6_0 = 0;
			G_B6_1 = L_8;
			G_B6_2 = 0;
			G_B6_3 = L_7;
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_11);
		G_B7_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_006a;
	}

IL_0067:
	{
		ByteU5BU5D_t4116647657* L_12 = ___rgbRawBytes0;
		NullCheck(L_12);
		G_B7_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_006a:
	{
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)G_B7_4, G_B7_3, (RuntimeArray *)(RuntimeArray *)G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		return;
	}

IL_0070:
	{
		ByteU5BU5D_t4116647657* L_13 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB24_m1315598610(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		ByteU5BU5D_t4116647657* L_14 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGR24_m2603599186(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB32_m1124159396(__this, L_15, /*hidden argument*/NULL);
		return;
	}

IL_0088:
	{
		ByteU5BU5D_t4116647657* L_16 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGR32_m3554397092(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_0090:
	{
		ByteU5BU5D_t4116647657* L_17 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGBA32_m3332001761(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		ByteU5BU5D_t4116647657* L_18 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceARGB32_m3473742514(__this, L_18, /*hidden argument*/NULL);
		return;
	}

IL_00a0:
	{
		ByteU5BU5D_t4116647657* L_19 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGRA32_m1927994209(__this, L_19, /*hidden argument*/NULL);
		return;
	}

IL_00a8:
	{
		ByteU5BU5D_t4116647657* L_20 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB565_m2271742964(__this, L_20, /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		int32_t L_21 = ___bitmapFormat1;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(BitmapFormat_t1949044204_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		ArgumentException_t132251570 * L_25 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_25, _stringLiteral2975982805, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, RGBLuminanceSource_CalculateLuminance_m2874680238_RuntimeMethod_var);
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_m2271742964 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgb565RawData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgb565RawData0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		ByteU5BU5D_t4116647657* L_4 = ___rgb565RawData0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		uint8_t L_8 = V_2;
		V_4 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)));
		uint8_t L_9 = V_2;
		uint8_t L_10 = V_3;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)224)))>>(int32_t)5))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10&(int32_t)3))<<(int32_t)3))))&(int32_t)((int32_t)31)));
		uint8_t L_11 = V_3;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)2))&(int32_t)((int32_t)31)));
		int32_t L_12 = V_6;
		V_7 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		int32_t L_13 = V_5;
		V_8 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		int32_t L_14 = V_4;
		V_9 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		ByteU5BU5D_t4116647657* L_15 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_16 = V_0;
		int32_t L_17 = V_7;
		int32_t L_18 = V_8;
		int32_t L_19 = V_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_t4116647657* L_23 = ___rgb565RawData0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_24 = V_0;
		ByteU5BU5D_t4116647657* L_25 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0009;
		}
	}

IL_00a4:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_m1315598610 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0047;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_t4116647657* L_22 = ___rgbRawBytes0;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_t4116647657* L_24 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_m2603599186 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0047;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_t4116647657* L_22 = ___rgbRawBytes0;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_t4116647657* L_24 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m1124159396 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		ByteU5BU5D_t4116647657* L_16 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_18)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_19)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_20))))>>(int32_t)((int32_t)16)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = ___rgbRawBytes0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_t4116647657* L_25 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m3554397092 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		ByteU5BU5D_t4116647657* L_16 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_17 = V_1;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_18)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_19)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_20))))>>(int32_t)((int32_t)16)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = ___rgbRawBytes0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_t4116647657* L_25 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_m1927994209 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_4;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_2;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_23 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_t4116647657* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_t4116647657* L_32 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_m3332001761 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_2;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_4;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_23 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_t4116647657* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_t4116647657* L_32 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_m3473742514 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006a;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_3;
		uint8_t L_21 = V_4;
		uint8_t L_22 = V_5;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_23 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_2;
		uint8_t L_27 = V_2;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006a:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_t4116647657* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_t4116647657* L_32 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.ReaderException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReaderException__ctor_m3886147231 (ReaderException_t3787909692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReaderException__ctor_m3886147231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.ReaderException::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ReaderException__cctor_m2852144789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReaderException__cctor_m2852144789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReaderException_t3787909692 * L_0 = (ReaderException_t3787909692 *)il2cpp_codegen_object_new(ReaderException_t3787909692_il2cpp_TypeInfo_var);
		ReaderException__ctor_m3886147231(L_0, /*hidden argument*/NULL);
		((ReaderException_t3787909692_StaticFields*)il2cpp_codegen_static_fields_for(ReaderException_t3787909692_il2cpp_TypeInfo_var))->set_instance_17(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.Rendering.IBarcodeRenderer
const Il2CppGuid IBarcodeRenderer_t3198017015::IID = { 0x8aea58d1, 0x3f5e, 0x559f, 0x43, 0x8e, 0x53, 0x1, 0xef, 0xa0, 0x64, 0x6a };
// ZXing.Rendering.PixelData ZXing.Rendering.IBarcodeRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String)
extern "C" IL2CPP_METHOD_ATTR PixelData_t619138477 * IBarcodeRenderer_Render_m3848897652 (RuntimeObject* __this, BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, String_t* ___content2, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'ZXing.Common.BitMatrix'."), NULL, NULL);
}
// ZXing.Rendering.PixelData ZXing.Rendering.IBarcodeRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
extern "C" IL2CPP_METHOD_ATTR PixelData_t619138477 * IBarcodeRenderer_Render_m2512804034 (RuntimeObject* __this, BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, String_t* ___content2, EncodingOptions_t288987117 * ___options3, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'ZXing.Common.BitMatrix'."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.Rendering.IPixelDataClass
const Il2CppGuid IPixelDataClass_t286966874::IID = { 0xb46e76fc, 0xea77, 0x534d, 0x75, 0xd0, 0xee, 0x41, 0x19, 0x19, 0x27, 0x7d };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.Rendering.IPixelDataRendererClass
const Il2CppGuid IPixelDataRendererClass_t3414219393::IID = { 0xb6bcbbc6, 0xfe45, 0x5350, 0x47, 0x19, 0xb3, 0xfa, 0xa3, 0xa3, 0xa2, 0x9c };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Rendering.PixelData::.ctor(System.Int32,System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void PixelData__ctor_m3707272540 (PixelData_t619138477 * __this, int32_t ___width0, int32_t ___heigth1, ByteU5BU5D_t4116647657* ___pixel2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___heigth1;
		PixelData_put_Heigth_m1066803655(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___width0;
		PixelData_put_Width_m2441723029(__this, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = ___pixel2;
		PixelData_put_Pixel_m3323957101(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] ZXing.Rendering.PixelData::get_Pixel()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* PixelData_get_Pixel_m866160207 (PixelData_t619138477 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_U3CPixelU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelData::put_Pixel(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void PixelData_put_Pixel_m3323957101 (PixelData_t619138477 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3CPixelU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 ZXing.Rendering.PixelData::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t PixelData_get_Width_m518351077 (PixelData_t619138477 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelData::put_Width(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PixelData_put_Width_m2441723029 (PixelData_t619138477 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 ZXing.Rendering.PixelData::get_Heigth()
extern "C" IL2CPP_METHOD_ATTR int32_t PixelData_get_Heigth_m3852989936 (PixelData_t619138477 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CHeigthU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelData::put_Heigth(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PixelData_put_Heigth_m1066803655 (PixelData_t619138477 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHeigthU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Object ZXing.Rendering.PixelData::ToBitmap()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * PixelData_ToBitmap_m1486987577 (PixelData_t619138477 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PixelData_ToBitmap_m1486987577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WriteableBitmap_t4235865023 * V_0 = NULL;
	Stream_t1273022909 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = PixelData_get_Width_m518351077(__this, /*hidden argument*/NULL);
		int32_t L_1 = PixelData_get_Heigth_m3852989936(__this, /*hidden argument*/NULL);
		WriteableBitmap_t4235865023 * L_2 = (WriteableBitmap_t4235865023 *)il2cpp_codegen_object_new(WriteableBitmap_t4235865023_il2cpp_TypeInfo_var);
		WriteableBitmap__ctor_m2874719745(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		WriteableBitmap_t4235865023 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = WriteableBitmap_get_PixelBuffer_m2731379386(L_3, /*hidden argument*/NULL);
		Stream_t1273022909 * L_5 = WindowsRuntimeBufferExtensions_AsStream_m2594335144(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Stream_t1273022909 * L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = PixelData_get_Pixel_m866160207(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = PixelData_get_Pixel_m866160207(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		NullCheck(L_6);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(29 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))));
		IL2CPP_LEAVE(0x3F, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		{
			Stream_t1273022909 * L_9 = V_1;
			if (!L_9)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			Stream_t1273022909 * L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(53)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		WriteableBitmap_t4235865023 * L_11 = V_0;
		NullCheck(L_11);
		WriteableBitmap_Invalidate_m2043426389(L_11, /*hidden argument*/NULL);
		WriteableBitmap_t4235865023 * L_12 = V_0;
		return L_12;
	}
}
// System.Void ZXing.Rendering.PixelData::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PixelData_Finalize_m3514358349 (PixelData_t619138477 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void ZXing.Rendering.PixelData::Finalize()' has no implementation."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Color ZXing.Rendering.PixelDataRenderer::get_Foreground()
extern "C" IL2CPP_METHOD_ATTR Color_t455321150  PixelDataRenderer_get_Foreground_m3858031009 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method)
{
	{
		Color_t455321150  L_0 = __this->get_U3CForegroundU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::put_Foreground(Windows.UI.Color)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_Foreground_m3284587762 (PixelDataRenderer_t163934832 * __this, Color_t455321150  ___value0, const RuntimeMethod* method)
{
	{
		Color_t455321150  L_0 = ___value0;
		__this->set_U3CForegroundU3Ek__BackingField_1(L_0);
		return;
	}
}
// Windows.UI.Color ZXing.Rendering.PixelDataRenderer::get_Background()
extern "C" IL2CPP_METHOD_ATTR Color_t455321150  PixelDataRenderer_get_Background_m3055912720 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method)
{
	{
		Color_t455321150  L_0 = __this->get_U3CBackgroundU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::put_Background(Windows.UI.Color)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_Background_m2951291109 (PixelDataRenderer_t163934832 * __this, Color_t455321150  ___value0, const RuntimeMethod* method)
{
	{
		Color_t455321150  L_0 = ___value0;
		__this->set_U3CBackgroundU3Ek__BackingField_2(L_0);
		return;
	}
}
// Windows.UI.Xaml.Media.FontFamily ZXing.Rendering.PixelDataRenderer::get_FontFamily()
extern "C" IL2CPP_METHOD_ATTR FontFamily_t3809835137 * PixelDataRenderer_get_FontFamily_m336395954 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method)
{
	{
		FontFamily_t3809835137 * L_0 = __this->get_U3CFontFamilyU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::put_FontFamily(Windows.UI.Xaml.Media.FontFamily)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_FontFamily_m2669586123 (PixelDataRenderer_t163934832 * __this, FontFamily_t3809835137 * ___value0, const RuntimeMethod* method)
{
	{
		FontFamily_t3809835137 * L_0 = ___value0;
		__this->set_U3CFontFamilyU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Double ZXing.Rendering.PixelDataRenderer::get_FontSize()
extern "C" IL2CPP_METHOD_ATTR double PixelDataRenderer_get_FontSize_m3021631190 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CFontSizeU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::put_FontSize(System.Double)
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_put_FontSize_m545556506 (PixelDataRenderer_t163934832 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CFontSizeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer__ctor_m3438459401 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PixelDataRenderer__ctor_m3438459401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Color_t455321150  L_0 = Colors_get_Black_m3792740446(NULL /*static, unused*/, /*hidden argument*/NULL);
		PixelDataRenderer_put_Foreground_m3284587762(__this, L_0, /*hidden argument*/NULL);
		Color_t455321150  L_1 = Colors_get_White_m409860529(NULL /*static, unused*/, /*hidden argument*/NULL);
		PixelDataRenderer_put_Background_m2951291109(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PixelDataRenderer_t163934832_il2cpp_TypeInfo_var);
		FontFamily_t3809835137 * L_2 = ((PixelDataRenderer_t163934832_StaticFields*)il2cpp_codegen_static_fields_for(PixelDataRenderer_t163934832_il2cpp_TypeInfo_var))->get_DefaultFontFamily_0();
		PixelDataRenderer_put_FontFamily_m2669586123(__this, L_2, /*hidden argument*/NULL);
		PixelDataRenderer_put_FontSize_m545556506(__this, (10.0), /*hidden argument*/NULL);
		return;
	}
}
// ZXing.Rendering.PixelData ZXing.Rendering.PixelDataRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String)
extern "C" IL2CPP_METHOD_ATTR PixelData_t619138477 * PixelDataRenderer_Render_m475036374 (PixelDataRenderer_t163934832 * __this, BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, String_t* ___content2, const RuntimeMethod* method)
{
	{
		BitMatrix_t2873240750 * L_0 = ___matrix0;
		int32_t L_1 = ___format1;
		String_t* L_2 = ___content2;
		PixelData_t619138477 * L_3 = PixelDataRenderer_Render_m791243673(__this, L_0, L_1, L_2, (EncodingOptions_t288987117 *)NULL, /*hidden argument*/NULL);
		return L_3;
	}
}
// ZXing.Rendering.PixelData ZXing.Rendering.PixelDataRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
extern "C" IL2CPP_METHOD_ATTR PixelData_t619138477 * PixelDataRenderer_Render_m791243673 (PixelDataRenderer_t163934832 * __this, BitMatrix_t2873240750 * ___matrix0, int32_t ___format1, String_t* ___content2, EncodingOptions_t288987117 * ___options3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PixelDataRenderer_Render_m791243673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Color_t455321150  V_10;
	memset(&V_10, 0, sizeof(V_10));
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Color_t455321150  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Color_t455321150  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Color_t455321150  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Color_t455321150  V_18;
	memset(&V_18, 0, sizeof(V_18));
	Color_t455321150  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Color_t455321150  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Color_t455321150  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Color_t455321150  V_22;
	memset(&V_22, 0, sizeof(V_22));
	int32_t G_B14_0 = 0;
	int32_t G_B17_0 = 0;
	Color_t455321150  G_B30_0;
	memset(&G_B30_0, 0, sizeof(G_B30_0));
	{
		BitMatrix_t2873240750 * L_0 = ___matrix0;
		NullCheck(L_0);
		int32_t L_1 = BitMatrix_get_Width_m1458139234(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t2873240750 * L_2 = ___matrix0;
		NullCheck(L_2);
		int32_t L_3 = BitMatrix_get_Height_m443640565(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		EncodingOptions_t288987117 * L_4 = ___options3;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		EncodingOptions_t288987117 * L_5 = ___options3;
		NullCheck(L_5);
		bool L_6 = EncodingOptions_get_PureBarcode_m3929270868(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0062;
		}
	}

IL_001b:
	{
		String_t* L_7 = ___content2;
		bool L_8 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_9 = ___format1;
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = ___format1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = ___format1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)128))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12 = ___format1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)64))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___format1;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_14 = ___format1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)256))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___format1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)16384))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = ___format1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)131072))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_17 = ___format1;
		G_B14_0 = ((((int32_t)L_17) == ((int32_t)((int32_t)262144)))? 1 : 0);
		goto IL_0063;
	}

IL_005f:
	{
		G_B14_0 = 1;
		goto IL_0063;
	}

IL_0062:
	{
		G_B14_0 = 0;
	}

IL_0063:
	{
		V_2 = (bool)G_B14_0;
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_006a;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_006c;
	}

IL_006a:
	{
		G_B17_0 = ((int32_t)16);
	}

IL_006c:
	{
		V_3 = G_B17_0;
		V_4 = 1;
		EncodingOptions_t288987117 * L_19 = ___options3;
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		EncodingOptions_t288987117 * L_20 = ___options3;
		NullCheck(L_20);
		int32_t L_21 = EncodingOptions_get_Width_m2239302375(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_0086;
		}
	}
	{
		EncodingOptions_t288987117 * L_23 = ___options3;
		NullCheck(L_23);
		int32_t L_24 = EncodingOptions_get_Width_m2239302375(L_23, /*hidden argument*/NULL);
		V_0 = L_24;
	}

IL_0086:
	{
		EncodingOptions_t288987117 * L_25 = ___options3;
		NullCheck(L_25);
		int32_t L_26 = EncodingOptions_get_Height_m1114802633(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_0098;
		}
	}
	{
		EncodingOptions_t288987117 * L_28 = ___options3;
		NullCheck(L_28);
		int32_t L_29 = EncodingOptions_get_Height_m1114802633(L_28, /*hidden argument*/NULL);
		V_1 = L_29;
	}

IL_0098:
	{
		int32_t L_30 = V_0;
		BitMatrix_t2873240750 * L_31 = ___matrix0;
		NullCheck(L_31);
		int32_t L_32 = BitMatrix_get_Width_m1458139234(L_31, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_30/(int32_t)L_32));
		int32_t L_33 = V_4;
		int32_t L_34 = V_1;
		BitMatrix_t2873240750 * L_35 = ___matrix0;
		NullCheck(L_35);
		int32_t L_36 = BitMatrix_get_Height_m443640565(L_35, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)((int32_t)L_34/(int32_t)L_36)))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_37 = V_1;
		BitMatrix_t2873240750 * L_38 = ___matrix0;
		NullCheck(L_38);
		int32_t L_39 = BitMatrix_get_Height_m443640565(L_38, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)L_37/(int32_t)L_39));
	}

IL_00b8:
	{
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		ByteU5BU5D_t4116647657* L_42 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)L_41)), (int32_t)4)));
		V_5 = L_42;
		V_6 = 0;
		V_7 = 0;
		goto IL_01f1;
	}

IL_00cf:
	{
		V_8 = 0;
		goto IL_01e2;
	}

IL_00d7:
	{
		V_9 = 0;
		goto IL_0153;
	}

IL_00dc:
	{
		BitMatrix_t2873240750 * L_43 = ___matrix0;
		int32_t L_44 = V_9;
		int32_t L_45 = V_7;
		NullCheck(L_43);
		bool L_46 = BitMatrix_get_Item_m2278467565(L_43, L_44, L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_00f0;
		}
	}
	{
		Color_t455321150  L_47 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		G_B30_0 = L_47;
		goto IL_00f6;
	}

IL_00f0:
	{
		Color_t455321150  L_48 = PixelDataRenderer_get_Foreground_m3858031009(__this, /*hidden argument*/NULL);
		G_B30_0 = L_48;
	}

IL_00f6:
	{
		V_10 = G_B30_0;
		V_11 = 0;
		goto IL_0147;
	}

IL_00fd:
	{
		ByteU5BU5D_t4116647657* L_49 = V_5;
		int32_t L_50 = V_6;
		int32_t L_51 = L_50;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		uint8_t L_52 = Color_get_B_m2583298325((Color_t455321150 *)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)L_52);
		ByteU5BU5D_t4116647657* L_53 = V_5;
		int32_t L_54 = V_6;
		int32_t L_55 = L_54;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		uint8_t L_56 = Color_get_G_m2583298328((Color_t455321150 *)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)L_56);
		ByteU5BU5D_t4116647657* L_57 = V_5;
		int32_t L_58 = V_6;
		int32_t L_59 = L_58;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		uint8_t L_60 = Color_get_R_m2583298309((Color_t455321150 *)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (uint8_t)L_60);
		ByteU5BU5D_t4116647657* L_61 = V_5;
		int32_t L_62 = V_6;
		int32_t L_63 = L_62;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		uint8_t L_64 = Color_get_A_m2583298326((Color_t455321150 *)(&V_10), /*hidden argument*/NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint8_t)L_64);
		int32_t L_65 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0147:
	{
		int32_t L_66 = V_11;
		int32_t L_67 = V_4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_68 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_0153:
	{
		int32_t L_69 = V_9;
		BitMatrix_t2873240750 * L_70 = ___matrix0;
		NullCheck(L_70);
		int32_t L_71 = BitMatrix_get_Width_m1458139234(L_70, /*hidden argument*/NULL);
		if ((((int32_t)L_69) < ((int32_t)L_71)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_72 = V_4;
		BitMatrix_t2873240750 * L_73 = ___matrix0;
		NullCheck(L_73);
		int32_t L_74 = BitMatrix_get_Width_m1458139234(L_73, /*hidden argument*/NULL);
		V_12 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_72, (int32_t)L_74));
		goto IL_01d7;
	}

IL_016d:
	{
		ByteU5BU5D_t4116647657* L_75 = V_5;
		int32_t L_76 = V_6;
		int32_t L_77 = L_76;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		Color_t455321150  L_78 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_15 = L_78;
		uint8_t L_79 = Color_get_B_m2583298325((Color_t455321150 *)(&V_15), /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_77), (uint8_t)L_79);
		ByteU5BU5D_t4116647657* L_80 = V_5;
		int32_t L_81 = V_6;
		int32_t L_82 = L_81;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		Color_t455321150  L_83 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_16 = L_83;
		uint8_t L_84 = Color_get_G_m2583298328((Color_t455321150 *)(&V_16), /*hidden argument*/NULL);
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)L_84);
		ByteU5BU5D_t4116647657* L_85 = V_5;
		int32_t L_86 = V_6;
		int32_t L_87 = L_86;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
		Color_t455321150  L_88 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_17 = L_88;
		uint8_t L_89 = Color_get_R_m2583298309((Color_t455321150 *)(&V_17), /*hidden argument*/NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (uint8_t)L_89);
		ByteU5BU5D_t4116647657* L_90 = V_5;
		int32_t L_91 = V_6;
		int32_t L_92 = L_91;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		Color_t455321150  L_93 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_18 = L_93;
		uint8_t L_94 = Color_get_A_m2583298326((Color_t455321150 *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_92), (uint8_t)L_94);
		int32_t L_95 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1));
	}

IL_01d7:
	{
		int32_t L_96 = V_12;
		int32_t L_97 = V_0;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_98 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_01e2:
	{
		int32_t L_99 = V_8;
		int32_t L_100 = V_4;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_101 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
	}

IL_01f1:
	{
		int32_t L_102 = V_7;
		BitMatrix_t2873240750 * L_103 = ___matrix0;
		NullCheck(L_103);
		int32_t L_104 = BitMatrix_get_Height_m443640565(L_103, /*hidden argument*/NULL);
		int32_t L_105 = V_3;
		if ((((int32_t)L_102) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)L_105)))))
		{
			goto IL_00cf;
		}
	}
	{
		BitMatrix_t2873240750 * L_106 = ___matrix0;
		NullCheck(L_106);
		int32_t L_107 = BitMatrix_get_Height_m443640565(L_106, /*hidden argument*/NULL);
		int32_t L_108 = V_4;
		int32_t L_109 = V_3;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_107, (int32_t)L_108)), (int32_t)L_109));
		goto IL_0289;
	}

IL_020f:
	{
		V_14 = 0;
		goto IL_027e;
	}

IL_0214:
	{
		ByteU5BU5D_t4116647657* L_110 = V_5;
		int32_t L_111 = V_6;
		int32_t L_112 = L_111;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		Color_t455321150  L_113 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_19 = L_113;
		uint8_t L_114 = Color_get_B_m2583298325((Color_t455321150 *)(&V_19), /*hidden argument*/NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)L_114);
		ByteU5BU5D_t4116647657* L_115 = V_5;
		int32_t L_116 = V_6;
		int32_t L_117 = L_116;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		Color_t455321150  L_118 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_20 = L_118;
		uint8_t L_119 = Color_get_G_m2583298328((Color_t455321150 *)(&V_20), /*hidden argument*/NULL);
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (uint8_t)L_119);
		ByteU5BU5D_t4116647657* L_120 = V_5;
		int32_t L_121 = V_6;
		int32_t L_122 = L_121;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
		Color_t455321150  L_123 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_21 = L_123;
		uint8_t L_124 = Color_get_R_m2583298309((Color_t455321150 *)(&V_21), /*hidden argument*/NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (uint8_t)L_124);
		ByteU5BU5D_t4116647657* L_125 = V_5;
		int32_t L_126 = V_6;
		int32_t L_127 = L_126;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
		Color_t455321150  L_128 = PixelDataRenderer_get_Background_m3055912720(__this, /*hidden argument*/NULL);
		V_22 = L_128;
		uint8_t L_129 = Color_get_A_m2583298326((Color_t455321150 *)(&V_22), /*hidden argument*/NULL);
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (uint8_t)L_129);
		int32_t L_130 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
	}

IL_027e:
	{
		int32_t L_131 = V_14;
		int32_t L_132 = V_0;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_0214;
		}
	}
	{
		int32_t L_133 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
	}

IL_0289:
	{
		int32_t L_134 = V_13;
		int32_t L_135 = V_1;
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_020f;
		}
	}
	{
		int32_t L_136 = V_0;
		int32_t L_137 = V_1;
		ByteU5BU5D_t4116647657* L_138 = V_5;
		PixelData_t619138477 * L_139 = (PixelData_t619138477 *)il2cpp_codegen_object_new(PixelData_t619138477_il2cpp_TypeInfo_var);
		PixelData__ctor_m3707272540(L_139, L_136, L_137, L_138, /*hidden argument*/NULL);
		return L_139;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer__cctor_m3822198792 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ZXing.Rendering.PixelDataRenderer::Finalize()
extern "C" IL2CPP_METHOD_ATTR void PixelDataRenderer_Finalize_m186093771 (PixelDataRenderer_t163934832 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void ZXing.Rendering.PixelDataRenderer::Finalize()' has no implementation."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ZXing.Result::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_get_Text_m2949802363 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ZXing.Result::put_Text(System.String)
extern "C" IL2CPP_METHOD_ATTR void Result_put_Text_m2446999827 (Result_t940650810 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Byte[] ZXing.Result::get_RawBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Result_get_RawBytes_m308223286 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_U3CRawBytesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Result::put_RawBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Result_put_RawBytes_m4023429989 (Result_t940650810 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3CRawBytesU3Ek__BackingField_1(L_0);
		return;
	}
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
extern "C" IL2CPP_METHOD_ATTR ResultPointU5BU5D_t569055209* Result_get_ResultPoints_m3627826647 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		ResultPointU5BU5D_t569055209* L_0 = __this->get_U3CResultPointsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ZXing.Result::put_ResultPoints(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void Result_put_ResultPoints_m44493398 (Result_t940650810 * __this, ResultPointU5BU5D_t569055209* ___value0, const RuntimeMethod* method)
{
	{
		ResultPointU5BU5D_t569055209* L_0 = ___value0;
		__this->set_U3CResultPointsU3Ek__BackingField_2(L_0);
		return;
	}
}
// ZXing.BarcodeFormat ZXing.Result::get_BarcodeFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t Result_get_BarcodeFormat_m1842501877 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CBarcodeFormatU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ZXing.Result::put_BarcodeFormat(ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result_put_BarcodeFormat_m816001088 (Result_t940650810 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CBarcodeFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m1040463511 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResultMetadataU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ZXing.Result::put_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Result_put_ResultMetadata_m2006161685 (Result_t940650810 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultMetadataU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 ZXing.Result::get_Timestamp()
extern "C" IL2CPP_METHOD_ATTR int64_t Result_get_Timestamp_m1072806935 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CTimestampU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void ZXing.Result::put_Timestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result_put_Timestamp_m2575241685 (Result_t940650810 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTimestampU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m95352135 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_m95352135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		ByteU5BU5D_t4116647657* L_1 = ___rawBytes1;
		ResultPointU5BU5D_t569055209* L_2 = ___resultPoints2;
		int32_t L_3 = ___format3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_4 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		int64_t L_5 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		Result__ctor_m2674064399(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m2674064399 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, int64_t ___timestamp4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_m2674064399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___rawBytes1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral2505242827, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Result__ctor_m2674064399_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_3 = ___text0;
		Result_put_Text_m2446999827(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = ___rawBytes1;
		Result_put_RawBytes_m4023429989(__this, L_4, /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_5 = ___resultPoints2;
		Result_put_ResultPoints_m44493398(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___format3;
		Result_put_BarcodeFormat_m816001088(__this, L_6, /*hidden argument*/NULL);
		Result_put_ResultMetadata_m2006161685(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		int64_t L_7 = ___timestamp4;
		Result_put_Timestamp_m2575241685(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Result_putMetadata_m2997266180 (Result_t940650810 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_putMetadata_m2997266180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Result_get_ResultMetadata_m1040463511(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t2380125725 * L_1 = (Dictionary_2_t2380125725 *)il2cpp_codegen_object_new(Dictionary_2_t2380125725_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m787323069(L_1, /*hidden argument*/Dictionary_2__ctor_m787323069_RuntimeMethod_var);
		Result_put_ResultMetadata_m2006161685(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		RuntimeObject* L_2 = Result_get_ResultMetadata_m1040463511(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___type0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(!0,!1) */, IDictionary_2_t843977116_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void ZXing.Result::putAllMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Result_putAllMetadata_m2105747124 (Result_t940650810 * __this, RuntimeObject* ___metadata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_putAllMetadata_m2105747124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t482830596  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___metadata0;
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_1 = Result_get_ResultMetadata_m1040463511(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___metadata0;
		Result_put_ResultMetadata_m2006161685(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___metadata0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::GetEnumerator() */, IEnumerable_1_t3757650781_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_001c:
		{
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			KeyValuePair_2_t482830596  L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t482830596  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::get_Current() */, IEnumerator_1_t915401064_il2cpp_TypeInfo_var, L_5);
			V_0 = L_6;
			RuntimeObject* L_7 = Result_get_ResultMetadata_m1040463511(__this, /*hidden argument*/NULL);
			int32_t L_8 = KeyValuePair_2_get_Key_m1628704204((KeyValuePair_2_t482830596 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m1628704204_RuntimeMethod_var);
			RuntimeObject * L_9 = KeyValuePair_2_get_Value_m4115895800((KeyValuePair_2_t482830596 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m4115895800_RuntimeMethod_var);
			NullCheck(L_7);
			InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(!0,!1) */, IDictionary_2_t843977116_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		}

IL_003c:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001c;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void ZXing.Result::addResultPoints(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void Result_addResultPoints_m1158456689 (Result_t940650810 * __this, ResultPointU5BU5D_t569055209* ___newPoints0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_addResultPoints_m1158456689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultPointU5BU5D_t569055209* V_0 = NULL;
	ResultPointU5BU5D_t569055209* V_1 = NULL;
	{
		ResultPointU5BU5D_t569055209* L_0 = Result_get_ResultPoints_m3627826647(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ResultPointU5BU5D_t569055209* L_1 = V_0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_2 = ___newPoints0;
		Result_put_ResultPoints_m44493398(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		ResultPointU5BU5D_t569055209* L_3 = ___newPoints0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_4 = ___newPoints0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_5 = V_0;
		NullCheck(L_5);
		ResultPointU5BU5D_t569055209* L_6 = ___newPoints0;
		NullCheck(L_6);
		ResultPointU5BU5D_t569055209* L_7 = (ResultPointU5BU5D_t569055209*)SZArrayNew(ResultPointU5BU5D_t569055209_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))));
		V_1 = L_7;
		ResultPointU5BU5D_t569055209* L_8 = V_0;
		ResultPointU5BU5D_t569055209* L_9 = V_1;
		ResultPointU5BU5D_t569055209* L_10 = V_0;
		NullCheck(L_10);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_11 = ___newPoints0;
		ResultPointU5BU5D_t569055209* L_12 = V_1;
		ResultPointU5BU5D_t569055209* L_13 = V_0;
		NullCheck(L_13);
		ResultPointU5BU5D_t569055209* L_14 = ___newPoints0;
		NullCheck(L_14);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_15 = V_1;
		Result_put_ResultPoints_m44493398(__this, L_15, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.String ZXing.Result::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_ToString_m2617897279 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_ToString_m2617897279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Result_get_Text_m2949802363(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = Result_get_RawBytes_m308223286(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3452614645, L_3, _stringLiteral1229876613, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		String_t* L_5 = Result_get_Text_m2949802363(__this, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void ZXing.Result::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Result_Finalize_m3310675420 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void ZXing.Result::Finalize()' has no implementation."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.ResultPoint::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ResultPoint__ctor_m244245060 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ResultPoint__ctor_m850511562 (ResultPoint_t1473505336 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint__ctor_m850511562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_3 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_bytesX_2(L_3);
		float L_4 = ___y1;
		ByteU5BU5D_t4116647657* L_5 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_bytesY_3(L_5);
		return;
	}
}
// System.Single ZXing.ResultPoint::get_X()
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_get_X_m3248211762 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_x_0();
		return L_0;
	}
}
// System.Single ZXing.ResultPoint::get_Y()
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_get_Y_m3248146226 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_y_1();
		return L_0;
	}
}
// System.Boolean ZXing.ResultPoint::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ResultPoint_Equals_m4105026231 (ResultPoint_t1473505336 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint_Equals_m4105026231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultPoint_t1473505336 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = ((ResultPoint_t1473505336 *)IsInstSealed((RuntimeObject*)L_0, ResultPoint_t1473505336_il2cpp_TypeInfo_var));
		ResultPoint_t1473505336 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		float L_2 = __this->get_x_0();
		ResultPoint_t1473505336 * L_3 = V_0;
		NullCheck(L_3);
		float L_4 = L_3->get_x_0();
		if ((!(((float)L_2) == ((float)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		float L_5 = __this->get_y_1();
		ResultPoint_t1473505336 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Int32 ZXing.ResultPoint::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ResultPoint_GetHashCode_m225998583 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_bytesX_2();
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_t4116647657* L_3 = __this->get_bytesX_2();
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_t4116647657* L_6 = __this->get_bytesX_2();
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_t4116647657* L_9 = __this->get_bytesX_2();
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_t4116647657* L_12 = __this->get_bytesY_3();
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_t4116647657* L_15 = __this->get_bytesY_3();
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_t4116647657* L_18 = __this->get_bytesY_3();
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t4116647657* L_21 = __this->get_bytesY_3();
		NullCheck(L_21);
		int32_t L_22 = 3;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)31), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_8<<(int32_t)8)))), (int32_t)L_11)))), (int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_20<<(int32_t)8)))), (int32_t)L_23));
	}
}
// System.String ZXing.ResultPoint::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ResultPoint_ToString_m1972261536 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint_ToString_m1972261536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		String_t* L_0 = __this->get_toString_4();
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_1, ((int32_t)25), /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_CurrentUICulture_m959203371(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		float L_6 = __this->get_x_0();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = V_1;
		float L_10 = __this->get_y_1();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		NullCheck(L_2);
		StringBuilder_AppendFormat_m4227532852(L_2, L_3, _stringLiteral791040696, L_13, /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		__this->set_toString_4(L_15);
	}

IL_0051:
	{
		String_t* L_16 = __this->get_toString_4();
		return L_16;
	}
}
// System.Void ZXing.ResultPoint::orderBestPatterns(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void ResultPoint_orderBestPatterns_m1535880271 (RuntimeObject * __this /* static, unused */, ResultPointU5BU5D_t569055209* ___patterns0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	ResultPoint_t1473505336 * V_3 = NULL;
	ResultPoint_t1473505336 * V_4 = NULL;
	ResultPoint_t1473505336 * V_5 = NULL;
	ResultPoint_t1473505336 * V_6 = NULL;
	{
		ResultPointU5BU5D_t569055209* L_0 = ___patterns0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ResultPoint_t1473505336 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ResultPointU5BU5D_t569055209* L_3 = ___patterns0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		ResultPoint_t1473505336 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = ResultPoint_distance_m3645129194(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		ResultPointU5BU5D_t569055209* L_7 = ___patterns0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		ResultPoint_t1473505336 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ResultPointU5BU5D_t569055209* L_10 = ___patterns0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		ResultPoint_t1473505336 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = ResultPoint_distance_m3645129194(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		ResultPointU5BU5D_t569055209* L_14 = ___patterns0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		ResultPoint_t1473505336 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ResultPointU5BU5D_t569055209* L_17 = ___patterns0;
		NullCheck(L_17);
		int32_t L_18 = 2;
		ResultPoint_t1473505336 * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = ResultPoint_distance_m3645129194(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = V_1;
		float L_22 = V_0;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_003c;
		}
	}
	{
		float L_23 = V_1;
		float L_24 = V_2;
		if ((!(((float)L_23) >= ((float)L_24))))
		{
			goto IL_003c;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_25 = ___patterns0;
		NullCheck(L_25);
		int32_t L_26 = 0;
		ResultPoint_t1473505336 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_4 = L_27;
		ResultPointU5BU5D_t569055209* L_28 = ___patterns0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		ResultPoint_t1473505336 * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		ResultPointU5BU5D_t569055209* L_31 = ___patterns0;
		NullCheck(L_31);
		int32_t L_32 = 2;
		ResultPoint_t1473505336 * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		goto IL_0062;
	}

IL_003c:
	{
		float L_34 = V_2;
		float L_35 = V_1;
		if ((!(((float)L_34) >= ((float)L_35))))
		{
			goto IL_0054;
		}
	}
	{
		float L_36 = V_2;
		float L_37 = V_0;
		if ((!(((float)L_36) >= ((float)L_37))))
		{
			goto IL_0054;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_38 = ___patterns0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		ResultPoint_t1473505336 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_4 = L_40;
		ResultPointU5BU5D_t569055209* L_41 = ___patterns0;
		NullCheck(L_41);
		int32_t L_42 = 0;
		ResultPoint_t1473505336 * L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_3 = L_43;
		ResultPointU5BU5D_t569055209* L_44 = ___patterns0;
		NullCheck(L_44);
		int32_t L_45 = 2;
		ResultPoint_t1473505336 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0062;
	}

IL_0054:
	{
		ResultPointU5BU5D_t569055209* L_47 = ___patterns0;
		NullCheck(L_47);
		int32_t L_48 = 2;
		ResultPoint_t1473505336 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_4 = L_49;
		ResultPointU5BU5D_t569055209* L_50 = ___patterns0;
		NullCheck(L_50);
		int32_t L_51 = 0;
		ResultPoint_t1473505336 * L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_3 = L_52;
		ResultPointU5BU5D_t569055209* L_53 = ___patterns0;
		NullCheck(L_53);
		int32_t L_54 = 1;
		ResultPoint_t1473505336 * L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_5 = L_55;
	}

IL_0062:
	{
		ResultPoint_t1473505336 * L_56 = V_3;
		ResultPoint_t1473505336 * L_57 = V_4;
		ResultPoint_t1473505336 * L_58 = V_5;
		float L_59 = ResultPoint_crossProductZ_m2627131603(NULL /*static, unused*/, L_56, L_57, L_58, /*hidden argument*/NULL);
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		ResultPoint_t1473505336 * L_60 = V_3;
		V_6 = L_60;
		ResultPoint_t1473505336 * L_61 = V_5;
		V_3 = L_61;
		ResultPoint_t1473505336 * L_62 = V_6;
		V_5 = L_62;
	}

IL_007d:
	{
		ResultPointU5BU5D_t569055209* L_63 = ___patterns0;
		ResultPoint_t1473505336 * L_64 = V_3;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t1473505336 *)L_64);
		ResultPointU5BU5D_t569055209* L_65 = ___patterns0;
		ResultPoint_t1473505336 * L_66 = V_4;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t1473505336 *)L_66);
		ResultPointU5BU5D_t569055209* L_67 = ___patterns0;
		ResultPoint_t1473505336 * L_68 = V_5;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t1473505336 *)L_68);
		return;
	}
}
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_distance_m3645129194 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pattern10, ResultPoint_t1473505336 * ___pattern21, const RuntimeMethod* method)
{
	{
		ResultPoint_t1473505336 * L_0 = ___pattern10;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		ResultPoint_t1473505336 * L_2 = ___pattern10;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		ResultPoint_t1473505336 * L_4 = ___pattern21;
		NullCheck(L_4);
		float L_5 = L_4->get_x_0();
		ResultPoint_t1473505336 * L_6 = ___pattern21;
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		float L_8 = MathUtils_distance_m2055009390(NULL /*static, unused*/, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m2627131603 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pointA0, ResultPoint_t1473505336 * ___pointB1, ResultPoint_t1473505336 * ___pointC2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		ResultPoint_t1473505336 * L_0 = ___pointB1;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		V_0 = L_1;
		ResultPoint_t1473505336 * L_2 = ___pointB1;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		V_1 = L_3;
		ResultPoint_t1473505336 * L_4 = ___pointC2;
		NullCheck(L_4);
		float L_5 = L_4->get_x_0();
		float L_6 = V_0;
		ResultPoint_t1473505336 * L_7 = ___pointA0;
		NullCheck(L_7);
		float L_8 = L_7->get_y_1();
		float L_9 = V_1;
		ResultPoint_t1473505336 * L_10 = ___pointC2;
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		float L_12 = V_1;
		ResultPoint_t1473505336 * L_13 = ___pointA0;
		NullCheck(L_13);
		float L_14 = L_13->get_x_0();
		float L_15 = V_0;
		return ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_15))))));
	}
}
// System.Void ZXing.ResultPoint::Finalize()
extern "C" IL2CPP_METHOD_ATTR void ResultPoint_Finalize_m61247291 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("The method 'System.Void ZXing.ResultPoint::Finalize()' has no implementation."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
const Il2CppGuid IResultPointCallback_t922799438_ComCallableWrapper::IID = { 0x6b284f6e, 0xd7fb, 0x5cf5, 0x75, 0xf, 0xc5, 0x24, 0xf4, 0x49, 0x4, 0x61 };
// Native invoker for ZXing.ResultPointCallback
extern "C"  void ResultPointCallback_Invoke_m2858278159_NativeInvoker (Il2CppComObject * __this, ResultPoint_t1473505336 * ___point0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'ZXing.ResultPoint'."), NULL, NULL);
}
// System.Void ZXing.ResultPointCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ResultPointCallback__ctor_m1107639698 (ResultPointCallback_t922799438 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZXing.ResultPointCallback::Invoke(ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR void ResultPointCallback_Invoke_m2858278159 (ResultPointCallback_t922799438 * __this, ResultPoint_t1473505336 * ___point0, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, ResultPoint_t1473505336 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___point0, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, ResultPoint_t1473505336 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___point0, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< ResultPoint_t1473505336 * >::Invoke(targetMethod, targetThis, ___point0);
							else
								GenericVirtActionInvoker1< ResultPoint_t1473505336 * >::Invoke(targetMethod, targetThis, ___point0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< ResultPoint_t1473505336 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___point0);
							else
								VirtActionInvoker1< ResultPoint_t1473505336 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___point0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, ResultPoint_t1473505336 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___point0, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___point0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___point0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___point0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___point0);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (ResultPoint_t1473505336 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___point0, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, ResultPoint_t1473505336 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___point0, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, ResultPoint_t1473505336 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___point0, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< ResultPoint_t1473505336 * >::Invoke(targetMethod, targetThis, ___point0);
						else
							GenericVirtActionInvoker1< ResultPoint_t1473505336 * >::Invoke(targetMethod, targetThis, ___point0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< ResultPoint_t1473505336 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___point0);
						else
							VirtActionInvoker1< ResultPoint_t1473505336 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___point0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ResultPoint_t1473505336 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___point0, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___point0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___point0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___point0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___point0);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (ResultPoint_t1473505336 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___point0, targetMethod);
				}
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.SerializableAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SerializableAttribute__ctor_m2450504177 (SerializableAttribute_t2987426206 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String ZXing.SupportClass::ToBinaryString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_ToBinaryString_m2575833209 (RuntimeObject * __this /* static, unused */, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_ToBinaryString_m2575833209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t3528271667* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t3528271667* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	CharU5BU5D_t3528271667* G_B4_2 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000c:
	{
		CharU5BU5D_t3528271667* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = ___x0;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)1))) == ((int32_t)1)))
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((int32_t)48);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_001e;
	}

IL_001c:
	{
		G_B4_0 = ((int32_t)49);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_001e:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Il2CppChar)G_B4_0);
		int32_t L_5 = ___x0;
		___x0 = ((int32_t)((int32_t)L_5>>(int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = ___x0;
		if (L_6)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_7 = V_0;
		int32_t L_8 = V_1;
		Array_Reverse_m816310962(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_8, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_9 = V_0;
		String_t* L_10 = String_CreateString_m2818852475(NULL, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Int32 ZXing.SupportClass::bitCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SupportClass_bitCount_m1617059811 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = ___n0;
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ZXing.Writer
const Il2CppGuid Writer_t1994170402::IID = { 0xf0a7863e, 0x36d9, 0x55b6, 0x52, 0xc6, 0x1c, 0xf2, 0x39, 0xd9, 0x2c, 0x7a };
// ZXing.Common.BitMatrix ZXing.Writer::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * Writer_encode_m678751478 (RuntimeObject* __this, String_t* ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'ZXing.Common.BitMatrix'."), NULL, NULL);
}
// ZXing.Common.BitMatrix ZXing.Writer::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * Writer_encode_m1637322283 (RuntimeObject* __this, String_t* ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, RuntimeObject* ___hints4, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'ZXing.Common.BitMatrix'."), NULL, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.WriterException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WriterException__ctor_m3142821443 (WriterException_t375399354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WriterException__ctor_m3142821443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WriterException__ctor_m1883063621 (WriterException_t375399354 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WriterException__ctor_m1883063621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void WriterException__ctor_m804388596 (WriterException_t375399354 * __this, String_t* ___message0, Exception_t * ___innerExc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WriterException__ctor_m804388596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerExc1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1406832249(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
