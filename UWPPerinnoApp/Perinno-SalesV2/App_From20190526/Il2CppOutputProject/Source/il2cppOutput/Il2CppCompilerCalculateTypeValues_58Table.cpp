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
// System.Collections.Generic.IDictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<ZXing.ResultPoint>>
struct IDictionary_2_t1557668636;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t3788232239;
// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>
struct IDictionary_2_t1434567506;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t843977116;
// System.Func`2<Windows.UI.Xaml.Media.Imaging.WriteableBitmap,ZXing.LuminanceSource>
struct Func_2_t4141306170;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t3965955927;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t373162523;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1<System.EventHandler`1<System.Object>>
struct EventRegistrationTokenTable_1_t1476126395;
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1<System.EventHandler`1<ZXing.Result>>
struct EventRegistrationTokenTable_1_t3631638337;
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1<System.EventHandler`1<ZXing.ResultPoint>>
struct EventRegistrationTokenTable_1_t4164492863;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1523322056;
// ZXing.Common.BitArray
struct BitArray_t261046764;
// ZXing.Common.BitMatrix
struct BitMatrix_t2873240750;
// ZXing.Common.DecodingOptions
struct DecodingOptions_t1209718858;
// ZXing.Datamatrix.Internal.Version/ECB[]
struct ECBU5BU5D_t2340627920;
// ZXing.Datamatrix.Internal.Version/ECBlocks
struct ECBlocks_t446047466;
// ZXing.Datamatrix.Internal.Version[]
struct VersionU5BU5D_t2538480206;
// ZXing.OneD.EAN13Writer
struct EAN13Writer_t847282855;
// ZXing.QrCode.Internal.ErrorCorrectionLevel[]
struct ErrorCorrectionLevelU5BU5D_t1870060265;
// ZXing.Reader
struct Reader_t2877770399;
// ZXing.Rendering.PixelData
struct PixelData_t619138477;
// ZXing.Result
struct Result_t940650810;
// ZXing.ResultPoint
struct ResultPoint_t1473505336;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t569055209;

struct IEventHandler_1_t1004265597_ComCallableWrapper;
struct IEventHandler_1_t3159777539_ComCallableWrapper;
struct IEventHandler_1_t3692632065_ComCallableWrapper;
struct IMap_2_t1029762545;
struct IMap_2_t1620352935;
struct IMap_2_t3974017668;
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
// ZXing.Aztec.IAztecResultMetadataClass
struct NOVTABLE IAztecResultMetadataClass_t495712877 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAztecResultMetadataClass_get_Compact_m2203285066(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAztecResultMetadataClass_get_Datablocks_m1308501916(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAztecResultMetadataClass_get_Layers_m3150460251(int32_t* comReturnValue) = 0;
};
// ZXing.Aztec.IAztecResultMetadataFactory
struct NOVTABLE IAztecResultMetadataFactory_t952238970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.Common.IBitArrayClass
struct NOVTABLE IBitArrayClass_t2689015707 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_appendBitArray_m2470767049(BitArray_t261046764 * ___other0) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_appendBits_m4234012058(int32_t ___value0, int32_t ___numBits1) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_appendBit_m3161704209(bool ___bit0) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_clear_m848521091() = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_Clone_m3488614678(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_Equals_m2568846565(Il2CppIInspectable* ___o0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_flip_m2533860235(int32_t ___i0) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_get_Array_m2682532243(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_get_Size_m2033448662(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_get_SizeInBytes_m3497886347(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_GetHashCode_m1296657681(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_getNextSet_m444765287(int32_t ___from0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_getNextUnset_m2525502799(int32_t ___from0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_get_m646977394(int32_t ___i0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_isRange_m944224509(int32_t ___start0, int32_t ___end1, bool ___val2, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_reverse_m677998258() = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_setBulk_m3436048211(int32_t ___i0, int32_t ___newBits1) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_setRange_m1265946928(int32_t ___start0, int32_t ___end1) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_toBytes_m2469625763(int32_t ___bitOffset0, uint32_t ___array1ArraySize, uint8_t* ___array1, int32_t ___offset2, int32_t ___numBytes3) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_ToString_m3906611724(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitArrayClass_xor_m3110408823(BitArray_t261046764 * ___other0) = 0;
};
// ZXing.Common.IBitArrayFactory
struct NOVTABLE IBitArrayFactory_t1314474630 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.Common.IBitMatrixFactory
struct NOVTABLE IBitMatrixFactory_t523045875 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.Common.IBitSourceClass
struct NOVTABLE IBitSourceClass_t3410129292 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBitSourceClass_available_m350549656(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitSourceClass_get_BitOffset_m3284104308(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitSourceClass_get_ByteOffset_m3304247493(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBitSourceClass_readBits_m2626231780(int32_t ___numBits0, int32_t* comReturnValue) = 0;
};
// ZXing.Common.IBitSourceFactory
struct NOVTABLE IBitSourceFactory_t3270869838 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
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
// ZXing.Datamatrix.Encoder.IDefaultPlacementClass
struct NOVTABLE IDefaultPlacementClass_t1860642293 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_get_Bits_m2211313376(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_get_Numcols_m3327349276(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_get_Numrows_m2357678620(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_getBit_m2287031462(int32_t ___col0, int32_t ___row1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_hasBit_m925372363(int32_t ___col0, int32_t ___row1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_place_m489159922() = 0;
	virtual il2cpp_hresult_t STDCALL IDefaultPlacementClass_setBit_m1764245839(int32_t ___col0, int32_t ___row1, bool ___bit2) = 0;
};
// ZXing.Datamatrix.Encoder.IDefaultPlacementFactory
struct NOVTABLE IDefaultPlacementFactory_t1666364664 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.Datamatrix.Internal.IVersionClass
struct NOVTABLE IVersionClass_t830662294 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVersionClass_getDataRegionSizeColumns_m3924451392(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVersionClass_getDataRegionSizeRows_m2897404538(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVersionClass_getSymbolSizeColumns_m1201535554(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVersionClass_getSymbolSizeRows_m1626744076(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVersionClass_getTotalCodewords_m3661846222(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVersionClass_getVersionNumber_m1777011945(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVersionClass_ToString_m3386492426(Il2CppHString* comReturnValue) = 0;
};
// ZXing.Datamatrix.Internal.IVersionStatic
struct NOVTABLE IVersionStatic_t1522428984 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.IDimensionClass
struct NOVTABLE IDimensionClass_t3381111183 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDimensionClass_Equals_m1709266635(Il2CppIInspectable* ___other0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionClass_get_Height_m407696635(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionClass_get_Width_m530072542(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionClass_GetHashCode_m439799416(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionClass_ToString_m254153113(Il2CppHString* comReturnValue) = 0;
};
// ZXing.IDimensionFactory
struct NOVTABLE IDimensionFactory_t607066857 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.IResultFactory
struct NOVTABLE IResultFactory_t32653550 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
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
// ZXing.IResultPointFactory
struct NOVTABLE IResultPointFactory_t182320767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.IResultPointStatic
struct NOVTABLE IResultPointStatic_t3181330277 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.PDF417.IPDF417ResultMetadataClass
struct NOVTABLE IPDF417ResultMetadataClass_t1475396345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_get_FileId_m2703442888(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_get_IsLastSegment_m3826590886(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_get_OptionalData_m1250513979(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_get_SegmentIndex_m1139837539(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_put_FileId_m2394151440(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_put_IsLastSegment_m3736342691(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_put_OptionalData_m1051094103(uint32_t ___value0ArraySize, int32_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPDF417ResultMetadataClass_put_SegmentIndex_m2573322133(int32_t ___value0) = 0;
};
// ZXing.PDF417.Internal.IDimensionsClass
struct NOVTABLE IDimensionsClass_t3105469303 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDimensionsClass_get_MaxCols_m331828277(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionsClass_get_MaxRows_m1992021129(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionsClass_get_MinCols_m2311995997(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDimensionsClass_get_MinRows_m389682273(int32_t* comReturnValue) = 0;
};
// ZXing.PDF417.Internal.IDimensionsFactory
struct NOVTABLE IDimensionsFactory_t1306082151 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
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
// ZXing.QrCode.Internal.IErrorCorrectionLevelStatic
struct NOVTABLE IErrorCorrectionLevelStatic_t2658181634 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// ZXing.QrCode.Internal.IQRCodeDecoderMetaDataClass
struct NOVTABLE IQRCodeDecoderMetaDataClass_t867614159 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IQRCodeDecoderMetaDataClass_get_IsMirrored_m2235945858(bool* comReturnValue) = 0;
};
// ZXing.QrCode.Internal.IQRCodeDecoderMetaDataFactory
struct NOVTABLE IQRCodeDecoderMetaDataFactory_t1898222457 : Il2CppIInspectable
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
#ifndef ECB_T1992231197_H
#define ECB_T1992231197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Version/ECB
struct  ECB_t1992231197  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.Datamatrix.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_t1992231197, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_t1992231197, ___dataCodewords_1)); }
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
#endif // ECB_T1992231197_H
#ifndef ECBLOCKS_T446047466_H
#define ECBLOCKS_T446047466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Version/ECBlocks
struct  ECBlocks_t446047466  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.Version/ECBlocks::ecCodewords
	int32_t ___ecCodewords_0;
	// ZXing.Datamatrix.Internal.Version/ECB[] ZXing.Datamatrix.Internal.Version/ECBlocks::_ecBlocksValue
	ECBU5BU5D_t2340627920* ____ecBlocksValue_1;

public:
	inline static int32_t get_offset_of_ecCodewords_0() { return static_cast<int32_t>(offsetof(ECBlocks_t446047466, ___ecCodewords_0)); }
	inline int32_t get_ecCodewords_0() const { return ___ecCodewords_0; }
	inline int32_t* get_address_of_ecCodewords_0() { return &___ecCodewords_0; }
	inline void set_ecCodewords_0(int32_t value)
	{
		___ecCodewords_0 = value;
	}

	inline static int32_t get_offset_of__ecBlocksValue_1() { return static_cast<int32_t>(offsetof(ECBlocks_t446047466, ____ecBlocksValue_1)); }
	inline ECBU5BU5D_t2340627920* get__ecBlocksValue_1() const { return ____ecBlocksValue_1; }
	inline ECBU5BU5D_t2340627920** get_address_of__ecBlocksValue_1() { return &____ecBlocksValue_1; }
	inline void set__ecBlocksValue_1(ECBU5BU5D_t2340627920* value)
	{
		____ecBlocksValue_1 = value;
		Il2CppCodeGenWriteBarrier((&____ecBlocksValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECBLOCKS_T446047466_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1704204591_H
#define __STATICARRAYINITTYPESIZEU3D10_T1704204591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1704204591 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1704204591__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1704204591_H
#ifndef __STATICARRAYINITTYPESIZEU3D1024_T2601026981_H
#define __STATICARRAYINITTYPESIZEU3D1024_T2601026981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=1024
struct  __StaticArrayInitTypeSizeU3D1024_t2601026981 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t2601026981__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1024_T2601026981_H
#ifndef __STATICARRAYINITTYPESIZEU3D11148_T4130571686_H
#define __STATICARRAYINITTYPESIZEU3D11148_T4130571686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=11148
struct  __StaticArrayInitTypeSizeU3D11148_t4130571686 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11148_t4130571686__padding[11148];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D11148_T4130571686_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T1704204589_H
#define __STATICARRAYINITTYPESIZEU3D12_T1704204589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t1704204589 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1704204589__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T1704204589_H
#ifndef __STATICARRAYINITTYPESIZEU3D120_T1705253165_H
#define __STATICARRAYINITTYPESIZEU3D120_T1705253165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_t1705253165 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t1705253165__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D120_T1705253165_H
#ifndef __STATICARRAYINITTYPESIZEU3D124_T1704991021_H
#define __STATICARRAYINITTYPESIZEU3D124_T1704991021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=124
struct  __StaticArrayInitTypeSizeU3D124_t1704991021 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t1704991021__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D124_T1704991021_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T1705777453_H
#define __STATICARRAYINITTYPESIZEU3D128_T1705777453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t1705777453 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t1705777453__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T1705777453_H
#ifndef __STATICARRAYINITTYPESIZEU3D136_T1704859950_H
#define __STATICARRAYINITTYPESIZEU3D136_T1704859950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=136
struct  __StaticArrayInitTypeSizeU3D136_t1704859950 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D136_t1704859950__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D136_T1704859950_H
#ifndef __STATICARRAYINITTYPESIZEU3D144_T1704991019_H
#define __STATICARRAYINITTYPESIZEU3D144_T1704991019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=144
struct  __StaticArrayInitTypeSizeU3D144_t1704991019 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t1704991019__padding[144];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D144_T1704991019_H
#ifndef __STATICARRAYINITTYPESIZEU3D148_T1705777451_H
#define __STATICARRAYINITTYPESIZEU3D148_T1705777451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=148
struct  __StaticArrayInitTypeSizeU3D148_t1705777451 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D148_t1705777451__padding[148];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D148_T1705777451_H
#ifndef __STATICARRAYINITTYPESIZEU3D168_T1705777449_H
#define __STATICARRAYINITTYPESIZEU3D168_T1705777449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=168
struct  __StaticArrayInitTypeSizeU3D168_t1705777449 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D168_t1705777449__padding[168];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D168_T1705777449_H
#ifndef __STATICARRAYINITTYPESIZEU3D176_T1704859946_H
#define __STATICARRAYINITTYPESIZEU3D176_T1704859946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=176
struct  __StaticArrayInitTypeSizeU3D176_t1704859946 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D176_t1704859946__padding[176];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D176_T1704859946_H
#ifndef __STATICARRAYINITTYPESIZEU3D192_T1705122104_H
#define __STATICARRAYINITTYPESIZEU3D192_T1705122104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=192
struct  __StaticArrayInitTypeSizeU3D192_t1705122104 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t1705122104__padding[192];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D192_T1705122104_H
#ifndef __STATICARRAYINITTYPESIZEU3D2048_T4080143969_H
#define __STATICARRAYINITTYPESIZEU3D2048_T4080143969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=2048
struct  __StaticArrayInitTypeSizeU3D2048_t4080143969 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t4080143969__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2048_T4080143969_H
#ifndef __STATICARRAYINITTYPESIZEU3D224_T4043643181_H
#define __STATICARRAYINITTYPESIZEU3D224_T4043643181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=224
struct  __StaticArrayInitTypeSizeU3D224_t4043643181 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D224_t4043643181__padding[224];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D224_T4043643181_H
#ifndef __STATICARRAYINITTYPESIZEU3D24_T4042856747_H
#define __STATICARRAYINITTYPESIZEU3D24_T4042856747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t4042856747 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t4042856747__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T4042856747_H
#ifndef __STATICARRAYINITTYPESIZEU3D248_T4044429611_H
#define __STATICARRAYINITTYPESIZEU3D248_T4044429611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=248
struct  __StaticArrayInitTypeSizeU3D248_t4044429611 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D248_t4044429611__padding[248];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D248_T4044429611_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T4043512108_H
#define __STATICARRAYINITTYPESIZEU3D256_T4043512108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t4043512108 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t4043512108__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T4043512108_H
#ifndef __STATICARRAYINITTYPESIZEU3D272_T4043774250_H
#define __STATICARRAYINITTYPESIZEU3D272_T4043774250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=272
struct  __StaticArrayInitTypeSizeU3D272_t4043774250 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D272_t4043774250__padding[272];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D272_T4043774250_H
#ifndef __STATICARRAYINITTYPESIZEU3D28_T4042856759_H
#define __STATICARRAYINITTYPESIZEU3D28_T4042856759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_t4042856759 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t4042856759__padding[28];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D28_T4042856759_H
#ifndef __STATICARRAYINITTYPESIZEU3D30_T2086541615_H
#define __STATICARRAYINITTYPESIZEU3D30_T2086541615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=30
struct  __StaticArrayInitTypeSizeU3D30_t2086541615 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30_t2086541615__padding[30];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D30_T2086541615_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2086541613_H
#define __STATICARRAYINITTYPESIZEU3D32_T2086541613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2086541613 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2086541613__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2086541613_H
#ifndef __STATICARRAYINITTYPESIZEU3D36_T2086541609_H
#define __STATICARRAYINITTYPESIZEU3D36_T2086541609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=36
struct  __StaticArrayInitTypeSizeU3D36_t2086541609 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t2086541609__padding[36];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D36_T2086541609_H
#ifndef __STATICARRAYINITTYPESIZEU3D3716_T1170644074_H
#define __STATICARRAYINITTYPESIZEU3D3716_T1170644074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=3716
struct  __StaticArrayInitTypeSizeU3D3716_t1170644074 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3716_t1170644074__padding[3716];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3716_T1170644074_H
#ifndef __STATICARRAYINITTYPESIZEU3D384_T2087328055_H
#define __STATICARRAYINITTYPESIZEU3D384_T2087328055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=384
struct  __StaticArrayInitTypeSizeU3D384_t2087328055 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_t2087328055__padding[384];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D384_T2087328055_H
#ifndef __STATICARRAYINITTYPESIZEU3D40_T2895845679_H
#define __STATICARRAYINITTYPESIZEU3D40_T2895845679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_t2895845679 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t2895845679__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D40_T2895845679_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T2895845675_H
#define __STATICARRAYINITTYPESIZEU3D44_T2895845675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t2895845675 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t2895845675__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T2895845675_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T2895845687_H
#define __STATICARRAYINITTYPESIZEU3D48_T2895845687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t2895845687 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t2895845687__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T2895845687_H
#ifndef __STATICARRAYINITTYPESIZEU3D50_T939530543_H
#define __STATICARRAYINITTYPESIZEU3D50_T939530543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=50
struct  __StaticArrayInitTypeSizeU3D50_t939530543 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D50_t939530543__padding[50];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D50_T939530543_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T940448048_H
#define __STATICARRAYINITTYPESIZEU3D512_T940448048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t940448048 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t940448048__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T940448048_H
#ifndef __STATICARRAYINITTYPESIZEU3D54_T939530539_H
#define __STATICARRAYINITTYPESIZEU3D54_T939530539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=54
struct  __StaticArrayInitTypeSizeU3D54_t939530539 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D54_t939530539__padding[54];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D54_T939530539_H
#ifndef __STATICARRAYINITTYPESIZEU3D56_T939530537_H
#define __STATICARRAYINITTYPESIZEU3D56_T939530537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=56
struct  __StaticArrayInitTypeSizeU3D56_t939530537 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t939530537__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D56_T939530537_H
#ifndef __STATICARRAYINITTYPESIZEU3D58_T939530551_H
#define __STATICARRAYINITTYPESIZEU3D58_T939530551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=58
struct  __StaticArrayInitTypeSizeU3D58_t939530551 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D58_t939530551__padding[58];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D58_T939530551_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T75868736_H
#define __STATICARRAYINITTYPESIZEU3D6_T75868736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t75868736 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t75868736__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T75868736_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3278182699_H
#define __STATICARRAYINITTYPESIZEU3D64_T3278182699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3278182699 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t3278182699__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3278182699_H
#ifndef __STATICARRAYINITTYPESIZEU3D72_T1321867565_H
#define __STATICARRAYINITTYPESIZEU3D72_T1321867565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=72
struct  __StaticArrayInitTypeSizeU3D72_t1321867565 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t1321867565__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D72_T1321867565_H
#ifndef __STATICARRAYINITTYPESIZEU3D80_T894900527_H
#define __STATICARRAYINITTYPESIZEU3D80_T894900527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=80
struct  __StaticArrayInitTypeSizeU3D80_t894900527 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t894900527__padding[80];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D80_T894900527_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T31238720_H
#define __STATICARRAYINITTYPESIZEU3D9_T31238720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t31238720 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t31238720__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T31238720_H
#ifndef __STATICARRAYINITTYPESIZEU3D90_T3233552687_H
#define __STATICARRAYINITTYPESIZEU3D90_T3233552687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=90
struct  __StaticArrayInitTypeSizeU3D90_t3233552687 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D90_t3233552687__padding[90];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D90_T3233552687_H
#ifndef __STATICARRAYINITTYPESIZEU3D96_T3233552681_H
#define __STATICARRAYINITTYPESIZEU3D96_T3233552681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>{CEAE076D-3689-4E10-8374-98842B5F062C}/__StaticArrayInitTypeSize=96
struct  __StaticArrayInitTypeSizeU3D96_t3233552681 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t3233552681__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D96_T3233552681_H
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
#ifndef AZTECRESULTMETADATA_T4210155528_H
#define AZTECRESULTMETADATA_T4210155528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.AztecResultMetadata
struct  AztecResultMetadata_t4210155528  : public Il2CppComObject
{
public:
	// System.Boolean ZXing.Aztec.AztecResultMetadata::<Compact>k__BackingField
	bool ___U3CCompactU3Ek__BackingField_0;
	// System.Int32 ZXing.Aztec.AztecResultMetadata::<Datablocks>k__BackingField
	int32_t ___U3CDatablocksU3Ek__BackingField_1;
	// System.Int32 ZXing.Aztec.AztecResultMetadata::<Layers>k__BackingField
	int32_t ___U3CLayersU3Ek__BackingField_2;
	// Cached pointer to ZXing.Aztec.IAztecResultMetadataClass
	IAztecResultMetadataClass_t495712877* ____iaztecResultMetadataClass_t495712877;

public:
	inline static int32_t get_offset_of_U3CCompactU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AztecResultMetadata_t4210155528, ___U3CCompactU3Ek__BackingField_0)); }
	inline bool get_U3CCompactU3Ek__BackingField_0() const { return ___U3CCompactU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCompactU3Ek__BackingField_0() { return &___U3CCompactU3Ek__BackingField_0; }
	inline void set_U3CCompactU3Ek__BackingField_0(bool value)
	{
		___U3CCompactU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CDatablocksU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AztecResultMetadata_t4210155528, ___U3CDatablocksU3Ek__BackingField_1)); }
	inline int32_t get_U3CDatablocksU3Ek__BackingField_1() const { return ___U3CDatablocksU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CDatablocksU3Ek__BackingField_1() { return &___U3CDatablocksU3Ek__BackingField_1; }
	inline void set_U3CDatablocksU3Ek__BackingField_1(int32_t value)
	{
		___U3CDatablocksU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CLayersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AztecResultMetadata_t4210155528, ___U3CLayersU3Ek__BackingField_2)); }
	inline int32_t get_U3CLayersU3Ek__BackingField_2() const { return ___U3CLayersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CLayersU3Ek__BackingField_2() { return &___U3CLayersU3Ek__BackingField_2; }
	inline void set_U3CLayersU3Ek__BackingField_2(int32_t value)
	{
		___U3CLayersU3Ek__BackingField_2 = value;
	}
	inline IAztecResultMetadataClass_t495712877* get_____iaztecResultMetadataClass_t495712877()
	{
		IAztecResultMetadataClass_t495712877* returnValue = ____iaztecResultMetadataClass_t495712877;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAztecResultMetadataClass_t495712877::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAztecResultMetadataClass_t495712877>((&____iaztecResultMetadataClass_t495712877), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iaztecResultMetadataClass_t495712877;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AZTECRESULTMETADATA_T4210155528_H
#ifndef BITARRAY_T261046764_H
#define BITARRAY_T261046764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.BitArray
struct  BitArray_t261046764  : public Il2CppComObject
{
public:
	// System.Int32[] ZXing.Common.BitArray::bits
	Int32U5BU5D_t385246372* ___bits_0;
	// System.Int32 ZXing.Common.BitArray::size
	int32_t ___size_1;
	// Cached pointer to ZXing.Common.IBitArrayClass
	IBitArrayClass_t2689015707* ____ibitArrayClass_t2689015707;

public:
	inline static int32_t get_offset_of_bits_0() { return static_cast<int32_t>(offsetof(BitArray_t261046764, ___bits_0)); }
	inline Int32U5BU5D_t385246372* get_bits_0() const { return ___bits_0; }
	inline Int32U5BU5D_t385246372** get_address_of_bits_0() { return &___bits_0; }
	inline void set_bits_0(Int32U5BU5D_t385246372* value)
	{
		___bits_0 = value;
		Il2CppCodeGenWriteBarrier((&___bits_0), value);
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(BitArray_t261046764, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}
	inline IBitArrayClass_t2689015707* get_____ibitArrayClass_t2689015707()
	{
		IBitArrayClass_t2689015707* returnValue = ____ibitArrayClass_t2689015707;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBitArrayClass_t2689015707::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBitArrayClass_t2689015707>((&____ibitArrayClass_t2689015707), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibitArrayClass_t2689015707;
			}
		}
		return returnValue;
	}
};

struct BitArray_t261046764_StaticFields
{
public:
	// System.Int32[] ZXing.Common.BitArray::_lookup
	Int32U5BU5D_t385246372* ____lookup_2;

public:
	inline static int32_t get_offset_of__lookup_2() { return static_cast<int32_t>(offsetof(BitArray_t261046764_StaticFields, ____lookup_2)); }
	inline Int32U5BU5D_t385246372* get__lookup_2() const { return ____lookup_2; }
	inline Int32U5BU5D_t385246372** get_address_of__lookup_2() { return &____lookup_2; }
	inline void set__lookup_2(Int32U5BU5D_t385246372* value)
	{
		____lookup_2 = value;
		Il2CppCodeGenWriteBarrier((&____lookup_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITARRAY_T261046764_H
#ifndef BITSOURCE_T1277993489_H
#define BITSOURCE_T1277993489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.BitSource
struct  BitSource_t1277993489  : public Il2CppComObject
{
public:
	// System.Byte[] ZXing.Common.BitSource::bytes
	ByteU5BU5D_t4116647657* ___bytes_0;
	// System.Int32 ZXing.Common.BitSource::byteOffset
	int32_t ___byteOffset_1;
	// System.Int32 ZXing.Common.BitSource::bitOffset
	int32_t ___bitOffset_2;
	// Cached pointer to ZXing.Common.IBitSourceClass
	IBitSourceClass_t3410129292* ____ibitSourceClass_t3410129292;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(BitSource_t1277993489, ___bytes_0)); }
	inline ByteU5BU5D_t4116647657* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5D_t4116647657* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_0), value);
	}

	inline static int32_t get_offset_of_byteOffset_1() { return static_cast<int32_t>(offsetof(BitSource_t1277993489, ___byteOffset_1)); }
	inline int32_t get_byteOffset_1() const { return ___byteOffset_1; }
	inline int32_t* get_address_of_byteOffset_1() { return &___byteOffset_1; }
	inline void set_byteOffset_1(int32_t value)
	{
		___byteOffset_1 = value;
	}

	inline static int32_t get_offset_of_bitOffset_2() { return static_cast<int32_t>(offsetof(BitSource_t1277993489, ___bitOffset_2)); }
	inline int32_t get_bitOffset_2() const { return ___bitOffset_2; }
	inline int32_t* get_address_of_bitOffset_2() { return &___bitOffset_2; }
	inline void set_bitOffset_2(int32_t value)
	{
		___bitOffset_2 = value;
	}
	inline IBitSourceClass_t3410129292* get_____ibitSourceClass_t3410129292()
	{
		IBitSourceClass_t3410129292* returnValue = ____ibitSourceClass_t3410129292;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBitSourceClass_t3410129292::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBitSourceClass_t3410129292>((&____ibitSourceClass_t3410129292), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibitSourceClass_t3410129292;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITSOURCE_T1277993489_H
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
#ifndef DEFAULTPLACEMENT_T4127637614_H
#define DEFAULTPLACEMENT_T4127637614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Encoder.DefaultPlacement
struct  DefaultPlacement_t4127637614  : public Il2CppComObject
{
public:
	// System.String ZXing.Datamatrix.Encoder.DefaultPlacement::codewords
	String_t* ___codewords_0;
	// System.Int32 ZXing.Datamatrix.Encoder.DefaultPlacement::numrows
	int32_t ___numrows_1;
	// System.Int32 ZXing.Datamatrix.Encoder.DefaultPlacement::numcols
	int32_t ___numcols_2;
	// System.Byte[] ZXing.Datamatrix.Encoder.DefaultPlacement::bits
	ByteU5BU5D_t4116647657* ___bits_3;
	// Cached pointer to ZXing.Datamatrix.Encoder.IDefaultPlacementClass
	IDefaultPlacementClass_t1860642293* ____idefaultPlacementClass_t1860642293;

public:
	inline static int32_t get_offset_of_codewords_0() { return static_cast<int32_t>(offsetof(DefaultPlacement_t4127637614, ___codewords_0)); }
	inline String_t* get_codewords_0() const { return ___codewords_0; }
	inline String_t** get_address_of_codewords_0() { return &___codewords_0; }
	inline void set_codewords_0(String_t* value)
	{
		___codewords_0 = value;
		Il2CppCodeGenWriteBarrier((&___codewords_0), value);
	}

	inline static int32_t get_offset_of_numrows_1() { return static_cast<int32_t>(offsetof(DefaultPlacement_t4127637614, ___numrows_1)); }
	inline int32_t get_numrows_1() const { return ___numrows_1; }
	inline int32_t* get_address_of_numrows_1() { return &___numrows_1; }
	inline void set_numrows_1(int32_t value)
	{
		___numrows_1 = value;
	}

	inline static int32_t get_offset_of_numcols_2() { return static_cast<int32_t>(offsetof(DefaultPlacement_t4127637614, ___numcols_2)); }
	inline int32_t get_numcols_2() const { return ___numcols_2; }
	inline int32_t* get_address_of_numcols_2() { return &___numcols_2; }
	inline void set_numcols_2(int32_t value)
	{
		___numcols_2 = value;
	}

	inline static int32_t get_offset_of_bits_3() { return static_cast<int32_t>(offsetof(DefaultPlacement_t4127637614, ___bits_3)); }
	inline ByteU5BU5D_t4116647657* get_bits_3() const { return ___bits_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_bits_3() { return &___bits_3; }
	inline void set_bits_3(ByteU5BU5D_t4116647657* value)
	{
		___bits_3 = value;
		Il2CppCodeGenWriteBarrier((&___bits_3), value);
	}
	inline IDefaultPlacementClass_t1860642293* get_____idefaultPlacementClass_t1860642293()
	{
		IDefaultPlacementClass_t1860642293* returnValue = ____idefaultPlacementClass_t1860642293;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDefaultPlacementClass_t1860642293::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDefaultPlacementClass_t1860642293>((&____idefaultPlacementClass_t1860642293), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idefaultPlacementClass_t1860642293;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPLACEMENT_T4127637614_H
#ifndef VERSION_T3496629239_H
#define VERSION_T3496629239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.Internal.Version
struct  Version_t3496629239  : public Il2CppComObject
{
public:
	// System.Int32 ZXing.Datamatrix.Internal.Version::versionNumber
	int32_t ___versionNumber_1;
	// System.Int32 ZXing.Datamatrix.Internal.Version::symbolSizeRows
	int32_t ___symbolSizeRows_2;
	// System.Int32 ZXing.Datamatrix.Internal.Version::symbolSizeColumns
	int32_t ___symbolSizeColumns_3;
	// System.Int32 ZXing.Datamatrix.Internal.Version::dataRegionSizeRows
	int32_t ___dataRegionSizeRows_4;
	// System.Int32 ZXing.Datamatrix.Internal.Version::dataRegionSizeColumns
	int32_t ___dataRegionSizeColumns_5;
	// ZXing.Datamatrix.Internal.Version/ECBlocks ZXing.Datamatrix.Internal.Version::ecBlocks
	ECBlocks_t446047466 * ___ecBlocks_6;
	// System.Int32 ZXing.Datamatrix.Internal.Version::totalCodewords
	int32_t ___totalCodewords_7;
	// Cached pointer to ZXing.Datamatrix.Internal.IVersionClass
	IVersionClass_t830662294* ____iversionClass_t830662294;

public:
	inline static int32_t get_offset_of_versionNumber_1() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___versionNumber_1)); }
	inline int32_t get_versionNumber_1() const { return ___versionNumber_1; }
	inline int32_t* get_address_of_versionNumber_1() { return &___versionNumber_1; }
	inline void set_versionNumber_1(int32_t value)
	{
		___versionNumber_1 = value;
	}

	inline static int32_t get_offset_of_symbolSizeRows_2() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___symbolSizeRows_2)); }
	inline int32_t get_symbolSizeRows_2() const { return ___symbolSizeRows_2; }
	inline int32_t* get_address_of_symbolSizeRows_2() { return &___symbolSizeRows_2; }
	inline void set_symbolSizeRows_2(int32_t value)
	{
		___symbolSizeRows_2 = value;
	}

	inline static int32_t get_offset_of_symbolSizeColumns_3() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___symbolSizeColumns_3)); }
	inline int32_t get_symbolSizeColumns_3() const { return ___symbolSizeColumns_3; }
	inline int32_t* get_address_of_symbolSizeColumns_3() { return &___symbolSizeColumns_3; }
	inline void set_symbolSizeColumns_3(int32_t value)
	{
		___symbolSizeColumns_3 = value;
	}

	inline static int32_t get_offset_of_dataRegionSizeRows_4() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___dataRegionSizeRows_4)); }
	inline int32_t get_dataRegionSizeRows_4() const { return ___dataRegionSizeRows_4; }
	inline int32_t* get_address_of_dataRegionSizeRows_4() { return &___dataRegionSizeRows_4; }
	inline void set_dataRegionSizeRows_4(int32_t value)
	{
		___dataRegionSizeRows_4 = value;
	}

	inline static int32_t get_offset_of_dataRegionSizeColumns_5() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___dataRegionSizeColumns_5)); }
	inline int32_t get_dataRegionSizeColumns_5() const { return ___dataRegionSizeColumns_5; }
	inline int32_t* get_address_of_dataRegionSizeColumns_5() { return &___dataRegionSizeColumns_5; }
	inline void set_dataRegionSizeColumns_5(int32_t value)
	{
		___dataRegionSizeColumns_5 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_6() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___ecBlocks_6)); }
	inline ECBlocks_t446047466 * get_ecBlocks_6() const { return ___ecBlocks_6; }
	inline ECBlocks_t446047466 ** get_address_of_ecBlocks_6() { return &___ecBlocks_6; }
	inline void set_ecBlocks_6(ECBlocks_t446047466 * value)
	{
		___ecBlocks_6 = value;
		Il2CppCodeGenWriteBarrier((&___ecBlocks_6), value);
	}

	inline static int32_t get_offset_of_totalCodewords_7() { return static_cast<int32_t>(offsetof(Version_t3496629239, ___totalCodewords_7)); }
	inline int32_t get_totalCodewords_7() const { return ___totalCodewords_7; }
	inline int32_t* get_address_of_totalCodewords_7() { return &___totalCodewords_7; }
	inline void set_totalCodewords_7(int32_t value)
	{
		___totalCodewords_7 = value;
	}
	inline IVersionClass_t830662294* get_____iversionClass_t830662294()
	{
		IVersionClass_t830662294* returnValue = ____iversionClass_t830662294;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVersionClass_t830662294::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVersionClass_t830662294>((&____iversionClass_t830662294), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iversionClass_t830662294;
			}
		}
		return returnValue;
	}
};

struct Version_t3496629239_StaticFields
{
public:
	// ZXing.Datamatrix.Internal.Version[] ZXing.Datamatrix.Internal.Version::VERSIONS
	VersionU5BU5D_t2538480206* ___VERSIONS_0;

public:
	inline static int32_t get_offset_of_VERSIONS_0() { return static_cast<int32_t>(offsetof(Version_t3496629239_StaticFields, ___VERSIONS_0)); }
	inline VersionU5BU5D_t2538480206* get_VERSIONS_0() const { return ___VERSIONS_0; }
	inline VersionU5BU5D_t2538480206** get_address_of_VERSIONS_0() { return &___VERSIONS_0; }
	inline void set_VERSIONS_0(VersionU5BU5D_t2538480206* value)
	{
		___VERSIONS_0 = value;
		Il2CppCodeGenWriteBarrier((&___VERSIONS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3496629239_H
#ifndef DIMENSION_T1511315514_H
#define DIMENSION_T1511315514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Dimension
struct  Dimension_t1511315514  : public Il2CppComObject
{
public:
	// System.Int32 ZXing.Dimension::width
	int32_t ___width_0;
	// System.Int32 ZXing.Dimension::height
	int32_t ___height_1;
	// Cached pointer to ZXing.IDimensionClass
	IDimensionClass_t3381111183* ____idimensionClass_t3381111183;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(Dimension_t1511315514, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Dimension_t1511315514, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
	inline IDimensionClass_t3381111183* get_____idimensionClass_t3381111183()
	{
		IDimensionClass_t3381111183* returnValue = ____idimensionClass_t3381111183;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDimensionClass_t3381111183::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDimensionClass_t3381111183>((&____idimensionClass_t3381111183), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idimensionClass_t3381111183;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIMENSION_T1511315514_H
#ifndef DIMENSIONS_T27982592_H
#define DIMENSIONS_T27982592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.Dimensions
struct  Dimensions_t27982592  : public Il2CppComObject
{
public:
	// System.Int32 ZXing.PDF417.Internal.Dimensions::minCols
	int32_t ___minCols_0;
	// System.Int32 ZXing.PDF417.Internal.Dimensions::maxCols
	int32_t ___maxCols_1;
	// System.Int32 ZXing.PDF417.Internal.Dimensions::minRows
	int32_t ___minRows_2;
	// System.Int32 ZXing.PDF417.Internal.Dimensions::maxRows
	int32_t ___maxRows_3;
	// Cached pointer to ZXing.PDF417.Internal.IDimensionsClass
	IDimensionsClass_t3105469303* ____idimensionsClass_t3105469303;

public:
	inline static int32_t get_offset_of_minCols_0() { return static_cast<int32_t>(offsetof(Dimensions_t27982592, ___minCols_0)); }
	inline int32_t get_minCols_0() const { return ___minCols_0; }
	inline int32_t* get_address_of_minCols_0() { return &___minCols_0; }
	inline void set_minCols_0(int32_t value)
	{
		___minCols_0 = value;
	}

	inline static int32_t get_offset_of_maxCols_1() { return static_cast<int32_t>(offsetof(Dimensions_t27982592, ___maxCols_1)); }
	inline int32_t get_maxCols_1() const { return ___maxCols_1; }
	inline int32_t* get_address_of_maxCols_1() { return &___maxCols_1; }
	inline void set_maxCols_1(int32_t value)
	{
		___maxCols_1 = value;
	}

	inline static int32_t get_offset_of_minRows_2() { return static_cast<int32_t>(offsetof(Dimensions_t27982592, ___minRows_2)); }
	inline int32_t get_minRows_2() const { return ___minRows_2; }
	inline int32_t* get_address_of_minRows_2() { return &___minRows_2; }
	inline void set_minRows_2(int32_t value)
	{
		___minRows_2 = value;
	}

	inline static int32_t get_offset_of_maxRows_3() { return static_cast<int32_t>(offsetof(Dimensions_t27982592, ___maxRows_3)); }
	inline int32_t get_maxRows_3() const { return ___maxRows_3; }
	inline int32_t* get_address_of_maxRows_3() { return &___maxRows_3; }
	inline void set_maxRows_3(int32_t value)
	{
		___maxRows_3 = value;
	}
	inline IDimensionsClass_t3105469303* get_____idimensionsClass_t3105469303()
	{
		IDimensionsClass_t3105469303* returnValue = ____idimensionsClass_t3105469303;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDimensionsClass_t3105469303::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDimensionsClass_t3105469303>((&____idimensionsClass_t3105469303), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idimensionsClass_t3105469303;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIMENSIONS_T27982592_H
#ifndef PDF417RESULTMETADATA_T2522209036_H
#define PDF417RESULTMETADATA_T2522209036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.PDF417ResultMetadata
struct  PDF417ResultMetadata_t2522209036  : public Il2CppComObject
{
public:
	// System.Int32 ZXing.PDF417.PDF417ResultMetadata::<SegmentIndex>k__BackingField
	int32_t ___U3CSegmentIndexU3Ek__BackingField_0;
	// System.String ZXing.PDF417.PDF417ResultMetadata::<FileId>k__BackingField
	String_t* ___U3CFileIdU3Ek__BackingField_1;
	// System.Int32[] ZXing.PDF417.PDF417ResultMetadata::<OptionalData>k__BackingField
	Int32U5BU5D_t385246372* ___U3COptionalDataU3Ek__BackingField_2;
	// System.Boolean ZXing.PDF417.PDF417ResultMetadata::<IsLastSegment>k__BackingField
	bool ___U3CIsLastSegmentU3Ek__BackingField_3;
	// Cached pointer to ZXing.PDF417.IPDF417ResultMetadataClass
	IPDF417ResultMetadataClass_t1475396345* ____ipDF417ResultMetadataClass_t1475396345;

public:
	inline static int32_t get_offset_of_U3CSegmentIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t2522209036, ___U3CSegmentIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CSegmentIndexU3Ek__BackingField_0() const { return ___U3CSegmentIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CSegmentIndexU3Ek__BackingField_0() { return &___U3CSegmentIndexU3Ek__BackingField_0; }
	inline void set_U3CSegmentIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CSegmentIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFileIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t2522209036, ___U3CFileIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CFileIdU3Ek__BackingField_1() const { return ___U3CFileIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFileIdU3Ek__BackingField_1() { return &___U3CFileIdU3Ek__BackingField_1; }
	inline void set_U3CFileIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CFileIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFileIdU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3COptionalDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t2522209036, ___U3COptionalDataU3Ek__BackingField_2)); }
	inline Int32U5BU5D_t385246372* get_U3COptionalDataU3Ek__BackingField_2() const { return ___U3COptionalDataU3Ek__BackingField_2; }
	inline Int32U5BU5D_t385246372** get_address_of_U3COptionalDataU3Ek__BackingField_2() { return &___U3COptionalDataU3Ek__BackingField_2; }
	inline void set_U3COptionalDataU3Ek__BackingField_2(Int32U5BU5D_t385246372* value)
	{
		___U3COptionalDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3COptionalDataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CIsLastSegmentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PDF417ResultMetadata_t2522209036, ___U3CIsLastSegmentU3Ek__BackingField_3)); }
	inline bool get_U3CIsLastSegmentU3Ek__BackingField_3() const { return ___U3CIsLastSegmentU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsLastSegmentU3Ek__BackingField_3() { return &___U3CIsLastSegmentU3Ek__BackingField_3; }
	inline void set_U3CIsLastSegmentU3Ek__BackingField_3(bool value)
	{
		___U3CIsLastSegmentU3Ek__BackingField_3 = value;
	}
	inline IPDF417ResultMetadataClass_t1475396345* get_____ipDF417ResultMetadataClass_t1475396345()
	{
		IPDF417ResultMetadataClass_t1475396345* returnValue = ____ipDF417ResultMetadataClass_t1475396345;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPDF417ResultMetadataClass_t1475396345::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPDF417ResultMetadataClass_t1475396345>((&____ipDF417ResultMetadataClass_t1475396345), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipDF417ResultMetadataClass_t1475396345;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PDF417RESULTMETADATA_T2522209036_H
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
// ZXing.Common.IDecodingOptionsClass
struct NOVTABLE IDecodingOptionsClass_t1714060505 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_add_ValueChanged_m1453362154(IEventHandler_1_t1004265597_ComCallableWrapper* ___value0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_CharacterSet_m2613583294(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_Hints_m212097175(IMap_2_t3974017668** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_PossibleFormats_m3050689521(uint32_t* comReturnValueArraySize, int32_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_PureBarcode_m3565676386(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_ReturnCodabarStartEnd_m2344504546(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_TryHarder_m2659582988(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_UseCode39ExtendedMode_m3758543903(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_get_UseCode39RelaxedExtendedMode_m2245621205(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_CharacterSet_m68816112(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_PossibleFormats_m2863749213(uint32_t ___value0ArraySize, int32_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_PureBarcode_m1100699043(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_ReturnCodabarStartEnd_m3877497641(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_TryHarder_m4131955940(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_UseCode39ExtendedMode_m1963463739(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_put_UseCode39RelaxedExtendedMode_m117700350(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDecodingOptionsClass_remove_ValueChanged_m40550400(EventRegistrationToken_t318890788  ___value0) = 0;
};
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
#ifndef COMPACTION_T3269446742_H
#define COMPACTION_T3269446742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.Compaction
struct  Compaction_t3269446742 
{
public:
	// System.Int32 ZXing.PDF417.Internal.Compaction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Compaction_t3269446742, ___value___2)); }
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
#endif // COMPACTION_T3269446742_H
#ifndef PDF417ERRORCORRECTIONLEVEL_T1386329600_H
#define PDF417ERRORCORRECTIONLEVEL_T1386329600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.Internal.PDF417ErrorCorrectionLevel
struct  PDF417ErrorCorrectionLevel_t1386329600 
{
public:
	// System.Int32 ZXing.PDF417.Internal.PDF417ErrorCorrectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PDF417ErrorCorrectionLevel_t1386329600, ___value___2)); }
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
#endif // PDF417ERRORCORRECTIONLEVEL_T1386329600_H
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
#ifndef DECODINGOPTIONS_T1209718858_H
#define DECODINGOPTIONS_T1209718858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DecodingOptions
struct  DecodingOptions_t1209718858  : public Il2CppComObject
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1<System.EventHandler`1<System.Object>> ZXing.Common.DecodingOptions::ValueChanged
	EventRegistrationTokenTable_1_t1476126395 * ___ValueChanged_0;
	// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object> ZXing.Common.DecodingOptions::<Hints>k__BackingField
	RuntimeObject* ___U3CHintsU3Ek__BackingField_1;
	// Cached pointer to ZXing.Common.IDecodingOptionsClass
	IDecodingOptionsClass_t1714060505* ____idecodingOptionsClass_t1714060505;

