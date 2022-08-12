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


// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IDictionary`2<System.Char,ZXing.Aztec.Internal.Decoder/Table>
struct IDictionary_2_t4013595900;
// System.Collections.Generic.IDictionary`2<System.Int32,ZXing.Common.CharacterSetECI>
struct IDictionary_2_t1830943069;
// System.Collections.Generic.IDictionary`2<System.String,ZXing.Common.CharacterSetECI>
struct IDictionary_2_t2727486037;
// System.Collections.Generic.IDictionary`2<ZXing.Aztec.Internal.Decoder/Table,System.String[]>
struct IDictionary_2_t2354247204;
// System.Collections.Generic.IDictionary`2<ZXing.BarcodeFormat,System.Func`1<ZXing.Writer>>
struct IDictionary_2_t3197640325;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t3788232239;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t1637000144;
// System.Collections.Generic.IList`1<ZXing.Common.ReedSolomon.GenericGFPoly>
struct IList_1_t3462618951;
// System.Collections.Generic.IList`1<ZXing.OneD.OneDReader>
struct IList_1_t2032392697;
// System.Collections.Generic.IList`1<ZXing.Reader>
struct IList_1_t398122886;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t1857321114;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern>
struct List_1_t3609903935;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Func`1<ZXing.Writer>
struct Func_1_t1423917049;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// ZXing.Aztec.Internal.AztecDetectorResult
struct AztecDetectorResult_t2380792366;
// ZXing.Aztec.Internal.Token
struct Token_t3482754442;
// ZXing.Binarizer
struct Binarizer_t2848741980;
// ZXing.Common.BitMatrix
struct BitMatrix_t2873240750;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t1209718858;
// ZXing.Common.Detector.WhiteRectangleDetector
struct WhiteRectangleDetector_t3941737885;
// ZXing.Common.DetectorResult[]
struct DetectorResultU5BU5D_t1261636905;
// ZXing.Common.ReedSolomon.GenericGF
struct GenericGF_t55621755;
// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct ReedSolomonDecoder_t4136138852;
// ZXing.Datamatrix.Encoder.SymbolInfo
struct SymbolInfo_t1219041572;
// ZXing.Datamatrix.Encoder.SymbolInfo[]
struct SymbolInfoU5BU5D_t2813938125;
// ZXing.Datamatrix.Internal.Decoder
struct Decoder_t1258845697;
// ZXing.Datamatrix.Internal.Version
struct Version_t3496629239;
// ZXing.Dimension
struct Dimension_t1511315514;
// ZXing.LuminanceSource
struct LuminanceSource_t3713829503;
// ZXing.Maxicode.Internal.Decoder
struct Decoder_t925060097;
// ZXing.OneD.EANManufacturerOrgSupport
struct EANManufacturerOrgSupport_t3548211393;
// ZXing.OneD.UPCEANExtensionSupport
struct UPCEANExtensionSupport_t494448914;
// ZXing.OneD.UPCEANReader[]
struct UPCEANReaderU5BU5D_t2540811653;
// ZXing.QrCode.Internal.Decoder
struct Decoder_t1927175606;
// ZXing.QrCode.Internal.FinderPatternInfo[]
struct FinderPatternInfoU5BU5D_t2935450768;
// ZXing.Reader
struct Reader_t2877770399;
// ZXing.Rendering.PixelData
struct PixelData_t619138477;
// ZXing.Result
struct Result_t940650810;
// ZXing.ResultPoint
struct ResultPoint_t1473505336;
// ZXing.ResultPointCallback
struct ResultPointCallback_t922799438;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t569055209;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IMap_2_t1620352935;
struct IWriteableBitmap_t3747397532;



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
// ZXing.Common.IEncodingOptions
struct NOVTABLE IEncodingOptions_t2573455057 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IEncodingOptions_get_Hints_m3074810233(IMap_2_t1620352935** comReturnValue) = 0;
};
// ZXing.IBarcodeWriter
struct NOVTABLE IBarcodeWriter_t1007852641 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBarcodeWriter_Encode_m2870393515(Il2CppHString ___contents0, BitMatrix_t2873240750 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeWriter_Write_m209679521(Il2CppHString ___contents0, PixelData_t619138477 ** comReturnValue) = 0;
};
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
#ifndef AZTECREADER_T1238082647_H
#define AZTECREADER_T1238082647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.AztecReader
struct  AztecReader_t1238082647  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AZTECREADER_T1238082647_H
#ifndef AZTECCODE_T707731902_H
#define AZTECCODE_T707731902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.AztecCode
struct  AztecCode_t707731902  : public RuntimeObject
{
public:
	// System.Boolean ZXing.Aztec.Internal.AztecCode::<isCompact>k__BackingField
	bool ___U3CisCompactU3Ek__BackingField_0;
	// System.Int32 ZXing.Aztec.Internal.AztecCode::<Size>k__BackingField
	int32_t ___U3CSizeU3Ek__BackingField_1;
	// System.Int32 ZXing.Aztec.Internal.AztecCode::<Layers>k__BackingField
	int32_t ___U3CLayersU3Ek__BackingField_2;
	// System.Int32 ZXing.Aztec.Internal.AztecCode::<CodeWords>k__BackingField
	int32_t ___U3CCodeWordsU3Ek__BackingField_3;
	// ZXing.Common.BitMatrix ZXing.Aztec.Internal.AztecCode::<Matrix>k__BackingField
	BitMatrix_t2873240750 * ___U3CMatrixU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisCompactU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AztecCode_t707731902, ___U3CisCompactU3Ek__BackingField_0)); }
	inline bool get_U3CisCompactU3Ek__BackingField_0() const { return ___U3CisCompactU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCompactU3Ek__BackingField_0() { return &___U3CisCompactU3Ek__BackingField_0; }
	inline void set_U3CisCompactU3Ek__BackingField_0(bool value)
	{
		___U3CisCompactU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AztecCode_t707731902, ___U3CSizeU3Ek__BackingField_1)); }
	inline int32_t get_U3CSizeU3Ek__BackingField_1() const { return ___U3CSizeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSizeU3Ek__BackingField_1() { return &___U3CSizeU3Ek__BackingField_1; }
	inline void set_U3CSizeU3Ek__BackingField_1(int32_t value)
	{
		___U3CSizeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLayersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AztecCode_t707731902, ___U3CLayersU3Ek__BackingField_2)); }
	inline int32_t get_U3CLayersU3Ek__BackingField_2() const { return ___U3CLayersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CLayersU3Ek__BackingField_2() { return &___U3CLayersU3Ek__BackingField_2; }
	inline void set_U3CLayersU3Ek__BackingField_2(int32_t value)
	{
		___U3CLayersU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCodeWordsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AztecCode_t707731902, ___U3CCodeWordsU3Ek__BackingField_3)); }
	inline int32_t get_U3CCodeWordsU3Ek__BackingField_3() const { return ___U3CCodeWordsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCodeWordsU3Ek__BackingField_3() { return &___U3CCodeWordsU3Ek__BackingField_3; }
	inline void set_U3CCodeWordsU3Ek__BackingField_3(int32_t value)
	{
		___U3CCodeWordsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMatrixU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AztecCode_t707731902, ___U3CMatrixU3Ek__BackingField_4)); }
	inline BitMatrix_t2873240750 * get_U3CMatrixU3Ek__BackingField_4() const { return ___U3CMatrixU3Ek__BackingField_4; }
	inline BitMatrix_t2873240750 ** get_address_of_U3CMatrixU3Ek__BackingField_4() { return &___U3CMatrixU3Ek__BackingField_4; }
	inline void set_U3CMatrixU3Ek__BackingField_4(BitMatrix_t2873240750 * value)
	{
		___U3CMatrixU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMatrixU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AZTECCODE_T707731902_H
#ifndef DECODER_T150614203_H
#define DECODER_T150614203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.Decoder
struct  Decoder_t150614203  : public RuntimeObject
{
public:
	// ZXing.Aztec.Internal.AztecDetectorResult ZXing.Aztec.Internal.Decoder::ddata
	AztecDetectorResult_t2380792366 * ___ddata_7;

public:
	inline static int32_t get_offset_of_ddata_7() { return static_cast<int32_t>(offsetof(Decoder_t150614203, ___ddata_7)); }
	inline AztecDetectorResult_t2380792366 * get_ddata_7() const { return ___ddata_7; }
	inline AztecDetectorResult_t2380792366 ** get_address_of_ddata_7() { return &___ddata_7; }
	inline void set_ddata_7(AztecDetectorResult_t2380792366 * value)
	{
		___ddata_7 = value;
		Il2CppCodeGenWriteBarrier((&___ddata_7), value);
	}
};

struct Decoder_t150614203_StaticFields
{
public:
	// System.String[] ZXing.Aztec.Internal.Decoder::UPPER_TABLE
	StringU5BU5D_t1281789340* ___UPPER_TABLE_0;
	// System.String[] ZXing.Aztec.Internal.Decoder::LOWER_TABLE
	StringU5BU5D_t1281789340* ___LOWER_TABLE_1;
	// System.String[] ZXing.Aztec.Internal.Decoder::MIXED_TABLE
	StringU5BU5D_t1281789340* ___MIXED_TABLE_2;
	// System.String[] ZXing.Aztec.Internal.Decoder::PUNCT_TABLE
	StringU5BU5D_t1281789340* ___PUNCT_TABLE_3;
	// System.String[] ZXing.Aztec.Internal.Decoder::DIGIT_TABLE
	StringU5BU5D_t1281789340* ___DIGIT_TABLE_4;
	// System.Collections.Generic.IDictionary`2<ZXing.Aztec.Internal.Decoder/Table,System.String[]> ZXing.Aztec.Internal.Decoder::codeTables
	RuntimeObject* ___codeTables_5;
	// System.Collections.Generic.IDictionary`2<System.Char,ZXing.Aztec.Internal.Decoder/Table> ZXing.Aztec.Internal.Decoder::codeTableMap
	RuntimeObject* ___codeTableMap_6;

public:
	inline static int32_t get_offset_of_UPPER_TABLE_0() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___UPPER_TABLE_0)); }
	inline StringU5BU5D_t1281789340* get_UPPER_TABLE_0() const { return ___UPPER_TABLE_0; }
	inline StringU5BU5D_t1281789340** get_address_of_UPPER_TABLE_0() { return &___UPPER_TABLE_0; }
	inline void set_UPPER_TABLE_0(StringU5BU5D_t1281789340* value)
	{
		___UPPER_TABLE_0 = value;
		Il2CppCodeGenWriteBarrier((&___UPPER_TABLE_0), value);
	}

	inline static int32_t get_offset_of_LOWER_TABLE_1() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___LOWER_TABLE_1)); }
	inline StringU5BU5D_t1281789340* get_LOWER_TABLE_1() const { return ___LOWER_TABLE_1; }
	inline StringU5BU5D_t1281789340** get_address_of_LOWER_TABLE_1() { return &___LOWER_TABLE_1; }
	inline void set_LOWER_TABLE_1(StringU5BU5D_t1281789340* value)
	{
		___LOWER_TABLE_1 = value;
		Il2CppCodeGenWriteBarrier((&___LOWER_TABLE_1), value);
	}

	inline static int32_t get_offset_of_MIXED_TABLE_2() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___MIXED_TABLE_2)); }
	inline StringU5BU5D_t1281789340* get_MIXED_TABLE_2() const { return ___MIXED_TABLE_2; }
	inline StringU5BU5D_t1281789340** get_address_of_MIXED_TABLE_2() { return &___MIXED_TABLE_2; }
	inline void set_MIXED_TABLE_2(StringU5BU5D_t1281789340* value)
	{
		___MIXED_TABLE_2 = value;
		Il2CppCodeGenWriteBarrier((&___MIXED_TABLE_2), value);
	}

	inline static int32_t get_offset_of_PUNCT_TABLE_3() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___PUNCT_TABLE_3)); }
	inline StringU5BU5D_t1281789340* get_PUNCT_TABLE_3() const { return ___PUNCT_TABLE_3; }
	inline StringU5BU5D_t1281789340** get_address_of_PUNCT_TABLE_3() { return &___PUNCT_TABLE_3; }
	inline void set_PUNCT_TABLE_3(StringU5BU5D_t1281789340* value)
	{
		___PUNCT_TABLE_3 = value;
		Il2CppCodeGenWriteBarrier((&___PUNCT_TABLE_3), value);
	}

	inline static int32_t get_offset_of_DIGIT_TABLE_4() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___DIGIT_TABLE_4)); }
	inline StringU5BU5D_t1281789340* get_DIGIT_TABLE_4() const { return ___DIGIT_TABLE_4; }
	inline StringU5BU5D_t1281789340** get_address_of_DIGIT_TABLE_4() { return &___DIGIT_TABLE_4; }
	inline void set_DIGIT_TABLE_4(StringU5BU5D_t1281789340* value)
	{
		___DIGIT_TABLE_4 = value;
		Il2CppCodeGenWriteBarrier((&___DIGIT_TABLE_4), value);
	}

	inline static int32_t get_offset_of_codeTables_5() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___codeTables_5)); }
	inline RuntimeObject* get_codeTables_5() const { return ___codeTables_5; }
	inline RuntimeObject** get_address_of_codeTables_5() { return &___codeTables_5; }
	inline void set_codeTables_5(RuntimeObject* value)
	{
		___codeTables_5 = value;
		Il2CppCodeGenWriteBarrier((&___codeTables_5), value);
	}

	inline static int32_t get_offset_of_codeTableMap_6() { return static_cast<int32_t>(offsetof(Decoder_t150614203_StaticFields, ___codeTableMap_6)); }
	inline RuntimeObject* get_codeTableMap_6() const { return ___codeTableMap_6; }
	inline RuntimeObject** get_address_of_codeTableMap_6() { return &___codeTableMap_6; }
	inline void set_codeTableMap_6(RuntimeObject* value)
	{
		___codeTableMap_6 = value;
		Il2CppCodeGenWriteBarrier((&___codeTableMap_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T150614203_H
#ifndef DETECTOR_T566033784_H
#define DETECTOR_T566033784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.Detector
struct  Detector_t566033784  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Aztec.Internal.Detector::image
	BitMatrix_t2873240750 * ___image_0;
	// System.Boolean ZXing.Aztec.Internal.Detector::compact
	bool ___compact_1;
	// System.Int32 ZXing.Aztec.Internal.Detector::nbLayers
	int32_t ___nbLayers_2;
	// System.Int32 ZXing.Aztec.Internal.Detector::nbDataBlocks
	int32_t ___nbDataBlocks_3;
	// System.Int32 ZXing.Aztec.Internal.Detector::nbCenterLayers
	int32_t ___nbCenterLayers_4;
	// System.Int32 ZXing.Aztec.Internal.Detector::shift
	int32_t ___shift_5;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(Detector_t566033784, ___image_0)); }
	inline BitMatrix_t2873240750 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2873240750 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2873240750 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_compact_1() { return static_cast<int32_t>(offsetof(Detector_t566033784, ___compact_1)); }
	inline bool get_compact_1() const { return ___compact_1; }
	inline bool* get_address_of_compact_1() { return &___compact_1; }
	inline void set_compact_1(bool value)
	{
		___compact_1 = value;
	}

	inline static int32_t get_offset_of_nbLayers_2() { return static_cast<int32_t>(offsetof(Detector_t566033784, ___nbLayers_2)); }
	inline int32_t get_nbLayers_2() const { return ___nbLayers_2; }
	inline int32_t* get_address_of_nbLayers_2() { return &___nbLayers_2; }
	inline void set_nbLayers_2(int32_t value)
	{
		___nbLayers_2 = value;
	}

	inline static int32_t get_offset_of_nbDataBlocks_3() { return static_cast<int32_t>(offsetof(Detector_t566033784, ___nbDataBlocks_3)); }
	inline int32_t get_nbDataBlocks_3() const { return ___nbDataBlocks_3; }
	inline int32_t* get_address_of_nbDataBlocks_3() { return &___nbDataBlocks_3; }
	inline void set_nbDataBlocks_3(int32_t value)
	{
		___nbDataBlocks_3 = value;
	}

	inline static int32_t get_offset_of_nbCenterLayers_4() { return static_cast<int32_t>(offsetof(Detector_t566033784, ___nbCenterLayers_4)); }
	inline int32_t get_nbCenterLayers_4() const { return ___nbCenterLayers_4; }
	inline int32_t* get_address_of_nbCenterLayers_4() { return &___nbCenterLayers_4; }
	inline void set_nbCenterLayers_4(int32_t value)
	{
		___nbCenterLayers_4 = value;
	}

	inline static int32_t get_offset_of_shift_5() { return static_cast<int32_t>(offsetof(Detector_t566033784, ___shift_5)); }
	inline int32_t get_shift_5() const { return ___shift_5; }
	inline int32_t* get_address_of_shift_5() { return &___shift_5; }
	inline void set_shift_5(int32_t value)
	{
		___shift_5 = value;
	}
};

struct Detector_t566033784_StaticFields
{
public:
	// System.Int32[] ZXing.Aztec.Internal.Detector::EXPECTED_CORNER_BITS
	Int32U5BU5D_t385246372* ___EXPECTED_CORNER_BITS_6;

public:
	inline static int32_t get_offset_of_EXPECTED_CORNER_BITS_6() { return static_cast<int32_t>(offsetof(Detector_t566033784_StaticFields, ___EXPECTED_CORNER_BITS_6)); }
	inline Int32U5BU5D_t385246372* get_EXPECTED_CORNER_BITS_6() const { return ___EXPECTED_CORNER_BITS_6; }
	inline Int32U5BU5D_t385246372** get_address_of_EXPECTED_CORNER_BITS_6() { return &___EXPECTED_CORNER_BITS_6; }
	inline void set_EXPECTED_CORNER_BITS_6(Int32U5BU5D_t385246372* value)
	{
		___EXPECTED_CORNER_BITS_6 = value;
		Il2CppCodeGenWriteBarrier((&___EXPECTED_CORNER_BITS_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTOR_T566033784_H
#ifndef POINT_T3973928370_H
#define POINT_T3973928370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.Detector/Point
struct  Point_t3973928370  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Aztec.Internal.Detector/Point::<X>k__BackingField
	int32_t ___U3CXU3Ek__BackingField_0;
	// System.Int32 ZXing.Aztec.Internal.Detector/Point::<Y>k__BackingField
	int32_t ___U3CYU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Point_t3973928370, ___U3CXU3Ek__BackingField_0)); }
	inline int32_t get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(int32_t value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Point_t3973928370, ___U3CYU3Ek__BackingField_1)); }
	inline int32_t get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(int32_t value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T3973928370_H
#ifndef ENCODER_T3466382154_H
#define ENCODER_T3466382154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.Encoder
struct  Encoder_t3466382154  : public RuntimeObject
{
public:

public:
};

struct Encoder_t3466382154_StaticFields
{
public:
	// System.Int32[] ZXing.Aztec.Internal.Encoder::WORD_SIZE
	Int32U5BU5D_t385246372* ___WORD_SIZE_0;

public:
	inline static int32_t get_offset_of_WORD_SIZE_0() { return static_cast<int32_t>(offsetof(Encoder_t3466382154_StaticFields, ___WORD_SIZE_0)); }
	inline Int32U5BU5D_t385246372* get_WORD_SIZE_0() const { return ___WORD_SIZE_0; }
	inline Int32U5BU5D_t385246372** get_address_of_WORD_SIZE_0() { return &___WORD_SIZE_0; }
	inline void set_WORD_SIZE_0(Int32U5BU5D_t385246372* value)
	{
		___WORD_SIZE_0 = value;
		Il2CppCodeGenWriteBarrier((&___WORD_SIZE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T3466382154_H
#ifndef HIGHLEVELENCODER_T3658679140_H
#define HIGHLEVELENCODER_T3658679140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.HighLevelEncoder
struct  HighLevelEncoder_t3658679140  : public RuntimeObject
{
public:
	// System.Byte[] ZXing.Aztec.Internal.HighLevelEncoder::text
	ByteU5BU5D_t4116647657* ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(HighLevelEncoder_t3658679140, ___text_4)); }
	inline ByteU5BU5D_t4116647657* get_text_4() const { return ___text_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(ByteU5BU5D_t4116647657* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((&___text_4), value);
	}
};

struct HighLevelEncoder_t3658679140_StaticFields
{
public:
	// System.String[] ZXing.Aztec.Internal.HighLevelEncoder::MODE_NAMES
	StringU5BU5D_t1281789340* ___MODE_NAMES_0;
	// System.Int32[][] ZXing.Aztec.Internal.HighLevelEncoder::LATCH_TABLE
	Int32U5BU5DU5BU5D_t3365920845* ___LATCH_TABLE_1;
	// System.Int32[][] ZXing.Aztec.Internal.HighLevelEncoder::CHAR_MAP
	Int32U5BU5DU5BU5D_t3365920845* ___CHAR_MAP_2;
	// System.Int32[][] ZXing.Aztec.Internal.HighLevelEncoder::SHIFT_TABLE
	Int32U5BU5DU5BU5D_t3365920845* ___SHIFT_TABLE_3;

public:
	inline static int32_t get_offset_of_MODE_NAMES_0() { return static_cast<int32_t>(offsetof(HighLevelEncoder_t3658679140_StaticFields, ___MODE_NAMES_0)); }
	inline StringU5BU5D_t1281789340* get_MODE_NAMES_0() const { return ___MODE_NAMES_0; }
	inline StringU5BU5D_t1281789340** get_address_of_MODE_NAMES_0() { return &___MODE_NAMES_0; }
	inline void set_MODE_NAMES_0(StringU5BU5D_t1281789340* value)
	{
		___MODE_NAMES_0 = value;
		Il2CppCodeGenWriteBarrier((&___MODE_NAMES_0), value);
	}

	inline static int32_t get_offset_of_LATCH_TABLE_1() { return static_cast<int32_t>(offsetof(HighLevelEncoder_t3658679140_StaticFields, ___LATCH_TABLE_1)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_LATCH_TABLE_1() const { return ___LATCH_TABLE_1; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_LATCH_TABLE_1() { return &___LATCH_TABLE_1; }
	inline void set_LATCH_TABLE_1(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___LATCH_TABLE_1 = value;
		Il2CppCodeGenWriteBarrier((&___LATCH_TABLE_1), value);
	}

	inline static int32_t get_offset_of_CHAR_MAP_2() { return static_cast<int32_t>(offsetof(HighLevelEncoder_t3658679140_StaticFields, ___CHAR_MAP_2)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_CHAR_MAP_2() const { return ___CHAR_MAP_2; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_CHAR_MAP_2() { return &___CHAR_MAP_2; }
	inline void set_CHAR_MAP_2(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___CHAR_MAP_2 = value;
		Il2CppCodeGenWriteBarrier((&___CHAR_MAP_2), value);
	}

	inline static int32_t get_offset_of_SHIFT_TABLE_3() { return static_cast<int32_t>(offsetof(HighLevelEncoder_t3658679140_StaticFields, ___SHIFT_TABLE_3)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_SHIFT_TABLE_3() const { return ___SHIFT_TABLE_3; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_SHIFT_TABLE_3() { return &___SHIFT_TABLE_3; }
	inline void set_SHIFT_TABLE_3(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___SHIFT_TABLE_3 = value;
		Il2CppCodeGenWriteBarrier((&___SHIFT_TABLE_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLEVELENCODER_T3658679140_H
#ifndef STATE_T1565218420_H
#define STATE_T1565218420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.State
struct  State_t1565218420  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Aztec.Internal.State::mode
	int32_t ___mode_1;
	// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.State::token
	Token_t3482754442 * ___token_2;
	// System.Int32 ZXing.Aztec.Internal.State::binaryShiftByteCount
	int32_t ___binaryShiftByteCount_3;
	// System.Int32 ZXing.Aztec.Internal.State::bitCount
	int32_t ___bitCount_4;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(State_t1565218420, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_token_2() { return static_cast<int32_t>(offsetof(State_t1565218420, ___token_2)); }
	inline Token_t3482754442 * get_token_2() const { return ___token_2; }
	inline Token_t3482754442 ** get_address_of_token_2() { return &___token_2; }
	inline void set_token_2(Token_t3482754442 * value)
	{
		___token_2 = value;
		Il2CppCodeGenWriteBarrier((&___token_2), value);
	}

	inline static int32_t get_offset_of_binaryShiftByteCount_3() { return static_cast<int32_t>(offsetof(State_t1565218420, ___binaryShiftByteCount_3)); }
	inline int32_t get_binaryShiftByteCount_3() const { return ___binaryShiftByteCount_3; }
	inline int32_t* get_address_of_binaryShiftByteCount_3() { return &___binaryShiftByteCount_3; }
	inline void set_binaryShiftByteCount_3(int32_t value)
	{
		___binaryShiftByteCount_3 = value;
	}

	inline static int32_t get_offset_of_bitCount_4() { return static_cast<int32_t>(offsetof(State_t1565218420, ___bitCount_4)); }
	inline int32_t get_bitCount_4() const { return ___bitCount_4; }
	inline int32_t* get_address_of_bitCount_4() { return &___bitCount_4; }
	inline void set_bitCount_4(int32_t value)
	{
		___bitCount_4 = value;
	}
};

struct State_t1565218420_StaticFields
{
public:
	// ZXing.Aztec.Internal.State ZXing.Aztec.Internal.State::INITIAL_STATE
	State_t1565218420 * ___INITIAL_STATE_0;

public:
	inline static int32_t get_offset_of_INITIAL_STATE_0() { return static_cast<int32_t>(offsetof(State_t1565218420_StaticFields, ___INITIAL_STATE_0)); }
	inline State_t1565218420 * get_INITIAL_STATE_0() const { return ___INITIAL_STATE_0; }
	inline State_t1565218420 ** get_address_of_INITIAL_STATE_0() { return &___INITIAL_STATE_0; }
	inline void set_INITIAL_STATE_0(State_t1565218420 * value)
	{
		___INITIAL_STATE_0 = value;
		Il2CppCodeGenWriteBarrier((&___INITIAL_STATE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T1565218420_H
#ifndef TOKEN_T3482754442_H
#define TOKEN_T3482754442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.Token
struct  Token_t3482754442  : public RuntimeObject
{
public:
	// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::previous
	Token_t3482754442 * ___previous_1;

public:
	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Token_t3482754442, ___previous_1)); }
	inline Token_t3482754442 * get_previous_1() const { return ___previous_1; }
	inline Token_t3482754442 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Token_t3482754442 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((&___previous_1), value);
	}
};

struct Token_t3482754442_StaticFields
{
public:
	// ZXing.Aztec.Internal.Token ZXing.Aztec.Internal.Token::EMPTY
	Token_t3482754442 * ___EMPTY_0;

public:
	inline static int32_t get_offset_of_EMPTY_0() { return static_cast<int32_t>(offsetof(Token_t3482754442_StaticFields, ___EMPTY_0)); }
	inline Token_t3482754442 * get_EMPTY_0() const { return ___EMPTY_0; }
	inline Token_t3482754442 ** get_address_of_EMPTY_0() { return &___EMPTY_0; }
	inline void set_EMPTY_0(Token_t3482754442 * value)
	{
		___EMPTY_0 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKEN_T3482754442_H
#ifndef BINARIZER_T2848741980_H
#define BINARIZER_T2848741980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Binarizer
struct  Binarizer_t2848741980  : public RuntimeObject
{
public:
	// ZXing.LuminanceSource ZXing.Binarizer::source
	LuminanceSource_t3713829503 * ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(Binarizer_t2848741980, ___source_0)); }
	inline LuminanceSource_t3713829503 * get_source_0() const { return ___source_0; }
	inline LuminanceSource_t3713829503 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(LuminanceSource_t3713829503 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARIZER_T2848741980_H
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
#ifndef MATHUTILS_T220789852_H
#define MATHUTILS_T220789852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.Detector.MathUtils
struct  MathUtils_t220789852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHUTILS_T220789852_H
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
#ifndef ECI_T82143622_H
#define ECI_T82143622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.ECI
struct  ECI_t82143622  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Common.ECI::value_Renamed
	int32_t ___value_Renamed_0;

public:
	inline static int32_t get_offset_of_value_Renamed_0() { return static_cast<int32_t>(offsetof(ECI_t82143622, ___value_Renamed_0)); }
	inline int32_t get_value_Renamed_0() const { return ___value_Renamed_0; }
	inline int32_t* get_address_of_value_Renamed_0() { return &___value_Renamed_0; }
	inline void set_value_Renamed_0(int32_t value)
	{
		___value_Renamed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECI_T82143622_H
#ifndef GRIDSAMPLER_T2652281052_H
#define GRIDSAMPLER_T2652281052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.GridSampler
struct  GridSampler_t2652281052  : public RuntimeObject
{
public:

public:
};

struct GridSampler_t2652281052_StaticFields
{
public:
	// ZXing.Common.GridSampler ZXing.Common.GridSampler::gridSampler
	GridSampler_t2652281052 * ___gridSampler_0;

public:
	inline static int32_t get_offset_of_gridSampler_0() { return static_cast<int32_t>(offsetof(GridSampler_t2652281052_StaticFields, ___gridSampler_0)); }
	inline GridSampler_t2652281052 * get_gridSampler_0() const { return ___gridSampler_0; }
	inline GridSampler_t2652281052 ** get_address_of_gridSampler_0() { return &___gridSampler_0; }
	inline void set_gridSampler_0(GridSampler_t2652281052 * value)
	{
		___gridSampler_0 = value;
		Il2CppCodeGenWriteBarrier((&___gridSampler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDSAMPLER_T2652281052_H
#ifndef PERSPECTIVETRANSFORM_T1690139610_H
#define PERSPECTIVETRANSFORM_T1690139610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.PerspectiveTransform
struct  PerspectiveTransform_t1690139610  : public RuntimeObject
{
public:
	// System.Single ZXing.Common.PerspectiveTransform::a11
	float ___a11_0;
	// System.Single ZXing.Common.PerspectiveTransform::a12
	float ___a12_1;
	// System.Single ZXing.Common.PerspectiveTransform::a13
	float ___a13_2;
	// System.Single ZXing.Common.PerspectiveTransform::a21
	float ___a21_3;
	// System.Single ZXing.Common.PerspectiveTransform::a22
	float ___a22_4;
	// System.Single ZXing.Common.PerspectiveTransform::a23
	float ___a23_5;
	// System.Single ZXing.Common.PerspectiveTransform::a31
	float ___a31_6;
	// System.Single ZXing.Common.PerspectiveTransform::a32
	float ___a32_7;
	// System.Single ZXing.Common.PerspectiveTransform::a33
	float ___a33_8;

public:
	inline static int32_t get_offset_of_a11_0() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a11_0)); }
	inline float get_a11_0() const { return ___a11_0; }
	inline float* get_address_of_a11_0() { return &___a11_0; }
	inline void set_a11_0(float value)
	{
		___a11_0 = value;
	}

	inline static int32_t get_offset_of_a12_1() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a12_1)); }
	inline float get_a12_1() const { return ___a12_1; }
	inline float* get_address_of_a12_1() { return &___a12_1; }
	inline void set_a12_1(float value)
	{
		___a12_1 = value;
	}

	inline static int32_t get_offset_of_a13_2() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a13_2)); }
	inline float get_a13_2() const { return ___a13_2; }
	inline float* get_address_of_a13_2() { return &___a13_2; }
	inline void set_a13_2(float value)
	{
		___a13_2 = value;
	}

	inline static int32_t get_offset_of_a21_3() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a21_3)); }
	inline float get_a21_3() const { return ___a21_3; }
	inline float* get_address_of_a21_3() { return &___a21_3; }
	inline void set_a21_3(float value)
	{
		___a21_3 = value;
	}

	inline static int32_t get_offset_of_a22_4() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a22_4)); }
	inline float get_a22_4() const { return ___a22_4; }
	inline float* get_address_of_a22_4() { return &___a22_4; }
	inline void set_a22_4(float value)
	{
		___a22_4 = value;
	}

	inline static int32_t get_offset_of_a23_5() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a23_5)); }
	inline float get_a23_5() const { return ___a23_5; }
	inline float* get_address_of_a23_5() { return &___a23_5; }
	inline void set_a23_5(float value)
	{
		___a23_5 = value;
	}

	inline static int32_t get_offset_of_a31_6() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a31_6)); }
	inline float get_a31_6() const { return ___a31_6; }
	inline float* get_address_of_a31_6() { return &___a31_6; }
	inline void set_a31_6(float value)
	{
		___a31_6 = value;
	}

	inline static int32_t get_offset_of_a32_7() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a32_7)); }
	inline float get_a32_7() const { return ___a32_7; }
	inline float* get_address_of_a32_7() { return &___a32_7; }
	inline void set_a32_7(float value)
	{
		___a32_7 = value;
	}

	inline static int32_t get_offset_of_a33_8() { return static_cast<int32_t>(offsetof(PerspectiveTransform_t1690139610, ___a33_8)); }
	inline float get_a33_8() const { return ___a33_8; }
	inline float* get_address_of_a33_8() { return &___a33_8; }
	inline void set_a33_8(float value)
	{
		___a33_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSPECTIVETRANSFORM_T1690139610_H
#ifndef GENERICGFPOLY_T1647299168_H
#define GENERICGFPOLY_T1647299168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.ReedSolomon.GenericGFPoly
struct  GenericGFPoly_t1647299168  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.GenericGFPoly::field
	GenericGF_t55621755 * ___field_0;
	// System.Int32[] ZXing.Common.ReedSolomon.GenericGFPoly::coefficients
	Int32U5BU5D_t385246372* ___coefficients_1;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(GenericGFPoly_t1647299168, ___field_0)); }
	inline GenericGF_t55621755 * get_field_0() const { return ___field_0; }
	inline GenericGF_t55621755 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(GenericGF_t55621755 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((&___field_0), value);
	}

	inline static int32_t get_offset_of_coefficients_1() { return static_cast<int32_t>(offsetof(GenericGFPoly_t1647299168, ___coefficients_1)); }
	inline Int32U5BU5D_t385246372* get_coefficients_1() const { return ___coefficients_1; }
	inline Int32U5BU5D_t385246372** get_address_of_coefficients_1() { return &___coefficients_1; }
	inline void set_coefficients_1(Int32U5BU5D_t385246372* value)
	{
		___coefficients_1 = value;
		Il2CppCodeGenWriteBarrier((&___coefficients_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICGFPOLY_T1647299168_H
#ifndef REEDSOLOMONDECODER_T4136138852_H
#define REEDSOLOMONDECODER_T4136138852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct  ReedSolomonDecoder_t4136138852  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.ReedSolomonDecoder::field
	GenericGF_t55621755 * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(ReedSolomonDecoder_t4136138852, ___field_0)); }
	inline GenericGF_t55621755 * get_field_0() const { return ___field_0; }
	inline GenericGF_t55621755 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(GenericGF_t55621755 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((&___field_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REEDSOLOMONDECODER_T4136138852_H
#ifndef REEDSOLOMONENCODER_T4159666307_H
#define REEDSOLOMONENCODER_T4159666307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.ReedSolomon.ReedSolomonEncoder
struct  ReedSolomonEncoder_t4159666307  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.GenericGF ZXing.Common.ReedSolomon.ReedSolomonEncoder::field
	GenericGF_t55621755 * ___field_0;
	// System.Collections.Generic.IList`1<ZXing.Common.ReedSolomon.GenericGFPoly> ZXing.Common.ReedSolomon.ReedSolomonEncoder::cachedGenerators
	RuntimeObject* ___cachedGenerators_1;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(ReedSolomonEncoder_t4159666307, ___field_0)); }
	inline GenericGF_t55621755 * get_field_0() const { return ___field_0; }
	inline GenericGF_t55621755 ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(GenericGF_t55621755 * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((&___field_0), value);
	}

	inline static int32_t get_offset_of_cachedGenerators_1() { return static_cast<int32_t>(offsetof(ReedSolomonEncoder_t4159666307, ___cachedGenerators_1)); }
	inline RuntimeObject* get_cachedGenerators_1() const { return ___cachedGenerators_1; }
	inline RuntimeObject** get_address_of_cachedGenerators_1() { return &___cachedGenerators_1; }
	inline void set_cachedGenerators_1(RuntimeObject* value)
	{
		___cachedGenerators_1 = value;
		Il2CppCodeGenWriteBarrier((&___cachedGenerators_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REEDSOLOMONENCODER_T4159666307_H
#ifndef STRINGUTILS_T3524834054_H
#define STRINGUTILS_T3524834054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.StringUtils
struct  StringUtils_t3524834054  : public RuntimeObject
{
public:

public:
};

struct StringUtils_t3524834054_StaticFields
{
public:
	// System.String ZXing.Common.StringUtils::PLATFORM_DEFAULT_ENCODING
	String_t* ___PLATFORM_DEFAULT_ENCODING_0;
	// System.String ZXing.Common.StringUtils::SHIFT_JIS
	String_t* ___SHIFT_JIS_1;
	// System.String ZXing.Common.StringUtils::GB2312
	String_t* ___GB2312_2;
	// System.Boolean ZXing.Common.StringUtils::ASSUME_SHIFT_JIS
	bool ___ASSUME_SHIFT_JIS_3;

public:
	inline static int32_t get_offset_of_PLATFORM_DEFAULT_ENCODING_0() { return static_cast<int32_t>(offsetof(StringUtils_t3524834054_StaticFields, ___PLATFORM_DEFAULT_ENCODING_0)); }
	inline String_t* get_PLATFORM_DEFAULT_ENCODING_0() const { return ___PLATFORM_DEFAULT_ENCODING_0; }
	inline String_t** get_address_of_PLATFORM_DEFAULT_ENCODING_0() { return &___PLATFORM_DEFAULT_ENCODING_0; }
	inline void set_PLATFORM_DEFAULT_ENCODING_0(String_t* value)
	{
		___PLATFORM_DEFAULT_ENCODING_0 = value;
		Il2CppCodeGenWriteBarrier((&___PLATFORM_DEFAULT_ENCODING_0), value);
	}

	inline static int32_t get_offset_of_SHIFT_JIS_1() { return static_cast<int32_t>(offsetof(StringUtils_t3524834054_StaticFields, ___SHIFT_JIS_1)); }
	inline String_t* get_SHIFT_JIS_1() const { return ___SHIFT_JIS_1; }
	inline String_t** get_address_of_SHIFT_JIS_1() { return &___SHIFT_JIS_1; }
	inline void set_SHIFT_JIS_1(String_t* value)
	{
		___SHIFT_JIS_1 = value;
		Il2CppCodeGenWriteBarrier((&___SHIFT_JIS_1), value);
	}

	inline static int32_t get_offset_of_GB2312_2() { return static_cast<int32_t>(offsetof(StringUtils_t3524834054_StaticFields, ___GB2312_2)); }
	inline String_t* get_GB2312_2() const { return ___GB2312_2; }
	inline String_t** get_address_of_GB2312_2() { return &___GB2312_2; }
	inline void set_GB2312_2(String_t* value)
	{
		___GB2312_2 = value;
		Il2CppCodeGenWriteBarrier((&___GB2312_2), value);
	}

	inline static int32_t get_offset_of_ASSUME_SHIFT_JIS_3() { return static_cast<int32_t>(offsetof(StringUtils_t3524834054_StaticFields, ___ASSUME_SHIFT_JIS_3)); }
	inline bool get_ASSUME_SHIFT_JIS_3() const { return ___ASSUME_SHIFT_JIS_3; }
	inline bool* get_address_of_ASSUME_SHIFT_JIS_3() { return &___ASSUME_SHIFT_JIS_3; }
	inline void set_ASSUME_SHIFT_JIS_3(bool value)
	{
		___ASSUME_SHIFT_JIS_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTILS_T3524834054_H
#ifndef DATAMATRIXREADER_T1812943478_H
#define DATAMATRIXREADER_T1812943478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.DataMatrixReader
struct  DataMatrixReader_t1812943478  : public RuntimeObject
{
public:
	// ZXing.Datamatrix.Internal.Decoder ZXing.Datamatrix.DataMatrixReader::decoder
	Decoder_t1258845697 * ___decoder_1;

public:
	inline static int32_t get_offset_of_decoder_1() { return static_cast<int32_t>(offsetof(DataMatrixReader_t1812943478, ___decoder_1)); }
	inline Decoder_t1258845697 * get_decoder_1() const { return ___decoder_1; }
	inline Decoder_t1258845697 ** get_address_of_decoder_1() { return &___decoder_1; }
	inline void set_decoder_1(Decoder_t1258845697 * value)
	{
		___decoder_1 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_1), value);
	}
};

struct DataMatrixReader_t1812943478_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.Datamatrix.DataMatrixReader::NO_POINTS
	ResultPointU5BU5D_t569055209* ___NO_POINTS_0;

public:
	inline static int32_t get_offset_of_NO_POINTS_0() { return static_cast<int32_t>(offsetof(DataMatrixReader_t1812943478_StaticFields, ___NO_POINTS_0)); }
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
#endif // DATAMATRIXREADER_T1812943478_H
#ifndef ASCIIENCODER_T1930431953_H
#define ASCIIENCODER_T1930431953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.ASCIIEncoder
struct  ASCIIEncoder_t1930431953  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODER_T1930431953_H
#ifndef BASE256ENCODER_T1561294673_H
#define BASE256ENCODER_T1561294673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.Base256Encoder
struct  Base256Encoder_t1561294673  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE256ENCODER_T1561294673_H
#ifndef C40ENCODER_T4278006487_H
#define C40ENCODER_T4278006487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.C40Encoder
struct  C40Encoder_t4278006487  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // C40ENCODER_T4278006487_H
#ifndef EDIFACTENCODER_T3708650743_H
#define EDIFACTENCODER_T3708650743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.EdifactEncoder
struct  EdifactEncoder_t3708650743  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDIFACTENCODER_T3708650743_H
#ifndef ERRORCORRECTION_T2154369055_H
#define ERRORCORRECTION_T2154369055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.ErrorCorrection
struct  ErrorCorrection_t2154369055  : public RuntimeObject
{
public:

public:
};

struct ErrorCorrection_t2154369055_StaticFields
{
public:
	// System.Int32[] ZXing.Datamatrix.Encoder.ErrorCorrection::FACTOR_SETS
	Int32U5BU5D_t385246372* ___FACTOR_SETS_0;
	// System.Int32[][] ZXing.Datamatrix.Encoder.ErrorCorrection::FACTORS
	Int32U5BU5DU5BU5D_t3365920845* ___FACTORS_1;
	// System.Int32[] ZXing.Datamatrix.Encoder.ErrorCorrection::LOG
	Int32U5BU5D_t385246372* ___LOG_2;
	// System.Int32[] ZXing.Datamatrix.Encoder.ErrorCorrection::ALOG
	Int32U5BU5D_t385246372* ___ALOG_3;

public:
	inline static int32_t get_offset_of_FACTOR_SETS_0() { return static_cast<int32_t>(offsetof(ErrorCorrection_t2154369055_StaticFields, ___FACTOR_SETS_0)); }
	inline Int32U5BU5D_t385246372* get_FACTOR_SETS_0() const { return ___FACTOR_SETS_0; }
	inline Int32U5BU5D_t385246372** get_address_of_FACTOR_SETS_0() { return &___FACTOR_SETS_0; }
	inline void set_FACTOR_SETS_0(Int32U5BU5D_t385246372* value)
	{
		___FACTOR_SETS_0 = value;
		Il2CppCodeGenWriteBarrier((&___FACTOR_SETS_0), value);
	}

	inline static int32_t get_offset_of_FACTORS_1() { return static_cast<int32_t>(offsetof(ErrorCorrection_t2154369055_StaticFields, ___FACTORS_1)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_FACTORS_1() const { return ___FACTORS_1; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_FACTORS_1() { return &___FACTORS_1; }
	inline void set_FACTORS_1(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___FACTORS_1 = value;
		Il2CppCodeGenWriteBarrier((&___FACTORS_1), value);
	}

	inline static int32_t get_offset_of_LOG_2() { return static_cast<int32_t>(offsetof(ErrorCorrection_t2154369055_StaticFields, ___LOG_2)); }
	inline Int32U5BU5D_t385246372* get_LOG_2() const { return ___LOG_2; }
	inline Int32U5BU5D_t385246372** get_address_of_LOG_2() { return &___LOG_2; }
	inline void set_LOG_2(Int32U5BU5D_t385246372* value)
	{
		___LOG_2 = value;
		Il2CppCodeGenWriteBarrier((&___LOG_2), value);
	}

	inline static int32_t get_offset_of_ALOG_3() { return static_cast<int32_t>(offsetof(ErrorCorrection_t2154369055_StaticFields, ___ALOG_3)); }
	inline Int32U5BU5D_t385246372* get_ALOG_3() const { return ___ALOG_3; }
	inline Int32U5BU5D_t385246372** get_address_of_ALOG_3() { return &___ALOG_3; }
	inline void set_ALOG_3(Int32U5BU5D_t385246372* value)
	{
		___ALOG_3 = value;
		Il2CppCodeGenWriteBarrier((&___ALOG_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCORRECTION_T2154369055_H
#ifndef HIGHLEVELENCODER_T1444622992_H
#define HIGHLEVELENCODER_T1444622992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.HighLevelEncoder
struct  HighLevelEncoder_t1444622992  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIGHLEVELENCODER_T1444622992_H
#ifndef SYMBOLINFO_T1219041572_H
#define SYMBOLINFO_T1219041572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.SymbolInfo
struct  SymbolInfo_t1219041572  : public RuntimeObject
{
public:
	// System.Boolean ZXing.Datamatrix.Encoder.SymbolInfo::rectangular
	bool ___rectangular_2;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::dataCapacity
	int32_t ___dataCapacity_3;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::errorCodewords
	int32_t ___errorCodewords_4;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::matrixWidth
	int32_t ___matrixWidth_5;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::matrixHeight
	int32_t ___matrixHeight_6;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::dataRegions
	int32_t ___dataRegions_7;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::rsBlockData
	int32_t ___rsBlockData_8;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::rsBlockError
	int32_t ___rsBlockError_9;

public:
	inline static int32_t get_offset_of_rectangular_2() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___rectangular_2)); }
	inline bool get_rectangular_2() const { return ___rectangular_2; }
	inline bool* get_address_of_rectangular_2() { return &___rectangular_2; }
	inline void set_rectangular_2(bool value)
	{
		___rectangular_2 = value;
	}

	inline static int32_t get_offset_of_dataCapacity_3() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___dataCapacity_3)); }
	inline int32_t get_dataCapacity_3() const { return ___dataCapacity_3; }
	inline int32_t* get_address_of_dataCapacity_3() { return &___dataCapacity_3; }
	inline void set_dataCapacity_3(int32_t value)
	{
		___dataCapacity_3 = value;
	}

	inline static int32_t get_offset_of_errorCodewords_4() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___errorCodewords_4)); }
	inline int32_t get_errorCodewords_4() const { return ___errorCodewords_4; }
	inline int32_t* get_address_of_errorCodewords_4() { return &___errorCodewords_4; }
	inline void set_errorCodewords_4(int32_t value)
	{
		___errorCodewords_4 = value;
	}

	inline static int32_t get_offset_of_matrixWidth_5() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___matrixWidth_5)); }
	inline int32_t get_matrixWidth_5() const { return ___matrixWidth_5; }
	inline int32_t* get_address_of_matrixWidth_5() { return &___matrixWidth_5; }
	inline void set_matrixWidth_5(int32_t value)
	{
		___matrixWidth_5 = value;
	}

	inline static int32_t get_offset_of_matrixHeight_6() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___matrixHeight_6)); }
	inline int32_t get_matrixHeight_6() const { return ___matrixHeight_6; }
	inline int32_t* get_address_of_matrixHeight_6() { return &___matrixHeight_6; }
	inline void set_matrixHeight_6(int32_t value)
	{
		___matrixHeight_6 = value;
	}

	inline static int32_t get_offset_of_dataRegions_7() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___dataRegions_7)); }
	inline int32_t get_dataRegions_7() const { return ___dataRegions_7; }
	inline int32_t* get_address_of_dataRegions_7() { return &___dataRegions_7; }
	inline void set_dataRegions_7(int32_t value)
	{
		___dataRegions_7 = value;
	}

	inline static int32_t get_offset_of_rsBlockData_8() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___rsBlockData_8)); }
	inline int32_t get_rsBlockData_8() const { return ___rsBlockData_8; }
	inline int32_t* get_address_of_rsBlockData_8() { return &___rsBlockData_8; }
	inline void set_rsBlockData_8(int32_t value)
	{
		___rsBlockData_8 = value;
	}

	inline static int32_t get_offset_of_rsBlockError_9() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572, ___rsBlockError_9)); }
	inline int32_t get_rsBlockError_9() const { return ___rsBlockError_9; }
	inline int32_t* get_address_of_rsBlockError_9() { return &___rsBlockError_9; }
	inline void set_rsBlockError_9(int32_t value)
	{
		___rsBlockError_9 = value;
	}
};