public:
	inline static int32_t get_offset_of_ValueChanged_0() { return static_cast<int32_t>(offsetof(DecodingOptions_t1209718858, ___ValueChanged_0)); }
	inline EventRegistrationTokenTable_1_t1476126395 * get_ValueChanged_0() const { return ___ValueChanged_0; }
	inline EventRegistrationTokenTable_1_t1476126395 ** get_address_of_ValueChanged_0() { return &___ValueChanged_0; }
	inline void set_ValueChanged_0(EventRegistrationTokenTable_1_t1476126395 * value)
	{
		___ValueChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___ValueChanged_0), value);
	}

	inline static int32_t get_offset_of_U3CHintsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DecodingOptions_t1209718858, ___U3CHintsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CHintsU3Ek__BackingField_1() const { return ___U3CHintsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CHintsU3Ek__BackingField_1() { return &___U3CHintsU3Ek__BackingField_1; }
	inline void set_U3CHintsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CHintsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHintsU3Ek__BackingField_1), value);
	}
	inline IDecodingOptionsClass_t1714060505* get_____idecodingOptionsClass_t1714060505()
	{
		IDecodingOptionsClass_t1714060505* returnValue = ____idecodingOptionsClass_t1714060505;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDecodingOptionsClass_t1714060505::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDecodingOptionsClass_t1714060505>((&____idecodingOptionsClass_t1714060505), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idecodingOptionsClass_t1714060505;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODINGOPTIONS_T1209718858_H
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
// ZXing.IBarcodeReaderClass
struct NOVTABLE IBarcodeReaderClass_t4033089066 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_add_ResultFound_m3784351705(IEventHandler_1_t3159777539_ComCallableWrapper* ___value0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_add_ResultPointFound_m649277307(IEventHandler_1_t3692632065_ComCallableWrapper* ___value0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_DecodeMultiple_m1377513046(uint32_t ___rawRGB0ArraySize, uint8_t* ___rawRGB0, int32_t ___width1, int32_t ___height2, int32_t ___format3, uint32_t* comReturnValueArraySize, Result_t940650810 *** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_DecodeMultiple_m4033367390(IWriteableBitmap_t3747397532* ___barcodeBitmap0, uint32_t* comReturnValueArraySize, Result_t940650810 *** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_get_AutoRotate_m1909461205(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_get_TryInverted_m4156461621(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_put_AutoRotate_m1536602689(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_put_TryInverted_m2291786832(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_remove_ResultFound_m4121859758(EventRegistrationToken_t318890788  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBarcodeReaderClass_remove_ResultPointFound_m2160482332(EventRegistrationToken_t318890788  ___value0) = 0;
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
// ZXing.Writer
struct NOVTABLE Writer_t1994170402 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Writer_encode_m678751478(Il2CppHString ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, BitMatrix_t2873240750 ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL Writer_encode_m1637322283(Il2CppHString ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, IMap_2_t1620352935* ___hints4, BitMatrix_t2873240750 ** comReturnValue) = 0;
};
#ifndef AZTECWRITER_T3742714802_H
#define AZTECWRITER_T3742714802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Aztec.AztecWriter
struct  AztecWriter_t3742714802  : public Il2CppComObject
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

struct AztecWriter_t3742714802_StaticFields
{
public:
	// System.Text.Encoding ZXing.Aztec.AztecWriter::DEFAULT_CHARSET
	Encoding_t1523322056 * ___DEFAULT_CHARSET_0;

public:
	inline static int32_t get_offset_of_DEFAULT_CHARSET_0() { return static_cast<int32_t>(offsetof(AztecWriter_t3742714802_StaticFields, ___DEFAULT_CHARSET_0)); }
	inline Encoding_t1523322056 * get_DEFAULT_CHARSET_0() const { return ___DEFAULT_CHARSET_0; }
	inline Encoding_t1523322056 ** get_address_of_DEFAULT_CHARSET_0() { return &___DEFAULT_CHARSET_0; }
	inline void set_DEFAULT_CHARSET_0(Encoding_t1523322056 * value)
	{
		___DEFAULT_CHARSET_0 = value;
		Il2CppCodeGenWriteBarrier((&___DEFAULT_CHARSET_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AZTECWRITER_T3742714802_H
#ifndef BARCODEREADER_T816849416_H
#define BARCODEREADER_T816849416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeReader
struct  BarcodeReader_t816849416  : public Il2CppComObject
{
public:
	// ZXing.Reader ZXing.BarcodeReader::reader
	RuntimeObject* ___reader_3;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReader::createRGBLuminanceSource
	Func_5_t373162523 * ___createRGBLuminanceSource_4;
	// System.Func`2<Windows.UI.Xaml.Media.Imaging.WriteableBitmap,ZXing.LuminanceSource> ZXing.BarcodeReader::createLuminanceSource
	Func_2_t4141306170 * ___createLuminanceSource_5;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReader::createBinarizer
	Func_2_t3965955927 * ___createBinarizer_6;
	// System.Boolean ZXing.BarcodeReader::usePreviousState
	bool ___usePreviousState_7;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReader::options
	DecodingOptions_t1209718858 * ___options_8;
	// System.Collections.Generic.IDictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<ZXing.ResultPoint>> ZXing.BarcodeReader::registeredResultPointHandlers
	RuntimeObject* ___registeredResultPointHandlers_9;
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1<System.EventHandler`1<ZXing.ResultPoint>> ZXing.BarcodeReader::explicitResultPointFound
	EventRegistrationTokenTable_1_t4164492863 * ___explicitResultPointFound_10;
	// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationTokenTable`1<System.EventHandler`1<ZXing.Result>> ZXing.BarcodeReader::ResultFound
	EventRegistrationTokenTable_1_t3631638337 * ___ResultFound_11;
	// System.Boolean ZXing.BarcodeReader::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_12;
	// System.Boolean ZXing.BarcodeReader::<TryInverted>k__BackingField
	bool ___U3CTryInvertedU3Ek__BackingField_13;
	// Cached pointer to ZXing.IBarcodeReader
	IBarcodeReader_t693641064* ____ibarcodeReader_t693641064;
	// Cached pointer to ZXing.IBarcodeReaderClass
	IBarcodeReaderClass_t4033089066* ____ibarcodeReaderClass_t4033089066;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___reader_3)); }
	inline RuntimeObject* get_reader_3() const { return ___reader_3; }
	inline RuntimeObject** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(RuntimeObject* value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_createRGBLuminanceSource_4() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___createRGBLuminanceSource_4)); }
	inline Func_5_t373162523 * get_createRGBLuminanceSource_4() const { return ___createRGBLuminanceSource_4; }
	inline Func_5_t373162523 ** get_address_of_createRGBLuminanceSource_4() { return &___createRGBLuminanceSource_4; }
	inline void set_createRGBLuminanceSource_4(Func_5_t373162523 * value)
	{
		___createRGBLuminanceSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___createRGBLuminanceSource_4), value);
	}

	inline static int32_t get_offset_of_createLuminanceSource_5() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___createLuminanceSource_5)); }
	inline Func_2_t4141306170 * get_createLuminanceSource_5() const { return ___createLuminanceSource_5; }
	inline Func_2_t4141306170 ** get_address_of_createLuminanceSource_5() { return &___createLuminanceSource_5; }
	inline void set_createLuminanceSource_5(Func_2_t4141306170 * value)
	{
		___createLuminanceSource_5 = value;
		Il2CppCodeGenWriteBarrier((&___createLuminanceSource_5), value);
	}

	inline static int32_t get_offset_of_createBinarizer_6() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___createBinarizer_6)); }
	inline Func_2_t3965955927 * get_createBinarizer_6() const { return ___createBinarizer_6; }
	inline Func_2_t3965955927 ** get_address_of_createBinarizer_6() { return &___createBinarizer_6; }
	inline void set_createBinarizer_6(Func_2_t3965955927 * value)
	{
		___createBinarizer_6 = value;
		Il2CppCodeGenWriteBarrier((&___createBinarizer_6), value);
	}

	inline static int32_t get_offset_of_usePreviousState_7() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___usePreviousState_7)); }
	inline bool get_usePreviousState_7() const { return ___usePreviousState_7; }
	inline bool* get_address_of_usePreviousState_7() { return &___usePreviousState_7; }
	inline void set_usePreviousState_7(bool value)
	{
		___usePreviousState_7 = value;
	}

	inline static int32_t get_offset_of_options_8() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___options_8)); }
	inline DecodingOptions_t1209718858 * get_options_8() const { return ___options_8; }
	inline DecodingOptions_t1209718858 ** get_address_of_options_8() { return &___options_8; }
	inline void set_options_8(DecodingOptions_t1209718858 * value)
	{
		___options_8 = value;
		Il2CppCodeGenWriteBarrier((&___options_8), value);
	}

	inline static int32_t get_offset_of_registeredResultPointHandlers_9() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___registeredResultPointHandlers_9)); }
	inline RuntimeObject* get_registeredResultPointHandlers_9() const { return ___registeredResultPointHandlers_9; }
	inline RuntimeObject** get_address_of_registeredResultPointHandlers_9() { return &___registeredResultPointHandlers_9; }
	inline void set_registeredResultPointHandlers_9(RuntimeObject* value)
	{
		___registeredResultPointHandlers_9 = value;
		Il2CppCodeGenWriteBarrier((&___registeredResultPointHandlers_9), value);
	}

	inline static int32_t get_offset_of_explicitResultPointFound_10() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___explicitResultPointFound_10)); }
	inline EventRegistrationTokenTable_1_t4164492863 * get_explicitResultPointFound_10() const { return ___explicitResultPointFound_10; }
	inline EventRegistrationTokenTable_1_t4164492863 ** get_address_of_explicitResultPointFound_10() { return &___explicitResultPointFound_10; }
	inline void set_explicitResultPointFound_10(EventRegistrationTokenTable_1_t4164492863 * value)
	{
		___explicitResultPointFound_10 = value;
		Il2CppCodeGenWriteBarrier((&___explicitResultPointFound_10), value);
	}

	inline static int32_t get_offset_of_ResultFound_11() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___ResultFound_11)); }
	inline EventRegistrationTokenTable_1_t3631638337 * get_ResultFound_11() const { return ___ResultFound_11; }
	inline EventRegistrationTokenTable_1_t3631638337 ** get_address_of_ResultFound_11() { return &___ResultFound_11; }
	inline void set_ResultFound_11(EventRegistrationTokenTable_1_t3631638337 * value)
	{
		___ResultFound_11 = value;
		Il2CppCodeGenWriteBarrier((&___ResultFound_11), value);
	}

	inline static int32_t get_offset_of_U3CAutoRotateU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___U3CAutoRotateU3Ek__BackingField_12)); }
	inline bool get_U3CAutoRotateU3Ek__BackingField_12() const { return ___U3CAutoRotateU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CAutoRotateU3Ek__BackingField_12() { return &___U3CAutoRotateU3Ek__BackingField_12; }
	inline void set_U3CAutoRotateU3Ek__BackingField_12(bool value)
	{
		___U3CAutoRotateU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CTryInvertedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416, ___U3CTryInvertedU3Ek__BackingField_13)); }
	inline bool get_U3CTryInvertedU3Ek__BackingField_13() const { return ___U3CTryInvertedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CTryInvertedU3Ek__BackingField_13() { return &___U3CTryInvertedU3Ek__BackingField_13; }
	inline void set_U3CTryInvertedU3Ek__BackingField_13(bool value)
	{
		___U3CTryInvertedU3Ek__BackingField_13 = value;
	}
	inline IBarcodeReader_t693641064* get_____ibarcodeReader_t693641064()
	{
		IBarcodeReader_t693641064* returnValue = ____ibarcodeReader_t693641064;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBarcodeReader_t693641064::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBarcodeReader_t693641064>((&____ibarcodeReader_t693641064), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibarcodeReader_t693641064;
			}
		}
		return returnValue;
	}

	inline IBarcodeReaderClass_t4033089066* get_____ibarcodeReaderClass_t4033089066()
	{
		IBarcodeReaderClass_t4033089066* returnValue = ____ibarcodeReaderClass_t4033089066;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IBarcodeReaderClass_t4033089066::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IBarcodeReaderClass_t4033089066>((&____ibarcodeReaderClass_t4033089066), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ibarcodeReaderClass_t4033089066;
			}
		}
		return returnValue;
	}
};

struct BarcodeReader_t816849416_StaticFields
{
public:
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReader::defaultCreateBinarizer
	Func_2_t3965955927 * ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateRGBLuminanceSource
	Func_5_t373162523 * ___defaultCreateRGBLuminanceSource_1;
	// System.Func`2<Windows.UI.Xaml.Media.Imaging.WriteableBitmap,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_2_t4141306170 * ___defaultCreateLuminanceSource_2;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReader::CS$<>9__CachedAnonymousMethodDelegate5
	Func_2_t3965955927 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReader::CS$<>9__CachedAnonymousMethodDelegate6
	Func_5_t373162523 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15;
	// System.Func`2<Windows.UI.Xaml.Media.Imaging.WriteableBitmap,ZXing.LuminanceSource> ZXing.BarcodeReader::CS$<>9__CachedAnonymousMethodDelegate7
	Func_2_t4141306170 * ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16;

public:
	inline static int32_t get_offset_of_defaultCreateBinarizer_0() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416_StaticFields, ___defaultCreateBinarizer_0)); }
	inline Func_2_t3965955927 * get_defaultCreateBinarizer_0() const { return ___defaultCreateBinarizer_0; }
	inline Func_2_t3965955927 ** get_address_of_defaultCreateBinarizer_0() { return &___defaultCreateBinarizer_0; }
	inline void set_defaultCreateBinarizer_0(Func_2_t3965955927 * value)
	{
		___defaultCreateBinarizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateBinarizer_0), value);
	}

	inline static int32_t get_offset_of_defaultCreateRGBLuminanceSource_1() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416_StaticFields, ___defaultCreateRGBLuminanceSource_1)); }
	inline Func_5_t373162523 * get_defaultCreateRGBLuminanceSource_1() const { return ___defaultCreateRGBLuminanceSource_1; }
	inline Func_5_t373162523 ** get_address_of_defaultCreateRGBLuminanceSource_1() { return &___defaultCreateRGBLuminanceSource_1; }
	inline void set_defaultCreateRGBLuminanceSource_1(Func_5_t373162523 * value)
	{
		___defaultCreateRGBLuminanceSource_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateRGBLuminanceSource_1), value);
	}

	inline static int32_t get_offset_of_defaultCreateLuminanceSource_2() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416_StaticFields, ___defaultCreateLuminanceSource_2)); }
	inline Func_2_t4141306170 * get_defaultCreateLuminanceSource_2() const { return ___defaultCreateLuminanceSource_2; }
	inline Func_2_t4141306170 ** get_address_of_defaultCreateLuminanceSource_2() { return &___defaultCreateLuminanceSource_2; }
	inline void set_defaultCreateLuminanceSource_2(Func_2_t4141306170 * value)
	{
		___defaultCreateLuminanceSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateLuminanceSource_2), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14)); }
	inline Func_2_t3965955927 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14; }
	inline Func_2_t3965955927 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14(Func_2_t3965955927 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15)); }
	inline Func_5_t373162523 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15; }
	inline Func_5_t373162523 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15(Func_5_t373162523 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16() { return static_cast<int32_t>(offsetof(BarcodeReader_t816849416_StaticFields, ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16)); }
	inline Func_2_t4141306170 * get_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16() const { return ___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16; }
	inline Func_2_t4141306170 ** get_address_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16() { return &___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16; }
	inline void set_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16(Func_2_t4141306170 * value)
	{
		___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEREADER_T816849416_H
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
#ifndef DATAMATRIXWRITER_T3555826273_H
#define DATAMATRIXWRITER_T3555826273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Datamatrix.DataMatrixWriter
struct  DataMatrixWriter_t3555826273  : public Il2CppComObject
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
#endif // DATAMATRIXWRITER_T3555826273_H
#ifndef UPCAWRITER_T3022467001_H
#define UPCAWRITER_T3022467001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.OneD.UPCAWriter
struct  UPCAWriter_t3022467001  : public Il2CppComObject
{
public:
	// ZXing.OneD.EAN13Writer ZXing.OneD.UPCAWriter::subWriter
	EAN13Writer_t847282855 * ___subWriter_0;
	// Cached pointer to ZXing.Writer
	Writer_t1994170402* ____writer_t1994170402;

public:
	inline static int32_t get_offset_of_subWriter_0() { return static_cast<int32_t>(offsetof(UPCAWriter_t3022467001, ___subWriter_0)); }
	inline EAN13Writer_t847282855 * get_subWriter_0() const { return ___subWriter_0; }
	inline EAN13Writer_t847282855 ** get_address_of_subWriter_0() { return &___subWriter_0; }
	inline void set_subWriter_0(EAN13Writer_t847282855 * value)
	{
		___subWriter_0 = value;
		Il2CppCodeGenWriteBarrier((&___subWriter_0), value);
	}
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
#endif // UPCAWRITER_T3022467001_H
#ifndef PDF417WRITER_T1645087885_H
#define PDF417WRITER_T1645087885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.PDF417.PDF417Writer
struct  PDF417Writer_t1645087885  : public Il2CppComObject
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
#endif // PDF417WRITER_T1645087885_H
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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5800 = { sizeof (__StaticArrayInitTypeSizeU3D124_t1704991021)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D124_t1704991021 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5801 = { sizeof (__StaticArrayInitTypeSizeU3D40_t2895845679)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D40_t2895845679 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5802 = { sizeof (__StaticArrayInitTypeSizeU3D148_t1705777451)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D148_t1705777451 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5803 = { sizeof (__StaticArrayInitTypeSizeU3D80_t894900527)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D80_t894900527 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5804 = { sizeof (__StaticArrayInitTypeSizeU3D54_t939530539)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D54_t939530539 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5805 = { sizeof (__StaticArrayInitTypeSizeU3D64_t3278182699)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D64_t3278182699 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5806 = { sizeof (__StaticArrayInitTypeSizeU3D28_t4042856759)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D28_t4042856759 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5807 = { sizeof (__StaticArrayInitTypeSizeU3D44_t2895845675)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t2895845675 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5808 = { sizeof (__StaticArrayInitTypeSizeU3D48_t2895845687)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t2895845687 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5809 = { sizeof (__StaticArrayInitTypeSizeU3D56_t939530537)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D56_t939530537 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5810 = { sizeof (__StaticArrayInitTypeSizeU3D72_t1321867565)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D72_t1321867565 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5811 = { sizeof (__StaticArrayInitTypeSizeU3D96_t3233552681)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D96_t3233552681 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5812 = { sizeof (__StaticArrayInitTypeSizeU3D144_t1704991019)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D144_t1704991019 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5813 = { sizeof (__StaticArrayInitTypeSizeU3D168_t1705777449)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D168_t1705777449 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5814 = { sizeof (__StaticArrayInitTypeSizeU3D192_t1705122104)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D192_t1705122104 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5815 = { sizeof (__StaticArrayInitTypeSizeU3D224_t4043643181)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D224_t4043643181 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5816 = { sizeof (__StaticArrayInitTypeSizeU3D248_t4044429611)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D248_t4044429611 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5817 = { sizeof (__StaticArrayInitTypeSizeU3D272_t4043774250)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D272_t4043774250 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5818 = { sizeof (__StaticArrayInitTypeSizeU3D24_t4042856747)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D24_t4042856747 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5819 = { sizeof (__StaticArrayInitTypeSizeU3D120_t1705253165)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D120_t1705253165 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5820 = { sizeof (__StaticArrayInitTypeSizeU3D10_t1704204591)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D10_t1704204591 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5821 = { sizeof (__StaticArrayInitTypeSizeU3D6_t75868736)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t75868736 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5822 = { sizeof (__StaticArrayInitTypeSizeU3D30_t2086541615)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D30_t2086541615 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5823 = { sizeof (__StaticArrayInitTypeSizeU3D176_t1704859946)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D176_t1704859946 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5824 = { sizeof (__StaticArrayInitTypeSizeU3D12_t1704204589)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t1704204589 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5825 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2086541613)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2086541613 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5826 = { sizeof (__StaticArrayInitTypeSizeU3D9_t31238720)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t31238720 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5827 = { sizeof (__StaticArrayInitTypeSizeU3D36_t2086541609)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D36_t2086541609 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5828 = { sizeof (__StaticArrayInitTypeSizeU3D58_t939530551)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D58_t939530551 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5829 = { sizeof (__StaticArrayInitTypeSizeU3D50_t939530543)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D50_t939530543 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5830 = { sizeof (__StaticArrayInitTypeSizeU3D3716_t1170644074)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3716_t1170644074 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5831 = { sizeof (__StaticArrayInitTypeSizeU3D128_t1705777453)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t1705777453 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5832 = { sizeof (__StaticArrayInitTypeSizeU3D256_t4043512108)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t4043512108 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5833 = { sizeof (__StaticArrayInitTypeSizeU3D512_t940448048)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t940448048 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5834 = { sizeof (__StaticArrayInitTypeSizeU3D1024_t2601026981)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1024_t2601026981 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5835 = { sizeof (__StaticArrayInitTypeSizeU3D2048_t4080143969)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2048_t4080143969 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5836 = { sizeof (__StaticArrayInitTypeSizeU3D11148_t4130571686)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D11148_t4130571686 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5837 = { sizeof (__StaticArrayInitTypeSizeU3D90_t3233552687)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D90_t3233552687 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5838 = { sizeof (__StaticArrayInitTypeSizeU3D136_t1704859950)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D136_t1704859950 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5839 = { sizeof (__StaticArrayInitTypeSizeU3D384_t2087328055)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D384_t2087328055 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5840 = { sizeof (AztecWriter_t3742714802), -1, sizeof(AztecWriter_t3742714802_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5840[1] = 
{
	AztecWriter_t3742714802_StaticFields::get_offset_of_DEFAULT_CHARSET_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5841 = { sizeof (SymbolShapeHint_t2441334323)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5841[4] = 
{
	SymbolShapeHint_t2441334323::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5842 = { 0, sizeof(IVersionClass_t830662294*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5843 = { sizeof (DefaultPlacement_t4127637614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5843[4] = 
{
	DefaultPlacement_t4127637614::get_offset_of_codewords_0(),
	DefaultPlacement_t4127637614::get_offset_of_numrows_1(),
	DefaultPlacement_t4127637614::get_offset_of_numcols_2(),
	DefaultPlacement_t4127637614::get_offset_of_bits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5844 = { sizeof (Version_t3496629239), -1, sizeof(Version_t3496629239_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5844[8] = 
{
	Version_t3496629239_StaticFields::get_offset_of_VERSIONS_0(),
	Version_t3496629239::get_offset_of_versionNumber_1(),
	Version_t3496629239::get_offset_of_symbolSizeRows_2(),
	Version_t3496629239::get_offset_of_symbolSizeColumns_3(),
	Version_t3496629239::get_offset_of_dataRegionSizeRows_4(),
	Version_t3496629239::get_offset_of_dataRegionSizeColumns_5(),
	Version_t3496629239::get_offset_of_ecBlocks_6(),
	Version_t3496629239::get_offset_of_totalCodewords_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5845 = { sizeof (ECBlocks_t446047466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5845[2] = 
{
	ECBlocks_t446047466::get_offset_of_ecCodewords_0(),
	ECBlocks_t446047466::get_offset_of__ecBlocksValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5846 = { sizeof (ECB_t1992231197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5846[2] = 
{
	ECB_t1992231197::get_offset_of_count_0(),
	ECB_t1992231197::get_offset_of_dataCodewords_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5847 = { 0, sizeof(IDefaultPlacementFactory_t1666364664*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5848 = { 0, sizeof(IDefaultPlacementClass_t1860642293*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5849 = { 0, sizeof(IVersionStatic_t1522428984*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5850 = { 0, sizeof(IAztecResultMetadataClass_t495712877*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5851 = { sizeof (AztecResultMetadata_t4210155528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5851[3] = 
{
	AztecResultMetadata_t4210155528::get_offset_of_U3CCompactU3Ek__BackingField_0(),
	AztecResultMetadata_t4210155528::get_offset_of_U3CDatablocksU3Ek__BackingField_1(),
	AztecResultMetadata_t4210155528::get_offset_of_U3CLayersU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5852 = { 0, sizeof(IAztecResultMetadataFactory_t952238970*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5853 = { sizeof (DataMatrixWriter_t3555826273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5854 = { sizeof (EncodeHintType_t1815309725)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5854[17] = 
{
	EncodeHintType_t1815309725::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5855 = { 0, sizeof(IBarcodeReaderClass_t4033089066*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5856 = { sizeof (BarcodeReader_t816849416), -1, sizeof(BarcodeReader_t816849416_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5856[17] = 
{
	BarcodeReader_t816849416_StaticFields::get_offset_of_defaultCreateBinarizer_0(),
	BarcodeReader_t816849416_StaticFields::get_offset_of_defaultCreateRGBLuminanceSource_1(),
	BarcodeReader_t816849416_StaticFields::get_offset_of_defaultCreateLuminanceSource_2(),
	BarcodeReader_t816849416::get_offset_of_reader_3(),
	BarcodeReader_t816849416::get_offset_of_createRGBLuminanceSource_4(),
	BarcodeReader_t816849416::get_offset_of_createLuminanceSource_5(),
	BarcodeReader_t816849416::get_offset_of_createBinarizer_6(),
	BarcodeReader_t816849416::get_offset_of_usePreviousState_7(),
	BarcodeReader_t816849416::get_offset_of_options_8(),
	BarcodeReader_t816849416::get_offset_of_registeredResultPointHandlers_9(),
	BarcodeReader_t816849416::get_offset_of_explicitResultPointFound_10(),
	BarcodeReader_t816849416::get_offset_of_ResultFound_11(),
	BarcodeReader_t816849416::get_offset_of_U3CAutoRotateU3Ek__BackingField_12(),
	BarcodeReader_t816849416::get_offset_of_U3CTryInvertedU3Ek__BackingField_13(),
	BarcodeReader_t816849416_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate5_14(),
	BarcodeReader_t816849416_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate6_15(),
	BarcodeReader_t816849416_StaticFields::get_offset_of_CSU24U3CU3E9__CachedAnonymousMethodDelegate7_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5857 = { sizeof (EncodingOptions_t288987117), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5857[1] = 
{
	EncodingOptions_t288987117::get_offset_of_U3CHintsU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5858 = { 0, sizeof(IEncodingOptionsClass_t2681192122*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5859 = { sizeof (BitMatrix_t2873240750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5859[4] = 
{
	BitMatrix_t2873240750::get_offset_of_width_0(),
	BitMatrix_t2873240750::get_offset_of_height_1(),
	BitMatrix_t2873240750::get_offset_of_rowSize_2(),
	BitMatrix_t2873240750::get_offset_of_bits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5860 = { 0, sizeof(IBitArrayFactory_t1314474630*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5861 = { sizeof (ResultMetadataType_t220883355)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5861[13] = 
{
	ResultMetadataType_t220883355::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5862 = { sizeof (BitArray_t261046764), -1, sizeof(BitArray_t261046764_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5862[3] = 
{
	BitArray_t261046764::get_offset_of_bits_0(),
	BitArray_t261046764::get_offset_of_size_1(),
	BitArray_t261046764_StaticFields::get_offset_of__lookup_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5863 = { 0, sizeof(IBitArrayClass_t2689015707*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5864 = { 0, sizeof(IBitMatrixClass_t3868409507*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5865 = { sizeof (BitSource_t1277993489), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5865[3] = 
{
	BitSource_t1277993489::get_offset_of_bytes_0(),
	BitSource_t1277993489::get_offset_of_byteOffset_1(),
	BitSource_t1277993489::get_offset_of_bitOffset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5866 = { 0, sizeof(IBitSourceClass_t3410129292*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5867 = { 0, sizeof(IBitSourceFactory_t3270869838*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5868 = { 0, sizeof(IDecodingOptionsClass_t1714060505*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5869 = { 0, sizeof(IBitMatrixFactory_t523045875*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5870 = { sizeof (DecodingOptions_t1209718858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5870[2] = 
{
	DecodingOptions_t1209718858::get_offset_of_ValueChanged_0(),
	DecodingOptions_t1209718858::get_offset_of_U3CHintsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5871 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable5871[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5872 = { 0, sizeof(IDimensionClass_t3381111183*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5873 = { sizeof (Dimension_t1511315514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5873[2] = 
{
	Dimension_t1511315514::get_offset_of_width_0(),
	Dimension_t1511315514::get_offset_of_height_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5874 = { sizeof (BitmapFormat_t1949044204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5874[11] = 
{
	BitmapFormat_t1949044204::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5875 = { 0, sizeof(IDimensionFactory_t607066857*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5876 = { sizeof (QRCodeWriter_t1467281458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5877 = { sizeof (BarcodeFormat_t1017833927)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5877[21] = 
{
	BarcodeFormat_t1017833927::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5878 = { sizeof (ErrorCorrectionLevel_t2910789944), -1, sizeof(ErrorCorrectionLevel_t2910789944_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5878[8] = 
{
	ErrorCorrectionLevel_t2910789944_StaticFields::get_offset_of_l_0(),
	ErrorCorrectionLevel_t2910789944_StaticFields::get_offset_of_m_1(),
	ErrorCorrectionLevel_t2910789944_StaticFields::get_offset_of_q_2(),
	ErrorCorrectionLevel_t2910789944_StaticFields::get_offset_of_h_3(),
	ErrorCorrectionLevel_t2910789944_StaticFields::get_offset_of_FOR_BITS_4(),
	ErrorCorrectionLevel_t2910789944::get_offset_of_bits_5(),
	ErrorCorrectionLevel_t2910789944::get_offset_of_ordinal_Renamed_Field_6(),
	ErrorCorrectionLevel_t2910789944::get_offset_of_name_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5879 = { sizeof (QRCodeDecoderMetaData_t3242363773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5879[1] = 
{
	QRCodeDecoderMetaData_t3242363773::get_offset_of_mirrored_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5880 = { 0, sizeof(IQRCodeDecoderMetaDataClass_t867614159*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5881 = { 0, sizeof(IQRCodeDecoderMetaDataFactory_t1898222457*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5882 = { 0, sizeof(IErrorCorrectionLevelStatic_t2658181634*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5883 = { 0, sizeof(IErrorCorrectionLevelClass_t2406692834*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5884 = { sizeof (PDF417Writer_t1645087885), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5885 = { sizeof (PDF417ResultMetadata_t2522209036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5885[4] = 
{
	PDF417ResultMetadata_t2522209036::get_offset_of_U3CSegmentIndexU3Ek__BackingField_0(),
	PDF417ResultMetadata_t2522209036::get_offset_of_U3CFileIdU3Ek__BackingField_1(),
	PDF417ResultMetadata_t2522209036::get_offset_of_U3COptionalDataU3Ek__BackingField_2(),
	PDF417ResultMetadata_t2522209036::get_offset_of_U3CIsLastSegmentU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5886 = { 0, sizeof(IPDF417ResultMetadataClass_t1475396345*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5887 = { 0, sizeof(IDimensionsFactory_t1306082151*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5888 = { sizeof (PDF417ErrorCorrectionLevel_t1386329600)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5888[10] = 
{
	PDF417ErrorCorrectionLevel_t1386329600::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5889 = { sizeof (Dimensions_t27982592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5889[4] = 
{
	Dimensions_t27982592::get_offset_of_minCols_0(),
	Dimensions_t27982592::get_offset_of_maxCols_1(),
	Dimensions_t27982592::get_offset_of_minRows_2(),
	Dimensions_t27982592::get_offset_of_maxRows_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5890 = { 0, sizeof(IDimensionsClass_t3105469303*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5891 = { sizeof (UPCAWriter_t3022467001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5891[1] = 
{
	UPCAWriter_t3022467001::get_offset_of_subWriter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5892 = { 0, sizeof(IResultPointClass_t1633747827*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5893 = { 0, sizeof(IResultPointStatic_t3181330277*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5894 = { 0, sizeof(IResultPointFactory_t182320767*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5895 = { sizeof (ResultPoint_t1473505336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5895[5] = 
{
	ResultPoint_t1473505336::get_offset_of_x_0(),
	ResultPoint_t1473505336::get_offset_of_y_1(),
	ResultPoint_t1473505336::get_offset_of_bytesX_2(),
	ResultPoint_t1473505336::get_offset_of_bytesY_3(),
	ResultPoint_t1473505336::get_offset_of_toString_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5896 = { sizeof (Result_t940650810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5896[6] = 
{
	Result_t940650810::get_offset_of_U3CTextU3Ek__BackingField_0(),
	Result_t940650810::get_offset_of_U3CRawBytesU3Ek__BackingField_1(),
	Result_t940650810::get_offset_of_U3CResultPointsU3Ek__BackingField_2(),
	Result_t940650810::get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3(),
	Result_t940650810::get_offset_of_U3CResultMetadataU3Ek__BackingField_4(),
	Result_t940650810::get_offset_of_U3CTimestampU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5897 = { 0, sizeof(IResultClass_t445684574*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5898 = { 0, sizeof(IResultFactory_t32653550*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5899 = { sizeof (Compaction_t3269446742)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5899[5] = 
{
	Compaction_t3269446742::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