struct SymbolInfo_t1219041572_StaticFields
{
public:
	// ZXing.Datamatrix.Encoder.SymbolInfo[] ZXing.Datamatrix.Encoder.SymbolInfo::PROD_SYMBOLS
	SymbolInfoU5BU5D_t2813938125* ___PROD_SYMBOLS_0;
	// ZXing.Datamatrix.Encoder.SymbolInfo[] ZXing.Datamatrix.Encoder.SymbolInfo::symbols
	SymbolInfoU5BU5D_t2813938125* ___symbols_1;

public:
	inline static int32_t get_offset_of_PROD_SYMBOLS_0() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572_StaticFields, ___PROD_SYMBOLS_0)); }
	inline SymbolInfoU5BU5D_t2813938125* get_PROD_SYMBOLS_0() const { return ___PROD_SYMBOLS_0; }
	inline SymbolInfoU5BU5D_t2813938125** get_address_of_PROD_SYMBOLS_0() { return &___PROD_SYMBOLS_0; }
	inline void set_PROD_SYMBOLS_0(SymbolInfoU5BU5D_t2813938125* value)
	{
		___PROD_SYMBOLS_0 = value;
		Il2CppCodeGenWriteBarrier((&___PROD_SYMBOLS_0), value);
	}

	inline static int32_t get_offset_of_symbols_1() { return static_cast<int32_t>(offsetof(SymbolInfo_t1219041572_StaticFields, ___symbols_1)); }
	inline SymbolInfoU5BU5D_t2813938125* get_symbols_1() const { return ___symbols_1; }
	inline SymbolInfoU5BU5D_t2813938125** get_address_of_symbols_1() { return &___symbols_1; }
	inline void set_symbols_1(SymbolInfoU5BU5D_t2813938125* value)
	{
		___symbols_1 = value;
		Il2CppCodeGenWriteBarrier((&___symbols_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLINFO_T1219041572_H
#ifndef BITMATRIXPARSER_T3795662051_H
#define BITMATRIXPARSER_T3795662051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.BitMatrixParser
struct  BitMatrixParser_t3795662051  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.BitMatrixParser::mappingBitMatrix
	BitMatrix_t2873240750 * ___mappingBitMatrix_0;
	// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.BitMatrixParser::readMappingMatrix
	BitMatrix_t2873240750 * ___readMappingMatrix_1;
	// ZXing.Datamatrix.Internal.Version ZXing.Datamatrix.Internal.BitMatrixParser::version
	Version_t3496629239 * ___version_2;

public:
	inline static int32_t get_offset_of_mappingBitMatrix_0() { return static_cast<int32_t>(offsetof(BitMatrixParser_t3795662051, ___mappingBitMatrix_0)); }
	inline BitMatrix_t2873240750 * get_mappingBitMatrix_0() const { return ___mappingBitMatrix_0; }
	inline BitMatrix_t2873240750 ** get_address_of_mappingBitMatrix_0() { return &___mappingBitMatrix_0; }
	inline void set_mappingBitMatrix_0(BitMatrix_t2873240750 * value)
	{
		___mappingBitMatrix_0 = value;
		Il2CppCodeGenWriteBarrier((&___mappingBitMatrix_0), value);
	}

	inline static int32_t get_offset_of_readMappingMatrix_1() { return static_cast<int32_t>(offsetof(BitMatrixParser_t3795662051, ___readMappingMatrix_1)); }
	inline BitMatrix_t2873240750 * get_readMappingMatrix_1() const { return ___readMappingMatrix_1; }
	inline BitMatrix_t2873240750 ** get_address_of_readMappingMatrix_1() { return &___readMappingMatrix_1; }
	inline void set_readMappingMatrix_1(BitMatrix_t2873240750 * value)
	{
		___readMappingMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___readMappingMatrix_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(BitMatrixParser_t3795662051, ___version_2)); }
	inline Version_t3496629239 * get_version_2() const { return ___version_2; }
	inline Version_t3496629239 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3496629239 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMATRIXPARSER_T3795662051_H
#ifndef DATABLOCK_T532187477_H
#define DATABLOCK_T532187477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.DataBlock
struct  DataBlock_t532187477  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.DataBlock::numDataCodewords
	int32_t ___numDataCodewords_0;
	// System.Byte[] ZXing.Datamatrix.Internal.DataBlock::codewords
	ByteU5BU5D_t4116647657* ___codewords_1;

public:
	inline static int32_t get_offset_of_numDataCodewords_0() { return static_cast<int32_t>(offsetof(DataBlock_t532187477, ___numDataCodewords_0)); }
	inline int32_t get_numDataCodewords_0() const { return ___numDataCodewords_0; }
	inline int32_t* get_address_of_numDataCodewords_0() { return &___numDataCodewords_0; }
	inline void set_numDataCodewords_0(int32_t value)
	{
		___numDataCodewords_0 = value;
	}

	inline static int32_t get_offset_of_codewords_1() { return static_cast<int32_t>(offsetof(DataBlock_t532187477, ___codewords_1)); }
	inline ByteU5BU5D_t4116647657* get_codewords_1() const { return ___codewords_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_codewords_1() { return &___codewords_1; }
	inline void set_codewords_1(ByteU5BU5D_t4116647657* value)
	{
		___codewords_1 = value;
		Il2CppCodeGenWriteBarrier((&___codewords_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABLOCK_T532187477_H
#ifndef DECODEDBITSTREAMPARSER_T2742795254_H
#define DECODEDBITSTREAMPARSER_T2742795254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.DecodedBitStreamParser
struct  DecodedBitStreamParser_t2742795254  : public RuntimeObject
{
public:

public:
};

struct DecodedBitStreamParser_t2742795254_StaticFields
{
public:
	// System.Char[] ZXing.Datamatrix.Internal.DecodedBitStreamParser::C40_BASIC_SET_CHARS
	CharU5BU5D_t3528271667* ___C40_BASIC_SET_CHARS_0;
	// System.Char[] ZXing.Datamatrix.Internal.DecodedBitStreamParser::C40_SHIFT2_SET_CHARS
	CharU5BU5D_t3528271667* ___C40_SHIFT2_SET_CHARS_1;
	// System.Char[] ZXing.Datamatrix.Internal.DecodedBitStreamParser::TEXT_BASIC_SET_CHARS
	CharU5BU5D_t3528271667* ___TEXT_BASIC_SET_CHARS_2;
	// System.Char[] ZXing.Datamatrix.Internal.DecodedBitStreamParser::TEXT_SHIFT3_SET_CHARS
	CharU5BU5D_t3528271667* ___TEXT_SHIFT3_SET_CHARS_3;

public:
	inline static int32_t get_offset_of_C40_BASIC_SET_CHARS_0() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2742795254_StaticFields, ___C40_BASIC_SET_CHARS_0)); }
	inline CharU5BU5D_t3528271667* get_C40_BASIC_SET_CHARS_0() const { return ___C40_BASIC_SET_CHARS_0; }
	inline CharU5BU5D_t3528271667** get_address_of_C40_BASIC_SET_CHARS_0() { return &___C40_BASIC_SET_CHARS_0; }
	inline void set_C40_BASIC_SET_CHARS_0(CharU5BU5D_t3528271667* value)
	{
		___C40_BASIC_SET_CHARS_0 = value;
		Il2CppCodeGenWriteBarrier((&___C40_BASIC_SET_CHARS_0), value);
	}

	inline static int32_t get_offset_of_C40_SHIFT2_SET_CHARS_1() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2742795254_StaticFields, ___C40_SHIFT2_SET_CHARS_1)); }
	inline CharU5BU5D_t3528271667* get_C40_SHIFT2_SET_CHARS_1() const { return ___C40_SHIFT2_SET_CHARS_1; }
	inline CharU5BU5D_t3528271667** get_address_of_C40_SHIFT2_SET_CHARS_1() { return &___C40_SHIFT2_SET_CHARS_1; }
	inline void set_C40_SHIFT2_SET_CHARS_1(CharU5BU5D_t3528271667* value)
	{
		___C40_SHIFT2_SET_CHARS_1 = value;
		Il2CppCodeGenWriteBarrier((&___C40_SHIFT2_SET_CHARS_1), value);
	}

	inline static int32_t get_offset_of_TEXT_BASIC_SET_CHARS_2() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2742795254_StaticFields, ___TEXT_BASIC_SET_CHARS_2)); }
	inline CharU5BU5D_t3528271667* get_TEXT_BASIC_SET_CHARS_2() const { return ___TEXT_BASIC_SET_CHARS_2; }
	inline CharU5BU5D_t3528271667** get_address_of_TEXT_BASIC_SET_CHARS_2() { return &___TEXT_BASIC_SET_CHARS_2; }
	inline void set_TEXT_BASIC_SET_CHARS_2(CharU5BU5D_t3528271667* value)
	{
		___TEXT_BASIC_SET_CHARS_2 = value;
		Il2CppCodeGenWriteBarrier((&___TEXT_BASIC_SET_CHARS_2), value);
	}

	inline static int32_t get_offset_of_TEXT_SHIFT3_SET_CHARS_3() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t2742795254_StaticFields, ___TEXT_SHIFT3_SET_CHARS_3)); }
	inline CharU5BU5D_t3528271667* get_TEXT_SHIFT3_SET_CHARS_3() const { return ___TEXT_SHIFT3_SET_CHARS_3; }
	inline CharU5BU5D_t3528271667** get_address_of_TEXT_SHIFT3_SET_CHARS_3() { return &___TEXT_SHIFT3_SET_CHARS_3; }
	inline void set_TEXT_SHIFT3_SET_CHARS_3(CharU5BU5D_t3528271667* value)
	{
		___TEXT_SHIFT3_SET_CHARS_3 = value;
		Il2CppCodeGenWriteBarrier((&___TEXT_SHIFT3_SET_CHARS_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEDBITSTREAMPARSER_T2742795254_H
#ifndef DECODER_T1258845697_H
#define DECODER_T1258845697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Decoder
struct  Decoder_t1258845697  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.ReedSolomonDecoder ZXing.Datamatrix.Internal.Decoder::rsDecoder
	ReedSolomonDecoder_t4136138852 * ___rsDecoder_0;

public:
	inline static int32_t get_offset_of_rsDecoder_0() { return static_cast<int32_t>(offsetof(Decoder_t1258845697, ___rsDecoder_0)); }
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
#endif // DECODER_T1258845697_H
#ifndef DETECTOR_T4055904750_H
#define DETECTOR_T4055904750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Detector
struct  Detector_t4055904750  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Datamatrix.Internal.Detector::image
	BitMatrix_t2873240750 * ___image_0;
	// ZXing.Common.Detector.WhiteRectangleDetector ZXing.Datamatrix.Internal.Detector::rectangleDetector
	WhiteRectangleDetector_t3941737885 * ___rectangleDetector_1;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(Detector_t4055904750, ___image_0)); }
	inline BitMatrix_t2873240750 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2873240750 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2873240750 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_rectangleDetector_1() { return static_cast<int32_t>(offsetof(Detector_t4055904750, ___rectangleDetector_1)); }
	inline WhiteRectangleDetector_t3941737885 * get_rectangleDetector_1() const { return ___rectangleDetector_1; }
	inline WhiteRectangleDetector_t3941737885 ** get_address_of_rectangleDetector_1() { return &___rectangleDetector_1; }
	inline void set_rectangleDetector_1(WhiteRectangleDetector_t3941737885 * value)
	{
		___rectangleDetector_1 = value;
		Il2CppCodeGenWriteBarrier((&___rectangleDetector_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTOR_T4055904750_H
#ifndef RESULTPOINTSANDTRANSITIONS_T2174972026_H
#define RESULTPOINTSANDTRANSITIONS_T2174972026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions
struct  ResultPointsAndTransitions_t2174972026  : public RuntimeObject
{
public:
	// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::<From>k__BackingField
	ResultPoint_t1473505336 * ___U3CFromU3Ek__BackingField_0;
	// ZXing.ResultPoint ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::<To>k__BackingField
	ResultPoint_t1473505336 * ___U3CToU3Ek__BackingField_1;
	// System.Int32 ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitions::<Transitions>k__BackingField
	int32_t ___U3CTransitionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CFromU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResultPointsAndTransitions_t2174972026, ___U3CFromU3Ek__BackingField_0)); }
	inline ResultPoint_t1473505336 * get_U3CFromU3Ek__BackingField_0() const { return ___U3CFromU3Ek__BackingField_0; }
	inline ResultPoint_t1473505336 ** get_address_of_U3CFromU3Ek__BackingField_0() { return &___U3CFromU3Ek__BackingField_0; }
	inline void set_U3CFromU3Ek__BackingField_0(ResultPoint_t1473505336 * value)
	{
		___U3CFromU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFromU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CToU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResultPointsAndTransitions_t2174972026, ___U3CToU3Ek__BackingField_1)); }
	inline ResultPoint_t1473505336 * get_U3CToU3Ek__BackingField_1() const { return ___U3CToU3Ek__BackingField_1; }
	inline ResultPoint_t1473505336 ** get_address_of_U3CToU3Ek__BackingField_1() { return &___U3CToU3Ek__BackingField_1; }
	inline void set_U3CToU3Ek__BackingField_1(ResultPoint_t1473505336 * value)
	{
		___U3CToU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CToU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CTransitionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResultPointsAndTransitions_t2174972026, ___U3CTransitionsU3Ek__BackingField_2)); }
	inline int32_t get_U3CTransitionsU3Ek__BackingField_2() const { return ___U3CTransitionsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTransitionsU3Ek__BackingField_2() { return &___U3CTransitionsU3Ek__BackingField_2; }
	inline void set_U3CTransitionsU3Ek__BackingField_2(int32_t value)
	{
		___U3CTransitionsU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINTSANDTRANSITIONS_T2174972026_H
#ifndef RESULTPOINTSANDTRANSITIONSCOMPARATOR_T424522292_H
#define RESULTPOINTSANDTRANSITIONSCOMPARATOR_T424522292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Detector/ResultPointsAndTransitionsComparator
struct  ResultPointsAndTransitionsComparator_t424522292  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINTSANDTRANSITIONSCOMPARATOR_T424522292_H
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
#ifndef BITMATRIXPARSER_T505136508_H
#define BITMATRIXPARSER_T505136508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Maxicode.Internal.BitMatrixParser
struct  BitMatrixParser_t505136508  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Maxicode.Internal.BitMatrixParser::bitMatrix
	BitMatrix_t2873240750 * ___bitMatrix_1;

public:
	inline static int32_t get_offset_of_bitMatrix_1() { return static_cast<int32_t>(offsetof(BitMatrixParser_t505136508, ___bitMatrix_1)); }
	inline BitMatrix_t2873240750 * get_bitMatrix_1() const { return ___bitMatrix_1; }
	inline BitMatrix_t2873240750 ** get_address_of_bitMatrix_1() { return &___bitMatrix_1; }
	inline void set_bitMatrix_1(BitMatrix_t2873240750 * value)
	{
		___bitMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___bitMatrix_1), value);
	}
};

struct BitMatrixParser_t505136508_StaticFields
{
public:
	// System.Int32[][] ZXing.Maxicode.Internal.BitMatrixParser::BITNR
	Int32U5BU5DU5BU5D_t3365920845* ___BITNR_0;

public:
	inline static int32_t get_offset_of_BITNR_0() { return static_cast<int32_t>(offsetof(BitMatrixParser_t505136508_StaticFields, ___BITNR_0)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_BITNR_0() const { return ___BITNR_0; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_BITNR_0() { return &___BITNR_0; }
	inline void set_BITNR_0(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___BITNR_0 = value;
		Il2CppCodeGenWriteBarrier((&___BITNR_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMATRIXPARSER_T505136508_H
#ifndef DECODEDBITSTREAMPARSER_T146985818_H
#define DECODEDBITSTREAMPARSER_T146985818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Maxicode.Internal.DecodedBitStreamParser
struct  DecodedBitStreamParser_t146985818  : public RuntimeObject
{
public:

public:
};

struct DecodedBitStreamParser_t146985818_StaticFields
{
public:
	// System.String[] ZXing.Maxicode.Internal.DecodedBitStreamParser::SETS
	StringU5BU5D_t1281789340* ___SETS_0;

public:
	inline static int32_t get_offset_of_SETS_0() { return static_cast<int32_t>(offsetof(DecodedBitStreamParser_t146985818_StaticFields, ___SETS_0)); }
	inline StringU5BU5D_t1281789340* get_SETS_0() const { return ___SETS_0; }
	inline StringU5BU5D_t1281789340** get_address_of_SETS_0() { return &___SETS_0; }
	inline void set_SETS_0(StringU5BU5D_t1281789340* value)
	{
		___SETS_0 = value;
		Il2CppCodeGenWriteBarrier((&___SETS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEDBITSTREAMPARSER_T146985818_H
#ifndef DECODER_T925060097_H
#define DECODER_T925060097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Maxicode.Internal.Decoder
struct  Decoder_t925060097  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.ReedSolomonDecoder ZXing.Maxicode.Internal.Decoder::rsDecoder
	ReedSolomonDecoder_t4136138852 * ___rsDecoder_0;

public:
	inline static int32_t get_offset_of_rsDecoder_0() { return static_cast<int32_t>(offsetof(Decoder_t925060097, ___rsDecoder_0)); }
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
#endif // DECODER_T925060097_H
#ifndef MAXICODEREADER_T1136775217_H
#define MAXICODEREADER_T1136775217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Maxicode.MaxiCodeReader
struct  MaxiCodeReader_t1136775217  : public RuntimeObject
{
public:
	// ZXing.Maxicode.Internal.Decoder ZXing.Maxicode.MaxiCodeReader::decoder
	Decoder_t925060097 * ___decoder_1;

public:
	inline static int32_t get_offset_of_decoder_1() { return static_cast<int32_t>(offsetof(MaxiCodeReader_t1136775217, ___decoder_1)); }
	inline Decoder_t925060097 * get_decoder_1() const { return ___decoder_1; }
	inline Decoder_t925060097 ** get_address_of_decoder_1() { return &___decoder_1; }
	inline void set_decoder_1(Decoder_t925060097 * value)
	{
		___decoder_1 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_1), value);
	}
};

struct MaxiCodeReader_t1136775217_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.Maxicode.MaxiCodeReader::NO_POINTS
	ResultPointU5BU5D_t569055209* ___NO_POINTS_0;

public:
	inline static int32_t get_offset_of_NO_POINTS_0() { return static_cast<int32_t>(offsetof(MaxiCodeReader_t1136775217_StaticFields, ___NO_POINTS_0)); }
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
#endif // MAXICODEREADER_T1136775217_H
#ifndef GENERICMULTIPLEBARCODEREADER_T1391752000_H
#define GENERICMULTIPLEBARCODEREADER_T1391752000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Multi.GenericMultipleBarcodeReader
struct  GenericMultipleBarcodeReader_t1391752000  : public RuntimeObject
{
public:
	// ZXing.Reader ZXing.Multi.GenericMultipleBarcodeReader::_delegate
	RuntimeObject* ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(GenericMultipleBarcodeReader_t1391752000, ____delegate_0)); }
	inline RuntimeObject* get__delegate_0() const { return ____delegate_0; }
	inline RuntimeObject** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(RuntimeObject* value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICMULTIPLEBARCODEREADER_T1391752000_H
#ifndef MODULESIZECOMPARATOR_T512736973_H
#define MODULESIZECOMPARATOR_T512736973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder/ModuleSizeComparator
struct  ModuleSizeComparator_t512736973  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULESIZECOMPARATOR_T512736973_H
#ifndef MULTIFORMATREADER_T1236949585_H
#define MULTIFORMATREADER_T1236949585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.MultiFormatReader
struct  MultiFormatReader_t1236949585  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object> ZXing.MultiFormatReader::hints
	RuntimeObject* ___hints_0;
	// System.Collections.Generic.IList`1<ZXing.Reader> ZXing.MultiFormatReader::readers
	RuntimeObject* ___readers_1;

public:
	inline static int32_t get_offset_of_hints_0() { return static_cast<int32_t>(offsetof(MultiFormatReader_t1236949585, ___hints_0)); }
	inline RuntimeObject* get_hints_0() const { return ___hints_0; }
	inline RuntimeObject** get_address_of_hints_0() { return &___hints_0; }
	inline void set_hints_0(RuntimeObject* value)
	{
		___hints_0 = value;
		Il2CppCodeGenWriteBarrier((&___hints_0), value);
	}

	inline static int32_t get_offset_of_readers_1() { return static_cast<int32_t>(offsetof(MultiFormatReader_t1236949585, ___readers_1)); }
	inline RuntimeObject* get_readers_1() const { return ___readers_1; }
	inline RuntimeObject** get_address_of_readers_1() { return &___readers_1; }
	inline void set_readers_1(RuntimeObject* value)
	{
		___readers_1 = value;
		Il2CppCodeGenWriteBarrier((&___readers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFORMATREADER_T1236949585_H
#ifndef MULTIFORMATWRITER_T228917322_H
#define MULTIFORMATWRITER_T228917322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.MultiFormatWriter
struct  MultiFormatWriter_t228917322  : public RuntimeObject
{
public:

public:
};

struct MultiFormatWriter_t228917322_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<ZXing.BarcodeFormat,System.Func`1<ZXing.Writer>> ZXing.MultiFormatWriter::formatMap
	RuntimeObject* ___formatMap_0;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegatee
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegatef
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate10
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate11
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate12
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate13
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate14
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate15
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate16
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate17
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate18
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate19
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12;
	// System.Func`1<ZXing.Writer> ZXing.MultiFormatWriter::CS$<>9__CachedAnonymousMethodDelegate1a
	Func_1_t1423917049 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13;

public:
	inline static int32_t get_offset_of_formatMap_0() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___formatMap_0)); }
	inline RuntimeObject* get_formatMap_0() const { return ___formatMap_0; }
	inline RuntimeObject** get_address_of_formatMap_0() { return &___formatMap_0; }
	inline void set_formatMap_0(RuntimeObject* value)
	{
		___formatMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___formatMap_0), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13() { return static_cast<int32_t>(offsetof(MultiFormatWriter_t228917322_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13)); }
	inline Func_1_t1423917049 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13; }
	inline Func_1_t1423917049 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13(Func_1_t1423917049 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFORMATWRITER_T228917322_H
#ifndef EANMANUFACTURERORGSUPPORT_T3548211393_H
#define EANMANUFACTURERORGSUPPORT_T3548211393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EANManufacturerOrgSupport
struct  EANManufacturerOrgSupport_t3548211393  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32[]> ZXing.OneD.EANManufacturerOrgSupport::ranges
	List_1_t1857321114 * ___ranges_0;
	// System.Collections.Generic.List`1<System.String> ZXing.OneD.EANManufacturerOrgSupport::countryIdentifiers
	List_1_t3319525431 * ___countryIdentifiers_1;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(EANManufacturerOrgSupport_t3548211393, ___ranges_0)); }
	inline List_1_t1857321114 * get_ranges_0() const { return ___ranges_0; }
	inline List_1_t1857321114 ** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(List_1_t1857321114 * value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_countryIdentifiers_1() { return static_cast<int32_t>(offsetof(EANManufacturerOrgSupport_t3548211393, ___countryIdentifiers_1)); }
	inline List_1_t3319525431 * get_countryIdentifiers_1() const { return ___countryIdentifiers_1; }
	inline List_1_t3319525431 ** get_address_of_countryIdentifiers_1() { return &___countryIdentifiers_1; }
	inline void set_countryIdentifiers_1(List_1_t3319525431 * value)
	{
		___countryIdentifiers_1 = value;
		Il2CppCodeGenWriteBarrier((&___countryIdentifiers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EANMANUFACTURERORGSUPPORT_T3548211393_H
#ifndef ONEDREADER_T217072914_H
#define ONEDREADER_T217072914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.OneDReader
struct  OneDReader_t217072914  : public RuntimeObject
{
public:

public:
};

struct OneDReader_t217072914_StaticFields
{
public:
	// System.Int32 ZXing.OneD.OneDReader::INTEGER_MATH_SHIFT
	int32_t ___INTEGER_MATH_SHIFT_0;
	// System.Int32 ZXing.OneD.OneDReader::PATTERN_MATCH_RESULT_SCALE_FACTOR
	int32_t ___PATTERN_MATCH_RESULT_SCALE_FACTOR_1;

public:
	inline static int32_t get_offset_of_INTEGER_MATH_SHIFT_0() { return static_cast<int32_t>(offsetof(OneDReader_t217072914_StaticFields, ___INTEGER_MATH_SHIFT_0)); }
	inline int32_t get_INTEGER_MATH_SHIFT_0() const { return ___INTEGER_MATH_SHIFT_0; }
	inline int32_t* get_address_of_INTEGER_MATH_SHIFT_0() { return &___INTEGER_MATH_SHIFT_0; }
	inline void set_INTEGER_MATH_SHIFT_0(int32_t value)
	{
		___INTEGER_MATH_SHIFT_0 = value;
	}

	inline static int32_t get_offset_of_PATTERN_MATCH_RESULT_SCALE_FACTOR_1() { return static_cast<int32_t>(offsetof(OneDReader_t217072914_StaticFields, ___PATTERN_MATCH_RESULT_SCALE_FACTOR_1)); }
	inline int32_t get_PATTERN_MATCH_RESULT_SCALE_FACTOR_1() const { return ___PATTERN_MATCH_RESULT_SCALE_FACTOR_1; }
	inline int32_t* get_address_of_PATTERN_MATCH_RESULT_SCALE_FACTOR_1() { return &___PATTERN_MATCH_RESULT_SCALE_FACTOR_1; }
	inline void set_PATTERN_MATCH_RESULT_SCALE_FACTOR_1(int32_t value)
	{
		___PATTERN_MATCH_RESULT_SCALE_FACTOR_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEDREADER_T217072914_H
#ifndef ONEDIMENSIONALCODEWRITER_T460700247_H
#define ONEDIMENSIONALCODEWRITER_T460700247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.OneDimensionalCodeWriter
struct  OneDimensionalCodeWriter_t460700247  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEDIMENSIONALCODEWRITER_T460700247_H
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
#ifndef FINDERPATTERNFINDER_T3261542617_H
#define FINDERPATTERNFINDER_T3261542617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternFinder
struct  FinderPatternFinder_t3261542617  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.FinderPatternFinder::image
	BitMatrix_t2873240750 * ___image_0;
	// System.Collections.Generic.List`1<ZXing.QrCode.Internal.FinderPattern> ZXing.QrCode.Internal.FinderPatternFinder::possibleCenters
	List_1_t3609903935 * ___possibleCenters_1;
	// System.Boolean ZXing.QrCode.Internal.FinderPatternFinder::hasSkipped
	bool ___hasSkipped_2;
	// System.Int32[] ZXing.QrCode.Internal.FinderPatternFinder::crossCheckStateCount
	Int32U5BU5D_t385246372* ___crossCheckStateCount_3;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.FinderPatternFinder::resultPointCallback
	ResultPointCallback_t922799438 * ___resultPointCallback_4;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t3261542617, ___image_0)); }
	inline BitMatrix_t2873240750 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2873240750 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2873240750 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_possibleCenters_1() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t3261542617, ___possibleCenters_1)); }
	inline List_1_t3609903935 * get_possibleCenters_1() const { return ___possibleCenters_1; }
	inline List_1_t3609903935 ** get_address_of_possibleCenters_1() { return &___possibleCenters_1; }
	inline void set_possibleCenters_1(List_1_t3609903935 * value)
	{
		___possibleCenters_1 = value;
		Il2CppCodeGenWriteBarrier((&___possibleCenters_1), value);
	}

	inline static int32_t get_offset_of_hasSkipped_2() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t3261542617, ___hasSkipped_2)); }
	inline bool get_hasSkipped_2() const { return ___hasSkipped_2; }
	inline bool* get_address_of_hasSkipped_2() { return &___hasSkipped_2; }
	inline void set_hasSkipped_2(bool value)
	{
		___hasSkipped_2 = value;
	}

	inline static int32_t get_offset_of_crossCheckStateCount_3() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t3261542617, ___crossCheckStateCount_3)); }
	inline Int32U5BU5D_t385246372* get_crossCheckStateCount_3() const { return ___crossCheckStateCount_3; }
	inline Int32U5BU5D_t385246372** get_address_of_crossCheckStateCount_3() { return &___crossCheckStateCount_3; }
	inline void set_crossCheckStateCount_3(Int32U5BU5D_t385246372* value)
	{
		___crossCheckStateCount_3 = value;
		Il2CppCodeGenWriteBarrier((&___crossCheckStateCount_3), value);
	}

	inline static int32_t get_offset_of_resultPointCallback_4() { return static_cast<int32_t>(offsetof(FinderPatternFinder_t3261542617, ___resultPointCallback_4)); }
	inline ResultPointCallback_t922799438 * get_resultPointCallback_4() const { return ___resultPointCallback_4; }
	inline ResultPointCallback_t922799438 ** get_address_of_resultPointCallback_4() { return &___resultPointCallback_4; }
	inline void set_resultPointCallback_4(ResultPointCallback_t922799438 * value)
	{
		___resultPointCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___resultPointCallback_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINDERPATTERNFINDER_T3261542617_H
#ifndef CENTERCOMPARATOR_T1347568865_H
#define CENTERCOMPARATOR_T1347568865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator
struct  CenterComparator_t1347568865  : public RuntimeObject
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPatternFinder/CenterComparator::average
	float ___average_0;

public:
	inline static int32_t get_offset_of_average_0() { return static_cast<int32_t>(offsetof(CenterComparator_t1347568865, ___average_0)); }
	inline float get_average_0() const { return ___average_0; }
	inline float* get_address_of_average_0() { return &___average_0; }
	inline void set_average_0(float value)
	{
		___average_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CENTERCOMPARATOR_T1347568865_H
#ifndef FURTHESTFROMAVERAGECOMPARATOR_T508768559_H
#define FURTHESTFROMAVERAGECOMPARATOR_T508768559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator
struct  FurthestFromAverageComparator_t508768559  : public RuntimeObject
{
public:
	// System.Single ZXing.QrCode.Internal.FinderPatternFinder/FurthestFromAverageComparator::average
	float ___average_0;

public:
	inline static int32_t get_offset_of_average_0() { return static_cast<int32_t>(offsetof(FurthestFromAverageComparator_t508768559, ___average_0)); }
	inline float get_average_0() const { return ___average_0; }
	inline float* get_address_of_average_0() { return &___average_0; }
	inline void set_average_0(float value)
	{
		___average_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FURTHESTFROMAVERAGECOMPARATOR_T508768559_H
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
#ifndef AZTECDETECTORRESULT_T2380792366_H
#define AZTECDETECTORRESULT_T2380792366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.AztecDetectorResult
struct  AztecDetectorResult_t2380792366  : public DetectorResult_t2934418424
{
public:
	// System.Boolean ZXing.Aztec.Internal.AztecDetectorResult::<Compact>k__BackingField
	bool ___U3CCompactU3Ek__BackingField_2;
	// System.Int32 ZXing.Aztec.Internal.AztecDetectorResult::<NbDatablocks>k__BackingField
	int32_t ___U3CNbDatablocksU3Ek__BackingField_3;
	// System.Int32 ZXing.Aztec.Internal.AztecDetectorResult::<NbLayers>k__BackingField
	int32_t ___U3CNbLayersU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CCompactU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AztecDetectorResult_t2380792366, ___U3CCompactU3Ek__BackingField_2)); }
	inline bool get_U3CCompactU3Ek__BackingField_2() const { return ___U3CCompactU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CCompactU3Ek__BackingField_2() { return &___U3CCompactU3Ek__BackingField_2; }
	inline void set_U3CCompactU3Ek__BackingField_2(bool value)
	{
		___U3CCompactU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CNbDatablocksU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AztecDetectorResult_t2380792366, ___U3CNbDatablocksU3Ek__BackingField_3)); }
	inline int32_t get_U3CNbDatablocksU3Ek__BackingField_3() const { return ___U3CNbDatablocksU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CNbDatablocksU3Ek__BackingField_3() { return &___U3CNbDatablocksU3Ek__BackingField_3; }
	inline void set_U3CNbDatablocksU3Ek__BackingField_3(int32_t value)
	{
		___U3CNbDatablocksU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNbLayersU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AztecDetectorResult_t2380792366, ___U3CNbLayersU3Ek__BackingField_4)); }
	inline int32_t get_U3CNbLayersU3Ek__BackingField_4() const { return ___U3CNbLayersU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CNbLayersU3Ek__BackingField_4() { return &___U3CNbLayersU3Ek__BackingField_4; }
	inline void set_U3CNbLayersU3Ek__BackingField_4(int32_t value)
	{
		___U3CNbLayersU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AZTECDETECTORRESULT_T2380792366_H
#ifndef BINARYSHIFTTOKEN_T838705855_H
#define BINARYSHIFTTOKEN_T838705855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.BinaryShiftToken
struct  BinaryShiftToken_t838705855  : public Token_t3482754442
{
public:
	// System.Int16 ZXing.Aztec.Internal.BinaryShiftToken::binaryShiftStart
	int16_t ___binaryShiftStart_2;
	// System.Int16 ZXing.Aztec.Internal.BinaryShiftToken::binaryShiftByteCount
	int16_t ___binaryShiftByteCount_3;

public:
	inline static int32_t get_offset_of_binaryShiftStart_2() { return static_cast<int32_t>(offsetof(BinaryShiftToken_t838705855, ___binaryShiftStart_2)); }
	inline int16_t get_binaryShiftStart_2() const { return ___binaryShiftStart_2; }
	inline int16_t* get_address_of_binaryShiftStart_2() { return &___binaryShiftStart_2; }
	inline void set_binaryShiftStart_2(int16_t value)
	{
		___binaryShiftStart_2 = value;
	}

	inline static int32_t get_offset_of_binaryShiftByteCount_3() { return static_cast<int32_t>(offsetof(BinaryShiftToken_t838705855, ___binaryShiftByteCount_3)); }
	inline int16_t get_binaryShiftByteCount_3() const { return ___binaryShiftByteCount_3; }
	inline int16_t* get_address_of_binaryShiftByteCount_3() { return &___binaryShiftByteCount_3; }
	inline void set_binaryShiftByteCount_3(int16_t value)
	{
		___binaryShiftByteCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYSHIFTTOKEN_T838705855_H
#ifndef SIMPLETOKEN_T259961060_H
#define SIMPLETOKEN_T259961060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.SimpleToken
struct  SimpleToken_t259961060  : public Token_t3482754442
{
public:
	// System.Int16 ZXing.Aztec.Internal.SimpleToken::value
	int16_t ___value_2;
	// System.Int16 ZXing.Aztec.Internal.SimpleToken::bitCount
	int16_t ___bitCount_3;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SimpleToken_t259961060, ___value_2)); }
	inline int16_t get_value_2() const { return ___value_2; }
	inline int16_t* get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(int16_t value)
	{
		___value_2 = value;
	}

	inline static int32_t get_offset_of_bitCount_3() { return static_cast<int32_t>(offsetof(SimpleToken_t259961060, ___bitCount_3)); }
	inline int16_t get_bitCount_3() const { return ___bitCount_3; }
	inline int16_t* get_address_of_bitCount_3() { return &___bitCount_3; }
	inline void set_bitCount_3(int16_t value)
	{
		___bitCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLETOKEN_T259961060_H
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
#ifndef CHARACTERSETECI_T183411051_H
#define CHARACTERSETECI_T183411051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.CharacterSetECI
struct  CharacterSetECI_t183411051  : public ECI_t82143622
{
public:
	// System.String ZXing.Common.CharacterSetECI::encodingName
	String_t* ___encodingName_3;

public:
	inline static int32_t get_offset_of_encodingName_3() { return static_cast<int32_t>(offsetof(CharacterSetECI_t183411051, ___encodingName_3)); }
	inline String_t* get_encodingName_3() const { return ___encodingName_3; }
	inline String_t** get_address_of_encodingName_3() { return &___encodingName_3; }
	inline void set_encodingName_3(String_t* value)
	{
		___encodingName_3 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_3), value);
	}
};

struct CharacterSetECI_t183411051_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,ZXing.Common.CharacterSetECI> ZXing.Common.CharacterSetECI::VALUE_TO_ECI
	RuntimeObject* ___VALUE_TO_ECI_1;
	// System.Collections.Generic.IDictionary`2<System.String,ZXing.Common.CharacterSetECI> ZXing.Common.CharacterSetECI::NAME_TO_ECI
	RuntimeObject* ___NAME_TO_ECI_2;

public:
	inline static int32_t get_offset_of_VALUE_TO_ECI_1() { return static_cast<int32_t>(offsetof(CharacterSetECI_t183411051_StaticFields, ___VALUE_TO_ECI_1)); }
	inline RuntimeObject* get_VALUE_TO_ECI_1() const { return ___VALUE_TO_ECI_1; }
	inline RuntimeObject** get_address_of_VALUE_TO_ECI_1() { return &___VALUE_TO_ECI_1; }
	inline void set_VALUE_TO_ECI_1(RuntimeObject* value)
	{
		___VALUE_TO_ECI_1 = value;
		Il2CppCodeGenWriteBarrier((&___VALUE_TO_ECI_1), value);
	}

	inline static int32_t get_offset_of_NAME_TO_ECI_2() { return static_cast<int32_t>(offsetof(CharacterSetECI_t183411051_StaticFields, ___NAME_TO_ECI_2)); }
	inline RuntimeObject* get_NAME_TO_ECI_2() const { return ___NAME_TO_ECI_2; }
	inline RuntimeObject** get_address_of_NAME_TO_ECI_2() { return &___NAME_TO_ECI_2; }
	inline void set_NAME_TO_ECI_2(RuntimeObject* value)
	{
		___NAME_TO_ECI_2 = value;
		Il2CppCodeGenWriteBarrier((&___NAME_TO_ECI_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERSETECI_T183411051_H
#ifndef DEFAULTGRIDSAMPLER_T973399702_H
#define DEFAULTGRIDSAMPLER_T973399702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DefaultGridSampler
struct  DefaultGridSampler_t973399702  : public GridSampler_t2652281052
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTGRIDSAMPLER_T973399702_H
#ifndef GLOBALHISTOGRAMBINARIZER_T2081160524_H
#define GLOBALHISTOGRAMBINARIZER_T2081160524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.GlobalHistogramBinarizer
struct  GlobalHistogramBinarizer_t2081160524  : public Binarizer_t2848741980
{
public:
	// System.Byte[] ZXing.Common.GlobalHistogramBinarizer::luminances
	ByteU5BU5D_t4116647657* ___luminances_2;
	// System.Int32[] ZXing.Common.GlobalHistogramBinarizer::buckets
	Int32U5BU5D_t385246372* ___buckets_3;

public:
	inline static int32_t get_offset_of_luminances_2() { return static_cast<int32_t>(offsetof(GlobalHistogramBinarizer_t2081160524, ___luminances_2)); }
	inline ByteU5BU5D_t4116647657* get_luminances_2() const { return ___luminances_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_luminances_2() { return &___luminances_2; }
	inline void set_luminances_2(ByteU5BU5D_t4116647657* value)
	{
		___luminances_2 = value;
		Il2CppCodeGenWriteBarrier((&___luminances_2), value);
	}

	inline static int32_t get_offset_of_buckets_3() { return static_cast<int32_t>(offsetof(GlobalHistogramBinarizer_t2081160524, ___buckets_3)); }
	inline Int32U5BU5D_t385246372* get_buckets_3() const { return ___buckets_3; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_3() { return &___buckets_3; }
	inline void set_buckets_3(Int32U5BU5D_t385246372* value)
	{
		___buckets_3 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_3), value);
	}
};

struct GlobalHistogramBinarizer_t2081160524_StaticFields
{
public:
	// System.Byte[] ZXing.Common.GlobalHistogramBinarizer::EMPTY
	ByteU5BU5D_t4116647657* ___EMPTY_1;

public:
	inline static int32_t get_offset_of_EMPTY_1() { return static_cast<int32_t>(offsetof(GlobalHistogramBinarizer_t2081160524_StaticFields, ___EMPTY_1)); }
	inline ByteU5BU5D_t4116647657* get_EMPTY_1() const { return ___EMPTY_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_EMPTY_1() { return &___EMPTY_1; }
	inline void set_EMPTY_1(ByteU5BU5D_t4116647657* value)
	{
		___EMPTY_1 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALHISTOGRAMBINARIZER_T2081160524_H
#ifndef DATAMATRIXSYMBOLINFO144_T265721212_H
#define DATAMATRIXSYMBOLINFO144_T265721212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.DataMatrixSymbolInfo144
struct  DataMatrixSymbolInfo144_t265721212  : public SymbolInfo_t1219041572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAMATRIXSYMBOLINFO144_T265721212_H
#ifndef TEXTENCODER_T1610847839_H
#define TEXTENCODER_T1610847839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.TextEncoder
struct  TextEncoder_t1610847839  : public C40Encoder_t4278006487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTENCODER_T1610847839_H
#ifndef X12ENCODER_T1155741248_H
#define X12ENCODER_T1155741248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.X12Encoder
struct  X12Encoder_t1155741248  : public C40Encoder_t4278006487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X12ENCODER_T1155741248_H
#ifndef INVERTEDLUMINANCESOURCE_T137894931_H
#define INVERTEDLUMINANCESOURCE_T137894931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.InvertedLuminanceSource
struct  InvertedLuminanceSource_t137894931  : public LuminanceSource_t3713829503
{
public:
	// ZXing.LuminanceSource ZXing.InvertedLuminanceSource::delegate
	LuminanceSource_t3713829503 * ___delegate_2;
	// System.Byte[] ZXing.InvertedLuminanceSource::invertedMatrix
	ByteU5BU5D_t4116647657* ___invertedMatrix_3;

public:
	inline static int32_t get_offset_of_delegate_2() { return static_cast<int32_t>(offsetof(InvertedLuminanceSource_t137894931, ___delegate_2)); }
	inline LuminanceSource_t3713829503 * get_delegate_2() const { return ___delegate_2; }
	inline LuminanceSource_t3713829503 ** get_address_of_delegate_2() { return &___delegate_2; }
	inline void set_delegate_2(LuminanceSource_t3713829503 * value)
	{
		___delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___delegate_2), value);
	}

	inline static int32_t get_offset_of_invertedMatrix_3() { return static_cast<int32_t>(offsetof(InvertedLuminanceSource_t137894931, ___invertedMatrix_3)); }
	inline ByteU5BU5D_t4116647657* get_invertedMatrix_3() const { return ___invertedMatrix_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_invertedMatrix_3() { return &___invertedMatrix_3; }
	inline void set_invertedMatrix_3(ByteU5BU5D_t4116647657* value)
	{
		___invertedMatrix_3 = value;
		Il2CppCodeGenWriteBarrier((&___invertedMatrix_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVERTEDLUMINANCESOURCE_T137894931_H
#ifndef MULTIDETECTOR_T860154179_H
#define MULTIDETECTOR_T860154179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Multi.QrCode.Internal.MultiDetector
struct  MultiDetector_t860154179  : public Detector_t1946199639
{
public:

public:
};

struct MultiDetector_t860154179_StaticFields
{
public:
	// ZXing.Common.DetectorResult[] ZXing.Multi.QrCode.Internal.MultiDetector::EMPTY_DETECTOR_RESULTS
	DetectorResultU5BU5D_t1261636905* ___EMPTY_DETECTOR_RESULTS_2;

public:
	inline static int32_t get_offset_of_EMPTY_DETECTOR_RESULTS_2() { return static_cast<int32_t>(offsetof(MultiDetector_t860154179_StaticFields, ___EMPTY_DETECTOR_RESULTS_2)); }
	inline DetectorResultU5BU5D_t1261636905* get_EMPTY_DETECTOR_RESULTS_2() const { return ___EMPTY_DETECTOR_RESULTS_2; }
	inline DetectorResultU5BU5D_t1261636905** get_address_of_EMPTY_DETECTOR_RESULTS_2() { return &___EMPTY_DETECTOR_RESULTS_2; }
	inline void set_EMPTY_DETECTOR_RESULTS_2(DetectorResultU5BU5D_t1261636905* value)
	{
		___EMPTY_DETECTOR_RESULTS_2 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_DETECTOR_RESULTS_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIDETECTOR_T860154179_H
#ifndef MULTIFINDERPATTERNFINDER_T2074636279_H
#define MULTIFINDERPATTERNFINDER_T2074636279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder
struct  MultiFinderPatternFinder_t2074636279  : public FinderPatternFinder_t3261542617
{
public:

public:
};

struct MultiFinderPatternFinder_t2074636279_StaticFields
{
public:
	// ZXing.QrCode.Internal.FinderPatternInfo[] ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::EMPTY_RESULT_ARRAY
	FinderPatternInfoU5BU5D_t2935450768* ___EMPTY_RESULT_ARRAY_5;
	// System.Single ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::MAX_MODULE_COUNT_PER_EDGE
	float ___MAX_MODULE_COUNT_PER_EDGE_6;
	// System.Single ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::MIN_MODULE_COUNT_PER_EDGE
	float ___MIN_MODULE_COUNT_PER_EDGE_7;
	// System.Single ZXing.Multi.QrCode.Internal.MultiFinderPatternFinder::DIFF_MODSIZE_CUTOFF_PERCENT
	float ___DIFF_MODSIZE_CUTOFF_PERCENT_8;

public:
	inline static int32_t get_offset_of_EMPTY_RESULT_ARRAY_5() { return static_cast<int32_t>(offsetof(MultiFinderPatternFinder_t2074636279_StaticFields, ___EMPTY_RESULT_ARRAY_5)); }
	inline FinderPatternInfoU5BU5D_t2935450768* get_EMPTY_RESULT_ARRAY_5() const { return ___EMPTY_RESULT_ARRAY_5; }
	inline FinderPatternInfoU5BU5D_t2935450768** get_address_of_EMPTY_RESULT_ARRAY_5() { return &___EMPTY_RESULT_ARRAY_5; }
	inline void set_EMPTY_RESULT_ARRAY_5(FinderPatternInfoU5BU5D_t2935450768* value)
	{
		___EMPTY_RESULT_ARRAY_5 = value;
		Il2CppCodeGenWriteBarrier((&___EMPTY_RESULT_ARRAY_5), value);
	}

	inline static int32_t get_offset_of_MAX_MODULE_COUNT_PER_EDGE_6() { return static_cast<int32_t>(offsetof(MultiFinderPatternFinder_t2074636279_StaticFields, ___MAX_MODULE_COUNT_PER_EDGE_6)); }
	inline float get_MAX_MODULE_COUNT_PER_EDGE_6() const { return ___MAX_MODULE_COUNT_PER_EDGE_6; }
	inline float* get_address_of_MAX_MODULE_COUNT_PER_EDGE_6() { return &___MAX_MODULE_COUNT_PER_EDGE_6; }
	inline void set_MAX_MODULE_COUNT_PER_EDGE_6(float value)
	{
		___MAX_MODULE_COUNT_PER_EDGE_6 = value;
	}

	inline static int32_t get_offset_of_MIN_MODULE_COUNT_PER_EDGE_7() { return static_cast<int32_t>(offsetof(MultiFinderPatternFinder_t2074636279_StaticFields, ___MIN_MODULE_COUNT_PER_EDGE_7)); }
	inline float get_MIN_MODULE_COUNT_PER_EDGE_7() const { return ___MIN_MODULE_COUNT_PER_EDGE_7; }
	inline float* get_address_of_MIN_MODULE_COUNT_PER_EDGE_7() { return &___MIN_MODULE_COUNT_PER_EDGE_7; }
	inline void set_MIN_MODULE_COUNT_PER_EDGE_7(float value)
	{
		___MIN_MODULE_COUNT_PER_EDGE_7 = value;
	}

	inline static int32_t get_offset_of_DIFF_MODSIZE_CUTOFF_PERCENT_8() { return static_cast<int32_t>(offsetof(MultiFinderPatternFinder_t2074636279_StaticFields, ___DIFF_MODSIZE_CUTOFF_PERCENT_8)); }
	inline float get_DIFF_MODSIZE_CUTOFF_PERCENT_8() const { return ___DIFF_MODSIZE_CUTOFF_PERCENT_8; }
	inline float* get_address_of_DIFF_MODSIZE_CUTOFF_PERCENT_8() { return &___DIFF_MODSIZE_CUTOFF_PERCENT_8; }
	inline void set_DIFF_MODSIZE_CUTOFF_PERCENT_8(float value)
	{
		___DIFF_MODSIZE_CUTOFF_PERCENT_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFINDERPATTERNFINDER_T2074636279_H
#ifndef QRCODEMULTIREADER_T4082127310_H
#define QRCODEMULTIREADER_T4082127310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Multi.QrCode.QRCodeMultiReader
struct  QRCodeMultiReader_t4082127310  : public QRCodeReader_t3363387111
{
public:

public:
};

struct QRCodeMultiReader_t4082127310_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.Multi.QrCode.QRCodeMultiReader::NO_POINTS
	ResultPointU5BU5D_t569055209* ___NO_POINTS_2;

public:
	inline static int32_t get_offset_of_NO_POINTS_2() { return static_cast<int32_t>(offsetof(QRCodeMultiReader_t4082127310_StaticFields, ___NO_POINTS_2)); }
	inline ResultPointU5BU5D_t569055209* get_NO_POINTS_2() const { return ___NO_POINTS_2; }
	inline ResultPointU5BU5D_t569055209** get_address_of_NO_POINTS_2() { return &___NO_POINTS_2; }
	inline void set_NO_POINTS_2(ResultPointU5BU5D_t569055209* value)
	{
		___NO_POINTS_2 = value;
		Il2CppCodeGenWriteBarrier((&___NO_POINTS_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEMULTIREADER_T4082127310_H
#ifndef CODABARREADER_T401773518_H
#define CODABARREADER_T401773518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.CodaBarReader
struct  CodaBarReader_t401773518  : public OneDReader_t217072914
{
public:
	// System.Text.StringBuilder ZXing.OneD.CodaBarReader::decodeRowResult
	StringBuilder_t * ___decodeRowResult_7;
	// System.Int32[] ZXing.OneD.CodaBarReader::counters
	Int32U5BU5D_t385246372* ___counters_8;
	// System.Int32 ZXing.OneD.CodaBarReader::counterLength
	int32_t ___counterLength_9;

public:
	inline static int32_t get_offset_of_decodeRowResult_7() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518, ___decodeRowResult_7)); }
	inline StringBuilder_t * get_decodeRowResult_7() const { return ___decodeRowResult_7; }
	inline StringBuilder_t ** get_address_of_decodeRowResult_7() { return &___decodeRowResult_7; }
	inline void set_decodeRowResult_7(StringBuilder_t * value)
	{
		___decodeRowResult_7 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_7), value);
	}

	inline static int32_t get_offset_of_counters_8() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518, ___counters_8)); }
	inline Int32U5BU5D_t385246372* get_counters_8() const { return ___counters_8; }
	inline Int32U5BU5D_t385246372** get_address_of_counters_8() { return &___counters_8; }
	inline void set_counters_8(Int32U5BU5D_t385246372* value)
	{
		___counters_8 = value;
		Il2CppCodeGenWriteBarrier((&___counters_8), value);
	}

	inline static int32_t get_offset_of_counterLength_9() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518, ___counterLength_9)); }
	inline int32_t get_counterLength_9() const { return ___counterLength_9; }
	inline int32_t* get_address_of_counterLength_9() { return &___counterLength_9; }
	inline void set_counterLength_9(int32_t value)
	{
		___counterLength_9 = value;
	}
};

struct CodaBarReader_t401773518_StaticFields
{
public:
	// System.Int32 ZXing.OneD.CodaBarReader::MAX_ACCEPTABLE
	int32_t ___MAX_ACCEPTABLE_2;
	// System.Int32 ZXing.OneD.CodaBarReader::PADDING
	int32_t ___PADDING_3;
	// System.Char[] ZXing.OneD.CodaBarReader::ALPHABET
	CharU5BU5D_t3528271667* ___ALPHABET_4;
	// System.Int32[] ZXing.OneD.CodaBarReader::CHARACTER_ENCODINGS
	Int32U5BU5D_t385246372* ___CHARACTER_ENCODINGS_5;
	// System.Char[] ZXing.OneD.CodaBarReader::STARTEND_ENCODING
	CharU5BU5D_t3528271667* ___STARTEND_ENCODING_6;

public:
	inline static int32_t get_offset_of_MAX_ACCEPTABLE_2() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518_StaticFields, ___MAX_ACCEPTABLE_2)); }
	inline int32_t get_MAX_ACCEPTABLE_2() const { return ___MAX_ACCEPTABLE_2; }
	inline int32_t* get_address_of_MAX_ACCEPTABLE_2() { return &___MAX_ACCEPTABLE_2; }
	inline void set_MAX_ACCEPTABLE_2(int32_t value)
	{
		___MAX_ACCEPTABLE_2 = value;
	}

	inline static int32_t get_offset_of_PADDING_3() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518_StaticFields, ___PADDING_3)); }
	inline int32_t get_PADDING_3() const { return ___PADDING_3; }
	inline int32_t* get_address_of_PADDING_3() { return &___PADDING_3; }
	inline void set_PADDING_3(int32_t value)
	{
		___PADDING_3 = value;
	}

	inline static int32_t get_offset_of_ALPHABET_4() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518_StaticFields, ___ALPHABET_4)); }
	inline CharU5BU5D_t3528271667* get_ALPHABET_4() const { return ___ALPHABET_4; }
	inline CharU5BU5D_t3528271667** get_address_of_ALPHABET_4() { return &___ALPHABET_4; }
	inline void set_ALPHABET_4(CharU5BU5D_t3528271667* value)
	{
		___ALPHABET_4 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_4), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_5() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518_StaticFields, ___CHARACTER_ENCODINGS_5)); }
	inline Int32U5BU5D_t385246372* get_CHARACTER_ENCODINGS_5() const { return ___CHARACTER_ENCODINGS_5; }
	inline Int32U5BU5D_t385246372** get_address_of_CHARACTER_ENCODINGS_5() { return &___CHARACTER_ENCODINGS_5; }
	inline void set_CHARACTER_ENCODINGS_5(Int32U5BU5D_t385246372* value)
	{
		___CHARACTER_ENCODINGS_5 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_5), value);
	}

	inline static int32_t get_offset_of_STARTEND_ENCODING_6() { return static_cast<int32_t>(offsetof(CodaBarReader_t401773518_StaticFields, ___STARTEND_ENCODING_6)); }
	inline CharU5BU5D_t3528271667* get_STARTEND_ENCODING_6() const { return ___STARTEND_ENCODING_6; }
	inline CharU5BU5D_t3528271667** get_address_of_STARTEND_ENCODING_6() { return &___STARTEND_ENCODING_6; }
	inline void set_STARTEND_ENCODING_6(CharU5BU5D_t3528271667* value)
	{
		___STARTEND_ENCODING_6 = value;
		Il2CppCodeGenWriteBarrier((&___STARTEND_ENCODING_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODABARREADER_T401773518_H
#ifndef CODABARWRITER_T845353143_H
#define CODABARWRITER_T845353143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.CodaBarWriter
struct  CodaBarWriter_t845353143  : public OneDimensionalCodeWriter_t460700247
{
public:

public:
};

struct CodaBarWriter_t845353143_StaticFields
{
public:
	// System.Char[] ZXing.OneD.CodaBarWriter::START_END_CHARS
	CharU5BU5D_t3528271667* ___START_END_CHARS_0;
	// System.Char[] ZXing.OneD.CodaBarWriter::ALT_START_END_CHARS
	CharU5BU5D_t3528271667* ___ALT_START_END_CHARS_1;
	// System.Char[] ZXing.OneD.CodaBarWriter::CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED
	CharU5BU5D_t3528271667* ___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2;

public:
	inline static int32_t get_offset_of_START_END_CHARS_0() { return static_cast<int32_t>(offsetof(CodaBarWriter_t845353143_StaticFields, ___START_END_CHARS_0)); }
	inline CharU5BU5D_t3528271667* get_START_END_CHARS_0() const { return ___START_END_CHARS_0; }
	inline CharU5BU5D_t3528271667** get_address_of_START_END_CHARS_0() { return &___START_END_CHARS_0; }
	inline void set_START_END_CHARS_0(CharU5BU5D_t3528271667* value)
	{
		___START_END_CHARS_0 = value;
		Il2CppCodeGenWriteBarrier((&___START_END_CHARS_0), value);
	}

	inline static int32_t get_offset_of_ALT_START_END_CHARS_1() { return static_cast<int32_t>(offsetof(CodaBarWriter_t845353143_StaticFields, ___ALT_START_END_CHARS_1)); }
	inline CharU5BU5D_t3528271667* get_ALT_START_END_CHARS_1() const { return ___ALT_START_END_CHARS_1; }
	inline CharU5BU5D_t3528271667** get_address_of_ALT_START_END_CHARS_1() { return &___ALT_START_END_CHARS_1; }
	inline void set_ALT_START_END_CHARS_1(CharU5BU5D_t3528271667* value)
	{
		___ALT_START_END_CHARS_1 = value;
		Il2CppCodeGenWriteBarrier((&___ALT_START_END_CHARS_1), value);
	}

	inline static int32_t get_offset_of_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2() { return static_cast<int32_t>(offsetof(CodaBarWriter_t845353143_StaticFields, ___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2)); }
	inline CharU5BU5D_t3528271667* get_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2() const { return ___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2; }
	inline CharU5BU5D_t3528271667** get_address_of_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2() { return &___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2; }
	inline void set_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2(CharU5BU5D_t3528271667* value)
	{
		___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2 = value;
		Il2CppCodeGenWriteBarrier((&___CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODABARWRITER_T845353143_H
#ifndef CODE128READER_T2567358360_H
#define CODE128READER_T2567358360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code128Reader
struct  Code128Reader_t2567358360  : public OneDReader_t217072914
{
public:

public:
};

struct Code128Reader_t2567358360_StaticFields
{
public:
	// System.Int32[][] ZXing.OneD.Code128Reader::CODE_PATTERNS
	Int32U5BU5DU5BU5D_t3365920845* ___CODE_PATTERNS_2;
	// System.Int32 ZXing.OneD.Code128Reader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_3;
	// System.Int32 ZXing.OneD.Code128Reader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_4;

public:
	inline static int32_t get_offset_of_CODE_PATTERNS_2() { return static_cast<int32_t>(offsetof(Code128Reader_t2567358360_StaticFields, ___CODE_PATTERNS_2)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_CODE_PATTERNS_2() const { return ___CODE_PATTERNS_2; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_CODE_PATTERNS_2() { return &___CODE_PATTERNS_2; }
	inline void set_CODE_PATTERNS_2(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___CODE_PATTERNS_2 = value;
		Il2CppCodeGenWriteBarrier((&___CODE_PATTERNS_2), value);
	}

	inline static int32_t get_offset_of_MAX_AVG_VARIANCE_3() { return static_cast<int32_t>(offsetof(Code128Reader_t2567358360_StaticFields, ___MAX_AVG_VARIANCE_3)); }
	inline int32_t get_MAX_AVG_VARIANCE_3() const { return ___MAX_AVG_VARIANCE_3; }
	inline int32_t* get_address_of_MAX_AVG_VARIANCE_3() { return &___MAX_AVG_VARIANCE_3; }
	inline void set_MAX_AVG_VARIANCE_3(int32_t value)
	{
		___MAX_AVG_VARIANCE_3 = value;
	}

	inline static int32_t get_offset_of_MAX_INDIVIDUAL_VARIANCE_4() { return static_cast<int32_t>(offsetof(Code128Reader_t2567358360_StaticFields, ___MAX_INDIVIDUAL_VARIANCE_4)); }
	inline int32_t get_MAX_INDIVIDUAL_VARIANCE_4() const { return ___MAX_INDIVIDUAL_VARIANCE_4; }
	inline int32_t* get_address_of_MAX_INDIVIDUAL_VARIANCE_4() { return &___MAX_INDIVIDUAL_VARIANCE_4; }
	inline void set_MAX_INDIVIDUAL_VARIANCE_4(int32_t value)
	{
		___MAX_INDIVIDUAL_VARIANCE_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE128READER_T2567358360_H
#ifndef CODE128WRITER_T3122924837_H
#define CODE128WRITER_T3122924837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code128Writer
struct  Code128Writer_t3122924837  : public OneDimensionalCodeWriter_t460700247
{
public:
	// System.Boolean ZXing.OneD.Code128Writer::forceCodesetB
	bool ___forceCodesetB_0;

public:
	inline static int32_t get_offset_of_forceCodesetB_0() { return static_cast<int32_t>(offsetof(Code128Writer_t3122924837, ___forceCodesetB_0)); }
	inline bool get_forceCodesetB_0() const { return ___forceCodesetB_0; }
	inline bool* get_address_of_forceCodesetB_0() { return &___forceCodesetB_0; }
	inline void set_forceCodesetB_0(bool value)
	{
		___forceCodesetB_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE128WRITER_T3122924837_H
#ifndef CODE39READER_T2567994168_H
#define CODE39READER_T2567994168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code39Reader
struct  Code39Reader_t2567994168  : public OneDReader_t217072914
{
public:
	// System.Boolean ZXing.OneD.Code39Reader::usingCheckDigit
	bool ___usingCheckDigit_6;
	// System.Boolean ZXing.OneD.Code39Reader::extendedMode
	bool ___extendedMode_7;
	// System.Text.StringBuilder ZXing.OneD.Code39Reader::decodeRowResult
	StringBuilder_t * ___decodeRowResult_8;
	// System.Int32[] ZXing.OneD.Code39Reader::counters
	Int32U5BU5D_t385246372* ___counters_9;

public:
	inline static int32_t get_offset_of_usingCheckDigit_6() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168, ___usingCheckDigit_6)); }
	inline bool get_usingCheckDigit_6() const { return ___usingCheckDigit_6; }
	inline bool* get_address_of_usingCheckDigit_6() { return &___usingCheckDigit_6; }
	inline void set_usingCheckDigit_6(bool value)
	{
		___usingCheckDigit_6 = value;
	}

	inline static int32_t get_offset_of_extendedMode_7() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168, ___extendedMode_7)); }
	inline bool get_extendedMode_7() const { return ___extendedMode_7; }
	inline bool* get_address_of_extendedMode_7() { return &___extendedMode_7; }
	inline void set_extendedMode_7(bool value)
	{
		___extendedMode_7 = value;
	}

	inline static int32_t get_offset_of_decodeRowResult_8() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168, ___decodeRowResult_8)); }
	inline StringBuilder_t * get_decodeRowResult_8() const { return ___decodeRowResult_8; }
	inline StringBuilder_t ** get_address_of_decodeRowResult_8() { return &___decodeRowResult_8; }
	inline void set_decodeRowResult_8(StringBuilder_t * value)
	{
		___decodeRowResult_8 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_8), value);
	}

	inline static int32_t get_offset_of_counters_9() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168, ___counters_9)); }
	inline Int32U5BU5D_t385246372* get_counters_9() const { return ___counters_9; }
	inline Int32U5BU5D_t385246372** get_address_of_counters_9() { return &___counters_9; }
	inline void set_counters_9(Int32U5BU5D_t385246372* value)
	{
		___counters_9 = value;
		Il2CppCodeGenWriteBarrier((&___counters_9), value);
	}
};

struct Code39Reader_t2567994168_StaticFields
{
public:
	// System.String ZXing.OneD.Code39Reader::ALPHABET_STRING
	String_t* ___ALPHABET_STRING_2;
	// System.Char[] ZXing.OneD.Code39Reader::ALPHABET
	CharU5BU5D_t3528271667* ___ALPHABET_3;
	// System.Int32[] ZXing.OneD.Code39Reader::CHARACTER_ENCODINGS
	Int32U5BU5D_t385246372* ___CHARACTER_ENCODINGS_4;
	// System.Int32 ZXing.OneD.Code39Reader::ASTERISK_ENCODING
	int32_t ___ASTERISK_ENCODING_5;

public:
	inline static int32_t get_offset_of_ALPHABET_STRING_2() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168_StaticFields, ___ALPHABET_STRING_2)); }
	inline String_t* get_ALPHABET_STRING_2() const { return ___ALPHABET_STRING_2; }
	inline String_t** get_address_of_ALPHABET_STRING_2() { return &___ALPHABET_STRING_2; }
	inline void set_ALPHABET_STRING_2(String_t* value)
	{
		___ALPHABET_STRING_2 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_STRING_2), value);
	}

	inline static int32_t get_offset_of_ALPHABET_3() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168_StaticFields, ___ALPHABET_3)); }
	inline CharU5BU5D_t3528271667* get_ALPHABET_3() const { return ___ALPHABET_3; }
	inline CharU5BU5D_t3528271667** get_address_of_ALPHABET_3() { return &___ALPHABET_3; }
	inline void set_ALPHABET_3(CharU5BU5D_t3528271667* value)
	{
		___ALPHABET_3 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_3), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_4() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168_StaticFields, ___CHARACTER_ENCODINGS_4)); }
	inline Int32U5BU5D_t385246372* get_CHARACTER_ENCODINGS_4() const { return ___CHARACTER_ENCODINGS_4; }
	inline Int32U5BU5D_t385246372** get_address_of_CHARACTER_ENCODINGS_4() { return &___CHARACTER_ENCODINGS_4; }
	inline void set_CHARACTER_ENCODINGS_4(Int32U5BU5D_t385246372* value)
	{
		___CHARACTER_ENCODINGS_4 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_4), value);
	}

	inline static int32_t get_offset_of_ASTERISK_ENCODING_5() { return static_cast<int32_t>(offsetof(Code39Reader_t2567994168_StaticFields, ___ASTERISK_ENCODING_5)); }
	inline int32_t get_ASTERISK_ENCODING_5() const { return ___ASTERISK_ENCODING_5; }
	inline int32_t* get_address_of_ASTERISK_ENCODING_5() { return &___ASTERISK_ENCODING_5; }
	inline void set_ASTERISK_ENCODING_5(int32_t value)
	{
		___ASTERISK_ENCODING_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE39READER_T2567994168_H
#ifndef CODE39WRITER_T3324653627_H
#define CODE39WRITER_T3324653627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code39Writer
struct  Code39Writer_t3324653627  : public OneDimensionalCodeWriter_t460700247
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE39WRITER_T3324653627_H
#ifndef CODE93READER_T3843980150_H
#define CODE93READER_T3843980150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.Code93Reader
struct  Code93Reader_t3843980150  : public OneDReader_t217072914
{
public:
	// System.Text.StringBuilder ZXing.OneD.Code93Reader::decodeRowResult
	StringBuilder_t * ___decodeRowResult_5;
	// System.Int32[] ZXing.OneD.Code93Reader::counters
	Int32U5BU5D_t385246372* ___counters_6;

public:
	inline static int32_t get_offset_of_decodeRowResult_5() { return static_cast<int32_t>(offsetof(Code93Reader_t3843980150, ___decodeRowResult_5)); }
	inline StringBuilder_t * get_decodeRowResult_5() const { return ___decodeRowResult_5; }
	inline StringBuilder_t ** get_address_of_decodeRowResult_5() { return &___decodeRowResult_5; }
	inline void set_decodeRowResult_5(StringBuilder_t * value)
	{
		___decodeRowResult_5 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_5), value);
	}

	inline static int32_t get_offset_of_counters_6() { return static_cast<int32_t>(offsetof(Code93Reader_t3843980150, ___counters_6)); }
	inline Int32U5BU5D_t385246372* get_counters_6() const { return ___counters_6; }
	inline Int32U5BU5D_t385246372** get_address_of_counters_6() { return &___counters_6; }
	inline void set_counters_6(Int32U5BU5D_t385246372* value)
	{
		___counters_6 = value;
		Il2CppCodeGenWriteBarrier((&___counters_6), value);
	}
};

struct Code93Reader_t3843980150_StaticFields
{
public:
	// System.Char[] ZXing.OneD.Code93Reader::ALPHABET
	CharU5BU5D_t3528271667* ___ALPHABET_2;
	// System.Int32[] ZXing.OneD.Code93Reader::CHARACTER_ENCODINGS
	Int32U5BU5D_t385246372* ___CHARACTER_ENCODINGS_3;
	// System.Int32 ZXing.OneD.Code93Reader::ASTERISK_ENCODING
	int32_t ___ASTERISK_ENCODING_4;

public:
	inline static int32_t get_offset_of_ALPHABET_2() { return static_cast<int32_t>(offsetof(Code93Reader_t3843980150_StaticFields, ___ALPHABET_2)); }
	inline CharU5BU5D_t3528271667* get_ALPHABET_2() const { return ___ALPHABET_2; }
	inline CharU5BU5D_t3528271667** get_address_of_ALPHABET_2() { return &___ALPHABET_2; }
	inline void set_ALPHABET_2(CharU5BU5D_t3528271667* value)
	{
		___ALPHABET_2 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_2), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_3() { return static_cast<int32_t>(offsetof(Code93Reader_t3843980150_StaticFields, ___CHARACTER_ENCODINGS_3)); }
	inline Int32U5BU5D_t385246372* get_CHARACTER_ENCODINGS_3() const { return ___CHARACTER_ENCODINGS_3; }
	inline Int32U5BU5D_t385246372** get_address_of_CHARACTER_ENCODINGS_3() { return &___CHARACTER_ENCODINGS_3; }
	inline void set_CHARACTER_ENCODINGS_3(Int32U5BU5D_t385246372* value)
	{
		___CHARACTER_ENCODINGS_3 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_3), value);
	}

	inline static int32_t get_offset_of_ASTERISK_ENCODING_4() { return static_cast<int32_t>(offsetof(Code93Reader_t3843980150_StaticFields, ___ASTERISK_ENCODING_4)); }
	inline int32_t get_ASTERISK_ENCODING_4() const { return ___ASTERISK_ENCODING_4; }
	inline int32_t* get_address_of_ASTERISK_ENCODING_4() { return &___ASTERISK_ENCODING_4; }
	inline void set_ASTERISK_ENCODING_4(int32_t value)
	{
		___ASTERISK_ENCODING_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODE93READER_T3843980150_H
#ifndef ITFREADER_T2679325567_H
#define ITFREADER_T2679325567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.ITFReader
struct  ITFReader_t2679325567  : public OneDReader_t217072914
{
public:
	// System.Int32 ZXing.OneD.ITFReader::narrowLineWidth
	int32_t ___narrowLineWidth_5;

public:
	inline static int32_t get_offset_of_narrowLineWidth_5() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567, ___narrowLineWidth_5)); }
	inline int32_t get_narrowLineWidth_5() const { return ___narrowLineWidth_5; }
	inline int32_t* get_address_of_narrowLineWidth_5() { return &___narrowLineWidth_5; }
	inline void set_narrowLineWidth_5(int32_t value)
	{
		___narrowLineWidth_5 = value;
	}
};

struct ITFReader_t2679325567_StaticFields
{
public:
	// System.Int32 ZXing.OneD.ITFReader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_2;
	// System.Int32 ZXing.OneD.ITFReader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_3;
	// System.Int32[] ZXing.OneD.ITFReader::DEFAULT_ALLOWED_LENGTHS
	Int32U5BU5D_t385246372* ___DEFAULT_ALLOWED_LENGTHS_4;
	// System.Int32[] ZXing.OneD.ITFReader::START_PATTERN
	Int32U5BU5D_t385246372* ___START_PATTERN_6;
	// System.Int32[] ZXing.OneD.ITFReader::END_PATTERN_REVERSED
	Int32U5BU5D_t385246372* ___END_PATTERN_REVERSED_7;
	// System.Int32[][] ZXing.OneD.ITFReader::PATTERNS
	Int32U5BU5DU5BU5D_t3365920845* ___PATTERNS_8;

public:
	inline static int32_t get_offset_of_MAX_AVG_VARIANCE_2() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567_StaticFields, ___MAX_AVG_VARIANCE_2)); }
	inline int32_t get_MAX_AVG_VARIANCE_2() const { return ___MAX_AVG_VARIANCE_2; }
	inline int32_t* get_address_of_MAX_AVG_VARIANCE_2() { return &___MAX_AVG_VARIANCE_2; }
	inline void set_MAX_AVG_VARIANCE_2(int32_t value)
	{
		___MAX_AVG_VARIANCE_2 = value;
	}

	inline static int32_t get_offset_of_MAX_INDIVIDUAL_VARIANCE_3() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567_StaticFields, ___MAX_INDIVIDUAL_VARIANCE_3)); }
	inline int32_t get_MAX_INDIVIDUAL_VARIANCE_3() const { return ___MAX_INDIVIDUAL_VARIANCE_3; }
	inline int32_t* get_address_of_MAX_INDIVIDUAL_VARIANCE_3() { return &___MAX_INDIVIDUAL_VARIANCE_3; }
	inline void set_MAX_INDIVIDUAL_VARIANCE_3(int32_t value)
	{
		___MAX_INDIVIDUAL_VARIANCE_3 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_ALLOWED_LENGTHS_4() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567_StaticFields, ___DEFAULT_ALLOWED_LENGTHS_4)); }
	inline Int32U5BU5D_t385246372* get_DEFAULT_ALLOWED_LENGTHS_4() const { return ___DEFAULT_ALLOWED_LENGTHS_4; }
	inline Int32U5BU5D_t385246372** get_address_of_DEFAULT_ALLOWED_LENGTHS_4() { return &___DEFAULT_ALLOWED_LENGTHS_4; }
	inline void set_DEFAULT_ALLOWED_LENGTHS_4(Int32U5BU5D_t385246372* value)
	{
		___DEFAULT_ALLOWED_LENGTHS_4 = value;
		Il2CppCodeGenWriteBarrier((&___DEFAULT_ALLOWED_LENGTHS_4), value);
	}

	inline static int32_t get_offset_of_START_PATTERN_6() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567_StaticFields, ___START_PATTERN_6)); }
	inline Int32U5BU5D_t385246372* get_START_PATTERN_6() const { return ___START_PATTERN_6; }
	inline Int32U5BU5D_t385246372** get_address_of_START_PATTERN_6() { return &___START_PATTERN_6; }
	inline void set_START_PATTERN_6(Int32U5BU5D_t385246372* value)
	{
		___START_PATTERN_6 = value;
		Il2CppCodeGenWriteBarrier((&___START_PATTERN_6), value);
	}

	inline static int32_t get_offset_of_END_PATTERN_REVERSED_7() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567_StaticFields, ___END_PATTERN_REVERSED_7)); }
	inline Int32U5BU5D_t385246372* get_END_PATTERN_REVERSED_7() const { return ___END_PATTERN_REVERSED_7; }
	inline Int32U5BU5D_t385246372** get_address_of_END_PATTERN_REVERSED_7() { return &___END_PATTERN_REVERSED_7; }
	inline void set_END_PATTERN_REVERSED_7(Int32U5BU5D_t385246372* value)
	{
		___END_PATTERN_REVERSED_7 = value;
		Il2CppCodeGenWriteBarrier((&___END_PATTERN_REVERSED_7), value);
	}

	inline static int32_t get_offset_of_PATTERNS_8() { return static_cast<int32_t>(offsetof(ITFReader_t2679325567_StaticFields, ___PATTERNS_8)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_PATTERNS_8() const { return ___PATTERNS_8; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_PATTERNS_8() { return &___PATTERNS_8; }
	inline void set_PATTERNS_8(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___PATTERNS_8 = value;
		Il2CppCodeGenWriteBarrier((&___PATTERNS_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITFREADER_T2679325567_H
#ifndef ITFWRITER_T1084262668_H
#define ITFWRITER_T1084262668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.ITFWriter
struct  ITFWriter_t1084262668  : public OneDimensionalCodeWriter_t460700247
{
public:

public:
};

struct ITFWriter_t1084262668_StaticFields
{
public:
	// System.Int32[] ZXing.OneD.ITFWriter::START_PATTERN
	Int32U5BU5D_t385246372* ___START_PATTERN_0;
	// System.Int32[] ZXing.OneD.ITFWriter::END_PATTERN
	Int32U5BU5D_t385246372* ___END_PATTERN_1;

public:
	inline static int32_t get_offset_of_START_PATTERN_0() { return static_cast<int32_t>(offsetof(ITFWriter_t1084262668_StaticFields, ___START_PATTERN_0)); }
	inline Int32U5BU5D_t385246372* get_START_PATTERN_0() const { return ___START_PATTERN_0; }
	inline Int32U5BU5D_t385246372** get_address_of_START_PATTERN_0() { return &___START_PATTERN_0; }
	inline void set_START_PATTERN_0(Int32U5BU5D_t385246372* value)
	{
		___START_PATTERN_0 = value;
		Il2CppCodeGenWriteBarrier((&___START_PATTERN_0), value);
	}

	inline static int32_t get_offset_of_END_PATTERN_1() { return static_cast<int32_t>(offsetof(ITFWriter_t1084262668_StaticFields, ___END_PATTERN_1)); }
	inline Int32U5BU5D_t385246372* get_END_PATTERN_1() const { return ___END_PATTERN_1; }
	inline Int32U5BU5D_t385246372** get_address_of_END_PATTERN_1() { return &___END_PATTERN_1; }
	inline void set_END_PATTERN_1(Int32U5BU5D_t385246372* value)
	{
		___END_PATTERN_1 = value;
		Il2CppCodeGenWriteBarrier((&___END_PATTERN_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITFWRITER_T1084262668_H
#ifndef MSIREADER_T3060286438_H
#define MSIREADER_T3060286438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.MSIReader
struct  MSIReader_t3060286438  : public OneDReader_t217072914
{
public:
	// System.Boolean ZXing.OneD.MSIReader::usingCheckDigit
	bool ___usingCheckDigit_5;
	// System.Text.StringBuilder ZXing.OneD.MSIReader::decodeRowResult
	StringBuilder_t * ___decodeRowResult_6;
	// System.Int32[] ZXing.OneD.MSIReader::counters
	Int32U5BU5D_t385246372* ___counters_7;
	// System.Int32 ZXing.OneD.MSIReader::averageCounterWidth
	int32_t ___averageCounterWidth_8;

public:
	inline static int32_t get_offset_of_usingCheckDigit_5() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438, ___usingCheckDigit_5)); }
	inline bool get_usingCheckDigit_5() const { return ___usingCheckDigit_5; }
	inline bool* get_address_of_usingCheckDigit_5() { return &___usingCheckDigit_5; }
	inline void set_usingCheckDigit_5(bool value)
	{
		___usingCheckDigit_5 = value;
	}

	inline static int32_t get_offset_of_decodeRowResult_6() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438, ___decodeRowResult_6)); }
	inline StringBuilder_t * get_decodeRowResult_6() const { return ___decodeRowResult_6; }
	inline StringBuilder_t ** get_address_of_decodeRowResult_6() { return &___decodeRowResult_6; }
	inline void set_decodeRowResult_6(StringBuilder_t * value)
	{
		___decodeRowResult_6 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowResult_6), value);
	}

	inline static int32_t get_offset_of_counters_7() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438, ___counters_7)); }
	inline Int32U5BU5D_t385246372* get_counters_7() const { return ___counters_7; }
	inline Int32U5BU5D_t385246372** get_address_of_counters_7() { return &___counters_7; }
	inline void set_counters_7(Int32U5BU5D_t385246372* value)
	{
		___counters_7 = value;
		Il2CppCodeGenWriteBarrier((&___counters_7), value);
	}

	inline static int32_t get_offset_of_averageCounterWidth_8() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438, ___averageCounterWidth_8)); }
	inline int32_t get_averageCounterWidth_8() const { return ___averageCounterWidth_8; }
	inline int32_t* get_address_of_averageCounterWidth_8() { return &___averageCounterWidth_8; }
	inline void set_averageCounterWidth_8(int32_t value)
	{
		___averageCounterWidth_8 = value;
	}
};

struct MSIReader_t3060286438_StaticFields
{
public:
	// System.String ZXing.OneD.MSIReader::ALPHABET_STRING
	String_t* ___ALPHABET_STRING_2;
	// System.Char[] ZXing.OneD.MSIReader::ALPHABET
	CharU5BU5D_t3528271667* ___ALPHABET_3;
	// System.Int32[] ZXing.OneD.MSIReader::CHARACTER_ENCODINGS
	Int32U5BU5D_t385246372* ___CHARACTER_ENCODINGS_4;
	// System.Int32[] ZXing.OneD.MSIReader::doubleAndCrossSum
	Int32U5BU5D_t385246372* ___doubleAndCrossSum_9;

public:
	inline static int32_t get_offset_of_ALPHABET_STRING_2() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438_StaticFields, ___ALPHABET_STRING_2)); }
	inline String_t* get_ALPHABET_STRING_2() const { return ___ALPHABET_STRING_2; }
	inline String_t** get_address_of_ALPHABET_STRING_2() { return &___ALPHABET_STRING_2; }
	inline void set_ALPHABET_STRING_2(String_t* value)
	{
		___ALPHABET_STRING_2 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_STRING_2), value);
	}

	inline static int32_t get_offset_of_ALPHABET_3() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438_StaticFields, ___ALPHABET_3)); }
	inline CharU5BU5D_t3528271667* get_ALPHABET_3() const { return ___ALPHABET_3; }
	inline CharU5BU5D_t3528271667** get_address_of_ALPHABET_3() { return &___ALPHABET_3; }
	inline void set_ALPHABET_3(CharU5BU5D_t3528271667* value)
	{
		___ALPHABET_3 = value;
		Il2CppCodeGenWriteBarrier((&___ALPHABET_3), value);
	}

	inline static int32_t get_offset_of_CHARACTER_ENCODINGS_4() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438_StaticFields, ___CHARACTER_ENCODINGS_4)); }
	inline Int32U5BU5D_t385246372* get_CHARACTER_ENCODINGS_4() const { return ___CHARACTER_ENCODINGS_4; }
	inline Int32U5BU5D_t385246372** get_address_of_CHARACTER_ENCODINGS_4() { return &___CHARACTER_ENCODINGS_4; }
	inline void set_CHARACTER_ENCODINGS_4(Int32U5BU5D_t385246372* value)
	{
		___CHARACTER_ENCODINGS_4 = value;
		Il2CppCodeGenWriteBarrier((&___CHARACTER_ENCODINGS_4), value);
	}

	inline static int32_t get_offset_of_doubleAndCrossSum_9() { return static_cast<int32_t>(offsetof(MSIReader_t3060286438_StaticFields, ___doubleAndCrossSum_9)); }
	inline Int32U5BU5D_t385246372* get_doubleAndCrossSum_9() const { return ___doubleAndCrossSum_9; }
	inline Int32U5BU5D_t385246372** get_address_of_doubleAndCrossSum_9() { return &___doubleAndCrossSum_9; }
	inline void set_doubleAndCrossSum_9(Int32U5BU5D_t385246372* value)
	{
		___doubleAndCrossSum_9 = value;
		Il2CppCodeGenWriteBarrier((&___doubleAndCrossSum_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSIREADER_T3060286438_H
#ifndef MSIWRITER_T4026370419_H
#define MSIWRITER_T4026370419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.MSIWriter
struct  MSIWriter_t4026370419  : public OneDimensionalCodeWriter_t460700247
{
public:

public:
};

struct MSIWriter_t4026370419_StaticFields
{
public:
	// System.Int32[] ZXing.OneD.MSIWriter::startWidths
	Int32U5BU5D_t385246372* ___startWidths_0;
	// System.Int32[] ZXing.OneD.MSIWriter::endWidths
	Int32U5BU5D_t385246372* ___endWidths_1;
	// System.Int32[][] ZXing.OneD.MSIWriter::numberWidths
	Int32U5BU5DU5BU5D_t3365920845* ___numberWidths_2;

public:
	inline static int32_t get_offset_of_startWidths_0() { return static_cast<int32_t>(offsetof(MSIWriter_t4026370419_StaticFields, ___startWidths_0)); }
	inline Int32U5BU5D_t385246372* get_startWidths_0() const { return ___startWidths_0; }
	inline Int32U5BU5D_t385246372** get_address_of_startWidths_0() { return &___startWidths_0; }
	inline void set_startWidths_0(Int32U5BU5D_t385246372* value)
	{
		___startWidths_0 = value;
		Il2CppCodeGenWriteBarrier((&___startWidths_0), value);
	}

	inline static int32_t get_offset_of_endWidths_1() { return static_cast<int32_t>(offsetof(MSIWriter_t4026370419_StaticFields, ___endWidths_1)); }
	inline Int32U5BU5D_t385246372* get_endWidths_1() const { return ___endWidths_1; }
	inline Int32U5BU5D_t385246372** get_address_of_endWidths_1() { return &___endWidths_1; }
	inline void set_endWidths_1(Int32U5BU5D_t385246372* value)
	{
		___endWidths_1 = value;
		Il2CppCodeGenWriteBarrier((&___endWidths_1), value);
	}

	inline static int32_t get_offset_of_numberWidths_2() { return static_cast<int32_t>(offsetof(MSIWriter_t4026370419_StaticFields, ___numberWidths_2)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_numberWidths_2() const { return ___numberWidths_2; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_numberWidths_2() { return &___numberWidths_2; }
	inline void set_numberWidths_2(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___numberWidths_2 = value;
		Il2CppCodeGenWriteBarrier((&___numberWidths_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSIWRITER_T4026370419_H
#ifndef MULTIFORMATONEDREADER_T797580668_H
#define MULTIFORMATONEDREADER_T797580668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.MultiFormatOneDReader
struct  MultiFormatOneDReader_t797580668  : public OneDReader_t217072914
{
public:
	// System.Collections.Generic.IList`1<ZXing.OneD.OneDReader> ZXing.OneD.MultiFormatOneDReader::readers
	RuntimeObject* ___readers_2;

public:
	inline static int32_t get_offset_of_readers_2() { return static_cast<int32_t>(offsetof(MultiFormatOneDReader_t797580668, ___readers_2)); }
	inline RuntimeObject* get_readers_2() const { return ___readers_2; }
	inline RuntimeObject** get_address_of_readers_2() { return &___readers_2; }
	inline void set_readers_2(RuntimeObject* value)
	{
		___readers_2 = value;
		Il2CppCodeGenWriteBarrier((&___readers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFORMATONEDREADER_T797580668_H
#ifndef MULTIFORMATUPCEANREADER_T2941787780_H
#define MULTIFORMATUPCEANREADER_T2941787780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.MultiFormatUPCEANReader
struct  MultiFormatUPCEANReader_t2941787780  : public OneDReader_t217072914
{
public:
	// ZXing.OneD.UPCEANReader[] ZXing.OneD.MultiFormatUPCEANReader::readers
	UPCEANReaderU5BU5D_t2540811653* ___readers_2;

public:
	inline static int32_t get_offset_of_readers_2() { return static_cast<int32_t>(offsetof(MultiFormatUPCEANReader_t2941787780, ___readers_2)); }
	inline UPCEANReaderU5BU5D_t2540811653* get_readers_2() const { return ___readers_2; }
	inline UPCEANReaderU5BU5D_t2540811653** get_address_of_readers_2() { return &___readers_2; }
	inline void set_readers_2(UPCEANReaderU5BU5D_t2540811653* value)
	{
		___readers_2 = value;
		Il2CppCodeGenWriteBarrier((&___readers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIFORMATUPCEANREADER_T2941787780_H
#ifndef UPCEANREADER_T361332172_H
#define UPCEANREADER_T361332172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.UPCEANReader
struct  UPCEANReader_t361332172  : public OneDReader_t217072914
{
public:
	// System.Text.StringBuilder ZXing.OneD.UPCEANReader::decodeRowStringBuffer
	StringBuilder_t * ___decodeRowStringBuffer_8;
	// ZXing.OneD.UPCEANExtensionSupport ZXing.OneD.UPCEANReader::extensionReader
	UPCEANExtensionSupport_t494448914 * ___extensionReader_9;
	// ZXing.OneD.EANManufacturerOrgSupport ZXing.OneD.UPCEANReader::eanManSupport
	EANManufacturerOrgSupport_t3548211393 * ___eanManSupport_10;

public:
	inline static int32_t get_offset_of_decodeRowStringBuffer_8() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172, ___decodeRowStringBuffer_8)); }
	inline StringBuilder_t * get_decodeRowStringBuffer_8() const { return ___decodeRowStringBuffer_8; }
	inline StringBuilder_t ** get_address_of_decodeRowStringBuffer_8() { return &___decodeRowStringBuffer_8; }
	inline void set_decodeRowStringBuffer_8(StringBuilder_t * value)
	{
		___decodeRowStringBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___decodeRowStringBuffer_8), value);
	}

	inline static int32_t get_offset_of_extensionReader_9() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172, ___extensionReader_9)); }
	inline UPCEANExtensionSupport_t494448914 * get_extensionReader_9() const { return ___extensionReader_9; }
	inline UPCEANExtensionSupport_t494448914 ** get_address_of_extensionReader_9() { return &___extensionReader_9; }
	inline void set_extensionReader_9(UPCEANExtensionSupport_t494448914 * value)
	{
		___extensionReader_9 = value;
		Il2CppCodeGenWriteBarrier((&___extensionReader_9), value);
	}

	inline static int32_t get_offset_of_eanManSupport_10() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172, ___eanManSupport_10)); }
	inline EANManufacturerOrgSupport_t3548211393 * get_eanManSupport_10() const { return ___eanManSupport_10; }
	inline EANManufacturerOrgSupport_t3548211393 ** get_address_of_eanManSupport_10() { return &___eanManSupport_10; }
	inline void set_eanManSupport_10(EANManufacturerOrgSupport_t3548211393 * value)
	{
		___eanManSupport_10 = value;
		Il2CppCodeGenWriteBarrier((&___eanManSupport_10), value);
	}
};

struct UPCEANReader_t361332172_StaticFields
{
public:
	// System.Int32 ZXing.OneD.UPCEANReader::MAX_AVG_VARIANCE
	int32_t ___MAX_AVG_VARIANCE_2;
	// System.Int32 ZXing.OneD.UPCEANReader::MAX_INDIVIDUAL_VARIANCE
	int32_t ___MAX_INDIVIDUAL_VARIANCE_3;
	// System.Int32[] ZXing.OneD.UPCEANReader::START_END_PATTERN
	Int32U5BU5D_t385246372* ___START_END_PATTERN_4;
	// System.Int32[] ZXing.OneD.UPCEANReader::MIDDLE_PATTERN
	Int32U5BU5D_t385246372* ___MIDDLE_PATTERN_5;
	// System.Int32[][] ZXing.OneD.UPCEANReader::L_PATTERNS
	Int32U5BU5DU5BU5D_t3365920845* ___L_PATTERNS_6;
	// System.Int32[][] ZXing.OneD.UPCEANReader::L_AND_G_PATTERNS
	Int32U5BU5DU5BU5D_t3365920845* ___L_AND_G_PATTERNS_7;

public:
	inline static int32_t get_offset_of_MAX_AVG_VARIANCE_2() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172_StaticFields, ___MAX_AVG_VARIANCE_2)); }
	inline int32_t get_MAX_AVG_VARIANCE_2() const { return ___MAX_AVG_VARIANCE_2; }
	inline int32_t* get_address_of_MAX_AVG_VARIANCE_2() { return &___MAX_AVG_VARIANCE_2; }
	inline void set_MAX_AVG_VARIANCE_2(int32_t value)
	{
		___MAX_AVG_VARIANCE_2 = value;
	}

	inline static int32_t get_offset_of_MAX_INDIVIDUAL_VARIANCE_3() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172_StaticFields, ___MAX_INDIVIDUAL_VARIANCE_3)); }
	inline int32_t get_MAX_INDIVIDUAL_VARIANCE_3() const { return ___MAX_INDIVIDUAL_VARIANCE_3; }
	inline int32_t* get_address_of_MAX_INDIVIDUAL_VARIANCE_3() { return &___MAX_INDIVIDUAL_VARIANCE_3; }
	inline void set_MAX_INDIVIDUAL_VARIANCE_3(int32_t value)
	{
		___MAX_INDIVIDUAL_VARIANCE_3 = value;
	}

	inline static int32_t get_offset_of_START_END_PATTERN_4() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172_StaticFields, ___START_END_PATTERN_4)); }
	inline Int32U5BU5D_t385246372* get_START_END_PATTERN_4() const { return ___START_END_PATTERN_4; }
	inline Int32U5BU5D_t385246372** get_address_of_START_END_PATTERN_4() { return &___START_END_PATTERN_4; }
	inline void set_START_END_PATTERN_4(Int32U5BU5D_t385246372* value)
	{
		___START_END_PATTERN_4 = value;
		Il2CppCodeGenWriteBarrier((&___START_END_PATTERN_4), value);
	}

	inline static int32_t get_offset_of_MIDDLE_PATTERN_5() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172_StaticFields, ___MIDDLE_PATTERN_5)); }
	inline Int32U5BU5D_t385246372* get_MIDDLE_PATTERN_5() const { return ___MIDDLE_PATTERN_5; }
	inline Int32U5BU5D_t385246372** get_address_of_MIDDLE_PATTERN_5() { return &___MIDDLE_PATTERN_5; }
	inline void set_MIDDLE_PATTERN_5(Int32U5BU5D_t385246372* value)
	{
		___MIDDLE_PATTERN_5 = value;
		Il2CppCodeGenWriteBarrier((&___MIDDLE_PATTERN_5), value);
	}

	inline static int32_t get_offset_of_L_PATTERNS_6() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172_StaticFields, ___L_PATTERNS_6)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_L_PATTERNS_6() const { return ___L_PATTERNS_6; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_L_PATTERNS_6() { return &___L_PATTERNS_6; }
	inline void set_L_PATTERNS_6(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___L_PATTERNS_6 = value;
		Il2CppCodeGenWriteBarrier((&___L_PATTERNS_6), value);
	}

	inline static int32_t get_offset_of_L_AND_G_PATTERNS_7() { return static_cast<int32_t>(offsetof(UPCEANReader_t361332172_StaticFields, ___L_AND_G_PATTERNS_7)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get_L_AND_G_PATTERNS_7() const { return ___L_AND_G_PATTERNS_7; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of_L_AND_G_PATTERNS_7() { return &___L_AND_G_PATTERNS_7; }
	inline void set_L_AND_G_PATTERNS_7(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		___L_AND_G_PATTERNS_7 = value;
		Il2CppCodeGenWriteBarrier((&___L_AND_G_PATTERNS_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPCEANREADER_T361332172_H
#ifndef UPCEANWRITER_T2703857851_H
#define UPCEANWRITER_T2703857851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.UPCEANWriter
struct  UPCEANWriter_t2703857851  : public OneDimensionalCodeWriter_t460700247
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPCEANWRITER_T2703857851_H
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
#ifndef TABLE_T3518005883_H
#define TABLE_T3518005883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.Internal.Decoder/Table
struct  Table_t3518005883 
{
public:
	// System.Int32 ZXing.Aztec.Internal.Decoder/Table::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Table_t3518005883, ___value___2)); }
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
#endif // TABLE_T3518005883_H
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
#ifndef BITMAPLUMINANCESOURCE_T3601250630_H
#define BITMAPLUMINANCESOURCE_T3601250630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BitmapLuminanceSource
struct  BitmapLuminanceSource_t3601250630  : public BaseLuminanceSource_t3215128144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMAPLUMINANCESOURCE_T3601250630_H
#ifndef HYBRIDBINARIZER_T3943880457_H
#define HYBRIDBINARIZER_T3943880457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.HybridBinarizer
struct  HybridBinarizer_t3943880457  : public GlobalHistogramBinarizer_t2081160524
{
public:
	// ZXing.Common.BitMatrix ZXing.Common.HybridBinarizer::matrix
	BitMatrix_t2873240750 * ___matrix_4;

public:
	inline static int32_t get_offset_of_matrix_4() { return static_cast<int32_t>(offsetof(HybridBinarizer_t3943880457, ___matrix_4)); }
	inline BitMatrix_t2873240750 * get_matrix_4() const { return ___matrix_4; }
	inline BitMatrix_t2873240750 ** get_address_of_matrix_4() { return &___matrix_4; }
	inline void set_matrix_4(BitMatrix_t2873240750 * value)
	{
		___matrix_4 = value;
		Il2CppCodeGenWriteBarrier((&___matrix_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDBINARIZER_T3943880457_H
#ifndef SYMBOLSHAPEHINT_T2441334323_H
#define SYMBOLSHAPEHINT_T2441334323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.SymbolShapeHint
struct  SymbolShapeHint_t2441334323 
{
public:
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolShapeHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SymbolShapeHint_t2441334323, ___value___2)); }
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
#endif // SYMBOLSHAPEHINT_T2441334323_H
#ifndef MODE_T592869918_H
#define MODE_T592869918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.DecodedBitStreamParser/Mode
struct  Mode_t592869918 
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.DecodedBitStreamParser/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t592869918, ___value___2)); }
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
#endif // MODE_T592869918_H
#ifndef FORMATEXCEPTION_T3984179252_H
#define FORMATEXCEPTION_T3984179252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.FormatException
struct  FormatException_t3984179252  : public ReaderException_t3787909692
{
public:

public:
};

struct FormatException_t3984179252_StaticFields
{
public:
	// ZXing.FormatException ZXing.FormatException::instance
	FormatException_t3984179252 * ___instance_18;

public:
	inline static int32_t get_offset_of_instance_18() { return static_cast<int32_t>(offsetof(FormatException_t3984179252_StaticFields, ___instance_18)); }
	inline FormatException_t3984179252 * get_instance_18() const { return ___instance_18; }
	inline FormatException_t3984179252 ** get_address_of_instance_18() { return &___instance_18; }
	inline void set_instance_18(FormatException_t3984179252 * value)
	{
		___instance_18 = value;
		Il2CppCodeGenWriteBarrier((&___instance_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T3984179252_H
#ifndef EAN13READER_T2426349600_H
#define EAN13READER_T2426349600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EAN13Reader
struct  EAN13Reader_t2426349600  : public UPCEANReader_t361332172
{
public:
	// System.Int32[] ZXing.OneD.EAN13Reader::decodeMiddleCounters
	Int32U5BU5D_t385246372* ___decodeMiddleCounters_12;

public:
	inline static int32_t get_offset_of_decodeMiddleCounters_12() { return static_cast<int32_t>(offsetof(EAN13Reader_t2426349600, ___decodeMiddleCounters_12)); }
	inline Int32U5BU5D_t385246372* get_decodeMiddleCounters_12() const { return ___decodeMiddleCounters_12; }
	inline Int32U5BU5D_t385246372** get_address_of_decodeMiddleCounters_12() { return &___decodeMiddleCounters_12; }
	inline void set_decodeMiddleCounters_12(Int32U5BU5D_t385246372* value)
	{
		___decodeMiddleCounters_12 = value;
		Il2CppCodeGenWriteBarrier((&___decodeMiddleCounters_12), value);
	}
};

struct EAN13Reader_t2426349600_StaticFields
{
public:
	// System.Int32[] ZXing.OneD.EAN13Reader::FIRST_DIGIT_ENCODINGS
	Int32U5BU5D_t385246372* ___FIRST_DIGIT_ENCODINGS_11;

public:
	inline static int32_t get_offset_of_FIRST_DIGIT_ENCODINGS_11() { return static_cast<int32_t>(offsetof(EAN13Reader_t2426349600_StaticFields, ___FIRST_DIGIT_ENCODINGS_11)); }
	inline Int32U5BU5D_t385246372* get_FIRST_DIGIT_ENCODINGS_11() const { return ___FIRST_DIGIT_ENCODINGS_11; }
	inline Int32U5BU5D_t385246372** get_address_of_FIRST_DIGIT_ENCODINGS_11() { return &___FIRST_DIGIT_ENCODINGS_11; }
	inline void set_FIRST_DIGIT_ENCODINGS_11(Int32U5BU5D_t385246372* value)
	{
		___FIRST_DIGIT_ENCODINGS_11 = value;
		Il2CppCodeGenWriteBarrier((&___FIRST_DIGIT_ENCODINGS_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EAN13READER_T2426349600_H
#ifndef EAN13WRITER_T847282855_H
#define EAN13WRITER_T847282855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EAN13Writer
struct  EAN13Writer_t847282855  : public UPCEANWriter_t2703857851
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EAN13WRITER_T847282855_H
#ifndef EAN8READER_T2680079772_H
#define EAN8READER_T2680079772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EAN8Reader
struct  EAN8Reader_t2680079772  : public UPCEANReader_t361332172
{
public:
	// System.Int32[] ZXing.OneD.EAN8Reader::decodeMiddleCounters
	Int32U5BU5D_t385246372* ___decodeMiddleCounters_11;

public:
	inline static int32_t get_offset_of_decodeMiddleCounters_11() { return static_cast<int32_t>(offsetof(EAN8Reader_t2680079772, ___decodeMiddleCounters_11)); }
	inline Int32U5BU5D_t385246372* get_decodeMiddleCounters_11() const { return ___decodeMiddleCounters_11; }
	inline Int32U5BU5D_t385246372** get_address_of_decodeMiddleCounters_11() { return &___decodeMiddleCounters_11; }
	inline void set_decodeMiddleCounters_11(Int32U5BU5D_t385246372* value)
	{
		___decodeMiddleCounters_11 = value;
		Il2CppCodeGenWriteBarrier((&___decodeMiddleCounters_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EAN8READER_T2680079772_H
#ifndef EAN8WRITER_T1313672609_H
#define EAN8WRITER_T1313672609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.EAN8Writer
struct  EAN8Writer_t1313672609  : public UPCEANWriter_t2703857851
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EAN8WRITER_T1313672609_H
#ifndef ENCODERCONTEXT_T3061183610_H
#define ENCODERCONTEXT_T3061183610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.EncoderContext
struct  EncoderContext_t3061183610  : public RuntimeObject
{
public:
	// System.String ZXing.Datamatrix.Encoder.EncoderContext::msg
	String_t* ___msg_0;
	// ZXing.Datamatrix.Encoder.SymbolShapeHint ZXing.Datamatrix.Encoder.EncoderContext::shape
	int32_t ___shape_1;
	// ZXing.Dimension ZXing.Datamatrix.Encoder.EncoderContext::minSize
	Dimension_t1511315514 * ___minSize_2;
	// ZXing.Dimension ZXing.Datamatrix.Encoder.EncoderContext::maxSize
	Dimension_t1511315514 * ___maxSize_3;
	// System.Text.StringBuilder ZXing.Datamatrix.Encoder.EncoderContext::codewords
	StringBuilder_t * ___codewords_4;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::pos
	int32_t ___pos_5;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::newEncoding
	int32_t ___newEncoding_6;
	// ZXing.Datamatrix.Encoder.SymbolInfo ZXing.Datamatrix.Encoder.EncoderContext::symbolInfo
	SymbolInfo_t1219041572 * ___symbolInfo_7;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::skipAtEnd
	int32_t ___skipAtEnd_8;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___shape_1)); }
	inline int32_t get_shape_1() const { return ___shape_1; }
	inline int32_t* get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(int32_t value)
	{
		___shape_1 = value;
	}

	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___minSize_2)); }
	inline Dimension_t1511315514 * get_minSize_2() const { return ___minSize_2; }
	inline Dimension_t1511315514 ** get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(Dimension_t1511315514 * value)
	{
		___minSize_2 = value;
		Il2CppCodeGenWriteBarrier((&___minSize_2), value);
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___maxSize_3)); }
	inline Dimension_t1511315514 * get_maxSize_3() const { return ___maxSize_3; }
	inline Dimension_t1511315514 ** get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(Dimension_t1511315514 * value)
	{
		___maxSize_3 = value;
		Il2CppCodeGenWriteBarrier((&___maxSize_3), value);
	}

	inline static int32_t get_offset_of_codewords_4() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___codewords_4)); }
	inline StringBuilder_t * get_codewords_4() const { return ___codewords_4; }
	inline StringBuilder_t ** get_address_of_codewords_4() { return &___codewords_4; }
	inline void set_codewords_4(StringBuilder_t * value)
	{
		___codewords_4 = value;
		Il2CppCodeGenWriteBarrier((&___codewords_4), value);
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___pos_5)); }
	inline int32_t get_pos_5() const { return ___pos_5; }
	inline int32_t* get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(int32_t value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_newEncoding_6() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___newEncoding_6)); }
	inline int32_t get_newEncoding_6() const { return ___newEncoding_6; }
	inline int32_t* get_address_of_newEncoding_6() { return &___newEncoding_6; }
	inline void set_newEncoding_6(int32_t value)
	{
		___newEncoding_6 = value;
	}

	inline static int32_t get_offset_of_symbolInfo_7() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___symbolInfo_7)); }
	inline SymbolInfo_t1219041572 * get_symbolInfo_7() const { return ___symbolInfo_7; }
	inline SymbolInfo_t1219041572 ** get_address_of_symbolInfo_7() { return &___symbolInfo_7; }
	inline void set_symbolInfo_7(SymbolInfo_t1219041572 * value)
	{
		___symbolInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___symbolInfo_7), value);
	}

	inline static int32_t get_offset_of_skipAtEnd_8() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610, ___skipAtEnd_8)); }
	inline int32_t get_skipAtEnd_8() const { return ___skipAtEnd_8; }
	inline int32_t* get_address_of_skipAtEnd_8() { return &___skipAtEnd_8; }
	inline void set_skipAtEnd_8(int32_t value)
	{
		___skipAtEnd_8 = value;
	}
};

struct EncoderContext_t3061183610_StaticFields
{
public:
	// System.Text.Encoding ZXing.Datamatrix.Encoder.EncoderContext::encoding
	Encoding_t1523322056 * ___encoding_9;

public:
	inline static int32_t get_offset_of_encoding_9() { return static_cast<int32_t>(offsetof(EncoderContext_t3061183610_StaticFields, ___encoding_9)); }
	inline Encoding_t1523322056 * get_encoding_9() const { return ___encoding_9; }
	inline Encoding_t1523322056 ** get_address_of_encoding_9() { return &___encoding_9; }
	inline void set_encoding_9(Encoding_t1523322056 * value)
	{
		___encoding_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERCONTEXT_T3061183610_H
// ZXing.IBarcodeReader
struct NOVTABLE IBarcodeReader_t693641064 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_get_TryHarder_m3784389189(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_put_TryHarder_m3653440221(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_get_PureBarcode_m433427721(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_put_PureBarcode_m828512394(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_get_CharacterSet_m2224870269(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_put_CharacterSet_m1025071522(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_get_PossibleFormats_m1580614386(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_put_PossibleFormats_m2325001405(uint32_t ___value0ArraySize, int32_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_get_Options_m4063286363(DecodingOptions_t1209718858 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_put_Options_m712889681(DecodingOptions_t1209718858 * ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_Decode_m1547636838(uint32_t ___rawRGB0ArraySize, uint8_t* ___rawRGB0, int32_t ___width1, int32_t ___height2, int32_t ___format3, Result_t940650810 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReader_Decode_m2598565173(IWriteableBitmap_t3747397532* ___barcodeBitmap0, Result_t940650810 ** comReturnValue) = 0;
};
// ZXing.Writer
struct NOVTABLE Writer_t1994170402 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Writer_encode_m678751478(Il2CppHString ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, BitMatrix_t2873240750 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL Writer_encode_m1637322283(Il2CppHString ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, IMap_2_t1620352935* ___hints4, BitMatrix_t2873240750 ** comReturnValue) = 0;
};





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5600 = { sizeof (DetectorResult_t2934418424), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5600[2] = 
{
	DetectorResult_t2934418424::get_offset_of_U3CBitsU3Ek__BackingField_0(),
	DetectorResult_t2934418424::get_offset_of_U3CPointsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5601 = { sizeof (AztecDetectorResult_t2380792366), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5601[3] = 
{
	AztecDetectorResult_t2380792366::get_offset_of_U3CCompactU3Ek__BackingField_2(),
	AztecDetectorResult_t2380792366::get_offset_of_U3CNbDatablocksU3Ek__BackingField_3(),
	AztecDetectorResult_t2380792366::get_offset_of_U3CNbLayersU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5602 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5603 = { sizeof (AztecReader_t1238082647), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5604 = { 0, sizeof(Writer_t1994170402*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5605 = { sizeof (Decoder_t150614203), -1, sizeof(Decoder_t150614203_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5605[8] = 
{
	Decoder_t150614203_StaticFields::get_offset_of_UPPER_TABLE_0(),
	Decoder_t150614203_StaticFields::get_offset_of_LOWER_TABLE_1(),
	Decoder_t150614203_StaticFields::get_offset_of_MIXED_TABLE_2(),
	Decoder_t150614203_StaticFields::get_offset_of_PUNCT_TABLE_3(),
	Decoder_t150614203_StaticFields::get_offset_of_DIGIT_TABLE_4(),
	Decoder_t150614203_StaticFields::get_offset_of_codeTables_5(),
	Decoder_t150614203_StaticFields::get_offset_of_codeTableMap_6(),
	Decoder_t150614203::get_offset_of_ddata_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5606 = { sizeof (Table_t3518005883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5606[7] = 
{
	Table_t3518005883::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5607 = { sizeof (Detector_t566033784), -1, sizeof(Detector_t566033784_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5607[7] = 
{
	Detector_t566033784::get_offset_of_image_0(),
	Detector_t566033784::get_offset_of_compact_1(),
	Detector_t566033784::get_offset_of_nbLayers_2(),
	Detector_t566033784::get_offset_of_nbDataBlocks_3(),
	Detector_t566033784::get_offset_of_nbCenterLayers_4(),
	Detector_t566033784::get_offset_of_shift_5(),
	Detector_t566033784_StaticFields::get_offset_of_EXPECTED_CORNER_BITS_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5608 = { sizeof (Point_t3973928370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5608[2] = 
{
	Point_t3973928370::get_offset_of_U3CXU3Ek__BackingField_0(),
	Point_t3973928370::get_offset_of_U3CYU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5609 = { sizeof (AztecCode_t707731902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5609[5] = 
{
	AztecCode_t707731902::get_offset_of_U3CisCompactU3Ek__BackingField_0(),
	AztecCode_t707731902::get_offset_of_U3CSizeU3Ek__BackingField_1(),
	AztecCode_t707731902::get_offset_of_U3CLayersU3Ek__BackingField_2(),
	AztecCode_t707731902::get_offset_of_U3CCodeWordsU3Ek__BackingField_3(),
	AztecCode_t707731902::get_offset_of_U3CMatrixU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5610 = { 0, sizeof(IEncodingOptions_t2573455057*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5611 = { sizeof (Token_t3482754442), -1, sizeof(Token_t3482754442_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5611[2] = 
{
	Token_t3482754442_StaticFields::get_offset_of_EMPTY_0(),
	Token_t3482754442::get_offset_of_previous_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5612 = { sizeof (BinaryShiftToken_t838705855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5612[2] = 
{
	BinaryShiftToken_t838705855::get_offset_of_binaryShiftStart_2(),
	BinaryShiftToken_t838705855::get_offset_of_binaryShiftByteCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5613 = { sizeof (Encoder_t3466382154), -1, sizeof(Encoder_t3466382154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5613[1] = 
{
	Encoder_t3466382154_StaticFields::get_offset_of_WORD_SIZE_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5614 = { sizeof (HighLevelEncoder_t3658679140), -1, sizeof(HighLevelEncoder_t3658679140_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5614[5] = 
{
	HighLevelEncoder_t3658679140_StaticFields::get_offset_of_MODE_NAMES_0(),
	HighLevelEncoder_t3658679140_StaticFields::get_offset_of_LATCH_TABLE_1(),
	HighLevelEncoder_t3658679140_StaticFields::get_offset_of_CHAR_MAP_2(),
	HighLevelEncoder_t3658679140_StaticFields::get_offset_of_SHIFT_TABLE_3(),
	HighLevelEncoder_t3658679140::get_offset_of_text_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5615 = { sizeof (SimpleToken_t259961060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5615[2] = 
{
	SimpleToken_t259961060::get_offset_of_value_2(),
	SimpleToken_t259961060::get_offset_of_bitCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5616 = { sizeof (State_t1565218420), -1, sizeof(State_t1565218420_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5616[5] = 
{
	State_t1565218420_StaticFields::get_offset_of_INITIAL_STATE_0(),
	State_t1565218420::get_offset_of_mode_1(),
	State_t1565218420::get_offset_of_token_2(),
	State_t1565218420::get_offset_of_binaryShiftByteCount_3(),
	State_t1565218420::get_offset_of_bitCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5617 = { 0, sizeof(IBarcodeReader_t693641064*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5618 = { 0, sizeof(IBarcodeWriter_t1007852641*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5619 = { sizeof (LuminanceSource_t3713829503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5619[2] = 
{
	LuminanceSource_t3713829503::get_offset_of_width_0(),
	LuminanceSource_t3713829503::get_offset_of_height_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5620 = { sizeof (BaseLuminanceSource_t3215128144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5620[1] = 
{
	BaseLuminanceSource_t3215128144::get_offset_of_luminances_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5621 = { sizeof (Binarizer_t2848741980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5621[1] = 
{
	Binarizer_t2848741980::get_offset_of_source_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5622 = { sizeof (BinaryBitmap_t3514195023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5622[2] = 
{
	BinaryBitmap_t3514195023::get_offset_of_binarizer_0(),
	BinaryBitmap_t3514195023::get_offset_of_matrix_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5623 = { sizeof (BitmapLuminanceSource_t3601250630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5624 = { sizeof (ECI_t82143622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5624[1] = 
{
	ECI_t82143622::get_offset_of_value_Renamed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5625 = { sizeof (CharacterSetECI_t183411051), -1, sizeof(CharacterSetECI_t183411051_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5625[3] = 
{
	CharacterSetECI_t183411051_StaticFields::get_offset_of_VALUE_TO_ECI_1(),
	CharacterSetECI_t183411051_StaticFields::get_offset_of_NAME_TO_ECI_2(),
	CharacterSetECI_t183411051::get_offset_of_encodingName_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5626 = { sizeof (DecoderResult_t4252639067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5626[9] = 
{
	DecoderResult_t4252639067::get_offset_of_U3CRawBytesU3Ek__BackingField_0(),
	DecoderResult_t4252639067::get_offset_of_U3CTextU3Ek__BackingField_1(),
	DecoderResult_t4252639067::get_offset_of_U3CByteSegmentsU3Ek__BackingField_2(),
	DecoderResult_t4252639067::get_offset_of_U3CECLevelU3Ek__BackingField_3(),
	DecoderResult_t4252639067::get_offset_of_U3CErrorsCorrectedU3Ek__BackingField_4(),
	DecoderResult_t4252639067::get_offset_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5(),
	DecoderResult_t4252639067::get_offset_of_U3CErasuresU3Ek__BackingField_6(),
	DecoderResult_t4252639067::get_offset_of_U3CStructuredAppendParityU3Ek__BackingField_7(),
	DecoderResult_t4252639067::get_offset_of_U3COtherU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5627 = { sizeof (GridSampler_t2652281052), -1, sizeof(GridSampler_t2652281052_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5627[1] = 
{
	GridSampler_t2652281052_StaticFields::get_offset_of_gridSampler_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5628 = { sizeof (DefaultGridSampler_t973399702), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5629 = { sizeof (MathUtils_t220789852), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5630 = { sizeof (GlobalHistogramBinarizer_t2081160524), -1, sizeof(GlobalHistogramBinarizer_t2081160524_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5630[3] = 
{
	GlobalHistogramBinarizer_t2081160524_StaticFields::get_offset_of_EMPTY_1(),
	GlobalHistogramBinarizer_t2081160524::get_offset_of_luminances_2(),
	GlobalHistogramBinarizer_t2081160524::get_offset_of_buckets_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5631 = { sizeof (HybridBinarizer_t3943880457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5631[1] = 
{
	HybridBinarizer_t3943880457::get_offset_of_matrix_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5632 = { sizeof (PerspectiveTransform_t1690139610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5632[9] = 
{
	PerspectiveTransform_t1690139610::get_offset_of_a11_0(),
	PerspectiveTransform_t1690139610::get_offset_of_a12_1(),
	PerspectiveTransform_t1690139610::get_offset_of_a13_2(),
	PerspectiveTransform_t1690139610::get_offset_of_a21_3(),
	PerspectiveTransform_t1690139610::get_offset_of_a22_4(),
	PerspectiveTransform_t1690139610::get_offset_of_a23_5(),
	PerspectiveTransform_t1690139610::get_offset_of_a31_6(),
	PerspectiveTransform_t1690139610::get_offset_of_a32_7(),
	PerspectiveTransform_t1690139610::get_offset_of_a33_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5633 = { sizeof (GenericGFPoly_t1647299168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5633[2] = 
{
	GenericGFPoly_t1647299168::get_offset_of_field_0(),
	GenericGFPoly_t1647299168::get_offset_of_coefficients_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5634 = { sizeof (ReedSolomonDecoder_t4136138852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5634[1] = 
{
	ReedSolomonDecoder_t4136138852::get_offset_of_field_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5635 = { sizeof (ReedSolomonEncoder_t4159666307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5635[2] = 
{
	ReedSolomonEncoder_t4159666307::get_offset_of_field_0(),
	ReedSolomonEncoder_t4159666307::get_offset_of_cachedGenerators_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5636 = { sizeof (StringUtils_t3524834054), -1, sizeof(StringUtils_t3524834054_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5636[4] = 
{
	StringUtils_t3524834054_StaticFields::get_offset_of_PLATFORM_DEFAULT_ENCODING_0(),
	StringUtils_t3524834054_StaticFields::get_offset_of_SHIFT_JIS_1(),
	StringUtils_t3524834054_StaticFields::get_offset_of_GB2312_2(),
	StringUtils_t3524834054_StaticFields::get_offset_of_ASSUME_SHIFT_JIS_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5637 = { sizeof (DataMatrixReader_t1812943478), -1, sizeof(DataMatrixReader_t1812943478_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5637[2] = 
{
	DataMatrixReader_t1812943478_StaticFields::get_offset_of_NO_POINTS_0(),
	DataMatrixReader_t1812943478::get_offset_of_decoder_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5638 = { sizeof (BitMatrixParser_t3795662051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5638[3] = 
{
	BitMatrixParser_t3795662051::get_offset_of_mappingBitMatrix_0(),
	BitMatrixParser_t3795662051::get_offset_of_readMappingMatrix_1(),
	BitMatrixParser_t3795662051::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5639 = { sizeof (DataBlock_t532187477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5639[2] = 
{
	DataBlock_t532187477::get_offset_of_numDataCodewords_0(),
	DataBlock_t532187477::get_offset_of_codewords_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5640 = { sizeof (DecodedBitStreamParser_t2742795254), -1, sizeof(DecodedBitStreamParser_t2742795254_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5640[4] = 
{
	DecodedBitStreamParser_t2742795254_StaticFields::get_offset_of_C40_BASIC_SET_CHARS_0(),
	DecodedBitStreamParser_t2742795254_StaticFields::get_offset_of_C40_SHIFT2_SET_CHARS_1(),
	DecodedBitStreamParser_t2742795254_StaticFields::get_offset_of_TEXT_BASIC_SET_CHARS_2(),
	DecodedBitStreamParser_t2742795254_StaticFields::get_offset_of_TEXT_SHIFT3_SET_CHARS_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5641 = { sizeof (Mode_t592869918)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5641[8] = 
{
	Mode_t592869918::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5642 = { sizeof (Decoder_t1258845697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5642[1] = 
{
	Decoder_t1258845697::get_offset_of_rsDecoder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5643 = { sizeof (Detector_t4055904750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5643[2] = 
{
	Detector_t4055904750::get_offset_of_image_0(),
	Detector_t4055904750::get_offset_of_rectangleDetector_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5644 = { sizeof (ResultPointsAndTransitions_t2174972026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5644[3] = 
{
	ResultPointsAndTransitions_t2174972026::get_offset_of_U3CFromU3Ek__BackingField_0(),
	ResultPointsAndTransitions_t2174972026::get_offset_of_U3CToU3Ek__BackingField_1(),
	ResultPointsAndTransitions_t2174972026::get_offset_of_U3CTransitionsU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5645 = { sizeof (ResultPointsAndTransitionsComparator_t424522292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5646 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5647 = { sizeof (ASCIIEncoder_t1930431953), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5648 = { sizeof (Base256Encoder_t1561294673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5649 = { sizeof (C40Encoder_t4278006487), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5650 = { sizeof (SymbolInfo_t1219041572), -1, sizeof(SymbolInfo_t1219041572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5650[10] = 
{
	SymbolInfo_t1219041572_StaticFields::get_offset_of_PROD_SYMBOLS_0(),
	SymbolInfo_t1219041572_StaticFields::get_offset_of_symbols_1(),
	SymbolInfo_t1219041572::get_offset_of_rectangular_2(),
	SymbolInfo_t1219041572::get_offset_of_dataCapacity_3(),
	SymbolInfo_t1219041572::get_offset_of_errorCodewords_4(),
	SymbolInfo_t1219041572::get_offset_of_matrixWidth_5(),
	SymbolInfo_t1219041572::get_offset_of_matrixHeight_6(),
	SymbolInfo_t1219041572::get_offset_of_dataRegions_7(),
	SymbolInfo_t1219041572::get_offset_of_rsBlockData_8(),
	SymbolInfo_t1219041572::get_offset_of_rsBlockError_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5651 = { sizeof (DataMatrixSymbolInfo144_t265721212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5652 = { sizeof (EdifactEncoder_t3708650743), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5653 = { sizeof (EncoderContext_t3061183610), -1, sizeof(EncoderContext_t3061183610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5653[10] = 
{
	EncoderContext_t3061183610::get_offset_of_msg_0(),
	EncoderContext_t3061183610::get_offset_of_shape_1(),
	EncoderContext_t3061183610::get_offset_of_minSize_2(),
	EncoderContext_t3061183610::get_offset_of_maxSize_3(),
	EncoderContext_t3061183610::get_offset_of_codewords_4(),
	EncoderContext_t3061183610::get_offset_of_pos_5(),
	EncoderContext_t3061183610::get_offset_of_newEncoding_6(),
	EncoderContext_t3061183610::get_offset_of_symbolInfo_7(),
	EncoderContext_t3061183610::get_offset_of_skipAtEnd_8(),
	EncoderContext_t3061183610_StaticFields::get_offset_of_encoding_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5654 = { sizeof (ErrorCorrection_t2154369055), -1, sizeof(ErrorCorrection_t2154369055_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5654[4] = 
{
	ErrorCorrection_t2154369055_StaticFields::get_offset_of_FACTOR_SETS_0(),
	ErrorCorrection_t2154369055_StaticFields::get_offset_of_FACTORS_1(),
	ErrorCorrection_t2154369055_StaticFields::get_offset_of_LOG_2(),
	ErrorCorrection_t2154369055_StaticFields::get_offset_of_ALOG_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5655 = { sizeof (HighLevelEncoder_t1444622992), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5656 = { sizeof (TextEncoder_t1610847839), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5657 = { sizeof (X12Encoder_t1155741248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5658 = { sizeof (ReaderException_t3787909692), -1, sizeof(ReaderException_t3787909692_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5658[1] = 
{
	ReaderException_t3787909692_StaticFields::get_offset_of_instance_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5659 = { sizeof (FormatException_t3984179252), -1, sizeof(FormatException_t3984179252_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5659[1] = 
{
	FormatException_t3984179252_StaticFields::get_offset_of_instance_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5660 = { sizeof (InvertedLuminanceSource_t137894931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5660[2] = 
{
	InvertedLuminanceSource_t137894931::get_offset_of_delegate_2(),
	InvertedLuminanceSource_t137894931::get_offset_of_invertedMatrix_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5661 = { sizeof (BitMatrixParser_t505136508), -1, sizeof(BitMatrixParser_t505136508_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5661[2] = 
{
	BitMatrixParser_t505136508_StaticFields::get_offset_of_BITNR_0(),
	BitMatrixParser_t505136508::get_offset_of_bitMatrix_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5662 = { sizeof (DecodedBitStreamParser_t146985818), -1, sizeof(DecodedBitStreamParser_t146985818_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5662[1] = 
{
	DecodedBitStreamParser_t146985818_StaticFields::get_offset_of_SETS_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5663 = { sizeof (Decoder_t925060097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5663[1] = 
{
	Decoder_t925060097::get_offset_of_rsDecoder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5664 = { sizeof (MaxiCodeReader_t1136775217), -1, sizeof(MaxiCodeReader_t1136775217_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5664[2] = 
{
	MaxiCodeReader_t1136775217_StaticFields::get_offset_of_NO_POINTS_0(),
	MaxiCodeReader_t1136775217::get_offset_of_decoder_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5665 = { sizeof (MultiFormatReader_t1236949585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5665[2] = 
{
	MultiFormatReader_t1236949585::get_offset_of_hints_0(),
	MultiFormatReader_t1236949585::get_offset_of_readers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5666 = { sizeof (MultiFormatWriter_t228917322), -1, sizeof(MultiFormatWriter_t228917322_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5666[14] = 
{
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_formatMap_0(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatee_1(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegatef_2(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate10_3(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate11_4(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate12_5(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate13_6(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate14_7(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate15_8(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate16_9(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate17_10(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate18_11(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate19_12(),
	MultiFormatWriter_t228917322_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate1a_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5667 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5668 = { sizeof (GenericMultipleBarcodeReader_t1391752000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5668[1] = 
{
	GenericMultipleBarcodeReader_t1391752000::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5669 = { sizeof (Detector_t1946199639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5669[2] = 
{
	Detector_t1946199639::get_offset_of_image_0(),
	Detector_t1946199639::get_offset_of_resultPointCallback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5670 = { sizeof (MultiDetector_t860154179), -1, sizeof(MultiDetector_t860154179_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5670[1] = 
{
	MultiDetector_t860154179_StaticFields::get_offset_of_EMPTY_DETECTOR_RESULTS_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5671 = { sizeof (FinderPatternFinder_t3261542617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5671[5] = 
{
	FinderPatternFinder_t3261542617::get_offset_of_image_0(),
	FinderPatternFinder_t3261542617::get_offset_of_possibleCenters_1(),
	FinderPatternFinder_t3261542617::get_offset_of_hasSkipped_2(),
	FinderPatternFinder_t3261542617::get_offset_of_crossCheckStateCount_3(),
	FinderPatternFinder_t3261542617::get_offset_of_resultPointCallback_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5672 = { sizeof (FurthestFromAverageComparator_t508768559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5672[1] = 
{
	FurthestFromAverageComparator_t508768559::get_offset_of_average_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5673 = { sizeof (CenterComparator_t1347568865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5673[1] = 
{
	CenterComparator_t1347568865::get_offset_of_average_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5674 = { sizeof (MultiFinderPatternFinder_t2074636279), -1, sizeof(MultiFinderPatternFinder_t2074636279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5674[4] = 
{
	MultiFinderPatternFinder_t2074636279_StaticFields::get_offset_of_EMPTY_RESULT_ARRAY_5(),
	MultiFinderPatternFinder_t2074636279_StaticFields::get_offset_of_MAX_MODULE_COUNT_PER_EDGE_6(),
	MultiFinderPatternFinder_t2074636279_StaticFields::get_offset_of_MIN_MODULE_COUNT_PER_EDGE_7(),
	MultiFinderPatternFinder_t2074636279_StaticFields::get_offset_of_DIFF_MODSIZE_CUTOFF_PERCENT_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5675 = { sizeof (ModuleSizeComparator_t512736973), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5676 = { sizeof (QRCodeReader_t3363387111), -1, sizeof(QRCodeReader_t3363387111_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5676[2] = 
{
	QRCodeReader_t3363387111_StaticFields::get_offset_of_NO_POINTS_0(),
	QRCodeReader_t3363387111::get_offset_of_decoder_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5677 = { sizeof (QRCodeMultiReader_t4082127310), -1, sizeof(QRCodeMultiReader_t4082127310_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5677[1] = 
{
	QRCodeMultiReader_t4082127310_StaticFields::get_offset_of_NO_POINTS_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5678 = { sizeof (OneDReader_t217072914), -1, sizeof(OneDReader_t217072914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5678[2] = 
{
	OneDReader_t217072914_StaticFields::get_offset_of_INTEGER_MATH_SHIFT_0(),
	OneDReader_t217072914_StaticFields::get_offset_of_PATTERN_MATCH_RESULT_SCALE_FACTOR_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5679 = { sizeof (CodaBarReader_t401773518), -1, sizeof(CodaBarReader_t401773518_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5679[8] = 
{
	CodaBarReader_t401773518_StaticFields::get_offset_of_MAX_ACCEPTABLE_2(),
	CodaBarReader_t401773518_StaticFields::get_offset_of_PADDING_3(),
	CodaBarReader_t401773518_StaticFields::get_offset_of_ALPHABET_4(),
	CodaBarReader_t401773518_StaticFields::get_offset_of_CHARACTER_ENCODINGS_5(),
	CodaBarReader_t401773518_StaticFields::get_offset_of_STARTEND_ENCODING_6(),
	CodaBarReader_t401773518::get_offset_of_decodeRowResult_7(),
	CodaBarReader_t401773518::get_offset_of_counters_8(),
	CodaBarReader_t401773518::get_offset_of_counterLength_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5680 = { sizeof (OneDimensionalCodeWriter_t460700247), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5681 = { sizeof (CodaBarWriter_t845353143), -1, sizeof(CodaBarWriter_t845353143_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5681[3] = 
{
	CodaBarWriter_t845353143_StaticFields::get_offset_of_START_END_CHARS_0(),
	CodaBarWriter_t845353143_StaticFields::get_offset_of_ALT_START_END_CHARS_1(),
	CodaBarWriter_t845353143_StaticFields::get_offset_of_CHARS_WHICH_ARE_TEN_LENGTH_EACH_AFTER_DECODED_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5682 = { sizeof (Code128Reader_t2567358360), -1, sizeof(Code128Reader_t2567358360_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5682[3] = 
{
	Code128Reader_t2567358360_StaticFields::get_offset_of_CODE_PATTERNS_2(),
	Code128Reader_t2567358360_StaticFields::get_offset_of_MAX_AVG_VARIANCE_3(),
	Code128Reader_t2567358360_StaticFields::get_offset_of_MAX_INDIVIDUAL_VARIANCE_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5683 = { sizeof (Code128Writer_t3122924837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5683[1] = 
{
	Code128Writer_t3122924837::get_offset_of_forceCodesetB_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5684 = { sizeof (Code39Reader_t2567994168), -1, sizeof(Code39Reader_t2567994168_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5684[8] = 
{
	Code39Reader_t2567994168_StaticFields::get_offset_of_ALPHABET_STRING_2(),
	Code39Reader_t2567994168_StaticFields::get_offset_of_ALPHABET_3(),
	Code39Reader_t2567994168_StaticFields::get_offset_of_CHARACTER_ENCODINGS_4(),
	Code39Reader_t2567994168_StaticFields::get_offset_of_ASTERISK_ENCODING_5(),
	Code39Reader_t2567994168::get_offset_of_usingCheckDigit_6(),
	Code39Reader_t2567994168::get_offset_of_extendedMode_7(),
	Code39Reader_t2567994168::get_offset_of_decodeRowResult_8(),
	Code39Reader_t2567994168::get_offset_of_counters_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5685 = { sizeof (Code39Writer_t3324653627), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5686 = { sizeof (Code93Reader_t3843980150), -1, sizeof(Code93Reader_t3843980150_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5686[5] = 
{
	Code93Reader_t3843980150_StaticFields::get_offset_of_ALPHABET_2(),
	Code93Reader_t3843980150_StaticFields::get_offset_of_CHARACTER_ENCODINGS_3(),
	Code93Reader_t3843980150_StaticFields::get_offset_of_ASTERISK_ENCODING_4(),
	Code93Reader_t3843980150::get_offset_of_decodeRowResult_5(),
	Code93Reader_t3843980150::get_offset_of_counters_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5687 = { sizeof (UPCEANReader_t361332172), -1, sizeof(UPCEANReader_t361332172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5687[9] = 
{
	UPCEANReader_t361332172_StaticFields::get_offset_of_MAX_AVG_VARIANCE_2(),
	UPCEANReader_t361332172_StaticFields::get_offset_of_MAX_INDIVIDUAL_VARIANCE_3(),
	UPCEANReader_t361332172_StaticFields::get_offset_of_START_END_PATTERN_4(),
	UPCEANReader_t361332172_StaticFields::get_offset_of_MIDDLE_PATTERN_5(),
	UPCEANReader_t361332172_StaticFields::get_offset_of_L_PATTERNS_6(),
	UPCEANReader_t361332172_StaticFields::get_offset_of_L_AND_G_PATTERNS_7(),
	UPCEANReader_t361332172::get_offset_of_decodeRowStringBuffer_8(),
	UPCEANReader_t361332172::get_offset_of_extensionReader_9(),
	UPCEANReader_t361332172::get_offset_of_eanManSupport_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5688 = { sizeof (EAN13Reader_t2426349600), -1, sizeof(EAN13Reader_t2426349600_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5688[2] = 
{
	EAN13Reader_t2426349600_StaticFields::get_offset_of_FIRST_DIGIT_ENCODINGS_11(),
	EAN13Reader_t2426349600::get_offset_of_decodeMiddleCounters_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5689 = { sizeof (UPCEANWriter_t2703857851), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5690 = { sizeof (EAN13Writer_t847282855), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5691 = { sizeof (EAN8Reader_t2680079772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5691[1] = 
{
	EAN8Reader_t2680079772::get_offset_of_decodeMiddleCounters_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5692 = { sizeof (EAN8Writer_t1313672609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5693 = { sizeof (EANManufacturerOrgSupport_t3548211393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5693[2] = 
{
	EANManufacturerOrgSupport_t3548211393::get_offset_of_ranges_0(),
	EANManufacturerOrgSupport_t3548211393::get_offset_of_countryIdentifiers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5694 = { sizeof (ITFReader_t2679325567), -1, sizeof(ITFReader_t2679325567_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5694[7] = 
{
	ITFReader_t2679325567_StaticFields::get_offset_of_MAX_AVG_VARIANCE_2(),
	ITFReader_t2679325567_StaticFields::get_offset_of_MAX_INDIVIDUAL_VARIANCE_3(),
	ITFReader_t2679325567_StaticFields::get_offset_of_DEFAULT_ALLOWED_LENGTHS_4(),
	ITFReader_t2679325567::get_offset_of_narrowLineWidth_5(),
	ITFReader_t2679325567_StaticFields::get_offset_of_START_PATTERN_6(),
	ITFReader_t2679325567_StaticFields::get_offset_of_END_PATTERN_REVERSED_7(),
	ITFReader_t2679325567_StaticFields::get_offset_of_PATTERNS_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5695 = { sizeof (ITFWriter_t1084262668), -1, sizeof(ITFWriter_t1084262668_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5695[2] = 
{
	ITFWriter_t1084262668_StaticFields::get_offset_of_START_PATTERN_0(),
	ITFWriter_t1084262668_StaticFields::get_offset_of_END_PATTERN_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5696 = { sizeof (MSIReader_t3060286438), -1, sizeof(MSIReader_t3060286438_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5696[8] = 
{
	MSIReader_t3060286438_StaticFields::get_offset_of_ALPHABET_STRING_2(),
	MSIReader_t3060286438_StaticFields::get_offset_of_ALPHABET_3(),
	MSIReader_t3060286438_StaticFields::get_offset_of_CHARACTER_ENCODINGS_4(),
	MSIReader_t3060286438::get_offset_of_usingCheckDigit_5(),
	MSIReader_t3060286438::get_offset_of_decodeRowResult_6(),
	MSIReader_t3060286438::get_offset_of_counters_7(),
	MSIReader_t3060286438::get_offset_of_averageCounterWidth_8(),
	MSIReader_t3060286438_StaticFields::get_offset_of_doubleAndCrossSum_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5697 = { sizeof (MSIWriter_t4026370419), -1, sizeof(MSIWriter_t4026370419_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5697[3] = 
{
	MSIWriter_t4026370419_StaticFields::get_offset_of_startWidths_0(),
	MSIWriter_t4026370419_StaticFields::get_offset_of_endWidths_1(),
	MSIWriter_t4026370419_StaticFields::get_offset_of_numberWidths_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5698 = { sizeof (MultiFormatOneDReader_t797580668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5698[1] = 
{
	MultiFormatOneDReader_t797580668::get_offset_of_readers_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5699 = { sizeof (MultiFormatUPCEANReader_t2941787780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5699[1] = 
{
	MultiFormatUPCEANReader_t2941787780::get_offset_of_readers_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
