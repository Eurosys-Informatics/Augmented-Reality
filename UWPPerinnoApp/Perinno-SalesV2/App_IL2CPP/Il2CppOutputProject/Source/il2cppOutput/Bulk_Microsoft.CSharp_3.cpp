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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.CSharp.RuntimeBinder.Errors.ErrorHandling
struct ErrorHandling_t3402928913;
// Microsoft.CSharp.RuntimeBinder.ResetBindException
struct ResetBindException_t1303326642;
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateDeclaration
struct AggregateDeclaration_t251946005;
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol
struct AggregateSymbol_t3146081271;
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType
struct AggregateType_t567267003;
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType[]
struct AggregateTypeU5BU5D_t3291885562;
// Microsoft.CSharp.RuntimeBinder.Semantics.ArgumentListType
struct ArgumentListType_t3380992639;
// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType
struct ArrayType_t406051177;
// Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR
struct BSYMMGR_t2938027401;
// Microsoft.CSharp.RuntimeBinder.Semantics.CMemberLookupResults
struct CMemberLookupResults_t1179468233;
// Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker
struct CSemanticChecker_t1535940568;
// Microsoft.CSharp.RuntimeBinder.Semantics.CType
struct CType_t1813387470;
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[]
struct CTypeU5BU5D_t868586555;
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal[]
struct ConstValU5BU5D_t1870338349;
// Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType
struct ErrorType_t685300011;
// Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol
struct EventSymbol_t2632276330;
// Microsoft.CSharp.RuntimeBinder.Semantics.Expr
struct Expr_t1372271848;
// Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol
struct FieldSymbol_t2811293341;
// Microsoft.CSharp.RuntimeBinder.Semantics.GlobalSymbolContext
struct GlobalSymbolContext_t1430323192;
// Microsoft.CSharp.RuntimeBinder.Semantics.IndexerSymbol
struct IndexerSymbol_t2017513160;
// Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup
struct MemberLookup_t2241756900;
// Microsoft.CSharp.RuntimeBinder.Semantics.MethWithType
struct MethWithType_t1508195034;
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodGroupType
struct MethodGroupType_t2756130430;
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol
struct MethodOrPropertySymbol_t2915275678;
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol
struct MethodSymbol_t394006151;
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol
struct NamespaceOrAggregateSymbol_t2365823281;
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol
struct NamespaceSymbol_t4294485991;
// Microsoft.CSharp.RuntimeBinder.Semantics.NullType
struct NullType_t161614275;
// Microsoft.CSharp.RuntimeBinder.Semantics.NullableType
struct NullableType_t2956603701;
// Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType
struct ParameterModifierType_t867882597;
// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol
struct ParentSymbol_t84807579;
// Microsoft.CSharp.RuntimeBinder.Semantics.PointerType
struct PointerType_t3368101717;
// Microsoft.CSharp.RuntimeBinder.Semantics.PredefinedMembers
struct PredefinedMembers_t1696054763;
// Microsoft.CSharp.RuntimeBinder.Semantics.PredefinedTypes
struct PredefinedTypes_t1653833157;
// Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol
struct PropertySymbol_t1241991770;
// Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL
struct SYMTBL_t752690877;
// Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory
struct SymFactory_t300688847;
// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType
struct SymWithType_t1275985997;
// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol
struct Symbol_t3348236047;
// Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader
struct SymbolLoader_t2983914338;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray
struct TypeArray_t2467755373;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeFactory
struct TypeFactory_t821598298;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager
struct TypeManager_t4140799422;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager/StdTypeVarColl
struct StdTypeVarColl_t3726765420;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol
struct TypeParameterSymbol_t755586405;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType
struct TypeParameterType_t171561091;
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable
struct TypeTable_t2388713815;
// Microsoft.CSharp.RuntimeBinder.Semantics.UdConvInfo
struct UdConvInfo_t2042074985;
// Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1
struct U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835;
// Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0
struct U3CTypeAndBaseClassesU3Ed__0_t996690076;
// Microsoft.CSharp.RuntimeBinder.Semantics.VariableSymbol
struct VariableSymbol_t2682349060;
// Microsoft.CSharp.RuntimeBinder.Semantics.VoidType
struct VoidType_t3686515033;
// Microsoft.CSharp.RuntimeBinder.SymbolTable
struct SymbolTable_t2007508464;
// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t2873125857;
// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1
struct U3CU3Ec__DisplayClass15_1_t916810721;
// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t2872929247;
// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t2872929245;
// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t2872798173;
// Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey
struct NameHashKey_t2012175420;
// Microsoft.CSharp.RuntimeBinder.Syntax.Name
struct Name_t658191338;
// Microsoft.CSharp.RuntimeBinder.Syntax.NameManager
struct NameManager_t1767112997;
// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable
struct NameTable_t1897568201;
// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry
struct Entry_t2595452246;
// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry[]
struct EntryU5BU5D_t3854683283;
// Microsoft.CSharp.RuntimeBinder.Syntax.Name[]
struct NameU5BU5D_t1359183151;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>[]
struct EntryU5BU5D_t1120455646;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>[]
struct EntryU5BU5D_t2168297790;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>[]
struct EntryU5BU5D_t1158281620;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>[]
struct EntryU5BU5D_t1206812371;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>[]
struct EntryU5BU5D_t3734528615;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>[]
struct EntryU5BU5D_t818987287;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>[]
struct EntryU5BU5D_t649123852;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>
struct KeyCollection_t2518332686;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>
struct KeyCollection_t2929830702;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct KeyCollection_t4125027600;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>
struct KeyCollection_t304273277;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>
struct KeyCollection_t766104697;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>
struct KeyCollection_t2617030537;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>
struct KeyCollection_t737625592;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>
struct ValueCollection_t4044701533;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>
struct ValueCollection_t161232253;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct ValueCollection_t1356429151;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>
struct ValueCollection_t1830642124;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>
struct ValueCollection_t2292473544;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>
struct ValueCollection_t4143399384;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>
struct ValueCollection_t2263994439;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR/TypeArrayKey,Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray>
struct Dictionary_2_t890484495;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>
struct Dictionary_2_t2328657215;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>
struct Dictionary_2_t2740155231;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct Dictionary_2_t3935352129;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>
struct Dictionary_2_t114597806;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>
struct Dictionary_2_t576429226;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<System.Object,System.Object>,System.Object>
struct Dictionary_2_t2832884925;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL/Key,Microsoft.CSharp.RuntimeBinder.Semantics.Symbol>
struct Dictionary_2_t4106854722;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>
struct Dictionary_2_t2427355066;
// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>
struct Dictionary_2_t547950121;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Reflection.Assembly,System.Reflection.Assembly>,System.Boolean>
struct Dictionary_2_t3136955594;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>[]
struct SlotU5BU5D_t1306029680;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t2214829572;
// System.Collections.Generic.HashSet`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>
struct HashSet_1_t577124894;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t1048894234;
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct IEnumerable_1_t3842087188;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t2359854630;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_t857479137;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t3962162136;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1463797649;
// System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct IEnumerator_1_t999837471;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>
struct IEqualityComparer_1_t3920719488;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>>
struct IEqualityComparer_1_t2448548020;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>>
struct IEqualityComparer_1_t1310892705;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol>
struct IEqualityComparer_1_t2862918423;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>
struct IEqualityComparer_1_t4119507438;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.CSharp.RuntimeBinder.Syntax.Name>
struct IEqualityComparer_1_t2765523356;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t296309482;
// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct List_1_t2039341745;
// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>
struct List_1_t3285462212;
// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.MethPropWithType>
struct List_1_t132217487;
// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Syntax.Name>
struct List_1_t2130266080;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Reflection.EventInfo>
struct List_1_t819628108;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t3956019502;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3759279471;
// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t2217434578;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t3487522507;
// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_t2377163032;
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
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896;
// System.Reflection.DefaultMemberAttribute
struct DefaultMemberAttribute_t3275092422;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t3237081491;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct DateTimeConstantAttribute_t375130962;
// System.Runtime.CompilerServices.DecimalConstantAttribute
struct DecimalConstantAttribute_t1976047975;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t3522571978;
// System.Runtime.InteropServices.UnmanagedType[]
struct UnmanagedTypeU5BU5D_t512685007;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* AggregateSymbol_t3146081271_il2cpp_TypeInfo_var;
extern RuntimeClass* AggregateType_t567267003_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayType_t406051177_il2cpp_TypeInfo_var;
extern RuntimeClass* BSYMMGR_t2938027401_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* CTypeU5BU5D_t868586555_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstVal_t1597617476_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorInfo_t5769829_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t114597806_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2328657215_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2427355066_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2740155231_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3935352129_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t547950121_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t576429226_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* EntryU5BU5D_t3854683283_il2cpp_TypeInfo_var;
extern RuntimeClass* Entry_t2595452246_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSymbol_t2632276330_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldSymbol_t2811293341_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2217434578_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2377163032_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t3487522507_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t1048894234_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t577124894_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t1463797649_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t2359854630_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3842087188_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3962162136_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t857479137_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1119912419_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2310196716_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2916515228_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3812572209_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t999837471_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3285462212_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3956019502_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t819628108_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodSymbol_t394006151_il2cpp_TypeInfo_var;
extern RuntimeClass* NameHashKey_t2012175420_il2cpp_TypeInfo_var;
extern RuntimeClass* NameManager_t1767112997_il2cpp_TypeInfo_var;
extern RuntimeClass* NameTable_t1897568201_il2cpp_TypeInfo_var;
extern RuntimeClass* NameU5BU5D_t1359183151_il2cpp_TypeInfo_var;
extern RuntimeClass* Name_t658191338_il2cpp_TypeInfo_var;
extern RuntimeClass* NamespaceSymbol_t4294485991_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* NullableType_t2956603701_il2cpp_TypeInfo_var;
extern RuntimeClass* ParamArrayAttribute_t3664765590_il2cpp_TypeInfo_var;
extern RuntimeClass* ParameterModifierType_t867882597_il2cpp_TypeInfo_var;
extern RuntimeClass* PredefinedTypeFacts_t718682611_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertySymbol_t1241991770_il2cpp_TypeInfo_var;
extern RuntimeClass* ResetBindException_t1303326642_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t1669577662_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SymWithType_t1275985997_il2cpp_TypeInfo_var;
extern RuntimeClass* SymbolTable_t2007508464_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeParameterSymbol_t755586405_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeParameterType_t171561091_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CTypeAndBaseClassesU3Ed__0_t996690076_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass15_0_t2873125857_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass15_1_t916810721_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass30_0_t2872929247_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass50_0_t2872929245_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass52_0_t2872798173_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1065866263;
extern String_t* _stringLiteral1150379851;
extern String_t* _stringLiteral1159972017;
extern String_t* _stringLiteral1178749465;
extern String_t* _stringLiteral1201842171;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral1212501634;
extern String_t* _stringLiteral1221375020;
extern String_t* _stringLiteral1279271071;
extern String_t* _stringLiteral1357986273;
extern String_t* _stringLiteral13687727;
extern String_t* _stringLiteral1428058533;
extern String_t* _stringLiteral152203953;
extern String_t* _stringLiteral1534802076;
extern String_t* _stringLiteral1561152289;
extern String_t* _stringLiteral1596053975;
extern String_t* _stringLiteral1600105539;
extern String_t* _stringLiteral1608512694;
extern String_t* _stringLiteral1624027964;
extern String_t* _stringLiteral1669731555;
extern String_t* _stringLiteral167031539;
extern String_t* _stringLiteral1706683095;
extern String_t* _stringLiteral1706695038;
extern String_t* _stringLiteral1818253423;
extern String_t* _stringLiteral1905736822;
extern String_t* _stringLiteral1911909880;
extern String_t* _stringLiteral1922147846;
extern String_t* _stringLiteral1943245113;
extern String_t* _stringLiteral1949155704;
extern String_t* _stringLiteral1958770049;
extern String_t* _stringLiteral1980976520;
extern String_t* _stringLiteral2022012807;
extern String_t* _stringLiteral2038133541;
extern String_t* _stringLiteral2040559864;
extern String_t* _stringLiteral2097807219;
extern String_t* _stringLiteral2101930777;
extern String_t* _stringLiteral2102554591;
extern String_t* _stringLiteral2118277584;
extern String_t* _stringLiteral2141025683;
extern String_t* _stringLiteral2149933305;
extern String_t* _stringLiteral2234161082;
extern String_t* _stringLiteral2260015710;
extern String_t* _stringLiteral226364123;
extern String_t* _stringLiteral2289034063;
extern String_t* _stringLiteral2302702733;
extern String_t* _stringLiteral2401610308;
extern String_t* _stringLiteral240249401;
extern String_t* _stringLiteral2449292300;
extern String_t* _stringLiteral2463878435;
extern String_t* _stringLiteral2463878436;
extern String_t* _stringLiteral2463878438;
extern String_t* _stringLiteral2513493387;
extern String_t* _stringLiteral2530921763;
extern String_t* _stringLiteral2530921764;
extern String_t* _stringLiteral2530921766;
extern String_t* _stringLiteral2553611048;
extern String_t* _stringLiteral2655463595;
extern String_t* _stringLiteral2683055194;
extern String_t* _stringLiteral2724702165;
extern String_t* _stringLiteral2834630198;
extern String_t* _stringLiteral2834715456;
extern String_t* _stringLiteral2838662761;
extern String_t* _stringLiteral2937509622;
extern String_t* _stringLiteral2993467114;
extern String_t* _stringLiteral3110370589;
extern String_t* _stringLiteral3113391153;
extern String_t* _stringLiteral3119448475;
extern String_t* _stringLiteral3129076673;
extern String_t* _stringLiteral3133858467;
extern String_t* _stringLiteral3208316269;
extern String_t* _stringLiteral3259370764;
extern String_t* _stringLiteral3265744085;
extern String_t* _stringLiteral3266137301;
extern String_t* _stringLiteral3306367446;
extern String_t* _stringLiteral335526127;
extern String_t* _stringLiteral3365149210;
extern String_t* _stringLiteral3395178267;
extern String_t* _stringLiteral3450124154;
extern String_t* _stringLiteral3450713987;
extern String_t* _stringLiteral3450845061;
extern String_t* _stringLiteral3450869561;
extern String_t* _stringLiteral3450910609;
extern String_t* _stringLiteral3451631505;
extern String_t* _stringLiteral3451697042;
extern String_t* _stringLiteral3451762554;
extern String_t* _stringLiteral3451762555;
extern String_t* _stringLiteral3451762559;
extern String_t* _stringLiteral3451762561;
extern String_t* _stringLiteral3451762563;
extern String_t* _stringLiteral3451762565;
extern String_t* _stringLiteral3451762566;
extern String_t* _stringLiteral3451762578;
extern String_t* _stringLiteral3451762579;
extern String_t* _stringLiteral3451762580;
extern String_t* _stringLiteral3451762644;
extern String_t* _stringLiteral3451762674;
extern String_t* _stringLiteral3451828116;
extern String_t* _stringLiteral3451959190;
extern String_t* _stringLiteral3452012868;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral3452614525;
extern String_t* _stringLiteral3452614527;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614533;
extern String_t* _stringLiteral3452614534;
extern String_t* _stringLiteral3452614545;
extern String_t* _stringLiteral3452614546;
extern String_t* _stringLiteral3452614547;
extern String_t* _stringLiteral3452614548;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614610;
extern String_t* _stringLiteral3452614612;
extern String_t* _stringLiteral3452614642;
extern String_t* _stringLiteral3455563711;
extern String_t* _stringLiteral3455563719;
extern String_t* _stringLiteral3455629281;
extern String_t* _stringLiteral3456022484;
extern String_t* _stringLiteral3478059355;
extern String_t* _stringLiteral3478190429;
extern String_t* _stringLiteral3482834024;
extern String_t* _stringLiteral3493619321;
extern String_t* _stringLiteral3554584786;
extern String_t* _stringLiteral3591958911;
extern String_t* _stringLiteral3596048705;
extern String_t* _stringLiteral359718035;
extern String_t* _stringLiteral3606852686;
extern String_t* _stringLiteral362524596;
extern String_t* _stringLiteral3637139173;
extern String_t* _stringLiteral3647647696;
extern String_t* _stringLiteral3657586736;
extern String_t* _stringLiteral370620675;
extern String_t* _stringLiteral3716885418;
extern String_t* _stringLiteral3744565719;
extern String_t* _stringLiteral3751140108;
extern String_t* _stringLiteral3817161931;
extern String_t* _stringLiteral3845928853;
extern String_t* _stringLiteral3851094587;
extern String_t* _stringLiteral3875954633;
extern String_t* _stringLiteral3897952179;
extern String_t* _stringLiteral3962391455;
extern String_t* _stringLiteral397788344;
extern String_t* _stringLiteral4002445229;
extern String_t* _stringLiteral4079233801;
extern String_t* _stringLiteral4106723201;
extern String_t* _stringLiteral4158218461;
extern String_t* _stringLiteral4193572954;
extern String_t* _stringLiteral4198891390;
extern String_t* _stringLiteral543608943;
extern String_t* _stringLiteral662109;
extern String_t* _stringLiteral702478112;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral75909655;
extern String_t* _stringLiteral76350221;
extern String_t* _stringLiteral831415459;
extern String_t* _stringLiteral842632268;
extern String_t* _stringLiteral946927187;
extern String_t* _stringLiteral964622056;
extern String_t* _stringLiteral967860007;
extern const RuntimeMethod* Array_Empty_TisAggregateType_t567267003_m1378685715_RuntimeMethod_var;
extern const RuntimeMethod* Array_Empty_TisCType_t1813387470_m3542555726_RuntimeMethod_var;
extern const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisDateTimeConstantAttribute_t375130962_m1416647332_RuntimeMethod_var;
extern const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisDecimalConstantAttribute_t1976047975_m3679650293_RuntimeMethod_var;
extern const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisDefaultMemberAttribute_t3275092422_m3748746748_RuntimeMethod_var;
extern const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisMarshalAsAttribute_t3522571978_m2166632158_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2500642537_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2873453433_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3075073731_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3125345227_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3367739367_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3573383026_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m546338113_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1777129988_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2292784380_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2480496911_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3629326551_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3631865121_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3809907647_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m4175426288_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2120213177_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2120827764_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2364710614_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3291451977_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3448659714_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3655024239_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4245641307_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisMemberInfo_t_m3084826832_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisMethodInfo_t_m1737046122_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisPropertyInfo_t_m3804523869_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3472778301_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1672893779_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3666420137_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1610613808_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2384193652_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3813751571_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m4258915900_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m917316575_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Contains_m3356321002_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m2199668542_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m379792657_RuntimeMethod_var;
extern const RuntimeMethod* KeyPair_2__ctor_m1514348969_RuntimeMethod_var;
extern const RuntimeMethod* KeyPair_2__ctor_m3073921541_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2350095192_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3042044450_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3669611020_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4155803952_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2709014514_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Insert_m3705215113_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Reverse_m3108420294_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2498037548_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1419539908_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m259484671_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4285917392_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m555233112_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2934127733_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3795182392_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4094549910_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1328026504_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m787150517_RuntimeMethod_var;
extern const RuntimeMethod* NameManager_Add_m3684855591_RuntimeMethod_var;
extern const RuntimeMethod* NameManager_Lookup_m2555217768_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m463439517_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m2962682148_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3898097692_RuntimeMethod_var;
extern const RuntimeMethod* SymbolTable_GetSlotForOverride_m1988677043_RuntimeMethod_var;
extern const RuntimeMethod* SymbolTable_LoadSymbolsFromType_m2262646512_RuntimeMethod_var;
extern const RuntimeMethod* TokenFacts_GetText_m4064052485_RuntimeMethod_var;
extern const RuntimeMethod* U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerator_Reset_m2472016766_RuntimeMethod_var;
extern const RuntimeMethod* U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerator_Reset_m2538462950_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass15_1_U3CAddNamesInInheritanceHierarchyU3Eb__0_m1699310696_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass30_0_U3CBuildDeclarationChainU3Eb__0_m360352475_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass50_0_U3CAddPredefinedPropertyToSymbolTableU3Eb__0_m3552718169_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass52_0_U3CAddPredefinedMethodToSymbolTableU3Eb__0_m364477531_RuntimeMethod_var;
extern const RuntimeType* Missing_t508514592_0_0_0_var;
extern const RuntimeType* ParamArrayAttribute_t3664765590_0_0_0_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* SymbolTable_t2007508464_0_0_0_var;
extern const uint32_t NameHashKey_Equals_m1729024198_MetadataUsageId;
extern const uint32_t NameManager_Add_m2932834222_MetadataUsageId;
extern const uint32_t NameManager_Add_m3684855591_MetadataUsageId;
extern const uint32_t NameManager_GetKnownNames_m3242543041_MetadataUsageId;
extern const uint32_t NameManager_GetPredefinedName_m2121682198_MetadataUsageId;
extern const uint32_t NameManager_Lookup_m2555217768_MetadataUsageId;
extern const uint32_t NameManager__cctor_m3652871016_MetadataUsageId;
extern const uint32_t NameManager__ctor_m3561128949_MetadataUsageId;
extern const uint32_t NameTable_AddEntry_m881532682_MetadataUsageId;
extern const uint32_t NameTable_Add_m2509265472_MetadataUsageId;
extern const uint32_t NameTable_Add_m25256284_MetadataUsageId;
extern const uint32_t NameTable_Grow_m1567448162_MetadataUsageId;
extern const uint32_t NameTable__ctor_m1499832512_MetadataUsageId;
extern const uint32_t SR_Format_m4261011655_MetadataUsageId;
extern const uint32_t SymbolTable_AddAggregateToSymbolTable_m2773205952_MetadataUsageId;
extern const uint32_t SymbolTable_AddConversionsForOneType_m2033170488_MetadataUsageId;
extern const uint32_t SymbolTable_AddConversionsForType_m2635794899_MetadataUsageId;
extern const uint32_t SymbolTable_AddEventToSymbolTable_m1786974805_MetadataUsageId;
extern const uint32_t SymbolTable_AddFieldToSymbolTable_m2953080925_MetadataUsageId;
extern const uint32_t SymbolTable_AddMethodToSymbolTable_m1421278763_MetadataUsageId;
extern const uint32_t SymbolTable_AddNamesInInheritanceHierarchy_m2733379745_MetadataUsageId;
extern const uint32_t SymbolTable_AddNamespaceToSymbolTable_m876063316_MetadataUsageId;
extern const uint32_t SymbolTable_AddPredefinedMethodToSymbolTable_m767599493_MetadataUsageId;
extern const uint32_t SymbolTable_AddPredefinedPropertyToSymbolTable_m1653277243_MetadataUsageId;
extern const uint32_t SymbolTable_AddPropertyToSymbolTable_m2793273731_MetadataUsageId;
extern const uint32_t SymbolTable_AreTypeParametersEquivalent_m972801204_MetadataUsageId;
extern const uint32_t SymbolTable_BuildDeclarationChain_m718011609_MetadataUsageId;
extern const uint32_t SymbolTable_CreateInheritanceHierarchyList_m2459147864_MetadataUsageId;
extern const uint32_t SymbolTable_CreateParameterArray_m634093492_MetadataUsageId;
extern const uint32_t SymbolTable_DoesMethodHaveParameterArray_m3086024223_MetadataUsageId;
extern const uint32_t SymbolTable_FindMatchingMethod_m1410031394_MetadataUsageId;
extern const uint32_t SymbolTable_FindMethodFromMemberInfo_m2223710338_MetadataUsageId;
extern const uint32_t SymbolTable_FindSymWithMatchingArity_m1958855211_MetadataUsageId;
extern const uint32_t SymbolTable_GetAggregateTypeParameters_m2250120112_MetadataUsageId;
extern const uint32_t SymbolTable_GetCTypeArrayFromTypes_m4106394335_MetadataUsageId;
extern const uint32_t SymbolTable_GetConstructedType_m3153641545_MetadataUsageId;
extern const uint32_t SymbolTable_GetMethodTypeParameters_m798564244_MetadataUsageId;
extern const uint32_t SymbolTable_GetName_m1066594422_MetadataUsageId;
extern const uint32_t SymbolTable_GetOriginalTypeParameterType_m3831275873_MetadataUsageId;
extern const uint32_t SymbolTable_GetSlotForOverride_m1988677043_MetadataUsageId;
extern const uint32_t SymbolTable_GetTypeByName_m1759078710_MetadataUsageId;
extern const uint32_t SymbolTable_GetTypeOfParameter_m2694454471_MetadataUsageId;
extern const uint32_t SymbolTable_IsOperator_m3403205358_MetadataUsageId;
extern const uint32_t SymbolTable_LoadClassTypeParameter_m1292531502_MetadataUsageId;
extern const uint32_t SymbolTable_LoadMethodTypeParameter_m3062046655_MetadataUsageId;
extern const uint32_t SymbolTable_LoadSymbolsFromType_m2262646512_MetadataUsageId;
extern const uint32_t SymbolTable_LookupMember_m3844349791_MetadataUsageId;
extern const uint32_t SymbolTable_PopulateSymbolTableWithName_m2474176076_MetadataUsageId;
extern const uint32_t SymbolTable_ProcessSpecialTypeInChain_m2251391497_MetadataUsageId;
extern const uint32_t SymbolTable_SetParameterAttributes_m3726288706_MetadataUsageId;
extern const uint32_t SymbolTable_SetParameterDataForMethProp_m2192450889_MetadataUsageId;
extern const uint32_t SymbolTable__cctor_m1653900139_MetadataUsageId;
extern const uint32_t SymbolTable__ctor_m209891920_MetadataUsageId;
extern const uint32_t SymbolTable_get_EventRegistrationTokenTableType_m97072725_MetadataUsageId;
extern const uint32_t SymbolTable_get_EventRegistrationTokenType_m1303499912_MetadataUsageId;
extern const uint32_t SymbolTable_get_WindowsRuntimeMarshalType_m1959189592_MetadataUsageId;
extern const uint32_t TokenFacts_GetText_m4064052485_MetadataUsageId;
extern const uint32_t TypeTable_InsertAggregate_m1166588616_MetadataUsageId;
extern const uint32_t TypeTable_InsertArray_m1277670687_MetadataUsageId;
extern const uint32_t TypeTable_InsertError_m1163229745_MetadataUsageId;
extern const uint32_t TypeTable_InsertNullable_m1904444865_MetadataUsageId;
extern const uint32_t TypeTable_InsertParameterModifier_m3448137605_MetadataUsageId;
extern const uint32_t TypeTable_InsertPointer_m2432804579_MetadataUsageId;
extern const uint32_t TypeTable_InsertTypeParameter_m812041020_MetadataUsageId;
extern const uint32_t TypeTable_LookupAggregate_m2675057522_MetadataUsageId;
extern const uint32_t TypeTable_LookupArray_m3678107377_MetadataUsageId;
extern const uint32_t TypeTable_LookupError_m1465588241_MetadataUsageId;
extern const uint32_t TypeTable_LookupNullable_m2322885888_MetadataUsageId;
extern const uint32_t TypeTable_LookupParameterModifier_m240128633_MetadataUsageId;
extern const uint32_t TypeTable_LookupPointer_m1685330680_MetadataUsageId;
extern const uint32_t TypeTable_LookupTypeParameter_m1864502406_MetadataUsageId;
extern const uint32_t TypeTable__ctor_m3178933407_MetadataUsageId;
extern const uint32_t U3CTypeAndBaseClassInterfacesU3Ed__1_MoveNext_m822745273_MetadataUsageId;
extern const uint32_t U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m625853650_MetadataUsageId;
extern const uint32_t U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerator_Reset_m2472016766_MetadataUsageId;
extern const uint32_t U3CTypeAndBaseClassInterfacesU3Ed__1_U3CU3Em__Finally1_m3844411874_MetadataUsageId;
extern const uint32_t U3CTypeAndBaseClassesU3Ed__0_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m598945477_MetadataUsageId;
extern const uint32_t U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerator_Reset_m2538462950_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass15_1_U3CAddNamesInInheritanceHierarchyU3Eb__0_m1699310696_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass30_0_U3CBuildDeclarationChainU3Eb__0_m360352475_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass52_0_U3CAddPredefinedMethodToSymbolTableU3Eb__0_m364477531_MetadataUsageId;
extern const uint32_t UtilityTypeExtensions_AllPossibleInterfaces_m2993268347_MetadataUsageId;
extern const uint32_t UtilityTypeExtensions_TypeAndBaseClassInterfaces_m3294773857_MetadataUsageId;
extern const uint32_t UtilityTypeExtensions_TypeAndBaseClasses_m3640929811_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AggregateTypeU5BU5D_t3291885562;
struct CTypeU5BU5D_t868586555;
struct EntryU5BU5D_t3854683283;
struct NameU5BU5D_t1359183151;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct ConstructorInfoU5BU5D_t881249896;
struct MemberInfoU5BU5D_t1302094432;
struct ParameterInfoU5BU5D_t390618515;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


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
#ifndef BSYMMGR_T2938027401_H
#define BSYMMGR_T2938027401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR
struct  BSYMMGR_t2938027401  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::propNubValue
	PropertySymbol_t1241991770 * ___propNubValue_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::methNubCtor
	MethodSymbol_t394006151 * ___methNubCtor_1;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::_symFactory
	SymFactory_t300688847 * ____symFactory_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::_rootNS
	NamespaceSymbol_t4294485991 * ____rootNS_3;
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameManager Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::m_nameTable
	NameManager_t1767112997 * ___m_nameTable_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::tableGlobal
	SYMTBL_t752690877 * ___tableGlobal_5;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR/TypeArrayKey,Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray> Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::tableTypeArrays
	Dictionary_2_t890484495 * ___tableTypeArrays_6;

public:
	inline static int32_t get_offset_of_propNubValue_0() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ___propNubValue_0)); }
	inline PropertySymbol_t1241991770 * get_propNubValue_0() const { return ___propNubValue_0; }
	inline PropertySymbol_t1241991770 ** get_address_of_propNubValue_0() { return &___propNubValue_0; }
	inline void set_propNubValue_0(PropertySymbol_t1241991770 * value)
	{
		___propNubValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___propNubValue_0), value);
	}

	inline static int32_t get_offset_of_methNubCtor_1() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ___methNubCtor_1)); }
	inline MethodSymbol_t394006151 * get_methNubCtor_1() const { return ___methNubCtor_1; }
	inline MethodSymbol_t394006151 ** get_address_of_methNubCtor_1() { return &___methNubCtor_1; }
	inline void set_methNubCtor_1(MethodSymbol_t394006151 * value)
	{
		___methNubCtor_1 = value;
		Il2CppCodeGenWriteBarrier((&___methNubCtor_1), value);
	}

	inline static int32_t get_offset_of__symFactory_2() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ____symFactory_2)); }
	inline SymFactory_t300688847 * get__symFactory_2() const { return ____symFactory_2; }
	inline SymFactory_t300688847 ** get_address_of__symFactory_2() { return &____symFactory_2; }
	inline void set__symFactory_2(SymFactory_t300688847 * value)
	{
		____symFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&____symFactory_2), value);
	}

	inline static int32_t get_offset_of__rootNS_3() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ____rootNS_3)); }
	inline NamespaceSymbol_t4294485991 * get__rootNS_3() const { return ____rootNS_3; }
	inline NamespaceSymbol_t4294485991 ** get_address_of__rootNS_3() { return &____rootNS_3; }
	inline void set__rootNS_3(NamespaceSymbol_t4294485991 * value)
	{
		____rootNS_3 = value;
		Il2CppCodeGenWriteBarrier((&____rootNS_3), value);
	}

	inline static int32_t get_offset_of_m_nameTable_4() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ___m_nameTable_4)); }
	inline NameManager_t1767112997 * get_m_nameTable_4() const { return ___m_nameTable_4; }
	inline NameManager_t1767112997 ** get_address_of_m_nameTable_4() { return &___m_nameTable_4; }
	inline void set_m_nameTable_4(NameManager_t1767112997 * value)
	{
		___m_nameTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameTable_4), value);
	}

	inline static int32_t get_offset_of_tableGlobal_5() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ___tableGlobal_5)); }
	inline SYMTBL_t752690877 * get_tableGlobal_5() const { return ___tableGlobal_5; }
	inline SYMTBL_t752690877 ** get_address_of_tableGlobal_5() { return &___tableGlobal_5; }
	inline void set_tableGlobal_5(SYMTBL_t752690877 * value)
	{
		___tableGlobal_5 = value;
		Il2CppCodeGenWriteBarrier((&___tableGlobal_5), value);
	}

	inline static int32_t get_offset_of_tableTypeArrays_6() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401, ___tableTypeArrays_6)); }
	inline Dictionary_2_t890484495 * get_tableTypeArrays_6() const { return ___tableTypeArrays_6; }
	inline Dictionary_2_t890484495 ** get_address_of_tableTypeArrays_6() { return &___tableTypeArrays_6; }
	inline void set_tableTypeArrays_6(Dictionary_2_t890484495 * value)
	{
		___tableTypeArrays_6 = value;
		Il2CppCodeGenWriteBarrier((&___tableTypeArrays_6), value);
	}
};

struct BSYMMGR_t2938027401_StaticFields
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::s_taEmpty
	TypeArray_t2467755373 * ___s_taEmpty_7;

public:
	inline static int32_t get_offset_of_s_taEmpty_7() { return static_cast<int32_t>(offsetof(BSYMMGR_t2938027401_StaticFields, ___s_taEmpty_7)); }
	inline TypeArray_t2467755373 * get_s_taEmpty_7() const { return ___s_taEmpty_7; }
	inline TypeArray_t2467755373 ** get_address_of_s_taEmpty_7() { return &___s_taEmpty_7; }
	inline void set_s_taEmpty_7(TypeArray_t2467755373 * value)
	{
		___s_taEmpty_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_taEmpty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BSYMMGR_T2938027401_H
#ifndef CSEMANTICCHECKER_T1535940568_H
#define CSEMANTICCHECKER_T1535940568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker
struct  CSemanticChecker_t1535940568  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker::<SymbolLoader>k__BackingField
	SymbolLoader_t2983914338 * ___U3CSymbolLoaderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSymbolLoaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CSemanticChecker_t1535940568, ___U3CSymbolLoaderU3Ek__BackingField_0)); }
	inline SymbolLoader_t2983914338 * get_U3CSymbolLoaderU3Ek__BackingField_0() const { return ___U3CSymbolLoaderU3Ek__BackingField_0; }
	inline SymbolLoader_t2983914338 ** get_address_of_U3CSymbolLoaderU3Ek__BackingField_0() { return &___U3CSymbolLoaderU3Ek__BackingField_0; }
	inline void set_U3CSymbolLoaderU3Ek__BackingField_0(SymbolLoader_t2983914338 * value)
	{
		___U3CSymbolLoaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSymbolLoaderU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSEMANTICCHECKER_T1535940568_H
#ifndef SYMTBL_T752690877_H
#define SYMTBL_T752690877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL
struct  SYMTBL_t752690877  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL/Key,Microsoft.CSharp.RuntimeBinder.Semantics.Symbol> Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL::_dictionary
	Dictionary_2_t4106854722 * ____dictionary_0;

public:
	inline static int32_t get_offset_of__dictionary_0() { return static_cast<int32_t>(offsetof(SYMTBL_t752690877, ____dictionary_0)); }
	inline Dictionary_2_t4106854722 * get__dictionary_0() const { return ____dictionary_0; }
	inline Dictionary_2_t4106854722 ** get_address_of__dictionary_0() { return &____dictionary_0; }
	inline void set__dictionary_0(Dictionary_2_t4106854722 * value)
	{
		____dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMTBL_T752690877_H
#ifndef SYMFACTORY_T300688847_H
#define SYMFACTORY_T300688847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory
struct  SymFactory_t300688847  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::_symbolTable
	SYMTBL_t752690877 * ____symbolTable_0;

public:
	inline static int32_t get_offset_of__symbolTable_0() { return static_cast<int32_t>(offsetof(SymFactory_t300688847, ____symbolTable_0)); }
	inline SYMTBL_t752690877 * get__symbolTable_0() const { return ____symbolTable_0; }
	inline SYMTBL_t752690877 ** get_address_of__symbolTable_0() { return &____symbolTable_0; }
	inline void set__symbolTable_0(SYMTBL_t752690877 * value)
	{
		____symbolTable_0 = value;
		Il2CppCodeGenWriteBarrier((&____symbolTable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMFACTORY_T300688847_H
#ifndef SYMWITHTYPE_T1275985997_H
#define SYMWITHTYPE_T1275985997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType
struct  SymWithType_t1275985997  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType::_ats
	AggregateType_t567267003 * ____ats_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType::_sym
	Symbol_t3348236047 * ____sym_1;

public:
	inline static int32_t get_offset_of__ats_0() { return static_cast<int32_t>(offsetof(SymWithType_t1275985997, ____ats_0)); }
	inline AggregateType_t567267003 * get__ats_0() const { return ____ats_0; }
	inline AggregateType_t567267003 ** get_address_of__ats_0() { return &____ats_0; }
	inline void set__ats_0(AggregateType_t567267003 * value)
	{
		____ats_0 = value;
		Il2CppCodeGenWriteBarrier((&____ats_0), value);
	}

	inline static int32_t get_offset_of__sym_1() { return static_cast<int32_t>(offsetof(SymWithType_t1275985997, ____sym_1)); }
	inline Symbol_t3348236047 * get__sym_1() const { return ____sym_1; }
	inline Symbol_t3348236047 ** get_address_of__sym_1() { return &____sym_1; }
	inline void set__sym_1(Symbol_t3348236047 * value)
	{
		____sym_1 = value;
		Il2CppCodeGenWriteBarrier((&____sym_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMWITHTYPE_T1275985997_H
#ifndef SYMBOLLOADER_T2983914338_H
#define SYMBOLLOADER_T2983914338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader
struct  SymbolLoader_t2983914338  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameManager Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::_nameManager
	NameManager_t1767112997 * ____nameManager_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.PredefinedMembers Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::<PredefinedMembers>k__BackingField
	PredefinedMembers_t1696054763 * ___U3CPredefinedMembersU3Ek__BackingField_1;
	// Microsoft.CSharp.RuntimeBinder.Semantics.GlobalSymbolContext Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::<GlobalSymbolContext>k__BackingField
	GlobalSymbolContext_t1430323192 * ___U3CGlobalSymbolContextU3Ek__BackingField_2;
	// Microsoft.CSharp.RuntimeBinder.Errors.ErrorHandling Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::<ErrorContext>k__BackingField
	ErrorHandling_t3402928913 * ___U3CErrorContextU3Ek__BackingField_3;
	// Microsoft.CSharp.RuntimeBinder.SymbolTable Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::<RuntimeBinderSymbolTable>k__BackingField
	SymbolTable_t2007508464 * ___U3CRuntimeBinderSymbolTableU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of__nameManager_0() { return static_cast<int32_t>(offsetof(SymbolLoader_t2983914338, ____nameManager_0)); }
	inline NameManager_t1767112997 * get__nameManager_0() const { return ____nameManager_0; }
	inline NameManager_t1767112997 ** get_address_of__nameManager_0() { return &____nameManager_0; }
	inline void set__nameManager_0(NameManager_t1767112997 * value)
	{
		____nameManager_0 = value;
		Il2CppCodeGenWriteBarrier((&____nameManager_0), value);
	}

	inline static int32_t get_offset_of_U3CPredefinedMembersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SymbolLoader_t2983914338, ___U3CPredefinedMembersU3Ek__BackingField_1)); }
	inline PredefinedMembers_t1696054763 * get_U3CPredefinedMembersU3Ek__BackingField_1() const { return ___U3CPredefinedMembersU3Ek__BackingField_1; }
	inline PredefinedMembers_t1696054763 ** get_address_of_U3CPredefinedMembersU3Ek__BackingField_1() { return &___U3CPredefinedMembersU3Ek__BackingField_1; }
	inline void set_U3CPredefinedMembersU3Ek__BackingField_1(PredefinedMembers_t1696054763 * value)
	{
		___U3CPredefinedMembersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPredefinedMembersU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CGlobalSymbolContextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SymbolLoader_t2983914338, ___U3CGlobalSymbolContextU3Ek__BackingField_2)); }
	inline GlobalSymbolContext_t1430323192 * get_U3CGlobalSymbolContextU3Ek__BackingField_2() const { return ___U3CGlobalSymbolContextU3Ek__BackingField_2; }
	inline GlobalSymbolContext_t1430323192 ** get_address_of_U3CGlobalSymbolContextU3Ek__BackingField_2() { return &___U3CGlobalSymbolContextU3Ek__BackingField_2; }
	inline void set_U3CGlobalSymbolContextU3Ek__BackingField_2(GlobalSymbolContext_t1430323192 * value)
	{
		___U3CGlobalSymbolContextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGlobalSymbolContextU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CErrorContextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SymbolLoader_t2983914338, ___U3CErrorContextU3Ek__BackingField_3)); }
	inline ErrorHandling_t3402928913 * get_U3CErrorContextU3Ek__BackingField_3() const { return ___U3CErrorContextU3Ek__BackingField_3; }
	inline ErrorHandling_t3402928913 ** get_address_of_U3CErrorContextU3Ek__BackingField_3() { return &___U3CErrorContextU3Ek__BackingField_3; }
	inline void set_U3CErrorContextU3Ek__BackingField_3(ErrorHandling_t3402928913 * value)
	{
		___U3CErrorContextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorContextU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CRuntimeBinderSymbolTableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SymbolLoader_t2983914338, ___U3CRuntimeBinderSymbolTableU3Ek__BackingField_4)); }
	inline SymbolTable_t2007508464 * get_U3CRuntimeBinderSymbolTableU3Ek__BackingField_4() const { return ___U3CRuntimeBinderSymbolTableU3Ek__BackingField_4; }
	inline SymbolTable_t2007508464 ** get_address_of_U3CRuntimeBinderSymbolTableU3Ek__BackingField_4() { return &___U3CRuntimeBinderSymbolTableU3Ek__BackingField_4; }
	inline void set_U3CRuntimeBinderSymbolTableU3Ek__BackingField_4(SymbolTable_t2007508464 * value)
	{
		___U3CRuntimeBinderSymbolTableU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRuntimeBinderSymbolTableU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLLOADER_T2983914338_H
#ifndef TYPEARRAY_T2467755373_H
#define TYPEARRAY_T2467755373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray
struct  TypeArray_t2467755373  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray::<Items>k__BackingField
	CTypeU5BU5D_t868586555* ___U3CItemsU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeArray_t2467755373, ___U3CItemsU3Ek__BackingField_0)); }
	inline CTypeU5BU5D_t868586555* get_U3CItemsU3Ek__BackingField_0() const { return ___U3CItemsU3Ek__BackingField_0; }
	inline CTypeU5BU5D_t868586555** get_address_of_U3CItemsU3Ek__BackingField_0() { return &___U3CItemsU3Ek__BackingField_0; }
	inline void set_U3CItemsU3Ek__BackingField_0(CTypeU5BU5D_t868586555* value)
	{
		___U3CItemsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CItemsU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEARRAY_T2467755373_H
#ifndef TYPEMANAGER_T4140799422_H
#define TYPEMANAGER_T4140799422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager
struct  TypeManager_t4140799422  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_BSymmgr
	BSYMMGR_t2938027401 * ____BSymmgr_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.PredefinedTypes Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_predefTypes
	PredefinedTypes_t1653833157 * ____predefTypes_1;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeFactory Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_typeFactory
	TypeFactory_t821598298 * ____typeFactory_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_typeTable
	TypeTable_t2388713815 * ____typeTable_3;
	// Microsoft.CSharp.RuntimeBinder.SymbolTable Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_symbolTable
	SymbolTable_t2007508464 * ____symbolTable_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.VoidType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_voidType
	VoidType_t3686515033 * ____voidType_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.NullType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_nullType
	NullType_t161614275 * ____nullType_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodGroupType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_typeMethGrp
	MethodGroupType_t2756130430 * ____typeMethGrp_7;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ArgumentListType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_argListType
	ArgumentListType_t3380992639 * ____argListType_8;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_errorType
	ErrorType_t685300011 * ____errorType_9;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager/StdTypeVarColl Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_stvcMethod
	StdTypeVarColl_t3726765420 * ____stvcMethod_10;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager/StdTypeVarColl Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_stvcClass
	StdTypeVarColl_t3726765420 * ____stvcClass_11;
	// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Reflection.Assembly,System.Reflection.Assembly>,System.Boolean> Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::_internalsVisibleToCalculated
	Dictionary_2_t3136955594 * ____internalsVisibleToCalculated_12;

public:
	inline static int32_t get_offset_of__BSymmgr_0() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____BSymmgr_0)); }
	inline BSYMMGR_t2938027401 * get__BSymmgr_0() const { return ____BSymmgr_0; }
	inline BSYMMGR_t2938027401 ** get_address_of__BSymmgr_0() { return &____BSymmgr_0; }
	inline void set__BSymmgr_0(BSYMMGR_t2938027401 * value)
	{
		____BSymmgr_0 = value;
		Il2CppCodeGenWriteBarrier((&____BSymmgr_0), value);
	}

	inline static int32_t get_offset_of__predefTypes_1() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____predefTypes_1)); }
	inline PredefinedTypes_t1653833157 * get__predefTypes_1() const { return ____predefTypes_1; }
	inline PredefinedTypes_t1653833157 ** get_address_of__predefTypes_1() { return &____predefTypes_1; }
	inline void set__predefTypes_1(PredefinedTypes_t1653833157 * value)
	{
		____predefTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&____predefTypes_1), value);
	}

	inline static int32_t get_offset_of__typeFactory_2() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____typeFactory_2)); }
	inline TypeFactory_t821598298 * get__typeFactory_2() const { return ____typeFactory_2; }
	inline TypeFactory_t821598298 ** get_address_of__typeFactory_2() { return &____typeFactory_2; }
	inline void set__typeFactory_2(TypeFactory_t821598298 * value)
	{
		____typeFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeFactory_2), value);
	}

	inline static int32_t get_offset_of__typeTable_3() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____typeTable_3)); }
	inline TypeTable_t2388713815 * get__typeTable_3() const { return ____typeTable_3; }
	inline TypeTable_t2388713815 ** get_address_of__typeTable_3() { return &____typeTable_3; }
	inline void set__typeTable_3(TypeTable_t2388713815 * value)
	{
		____typeTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____typeTable_3), value);
	}

	inline static int32_t get_offset_of__symbolTable_4() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____symbolTable_4)); }
	inline SymbolTable_t2007508464 * get__symbolTable_4() const { return ____symbolTable_4; }
	inline SymbolTable_t2007508464 ** get_address_of__symbolTable_4() { return &____symbolTable_4; }
	inline void set__symbolTable_4(SymbolTable_t2007508464 * value)
	{
		____symbolTable_4 = value;
		Il2CppCodeGenWriteBarrier((&____symbolTable_4), value);
	}

	inline static int32_t get_offset_of__voidType_5() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____voidType_5)); }
	inline VoidType_t3686515033 * get__voidType_5() const { return ____voidType_5; }
	inline VoidType_t3686515033 ** get_address_of__voidType_5() { return &____voidType_5; }
	inline void set__voidType_5(VoidType_t3686515033 * value)
	{
		____voidType_5 = value;
		Il2CppCodeGenWriteBarrier((&____voidType_5), value);
	}

	inline static int32_t get_offset_of__nullType_6() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____nullType_6)); }
	inline NullType_t161614275 * get__nullType_6() const { return ____nullType_6; }
	inline NullType_t161614275 ** get_address_of__nullType_6() { return &____nullType_6; }
	inline void set__nullType_6(NullType_t161614275 * value)
	{
		____nullType_6 = value;
		Il2CppCodeGenWriteBarrier((&____nullType_6), value);
	}

	inline static int32_t get_offset_of__typeMethGrp_7() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____typeMethGrp_7)); }
	inline MethodGroupType_t2756130430 * get__typeMethGrp_7() const { return ____typeMethGrp_7; }
	inline MethodGroupType_t2756130430 ** get_address_of__typeMethGrp_7() { return &____typeMethGrp_7; }
	inline void set__typeMethGrp_7(MethodGroupType_t2756130430 * value)
	{
		____typeMethGrp_7 = value;
		Il2CppCodeGenWriteBarrier((&____typeMethGrp_7), value);
	}

	inline static int32_t get_offset_of__argListType_8() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____argListType_8)); }
	inline ArgumentListType_t3380992639 * get__argListType_8() const { return ____argListType_8; }
	inline ArgumentListType_t3380992639 ** get_address_of__argListType_8() { return &____argListType_8; }
	inline void set__argListType_8(ArgumentListType_t3380992639 * value)
	{
		____argListType_8 = value;
		Il2CppCodeGenWriteBarrier((&____argListType_8), value);
	}

	inline static int32_t get_offset_of__errorType_9() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____errorType_9)); }
	inline ErrorType_t685300011 * get__errorType_9() const { return ____errorType_9; }
	inline ErrorType_t685300011 ** get_address_of__errorType_9() { return &____errorType_9; }
	inline void set__errorType_9(ErrorType_t685300011 * value)
	{
		____errorType_9 = value;
		Il2CppCodeGenWriteBarrier((&____errorType_9), value);
	}

	inline static int32_t get_offset_of__stvcMethod_10() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____stvcMethod_10)); }
	inline StdTypeVarColl_t3726765420 * get__stvcMethod_10() const { return ____stvcMethod_10; }
	inline StdTypeVarColl_t3726765420 ** get_address_of__stvcMethod_10() { return &____stvcMethod_10; }
	inline void set__stvcMethod_10(StdTypeVarColl_t3726765420 * value)
	{
		____stvcMethod_10 = value;
		Il2CppCodeGenWriteBarrier((&____stvcMethod_10), value);
	}

	inline static int32_t get_offset_of__stvcClass_11() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____stvcClass_11)); }
	inline StdTypeVarColl_t3726765420 * get__stvcClass_11() const { return ____stvcClass_11; }
	inline StdTypeVarColl_t3726765420 ** get_address_of__stvcClass_11() { return &____stvcClass_11; }
	inline void set__stvcClass_11(StdTypeVarColl_t3726765420 * value)
	{
		____stvcClass_11 = value;
		Il2CppCodeGenWriteBarrier((&____stvcClass_11), value);
	}

	inline static int32_t get_offset_of__internalsVisibleToCalculated_12() { return static_cast<int32_t>(offsetof(TypeManager_t4140799422, ____internalsVisibleToCalculated_12)); }
	inline Dictionary_2_t3136955594 * get__internalsVisibleToCalculated_12() const { return ____internalsVisibleToCalculated_12; }
	inline Dictionary_2_t3136955594 ** get_address_of__internalsVisibleToCalculated_12() { return &____internalsVisibleToCalculated_12; }
	inline void set__internalsVisibleToCalculated_12(Dictionary_2_t3136955594 * value)
	{
		____internalsVisibleToCalculated_12 = value;
		Il2CppCodeGenWriteBarrier((&____internalsVisibleToCalculated_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMANAGER_T4140799422_H
#ifndef TYPETABLE_T2388713815_H
#define TYPETABLE_T2388713815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable
struct  TypeTable_t2388713815  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pAggregateTable
	Dictionary_2_t3935352129 * ____pAggregateTable_0;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pArrayTable
	Dictionary_2_t114597806 * ____pArrayTable_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pParameterModifierTable
	Dictionary_2_t576429226 * ____pParameterModifierTable_2;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pErrorWithNamespaceParentTable
	Dictionary_2_t547950121 * ____pErrorWithNamespaceParentTable_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pPointerTable
	Dictionary_2_t2740155231 * ____pPointerTable_4;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pNullableTable
	Dictionary_2_t2328657215 * ____pNullableTable_5;
	// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType> Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::_pTypeParameterTable
	Dictionary_2_t2427355066 * ____pTypeParameterTable_6;

public:
	inline static int32_t get_offset_of__pAggregateTable_0() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pAggregateTable_0)); }
	inline Dictionary_2_t3935352129 * get__pAggregateTable_0() const { return ____pAggregateTable_0; }
	inline Dictionary_2_t3935352129 ** get_address_of__pAggregateTable_0() { return &____pAggregateTable_0; }
	inline void set__pAggregateTable_0(Dictionary_2_t3935352129 * value)
	{
		____pAggregateTable_0 = value;
		Il2CppCodeGenWriteBarrier((&____pAggregateTable_0), value);
	}

	inline static int32_t get_offset_of__pArrayTable_1() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pArrayTable_1)); }
	inline Dictionary_2_t114597806 * get__pArrayTable_1() const { return ____pArrayTable_1; }
	inline Dictionary_2_t114597806 ** get_address_of__pArrayTable_1() { return &____pArrayTable_1; }
	inline void set__pArrayTable_1(Dictionary_2_t114597806 * value)
	{
		____pArrayTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____pArrayTable_1), value);
	}

	inline static int32_t get_offset_of__pParameterModifierTable_2() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pParameterModifierTable_2)); }
	inline Dictionary_2_t576429226 * get__pParameterModifierTable_2() const { return ____pParameterModifierTable_2; }
	inline Dictionary_2_t576429226 ** get_address_of__pParameterModifierTable_2() { return &____pParameterModifierTable_2; }
	inline void set__pParameterModifierTable_2(Dictionary_2_t576429226 * value)
	{
		____pParameterModifierTable_2 = value;
		Il2CppCodeGenWriteBarrier((&____pParameterModifierTable_2), value);
	}

	inline static int32_t get_offset_of__pErrorWithNamespaceParentTable_3() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pErrorWithNamespaceParentTable_3)); }
	inline Dictionary_2_t547950121 * get__pErrorWithNamespaceParentTable_3() const { return ____pErrorWithNamespaceParentTable_3; }
	inline Dictionary_2_t547950121 ** get_address_of__pErrorWithNamespaceParentTable_3() { return &____pErrorWithNamespaceParentTable_3; }
	inline void set__pErrorWithNamespaceParentTable_3(Dictionary_2_t547950121 * value)
	{
		____pErrorWithNamespaceParentTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____pErrorWithNamespaceParentTable_3), value);
	}

	inline static int32_t get_offset_of__pPointerTable_4() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pPointerTable_4)); }
	inline Dictionary_2_t2740155231 * get__pPointerTable_4() const { return ____pPointerTable_4; }
	inline Dictionary_2_t2740155231 ** get_address_of__pPointerTable_4() { return &____pPointerTable_4; }
	inline void set__pPointerTable_4(Dictionary_2_t2740155231 * value)
	{
		____pPointerTable_4 = value;
		Il2CppCodeGenWriteBarrier((&____pPointerTable_4), value);
	}

	inline static int32_t get_offset_of__pNullableTable_5() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pNullableTable_5)); }
	inline Dictionary_2_t2328657215 * get__pNullableTable_5() const { return ____pNullableTable_5; }
	inline Dictionary_2_t2328657215 ** get_address_of__pNullableTable_5() { return &____pNullableTable_5; }
	inline void set__pNullableTable_5(Dictionary_2_t2328657215 * value)
	{
		____pNullableTable_5 = value;
		Il2CppCodeGenWriteBarrier((&____pNullableTable_5), value);
	}

	inline static int32_t get_offset_of__pTypeParameterTable_6() { return static_cast<int32_t>(offsetof(TypeTable_t2388713815, ____pTypeParameterTable_6)); }
	inline Dictionary_2_t2427355066 * get__pTypeParameterTable_6() const { return ____pTypeParameterTable_6; }
	inline Dictionary_2_t2427355066 ** get_address_of__pTypeParameterTable_6() { return &____pTypeParameterTable_6; }
	inline void set__pTypeParameterTable_6(Dictionary_2_t2427355066 * value)
	{
		____pTypeParameterTable_6 = value;
		Il2CppCodeGenWriteBarrier((&____pTypeParameterTable_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETABLE_T2388713815_H
#ifndef UDCONVINFO_T2042074985_H
#define UDCONVINFO_T2042074985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UdConvInfo
struct  UdConvInfo_t2042074985  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethWithType Microsoft.CSharp.RuntimeBinder.Semantics.UdConvInfo::mwt
	MethWithType_t1508195034 * ___mwt_0;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.UdConvInfo::fSrcImplicit
	bool ___fSrcImplicit_1;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.UdConvInfo::fDstImplicit
	bool ___fDstImplicit_2;

public:
	inline static int32_t get_offset_of_mwt_0() { return static_cast<int32_t>(offsetof(UdConvInfo_t2042074985, ___mwt_0)); }
	inline MethWithType_t1508195034 * get_mwt_0() const { return ___mwt_0; }
	inline MethWithType_t1508195034 ** get_address_of_mwt_0() { return &___mwt_0; }
	inline void set_mwt_0(MethWithType_t1508195034 * value)
	{
		___mwt_0 = value;
		Il2CppCodeGenWriteBarrier((&___mwt_0), value);
	}

	inline static int32_t get_offset_of_fSrcImplicit_1() { return static_cast<int32_t>(offsetof(UdConvInfo_t2042074985, ___fSrcImplicit_1)); }
	inline bool get_fSrcImplicit_1() const { return ___fSrcImplicit_1; }
	inline bool* get_address_of_fSrcImplicit_1() { return &___fSrcImplicit_1; }
	inline void set_fSrcImplicit_1(bool value)
	{
		___fSrcImplicit_1 = value;
	}

	inline static int32_t get_offset_of_fDstImplicit_2() { return static_cast<int32_t>(offsetof(UdConvInfo_t2042074985, ___fDstImplicit_2)); }
	inline bool get_fDstImplicit_2() const { return ___fDstImplicit_2; }
	inline bool* get_address_of_fDstImplicit_2() { return &___fDstImplicit_2; }
	inline void set_fDstImplicit_2(bool value)
	{
		___fDstImplicit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDCONVINFO_T2042074985_H
#ifndef UTILITYTYPEEXTENSIONS_T3396551544_H
#define UTILITYTYPEEXTENSIONS_T3396551544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions
struct  UtilityTypeExtensions_t3396551544  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITYTYPEEXTENSIONS_T3396551544_H
#ifndef U3CTYPEANDBASECLASSINTERFACESU3ED__1_T3739288835_H
#define U3CTYPEANDBASECLASSINTERFACESU3ED__1_T3739288835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1
struct  U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>2__current
	AggregateType_t567267003 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::type
	AggregateType_t567267003 * ___type_3;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>3__type
	AggregateType_t567267003 * ___U3CU3E3__type_4;
	// System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>7__wrap2
	CTypeU5BU5D_t868586555* ___U3CU3E7__wrap2_6;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3E2__current_1)); }
	inline AggregateType_t567267003 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AggregateType_t567267003 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AggregateType_t567267003 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___type_3)); }
	inline AggregateType_t567267003 * get_type_3() const { return ___type_3; }
	inline AggregateType_t567267003 ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(AggregateType_t567267003 * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3E3__type_4)); }
	inline AggregateType_t567267003 * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline AggregateType_t567267003 ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(AggregateType_t567267003 * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__type_4), value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E7__wrap1_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3E7__wrap2_6)); }
	inline CTypeU5BU5D_t868586555* get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline CTypeU5BU5D_t868586555** get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(CTypeU5BU5D_t868586555* value)
	{
		___U3CU3E7__wrap2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E7__wrap2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_7() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835, ___U3CU3E7__wrap3_7)); }
	inline int32_t get_U3CU3E7__wrap3_7() const { return ___U3CU3E7__wrap3_7; }
	inline int32_t* get_address_of_U3CU3E7__wrap3_7() { return &___U3CU3E7__wrap3_7; }
	inline void set_U3CU3E7__wrap3_7(int32_t value)
	{
		___U3CU3E7__wrap3_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTYPEANDBASECLASSINTERFACESU3ED__1_T3739288835_H
#ifndef U3CTYPEANDBASECLASSESU3ED__0_T996690076_H
#define U3CTYPEANDBASECLASSESU3ED__0_T996690076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0
struct  U3CTypeAndBaseClassesU3Ed__0_t996690076  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::<>2__current
	AggregateType_t567267003 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::type
	AggregateType_t567267003 * ___type_3;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::<>3__type
	AggregateType_t567267003 * ___U3CU3E3__type_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::<t>5__1
	AggregateType_t567267003 * ___U3CtU3E5__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassesU3Ed__0_t996690076, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassesU3Ed__0_t996690076, ___U3CU3E2__current_1)); }
	inline AggregateType_t567267003 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AggregateType_t567267003 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AggregateType_t567267003 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassesU3Ed__0_t996690076, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassesU3Ed__0_t996690076, ___type_3)); }
	inline AggregateType_t567267003 * get_type_3() const { return ___type_3; }
	inline AggregateType_t567267003 ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(AggregateType_t567267003 * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassesU3Ed__0_t996690076, ___U3CU3E3__type_4)); }
	inline AggregateType_t567267003 * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline AggregateType_t567267003 ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(AggregateType_t567267003 * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__type_4), value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CTypeAndBaseClassesU3Ed__0_t996690076, ___U3CtU3E5__1_5)); }
	inline AggregateType_t567267003 * get_U3CtU3E5__1_5() const { return ___U3CtU3E5__1_5; }
	inline AggregateType_t567267003 ** get_address_of_U3CtU3E5__1_5() { return &___U3CtU3E5__1_5; }
	inline void set_U3CtU3E5__1_5(AggregateType_t567267003 * value)
	{
		___U3CtU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtU3E5__1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTYPEANDBASECLASSESU3ED__0_T996690076_H
#ifndef SYMBOLTABLE_T2007508464_H
#define SYMBOLTABLE_T2007508464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable
struct  SymbolTable_t2007508464  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.Type> Microsoft.CSharp.RuntimeBinder.SymbolTable::_typesWithConversionsLoaded
	HashSet_1_t1048894234 * ____typesWithConversionsLoaded_0;
	// System.Collections.Generic.HashSet`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey> Microsoft.CSharp.RuntimeBinder.SymbolTable::_namesLoadedForEachType
	HashSet_1_t577124894 * ____namesLoadedForEachType_1;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL Microsoft.CSharp.RuntimeBinder.SymbolTable::_symbolTable
	SYMTBL_t752690877 * ____symbolTable_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory Microsoft.CSharp.RuntimeBinder.SymbolTable::_symFactory
	SymFactory_t300688847 * ____symFactory_3;
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameManager Microsoft.CSharp.RuntimeBinder.SymbolTable::_nameManager
	NameManager_t1767112997 * ____nameManager_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager Microsoft.CSharp.RuntimeBinder.SymbolTable::_typeManager
	TypeManager_t4140799422 * ____typeManager_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR Microsoft.CSharp.RuntimeBinder.SymbolTable::_bsymmgr
	BSYMMGR_t2938027401 * ____bsymmgr_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker Microsoft.CSharp.RuntimeBinder.SymbolTable::_semanticChecker
	CSemanticChecker_t1535940568 * ____semanticChecker_7;
	// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::_rootNamespace
	NamespaceSymbol_t4294485991 * ____rootNamespace_8;

public:
	inline static int32_t get_offset_of__typesWithConversionsLoaded_0() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____typesWithConversionsLoaded_0)); }
	inline HashSet_1_t1048894234 * get__typesWithConversionsLoaded_0() const { return ____typesWithConversionsLoaded_0; }
	inline HashSet_1_t1048894234 ** get_address_of__typesWithConversionsLoaded_0() { return &____typesWithConversionsLoaded_0; }
	inline void set__typesWithConversionsLoaded_0(HashSet_1_t1048894234 * value)
	{
		____typesWithConversionsLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&____typesWithConversionsLoaded_0), value);
	}

	inline static int32_t get_offset_of__namesLoadedForEachType_1() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____namesLoadedForEachType_1)); }
	inline HashSet_1_t577124894 * get__namesLoadedForEachType_1() const { return ____namesLoadedForEachType_1; }
	inline HashSet_1_t577124894 ** get_address_of__namesLoadedForEachType_1() { return &____namesLoadedForEachType_1; }
	inline void set__namesLoadedForEachType_1(HashSet_1_t577124894 * value)
	{
		____namesLoadedForEachType_1 = value;
		Il2CppCodeGenWriteBarrier((&____namesLoadedForEachType_1), value);
	}

	inline static int32_t get_offset_of__symbolTable_2() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____symbolTable_2)); }
	inline SYMTBL_t752690877 * get__symbolTable_2() const { return ____symbolTable_2; }
	inline SYMTBL_t752690877 ** get_address_of__symbolTable_2() { return &____symbolTable_2; }
	inline void set__symbolTable_2(SYMTBL_t752690877 * value)
	{
		____symbolTable_2 = value;
		Il2CppCodeGenWriteBarrier((&____symbolTable_2), value);
	}

	inline static int32_t get_offset_of__symFactory_3() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____symFactory_3)); }
	inline SymFactory_t300688847 * get__symFactory_3() const { return ____symFactory_3; }
	inline SymFactory_t300688847 ** get_address_of__symFactory_3() { return &____symFactory_3; }
	inline void set__symFactory_3(SymFactory_t300688847 * value)
	{
		____symFactory_3 = value;
		Il2CppCodeGenWriteBarrier((&____symFactory_3), value);
	}

	inline static int32_t get_offset_of__nameManager_4() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____nameManager_4)); }
	inline NameManager_t1767112997 * get__nameManager_4() const { return ____nameManager_4; }
	inline NameManager_t1767112997 ** get_address_of__nameManager_4() { return &____nameManager_4; }
	inline void set__nameManager_4(NameManager_t1767112997 * value)
	{
		____nameManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____nameManager_4), value);
	}

	inline static int32_t get_offset_of__typeManager_5() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____typeManager_5)); }
	inline TypeManager_t4140799422 * get__typeManager_5() const { return ____typeManager_5; }
	inline TypeManager_t4140799422 ** get_address_of__typeManager_5() { return &____typeManager_5; }
	inline void set__typeManager_5(TypeManager_t4140799422 * value)
	{
		____typeManager_5 = value;
		Il2CppCodeGenWriteBarrier((&____typeManager_5), value);
	}

	inline static int32_t get_offset_of__bsymmgr_6() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____bsymmgr_6)); }
	inline BSYMMGR_t2938027401 * get__bsymmgr_6() const { return ____bsymmgr_6; }
	inline BSYMMGR_t2938027401 ** get_address_of__bsymmgr_6() { return &____bsymmgr_6; }
	inline void set__bsymmgr_6(BSYMMGR_t2938027401 * value)
	{
		____bsymmgr_6 = value;
		Il2CppCodeGenWriteBarrier((&____bsymmgr_6), value);
	}

	inline static int32_t get_offset_of__semanticChecker_7() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____semanticChecker_7)); }
	inline CSemanticChecker_t1535940568 * get__semanticChecker_7() const { return ____semanticChecker_7; }
	inline CSemanticChecker_t1535940568 ** get_address_of__semanticChecker_7() { return &____semanticChecker_7; }
	inline void set__semanticChecker_7(CSemanticChecker_t1535940568 * value)
	{
		____semanticChecker_7 = value;
		Il2CppCodeGenWriteBarrier((&____semanticChecker_7), value);
	}

	inline static int32_t get_offset_of__rootNamespace_8() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464, ____rootNamespace_8)); }
	inline NamespaceSymbol_t4294485991 * get__rootNamespace_8() const { return ____rootNamespace_8; }
	inline NamespaceSymbol_t4294485991 ** get_address_of__rootNamespace_8() { return &____rootNamespace_8; }
	inline void set__rootNamespace_8(NamespaceSymbol_t4294485991 * value)
	{
		____rootNamespace_8 = value;
		Il2CppCodeGenWriteBarrier((&____rootNamespace_8), value);
	}
};

struct SymbolTable_t2007508464_StaticFields
{
public:
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::s_Sentinel
	Type_t * ___s_Sentinel_9;
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::s_EventRegistrationTokenType
	Type_t * ___s_EventRegistrationTokenType_10;
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::s_WindowsRuntimeMarshal
	Type_t * ___s_WindowsRuntimeMarshal_11;
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::s_EventRegistrationTokenTable
	Type_t * ___s_EventRegistrationTokenTable_12;

public:
	inline static int32_t get_offset_of_s_Sentinel_9() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464_StaticFields, ___s_Sentinel_9)); }
	inline Type_t * get_s_Sentinel_9() const { return ___s_Sentinel_9; }
	inline Type_t ** get_address_of_s_Sentinel_9() { return &___s_Sentinel_9; }
	inline void set_s_Sentinel_9(Type_t * value)
	{
		___s_Sentinel_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_Sentinel_9), value);
	}

	inline static int32_t get_offset_of_s_EventRegistrationTokenType_10() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464_StaticFields, ___s_EventRegistrationTokenType_10)); }
	inline Type_t * get_s_EventRegistrationTokenType_10() const { return ___s_EventRegistrationTokenType_10; }
	inline Type_t ** get_address_of_s_EventRegistrationTokenType_10() { return &___s_EventRegistrationTokenType_10; }
	inline void set_s_EventRegistrationTokenType_10(Type_t * value)
	{
		___s_EventRegistrationTokenType_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_EventRegistrationTokenType_10), value);
	}

	inline static int32_t get_offset_of_s_WindowsRuntimeMarshal_11() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464_StaticFields, ___s_WindowsRuntimeMarshal_11)); }
	inline Type_t * get_s_WindowsRuntimeMarshal_11() const { return ___s_WindowsRuntimeMarshal_11; }
	inline Type_t ** get_address_of_s_WindowsRuntimeMarshal_11() { return &___s_WindowsRuntimeMarshal_11; }
	inline void set_s_WindowsRuntimeMarshal_11(Type_t * value)
	{
		___s_WindowsRuntimeMarshal_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_WindowsRuntimeMarshal_11), value);
	}

	inline static int32_t get_offset_of_s_EventRegistrationTokenTable_12() { return static_cast<int32_t>(offsetof(SymbolTable_t2007508464_StaticFields, ___s_EventRegistrationTokenTable_12)); }
	inline Type_t * get_s_EventRegistrationTokenTable_12() const { return ___s_EventRegistrationTokenTable_12; }
	inline Type_t ** get_address_of_s_EventRegistrationTokenTable_12() { return &___s_EventRegistrationTokenTable_12; }
	inline void set_s_EventRegistrationTokenTable_12(Type_t * value)
	{
		___s_EventRegistrationTokenTable_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_EventRegistrationTokenTable_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLTABLE_T2007508464_H
#ifndef U3CU3EC__DISPLAYCLASS15_0_T2873125857_H
#define U3CU3EC__DISPLAYCLASS15_0_T2873125857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_t2873125857  : public RuntimeObject
{
public:
	// System.String Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_t2873125857, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS15_0_T2873125857_H
#ifndef U3CU3EC__DISPLAYCLASS15_1_T916810721_H
#define U3CU3EC__DISPLAYCLASS15_1_T916810721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1
struct  U3CU3Ec__DisplayClass15_1_t916810721  : public RuntimeObject
{
public:
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1::type
	Type_t * ___type_0;
	// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_0 Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass15_0_t2873125857 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_1_t916810721, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_1_t916810721, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass15_0_t2873125857 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass15_0_t2873125857 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass15_0_t2873125857 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((&___CSU24U3CU3E8__locals1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS15_1_T916810721_H
#ifndef U3CU3EC__DISPLAYCLASS30_0_T2872929247_H
#define U3CU3EC__DISPLAYCLASS30_0_T2872929247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_t2872929247  : public RuntimeObject
{
public:
	// System.Reflection.MethodBase Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0::methodBase
	MethodBase_t * ___methodBase_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0::<>9__0
	Func_2_t3487522507 * ___U3CU3E9__0_1;

public:
	inline static int32_t get_offset_of_methodBase_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t2872929247, ___methodBase_0)); }
	inline MethodBase_t * get_methodBase_0() const { return ___methodBase_0; }
	inline MethodBase_t ** get_address_of_methodBase_0() { return &___methodBase_0; }
	inline void set_methodBase_0(MethodBase_t * value)
	{
		___methodBase_0 = value;
		Il2CppCodeGenWriteBarrier((&___methodBase_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t2872929247, ___U3CU3E9__0_1)); }
	inline Func_2_t3487522507 * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_t3487522507 ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_t3487522507 * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS30_0_T2872929247_H
#ifndef U3CU3EC__DISPLAYCLASS50_0_T2872929245_H
#define U3CU3EC__DISPLAYCLASS50_0_T2872929245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass50_0
struct  U3CU3Ec__DisplayClass50_0_t2872929245  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass50_0::property
	Name_t658191338 * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_t2872929245, ___property_0)); }
	inline Name_t658191338 * get_property_0() const { return ___property_0; }
	inline Name_t658191338 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(Name_t658191338 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS50_0_T2872929245_H
#ifndef U3CU3EC__DISPLAYCLASS52_0_T2872798173_H
#define U3CU3EC__DISPLAYCLASS52_0_T2872798173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0
struct  U3CU3Ec__DisplayClass52_0_t2872798173  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0::methodName
	Name_t658191338 * ___methodName_0;
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0::t
	Type_t * ___t_1;

public:
	inline static int32_t get_offset_of_methodName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t2872798173, ___methodName_0)); }
	inline Name_t658191338 * get_methodName_0() const { return ___methodName_0; }
	inline Name_t658191338 ** get_address_of_methodName_0() { return &___methodName_0; }
	inline void set_methodName_0(Name_t658191338 * value)
	{
		___methodName_0 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_0), value);
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t2872798173, ___t_1)); }
	inline Type_t * get_t_1() const { return ___t_1; }
	inline Type_t ** get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(Type_t * value)
	{
		___t_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS52_0_T2872798173_H
#ifndef NAMEHASHKEY_T2012175420_H
#define NAMEHASHKEY_T2012175420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey
struct  NameHashKey_t2012175420  : public RuntimeObject
{
public:
	// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::type
	Type_t * ___type_0;
	// System.String Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(NameHashKey_t2012175420, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(NameHashKey_t2012175420, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEHASHKEY_T2012175420_H
#ifndef NAME_T658191338_H
#define NAME_T658191338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.Name
struct  Name_t658191338  : public RuntimeObject
{
public:
	// System.String Microsoft.CSharp.RuntimeBinder.Syntax.Name::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Name_t658191338, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAME_T658191338_H
#ifndef NAMEMANAGER_T1767112997_H
#define NAMEMANAGER_T1767112997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.NameManager
struct  NameManager_t1767112997  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::_names
	NameTable_t1897568201 * ____names_2;

public:
	inline static int32_t get_offset_of__names_2() { return static_cast<int32_t>(offsetof(NameManager_t1767112997, ____names_2)); }
	inline NameTable_t1897568201 * get__names_2() const { return ____names_2; }
	inline NameTable_t1897568201 ** get_address_of__names_2() { return &____names_2; }
	inline void set__names_2(NameTable_t1897568201 * value)
	{
		____names_2 = value;
		Il2CppCodeGenWriteBarrier((&____names_2), value);
	}
};

struct NameManager_t1767112997_StaticFields
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name[] Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::s_predefinedNames
	NameU5BU5D_t1359183151* ___s_predefinedNames_0;
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::s_knownNames
	NameTable_t1897568201 * ___s_knownNames_1;

public:
	inline static int32_t get_offset_of_s_predefinedNames_0() { return static_cast<int32_t>(offsetof(NameManager_t1767112997_StaticFields, ___s_predefinedNames_0)); }
	inline NameU5BU5D_t1359183151* get_s_predefinedNames_0() const { return ___s_predefinedNames_0; }
	inline NameU5BU5D_t1359183151** get_address_of_s_predefinedNames_0() { return &___s_predefinedNames_0; }
	inline void set_s_predefinedNames_0(NameU5BU5D_t1359183151* value)
	{
		___s_predefinedNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_predefinedNames_0), value);
	}

	inline static int32_t get_offset_of_s_knownNames_1() { return static_cast<int32_t>(offsetof(NameManager_t1767112997_StaticFields, ___s_knownNames_1)); }
	inline NameTable_t1897568201 * get_s_knownNames_1() const { return ___s_knownNames_1; }
	inline NameTable_t1897568201 ** get_address_of_s_knownNames_1() { return &___s_knownNames_1; }
	inline void set_s_knownNames_1(NameTable_t1897568201 * value)
	{
		___s_knownNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_knownNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEMANAGER_T1767112997_H
#ifndef NAMETABLE_T1897568201_H
#define NAMETABLE_T1897568201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable
struct  NameTable_t1897568201  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry[] Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::_entries
	EntryU5BU5D_t3854683283* ____entries_0;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::_count
	int32_t ____count_1;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::_mask
	int32_t ____mask_2;

public:
	inline static int32_t get_offset_of__entries_0() { return static_cast<int32_t>(offsetof(NameTable_t1897568201, ____entries_0)); }
	inline EntryU5BU5D_t3854683283* get__entries_0() const { return ____entries_0; }
	inline EntryU5BU5D_t3854683283** get_address_of__entries_0() { return &____entries_0; }
	inline void set__entries_0(EntryU5BU5D_t3854683283* value)
	{
		____entries_0 = value;
		Il2CppCodeGenWriteBarrier((&____entries_0), value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(NameTable_t1897568201, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__mask_2() { return static_cast<int32_t>(offsetof(NameTable_t1897568201, ____mask_2)); }
	inline int32_t get__mask_2() const { return ____mask_2; }
	inline int32_t* get_address_of__mask_2() { return &____mask_2; }
	inline void set__mask_2(int32_t value)
	{
		____mask_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMETABLE_T1897568201_H
#ifndef ENTRY_T2595452246_H
#define ENTRY_T2595452246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry
struct  Entry_t2595452246  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry::Name
	Name_t658191338 * ___Name_0;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry::Next
	Entry_t2595452246 * ___Next_2;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Entry_t2595452246, ___Name_0)); }
	inline Name_t658191338 * get_Name_0() const { return ___Name_0; }
	inline Name_t658191338 ** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(Name_t658191338 * value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t2595452246, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t2595452246, ___Next_2)); }
	inline Entry_t2595452246 * get_Next_2() const { return ___Next_2; }
	inline Entry_t2595452246 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t2595452246 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T2595452246_H
#ifndef TOKENFACTS_T14026513_H
#define TOKENFACTS_T14026513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.TokenFacts
struct  TokenFacts_t14026513  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENFACTS_T14026513_H
#ifndef SR_T167583548_H
#define SR_T167583548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SR
struct  SR_t167583548  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T167583548_H
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
#ifndef DICTIONARY_2_T2328657215_H
#define DICTIONARY_2_T2328657215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>
struct  Dictionary_2_t2328657215  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1120455646* ___entries_1;
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
	KeyCollection_t2518332686 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4044701533 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___entries_1)); }
	inline EntryU5BU5D_t1120455646* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1120455646** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1120455646* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___keys_7)); }
	inline KeyCollection_t2518332686 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2518332686 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2518332686 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ___values_8)); }
	inline ValueCollection_t4044701533 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4044701533 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4044701533 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2328657215, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T2328657215_H
#ifndef DICTIONARY_2_T2740155231_H
#define DICTIONARY_2_T2740155231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>
struct  Dictionary_2_t2740155231  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2168297790* ___entries_1;
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
	KeyCollection_t2929830702 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t161232253 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___entries_1)); }
	inline EntryU5BU5D_t2168297790* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2168297790** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2168297790* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___keys_7)); }
	inline KeyCollection_t2929830702 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2929830702 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2929830702 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ___values_8)); }
	inline ValueCollection_t161232253 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t161232253 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t161232253 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2740155231, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T2740155231_H
#ifndef DICTIONARY_2_T3935352129_H
#define DICTIONARY_2_T3935352129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>
struct  Dictionary_2_t3935352129  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1158281620* ___entries_1;
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
	KeyCollection_t4125027600 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1356429151 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___entries_1)); }
	inline EntryU5BU5D_t1158281620* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1158281620** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1158281620* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___keys_7)); }
	inline KeyCollection_t4125027600 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4125027600 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4125027600 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ___values_8)); }
	inline ValueCollection_t1356429151 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1356429151 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1356429151 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3935352129, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T3935352129_H
#ifndef DICTIONARY_2_T114597806_H
#define DICTIONARY_2_T114597806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>
struct  Dictionary_2_t114597806  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1206812371* ___entries_1;
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
	KeyCollection_t304273277 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1830642124 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___entries_1)); }
	inline EntryU5BU5D_t1206812371* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1206812371** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1206812371* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___keys_7)); }
	inline KeyCollection_t304273277 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t304273277 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t304273277 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ___values_8)); }
	inline ValueCollection_t1830642124 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1830642124 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1830642124 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t114597806, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T114597806_H
#ifndef DICTIONARY_2_T576429226_H
#define DICTIONARY_2_T576429226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>
struct  Dictionary_2_t576429226  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3734528615* ___entries_1;
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
	KeyCollection_t766104697 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2292473544 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___entries_1)); }
	inline EntryU5BU5D_t3734528615* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3734528615** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3734528615* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___keys_7)); }
	inline KeyCollection_t766104697 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t766104697 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t766104697 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ___values_8)); }
	inline ValueCollection_t2292473544 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2292473544 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2292473544 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t576429226, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T576429226_H
#ifndef DICTIONARY_2_T2427355066_H
#define DICTIONARY_2_T2427355066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>
struct  Dictionary_2_t2427355066  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t818987287* ___entries_1;
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
	KeyCollection_t2617030537 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4143399384 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___entries_1)); }
	inline EntryU5BU5D_t818987287* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t818987287** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t818987287* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___keys_7)); }
	inline KeyCollection_t2617030537 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2617030537 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2617030537 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ___values_8)); }
	inline ValueCollection_t4143399384 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4143399384 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4143399384 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2427355066, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T2427355066_H
#ifndef DICTIONARY_2_T547950121_H
#define DICTIONARY_2_T547950121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>
struct  Dictionary_2_t547950121  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t649123852* ___entries_1;
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
	KeyCollection_t737625592 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2263994439 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___entries_1)); }
	inline EntryU5BU5D_t649123852* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t649123852** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t649123852* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___keys_7)); }
	inline KeyCollection_t737625592 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t737625592 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t737625592 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ___values_8)); }
	inline ValueCollection_t2263994439 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2263994439 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2263994439 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t547950121, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T547950121_H
#ifndef HASHSET_1_T577124894_H
#define HASHSET_1_T577124894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>
struct  HashSet_1_t577124894  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t385246372* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t1306029680* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t950877179 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____buckets_7)); }
	inline Int32U5BU5D_t385246372* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t385246372** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t385246372* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____slots_8)); }
	inline SlotU5BU5D_t1306029680* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t1306029680** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t1306029680* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t577124894, ____siInfo_14)); }
	inline SerializationInfo_t950877179 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t950877179 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T577124894_H
#ifndef HASHSET_1_T1048894234_H
#define HASHSET_1_T1048894234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Type>
struct  HashSet_1_t1048894234  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t385246372* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2214829572* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t950877179 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____buckets_7)); }
	inline Int32U5BU5D_t385246372* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t385246372** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t385246372* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((&____buckets_7), value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____slots_8)); }
	inline SlotU5BU5D_t2214829572* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2214829572** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2214829572* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((&____slots_8), value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1048894234, ____siInfo_14)); }
	inline SerializationInfo_t950877179 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t950877179 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T1048894234_H
#ifndef LIST_1_T3285462212_H
#define LIST_1_T3285462212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>
struct  List_1_t3285462212  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CTypeU5BU5D_t868586555* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3285462212, ____items_1)); }
	inline CTypeU5BU5D_t868586555* get__items_1() const { return ____items_1; }
	inline CTypeU5BU5D_t868586555** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CTypeU5BU5D_t868586555* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3285462212, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3285462212, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3285462212, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3285462212_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CTypeU5BU5D_t868586555* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3285462212_StaticFields, ____emptyArray_5)); }
	inline CTypeU5BU5D_t868586555* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CTypeU5BU5D_t868586555** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CTypeU5BU5D_t868586555* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3285462212_H
#ifndef LIST_1_T2130266080_H
#define LIST_1_T2130266080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Syntax.Name>
struct  List_1_t2130266080  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NameU5BU5D_t1359183151* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2130266080, ____items_1)); }
	inline NameU5BU5D_t1359183151* get__items_1() const { return ____items_1; }
	inline NameU5BU5D_t1359183151** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NameU5BU5D_t1359183151* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2130266080, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2130266080, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2130266080, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2130266080_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NameU5BU5D_t1359183151* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2130266080_StaticFields, ____emptyArray_5)); }
	inline NameU5BU5D_t1359183151* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NameU5BU5D_t1359183151** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NameU5BU5D_t1359183151* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2130266080_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t2843939325* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t2843939325* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t2843939325** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t2843939325* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T819628108_H
#define LIST_1_T819628108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.EventInfo>
struct  List_1_t819628108  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EventInfoU5BU5D_t3237081491* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t819628108, ____items_1)); }
	inline EventInfoU5BU5D_t3237081491* get__items_1() const { return ____items_1; }
	inline EventInfoU5BU5D_t3237081491** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EventInfoU5BU5D_t3237081491* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t819628108, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t819628108, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t819628108, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t819628108_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EventInfoU5BU5D_t3237081491* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t819628108_StaticFields, ____emptyArray_5)); }
	inline EventInfoU5BU5D_t3237081491* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EventInfoU5BU5D_t3237081491** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EventInfoU5BU5D_t3237081491* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T819628108_H
#ifndef LIST_1_T3956019502_H
#define LIST_1_T3956019502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Type>
struct  List_1_t3956019502  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t3940880105* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____items_1)); }
	inline TypeU5BU5D_t3940880105* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t3940880105** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t3940880105* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3956019502, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3956019502_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t3940880105* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3956019502_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t3940880105* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t3940880105** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t3940880105* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3956019502_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef RESETBINDEXCEPTION_T1303326642_H
#define RESETBINDEXCEPTION_T1303326642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.ResetBindException
struct  ResetBindException_t1303326642  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESETBINDEXCEPTION_T1303326642_H
#ifndef CONSTVAL_T1597617476_H
#define CONSTVAL_T1597617476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal
struct  ConstVal_t1597617476 
{
public:
	// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::<ObjectVal>k__BackingField
	RuntimeObject * ___U3CObjectValU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CObjectValU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstVal_t1597617476, ___U3CObjectValU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CObjectValU3Ek__BackingField_3() const { return ___U3CObjectValU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CObjectValU3Ek__BackingField_3() { return &___U3CObjectValU3Ek__BackingField_3; }
	inline void set_U3CObjectValU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CObjectValU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectValU3Ek__BackingField_3), value);
	}
};

struct ConstVal_t1597617476_StaticFields
{
public:
	// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::s_false
	RuntimeObject * ___s_false_0;
	// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::s_true
	RuntimeObject * ___s_true_1;
	// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::s_zeroInt32
	RuntimeObject * ___s_zeroInt32_2;

public:
	inline static int32_t get_offset_of_s_false_0() { return static_cast<int32_t>(offsetof(ConstVal_t1597617476_StaticFields, ___s_false_0)); }
	inline RuntimeObject * get_s_false_0() const { return ___s_false_0; }
	inline RuntimeObject ** get_address_of_s_false_0() { return &___s_false_0; }
	inline void set_s_false_0(RuntimeObject * value)
	{
		___s_false_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_false_0), value);
	}

	inline static int32_t get_offset_of_s_true_1() { return static_cast<int32_t>(offsetof(ConstVal_t1597617476_StaticFields, ___s_true_1)); }
	inline RuntimeObject * get_s_true_1() const { return ___s_true_1; }
	inline RuntimeObject ** get_address_of_s_true_1() { return &___s_true_1; }
	inline void set_s_true_1(RuntimeObject * value)
	{
		___s_true_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_true_1), value);
	}

	inline static int32_t get_offset_of_s_zeroInt32_2() { return static_cast<int32_t>(offsetof(ConstVal_t1597617476_StaticFields, ___s_zeroInt32_2)); }
	inline RuntimeObject * get_s_zeroInt32_2() const { return ___s_zeroInt32_2; }
	inline RuntimeObject ** get_address_of_s_zeroInt32_2() { return &___s_zeroInt32_2; }
	inline void set_s_zeroInt32_2(RuntimeObject * value)
	{
		___s_zeroInt32_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_zeroInt32_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal
struct ConstVal_t1597617476_marshaled_pinvoke
{
	Il2CppIUnknown* ___U3CObjectValU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal
struct ConstVal_t1597617476_marshaled_com
{
	Il2CppIUnknown* ___U3CObjectValU3Ek__BackingField_3;
};
#endif // CONSTVAL_T1597617476_H
#ifndef KEYPAIR_2_T341216002_H
#define KEYPAIR_2_T341216002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>
struct  KeyPair_2_t341216002 
{
public:
	// Key1 Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2::_pKey1
	AggregateSymbol_t3146081271 * ____pKey1_0;
	// Key2 Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2::_pKey2
	Name_t658191338 * ____pKey2_1;

public:
	inline static int32_t get_offset_of__pKey1_0() { return static_cast<int32_t>(offsetof(KeyPair_2_t341216002, ____pKey1_0)); }
	inline AggregateSymbol_t3146081271 * get__pKey1_0() const { return ____pKey1_0; }
	inline AggregateSymbol_t3146081271 ** get_address_of__pKey1_0() { return &____pKey1_0; }
	inline void set__pKey1_0(AggregateSymbol_t3146081271 * value)
	{
		____pKey1_0 = value;
		Il2CppCodeGenWriteBarrier((&____pKey1_0), value);
	}

	inline static int32_t get_offset_of__pKey2_1() { return static_cast<int32_t>(offsetof(KeyPair_2_t341216002, ____pKey2_1)); }
	inline Name_t658191338 * get__pKey2_1() const { return ____pKey2_1; }
	inline Name_t658191338 ** get_address_of__pKey2_1() { return &____pKey2_1; }
	inline void set__pKey2_1(Name_t658191338 * value)
	{
		____pKey2_1 = value;
		Il2CppCodeGenWriteBarrier((&____pKey2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIR_2_T341216002_H
#ifndef KEYPAIR_2_T3498527983_H
#define KEYPAIR_2_T3498527983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>
struct  KeyPair_2_t3498527983 
{
public:
	// Key1 Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2::_pKey1
	CType_t1813387470 * ____pKey1_0;
	// Key2 Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2::_pKey2
	Name_t658191338 * ____pKey2_1;

public:
	inline static int32_t get_offset_of__pKey1_0() { return static_cast<int32_t>(offsetof(KeyPair_2_t3498527983, ____pKey1_0)); }
	inline CType_t1813387470 * get__pKey1_0() const { return ____pKey1_0; }
	inline CType_t1813387470 ** get_address_of__pKey1_0() { return &____pKey1_0; }
	inline void set__pKey1_0(CType_t1813387470 * value)
	{
		____pKey1_0 = value;
		Il2CppCodeGenWriteBarrier((&____pKey1_0), value);
	}

	inline static int32_t get_offset_of__pKey2_1() { return static_cast<int32_t>(offsetof(KeyPair_2_t3498527983, ____pKey2_1)); }
	inline Name_t658191338 * get__pKey2_1() const { return ____pKey2_1; }
	inline Name_t658191338 ** get_address_of__pKey2_1() { return &____pKey2_1; }
	inline void set__pKey2_1(Name_t658191338 * value)
	{
		____pKey2_1 = value;
		Il2CppCodeGenWriteBarrier((&____pKey2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIR_2_T3498527983_H
#ifndef KEYPAIR_2_T3600828283_H
#define KEYPAIR_2_T3600828283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<System.Object,System.Object>
struct  KeyPair_2_t3600828283 
{
public:
	// Key1 Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2::_pKey1
	RuntimeObject * ____pKey1_0;
	// Key2 Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2::_pKey2
	RuntimeObject * ____pKey2_1;

public:
	inline static int32_t get_offset_of__pKey1_0() { return static_cast<int32_t>(offsetof(KeyPair_2_t3600828283, ____pKey1_0)); }
	inline RuntimeObject * get__pKey1_0() const { return ____pKey1_0; }
	inline RuntimeObject ** get_address_of__pKey1_0() { return &____pKey1_0; }
	inline void set__pKey1_0(RuntimeObject * value)
	{
		____pKey1_0 = value;
		Il2CppCodeGenWriteBarrier((&____pKey1_0), value);
	}

	inline static int32_t get_offset_of__pKey2_1() { return static_cast<int32_t>(offsetof(KeyPair_2_t3600828283, ____pKey2_1)); }
	inline RuntimeObject * get__pKey2_1() const { return ____pKey2_1; }
	inline RuntimeObject ** get_address_of__pKey2_1() { return &____pKey2_1; }
	inline void set__pKey2_1(RuntimeObject * value)
	{
		____pKey2_1 = value;
		Il2CppCodeGenWriteBarrier((&____pKey2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIR_2_T3600828283_H
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
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T2708871985_H
#define ENUMERATOR_T2708871985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Reflection.EventInfo>
struct  Enumerator_t2708871985 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t819628108 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	EventInfo_t * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2708871985, ___list_0)); }
	inline List_1_t819628108 * get_list_0() const { return ___list_0; }
	inline List_1_t819628108 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t819628108 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2708871985, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2708871985, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2708871985, ___current_3)); }
	inline EventInfo_t * get_current_3() const { return ___current_3; }
	inline EventInfo_t ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EventInfo_t * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2708871985_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
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
#endif // NULLABLE_1_T1819850047_H
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
#ifndef PARAMARRAYATTRIBUTE_T3664765590_H
#define PARAMARRAYATTRIBUTE_T3664765590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t3664765590  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T3664765590_H
#ifndef DEFAULTMEMBERATTRIBUTE_T3275092422_H
#define DEFAULTMEMBERATTRIBUTE_T3275092422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t3275092422  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t3275092422, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_memberName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T3275092422_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1787725097 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1787725097 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1787725097 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1787725097 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#define CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t1681301359  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
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
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
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
#endif // UINT64_T4134040092_H
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
#ifndef ACCESS_T933830933_H
#define ACCESS_T933830933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS
struct  ACCESS_t933830933 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ACCESS_t933830933, ___value___2)); }
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
#endif // ACCESS_T933830933_H
#ifndef AGGKINDENUM_T2446642037_H
#define AGGKINDENUM_T2446642037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.AggKindEnum
struct  AggKindEnum_t2446642037 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.AggKindEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AggKindEnum_t2446642037, ___value___2)); }
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
#endif // AGGKINDENUM_T2446642037_H
#ifndef EXPRFLAG_T17537459_H
#define EXPRFLAG_T17537459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.EXPRFLAG
struct  EXPRFLAG_t17537459 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.EXPRFLAG::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EXPRFLAG_t17537459, ___value___2)); }
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
#endif // EXPRFLAG_T17537459_H
#ifndef EXPRESSIONKIND_T861793667_H
#define EXPRESSIONKIND_T861793667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ExpressionKind
struct  ExpressionKind_t861793667 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.ExpressionKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionKind_t861793667, ___value___2)); }
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
#endif // EXPRESSIONKIND_T861793667_H
#ifndef MEMLOOKFLAGS_T3295168641_H
#define MEMLOOKFLAGS_T3295168641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.MemLookFlags
struct  MemLookFlags_t3295168641 
{
public:
	// System.UInt32 Microsoft.CSharp.RuntimeBinder.Semantics.MemLookFlags::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemLookFlags_t3295168641, ___value___2)); }
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
#endif // MEMLOOKFLAGS_T3295168641_H
#ifndef METHODKINDENUM_T3615676575_H
#define METHODKINDENUM_T3615676575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.MethodKindEnum
struct  MethodKindEnum_t3615676575 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.MethodKindEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodKindEnum_t3615676575, ___value___2)); }
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
#endif // METHODKINDENUM_T3615676575_H
#ifndef SYMKIND_T1801523180_H
#define SYMKIND_T1801523180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.SYMKIND
struct  SYMKIND_t1801523180 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.SYMKIND::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SYMKIND_t1801523180, ___value___2)); }
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
#endif // SYMKIND_T1801523180_H
#ifndef SPECCONS_T3732431497_H
#define SPECCONS_T3732431497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons
struct  SpecCons_t3732431497 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecCons_t3732431497, ___value___2)); }
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
#endif // SPECCONS_T3732431497_H
#ifndef TYPEKIND_T2741189751_H
#define TYPEKIND_T2741189751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.TypeKind
struct  TypeKind_t2741189751 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2741189751, ___value___2)); }
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
#endif // TYPEKIND_T2741189751_H
#ifndef UNAOPFUNCKIND_T2728766235_H
#define UNAOPFUNCKIND_T2728766235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UnaOpFuncKind
struct  UnaOpFuncKind_t2728766235 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UnaOpFuncKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnaOpFuncKind_t2728766235, ___value___2)); }
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
#endif // UNAOPFUNCKIND_T2728766235_H
#ifndef UNAOPKIND_T1618149266_H
#define UNAOPKIND_T1618149266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UnaOpKind
struct  UnaOpKind_t1618149266 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UnaOpKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnaOpKind_t1618149266, ___value___2)); }
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
#endif // UNAOPKIND_T1618149266_H
#ifndef UNAOPMASK_T3221296713_H
#define UNAOPMASK_T3221296713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UnaOpMask
struct  UnaOpMask_t3221296713 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UnaOpMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnaOpMask_t3221296713, ___value___2)); }
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
#endif // UNAOPMASK_T3221296713_H
#ifndef UNARYOPERATORSIGNATUREFINDRESULT_T444379971_H
#define UNARYOPERATORSIGNATUREFINDRESULT_T444379971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.UnaryOperatorSignatureFindResult
struct  UnaryOperatorSignatureFindResult_t444379971 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.UnaryOperatorSignatureFindResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnaryOperatorSignatureFindResult_t444379971, ___value___2)); }
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
#endif // UNARYOPERATORSIGNATUREFINDRESULT_T444379971_H
#ifndef SYMBMASK_T_T846288049_H
#define SYMBMASK_T_T846288049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t
struct  symbmask_t_t846288049 
{
public:
	// System.Int64 Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(symbmask_t_t846288049, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBMASK_T_T846288049_H
#ifndef OPERATORKIND_T1066192733_H
#define OPERATORKIND_T1066192733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.OperatorKind
struct  OperatorKind_t1066192733 
{
public:
	// System.UInt32 Microsoft.CSharp.RuntimeBinder.Syntax.OperatorKind::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperatorKind_t1066192733, ___value___2)); }
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
#endif // OPERATORKIND_T1066192733_H
#ifndef PREDEFINEDNAME_T2145443036_H
#define PREDEFINEDNAME_T2145443036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedName
struct  PredefinedName_t2145443036 
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PredefinedName_t2145443036, ___value___2)); }
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
#endif // PREDEFINEDNAME_T2145443036_H
#ifndef PREDEFINEDTYPE_T3972076113_H
#define PREDEFINEDTYPE_T3972076113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedType
struct  PredefinedType_t3972076113 
{
public:
	// System.UInt32 Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PredefinedType_t3972076113, ___value___2)); }
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
#endif // PREDEFINEDTYPE_T3972076113_H
#ifndef TOKENKIND_T2527706457_H
#define TOKENKIND_T2527706457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Syntax.TokenKind
struct  TokenKind_t2527706457 
{
public:
	// System.Byte Microsoft.CSharp.RuntimeBinder.Syntax.TokenKind::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenKind_t2527706457, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENKIND_T2527706457_H
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
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef CALLINGCONVENTIONS_T2253234531_H
#define CALLINGCONVENTIONS_T2253234531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2253234531 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t2253234531, ___value___2)); }
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
#endif // CALLINGCONVENTIONS_T2253234531_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef GENERICPARAMETERATTRIBUTES_T1159165531_H
#define GENERICPARAMETERATTRIBUTES_T1159165531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.GenericParameterAttributes
struct  GenericParameterAttributes_t1159165531 
{
public:
	// System.Int32 System.Reflection.GenericParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GenericParameterAttributes_t1159165531, ___value___2)); }
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
#endif // GENERICPARAMETERATTRIBUTES_T1159165531_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___2)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef DATETIMECONSTANTATTRIBUTE_T375130962_H
#define DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t375130962  : public CustomConstantAttribute_t1681301359
{
public:
	// System.DateTime System.Runtime.CompilerServices.DateTimeConstantAttribute::date
	DateTime_t3738529785  ___date_0;

public:
	inline static int32_t get_offset_of_date_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t375130962, ___date_0)); }
	inline DateTime_t3738529785  get_date_0() const { return ___date_0; }
	inline DateTime_t3738529785 * get_address_of_date_0() { return &___date_0; }
	inline void set_date_0(DateTime_t3738529785  value)
	{
		___date_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifndef DECIMALCONSTANTATTRIBUTE_T1976047975_H
#define DECIMALCONSTANTATTRIBUTE_T1976047975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t1976047975  : public Attribute_t861562559
{
public:
	// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::dec
	Decimal_t2948259380  ___dec_0;

public:
	inline static int32_t get_offset_of_dec_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1976047975, ___dec_0)); }
	inline Decimal_t2948259380  get_dec_0() const { return ___dec_0; }
	inline Decimal_t2948259380 * get_address_of_dec_0() { return &___dec_0; }
	inline void set_dec_0(Decimal_t2948259380  value)
	{
		___dec_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T1976047975_H
#ifndef UNMANAGEDTYPE_T523127242_H
#define UNMANAGEDTYPE_T523127242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t523127242 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnmanagedType_t523127242, ___value___2)); }
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
#endif // UNMANAGEDTYPE_T523127242_H
#ifndef VARENUM_T1077183404_H
#define VARENUM_T1077183404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t1077183404 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VarEnum_t1077183404, ___value___2)); }
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
#endif // VARENUM_T1077183404_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___2)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef CTYPE_T1813387470_H
#define CTYPE_T1813387470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.CType
struct  CType_t1813387470  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeKind Microsoft.CSharp.RuntimeBinder.Semantics.CType::_typeKind
	int32_t ____typeKind_0;
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Semantics.CType::_pName
	Name_t658191338 * ____pName_1;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.CType::_fHasErrors
	bool ____fHasErrors_2;
	// System.Type Microsoft.CSharp.RuntimeBinder.Semantics.CType::_associatedSystemType
	Type_t * ____associatedSystemType_3;

public:
	inline static int32_t get_offset_of__typeKind_0() { return static_cast<int32_t>(offsetof(CType_t1813387470, ____typeKind_0)); }
	inline int32_t get__typeKind_0() const { return ____typeKind_0; }
	inline int32_t* get_address_of__typeKind_0() { return &____typeKind_0; }
	inline void set__typeKind_0(int32_t value)
	{
		____typeKind_0 = value;
	}

	inline static int32_t get_offset_of__pName_1() { return static_cast<int32_t>(offsetof(CType_t1813387470, ____pName_1)); }
	inline Name_t658191338 * get__pName_1() const { return ____pName_1; }
	inline Name_t658191338 ** get_address_of__pName_1() { return &____pName_1; }
	inline void set__pName_1(Name_t658191338 * value)
	{
		____pName_1 = value;
		Il2CppCodeGenWriteBarrier((&____pName_1), value);
	}

	inline static int32_t get_offset_of__fHasErrors_2() { return static_cast<int32_t>(offsetof(CType_t1813387470, ____fHasErrors_2)); }
	inline bool get__fHasErrors_2() const { return ____fHasErrors_2; }
	inline bool* get_address_of__fHasErrors_2() { return &____fHasErrors_2; }
	inline void set__fHasErrors_2(bool value)
	{
		____fHasErrors_2 = value;
	}

	inline static int32_t get_offset_of__associatedSystemType_3() { return static_cast<int32_t>(offsetof(CType_t1813387470, ____associatedSystemType_3)); }
	inline Type_t * get__associatedSystemType_3() const { return ____associatedSystemType_3; }
	inline Type_t ** get_address_of__associatedSystemType_3() { return &____associatedSystemType_3; }
	inline void set__associatedSystemType_3(Type_t * value)
	{
		____associatedSystemType_3 = value;
		Il2CppCodeGenWriteBarrier((&____associatedSystemType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CTYPE_T1813387470_H
#ifndef EXPR_T1372271848_H
#define EXPR_T1372271848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.Expr
struct  Expr_t1372271848  : public RuntimeObject
{
public:
	// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<RuntimeObject>k__BackingField
	RuntimeObject * ___U3CRuntimeObjectU3Ek__BackingField_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<RuntimeObjectActualType>k__BackingField
	CType_t1813387470 * ___U3CRuntimeObjectActualTypeU3Ek__BackingField_1;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ExpressionKind Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<Kind>k__BackingField
	int32_t ___U3CKindU3Ek__BackingField_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.EXPRFLAG Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<Flags>k__BackingField
	int32_t ___U3CFlagsU3Ek__BackingField_3;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<IsOptionalArgument>k__BackingField
	bool ___U3CIsOptionalArgumentU3Ek__BackingField_4;
	// System.String Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<ErrorString>k__BackingField
	String_t* ___U3CErrorStringU3Ek__BackingField_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<Type>k__BackingField
	CType_t1813387470 * ___U3CTypeU3Ek__BackingField_6;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.Expr::<HasError>k__BackingField
	bool ___U3CHasErrorU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CRuntimeObjectU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CRuntimeObjectU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CRuntimeObjectU3Ek__BackingField_0() const { return ___U3CRuntimeObjectU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CRuntimeObjectU3Ek__BackingField_0() { return &___U3CRuntimeObjectU3Ek__BackingField_0; }
	inline void set_U3CRuntimeObjectU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CRuntimeObjectU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRuntimeObjectU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CRuntimeObjectActualTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CRuntimeObjectActualTypeU3Ek__BackingField_1)); }
	inline CType_t1813387470 * get_U3CRuntimeObjectActualTypeU3Ek__BackingField_1() const { return ___U3CRuntimeObjectActualTypeU3Ek__BackingField_1; }
	inline CType_t1813387470 ** get_address_of_U3CRuntimeObjectActualTypeU3Ek__BackingField_1() { return &___U3CRuntimeObjectActualTypeU3Ek__BackingField_1; }
	inline void set_U3CRuntimeObjectActualTypeU3Ek__BackingField_1(CType_t1813387470 * value)
	{
		___U3CRuntimeObjectActualTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRuntimeObjectActualTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CKindU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CKindU3Ek__BackingField_2)); }
	inline int32_t get_U3CKindU3Ek__BackingField_2() const { return ___U3CKindU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CKindU3Ek__BackingField_2() { return &___U3CKindU3Ek__BackingField_2; }
	inline void set_U3CKindU3Ek__BackingField_2(int32_t value)
	{
		___U3CKindU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CFlagsU3Ek__BackingField_3)); }
	inline int32_t get_U3CFlagsU3Ek__BackingField_3() const { return ___U3CFlagsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFlagsU3Ek__BackingField_3() { return &___U3CFlagsU3Ek__BackingField_3; }
	inline void set_U3CFlagsU3Ek__BackingField_3(int32_t value)
	{
		___U3CFlagsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsOptionalArgumentU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CIsOptionalArgumentU3Ek__BackingField_4)); }
	inline bool get_U3CIsOptionalArgumentU3Ek__BackingField_4() const { return ___U3CIsOptionalArgumentU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsOptionalArgumentU3Ek__BackingField_4() { return &___U3CIsOptionalArgumentU3Ek__BackingField_4; }
	inline void set_U3CIsOptionalArgumentU3Ek__BackingField_4(bool value)
	{
		___U3CIsOptionalArgumentU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CErrorStringU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CErrorStringU3Ek__BackingField_5)); }
	inline String_t* get_U3CErrorStringU3Ek__BackingField_5() const { return ___U3CErrorStringU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CErrorStringU3Ek__BackingField_5() { return &___U3CErrorStringU3Ek__BackingField_5; }
	inline void set_U3CErrorStringU3Ek__BackingField_5(String_t* value)
	{
		___U3CErrorStringU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CErrorStringU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CTypeU3Ek__BackingField_6)); }
	inline CType_t1813387470 * get_U3CTypeU3Ek__BackingField_6() const { return ___U3CTypeU3Ek__BackingField_6; }
	inline CType_t1813387470 ** get_address_of_U3CTypeU3Ek__BackingField_6() { return &___U3CTypeU3Ek__BackingField_6; }
	inline void set_U3CTypeU3Ek__BackingField_6(CType_t1813387470 * value)
	{
		___U3CTypeU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CHasErrorU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Expr_t1372271848, ___U3CHasErrorU3Ek__BackingField_7)); }
	inline bool get_U3CHasErrorU3Ek__BackingField_7() const { return ___U3CHasErrorU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CHasErrorU3Ek__BackingField_7() { return &___U3CHasErrorU3Ek__BackingField_7; }
	inline void set_U3CHasErrorU3Ek__BackingField_7(bool value)
	{
		___U3CHasErrorU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPR_T1372271848_H
#ifndef MEMBERLOOKUP_T2241756900_H
#define MEMBERLOOKUP_T2241756900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup
struct  MemberLookup_t2241756900  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_pSemanticChecker
	CSemanticChecker_t1535940568 * ____pSemanticChecker_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_pSymbolLoader
	SymbolLoader_t2983914338 * ____pSymbolLoader_1;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_typeSrc
	CType_t1813387470 * ____typeSrc_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Expr Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_obj
	Expr_t1372271848 * ____obj_3;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_typeQual
	CType_t1813387470 * ____typeQual_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_symWhere
	ParentSymbol_t84807579 * ____symWhere_5;
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_name
	Name_t658191338 * ____name_6;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_arity
	int32_t ____arity_7;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MemLookFlags Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_flags
	uint32_t ____flags_8;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CMemberLookupResults Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_results
	CMemberLookupResults_t1179468233 * ____results_9;
	// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_rgtypeStart
	List_1_t2039341745 * ____rgtypeStart_10;
	// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_prgtype
	List_1_t2039341745 * ____prgtype_11;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_csym
	int32_t ____csym_12;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtFirst
	SymWithType_t1275985997 * ____swtFirst_13;
	// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.MethPropWithType> Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_methPropWithTypeList
	List_1_t132217487 * ____methPropWithTypeList_14;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtAmbig
	SymWithType_t1275985997 * ____swtAmbig_15;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtInaccess
	SymWithType_t1275985997 * ____swtInaccess_16;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtBad
	SymWithType_t1275985997 * ____swtBad_17;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtBogus
	SymWithType_t1275985997 * ____swtBogus_18;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtBadArity
	SymWithType_t1275985997 * ____swtBadArity_19;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtAmbigWarn
	SymWithType_t1275985997 * ____swtAmbigWarn_20;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_swtOverride
	SymWithType_t1275985997 * ____swtOverride_21;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::_fMulti
	bool ____fMulti_22;

public:
	inline static int32_t get_offset_of__pSemanticChecker_0() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____pSemanticChecker_0)); }
	inline CSemanticChecker_t1535940568 * get__pSemanticChecker_0() const { return ____pSemanticChecker_0; }
	inline CSemanticChecker_t1535940568 ** get_address_of__pSemanticChecker_0() { return &____pSemanticChecker_0; }
	inline void set__pSemanticChecker_0(CSemanticChecker_t1535940568 * value)
	{
		____pSemanticChecker_0 = value;
		Il2CppCodeGenWriteBarrier((&____pSemanticChecker_0), value);
	}

	inline static int32_t get_offset_of__pSymbolLoader_1() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____pSymbolLoader_1)); }
	inline SymbolLoader_t2983914338 * get__pSymbolLoader_1() const { return ____pSymbolLoader_1; }
	inline SymbolLoader_t2983914338 ** get_address_of__pSymbolLoader_1() { return &____pSymbolLoader_1; }
	inline void set__pSymbolLoader_1(SymbolLoader_t2983914338 * value)
	{
		____pSymbolLoader_1 = value;
		Il2CppCodeGenWriteBarrier((&____pSymbolLoader_1), value);
	}

	inline static int32_t get_offset_of__typeSrc_2() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____typeSrc_2)); }
	inline CType_t1813387470 * get__typeSrc_2() const { return ____typeSrc_2; }
	inline CType_t1813387470 ** get_address_of__typeSrc_2() { return &____typeSrc_2; }
	inline void set__typeSrc_2(CType_t1813387470 * value)
	{
		____typeSrc_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeSrc_2), value);
	}

	inline static int32_t get_offset_of__obj_3() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____obj_3)); }
	inline Expr_t1372271848 * get__obj_3() const { return ____obj_3; }
	inline Expr_t1372271848 ** get_address_of__obj_3() { return &____obj_3; }
	inline void set__obj_3(Expr_t1372271848 * value)
	{
		____obj_3 = value;
		Il2CppCodeGenWriteBarrier((&____obj_3), value);
	}

	inline static int32_t get_offset_of__typeQual_4() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____typeQual_4)); }
	inline CType_t1813387470 * get__typeQual_4() const { return ____typeQual_4; }
	inline CType_t1813387470 ** get_address_of__typeQual_4() { return &____typeQual_4; }
	inline void set__typeQual_4(CType_t1813387470 * value)
	{
		____typeQual_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeQual_4), value);
	}

	inline static int32_t get_offset_of__symWhere_5() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____symWhere_5)); }
	inline ParentSymbol_t84807579 * get__symWhere_5() const { return ____symWhere_5; }
	inline ParentSymbol_t84807579 ** get_address_of__symWhere_5() { return &____symWhere_5; }
	inline void set__symWhere_5(ParentSymbol_t84807579 * value)
	{
		____symWhere_5 = value;
		Il2CppCodeGenWriteBarrier((&____symWhere_5), value);
	}

	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____name_6)); }
	inline Name_t658191338 * get__name_6() const { return ____name_6; }
	inline Name_t658191338 ** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(Name_t658191338 * value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((&____name_6), value);
	}

	inline static int32_t get_offset_of__arity_7() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____arity_7)); }
	inline int32_t get__arity_7() const { return ____arity_7; }
	inline int32_t* get_address_of__arity_7() { return &____arity_7; }
	inline void set__arity_7(int32_t value)
	{
		____arity_7 = value;
	}

	inline static int32_t get_offset_of__flags_8() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____flags_8)); }
	inline uint32_t get__flags_8() const { return ____flags_8; }
	inline uint32_t* get_address_of__flags_8() { return &____flags_8; }
	inline void set__flags_8(uint32_t value)
	{
		____flags_8 = value;
	}

	inline static int32_t get_offset_of__results_9() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____results_9)); }
	inline CMemberLookupResults_t1179468233 * get__results_9() const { return ____results_9; }
	inline CMemberLookupResults_t1179468233 ** get_address_of__results_9() { return &____results_9; }
	inline void set__results_9(CMemberLookupResults_t1179468233 * value)
	{
		____results_9 = value;
		Il2CppCodeGenWriteBarrier((&____results_9), value);
	}

	inline static int32_t get_offset_of__rgtypeStart_10() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____rgtypeStart_10)); }
	inline List_1_t2039341745 * get__rgtypeStart_10() const { return ____rgtypeStart_10; }
	inline List_1_t2039341745 ** get_address_of__rgtypeStart_10() { return &____rgtypeStart_10; }
	inline void set__rgtypeStart_10(List_1_t2039341745 * value)
	{
		____rgtypeStart_10 = value;
		Il2CppCodeGenWriteBarrier((&____rgtypeStart_10), value);
	}

	inline static int32_t get_offset_of__prgtype_11() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____prgtype_11)); }
	inline List_1_t2039341745 * get__prgtype_11() const { return ____prgtype_11; }
	inline List_1_t2039341745 ** get_address_of__prgtype_11() { return &____prgtype_11; }
	inline void set__prgtype_11(List_1_t2039341745 * value)
	{
		____prgtype_11 = value;
		Il2CppCodeGenWriteBarrier((&____prgtype_11), value);
	}

	inline static int32_t get_offset_of__csym_12() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____csym_12)); }
	inline int32_t get__csym_12() const { return ____csym_12; }
	inline int32_t* get_address_of__csym_12() { return &____csym_12; }
	inline void set__csym_12(int32_t value)
	{
		____csym_12 = value;
	}

	inline static int32_t get_offset_of__swtFirst_13() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtFirst_13)); }
	inline SymWithType_t1275985997 * get__swtFirst_13() const { return ____swtFirst_13; }
	inline SymWithType_t1275985997 ** get_address_of__swtFirst_13() { return &____swtFirst_13; }
	inline void set__swtFirst_13(SymWithType_t1275985997 * value)
	{
		____swtFirst_13 = value;
		Il2CppCodeGenWriteBarrier((&____swtFirst_13), value);
	}

	inline static int32_t get_offset_of__methPropWithTypeList_14() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____methPropWithTypeList_14)); }
	inline List_1_t132217487 * get__methPropWithTypeList_14() const { return ____methPropWithTypeList_14; }
	inline List_1_t132217487 ** get_address_of__methPropWithTypeList_14() { return &____methPropWithTypeList_14; }
	inline void set__methPropWithTypeList_14(List_1_t132217487 * value)
	{
		____methPropWithTypeList_14 = value;
		Il2CppCodeGenWriteBarrier((&____methPropWithTypeList_14), value);
	}

	inline static int32_t get_offset_of__swtAmbig_15() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtAmbig_15)); }
	inline SymWithType_t1275985997 * get__swtAmbig_15() const { return ____swtAmbig_15; }
	inline SymWithType_t1275985997 ** get_address_of__swtAmbig_15() { return &____swtAmbig_15; }
	inline void set__swtAmbig_15(SymWithType_t1275985997 * value)
	{
		____swtAmbig_15 = value;
		Il2CppCodeGenWriteBarrier((&____swtAmbig_15), value);
	}

	inline static int32_t get_offset_of__swtInaccess_16() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtInaccess_16)); }
	inline SymWithType_t1275985997 * get__swtInaccess_16() const { return ____swtInaccess_16; }
	inline SymWithType_t1275985997 ** get_address_of__swtInaccess_16() { return &____swtInaccess_16; }
	inline void set__swtInaccess_16(SymWithType_t1275985997 * value)
	{
		____swtInaccess_16 = value;
		Il2CppCodeGenWriteBarrier((&____swtInaccess_16), value);
	}

	inline static int32_t get_offset_of__swtBad_17() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtBad_17)); }
	inline SymWithType_t1275985997 * get__swtBad_17() const { return ____swtBad_17; }
	inline SymWithType_t1275985997 ** get_address_of__swtBad_17() { return &____swtBad_17; }
	inline void set__swtBad_17(SymWithType_t1275985997 * value)
	{
		____swtBad_17 = value;
		Il2CppCodeGenWriteBarrier((&____swtBad_17), value);
	}

	inline static int32_t get_offset_of__swtBogus_18() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtBogus_18)); }
	inline SymWithType_t1275985997 * get__swtBogus_18() const { return ____swtBogus_18; }
	inline SymWithType_t1275985997 ** get_address_of__swtBogus_18() { return &____swtBogus_18; }
	inline void set__swtBogus_18(SymWithType_t1275985997 * value)
	{
		____swtBogus_18 = value;
		Il2CppCodeGenWriteBarrier((&____swtBogus_18), value);
	}

	inline static int32_t get_offset_of__swtBadArity_19() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtBadArity_19)); }
	inline SymWithType_t1275985997 * get__swtBadArity_19() const { return ____swtBadArity_19; }
	inline SymWithType_t1275985997 ** get_address_of__swtBadArity_19() { return &____swtBadArity_19; }
	inline void set__swtBadArity_19(SymWithType_t1275985997 * value)
	{
		____swtBadArity_19 = value;
		Il2CppCodeGenWriteBarrier((&____swtBadArity_19), value);
	}

	inline static int32_t get_offset_of__swtAmbigWarn_20() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtAmbigWarn_20)); }
	inline SymWithType_t1275985997 * get__swtAmbigWarn_20() const { return ____swtAmbigWarn_20; }
	inline SymWithType_t1275985997 ** get_address_of__swtAmbigWarn_20() { return &____swtAmbigWarn_20; }
	inline void set__swtAmbigWarn_20(SymWithType_t1275985997 * value)
	{
		____swtAmbigWarn_20 = value;
		Il2CppCodeGenWriteBarrier((&____swtAmbigWarn_20), value);
	}

	inline static int32_t get_offset_of__swtOverride_21() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____swtOverride_21)); }
	inline SymWithType_t1275985997 * get__swtOverride_21() const { return ____swtOverride_21; }
	inline SymWithType_t1275985997 ** get_address_of__swtOverride_21() { return &____swtOverride_21; }
	inline void set__swtOverride_21(SymWithType_t1275985997 * value)
	{
		____swtOverride_21 = value;
		Il2CppCodeGenWriteBarrier((&____swtOverride_21), value);
	}

	inline static int32_t get_offset_of__fMulti_22() { return static_cast<int32_t>(offsetof(MemberLookup_t2241756900, ____fMulti_22)); }
	inline bool get__fMulti_22() const { return ____fMulti_22; }
	inline bool* get_address_of__fMulti_22() { return &____fMulti_22; }
	inline void set__fMulti_22(bool value)
	{
		____fMulti_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERLOOKUP_T2241756900_H
#ifndef SYMBOL_T3348236047_H
#define SYMBOL_T3348236047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol
struct  Symbol_t3348236047  : public RuntimeObject
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.SYMKIND Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::_kind
	int32_t ____kind_0;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::_access
	int32_t ____access_1;
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::name
	Name_t658191338 * ___name_2;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::parent
	ParentSymbol_t84807579 * ___parent_3;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::nextChild
	Symbol_t3348236047 * ___nextChild_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::nextSameName
	Symbol_t3348236047 * ___nextSameName_5;

public:
	inline static int32_t get_offset_of__kind_0() { return static_cast<int32_t>(offsetof(Symbol_t3348236047, ____kind_0)); }
	inline int32_t get__kind_0() const { return ____kind_0; }
	inline int32_t* get_address_of__kind_0() { return &____kind_0; }
	inline void set__kind_0(int32_t value)
	{
		____kind_0 = value;
	}

	inline static int32_t get_offset_of__access_1() { return static_cast<int32_t>(offsetof(Symbol_t3348236047, ____access_1)); }
	inline int32_t get__access_1() const { return ____access_1; }
	inline int32_t* get_address_of__access_1() { return &____access_1; }
	inline void set__access_1(int32_t value)
	{
		____access_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Symbol_t3348236047, ___name_2)); }
	inline Name_t658191338 * get_name_2() const { return ___name_2; }
	inline Name_t658191338 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(Name_t658191338 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Symbol_t3348236047, ___parent_3)); }
	inline ParentSymbol_t84807579 * get_parent_3() const { return ___parent_3; }
	inline ParentSymbol_t84807579 ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(ParentSymbol_t84807579 * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((&___parent_3), value);
	}

	inline static int32_t get_offset_of_nextChild_4() { return static_cast<int32_t>(offsetof(Symbol_t3348236047, ___nextChild_4)); }
	inline Symbol_t3348236047 * get_nextChild_4() const { return ___nextChild_4; }
	inline Symbol_t3348236047 ** get_address_of_nextChild_4() { return &___nextChild_4; }
	inline void set_nextChild_4(Symbol_t3348236047 * value)
	{
		___nextChild_4 = value;
		Il2CppCodeGenWriteBarrier((&___nextChild_4), value);
	}

	inline static int32_t get_offset_of_nextSameName_5() { return static_cast<int32_t>(offsetof(Symbol_t3348236047, ___nextSameName_5)); }
	inline Symbol_t3348236047 * get_nextSameName_5() const { return ___nextSameName_5; }
	inline Symbol_t3348236047 ** get_address_of_nextSameName_5() { return &___nextSameName_5; }
	inline void set_nextSameName_5(Symbol_t3348236047 * value)
	{
		___nextSameName_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSameName_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOL_T3348236047_H
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
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t3522571978 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline MarshalAsAttribute_t3522571978 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t3522571978 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t3522571978 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t3522571978 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t3522571978 * ___marshalAs_6;
};
#endif // PARAMETERINFO_T1861056598_H
#ifndef MARSHALASATTRIBUTE_T3522571978_H
#define MARSHALASATTRIBUTE_T3522571978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t3522571978  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_0;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_1;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_2;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::SafeArrayUserDefinedSubType
	Type_t * ___SafeArrayUserDefinedSubType_3;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_4;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_5;
	// System.Runtime.InteropServices.VarEnum System.Runtime.InteropServices.MarshalAsAttribute::SafeArraySubType
	int32_t ___SafeArraySubType_6;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_7;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::IidParameterIndex
	int32_t ___IidParameterIndex_8;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_9;

public:
	inline static int32_t get_offset_of_MarshalCookie_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___MarshalCookie_0)); }
	inline String_t* get_MarshalCookie_0() const { return ___MarshalCookie_0; }
	inline String_t** get_address_of_MarshalCookie_0() { return &___MarshalCookie_0; }
	inline void set_MarshalCookie_0(String_t* value)
	{
		___MarshalCookie_0 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_0), value);
	}

	inline static int32_t get_offset_of_MarshalType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___MarshalType_1)); }
	inline String_t* get_MarshalType_1() const { return ___MarshalType_1; }
	inline String_t** get_address_of_MarshalType_1() { return &___MarshalType_1; }
	inline void set_MarshalType_1(String_t* value)
	{
		___MarshalType_1 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_1), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___MarshalTypeRef_2)); }
	inline Type_t * get_MarshalTypeRef_2() const { return ___MarshalTypeRef_2; }
	inline Type_t ** get_address_of_MarshalTypeRef_2() { return &___MarshalTypeRef_2; }
	inline void set_MarshalTypeRef_2(Type_t * value)
	{
		___MarshalTypeRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_2), value);
	}

	inline static int32_t get_offset_of_SafeArrayUserDefinedSubType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SafeArrayUserDefinedSubType_3)); }
	inline Type_t * get_SafeArrayUserDefinedSubType_3() const { return ___SafeArrayUserDefinedSubType_3; }
	inline Type_t ** get_address_of_SafeArrayUserDefinedSubType_3() { return &___SafeArrayUserDefinedSubType_3; }
	inline void set_SafeArrayUserDefinedSubType_3(Type_t * value)
	{
		___SafeArrayUserDefinedSubType_3 = value;
		Il2CppCodeGenWriteBarrier((&___SafeArrayUserDefinedSubType_3), value);
	}

	inline static int32_t get_offset_of_utype_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___utype_4)); }
	inline int32_t get_utype_4() const { return ___utype_4; }
	inline int32_t* get_address_of_utype_4() { return &___utype_4; }
	inline void set_utype_4(int32_t value)
	{
		___utype_4 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___ArraySubType_5)); }
	inline int32_t get_ArraySubType_5() const { return ___ArraySubType_5; }
	inline int32_t* get_address_of_ArraySubType_5() { return &___ArraySubType_5; }
	inline void set_ArraySubType_5(int32_t value)
	{
		___ArraySubType_5 = value;
	}

	inline static int32_t get_offset_of_SafeArraySubType_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SafeArraySubType_6)); }
	inline int32_t get_SafeArraySubType_6() const { return ___SafeArraySubType_6; }
	inline int32_t* get_address_of_SafeArraySubType_6() { return &___SafeArraySubType_6; }
	inline void set_SafeArraySubType_6(int32_t value)
	{
		___SafeArraySubType_6 = value;
	}

	inline static int32_t get_offset_of_SizeConst_7() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SizeConst_7)); }
	inline int32_t get_SizeConst_7() const { return ___SizeConst_7; }
	inline int32_t* get_address_of_SizeConst_7() { return &___SizeConst_7; }
	inline void set_SizeConst_7(int32_t value)
	{
		___SizeConst_7 = value;
	}

	inline static int32_t get_offset_of_IidParameterIndex_8() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___IidParameterIndex_8)); }
	inline int32_t get_IidParameterIndex_8() const { return ___IidParameterIndex_8; }
	inline int32_t* get_address_of_IidParameterIndex_8() { return &___IidParameterIndex_8; }
	inline void set_IidParameterIndex_8(int32_t value)
	{
		___IidParameterIndex_8 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_9() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3522571978, ___SizeParamIndex_9)); }
	inline int16_t get_SizeParamIndex_9() const { return ___SizeParamIndex_9; }
	inline int16_t* get_address_of_SizeParamIndex_9() { return &___SizeParamIndex_9; }
	inline void set_SizeParamIndex_9(int16_t value)
	{
		___SizeParamIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T3522571978_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef AGGREGATETYPE_T567267003_H
#define AGGREGATETYPE_T567267003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType
struct  AggregateType_t567267003  : public CType_t1813387470
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::_pTypeArgsThis
	TypeArray_t2467755373 * ____pTypeArgsThis_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::_pTypeArgsAll
	TypeArray_t2467755373 * ____pTypeArgsAll_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::_pOwningAggregate
	AggregateSymbol_t3146081271 * ____pOwningAggregate_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::_baseType
	AggregateType_t567267003 * ____baseType_7;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::_ifacesAll
	TypeArray_t2467755373 * ____ifacesAll_8;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::_winrtifacesAll
	TypeArray_t2467755373 * ____winrtifacesAll_9;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::fConstraintsChecked
	bool ___fConstraintsChecked_10;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::fConstraintError
	bool ___fConstraintError_11;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::fAllHidden
	bool ___fAllHidden_12;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::fDiffHidden
	bool ___fDiffHidden_13;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::outerType
	AggregateType_t567267003 * ___outerType_14;

public:
	inline static int32_t get_offset_of__pTypeArgsThis_4() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ____pTypeArgsThis_4)); }
	inline TypeArray_t2467755373 * get__pTypeArgsThis_4() const { return ____pTypeArgsThis_4; }
	inline TypeArray_t2467755373 ** get_address_of__pTypeArgsThis_4() { return &____pTypeArgsThis_4; }
	inline void set__pTypeArgsThis_4(TypeArray_t2467755373 * value)
	{
		____pTypeArgsThis_4 = value;
		Il2CppCodeGenWriteBarrier((&____pTypeArgsThis_4), value);
	}

	inline static int32_t get_offset_of__pTypeArgsAll_5() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ____pTypeArgsAll_5)); }
	inline TypeArray_t2467755373 * get__pTypeArgsAll_5() const { return ____pTypeArgsAll_5; }
	inline TypeArray_t2467755373 ** get_address_of__pTypeArgsAll_5() { return &____pTypeArgsAll_5; }
	inline void set__pTypeArgsAll_5(TypeArray_t2467755373 * value)
	{
		____pTypeArgsAll_5 = value;
		Il2CppCodeGenWriteBarrier((&____pTypeArgsAll_5), value);
	}

	inline static int32_t get_offset_of__pOwningAggregate_6() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ____pOwningAggregate_6)); }
	inline AggregateSymbol_t3146081271 * get__pOwningAggregate_6() const { return ____pOwningAggregate_6; }
	inline AggregateSymbol_t3146081271 ** get_address_of__pOwningAggregate_6() { return &____pOwningAggregate_6; }
	inline void set__pOwningAggregate_6(AggregateSymbol_t3146081271 * value)
	{
		____pOwningAggregate_6 = value;
		Il2CppCodeGenWriteBarrier((&____pOwningAggregate_6), value);
	}

	inline static int32_t get_offset_of__baseType_7() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ____baseType_7)); }
	inline AggregateType_t567267003 * get__baseType_7() const { return ____baseType_7; }
	inline AggregateType_t567267003 ** get_address_of__baseType_7() { return &____baseType_7; }
	inline void set__baseType_7(AggregateType_t567267003 * value)
	{
		____baseType_7 = value;
		Il2CppCodeGenWriteBarrier((&____baseType_7), value);
	}

	inline static int32_t get_offset_of__ifacesAll_8() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ____ifacesAll_8)); }
	inline TypeArray_t2467755373 * get__ifacesAll_8() const { return ____ifacesAll_8; }
	inline TypeArray_t2467755373 ** get_address_of__ifacesAll_8() { return &____ifacesAll_8; }
	inline void set__ifacesAll_8(TypeArray_t2467755373 * value)
	{
		____ifacesAll_8 = value;
		Il2CppCodeGenWriteBarrier((&____ifacesAll_8), value);
	}

	inline static int32_t get_offset_of__winrtifacesAll_9() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ____winrtifacesAll_9)); }
	inline TypeArray_t2467755373 * get__winrtifacesAll_9() const { return ____winrtifacesAll_9; }
	inline TypeArray_t2467755373 ** get_address_of__winrtifacesAll_9() { return &____winrtifacesAll_9; }
	inline void set__winrtifacesAll_9(TypeArray_t2467755373 * value)
	{
		____winrtifacesAll_9 = value;
		Il2CppCodeGenWriteBarrier((&____winrtifacesAll_9), value);
	}

	inline static int32_t get_offset_of_fConstraintsChecked_10() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ___fConstraintsChecked_10)); }
	inline bool get_fConstraintsChecked_10() const { return ___fConstraintsChecked_10; }
	inline bool* get_address_of_fConstraintsChecked_10() { return &___fConstraintsChecked_10; }
	inline void set_fConstraintsChecked_10(bool value)
	{
		___fConstraintsChecked_10 = value;
	}

	inline static int32_t get_offset_of_fConstraintError_11() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ___fConstraintError_11)); }
	inline bool get_fConstraintError_11() const { return ___fConstraintError_11; }
	inline bool* get_address_of_fConstraintError_11() { return &___fConstraintError_11; }
	inline void set_fConstraintError_11(bool value)
	{
		___fConstraintError_11 = value;
	}

	inline static int32_t get_offset_of_fAllHidden_12() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ___fAllHidden_12)); }
	inline bool get_fAllHidden_12() const { return ___fAllHidden_12; }
	inline bool* get_address_of_fAllHidden_12() { return &___fAllHidden_12; }
	inline void set_fAllHidden_12(bool value)
	{
		___fAllHidden_12 = value;
	}

	inline static int32_t get_offset_of_fDiffHidden_13() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ___fDiffHidden_13)); }
	inline bool get_fDiffHidden_13() const { return ___fDiffHidden_13; }
	inline bool* get_address_of_fDiffHidden_13() { return &___fDiffHidden_13; }
	inline void set_fDiffHidden_13(bool value)
	{
		___fDiffHidden_13 = value;
	}

	inline static int32_t get_offset_of_outerType_14() { return static_cast<int32_t>(offsetof(AggregateType_t567267003, ___outerType_14)); }
	inline AggregateType_t567267003 * get_outerType_14() const { return ___outerType_14; }
	inline AggregateType_t567267003 ** get_address_of_outerType_14() { return &___outerType_14; }
	inline void set_outerType_14(AggregateType_t567267003 * value)
	{
		___outerType_14 = value;
		Il2CppCodeGenWriteBarrier((&___outerType_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATETYPE_T567267003_H
#ifndef ARGUMENTLISTTYPE_T3380992639_H
#define ARGUMENTLISTTYPE_T3380992639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ArgumentListType
struct  ArgumentListType_t3380992639  : public CType_t1813387470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTLISTTYPE_T3380992639_H
#ifndef ARRAYTYPE_T406051177_H
#define ARRAYTYPE_T406051177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType
struct  ArrayType_t406051177  : public CType_t1813387470
{
public:
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType::rank
	int32_t ___rank_4;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType::<IsSZArray>k__BackingField
	bool ___U3CIsSZArrayU3Ek__BackingField_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType::_pElementType
	CType_t1813387470 * ____pElementType_6;

public:
	inline static int32_t get_offset_of_rank_4() { return static_cast<int32_t>(offsetof(ArrayType_t406051177, ___rank_4)); }
	inline int32_t get_rank_4() const { return ___rank_4; }
	inline int32_t* get_address_of_rank_4() { return &___rank_4; }
	inline void set_rank_4(int32_t value)
	{
		___rank_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsSZArrayU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ArrayType_t406051177, ___U3CIsSZArrayU3Ek__BackingField_5)); }
	inline bool get_U3CIsSZArrayU3Ek__BackingField_5() const { return ___U3CIsSZArrayU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsSZArrayU3Ek__BackingField_5() { return &___U3CIsSZArrayU3Ek__BackingField_5; }
	inline void set_U3CIsSZArrayU3Ek__BackingField_5(bool value)
	{
		___U3CIsSZArrayU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of__pElementType_6() { return static_cast<int32_t>(offsetof(ArrayType_t406051177, ____pElementType_6)); }
	inline CType_t1813387470 * get__pElementType_6() const { return ____pElementType_6; }
	inline CType_t1813387470 ** get_address_of__pElementType_6() { return &____pElementType_6; }
	inline void set__pElementType_6(CType_t1813387470 * value)
	{
		____pElementType_6 = value;
		Il2CppCodeGenWriteBarrier((&____pElementType_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPE_T406051177_H
#ifndef ERRORTYPE_T685300011_H
#define ERRORTYPE_T685300011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType
struct  ErrorType_t685300011  : public CType_t1813387470
{
public:
	// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType::nameText
	Name_t658191338 * ___nameText_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType::typeArgs
	TypeArray_t2467755373 * ___typeArgs_5;

public:
	inline static int32_t get_offset_of_nameText_4() { return static_cast<int32_t>(offsetof(ErrorType_t685300011, ___nameText_4)); }
	inline Name_t658191338 * get_nameText_4() const { return ___nameText_4; }
	inline Name_t658191338 ** get_address_of_nameText_4() { return &___nameText_4; }
	inline void set_nameText_4(Name_t658191338 * value)
	{
		___nameText_4 = value;
		Il2CppCodeGenWriteBarrier((&___nameText_4), value);
	}

	inline static int32_t get_offset_of_typeArgs_5() { return static_cast<int32_t>(offsetof(ErrorType_t685300011, ___typeArgs_5)); }
	inline TypeArray_t2467755373 * get_typeArgs_5() const { return ___typeArgs_5; }
	inline TypeArray_t2467755373 ** get_address_of_typeArgs_5() { return &___typeArgs_5; }
	inline void set_typeArgs_5(TypeArray_t2467755373 * value)
	{
		___typeArgs_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeArgs_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORTYPE_T685300011_H
#ifndef EVENTSYMBOL_T2632276330_H
#define EVENTSYMBOL_T2632276330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol
struct  EventSymbol_t2632276330  : public Symbol_t3348236047
{
public:
	// System.Reflection.EventInfo Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::AssociatedEventInfo
	EventInfo_t * ___AssociatedEventInfo_6;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::isStatic
	bool ___isStatic_7;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::isOverride
	bool ___isOverride_8;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::type
	CType_t1813387470 * ___type_9;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::methAdd
	MethodSymbol_t394006151 * ___methAdd_10;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::methRemove
	MethodSymbol_t394006151 * ___methRemove_11;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::<IsWindowsRuntimeEvent>k__BackingField
	bool ___U3CIsWindowsRuntimeEventU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_AssociatedEventInfo_6() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___AssociatedEventInfo_6)); }
	inline EventInfo_t * get_AssociatedEventInfo_6() const { return ___AssociatedEventInfo_6; }
	inline EventInfo_t ** get_address_of_AssociatedEventInfo_6() { return &___AssociatedEventInfo_6; }
	inline void set_AssociatedEventInfo_6(EventInfo_t * value)
	{
		___AssociatedEventInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___AssociatedEventInfo_6), value);
	}

	inline static int32_t get_offset_of_isStatic_7() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___isStatic_7)); }
	inline bool get_isStatic_7() const { return ___isStatic_7; }
	inline bool* get_address_of_isStatic_7() { return &___isStatic_7; }
	inline void set_isStatic_7(bool value)
	{
		___isStatic_7 = value;
	}

	inline static int32_t get_offset_of_isOverride_8() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___isOverride_8)); }
	inline bool get_isOverride_8() const { return ___isOverride_8; }
	inline bool* get_address_of_isOverride_8() { return &___isOverride_8; }
	inline void set_isOverride_8(bool value)
	{
		___isOverride_8 = value;
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___type_9)); }
	inline CType_t1813387470 * get_type_9() const { return ___type_9; }
	inline CType_t1813387470 ** get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(CType_t1813387470 * value)
	{
		___type_9 = value;
		Il2CppCodeGenWriteBarrier((&___type_9), value);
	}

	inline static int32_t get_offset_of_methAdd_10() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___methAdd_10)); }
	inline MethodSymbol_t394006151 * get_methAdd_10() const { return ___methAdd_10; }
	inline MethodSymbol_t394006151 ** get_address_of_methAdd_10() { return &___methAdd_10; }
	inline void set_methAdd_10(MethodSymbol_t394006151 * value)
	{
		___methAdd_10 = value;
		Il2CppCodeGenWriteBarrier((&___methAdd_10), value);
	}

	inline static int32_t get_offset_of_methRemove_11() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___methRemove_11)); }
	inline MethodSymbol_t394006151 * get_methRemove_11() const { return ___methRemove_11; }
	inline MethodSymbol_t394006151 ** get_address_of_methRemove_11() { return &___methRemove_11; }
	inline void set_methRemove_11(MethodSymbol_t394006151 * value)
	{
		___methRemove_11 = value;
		Il2CppCodeGenWriteBarrier((&___methRemove_11), value);
	}

	inline static int32_t get_offset_of_U3CIsWindowsRuntimeEventU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(EventSymbol_t2632276330, ___U3CIsWindowsRuntimeEventU3Ek__BackingField_12)); }
	inline bool get_U3CIsWindowsRuntimeEventU3Ek__BackingField_12() const { return ___U3CIsWindowsRuntimeEventU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsWindowsRuntimeEventU3Ek__BackingField_12() { return &___U3CIsWindowsRuntimeEventU3Ek__BackingField_12; }
	inline void set_U3CIsWindowsRuntimeEventU3Ek__BackingField_12(bool value)
	{
		___U3CIsWindowsRuntimeEventU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYMBOL_T2632276330_H
#ifndef NULLABLETYPE_T2956603701_H
#define NULLABLETYPE_T2956603701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.NullableType
struct  NullableType_t2956603701  : public CType_t1813387470
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.NullableType::ats
	AggregateType_t567267003 * ___ats_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR Microsoft.CSharp.RuntimeBinder.Semantics.NullableType::symmgr
	BSYMMGR_t2938027401 * ___symmgr_5;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager Microsoft.CSharp.RuntimeBinder.Semantics.NullableType::typeManager
	TypeManager_t4140799422 * ___typeManager_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.NullableType::UnderlyingType
	CType_t1813387470 * ___UnderlyingType_7;

public:
	inline static int32_t get_offset_of_ats_4() { return static_cast<int32_t>(offsetof(NullableType_t2956603701, ___ats_4)); }
	inline AggregateType_t567267003 * get_ats_4() const { return ___ats_4; }
	inline AggregateType_t567267003 ** get_address_of_ats_4() { return &___ats_4; }
	inline void set_ats_4(AggregateType_t567267003 * value)
	{
		___ats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ats_4), value);
	}

	inline static int32_t get_offset_of_symmgr_5() { return static_cast<int32_t>(offsetof(NullableType_t2956603701, ___symmgr_5)); }
	inline BSYMMGR_t2938027401 * get_symmgr_5() const { return ___symmgr_5; }
	inline BSYMMGR_t2938027401 ** get_address_of_symmgr_5() { return &___symmgr_5; }
	inline void set_symmgr_5(BSYMMGR_t2938027401 * value)
	{
		___symmgr_5 = value;
		Il2CppCodeGenWriteBarrier((&___symmgr_5), value);
	}

	inline static int32_t get_offset_of_typeManager_6() { return static_cast<int32_t>(offsetof(NullableType_t2956603701, ___typeManager_6)); }
	inline TypeManager_t4140799422 * get_typeManager_6() const { return ___typeManager_6; }
	inline TypeManager_t4140799422 ** get_address_of_typeManager_6() { return &___typeManager_6; }
	inline void set_typeManager_6(TypeManager_t4140799422 * value)
	{
		___typeManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___typeManager_6), value);
	}

	inline static int32_t get_offset_of_UnderlyingType_7() { return static_cast<int32_t>(offsetof(NullableType_t2956603701, ___UnderlyingType_7)); }
	inline CType_t1813387470 * get_UnderlyingType_7() const { return ___UnderlyingType_7; }
	inline CType_t1813387470 ** get_address_of_UnderlyingType_7() { return &___UnderlyingType_7; }
	inline void set_UnderlyingType_7(CType_t1813387470 * value)
	{
		___UnderlyingType_7 = value;
		Il2CppCodeGenWriteBarrier((&___UnderlyingType_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLETYPE_T2956603701_H
#ifndef PARAMETERMODIFIERTYPE_T867882597_H
#define PARAMETERMODIFIERTYPE_T867882597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType
struct  ParameterModifierType_t867882597  : public CType_t1813387470
{
public:
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType::isOut
	bool ___isOut_4;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType::_pParameterType
	CType_t1813387470 * ____pParameterType_5;

public:
	inline static int32_t get_offset_of_isOut_4() { return static_cast<int32_t>(offsetof(ParameterModifierType_t867882597, ___isOut_4)); }
	inline bool get_isOut_4() const { return ___isOut_4; }
	inline bool* get_address_of_isOut_4() { return &___isOut_4; }
	inline void set_isOut_4(bool value)
	{
		___isOut_4 = value;
	}

	inline static int32_t get_offset_of__pParameterType_5() { return static_cast<int32_t>(offsetof(ParameterModifierType_t867882597, ____pParameterType_5)); }
	inline CType_t1813387470 * get__pParameterType_5() const { return ____pParameterType_5; }
	inline CType_t1813387470 ** get_address_of__pParameterType_5() { return &____pParameterType_5; }
	inline void set__pParameterType_5(CType_t1813387470 * value)
	{
		____pParameterType_5 = value;
		Il2CppCodeGenWriteBarrier((&____pParameterType_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERMODIFIERTYPE_T867882597_H
#ifndef PARENTSYMBOL_T84807579_H
#define PARENTSYMBOL_T84807579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol
struct  ParentSymbol_t84807579  : public Symbol_t3348236047
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol::firstChild
	Symbol_t3348236047 * ___firstChild_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol::_lastChild
	Symbol_t3348236047 * ____lastChild_7;

public:
	inline static int32_t get_offset_of_firstChild_6() { return static_cast<int32_t>(offsetof(ParentSymbol_t84807579, ___firstChild_6)); }
	inline Symbol_t3348236047 * get_firstChild_6() const { return ___firstChild_6; }
	inline Symbol_t3348236047 ** get_address_of_firstChild_6() { return &___firstChild_6; }
	inline void set_firstChild_6(Symbol_t3348236047 * value)
	{
		___firstChild_6 = value;
		Il2CppCodeGenWriteBarrier((&___firstChild_6), value);
	}

	inline static int32_t get_offset_of__lastChild_7() { return static_cast<int32_t>(offsetof(ParentSymbol_t84807579, ____lastChild_7)); }
	inline Symbol_t3348236047 * get__lastChild_7() const { return ____lastChild_7; }
	inline Symbol_t3348236047 ** get_address_of__lastChild_7() { return &____lastChild_7; }
	inline void set__lastChild_7(Symbol_t3348236047 * value)
	{
		____lastChild_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastChild_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTSYMBOL_T84807579_H
#ifndef POINTERTYPE_T3368101717_H
#define POINTERTYPE_T3368101717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.PointerType
struct  PointerType_t3368101717  : public CType_t1813387470
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.PointerType::_pReferentType
	CType_t1813387470 * ____pReferentType_4;

public:
	inline static int32_t get_offset_of__pReferentType_4() { return static_cast<int32_t>(offsetof(PointerType_t3368101717, ____pReferentType_4)); }
	inline CType_t1813387470 * get__pReferentType_4() const { return ____pReferentType_4; }
	inline CType_t1813387470 ** get_address_of__pReferentType_4() { return &____pReferentType_4; }
	inline void set__pReferentType_4(CType_t1813387470 * value)
	{
		____pReferentType_4 = value;
		Il2CppCodeGenWriteBarrier((&____pReferentType_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERTYPE_T3368101717_H
#ifndef TYPEPARAMETERSYMBOL_T755586405_H
#define TYPEPARAMETERSYMBOL_T755586405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol
struct  TypeParameterSymbol_t755586405  : public Symbol_t3348236047
{
public:
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_bIsMethodTypeParameter
	bool ____bIsMethodTypeParameter_6;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_constraints
	int32_t ____constraints_7;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_pTypeParameterType
	TypeParameterType_t171561091 * ____pTypeParameterType_8;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_nIndexInOwnParameters
	int32_t ____nIndexInOwnParameters_9;
	// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_nIndexInTotalParameters
	int32_t ____nIndexInTotalParameters_10;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::_pBounds
	TypeArray_t2467755373 * ____pBounds_11;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::Covariant
	bool ___Covariant_12;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::Contravariant
	bool ___Contravariant_13;

public:
	inline static int32_t get_offset_of__bIsMethodTypeParameter_6() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ____bIsMethodTypeParameter_6)); }
	inline bool get__bIsMethodTypeParameter_6() const { return ____bIsMethodTypeParameter_6; }
	inline bool* get_address_of__bIsMethodTypeParameter_6() { return &____bIsMethodTypeParameter_6; }
	inline void set__bIsMethodTypeParameter_6(bool value)
	{
		____bIsMethodTypeParameter_6 = value;
	}

	inline static int32_t get_offset_of__constraints_7() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ____constraints_7)); }
	inline int32_t get__constraints_7() const { return ____constraints_7; }
	inline int32_t* get_address_of__constraints_7() { return &____constraints_7; }
	inline void set__constraints_7(int32_t value)
	{
		____constraints_7 = value;
	}

	inline static int32_t get_offset_of__pTypeParameterType_8() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ____pTypeParameterType_8)); }
	inline TypeParameterType_t171561091 * get__pTypeParameterType_8() const { return ____pTypeParameterType_8; }
	inline TypeParameterType_t171561091 ** get_address_of__pTypeParameterType_8() { return &____pTypeParameterType_8; }
	inline void set__pTypeParameterType_8(TypeParameterType_t171561091 * value)
	{
		____pTypeParameterType_8 = value;
		Il2CppCodeGenWriteBarrier((&____pTypeParameterType_8), value);
	}

	inline static int32_t get_offset_of__nIndexInOwnParameters_9() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ____nIndexInOwnParameters_9)); }
	inline int32_t get__nIndexInOwnParameters_9() const { return ____nIndexInOwnParameters_9; }
	inline int32_t* get_address_of__nIndexInOwnParameters_9() { return &____nIndexInOwnParameters_9; }
	inline void set__nIndexInOwnParameters_9(int32_t value)
	{
		____nIndexInOwnParameters_9 = value;
	}

	inline static int32_t get_offset_of__nIndexInTotalParameters_10() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ____nIndexInTotalParameters_10)); }
	inline int32_t get__nIndexInTotalParameters_10() const { return ____nIndexInTotalParameters_10; }
	inline int32_t* get_address_of__nIndexInTotalParameters_10() { return &____nIndexInTotalParameters_10; }
	inline void set__nIndexInTotalParameters_10(int32_t value)
	{
		____nIndexInTotalParameters_10 = value;
	}

	inline static int32_t get_offset_of__pBounds_11() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ____pBounds_11)); }
	inline TypeArray_t2467755373 * get__pBounds_11() const { return ____pBounds_11; }
	inline TypeArray_t2467755373 ** get_address_of__pBounds_11() { return &____pBounds_11; }
	inline void set__pBounds_11(TypeArray_t2467755373 * value)
	{
		____pBounds_11 = value;
		Il2CppCodeGenWriteBarrier((&____pBounds_11), value);
	}

	inline static int32_t get_offset_of_Covariant_12() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ___Covariant_12)); }
	inline bool get_Covariant_12() const { return ___Covariant_12; }
	inline bool* get_address_of_Covariant_12() { return &___Covariant_12; }
	inline void set_Covariant_12(bool value)
	{
		___Covariant_12 = value;
	}

	inline static int32_t get_offset_of_Contravariant_13() { return static_cast<int32_t>(offsetof(TypeParameterSymbol_t755586405, ___Contravariant_13)); }
	inline bool get_Contravariant_13() const { return ___Contravariant_13; }
	inline bool* get_address_of_Contravariant_13() { return &___Contravariant_13; }
	inline void set_Contravariant_13(bool value)
	{
		___Contravariant_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEPARAMETERSYMBOL_T755586405_H
#ifndef TYPEPARAMETERTYPE_T171561091_H
#define TYPEPARAMETERTYPE_T171561091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType
struct  TypeParameterType_t171561091  : public CType_t1813387470
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType::_pTypeParameterSymbol
	TypeParameterSymbol_t755586405 * ____pTypeParameterSymbol_4;

public:
	inline static int32_t get_offset_of__pTypeParameterSymbol_4() { return static_cast<int32_t>(offsetof(TypeParameterType_t171561091, ____pTypeParameterSymbol_4)); }
	inline TypeParameterSymbol_t755586405 * get__pTypeParameterSymbol_4() const { return ____pTypeParameterSymbol_4; }
	inline TypeParameterSymbol_t755586405 ** get_address_of__pTypeParameterSymbol_4() { return &____pTypeParameterSymbol_4; }
	inline void set__pTypeParameterSymbol_4(TypeParameterSymbol_t755586405 * value)
	{
		____pTypeParameterSymbol_4 = value;
		Il2CppCodeGenWriteBarrier((&____pTypeParameterSymbol_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEPARAMETERTYPE_T171561091_H
#ifndef VARIABLESYMBOL_T2682349060_H
#define VARIABLESYMBOL_T2682349060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.VariableSymbol
struct  VariableSymbol_t2682349060  : public Symbol_t3348236047
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.VariableSymbol::type
	CType_t1813387470 * ___type_6;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(VariableSymbol_t2682349060, ___type_6)); }
	inline CType_t1813387470 * get_type_6() const { return ___type_6; }
	inline CType_t1813387470 ** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(CType_t1813387470 * value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((&___type_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIABLESYMBOL_T2682349060_H
#ifndef VOIDTYPE_T3686515033_H
#define VOIDTYPE_T3686515033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.VoidType
struct  VoidType_t3686515033  : public CType_t1813387470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOIDTYPE_T3686515033_H
#ifndef FUNC_2_T2217434578_H
#define FUNC_2_T2217434578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct  Func_2_t2217434578  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2217434578_H
#ifndef FUNC_2_T3487522507_H
#define FUNC_2_T3487522507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct  Func_2_t3487522507  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T3487522507_H
#ifndef FUNC_2_T2377163032_H
#define FUNC_2_T2377163032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct  Func_2_t2377163032  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2377163032_H
#ifndef FIELDSYMBOL_T2811293341_H
#define FIELDSYMBOL_T2811293341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol
struct  FieldSymbol_t2811293341  : public VariableSymbol_t2682349060
{
public:
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::isStatic
	bool ___isStatic_7;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::isReadOnly
	bool ___isReadOnly_8;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::isEvent
	bool ___isEvent_9;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::isAssigned
	bool ___isAssigned_10;
	// System.Reflection.FieldInfo Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::AssociatedFieldInfo
	FieldInfo_t * ___AssociatedFieldInfo_11;

public:
	inline static int32_t get_offset_of_isStatic_7() { return static_cast<int32_t>(offsetof(FieldSymbol_t2811293341, ___isStatic_7)); }
	inline bool get_isStatic_7() const { return ___isStatic_7; }
	inline bool* get_address_of_isStatic_7() { return &___isStatic_7; }
	inline void set_isStatic_7(bool value)
	{
		___isStatic_7 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_8() { return static_cast<int32_t>(offsetof(FieldSymbol_t2811293341, ___isReadOnly_8)); }
	inline bool get_isReadOnly_8() const { return ___isReadOnly_8; }
	inline bool* get_address_of_isReadOnly_8() { return &___isReadOnly_8; }
	inline void set_isReadOnly_8(bool value)
	{
		___isReadOnly_8 = value;
	}

	inline static int32_t get_offset_of_isEvent_9() { return static_cast<int32_t>(offsetof(FieldSymbol_t2811293341, ___isEvent_9)); }
	inline bool get_isEvent_9() const { return ___isEvent_9; }
	inline bool* get_address_of_isEvent_9() { return &___isEvent_9; }
	inline void set_isEvent_9(bool value)
	{
		___isEvent_9 = value;
	}

	inline static int32_t get_offset_of_isAssigned_10() { return static_cast<int32_t>(offsetof(FieldSymbol_t2811293341, ___isAssigned_10)); }
	inline bool get_isAssigned_10() const { return ___isAssigned_10; }
	inline bool* get_address_of_isAssigned_10() { return &___isAssigned_10; }
	inline void set_isAssigned_10(bool value)
	{
		___isAssigned_10 = value;
	}

	inline static int32_t get_offset_of_AssociatedFieldInfo_11() { return static_cast<int32_t>(offsetof(FieldSymbol_t2811293341, ___AssociatedFieldInfo_11)); }
	inline FieldInfo_t * get_AssociatedFieldInfo_11() const { return ___AssociatedFieldInfo_11; }
	inline FieldInfo_t ** get_address_of_AssociatedFieldInfo_11() { return &___AssociatedFieldInfo_11; }
	inline void set_AssociatedFieldInfo_11(FieldInfo_t * value)
	{
		___AssociatedFieldInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___AssociatedFieldInfo_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDSYMBOL_T2811293341_H
#ifndef METHODORPROPERTYSYMBOL_T2915275678_H
#define METHODORPROPERTYSYMBOL_T2915275678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol
struct  MethodOrPropertySymbol_t2915275678  : public ParentSymbol_t84807579
{
public:
	// System.UInt32 Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::modOptCount
	uint32_t ___modOptCount_8;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::isStatic
	bool ___isStatic_9;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::isOverride
	bool ___isOverride_10;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::isOperator
	bool ___isOperator_11;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::isParamArray
	bool ___isParamArray_12;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::isHideByName
	bool ___isHideByName_13;
	// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Syntax.Name> Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::<ParameterNames>k__BackingField
	List_1_t2130266080 * ___U3CParameterNamesU3Ek__BackingField_14;
	// System.Boolean[] Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_optionalParameterIndex
	BooleanU5BU5D_t2897418192* ____optionalParameterIndex_15;
	// System.Boolean[] Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_defaultParameterIndex
	BooleanU5BU5D_t2897418192* ____defaultParameterIndex_16;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal[] Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_defaultParameters
	ConstValU5BU5D_t1870338349* ____defaultParameters_17;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_defaultParameterConstValTypes
	CTypeU5BU5D_t868586555* ____defaultParameterConstValTypes_18;
	// System.Boolean[] Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_marshalAsIndex
	BooleanU5BU5D_t2897418192* ____marshalAsIndex_19;
	// System.Runtime.InteropServices.UnmanagedType[] Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_marshalAsBuffer
	UnmanagedTypeU5BU5D_t512685007* ____marshalAsBuffer_20;
	// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::swtSlot
	SymWithType_t1275985997 * ___swtSlot_21;
	// Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::errExpImpl
	ErrorType_t685300011 * ___errExpImpl_22;
	// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::RetType
	CType_t1813387470 * ___RetType_23;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::_Params
	TypeArray_t2467755373 * ____Params_24;

public:
	inline static int32_t get_offset_of_modOptCount_8() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___modOptCount_8)); }
	inline uint32_t get_modOptCount_8() const { return ___modOptCount_8; }
	inline uint32_t* get_address_of_modOptCount_8() { return &___modOptCount_8; }
	inline void set_modOptCount_8(uint32_t value)
	{
		___modOptCount_8 = value;
	}

	inline static int32_t get_offset_of_isStatic_9() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___isStatic_9)); }
	inline bool get_isStatic_9() const { return ___isStatic_9; }
	inline bool* get_address_of_isStatic_9() { return &___isStatic_9; }
	inline void set_isStatic_9(bool value)
	{
		___isStatic_9 = value;
	}

	inline static int32_t get_offset_of_isOverride_10() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___isOverride_10)); }
	inline bool get_isOverride_10() const { return ___isOverride_10; }
	inline bool* get_address_of_isOverride_10() { return &___isOverride_10; }
	inline void set_isOverride_10(bool value)
	{
		___isOverride_10 = value;
	}

	inline static int32_t get_offset_of_isOperator_11() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___isOperator_11)); }
	inline bool get_isOperator_11() const { return ___isOperator_11; }
	inline bool* get_address_of_isOperator_11() { return &___isOperator_11; }
	inline void set_isOperator_11(bool value)
	{
		___isOperator_11 = value;
	}

	inline static int32_t get_offset_of_isParamArray_12() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___isParamArray_12)); }
	inline bool get_isParamArray_12() const { return ___isParamArray_12; }
	inline bool* get_address_of_isParamArray_12() { return &___isParamArray_12; }
	inline void set_isParamArray_12(bool value)
	{
		___isParamArray_12 = value;
	}

	inline static int32_t get_offset_of_isHideByName_13() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___isHideByName_13)); }
	inline bool get_isHideByName_13() const { return ___isHideByName_13; }
	inline bool* get_address_of_isHideByName_13() { return &___isHideByName_13; }
	inline void set_isHideByName_13(bool value)
	{
		___isHideByName_13 = value;
	}

	inline static int32_t get_offset_of_U3CParameterNamesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___U3CParameterNamesU3Ek__BackingField_14)); }
	inline List_1_t2130266080 * get_U3CParameterNamesU3Ek__BackingField_14() const { return ___U3CParameterNamesU3Ek__BackingField_14; }
	inline List_1_t2130266080 ** get_address_of_U3CParameterNamesU3Ek__BackingField_14() { return &___U3CParameterNamesU3Ek__BackingField_14; }
	inline void set_U3CParameterNamesU3Ek__BackingField_14(List_1_t2130266080 * value)
	{
		___U3CParameterNamesU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParameterNamesU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of__optionalParameterIndex_15() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____optionalParameterIndex_15)); }
	inline BooleanU5BU5D_t2897418192* get__optionalParameterIndex_15() const { return ____optionalParameterIndex_15; }
	inline BooleanU5BU5D_t2897418192** get_address_of__optionalParameterIndex_15() { return &____optionalParameterIndex_15; }
	inline void set__optionalParameterIndex_15(BooleanU5BU5D_t2897418192* value)
	{
		____optionalParameterIndex_15 = value;
		Il2CppCodeGenWriteBarrier((&____optionalParameterIndex_15), value);
	}

	inline static int32_t get_offset_of__defaultParameterIndex_16() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____defaultParameterIndex_16)); }
	inline BooleanU5BU5D_t2897418192* get__defaultParameterIndex_16() const { return ____defaultParameterIndex_16; }
	inline BooleanU5BU5D_t2897418192** get_address_of__defaultParameterIndex_16() { return &____defaultParameterIndex_16; }
	inline void set__defaultParameterIndex_16(BooleanU5BU5D_t2897418192* value)
	{
		____defaultParameterIndex_16 = value;
		Il2CppCodeGenWriteBarrier((&____defaultParameterIndex_16), value);
	}

	inline static int32_t get_offset_of__defaultParameters_17() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____defaultParameters_17)); }
	inline ConstValU5BU5D_t1870338349* get__defaultParameters_17() const { return ____defaultParameters_17; }
	inline ConstValU5BU5D_t1870338349** get_address_of__defaultParameters_17() { return &____defaultParameters_17; }
	inline void set__defaultParameters_17(ConstValU5BU5D_t1870338349* value)
	{
		____defaultParameters_17 = value;
		Il2CppCodeGenWriteBarrier((&____defaultParameters_17), value);
	}

	inline static int32_t get_offset_of__defaultParameterConstValTypes_18() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____defaultParameterConstValTypes_18)); }
	inline CTypeU5BU5D_t868586555* get__defaultParameterConstValTypes_18() const { return ____defaultParameterConstValTypes_18; }
	inline CTypeU5BU5D_t868586555** get_address_of__defaultParameterConstValTypes_18() { return &____defaultParameterConstValTypes_18; }
	inline void set__defaultParameterConstValTypes_18(CTypeU5BU5D_t868586555* value)
	{
		____defaultParameterConstValTypes_18 = value;
		Il2CppCodeGenWriteBarrier((&____defaultParameterConstValTypes_18), value);
	}

	inline static int32_t get_offset_of__marshalAsIndex_19() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____marshalAsIndex_19)); }
	inline BooleanU5BU5D_t2897418192* get__marshalAsIndex_19() const { return ____marshalAsIndex_19; }
	inline BooleanU5BU5D_t2897418192** get_address_of__marshalAsIndex_19() { return &____marshalAsIndex_19; }
	inline void set__marshalAsIndex_19(BooleanU5BU5D_t2897418192* value)
	{
		____marshalAsIndex_19 = value;
		Il2CppCodeGenWriteBarrier((&____marshalAsIndex_19), value);
	}

	inline static int32_t get_offset_of__marshalAsBuffer_20() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____marshalAsBuffer_20)); }
	inline UnmanagedTypeU5BU5D_t512685007* get__marshalAsBuffer_20() const { return ____marshalAsBuffer_20; }
	inline UnmanagedTypeU5BU5D_t512685007** get_address_of__marshalAsBuffer_20() { return &____marshalAsBuffer_20; }
	inline void set__marshalAsBuffer_20(UnmanagedTypeU5BU5D_t512685007* value)
	{
		____marshalAsBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((&____marshalAsBuffer_20), value);
	}

	inline static int32_t get_offset_of_swtSlot_21() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___swtSlot_21)); }
	inline SymWithType_t1275985997 * get_swtSlot_21() const { return ___swtSlot_21; }
	inline SymWithType_t1275985997 ** get_address_of_swtSlot_21() { return &___swtSlot_21; }
	inline void set_swtSlot_21(SymWithType_t1275985997 * value)
	{
		___swtSlot_21 = value;
		Il2CppCodeGenWriteBarrier((&___swtSlot_21), value);
	}

	inline static int32_t get_offset_of_errExpImpl_22() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___errExpImpl_22)); }
	inline ErrorType_t685300011 * get_errExpImpl_22() const { return ___errExpImpl_22; }
	inline ErrorType_t685300011 ** get_address_of_errExpImpl_22() { return &___errExpImpl_22; }
	inline void set_errExpImpl_22(ErrorType_t685300011 * value)
	{
		___errExpImpl_22 = value;
		Il2CppCodeGenWriteBarrier((&___errExpImpl_22), value);
	}

	inline static int32_t get_offset_of_RetType_23() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ___RetType_23)); }
	inline CType_t1813387470 * get_RetType_23() const { return ___RetType_23; }
	inline CType_t1813387470 ** get_address_of_RetType_23() { return &___RetType_23; }
	inline void set_RetType_23(CType_t1813387470 * value)
	{
		___RetType_23 = value;
		Il2CppCodeGenWriteBarrier((&___RetType_23), value);
	}

	inline static int32_t get_offset_of__Params_24() { return static_cast<int32_t>(offsetof(MethodOrPropertySymbol_t2915275678, ____Params_24)); }
	inline TypeArray_t2467755373 * get__Params_24() const { return ____Params_24; }
	inline TypeArray_t2467755373 ** get_address_of__Params_24() { return &____Params_24; }
	inline void set__Params_24(TypeArray_t2467755373 * value)
	{
		____Params_24 = value;
		Il2CppCodeGenWriteBarrier((&____Params_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODORPROPERTYSYMBOL_T2915275678_H
#ifndef NAMESPACEORAGGREGATESYMBOL_T2365823281_H
#define NAMESPACEORAGGREGATESYMBOL_T2365823281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol
struct  NamespaceOrAggregateSymbol_t2365823281  : public ParentSymbol_t84807579
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateDeclaration Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol::_declFirst
	AggregateDeclaration_t251946005 * ____declFirst_8;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateDeclaration Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol::_declLast
	AggregateDeclaration_t251946005 * ____declLast_9;

public:
	inline static int32_t get_offset_of__declFirst_8() { return static_cast<int32_t>(offsetof(NamespaceOrAggregateSymbol_t2365823281, ____declFirst_8)); }
	inline AggregateDeclaration_t251946005 * get__declFirst_8() const { return ____declFirst_8; }
	inline AggregateDeclaration_t251946005 ** get_address_of__declFirst_8() { return &____declFirst_8; }
	inline void set__declFirst_8(AggregateDeclaration_t251946005 * value)
	{
		____declFirst_8 = value;
		Il2CppCodeGenWriteBarrier((&____declFirst_8), value);
	}

	inline static int32_t get_offset_of__declLast_9() { return static_cast<int32_t>(offsetof(NamespaceOrAggregateSymbol_t2365823281, ____declLast_9)); }
	inline AggregateDeclaration_t251946005 * get__declLast_9() const { return ____declLast_9; }
	inline AggregateDeclaration_t251946005 ** get_address_of__declLast_9() { return &____declLast_9; }
	inline void set__declLast_9(AggregateDeclaration_t251946005 * value)
	{
		____declLast_9 = value;
		Il2CppCodeGenWriteBarrier((&____declLast_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEORAGGREGATESYMBOL_T2365823281_H
#ifndef AGGREGATESYMBOL_T3146081271_H
#define AGGREGATESYMBOL_T3146081271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol
struct  AggregateSymbol_t3146081271  : public NamespaceOrAggregateSymbol_t2365823281
{
public:
	// System.Type Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::AssociatedSystemType
	Type_t * ___AssociatedSystemType_10;
	// System.Reflection.Assembly Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::AssociatedAssembly
	Assembly_t * ___AssociatedAssembly_11;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_atsInst
	AggregateType_t567267003 * ____atsInst_12;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_pBaseClass
	AggregateType_t567267003 * ____pBaseClass_13;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_pUnderlyingType
	AggregateType_t567267003 * ____pUnderlyingType_14;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_ifaces
	TypeArray_t2467755373 * ____ifaces_15;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_ifacesAll
	TypeArray_t2467755373 * ____ifacesAll_16;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_typeVarsThis
	TypeArray_t2467755373 * ____typeVarsThis_17;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_typeVarsAll
	TypeArray_t2467755373 * ____typeVarsAll_18;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_pTypeManager
	TypeManager_t4140799422 * ____pTypeManager_19;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_pConvFirst
	MethodSymbol_t394006151 * ____pConvFirst_20;
	// Microsoft.CSharp.RuntimeBinder.Semantics.AggKindEnum Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_aggKind
	int32_t ____aggKind_21;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_isPredefined
	bool ____isPredefined_22;
	// Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_iPredef
	uint32_t ____iPredef_23;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_isAbstract
	bool ____isAbstract_24;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_isSealed
	bool ____isSealed_25;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_hasPubNoArgCtor
	bool ____hasPubNoArgCtor_26;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_isSkipUDOps
	bool ____isSkipUDOps_27;
	// System.Nullable`1<System.Boolean> Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::_hasConversion
	Nullable_1_t1819850047  ____hasConversion_28;

public:
	inline static int32_t get_offset_of_AssociatedSystemType_10() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ___AssociatedSystemType_10)); }
	inline Type_t * get_AssociatedSystemType_10() const { return ___AssociatedSystemType_10; }
	inline Type_t ** get_address_of_AssociatedSystemType_10() { return &___AssociatedSystemType_10; }
	inline void set_AssociatedSystemType_10(Type_t * value)
	{
		___AssociatedSystemType_10 = value;
		Il2CppCodeGenWriteBarrier((&___AssociatedSystemType_10), value);
	}

	inline static int32_t get_offset_of_AssociatedAssembly_11() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ___AssociatedAssembly_11)); }
	inline Assembly_t * get_AssociatedAssembly_11() const { return ___AssociatedAssembly_11; }
	inline Assembly_t ** get_address_of_AssociatedAssembly_11() { return &___AssociatedAssembly_11; }
	inline void set_AssociatedAssembly_11(Assembly_t * value)
	{
		___AssociatedAssembly_11 = value;
		Il2CppCodeGenWriteBarrier((&___AssociatedAssembly_11), value);
	}

	inline static int32_t get_offset_of__atsInst_12() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____atsInst_12)); }
	inline AggregateType_t567267003 * get__atsInst_12() const { return ____atsInst_12; }
	inline AggregateType_t567267003 ** get_address_of__atsInst_12() { return &____atsInst_12; }
	inline void set__atsInst_12(AggregateType_t567267003 * value)
	{
		____atsInst_12 = value;
		Il2CppCodeGenWriteBarrier((&____atsInst_12), value);
	}

	inline static int32_t get_offset_of__pBaseClass_13() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____pBaseClass_13)); }
	inline AggregateType_t567267003 * get__pBaseClass_13() const { return ____pBaseClass_13; }
	inline AggregateType_t567267003 ** get_address_of__pBaseClass_13() { return &____pBaseClass_13; }
	inline void set__pBaseClass_13(AggregateType_t567267003 * value)
	{
		____pBaseClass_13 = value;
		Il2CppCodeGenWriteBarrier((&____pBaseClass_13), value);
	}

	inline static int32_t get_offset_of__pUnderlyingType_14() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____pUnderlyingType_14)); }
	inline AggregateType_t567267003 * get__pUnderlyingType_14() const { return ____pUnderlyingType_14; }
	inline AggregateType_t567267003 ** get_address_of__pUnderlyingType_14() { return &____pUnderlyingType_14; }
	inline void set__pUnderlyingType_14(AggregateType_t567267003 * value)
	{
		____pUnderlyingType_14 = value;
		Il2CppCodeGenWriteBarrier((&____pUnderlyingType_14), value);
	}

	inline static int32_t get_offset_of__ifaces_15() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____ifaces_15)); }
	inline TypeArray_t2467755373 * get__ifaces_15() const { return ____ifaces_15; }
	inline TypeArray_t2467755373 ** get_address_of__ifaces_15() { return &____ifaces_15; }
	inline void set__ifaces_15(TypeArray_t2467755373 * value)
	{
		____ifaces_15 = value;
		Il2CppCodeGenWriteBarrier((&____ifaces_15), value);
	}

	inline static int32_t get_offset_of__ifacesAll_16() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____ifacesAll_16)); }
	inline TypeArray_t2467755373 * get__ifacesAll_16() const { return ____ifacesAll_16; }
	inline TypeArray_t2467755373 ** get_address_of__ifacesAll_16() { return &____ifacesAll_16; }
	inline void set__ifacesAll_16(TypeArray_t2467755373 * value)
	{
		____ifacesAll_16 = value;
		Il2CppCodeGenWriteBarrier((&____ifacesAll_16), value);
	}

	inline static int32_t get_offset_of__typeVarsThis_17() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____typeVarsThis_17)); }
	inline TypeArray_t2467755373 * get__typeVarsThis_17() const { return ____typeVarsThis_17; }
	inline TypeArray_t2467755373 ** get_address_of__typeVarsThis_17() { return &____typeVarsThis_17; }
	inline void set__typeVarsThis_17(TypeArray_t2467755373 * value)
	{
		____typeVarsThis_17 = value;
		Il2CppCodeGenWriteBarrier((&____typeVarsThis_17), value);
	}

	inline static int32_t get_offset_of__typeVarsAll_18() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____typeVarsAll_18)); }
	inline TypeArray_t2467755373 * get__typeVarsAll_18() const { return ____typeVarsAll_18; }
	inline TypeArray_t2467755373 ** get_address_of__typeVarsAll_18() { return &____typeVarsAll_18; }
	inline void set__typeVarsAll_18(TypeArray_t2467755373 * value)
	{
		____typeVarsAll_18 = value;
		Il2CppCodeGenWriteBarrier((&____typeVarsAll_18), value);
	}

	inline static int32_t get_offset_of__pTypeManager_19() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____pTypeManager_19)); }
	inline TypeManager_t4140799422 * get__pTypeManager_19() const { return ____pTypeManager_19; }
	inline TypeManager_t4140799422 ** get_address_of__pTypeManager_19() { return &____pTypeManager_19; }
	inline void set__pTypeManager_19(TypeManager_t4140799422 * value)
	{
		____pTypeManager_19 = value;
		Il2CppCodeGenWriteBarrier((&____pTypeManager_19), value);
	}

	inline static int32_t get_offset_of__pConvFirst_20() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____pConvFirst_20)); }
	inline MethodSymbol_t394006151 * get__pConvFirst_20() const { return ____pConvFirst_20; }
	inline MethodSymbol_t394006151 ** get_address_of__pConvFirst_20() { return &____pConvFirst_20; }
	inline void set__pConvFirst_20(MethodSymbol_t394006151 * value)
	{
		____pConvFirst_20 = value;
		Il2CppCodeGenWriteBarrier((&____pConvFirst_20), value);
	}

	inline static int32_t get_offset_of__aggKind_21() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____aggKind_21)); }
	inline int32_t get__aggKind_21() const { return ____aggKind_21; }
	inline int32_t* get_address_of__aggKind_21() { return &____aggKind_21; }
	inline void set__aggKind_21(int32_t value)
	{
		____aggKind_21 = value;
	}

	inline static int32_t get_offset_of__isPredefined_22() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____isPredefined_22)); }
	inline bool get__isPredefined_22() const { return ____isPredefined_22; }
	inline bool* get_address_of__isPredefined_22() { return &____isPredefined_22; }
	inline void set__isPredefined_22(bool value)
	{
		____isPredefined_22 = value;
	}

	inline static int32_t get_offset_of__iPredef_23() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____iPredef_23)); }
	inline uint32_t get__iPredef_23() const { return ____iPredef_23; }
	inline uint32_t* get_address_of__iPredef_23() { return &____iPredef_23; }
	inline void set__iPredef_23(uint32_t value)
	{
		____iPredef_23 = value;
	}

	inline static int32_t get_offset_of__isAbstract_24() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____isAbstract_24)); }
	inline bool get__isAbstract_24() const { return ____isAbstract_24; }
	inline bool* get_address_of__isAbstract_24() { return &____isAbstract_24; }
	inline void set__isAbstract_24(bool value)
	{
		____isAbstract_24 = value;
	}

	inline static int32_t get_offset_of__isSealed_25() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____isSealed_25)); }
	inline bool get__isSealed_25() const { return ____isSealed_25; }
	inline bool* get_address_of__isSealed_25() { return &____isSealed_25; }
	inline void set__isSealed_25(bool value)
	{
		____isSealed_25 = value;
	}

	inline static int32_t get_offset_of__hasPubNoArgCtor_26() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____hasPubNoArgCtor_26)); }
	inline bool get__hasPubNoArgCtor_26() const { return ____hasPubNoArgCtor_26; }
	inline bool* get_address_of__hasPubNoArgCtor_26() { return &____hasPubNoArgCtor_26; }
	inline void set__hasPubNoArgCtor_26(bool value)
	{
		____hasPubNoArgCtor_26 = value;
	}

	inline static int32_t get_offset_of__isSkipUDOps_27() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____isSkipUDOps_27)); }
	inline bool get__isSkipUDOps_27() const { return ____isSkipUDOps_27; }
	inline bool* get_address_of__isSkipUDOps_27() { return &____isSkipUDOps_27; }
	inline void set__isSkipUDOps_27(bool value)
	{
		____isSkipUDOps_27 = value;
	}

	inline static int32_t get_offset_of__hasConversion_28() { return static_cast<int32_t>(offsetof(AggregateSymbol_t3146081271, ____hasConversion_28)); }
	inline Nullable_1_t1819850047  get__hasConversion_28() const { return ____hasConversion_28; }
	inline Nullable_1_t1819850047 * get_address_of__hasConversion_28() { return &____hasConversion_28; }
	inline void set__hasConversion_28(Nullable_1_t1819850047  value)
	{
		____hasConversion_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATESYMBOL_T3146081271_H
#ifndef METHODSYMBOL_T394006151_H
#define METHODSYMBOL_T394006151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol
struct  MethodSymbol_t394006151  : public MethodOrPropertySymbol_t2915275678
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodKindEnum Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::_methKind
	int32_t ____methKind_25;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::_inferenceMustFail
	bool ____inferenceMustFail_26;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::_checkedInfMustFail
	bool ____checkedInfMustFail_27;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::_convNext
	MethodSymbol_t394006151 * ____convNext_28;
	// Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::_prop
	PropertySymbol_t1241991770 * ____prop_29;
	// Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::_evt
	EventSymbol_t2632276330 * ____evt_30;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::isVirtual
	bool ___isVirtual_31;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::isAbstract
	bool ___isAbstract_32;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::isVarargs
	bool ___isVarargs_33;
	// System.Reflection.MemberInfo Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::AssociatedMemberInfo
	MemberInfo_t * ___AssociatedMemberInfo_34;
	// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::typeVars
	TypeArray_t2467755373 * ___typeVars_35;

public:
	inline static int32_t get_offset_of__methKind_25() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ____methKind_25)); }
	inline int32_t get__methKind_25() const { return ____methKind_25; }
	inline int32_t* get_address_of__methKind_25() { return &____methKind_25; }
	inline void set__methKind_25(int32_t value)
	{
		____methKind_25 = value;
	}

	inline static int32_t get_offset_of__inferenceMustFail_26() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ____inferenceMustFail_26)); }
	inline bool get__inferenceMustFail_26() const { return ____inferenceMustFail_26; }
	inline bool* get_address_of__inferenceMustFail_26() { return &____inferenceMustFail_26; }
	inline void set__inferenceMustFail_26(bool value)
	{
		____inferenceMustFail_26 = value;
	}

	inline static int32_t get_offset_of__checkedInfMustFail_27() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ____checkedInfMustFail_27)); }
	inline bool get__checkedInfMustFail_27() const { return ____checkedInfMustFail_27; }
	inline bool* get_address_of__checkedInfMustFail_27() { return &____checkedInfMustFail_27; }
	inline void set__checkedInfMustFail_27(bool value)
	{
		____checkedInfMustFail_27 = value;
	}

	inline static int32_t get_offset_of__convNext_28() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ____convNext_28)); }
	inline MethodSymbol_t394006151 * get__convNext_28() const { return ____convNext_28; }
	inline MethodSymbol_t394006151 ** get_address_of__convNext_28() { return &____convNext_28; }
	inline void set__convNext_28(MethodSymbol_t394006151 * value)
	{
		____convNext_28 = value;
		Il2CppCodeGenWriteBarrier((&____convNext_28), value);
	}

	inline static int32_t get_offset_of__prop_29() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ____prop_29)); }
	inline PropertySymbol_t1241991770 * get__prop_29() const { return ____prop_29; }
	inline PropertySymbol_t1241991770 ** get_address_of__prop_29() { return &____prop_29; }
	inline void set__prop_29(PropertySymbol_t1241991770 * value)
	{
		____prop_29 = value;
		Il2CppCodeGenWriteBarrier((&____prop_29), value);
	}

	inline static int32_t get_offset_of__evt_30() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ____evt_30)); }
	inline EventSymbol_t2632276330 * get__evt_30() const { return ____evt_30; }
	inline EventSymbol_t2632276330 ** get_address_of__evt_30() { return &____evt_30; }
	inline void set__evt_30(EventSymbol_t2632276330 * value)
	{
		____evt_30 = value;
		Il2CppCodeGenWriteBarrier((&____evt_30), value);
	}

	inline static int32_t get_offset_of_isVirtual_31() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ___isVirtual_31)); }
	inline bool get_isVirtual_31() const { return ___isVirtual_31; }
	inline bool* get_address_of_isVirtual_31() { return &___isVirtual_31; }
	inline void set_isVirtual_31(bool value)
	{
		___isVirtual_31 = value;
	}

	inline static int32_t get_offset_of_isAbstract_32() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ___isAbstract_32)); }
	inline bool get_isAbstract_32() const { return ___isAbstract_32; }
	inline bool* get_address_of_isAbstract_32() { return &___isAbstract_32; }
	inline void set_isAbstract_32(bool value)
	{
		___isAbstract_32 = value;
	}

	inline static int32_t get_offset_of_isVarargs_33() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ___isVarargs_33)); }
	inline bool get_isVarargs_33() const { return ___isVarargs_33; }
	inline bool* get_address_of_isVarargs_33() { return &___isVarargs_33; }
	inline void set_isVarargs_33(bool value)
	{
		___isVarargs_33 = value;
	}

	inline static int32_t get_offset_of_AssociatedMemberInfo_34() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ___AssociatedMemberInfo_34)); }
	inline MemberInfo_t * get_AssociatedMemberInfo_34() const { return ___AssociatedMemberInfo_34; }
	inline MemberInfo_t ** get_address_of_AssociatedMemberInfo_34() { return &___AssociatedMemberInfo_34; }
	inline void set_AssociatedMemberInfo_34(MemberInfo_t * value)
	{
		___AssociatedMemberInfo_34 = value;
		Il2CppCodeGenWriteBarrier((&___AssociatedMemberInfo_34), value);
	}

	inline static int32_t get_offset_of_typeVars_35() { return static_cast<int32_t>(offsetof(MethodSymbol_t394006151, ___typeVars_35)); }
	inline TypeArray_t2467755373 * get_typeVars_35() const { return ___typeVars_35; }
	inline TypeArray_t2467755373 ** get_address_of_typeVars_35() { return &___typeVars_35; }
	inline void set_typeVars_35(TypeArray_t2467755373 * value)
	{
		___typeVars_35 = value;
		Il2CppCodeGenWriteBarrier((&___typeVars_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODSYMBOL_T394006151_H
#ifndef NAMESPACESYMBOL_T4294485991_H
#define NAMESPACESYMBOL_T4294485991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol
struct  NamespaceSymbol_t4294485991  : public NamespaceOrAggregateSymbol_t2365823281
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACESYMBOL_T4294485991_H
#ifndef PROPERTYSYMBOL_T1241991770_H
#define PROPERTYSYMBOL_T1241991770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol
struct  PropertySymbol_t1241991770  : public MethodOrPropertySymbol_t2915275678
{
public:
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::<GetterMethod>k__BackingField
	MethodSymbol_t394006151 * ___U3CGetterMethodU3Ek__BackingField_25;
	// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::<SetterMethod>k__BackingField
	MethodSymbol_t394006151 * ___U3CSetterMethodU3Ek__BackingField_26;
	// System.Reflection.PropertyInfo Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::<AssociatedPropertyInfo>k__BackingField
	PropertyInfo_t * ___U3CAssociatedPropertyInfoU3Ek__BackingField_27;
	// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::<Bogus>k__BackingField
	bool ___U3CBogusU3Ek__BackingField_28;

public:
	inline static int32_t get_offset_of_U3CGetterMethodU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PropertySymbol_t1241991770, ___U3CGetterMethodU3Ek__BackingField_25)); }
	inline MethodSymbol_t394006151 * get_U3CGetterMethodU3Ek__BackingField_25() const { return ___U3CGetterMethodU3Ek__BackingField_25; }
	inline MethodSymbol_t394006151 ** get_address_of_U3CGetterMethodU3Ek__BackingField_25() { return &___U3CGetterMethodU3Ek__BackingField_25; }
	inline void set_U3CGetterMethodU3Ek__BackingField_25(MethodSymbol_t394006151 * value)
	{
		___U3CGetterMethodU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGetterMethodU3Ek__BackingField_25), value);
	}

	inline static int32_t get_offset_of_U3CSetterMethodU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PropertySymbol_t1241991770, ___U3CSetterMethodU3Ek__BackingField_26)); }
	inline MethodSymbol_t394006151 * get_U3CSetterMethodU3Ek__BackingField_26() const { return ___U3CSetterMethodU3Ek__BackingField_26; }
	inline MethodSymbol_t394006151 ** get_address_of_U3CSetterMethodU3Ek__BackingField_26() { return &___U3CSetterMethodU3Ek__BackingField_26; }
	inline void set_U3CSetterMethodU3Ek__BackingField_26(MethodSymbol_t394006151 * value)
	{
		___U3CSetterMethodU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetterMethodU3Ek__BackingField_26), value);
	}

	inline static int32_t get_offset_of_U3CAssociatedPropertyInfoU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PropertySymbol_t1241991770, ___U3CAssociatedPropertyInfoU3Ek__BackingField_27)); }
	inline PropertyInfo_t * get_U3CAssociatedPropertyInfoU3Ek__BackingField_27() const { return ___U3CAssociatedPropertyInfoU3Ek__BackingField_27; }
	inline PropertyInfo_t ** get_address_of_U3CAssociatedPropertyInfoU3Ek__BackingField_27() { return &___U3CAssociatedPropertyInfoU3Ek__BackingField_27; }
	inline void set_U3CAssociatedPropertyInfoU3Ek__BackingField_27(PropertyInfo_t * value)
	{
		___U3CAssociatedPropertyInfoU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAssociatedPropertyInfoU3Ek__BackingField_27), value);
	}

	inline static int32_t get_offset_of_U3CBogusU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PropertySymbol_t1241991770, ___U3CBogusU3Ek__BackingField_28)); }
	inline bool get_U3CBogusU3Ek__BackingField_28() const { return ___U3CBogusU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CBogusU3Ek__BackingField_28() { return &___U3CBogusU3Ek__BackingField_28; }
	inline void set_U3CBogusU3Ek__BackingField_28(bool value)
	{
		___U3CBogusU3Ek__BackingField_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYSYMBOL_T1241991770_H
#ifndef INDEXERSYMBOL_T2017513160_H
#define INDEXERSYMBOL_T2017513160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.CSharp.RuntimeBinder.Semantics.IndexerSymbol
struct  IndexerSymbol_t2017513160  : public PropertySymbol_t1241991770
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXERSYMBOL_T2017513160_H
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType[]
struct AggregateTypeU5BU5D_t3291885562  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AggregateType_t567267003 * m_Items[1];

public:
	inline AggregateType_t567267003 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AggregateType_t567267003 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AggregateType_t567267003 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AggregateType_t567267003 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AggregateType_t567267003 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AggregateType_t567267003 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[]
struct CTypeU5BU5D_t868586555  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CType_t1813387470 * m_Items[1];

public:
	inline CType_t1813387470 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CType_t1813387470 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CType_t1813387470 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline CType_t1813387470 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CType_t1813387470 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CType_t1813387470 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t5769829 * m_Items[1];

public:
	inline ConstructorInfo_t5769829 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t5769829 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// Microsoft.CSharp.RuntimeBinder.Syntax.Name[]
struct NameU5BU5D_t1359183151  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Name_t658191338 * m_Items[1];

public:
	inline Name_t658191338 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Name_t658191338 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Name_t658191338 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Name_t658191338 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Name_t658191338 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Name_t658191338 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry[]
struct EntryU5BU5D_t3854683283  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t2595452246 * m_Items[1];

public:
	inline Entry_t2595452246 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2595452246 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2595452246 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Entry_t2595452246 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2595452246 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2595452246 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<System.Object,System.Object>,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2786348156_gshared (Dictionary_2_t2832884925 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<System.Object,System.Object>::.ctor(Key1,Key2)
extern "C" IL2CPP_METHOD_ATTR void KeyPair_2__ctor_m736744615_gshared (KeyPair_2_t3600828283 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<System.Object,System.Object>,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2257834222_gshared (Dictionary_2_t2832884925 * __this, KeyPair_2_t3600828283  p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<System.Object,System.Object>,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3223186216_gshared (Dictionary_2_t2832884925 * __this, KeyPair_2_t3600828283  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1996088172_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3105409630_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Array_Empty_TisRuntimeObject_m4268358689_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m1102611197_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m3343353213_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m135484220_gshared (Func_2_t3759279471 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m3429873137_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3759279471 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2962682148_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m463439517_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3898097692_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" IL2CPP_METHOD_ATTR void List_1_Reverse_m3108420294_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Insert_m3705215113_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m299919665_gshared (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.ParameterInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m2144164683_gshared (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, bool p1, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.ParameterInfo)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m1045040275_gshared (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>::.ctor()
inline void Dictionary_2__ctor_m4245641307 (Dictionary_2_t3935352129 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3935352129 *, const RuntimeMethod*))Dictionary_2__ctor_m2786348156_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>::.ctor()
inline void Dictionary_2__ctor_m2120213177 (Dictionary_2_t547950121 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t547950121 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>::.ctor()
inline void Dictionary_2__ctor_m2364710614 (Dictionary_2_t114597806 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t114597806 *, const RuntimeMethod*))Dictionary_2__ctor_m2786348156_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>::.ctor()
inline void Dictionary_2__ctor_m3655024239 (Dictionary_2_t576429226 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t576429226 *, const RuntimeMethod*))Dictionary_2__ctor_m2786348156_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>::.ctor()
inline void Dictionary_2__ctor_m3291451977 (Dictionary_2_t2740155231 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2740155231 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>::.ctor()
inline void Dictionary_2__ctor_m2120827764 (Dictionary_2_t2328657215 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2328657215 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>::.ctor()
inline void Dictionary_2__ctor_m3448659714 (Dictionary_2_t2427355066 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2427355066 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>::.ctor(Key1,Key2)
inline void KeyPair_2__ctor_m3073921541 (KeyPair_2_t341216002 * __this, AggregateSymbol_t3146081271 * p0, Name_t658191338 * p1, const RuntimeMethod* method)
{
	((  void (*) (KeyPair_2_t341216002 *, AggregateSymbol_t3146081271 *, Name_t658191338 *, const RuntimeMethod*))KeyPair_2__ctor_m736744615_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3809907647 (Dictionary_2_t3935352129 * __this, KeyPair_2_t341216002  p0, AggregateType_t567267003 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3935352129 *, KeyPair_2_t341216002 , AggregateType_t567267003 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m2257834222_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>::Add(!0,!1)
inline void Dictionary_2_Add_m2873453433 (Dictionary_2_t3935352129 * __this, KeyPair_2_t341216002  p0, AggregateType_t567267003 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3935352129 *, KeyPair_2_t341216002 , AggregateType_t567267003 *, const RuntimeMethod*))Dictionary_2_Add_m3223186216_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3629326551 (Dictionary_2_t547950121 * __this, Name_t658191338 * p0, ErrorType_t685300011 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t547950121 *, Name_t658191338 *, ErrorType_t685300011 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType>::Add(!0,!1)
inline void Dictionary_2_Add_m3125345227 (Dictionary_2_t547950121 * __this, Name_t658191338 * p0, ErrorType_t685300011 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t547950121 *, Name_t658191338 *, ErrorType_t685300011 *, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>::.ctor(Key1,Key2)
inline void KeyPair_2__ctor_m1514348969 (KeyPair_2_t3498527983 * __this, CType_t1813387470 * p0, Name_t658191338 * p1, const RuntimeMethod* method)
{
	((  void (*) (KeyPair_2_t3498527983 *, CType_t1813387470 *, Name_t658191338 *, const RuntimeMethod*))KeyPair_2__ctor_m736744615_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2292784380 (Dictionary_2_t114597806 * __this, KeyPair_2_t3498527983  p0, ArrayType_t406051177 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t114597806 *, KeyPair_2_t3498527983 , ArrayType_t406051177 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m2257834222_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType>::Add(!0,!1)
inline void Dictionary_2_Add_m2500642537 (Dictionary_2_t114597806 * __this, KeyPair_2_t3498527983  p0, ArrayType_t406051177 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t114597806 *, KeyPair_2_t3498527983 , ArrayType_t406051177 *, const RuntimeMethod*))Dictionary_2_Add_m3223186216_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3631865121 (Dictionary_2_t576429226 * __this, KeyPair_2_t3498527983  p0, ParameterModifierType_t867882597 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t576429226 *, KeyPair_2_t3498527983 , ParameterModifierType_t867882597 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m2257834222_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.KeyPair`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Syntax.Name>,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType>::Add(!0,!1)
inline void Dictionary_2_Add_m3573383026 (Dictionary_2_t576429226 * __this, KeyPair_2_t3498527983  p0, ParameterModifierType_t867882597 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t576429226 *, KeyPair_2_t3498527983 , ParameterModifierType_t867882597 *, const RuntimeMethod*))Dictionary_2_Add_m3223186216_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2480496911 (Dictionary_2_t2740155231 * __this, CType_t1813387470 * p0, PointerType_t3368101717 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2740155231 *, CType_t1813387470 *, PointerType_t3368101717 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType>::Add(!0,!1)
inline void Dictionary_2_Add_m3367739367 (Dictionary_2_t2740155231 * __this, CType_t1813387470 * p0, PointerType_t3368101717 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2740155231 *, CType_t1813387470 *, PointerType_t3368101717 *, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1777129988 (Dictionary_2_t2328657215 * __this, CType_t1813387470 * p0, NullableType_t2956603701 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2328657215 *, CType_t1813387470 *, NullableType_t2956603701 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType>::Add(!0,!1)
inline void Dictionary_2_Add_m3075073731 (Dictionary_2_t2328657215 * __this, CType_t1813387470 * p0, NullableType_t2956603701 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2328657215 *, CType_t1813387470 *, NullableType_t2956603701 *, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4175426288 (Dictionary_2_t2427355066 * __this, TypeParameterSymbol_t755586405 * p0, TypeParameterType_t171561091 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2427355066 *, TypeParameterSymbol_t755586405 *, TypeParameterType_t171561091 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType>::Add(!0,!1)
inline void Dictionary_2_Add_m546338113 (Dictionary_2_t2427355066 * __this, TypeParameterSymbol_t755586405 * p0, TypeParameterType_t171561091 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2427355066 *, TypeParameterSymbol_t755586405 *, TypeParameterType_t171561091 *, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassesU3Ed__0__ctor_m253825240 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1__ctor_m2824774113 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions::TypeAndBaseClassInterfaces(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UtilityTypeExtensions_TypeAndBaseClassInterfaces_m3294773857 (RuntimeObject * __this /* static, unused */, AggregateType_t567267003 * ___type0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>()
inline AggregateTypeU5BU5D_t3291885562* Array_Empty_TisAggregateType_t567267003_m1378685715 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AggregateTypeU5BU5D_t3291885562* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Array_Empty_TisRuntimeObject_m4268358689_gshared)(__this /* static, unused */, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m3454612449 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1_U3CU3Em__Finally1_m3844411874 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions::TypeAndBaseClasses(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UtilityTypeExtensions_TypeAndBaseClasses_m3640929811 (RuntimeObject * __this /* static, unused */, AggregateType_t567267003 * ___type0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::GetIfacesAll()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * AggregateType_GetIfacesAll_m3692159419 (AggregateType_t567267003 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray::get_Items()
extern "C" IL2CPP_METHOD_ATTR CTypeU5BU5D_t868586555* TypeArray_get_Items_m3402575676 (TypeArray_t2467755373 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1_System_IDisposable_Dispose_m1064914154 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.Collections.Generic.IEnumerable<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m625853650 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::GetBaseClass()
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * AggregateType_GetBaseClass_m73800278 (AggregateType_t567267003 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.Collections.Generic.IEnumerable<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeAndBaseClassesU3Ed__0_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m598945477 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Symbol__ctor_m2813559832 (Symbol_t3348236047 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.CType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CType__ctor_m2877244391 (CType_t1813387470 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_m2199668542 (HashSet_1_t1048894234 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1048894234 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>::.ctor()
inline void HashSet_1__ctor_m379792657 (HashSet_1_t577124894 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t577124894 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::GetRootNS()
extern "C" IL2CPP_METHOD_ATTR NamespaceSymbol_t4294485991 * BSYMMGR_GetRootNS_m1474076324 (BSYMMGR_t2938027401 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::LoadSymbolsFromType(System.Type)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_LoadSymbolsFromType_m2262646512 (SymbolTable_t2007508464 * __this, Type_t * ___originalType0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String Microsoft.CSharp.RuntimeBinder.RuntimeBinderExtensions::GetIndexerName(System.Type)
extern "C" IL2CPP_METHOD_ATTR String_t* RuntimeBinderExtensions_GetIndexerName_m2156236012 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::.ctor(System.Type,System.String)
extern "C" IL2CPP_METHOD_ATTR void NameHashKey__ctor_m2404976955 (NameHashKey_t2012175420 * __this, Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>::Contains(!0)
inline bool HashSet_1_Contains_m3356321002 (HashSet_1_t577124894 * __this, NameHashKey_t2012175420 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t577124894 *, NameHashKey_t2012175420 *, const RuntimeMethod*))HashSet_1_Contains_m1102611197_gshared)(__this, p0, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddNamesOnType(Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddNamesOnType_m3786497449 (SymbolTable_t2007508464 * __this, NameHashKey_t2012175420 * ___key0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddConversionsForType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddConversionsForType_m2635794899 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.Expr::get_Type()
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * Expr_get_Type_m1482347846 (Expr_t1372271848 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker::get_SymbolLoader()
extern "C" IL2CPP_METHOD_ATTR SymbolLoader_t2983914338 * CSemanticChecker_get_SymbolLoader_m2577500808 (CSemanticChecker_t1535940568 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::GetPredefindType(Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedType)
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * SymbolLoader_GetPredefindType_m3767020077 (SymbolLoader_t2983914338 * __this, uint32_t ___pt0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.NullableType::GetAts()
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * NullableType_GetAts_m2570537238 (NullableType_t2956603701 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.SymbolTable::GetName(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * SymbolTable_GetName_m1066594422 (SymbolTable_t2007508464 * __this, String_t* ___p0, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::Lookup(Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker,Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.Expr,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name,System.Int32,Microsoft.CSharp.RuntimeBinder.Semantics.MemLookFlags)
extern "C" IL2CPP_METHOD_ATTR bool MemberLookup_Lookup_m2759281917 (MemberLookup_t2241756900 * __this, CSemanticChecker_t1535940568 * ___checker0, CType_t1813387470 * ___typeSrc1, Expr_t1372271848 * ___obj2, ParentSymbol_t84807579 * ___symWhere3, Name_t658191338 * ___name4, int32_t ___arity5, uint32_t ___flags6, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup::SwtFirst()
extern "C" IL2CPP_METHOD_ATTR SymWithType_t1275985997 * MemberLookup_SwtFirst_m3060222568 (MemberLookup_t2241756900 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Type> Microsoft.CSharp.RuntimeBinder.SymbolTable::CreateInheritanceHierarchyList(System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t3956019502 * SymbolTable_CreateInheritanceHierarchyList_m2459147864 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddNamesInInheritanceHierarchy(System.String,System.Collections.Generic.List`1<System.Type>)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddNamesInInheritanceHierarchy_m2733379745 (SymbolTable_t2007508464 * __this, String_t* ___name0, List_1_t3956019502 * ___inheritance1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m2404963081 (U3CU3Ec__DisplayClass15_0_t2873125857 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
inline int32_t List_1_get_Count_m4094549910 (List_1_t3956019502 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3956019502 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_1__ctor_m2404963954 (U3CU3Ec__DisplayClass15_1_t916810721 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
inline Type_t * List_1_get_Item_m787150517 (List_1_t3956019502 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (List_1_t3956019502 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey>::Add(!0)
inline bool HashSet_1_Add_m917316575 (HashSet_1_t577124894 * __this, NameHashKey_t2012175420 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t577124894 *, NameHashKey_t2012175420 *, const RuntimeMethod*))HashSet_1_Add_m3343353213_gshared)(__this, p0, method);
}
// System.Void System.Func`2<System.Reflection.MemberInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2384193652 (Func_2_t2217434578 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2217434578 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMemberInfo_t_m3084826832 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2217434578 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2217434578 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetCTypeFromType(System.Type)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_GetCTypeFromType_m3194020084 (SymbolTable_t2007508464 * __this, Type_t * ___t0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.CType::getAggregate()
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * CType_getAggregate_m653932837 (CType_t1813387470 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddMethodToSymbolTable(System.Reflection.MethodBase,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.MethodKindEnum)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymbolTable_AddMethodToSymbolTable_m1421278763 (SymbolTable_t2007508464 * __this, MethodBase_t * ___member0, AggregateSymbol_t3146081271 * ___callingAggregate1, int32_t ___kind2, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddParameterConversions(System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddParameterConversions_m1951495065 (SymbolTable_t2007508464 * __this, MethodBase_t * ___method0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddPropertyToSymbolTable(System.Reflection.PropertyInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddPropertyToSymbolTable_m2793273731 (SymbolTable_t2007508464 * __this, PropertyInfo_t * ___property0, AggregateSymbol_t3146081271 * ___aggregate1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddFieldToSymbolTable(System.Reflection.FieldInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR FieldSymbol_t2811293341 * SymbolTable_AddFieldToSymbolTable_m2953080925 (SymbolTable_t2007508464 * __this, FieldInfo_t * ___fieldInfo0, AggregateSymbol_t3146081271 * ___aggregate1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.EventInfo>::.ctor()
inline void List_1__ctor_m555233112 (List_1_t819628108 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t819628108 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.EventInfo>::Add(!0)
inline void List_1_Add_m2350095192 (List_1_t819628108 * __this, EventInfo_t * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t819628108 *, EventInfo_t *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Reflection.EventInfo>::GetEnumerator()
inline Enumerator_t2708871985  List_1_GetEnumerator_m2709014514 (List_1_t819628108 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2708871985  (*) (List_1_t819628108 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Reflection.EventInfo>::get_Current()
inline EventInfo_t * Enumerator_get_Current_m3666420137 (Enumerator_t2708871985 * __this, const RuntimeMethod* method)
{
	return ((  EventInfo_t * (*) (Enumerator_t2708871985 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddEventToSymbolTable(System.Reflection.EventInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddEventToSymbolTable_m1786974805 (SymbolTable_t2007508464 * __this, EventInfo_t * ___eventInfo0, AggregateSymbol_t3146081271 * ___aggregate1, FieldSymbol_t2811293341 * ___addedField2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Reflection.EventInfo>::MoveNext()
inline bool Enumerator_MoveNext_m1672893779 (Enumerator_t2708871985 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2708871985 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Reflection.EventInfo>::Dispose()
inline void Enumerator_Dispose_m3472778301 (Enumerator_t2708871985 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2708871985 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Boolean System.Type::get_IsInterface()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m3284996719 (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
inline void List_1__ctor_m4285917392 (List_1_t3956019502 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3956019502 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
inline void List_1_Add_m3669611020 (List_1_t3956019502 * __this, Type_t * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3956019502 *, Type_t *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
inline void List_1__ctor_m259484671 (List_1_t3956019502 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3956019502 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m2948304386 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.CType::IsWindowsRuntimeType()
extern "C" IL2CPP_METHOD_ATTR bool CType_IsWindowsRuntimeType_m280844425 (CType_t1813387470 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::GetWinRTCollectionIfacesAll(Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader)
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * AggregateType_GetWinRTCollectionIfacesAll_m3264305352 (AggregateType_t567267003 * __this, SymbolLoader_t2983914338 * ___pSymbolLoader0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * TypeArray_get_Item_m3570930834 (TypeArray_t2467755373 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Type Microsoft.CSharp.RuntimeBinder.Semantics.CType::get_AssociatedSystemType()
extern "C" IL2CPP_METHOD_ATTR Type_t * CType_get_AssociatedSystemType_m1536780166 (CType_t1813387470 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t TypeArray_get_Count_m4264721965 (TypeArray_t2467755373 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::Add(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_Add_m3684855591 (NameManager_t1767112997 * __this, String_t* ___key0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::Add(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_Add_m2932834222 (NameManager_t1767112997 * __this, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::LoadMethodTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_LoadMethodTypeParameter_m3062046655 (SymbolTable_t2007508464 * __this, MethodSymbol_t394006151 * ___parent0, Type_t * ___t1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType::GetTypeParameterSymbol()
extern "C" IL2CPP_METHOD_ATTR TypeParameterSymbol_t755586405 * TypeParameterType_GetTypeParameterSymbol_m812331021 (TypeParameterType_t171561091 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.SymbolTable::GetCTypeArrayFromTypes(System.Type[])
extern "C" IL2CPP_METHOD_ATTR CTypeU5BU5D_t868586555* SymbolTable_GetCTypeArrayFromTypes_m4106394335 (SymbolTable_t2007508464 * __this, TypeU5BU5D_t3940880105* ___types0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::AllocParams(Microsoft.CSharp.RuntimeBinder.Semantics.CType[])
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * BSYMMGR_AllocParams_m784650617 (BSYMMGR_t2938027401 * __this, CTypeU5BU5D_t868586555* ___types0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::SetBounds(Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray)
extern "C" IL2CPP_METHOD_ATTR void TypeParameterSymbol_SetBounds_m3448967516 (TypeParameterSymbol_t755586405 * __this, TypeArray_t2467755373 * ___pBounds0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::AllocParams(System.Int32,Microsoft.CSharp.RuntimeBinder.Semantics.CType[])
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * BSYMMGR_AllocParams_m78811279 (BSYMMGR_t2938027401 * __this, int32_t ___ctype0, CTypeU5BU5D_t868586555* ___prgtype1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::EmptyTypeArray()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * BSYMMGR_EmptyTypeArray_m2278114118 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>::.ctor()
inline void List_1__ctor_m1419539908 (List_1_t3285462212 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3285462212 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::isNested()
extern "C" IL2CPP_METHOD_ATTR bool AggregateSymbol_isNested_m1174542334 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::GetOuterAgg()
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * AggregateSymbol_GetOuterAgg_m161187221 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::GetTypeVarsAll()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * AggregateSymbol_GetTypeVarsAll_m443298054 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m2683486427 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::LoadClassTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_LoadClassTypeParameter_m1292531502 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___parent0, Type_t * ___t1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType::GetOwningSymbol()
extern "C" IL2CPP_METHOD_ATTR ParentSymbol_t84807579 * TypeParameterType_GetOwningSymbol_m2672672759 (TypeParameterType_t171561091 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>::Add(!0)
inline void List_1_Add_m3042044450 (List_1_t3285462212 * __this, CType_t1813387470 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3285462212 *, CType_t1813387470 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>::get_Count()
inline int32_t List_1_get_Count_m3795182392 (List_1_t3285462212 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3285462212 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Semantics.CType>::ToArray()
inline CTypeU5BU5D_t868586555* List_1_ToArray_m2498037548 (List_1_t3285462212 * __this, const RuntimeMethod* method)
{
	return ((  CTypeU5BU5D_t868586555* (*) (List_1_t3285462212 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.SymbolTable::GetName(System.Type)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * SymbolTable_GetName_m2509943126 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::LookupAggMember(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t)
extern "C" IL2CPP_METHOD_ATTR Symbol_t3348236047 * BSYMMGR_LookupAggMember_m2413661113 (BSYMMGR_t2938027401 * __this, Name_t658191338 * ___name0, AggregateSymbol_t3146081271 * ___agg1, int64_t ___mask2, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::GetTypeParameterType()
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * TypeParameterSymbol_GetTypeParameterType_m2208544558 (TypeParameterSymbol_t755586405 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::AreTypeParametersEquivalent(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_AreTypeParametersEquivalent_m972801204 (SymbolTable_t2007508464 * __this, Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR::LookupNextSym(Microsoft.CSharp.RuntimeBinder.Semantics.Symbol,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t)
extern "C" IL2CPP_METHOD_ATTR Symbol_t3348236047 * BSYMMGR_LookupNextSym_m1831996135 (RuntimeObject * __this /* static, unused */, Symbol_t3348236047 * ___sym0, ParentSymbol_t84807579 * ___parent1, int64_t ___kindmask2, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::AddTypeParameterToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol,System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_AddTypeParameterToSymbolTable_m3616144431 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___agg0, MethodSymbol_t394006151 * ___meth1, Type_t * ___t2, bool ___bIsAggregate3, const RuntimeMethod* method);
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::GetOriginalTypeParameterType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_GetOriginalTypeParameterType_m3831275873 (SymbolTable_t2007508464 * __this, Type_t * ___t0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_m736913402 (RuntimeObject * __this /* static, unused */, MethodBase_t * p0, MethodBase_t * p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m2962682148 (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2962682148_gshared)(__this, p0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m463439517 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m463439517_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3898097692 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3898097692_gshared)(__this, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateClassTypeParameter(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR TypeParameterSymbol_t755586405 * SymFactory_CreateClassTypeParameter_m542853122 (SymFactory_t300688847 * __this, Name_t658191338 * ___pName0, AggregateSymbol_t3146081271 * ___pParent1, int32_t ___index2, int32_t ___indexTotal3, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateMethodTypeParameter(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR TypeParameterSymbol_t755586405 * SymFactory_CreateMethodTypeParameter_m3290049661 (SymFactory_t300688847 * __this, Name_t658191338 * ___pName0, MethodSymbol_t394006151 * ___pParent1, int32_t ___index2, int32_t ___indexTotal3, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol::SetConstraints(Microsoft.CSharp.RuntimeBinder.Semantics.SpecCons)
extern "C" IL2CPP_METHOD_ATTR void TypeParameterSymbol_SetConstraints_m3356455386 (TypeParameterSymbol_t755586405 * __this, int32_t ___constraints0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::SetAccess(Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS)
extern "C" IL2CPP_METHOD_ATTR void Symbol_SetAccess_m3955101489 (Symbol_t3348236047 * __this, int32_t ___access0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * TypeManager_GetTypeParameter_m3201366330 (TypeManager_t4140799422 * __this, TypeParameterSymbol_t755586405 * ___pSymbol0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> Microsoft.CSharp.RuntimeBinder.SymbolTable::BuildDeclarationChain(System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * SymbolTable_BuildDeclarationChain_m718011609 (RuntimeObject * __this /* static, unused */, Type_t * ___callingType0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsByRef()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsByRef_m1262524108 (Type_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_m1328026504 (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL::LookupSym(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t)
extern "C" IL2CPP_METHOD_ATTR Symbol_t3348236047 * SYMTBL_LookupSym_m2091533833 (SYMTBL_t752690877 * __this, Name_t658191338 * ___name0, ParentSymbol_t84807579 * ___parent1, int64_t ___kindmask2, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::FindSymWithMatchingArity(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * SymbolTable_FindSymWithMatchingArity_m1958855211 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___aggregateSymbol0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.ResetBindException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ResetBindException__ctor_m2049701776 (ResetBindException_t1303326642 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.RuntimeBinderExtensions::IsNullableType(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeBinderExtensions_IsNullableType_m1655450255 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::ProcessSpecialTypeInChain(Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_ProcessSpecialTypeInChain_m2251391497 (SymbolTable_t2007508464 * __this, NamespaceOrAggregateSymbol_t2365823281 * ___parent0, Type_t * ___t1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType::GetOwningAggregate()
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * AggregateType_GetOwningAggregate_m2611624830 (AggregateType_t567267003 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddAggregateToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * SymbolTable_AddAggregateToSymbolTable_m2773205952 (SymbolTable_t2007508464 * __this, NamespaceOrAggregateSymbol_t2365823281 * ___parent0, Type_t * ___type1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetConstructedType(System.Type,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_GetConstructedType_m3153641545 (SymbolTable_t2007508464 * __this, Type_t * ___type0, AggregateSymbol_t3146081271 * ___agg1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::ProcessMethodTypeParameter(System.Reflection.MethodInfo,System.Type,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_ProcessMethodTypeParameter_m1926306387 (SymbolTable_t2007508464 * __this, MethodInfo_t * ___methinfo0, Type_t * ___t1, AggregateSymbol_t3146081271 * ___parent2, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddNamespaceToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,System.String)
extern "C" IL2CPP_METHOD_ATTR NamespaceSymbol_t4294485991 * SymbolTable_AddNamespaceToSymbolTable_m876063316 (SymbolTable_t2007508464 * __this, NamespaceOrAggregateSymbol_t2365823281 * ___parent0, String_t* ___sz1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m2934127733 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetParameterModifier(Microsoft.CSharp.RuntimeBinder.Semantics.CType,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ParameterModifierType_t867882597 * TypeManager_GetParameterModifier_m1738454542 (TypeManager_t4140799422 * __this, CType_t1813387470 * ___paramType0, bool ___isOut1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::FindMatchingMethod(System.Reflection.MemberInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymbolTable_FindMatchingMethod_m1410031394 (SymbolTable_t2007508464 * __this, MemberInfo_t * ___method0, AggregateSymbol_t3146081271 * ___callingAggregate1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetAggregate(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray)
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * TypeManager_GetAggregate_m2312002896 (TypeManager_t4140799422 * __this, AggregateSymbol_t3146081271 * ___agg0, TypeArray_t2467755373 * ___typeArgsAll1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::getThisType()
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * AggregateSymbol_getThisType_m4290204095 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetArray(Microsoft.CSharp.RuntimeBinder.Semantics.CType,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ArrayType_t406051177 * TypeManager_GetArray_m606745551 (TypeManager_t4140799422 * __this, CType_t1813387470 * ___elementType0, int32_t ___args1, bool ___isSZArray2, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPointer()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsPointer_m4067542339 (Type_t * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.PointerType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetPointer(Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR PointerType_t3368101717 * TypeManager_GetPointer_m1783654527 (TypeManager_t4140799422 * __this, CType_t1813387470 * ___baseType0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.NullableType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetNullable(Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR NullableType_t2956603701 * TypeManager_GetNullable_m41344782 (TypeManager_t4140799422 * __this, CType_t1813387470 * ___pUnderlyingType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m2321703786 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m3338814081 (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m4117277833 (U3CU3Ec__DisplayClass30_0_t2872929247 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> System.Reflection.RuntimeReflectionExtensions::GetRuntimeMethods(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RuntimeReflectionExtensions_GetRuntimeMethods_m2137572665 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.MethodInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1610613808 (Func_2_t3487522507 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3487522507 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisMethodInfo_t_m1737046122 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3487522507 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t3487522507 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
inline void List_1_Reverse_m3108420294 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_Reverse_m3108420294_gshared)(__this, method);
}
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
inline void List_1_Insert_m3705215113 (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, int32_t, RuntimeObject *, const RuntimeMethod*))List_1_Insert_m3705215113_gshared)(__this, p0, p1, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::get_Parent()
extern "C" IL2CPP_METHOD_ATTR NamespaceOrAggregateSymbol_t2365823281 * AggregateSymbol_get_Parent_m2303668570 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateNamespace(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol)
extern "C" IL2CPP_METHOD_ATTR NamespaceSymbol_t4294485991 * SymFactory_CreateNamespace_m2756311511 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, NamespaceSymbol_t4294485991 * ___parent1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Microsoft.CSharp.RuntimeBinder.Semantics.CType>()
inline CTypeU5BU5D_t868586555* Array_Empty_TisCType_t1813387470_m3542555726 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  CTypeU5BU5D_t868586555* (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Array_Empty_TisRuntimeObject_m4268358689_gshared)(__this /* static, unused */, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateAggregate(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager)
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * SymFactory_CreateAggregate_m1510365684 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, NamespaceOrAggregateSymbol_t2365823281 * ___parent1, TypeManager_t4140799422 * ___typeManager2, const RuntimeMethod* method);
// System.Type System.Enum::GetUnderlyingType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * Enum_GetUnderlyingType_m2480312097 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetUnderlyingType(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetUnderlyingType_m3102494060 (AggregateSymbol_t3146081271 * __this, AggregateType_t567267003 * ___underlyingType0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetAggKind(Microsoft.CSharp.RuntimeBinder.Semantics.AggKindEnum)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetAggKind_m809582924 (AggregateSymbol_t3146081271 * __this, int32_t ___aggKind0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetTypeVars(Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetTypeVars_m2557572345 (AggregateSymbol_t3146081271 * __this, TypeArray_t2467755373 * ___typeVars0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsPublic_m3753422318 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNested()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsNested_m3546087448 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNestedAssembly()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsNestedAssembly_m2663872037 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNestedFamANDAssem()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsNestedFamANDAssem_m3716627270 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNestedFamORAssem()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsNestedFamORAssem_m3330578303 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNestedPrivate()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsNestedPrivate_m4042001536 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsNestedFamily()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsNestedFamily_m927634460 (Type_t * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.SymbolTable::GetAggregateTypeParameters(System.Type,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * SymbolTable_GetAggregateTypeParameters_m2250120112 (SymbolTable_t2007508464 * __this, Type_t * ___type0, AggregateSymbol_t3146081271 * ___agg1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::GetTypeVars()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * AggregateSymbol_GetTypeVars_m958591200 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m1120089130 (Type_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetAbstract(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetAbstract_m1567389381 (AggregateSymbol_t3146081271 * __this, bool ___abstract0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedType Microsoft.CSharp.RuntimeBinder.Semantics.PredefinedTypeFacts::TryGetPredefTypeIndex(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t PredefinedTypeFacts_TryGetPredefTypeIndex_m3082312426 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.Semantics.PredefinedTypes::InitializePredefinedType(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedType)
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * PredefinedTypes_InitializePredefinedType_m3312508642 (RuntimeObject * __this /* static, unused */, AggregateSymbol_t3146081271 * ___sym0, uint32_t ___pt1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsSealed()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m3543837727 (Type_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetSealed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetSealed_m1604952804 (AggregateSymbol_t3146081271 * __this, bool ___sealed0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetBaseClass(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetBaseClass_m678578832 (AggregateSymbol_t3146081271 * __this, AggregateType_t567267003 * ___baseClass0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetTypeManager(Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetTypeManager_m3724921304 (AggregateSymbol_t3146081271 * __this, TypeManager_t4140799422 * ___typeManager0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetFirstUDConversion(Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetFirstUDConversion_m2058433964 (AggregateSymbol_t3146081271 * __this, MethodSymbol_t394006151 * ___conv0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::SetInterfacesOnAggregate(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_SetInterfacesOnAggregate_m4130193175 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___aggregate0, Type_t * ___type1, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C" IL2CPP_METHOD_ATTR ConstructorInfo_t5769829 * Type_GetConstructor_m2219014380 (Type_t * __this, TypeU5BU5D_t3940880105* p0, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
extern "C" IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m2322742156 (RuntimeObject * __this /* static, unused */, ConstructorInfo_t5769829 * p0, ConstructorInfo_t5769829 * p1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetHasPubNoArgCtor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetHasPubNoArgCtor_m2252766618 (AggregateSymbol_t3146081271 * __this, bool ___hasPubNoArgCtor0, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::IsDelegate()
extern "C" IL2CPP_METHOD_ATTR bool AggregateSymbol_IsDelegate_m2498524409 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::PopulateSymbolTableWithName(System.String,System.Collections.Generic.IEnumerable`1<System.Type>,System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_PopulateSymbolTableWithName_m2474176076 (SymbolTable_t2007508464 * __this, String_t* ___name0, RuntimeObject* ___typeArguments1, Type_t * ___callingType2, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetIfaces(Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetIfaces_m495326653 (AggregateSymbol_t3146081271 * __this, TypeArray_t2467755373 * ___ifaces0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::GetIfaces()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * AggregateSymbol_GetIfaces_m1529935643 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetIfacesAll(Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray)
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetIfacesAll_m3880275442 (AggregateSymbol_t3146081271 * __this, TypeArray_t2467755373 * ___ifacesAll0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateMemberVar(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol)
extern "C" IL2CPP_METHOD_ATTR FieldSymbol_t2811293341 * SymFactory_CreateMemberVar_m2180122799 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, ParentSymbol_t84807579 * ___parent1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_m3482711189 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_m3378038140 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m1717932363 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsFamily()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsFamily_m3077122203 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsAssembly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsAssembly_m3149973128 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsFamilyAndAssembly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsFamilyAndAssembly_m29655538 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m930369112 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::SetType(Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR void FieldSymbol_SetType_m1150868786 (FieldSymbol_t2811293341 * __this, CType_t1813387470 * ___pType0, const RuntimeMethod* method);
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::GetTypeByName(System.Type&,System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_GetTypeByName_m1759078710 (RuntimeObject * __this /* static, unused */, Type_t ** ___cachedResult0, String_t* ___name1, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m3605423543 (RuntimeObject * __this /* static, unused */, String_t* p0, bool p1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateEvent(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol)
extern "C" IL2CPP_METHOD_ATTR EventSymbol_t2632276330 * SymFactory_CreateEvent_m4144277480 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, ParentSymbol_t84807579 * ___parent1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m708125611 (RuntimeObject * __this /* static, unused */, MethodInfo_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::SetEvent(Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol)
extern "C" IL2CPP_METHOD_ATTR void MethodSymbol_SetEvent_m1689614715 (MethodSymbol_t394006151 * __this, EventSymbol_t2632276330 * ___evt0, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::IsOverride()
extern "C" IL2CPP_METHOD_ATTR bool Symbol_IsOverride_m3657466498 (Symbol_t3348236047 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ACCESS Microsoft.CSharp.RuntimeBinder.Semantics.Symbol::GetAccess()
extern "C" IL2CPP_METHOD_ATTR int32_t Symbol_GetAccess_m2843445626 (Symbol_t3348236047 * __this, const RuntimeMethod* method);
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::get_EventRegistrationTokenType()
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_get_EventRegistrationTokenType_m1303499912 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::get_WindowsRuntimeMarshalType()
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_get_WindowsRuntimeMarshalType_m1959189592 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::get_Params()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * MethodOrPropertySymbol_get_Params_m804279157 (MethodOrPropertySymbol_t2915275678 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.EventSymbol::set_IsWindowsRuntimeEvent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EventSymbol_set_IsWindowsRuntimeEvent_m1754260102 (EventSymbol_t2632276330 * __this, bool ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol::GetType()
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * FieldSymbol_GetType_m1947491790 (FieldSymbol_t2811293341 * __this, const RuntimeMethod* method);
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::get_EventRegistrationTokenTableType()
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_get_EventRegistrationTokenTableType_m97072725 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass50_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m3156650895 (U3CU3Ec__DisplayClass50_0_t2872929245 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> System.Reflection.RuntimeReflectionExtensions::GetRuntimeProperties(System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RuntimeReflectionExtensions_GetRuntimeProperties_m229292598 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.PropertyInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3813751571 (Func_2_t2377163032 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2377163032 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m135484220_gshared)(__this, p0, p1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.PropertyInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisPropertyInfo_t_m3804523869 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2377163032 * p1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2377163032 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m3429873137_gshared)(__this /* static, unused */, p0, p1, method);
}
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Reflection.DefaultMemberAttribute>(System.Reflection.MemberInfo)
inline DefaultMemberAttribute_t3275092422 * CustomAttributeExtensions_GetCustomAttribute_TisDefaultMemberAttribute_t3275092422_m3748746748 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, const RuntimeMethod* method)
{
	return ((  DefaultMemberAttribute_t3275092422 * (*) (RuntimeObject * /* static, unused */, MemberInfo_t *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m299919665_gshared)(__this /* static, unused */, p0, method);
}
// System.String System.Reflection.DefaultMemberAttribute::get_MemberName()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultMemberAttribute_get_MemberName_m3384235354 (DefaultMemberAttribute_t3275092422 * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::get_AssociatedPropertyInfo()
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * PropertySymbol_get_AssociatedPropertyInfo_m262388383 (PropertySymbol_t1241991770 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.RuntimeBinderExtensions::IsEquivalentTo(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeBinderExtensions_IsEquivalentTo_m3460129938 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___mi10, MemberInfo_t * ___mi21, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::LookupNextSym(Microsoft.CSharp.RuntimeBinder.Semantics.Symbol,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t)
extern "C" IL2CPP_METHOD_ATTR Symbol_t3348236047 * SymbolLoader_LookupNextSym_m513919061 (SymbolLoader_t2983914338 * __this, Symbol_t3348236047 * ___sym0, ParentSymbol_t84807579 * ___parent1, int64_t ___kindmask2, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::GetGlobalSymbolFactory()
extern "C" IL2CPP_METHOD_ATTR SymFactory_t300688847 * SymbolLoader_GetGlobalSymbolFactory_m1604297671 (SymbolLoader_t2983914338 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.IndexerSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateIndexer(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name)
extern "C" IL2CPP_METHOD_ATTR IndexerSymbol_t2017513160 * SymFactory_CreateIndexer_m759759791 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, ParentSymbol_t84807579 * ___parent1, Name_t658191338 * ___realName2, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.SymbolTable::CreateParameterArray(System.Reflection.MemberInfo,System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * SymbolTable_CreateParameterArray_m634093492 (SymbolTable_t2007508464 * __this, MemberInfo_t * ___associatedInfo0, ParameterInfoU5BU5D_t390618515* ___parameters1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::set_Params(Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray)
extern "C" IL2CPP_METHOD_ATTR void MethodOrPropertySymbol_set_Params_m3680210325 (MethodOrPropertySymbol_t2915275678 * __this, TypeArray_t2467755373 * ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateProperty(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol)
extern "C" IL2CPP_METHOD_ATTR PropertySymbol_t1241991770 * SymFactory_CreateProperty_m2945403817 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, ParentSymbol_t84807579 * ___parent1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::set_AssociatedPropertyInfo(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR void PropertySymbol_set_AssociatedPropertyInfo_m380991233 (PropertySymbol_t1241991770 * __this, PropertyInfo_t * ___value0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_m2399864271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::DoesMethodHaveParameterArray(System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_DoesMethodHaveParameterArray_m3086024223 (SymbolTable_t2007508464 * __this, ParameterInfoU5BU5D_t390618515* ___parameters0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsVirtual_m2008546636 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsHideBySig()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsHideBySig_m1251605706 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Reflection.RuntimeReflectionExtensions::GetRuntimeBaseDefinition(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * RuntimeReflectionExtensions_GetRuntimeBaseDefinition_m3606280828 (RuntimeObject * __this /* static, unused */, MethodInfo_t * p0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::SetParameterDataForMethProp(Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol,System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_SetParameterDataForMethProp_m2192450889 (SymbolTable_t2007508464 * __this, MethodOrPropertySymbol_t2915275678 * ___methProp0, ParameterInfoU5BU5D_t390618515* ___parameters1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::set_GetterMethod(Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol)
extern "C" IL2CPP_METHOD_ATTR void PropertySymbol_set_GetterMethod_m212908264 (PropertySymbol_t1241991770 * __this, MethodSymbol_t394006151 * ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::get_GetterMethod()
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * PropertySymbol_get_GetterMethod_m68567719 (PropertySymbol_t1241991770 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::SetProperty(Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol)
extern "C" IL2CPP_METHOD_ATTR void MethodSymbol_SetProperty_m3000721926 (MethodSymbol_t394006151 * __this, PropertySymbol_t1241991770 * ___prop0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::set_Bogus(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void PropertySymbol_set_Bogus_m3386905033 (PropertySymbol_t1241991770 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::SetMethKind(Microsoft.CSharp.RuntimeBinder.Semantics.MethodKindEnum)
extern "C" IL2CPP_METHOD_ATTR void MethodSymbol_SetMethKind_m789659642 (MethodSymbol_t394006151 * __this, int32_t ___mk0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::set_SetterMethod(Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol)
extern "C" IL2CPP_METHOD_ATTR void PropertySymbol_set_SetterMethod_m3806594370 (PropertySymbol_t1241991770 * __this, MethodSymbol_t394006151 * ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.PropertySymbol::get_SetterMethod()
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * PropertySymbol_get_SetterMethod_m68178699 (PropertySymbol_t1241991770 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m1025141957 (U3CU3Ec__DisplayClass52_0_t2872798173 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::GetPredefinedName(Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedName)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_GetPredefinedName_m2121682198 (RuntimeObject * __this /* static, unused */, int32_t ___id0, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
extern "C" IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t881249896* Type_GetConstructors_m1172352582 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1241144064 (RuntimeObject * __this /* static, unused */, MethodInfo_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsSpecialName()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsSpecialName_m1671317191 (MethodBase_t * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory::CreateMethod(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymFactory_CreateMethod_m2166430499 (SymFactory_t300688847 * __this, Name_t658191338 * ___name0, ParentSymbol_t84807579 * ___parent1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::SetHasConversion()
extern "C" IL2CPP_METHOD_ATTR void AggregateSymbol_SetHasConversion_m1916043271 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol::GetFirstUDConversion()
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * AggregateSymbol_GetFirstUDConversion_m3315532410 (AggregateSymbol_t3146081271 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol::SetConvNext(Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol)
extern "C" IL2CPP_METHOD_ATTR void MethodSymbol_SetConvNext_m293642509 (MethodSymbol_t394006151 * __this, MethodSymbol_t394006151 * ___conv0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m2180846589 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsPrivate()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsPrivate_m1924826529 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsFamily()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsFamily_m3588449059 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsFamilyOrAssembly()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsFamilyOrAssembly_m2812831457 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsAbstract_m428833029 (MethodBase_t * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.SymbolTable::GetMethodTypeParameters(System.Reflection.MethodInfo,Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * SymbolTable_GetMethodTypeParameters_m798564244 (SymbolTable_t2007508464 * __this, MethodInfo_t * ___method0, MethodSymbol_t394006151 * ___parent1, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::IsOperator(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_IsOperator_m3403205358 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetSlotForOverride(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR SymWithType_t1275985997 * SymbolTable_GetSlotForOverride_m1988677043 (SymbolTable_t2007508464 * __this, MethodInfo_t * ___method0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.VoidType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetVoid()
extern "C" IL2CPP_METHOD_ATTR VoidType_t3686515033 * TypeManager_GetVoid_m3244573903 (TypeManager_t4140799422 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.CSharp.RuntimeBinder.SymbolTable::GetCountOfModOpts(System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR uint32_t SymbolTable_GetCountOfModOpts_m900901776 (SymbolTable_t2007508464 * __this, ParameterInfoU5BU5D_t390618515* ___parameters0, const RuntimeMethod* method);
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Attribute_t861562559 * CustomAttributeExtensions_GetCustomAttribute_m3870800302 (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, Type_t * p1, bool p2, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::SetParameterAttributes(Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol,System.Reflection.ParameterInfo[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_SetParameterAttributes_m3726288706 (SymbolTable_t2007508464 * __this, MethodOrPropertySymbol_t2915275678 * ___methProp0, ParameterInfoU5BU5D_t390618515* ___parameters1, int32_t ___i2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Syntax.Name> Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::get_ParameterNames()
extern "C" IL2CPP_METHOD_ATTR List_1_t2130266080 * MethodOrPropertySymbol_get_ParameterNames_m4084152379 (MethodOrPropertySymbol_t2915275678 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.CSharp.RuntimeBinder.Syntax.Name>::Add(!0)
inline void List_1_Add_m4155803952 (List_1_t2130266080 * __this, Name_t658191338 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2130266080 *, Name_t658191338 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::SetOptionalParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MethodOrPropertySymbol_SetOptionalParameter_m2354215495 (MethodOrPropertySymbol_t2915275678 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Runtime.InteropServices.MarshalAsAttribute>(System.Reflection.ParameterInfo,System.Boolean)
inline MarshalAsAttribute_t3522571978 * CustomAttributeExtensions_GetCustomAttribute_TisMarshalAsAttribute_t3522571978_m2166632158 (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, bool p1, const RuntimeMethod* method)
{
	return ((  MarshalAsAttribute_t3522571978 * (*) (RuntimeObject * /* static, unused */, ParameterInfo_t1861056598 *, bool, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m2144164683_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t MarshalAsAttribute_get_Value_m1222266980 (MarshalAsAttribute_t3522571978 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::SetMarshalAsParameter(System.Int32,System.Runtime.InteropServices.UnmanagedType)
extern "C" IL2CPP_METHOD_ATTR void MethodOrPropertySymbol_SetMarshalAsParameter_m2750967238 (MethodOrPropertySymbol_t2915275678 * __this, int32_t ___index0, int32_t ___umt1, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Runtime.CompilerServices.DateTimeConstantAttribute>(System.Reflection.ParameterInfo,System.Boolean)
inline DateTimeConstantAttribute_t375130962 * CustomAttributeExtensions_GetCustomAttribute_TisDateTimeConstantAttribute_t375130962_m1416647332 (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, bool p1, const RuntimeMethod* method)
{
	return ((  DateTimeConstantAttribute_t375130962 * (*) (RuntimeObject * /* static, unused */, ParameterInfo_t1861056598 *, bool, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m2144164683_gshared)(__this /* static, unused */, p0, p1, method);
}
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.Int64)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m937917375 (RuntimeObject * __this /* static, unused */, int64_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol::SetDefaultParameterValue(System.Int32,Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal)
extern "C" IL2CPP_METHOD_ATTR void MethodOrPropertySymbol_SetDefaultParameterValue_m4205833015 (MethodOrPropertySymbol_t2915275678 * __this, int32_t ___index0, CType_t1813387470 * ___type1, ConstVal_t1597617476  ___cv2, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Reflection.ParameterInfo)
inline DecimalConstantAttribute_t1976047975 * CustomAttributeExtensions_GetCustomAttribute_TisDecimalConstantAttribute_t1976047975_m3679650293 (RuntimeObject * __this /* static, unused */, ParameterInfo_t1861056598 * p0, const RuntimeMethod* method)
{
	return ((  DecimalConstantAttribute_t1976047975 * (*) (RuntimeObject * /* static, unused */, ParameterInfo_t1861056598 *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m1045040275_gshared)(__this /* static, unused */, p0, method);
}
// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::get_Value()
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  DecimalConstantAttribute_get_Value_m2842993264 (DecimalConstantAttribute_t1976047975 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m3246233736 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C" IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m480753082 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m937524154 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.Single)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m1139800877 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.Double)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m2322407324 (RuntimeObject * __this /* static, unused */, double ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m1109629884 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m3180580785 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.UInt64)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m48216295 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal Microsoft.CSharp.RuntimeBinder.Semantics.ConstVal::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR ConstVal_t1597617476  ConstVal_Get_m971466612 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetTypeOfParameter(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_GetTypeOfParameter_m2694454471 (SymbolTable_t2007508464 * __this, ParameterInfo_t1861056598 * ___p0, MemberInfo_t * ___m1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.ArgumentListType Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager::GetArgListType()
extern "C" IL2CPP_METHOD_ATTR ArgumentListType_t3380992639 * TypeManager_GetArgListType_m3444419805 (TypeManager_t4140799422 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m2351077054 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, MemberInfo_t * p1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::FindMethodFromMemberInfo(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymbolTable_FindMethodFromMemberInfo_m2223710338 (SymbolTable_t2007508464 * __this, MemberInfo_t * ___baseMemberInfo0, const RuntimeMethod* method);
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" IL2CPP_METHOD_ATTR bool ParameterInfo_get_IsOut_m867677222 (ParameterInfo_t1861056598 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" IL2CPP_METHOD_ATTR bool ParameterInfo_get_IsIn_m1278224586 (ParameterInfo_t1861056598 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType::GetParameterType()
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * ParameterModifierType_GetParameterType_m488399978 (ParameterModifierType_t867882597 * __this, const RuntimeMethod* method);
// System.Exception Microsoft.CSharp.RuntimeBinder.Error::InternalCompilerError()
extern "C" IL2CPP_METHOD_ATTR Exception_t * Error_InternalCompilerError_m572151956 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType::.ctor(Microsoft.CSharp.RuntimeBinder.Semantics.Symbol,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR void SymWithType__ctor_m3807594455 (SymWithType_t1275985997 * __this, Symbol_t3348236047 * ___sym0, AggregateType_t567267003 * ___ats1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.Symbol Microsoft.CSharp.RuntimeBinder.Semantics.SymbolLoader::LookupAggMember(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t)
extern "C" IL2CPP_METHOD_ATTR Symbol_t3348236047 * SymbolLoader_LookupAggMember_m4112456114 (SymbolLoader_t2983914338 * __this, Name_t658191338 * ___name0, AggregateSymbol_t3146081271 * ___agg1, int64_t ___mask2, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddConversionsForOneType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddConversionsForOneType_m2033170488 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(!0)
inline bool HashSet_1_Add_m4258915900 (HashSet_1_t1048894234 * __this, Type_t * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1048894234 *, Type_t *, const RuntimeMethod*))HashSet_1_Add_m3343353213_gshared)(__this, p0, method);
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.Semantics.CType::GetBaseOrParameterOrElementType()
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * CType_GetBaseOrParameterOrElementType_m3054820432 (CType_t1813387470 * __this, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType::GetBounds()
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * TypeParameterType_GetBounds_m3786599685 (TypeParameterType_t171561091 * __this, const RuntimeMethod* method);
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
extern "C" IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2114985558 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.RuntimeBinderExtensions::HasSameMetadataDefinitionAs(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR bool RuntimeBinderExtensions_HasSameMetadataDefinitionAs_m1587284476 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___mi10, MemberInfo_t * ___mi21, const RuntimeMethod* method);
// System.String Microsoft.CSharp.RuntimeBinder.Syntax.Name::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Name_get_Text_m2490619376 (Name_t658191338 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::Equals(Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey)
extern "C" IL2CPP_METHOD_ATTR bool NameHashKey_Equals_m63292071 (NameHashKey_t2012175420 * __this, NameHashKey_t2012175420 * ___other0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NameTable__ctor_m1499832512 (NameTable_t1897568201 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Add(Microsoft.CSharp.RuntimeBinder.Syntax.Name)
extern "C" IL2CPP_METHOD_ATTR void NameTable_Add_m1946126680 (NameTable_t1897568201 * __this, Name_t658191338 * ___name0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Lookup(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Lookup_m2347088846 (NameTable_t1897568201 * __this, String_t* ___key0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Add(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Add_m25256284 (NameTable_t1897568201 * __this, String_t* ___key0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Lookup(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Lookup_m2130697690 (NameTable_t1897568201 * __this, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Add(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Add_m2509265472 (NameTable_t1897568201 * __this, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.Name::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Name__ctor_m3223606436 (Name_t658191338 * __this, String_t* ___text0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::GetKnownNames()
extern "C" IL2CPP_METHOD_ATTR NameTable_t1897568201 * NameManager_GetKnownNames_m3242543041 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::ComputeHashCode(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NameTable_ComputeHashCode_m1803052549 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method);
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::AddEntry(Microsoft.CSharp.RuntimeBinder.Syntax.Name,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_AddEntry_m881532682 (NameTable_t1897568201 * __this, Name_t658191338 * ___name0, int32_t ___hashCode1, const RuntimeMethod* method);
// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::ComputeHashCode(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NameTable_ComputeHashCode_m3709987485 (RuntimeObject * __this /* static, unused */, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Equals(System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NameTable_Equals_m496338380 (RuntimeObject * __this /* static, unused */, String_t* ___candidate0, String_t* ___key1, int32_t ___length2, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry::.ctor(Microsoft.CSharp.RuntimeBinder.Syntax.Name,System.Int32,Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry)
extern "C" IL2CPP_METHOD_ATTR void Entry__ctor_m47334438 (Entry_t2595452246 * __this, Name_t658191338 * ___name0, int32_t ___hashCode1, Entry_t2595452246 * ___next2, const RuntimeMethod* method);
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Grow()
extern "C" IL2CPP_METHOD_ATTR void NameTable_Grow_m1567448162 (NameTable_t1897568201 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3179549879 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, RuntimeObject * p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TypeTable__ctor_m3178933407 (TypeTable_t2388713815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable__ctor_m3178933407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t3935352129 * L_0 = (Dictionary_2_t3935352129 *)il2cpp_codegen_object_new(Dictionary_2_t3935352129_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4245641307(L_0, /*hidden argument*/Dictionary_2__ctor_m4245641307_RuntimeMethod_var);
		__this->set__pAggregateTable_0(L_0);
		Dictionary_2_t547950121 * L_1 = (Dictionary_2_t547950121 *)il2cpp_codegen_object_new(Dictionary_2_t547950121_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2120213177(L_1, /*hidden argument*/Dictionary_2__ctor_m2120213177_RuntimeMethod_var);
		__this->set__pErrorWithNamespaceParentTable_3(L_1);
		Dictionary_2_t114597806 * L_2 = (Dictionary_2_t114597806 *)il2cpp_codegen_object_new(Dictionary_2_t114597806_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2364710614(L_2, /*hidden argument*/Dictionary_2__ctor_m2364710614_RuntimeMethod_var);
		__this->set__pArrayTable_1(L_2);
		Dictionary_2_t576429226 * L_3 = (Dictionary_2_t576429226 *)il2cpp_codegen_object_new(Dictionary_2_t576429226_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3655024239(L_3, /*hidden argument*/Dictionary_2__ctor_m3655024239_RuntimeMethod_var);
		__this->set__pParameterModifierTable_2(L_3);
		Dictionary_2_t2740155231 * L_4 = (Dictionary_2_t2740155231 *)il2cpp_codegen_object_new(Dictionary_2_t2740155231_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3291451977(L_4, /*hidden argument*/Dictionary_2__ctor_m3291451977_RuntimeMethod_var);
		__this->set__pPointerTable_4(L_4);
		Dictionary_2_t2328657215 * L_5 = (Dictionary_2_t2328657215 *)il2cpp_codegen_object_new(Dictionary_2_t2328657215_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2120827764(L_5, /*hidden argument*/Dictionary_2__ctor_m2120827764_RuntimeMethod_var);
		__this->set__pNullableTable_5(L_5);
		Dictionary_2_t2427355066 * L_6 = (Dictionary_2_t2427355066 *)il2cpp_codegen_object_new(Dictionary_2_t2427355066_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3448659714(L_6, /*hidden argument*/Dictionary_2__ctor_m3448659714_RuntimeMethod_var);
		__this->set__pTypeParameterTable_6(L_6);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupAggregate(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * TypeTable_LookupAggregate_m2675057522 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, AggregateSymbol_t3146081271 * ___pAggregate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupAggregate_m2675057522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyPair_2_t341216002  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AggregateType_t567267003 * V_1 = NULL;
	{
		AggregateSymbol_t3146081271 * L_0 = ___pAggregate1;
		Name_t658191338 * L_1 = ___pName0;
		KeyPair_2__ctor_m3073921541((KeyPair_2_t341216002 *)(&V_0), L_0, L_1, /*hidden argument*/KeyPair_2__ctor_m3073921541_RuntimeMethod_var);
		Dictionary_2_t3935352129 * L_2 = __this->get__pAggregateTable_0();
		KeyPair_2_t341216002  L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m3809907647(L_2, L_3, (AggregateType_t567267003 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3809907647_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		AggregateType_t567267003 * L_5 = V_1;
		return L_5;
	}

IL_001b:
	{
		return (AggregateType_t567267003 *)NULL;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertAggregate(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertAggregate_m1166588616 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, AggregateSymbol_t3146081271 * ___pAggregateSymbol1, AggregateType_t567267003 * ___pAggregate2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertAggregate_m1166588616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3935352129 * L_0 = __this->get__pAggregateTable_0();
		AggregateSymbol_t3146081271 * L_1 = ___pAggregateSymbol1;
		Name_t658191338 * L_2 = ___pName0;
		KeyPair_2_t341216002  L_3;
		memset(&L_3, 0, sizeof(L_3));
		KeyPair_2__ctor_m3073921541((&L_3), L_1, L_2, /*hidden argument*/KeyPair_2__ctor_m3073921541_RuntimeMethod_var);
		AggregateType_t567267003 * L_4 = ___pAggregate2;
		NullCheck(L_0);
		Dictionary_2_Add_m2873453433(L_0, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m2873453433_RuntimeMethod_var);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupError(Microsoft.CSharp.RuntimeBinder.Syntax.Name)
extern "C" IL2CPP_METHOD_ATTR ErrorType_t685300011 * TypeTable_LookupError_m1465588241 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupError_m1465588241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorType_t685300011 * V_0 = NULL;
	{
		Dictionary_2_t547950121 * L_0 = __this->get__pErrorWithNamespaceParentTable_3();
		Name_t658191338 * L_1 = ___pName0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m3629326551(L_0, L_1, (ErrorType_t685300011 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3629326551_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (ErrorType_t685300011 *)NULL;
	}

IL_0012:
	{
		ErrorType_t685300011 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertError(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.ErrorType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertError_m1163229745 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, ErrorType_t685300011 * ___pError1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertError_m1163229745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t547950121 * L_0 = __this->get__pErrorWithNamespaceParentTable_3();
		Name_t658191338 * L_1 = ___pName0;
		ErrorType_t685300011 * L_2 = ___pError1;
		NullCheck(L_0);
		Dictionary_2_Add_m3125345227(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m3125345227_RuntimeMethod_var);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupArray(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR ArrayType_t406051177 * TypeTable_LookupArray_m3678107377 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, CType_t1813387470 * ___pElementType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupArray_m3678107377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyPair_2_t3498527983  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ArrayType_t406051177 * V_1 = NULL;
	{
		CType_t1813387470 * L_0 = ___pElementType1;
		Name_t658191338 * L_1 = ___pName0;
		KeyPair_2__ctor_m1514348969((KeyPair_2_t3498527983 *)(&V_0), L_0, L_1, /*hidden argument*/KeyPair_2__ctor_m1514348969_RuntimeMethod_var);
		Dictionary_2_t114597806 * L_2 = __this->get__pArrayTable_1();
		KeyPair_2_t3498527983  L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m2292784380(L_2, L_3, (ArrayType_t406051177 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m2292784380_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		ArrayType_t406051177 * L_5 = V_1;
		return L_5;
	}

IL_001b:
	{
		return (ArrayType_t406051177 *)NULL;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertArray(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.ArrayType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertArray_m1277670687 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, CType_t1813387470 * ___pElementType1, ArrayType_t406051177 * ___pArray2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertArray_m1277670687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t114597806 * L_0 = __this->get__pArrayTable_1();
		CType_t1813387470 * L_1 = ___pElementType1;
		Name_t658191338 * L_2 = ___pName0;
		KeyPair_2_t3498527983  L_3;
		memset(&L_3, 0, sizeof(L_3));
		KeyPair_2__ctor_m1514348969((&L_3), L_1, L_2, /*hidden argument*/KeyPair_2__ctor_m1514348969_RuntimeMethod_var);
		ArrayType_t406051177 * L_4 = ___pArray2;
		NullCheck(L_0);
		Dictionary_2_Add_m2500642537(L_0, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m2500642537_RuntimeMethod_var);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupParameterModifier(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR ParameterModifierType_t867882597 * TypeTable_LookupParameterModifier_m240128633 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, CType_t1813387470 * ___pElementType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupParameterModifier_m240128633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyPair_2_t3498527983  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ParameterModifierType_t867882597 * V_1 = NULL;
	{
		CType_t1813387470 * L_0 = ___pElementType1;
		Name_t658191338 * L_1 = ___pName0;
		KeyPair_2__ctor_m1514348969((KeyPair_2_t3498527983 *)(&V_0), L_0, L_1, /*hidden argument*/KeyPair_2__ctor_m1514348969_RuntimeMethod_var);
		Dictionary_2_t576429226 * L_2 = __this->get__pParameterModifierTable_2();
		KeyPair_2_t3498527983  L_3 = V_0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m3631865121(L_2, L_3, (ParameterModifierType_t867882597 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3631865121_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		ParameterModifierType_t867882597 * L_5 = V_1;
		return L_5;
	}

IL_001b:
	{
		return (ParameterModifierType_t867882597 *)NULL;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertParameterModifier(Microsoft.CSharp.RuntimeBinder.Syntax.Name,Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.ParameterModifierType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertParameterModifier_m3448137605 (TypeTable_t2388713815 * __this, Name_t658191338 * ___pName0, CType_t1813387470 * ___pElementType1, ParameterModifierType_t867882597 * ___pParameterModifier2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertParameterModifier_m3448137605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t576429226 * L_0 = __this->get__pParameterModifierTable_2();
		CType_t1813387470 * L_1 = ___pElementType1;
		Name_t658191338 * L_2 = ___pName0;
		KeyPair_2_t3498527983  L_3;
		memset(&L_3, 0, sizeof(L_3));
		KeyPair_2__ctor_m1514348969((&L_3), L_1, L_2, /*hidden argument*/KeyPair_2__ctor_m1514348969_RuntimeMethod_var);
		ParameterModifierType_t867882597 * L_4 = ___pParameterModifier2;
		NullCheck(L_0);
		Dictionary_2_Add_m3573383026(L_0, L_3, L_4, /*hidden argument*/Dictionary_2_Add_m3573383026_RuntimeMethod_var);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.PointerType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupPointer(Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR PointerType_t3368101717 * TypeTable_LookupPointer_m1685330680 (TypeTable_t2388713815 * __this, CType_t1813387470 * ___pElementType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupPointer_m1685330680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PointerType_t3368101717 * V_0 = NULL;
	{
		Dictionary_2_t2740155231 * L_0 = __this->get__pPointerTable_4();
		CType_t1813387470 * L_1 = ___pElementType0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m2480496911(L_0, L_1, (PointerType_t3368101717 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2480496911_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		PointerType_t3368101717 * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		return (PointerType_t3368101717 *)NULL;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertPointer(Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.PointerType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertPointer_m2432804579 (TypeTable_t2388713815 * __this, CType_t1813387470 * ___pElementType0, PointerType_t3368101717 * ___pPointer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertPointer_m2432804579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2740155231 * L_0 = __this->get__pPointerTable_4();
		CType_t1813387470 * L_1 = ___pElementType0;
		PointerType_t3368101717 * L_2 = ___pPointer1;
		NullCheck(L_0);
		Dictionary_2_Add_m3367739367(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m3367739367_RuntimeMethod_var);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.NullableType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupNullable(Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR NullableType_t2956603701 * TypeTable_LookupNullable_m2322885888 (TypeTable_t2388713815 * __this, CType_t1813387470 * ___pUnderlyingType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupNullable_m2322885888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NullableType_t2956603701 * V_0 = NULL;
	{
		Dictionary_2_t2328657215 * L_0 = __this->get__pNullableTable_5();
		CType_t1813387470 * L_1 = ___pUnderlyingType0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1777129988(L_0, L_1, (NullableType_t2956603701 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1777129988_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		NullableType_t2956603701 * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		return (NullableType_t2956603701 *)NULL;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertNullable(Microsoft.CSharp.RuntimeBinder.Semantics.CType,Microsoft.CSharp.RuntimeBinder.Semantics.NullableType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertNullable_m1904444865 (TypeTable_t2388713815 * __this, CType_t1813387470 * ___pUnderlyingType0, NullableType_t2956603701 * ___pNullable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertNullable_m1904444865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2328657215 * L_0 = __this->get__pNullableTable_5();
		CType_t1813387470 * L_1 = ___pUnderlyingType0;
		NullableType_t2956603701 * L_2 = ___pNullable1;
		NullCheck(L_0);
		Dictionary_2_Add_m3075073731(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m3075073731_RuntimeMethod_var);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::LookupTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * TypeTable_LookupTypeParameter_m1864502406 (TypeTable_t2388713815 * __this, TypeParameterSymbol_t755586405 * ___pTypeParameterSymbol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_LookupTypeParameter_m1864502406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeParameterType_t171561091 * V_0 = NULL;
	{
		Dictionary_2_t2427355066 * L_0 = __this->get__pTypeParameterTable_6();
		TypeParameterSymbol_t755586405 * L_1 = ___pTypeParameterSymbol0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m4175426288(L_0, L_1, (TypeParameterType_t171561091 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m4175426288_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		TypeParameterType_t171561091 * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		return (TypeParameterType_t171561091 *)NULL;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.TypeTable::InsertTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType)
extern "C" IL2CPP_METHOD_ATTR void TypeTable_InsertTypeParameter_m812041020 (TypeTable_t2388713815 * __this, TypeParameterSymbol_t755586405 * ___pTypeParameterSymbol0, TypeParameterType_t171561091 * ___pTypeParameter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeTable_InsertTypeParameter_m812041020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t2427355066 * L_0 = __this->get__pTypeParameterTable_6();
		TypeParameterSymbol_t755586405 * L_1 = ___pTypeParameterSymbol0;
		TypeParameterType_t171561091 * L_2 = ___pTypeParameter1;
		NullCheck(L_0);
		Dictionary_2_Add_m546338113(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m546338113_RuntimeMethod_var);
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
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UdConvInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UdConvInfo__ctor_m1195765008 (UdConvInfo_t2042074985 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions::TypeAndBaseClasses(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UtilityTypeExtensions_TypeAndBaseClasses_m3640929811 (RuntimeObject * __this /* static, unused */, AggregateType_t567267003 * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilityTypeExtensions_TypeAndBaseClasses_m3640929811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeAndBaseClassesU3Ed__0_t996690076 * L_0 = (U3CTypeAndBaseClassesU3Ed__0_t996690076 *)il2cpp_codegen_object_new(U3CTypeAndBaseClassesU3Ed__0_t996690076_il2cpp_TypeInfo_var);
		U3CTypeAndBaseClassesU3Ed__0__ctor_m253825240(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CTypeAndBaseClassesU3Ed__0_t996690076 * L_1 = L_0;
		AggregateType_t567267003 * L_2 = ___type0;
		NullCheck(L_1);
		L_1->set_U3CU3E3__type_4(L_2);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions::TypeAndBaseClassInterfaces(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UtilityTypeExtensions_TypeAndBaseClassInterfaces_m3294773857 (RuntimeObject * __this /* static, unused */, AggregateType_t567267003 * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilityTypeExtensions_TypeAndBaseClassInterfaces_m3294773857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * L_0 = (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 *)il2cpp_codegen_object_new(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835_il2cpp_TypeInfo_var);
		U3CTypeAndBaseClassInterfacesU3Ed__1__ctor_m2824774113(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * L_1 = L_0;
		AggregateType_t567267003 * L_2 = ___type0;
		NullCheck(L_1);
		L_1->set_U3CU3E3__type_4(L_2);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions::AllPossibleInterfaces(Microsoft.CSharp.RuntimeBinder.Semantics.CType)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UtilityTypeExtensions_AllPossibleInterfaces_m2993268347 (RuntimeObject * __this /* static, unused */, CType_t1813387470 * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UtilityTypeExtensions_AllPossibleInterfaces_m2993268347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AggregateType_t567267003 * V_0 = NULL;
	{
		CType_t1813387470 * L_0 = ___type0;
		AggregateType_t567267003 * L_1 = ((AggregateType_t567267003 *)IsInstSealed((RuntimeObject*)L_0, AggregateType_t567267003_il2cpp_TypeInfo_var));
		V_0 = L_1;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		AggregateType_t567267003 * L_2 = V_0;
		RuntimeObject* L_3 = UtilityTypeExtensions_TypeAndBaseClassInterfaces_m3294773857(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		AggregateTypeU5BU5D_t3291885562* L_4 = Array_Empty_TisAggregateType_t567267003_m1378685715(NULL /*static, unused*/, /*hidden argument*/Array_Empty_TisAggregateType_t567267003_m1378685715_RuntimeMethod_var);
		return (RuntimeObject*)L_4;
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
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1__ctor_m2824774113 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m3454612449(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1_System_IDisposable_Dispose_m1064914154 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CTypeAndBaseClassInterfacesU3Ed__1_U3CU3Em__Finally1_m3844411874(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTypeAndBaseClassInterfacesU3Ed__1_MoveNext_m822745273 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTypeAndBaseClassInterfacesU3Ed__1_MoveNext_m822745273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	AggregateType_t567267003 * V_2 = NULL;
	AggregateType_t567267003 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0087;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00dc;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			AggregateType_t567267003 * L_3 = __this->get_type_3();
			RuntimeObject* L_4 = UtilityTypeExtensions_TypeAndBaseClasses_m3640929811(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>::GetEnumerator() */, IEnumerable_1_t3842087188_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_5(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00b4;
		}

IL_003c:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_6);
			AggregateType_t567267003 * L_7 = InterfaceFuncInvoker0< AggregateType_t567267003 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>::get_Current() */, IEnumerator_1_t999837471_il2cpp_TypeInfo_var, L_6);
			V_2 = L_7;
			AggregateType_t567267003 * L_8 = V_2;
			NullCheck(L_8);
			TypeArray_t2467755373 * L_9 = AggregateType_GetIfacesAll_m3692159419(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			CTypeU5BU5D_t868586555* L_10 = TypeArray_get_Items_m3402575676(L_9, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_6(L_10);
			__this->set_U3CU3E7__wrap3_7(0);
			goto IL_009d;
		}

IL_0062:
		{
			CTypeU5BU5D_t868586555* L_11 = __this->get_U3CU3E7__wrap2_6();
			int32_t L_12 = __this->get_U3CU3E7__wrap3_7();
			NullCheck(L_11);
			int32_t L_13 = L_12;
			CType_t1813387470 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			V_3 = ((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_14, AggregateType_t567267003_il2cpp_TypeInfo_var));
			AggregateType_t567267003 * L_15 = V_3;
			__this->set_U3CU3E2__current_1(L_15);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00dc;
		}

IL_0087:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			int32_t L_16 = __this->get_U3CU3E7__wrap3_7();
			__this->set_U3CU3E7__wrap3_7(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		}

IL_009d:
		{
			int32_t L_17 = __this->get_U3CU3E7__wrap3_7();
			CTypeU5BU5D_t868586555* L_18 = __this->get_U3CU3E7__wrap2_6();
			NullCheck(L_18);
			if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
			{
				goto IL_0062;
			}
		}

IL_00ad:
		{
			__this->set_U3CU3E7__wrap2_6((CTypeU5BU5D_t868586555*)NULL);
		}

IL_00b4:
		{
			RuntimeObject* L_19 = __this->get_U3CU3E7__wrap1_5();
			NullCheck(L_19);
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_003c;
			}
		}

IL_00c4:
		{
			U3CTypeAndBaseClassInterfacesU3Ed__1_U3CU3Em__Finally1_m3844411874(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00dc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00d5;
	}

FAULT_00d5:
	{ // begin fault (depth: 1)
		U3CTypeAndBaseClassInterfacesU3Ed__1_System_IDisposable_Dispose_m1064914154(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(213)
	} // end fault
	IL2CPP_CLEANUP(213)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dc:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::<>m__Finally1()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1_U3CU3Em__Finally1_m3844411874 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTypeAndBaseClassInterfacesU3Ed__1_U3CU3Em__Finally1_m3844411874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_5();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.Collections.Generic.IEnumerator<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>.get_Current()
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_Generic_IEnumeratorU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_get_Current_m2940767894 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	{
		AggregateType_t567267003 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerator_Reset_m2472016766 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerator_Reset_m2472016766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerator_Reset_m2472016766_RuntimeMethod_var);
	}
}
// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerator_get_Current_m3554571327 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	{
		AggregateType_t567267003 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.Collections.Generic.IEnumerable<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m625853650 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m625853650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m3454612449(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * L_3 = (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 *)il2cpp_codegen_object_new(U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835_il2cpp_TypeInfo_var);
		U3CTypeAndBaseClassInterfacesU3Ed__1__ctor_m2824774113(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * L_4 = V_0;
		AggregateType_t567267003 * L_5 = __this->get_U3CU3E3__type_4();
		NullCheck(L_4);
		L_4->set_type_3(L_5);
		U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClassInterfaces>d__1::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_IEnumerable_GetEnumerator_m778508554 (U3CTypeAndBaseClassInterfacesU3Ed__1_t3739288835 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CTypeAndBaseClassInterfacesU3Ed__1_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m625853650(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassesU3Ed__0__ctor_m253825240 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m3454612449(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassesU3Ed__0_System_IDisposable_Dispose_m3920583499 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTypeAndBaseClassesU3Ed__0_MoveNext_m4039425876 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		AggregateType_t567267003 * L_3 = __this->get_type_3();
		__this->set_U3CtU3E5__1_5(L_3);
		goto IL_0052;
	}

IL_0025:
	{
		AggregateType_t567267003 * L_4 = __this->get_U3CtU3E5__1_5();
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		AggregateType_t567267003 * L_5 = __this->get_U3CtU3E5__1_5();
		NullCheck(L_5);
		AggregateType_t567267003 * L_6 = AggregateType_GetBaseClass_m73800278(L_5, /*hidden argument*/NULL);
		__this->set_U3CtU3E5__1_5(L_6);
	}

IL_0052:
	{
		AggregateType_t567267003 * L_7 = __this->get_U3CtU3E5__1_5();
		if (L_7)
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.Collections.Generic.IEnumerator<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>.get_Current()
extern "C" IL2CPP_METHOD_ATTR AggregateType_t567267003 * U3CTypeAndBaseClassesU3Ed__0_System_Collections_Generic_IEnumeratorU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_get_Current_m449551735 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	{
		AggregateType_t567267003 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerator_Reset_m2538462950 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerator_Reset_m2538462950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerator_Reset_m2538462950_RuntimeMethod_var);
	}
}
// System.Object Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerator_get_Current_m3953533885 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	{
		AggregateType_t567267003 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType> Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.Collections.Generic.IEnumerable<Microsoft.CSharp.RuntimeBinder.Semantics.AggregateType>.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeAndBaseClassesU3Ed__0_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m598945477 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTypeAndBaseClassesU3Ed__0_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m598945477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CTypeAndBaseClassesU3Ed__0_t996690076 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m3454612449(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CTypeAndBaseClassesU3Ed__0_t996690076 * L_3 = (U3CTypeAndBaseClassesU3Ed__0_t996690076 *)il2cpp_codegen_object_new(U3CTypeAndBaseClassesU3Ed__0_t996690076_il2cpp_TypeInfo_var);
		U3CTypeAndBaseClassesU3Ed__0__ctor_m253825240(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CTypeAndBaseClassesU3Ed__0_t996690076 * L_4 = V_0;
		AggregateType_t567267003 * L_5 = __this->get_U3CU3E3__type_4();
		NullCheck(L_4);
		L_4->set_type_3(L_5);
		U3CTypeAndBaseClassesU3Ed__0_t996690076 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Microsoft.CSharp.RuntimeBinder.Semantics.UtilityTypeExtensions/<TypeAndBaseClasses>d__0::System.Collections.IEnumerable.GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeAndBaseClassesU3Ed__0_System_Collections_IEnumerable_GetEnumerator_m1663773760 (U3CTypeAndBaseClassesU3Ed__0_t996690076 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CTypeAndBaseClassesU3Ed__0_System_Collections_Generic_IEnumerableU3CMicrosoft_CSharp_RuntimeBinder_Semantics_AggregateTypeU3E_GetEnumerator_m598945477(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.VariableSymbol::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VariableSymbol__ctor_m63159419 (VariableSymbol_t2682349060 * __this, const RuntimeMethod* method)
{
	{
		Symbol__ctor_m2813559832(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.CSharp.RuntimeBinder.Semantics.VoidType::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VoidType__ctor_m1666285651 (VoidType_t3686515033 * __this, const RuntimeMethod* method)
{
	{
		CType__ctor_m2877244391(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::.ctor(Microsoft.CSharp.RuntimeBinder.Semantics.SYMTBL,Microsoft.CSharp.RuntimeBinder.Semantics.SymFactory,Microsoft.CSharp.RuntimeBinder.Syntax.NameManager,Microsoft.CSharp.RuntimeBinder.Semantics.TypeManager,Microsoft.CSharp.RuntimeBinder.Semantics.BSYMMGR,Microsoft.CSharp.RuntimeBinder.Semantics.CSemanticChecker)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable__ctor_m209891920 (SymbolTable_t2007508464 * __this, SYMTBL_t752690877 * ___symTable0, SymFactory_t300688847 * ___symFactory1, NameManager_t1767112997 * ___nameManager2, TypeManager_t4140799422 * ___typeManager3, BSYMMGR_t2938027401 * ___bsymmgr4, CSemanticChecker_t1535940568 * ___semanticChecker5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable__ctor_m209891920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t1048894234 * L_0 = (HashSet_1_t1048894234 *)il2cpp_codegen_object_new(HashSet_1_t1048894234_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m2199668542(L_0, /*hidden argument*/HashSet_1__ctor_m2199668542_RuntimeMethod_var);
		__this->set__typesWithConversionsLoaded_0(L_0);
		HashSet_1_t577124894 * L_1 = (HashSet_1_t577124894 *)il2cpp_codegen_object_new(HashSet_1_t577124894_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m379792657(L_1, /*hidden argument*/HashSet_1__ctor_m379792657_RuntimeMethod_var);
		__this->set__namesLoadedForEachType_1(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SYMTBL_t752690877 * L_2 = ___symTable0;
		__this->set__symbolTable_2(L_2);
		SymFactory_t300688847 * L_3 = ___symFactory1;
		__this->set__symFactory_3(L_3);
		NameManager_t1767112997 * L_4 = ___nameManager2;
		__this->set__nameManager_4(L_4);
		TypeManager_t4140799422 * L_5 = ___typeManager3;
		__this->set__typeManager_5(L_5);
		BSYMMGR_t2938027401 * L_6 = ___bsymmgr4;
		__this->set__bsymmgr_6(L_6);
		CSemanticChecker_t1535940568 * L_7 = ___semanticChecker5;
		__this->set__semanticChecker_7(L_7);
		BSYMMGR_t2938027401 * L_8 = __this->get__bsymmgr_6();
		NullCheck(L_8);
		NamespaceSymbol_t4294485991 * L_9 = BSYMMGR_GetRootNS_m1474076324(L_8, /*hidden argument*/NULL);
		__this->set__rootNamespace_8(L_9);
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		SymbolTable_LoadSymbolsFromType_m2262646512(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::PopulateSymbolTableWithName(System.String,System.Collections.Generic.IEnumerable`1<System.Type>,System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_PopulateSymbolTableWithName_m2474176076 (SymbolTable_t2007508464 * __this, String_t* ___name0, RuntimeObject* ___typeArguments1, Type_t * ___callingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_PopulateSymbolTableWithName_m2474176076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NameHashKey_t2012175420 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		Type_t * L_0 = ___callingType2;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_2 = ___callingType2;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		___callingType2 = L_3;
	}

IL_0010:
	{
		String_t* L_4 = ___name0;
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_4, _stringLiteral167031539, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_6 = ___callingType2;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		String_t* L_7 = RuntimeBinderExtensions_GetIndexerName_m2156236012(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		String_t* L_8 = L_7;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_002c;
		}
	}
	{
		G_B5_0 = _stringLiteral167031539;
	}

IL_002c:
	{
		___name0 = G_B5_0;
	}

IL_002e:
	{
		Type_t * L_9 = ___callingType2;
		String_t* L_10 = ___name0;
		NameHashKey_t2012175420 * L_11 = (NameHashKey_t2012175420 *)il2cpp_codegen_object_new(NameHashKey_t2012175420_il2cpp_TypeInfo_var);
		NameHashKey__ctor_m2404976955(L_11, L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		HashSet_1_t577124894 * L_12 = __this->get__namesLoadedForEachType_1();
		NameHashKey_t2012175420 * L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = HashSet_1_Contains_m3356321002(L_12, L_13, /*hidden argument*/HashSet_1_Contains_m3356321002_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		return;
	}

IL_0045:
	{
		NameHashKey_t2012175420 * L_15 = V_0;
		SymbolTable_AddNamesOnType_m3786497449(__this, L_15, /*hidden argument*/NULL);
		RuntimeObject* L_16 = ___typeArguments1;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_17 = ___typeArguments1;
		NullCheck(L_17);
		RuntimeObject* L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t1463797649_il2cpp_TypeInfo_var, L_17);
		V_1 = L_18;
	}

IL_0056:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0066;
		}

IL_0058:
		{
			RuntimeObject* L_19 = V_1;
			NullCheck(L_19);
			Type_t * L_20 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t2916515228_il2cpp_TypeInfo_var, L_19);
			V_2 = L_20;
			Type_t * L_21 = V_2;
			SymbolTable_AddConversionsForType_m2635794899(__this, L_21, /*hidden argument*/NULL);
		}

IL_0066:
		{
			RuntimeObject* L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0058;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_1;
			if (!L_24)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(112)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.SymbolTable::LookupMember(System.String,Microsoft.CSharp.RuntimeBinder.Semantics.Expr,Microsoft.CSharp.RuntimeBinder.Semantics.ParentSymbol,System.Int32,Microsoft.CSharp.RuntimeBinder.Semantics.MemberLookup,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR SymWithType_t1275985997 * SymbolTable_LookupMember_m3844349791 (SymbolTable_t2007508464 * __this, String_t* ___name0, Expr_t1372271848 * ___callingObject1, ParentSymbol_t84807579 * ___context2, int32_t ___arity3, MemberLookup_t2241756900 * ___mem4, bool ___allowSpecialNames5, bool ___requireInvocable6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_LookupMember_m3844349791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CType_t1813387470 * V_0 = NULL;
	NullableType_t2956603701 * V_1 = NULL;
	int32_t G_B6_0 = 0;
	Name_t658191338 * G_B6_1 = NULL;
	ParentSymbol_t84807579 * G_B6_2 = NULL;
	Expr_t1372271848 * G_B6_3 = NULL;
	CType_t1813387470 * G_B6_4 = NULL;
	CSemanticChecker_t1535940568 * G_B6_5 = NULL;
	MemberLookup_t2241756900 * G_B6_6 = NULL;
	int32_t G_B5_0 = 0;
	Name_t658191338 * G_B5_1 = NULL;
	ParentSymbol_t84807579 * G_B5_2 = NULL;
	Expr_t1372271848 * G_B5_3 = NULL;
	CType_t1813387470 * G_B5_4 = NULL;
	CSemanticChecker_t1535940568 * G_B5_5 = NULL;
	MemberLookup_t2241756900 * G_B5_6 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	Name_t658191338 * G_B7_2 = NULL;
	ParentSymbol_t84807579 * G_B7_3 = NULL;
	Expr_t1372271848 * G_B7_4 = NULL;
	CType_t1813387470 * G_B7_5 = NULL;
	CSemanticChecker_t1535940568 * G_B7_6 = NULL;
	MemberLookup_t2241756900 * G_B7_7 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Name_t658191338 * G_B9_2 = NULL;
	ParentSymbol_t84807579 * G_B9_3 = NULL;
	Expr_t1372271848 * G_B9_4 = NULL;
	CType_t1813387470 * G_B9_5 = NULL;
	CSemanticChecker_t1535940568 * G_B9_6 = NULL;
	MemberLookup_t2241756900 * G_B9_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Name_t658191338 * G_B8_2 = NULL;
	ParentSymbol_t84807579 * G_B8_3 = NULL;
	Expr_t1372271848 * G_B8_4 = NULL;
	CType_t1813387470 * G_B8_5 = NULL;
	CSemanticChecker_t1535940568 * G_B8_6 = NULL;
	MemberLookup_t2241756900 * G_B8_7 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	Name_t658191338 * G_B10_3 = NULL;
	ParentSymbol_t84807579 * G_B10_4 = NULL;
	Expr_t1372271848 * G_B10_5 = NULL;
	CType_t1813387470 * G_B10_6 = NULL;
	CSemanticChecker_t1535940568 * G_B10_7 = NULL;
	MemberLookup_t2241756900 * G_B10_8 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	Name_t658191338 * G_B12_2 = NULL;
	ParentSymbol_t84807579 * G_B12_3 = NULL;
	Expr_t1372271848 * G_B12_4 = NULL;
	CType_t1813387470 * G_B12_5 = NULL;
	CSemanticChecker_t1535940568 * G_B12_6 = NULL;
	MemberLookup_t2241756900 * G_B12_7 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Name_t658191338 * G_B11_2 = NULL;
	ParentSymbol_t84807579 * G_B11_3 = NULL;
	Expr_t1372271848 * G_B11_4 = NULL;
	CType_t1813387470 * G_B11_5 = NULL;
	CSemanticChecker_t1535940568 * G_B11_6 = NULL;
	MemberLookup_t2241756900 * G_B11_7 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	Name_t658191338 * G_B13_3 = NULL;
	ParentSymbol_t84807579 * G_B13_4 = NULL;
	Expr_t1372271848 * G_B13_5 = NULL;
	CType_t1813387470 * G_B13_6 = NULL;
	CSemanticChecker_t1535940568 * G_B13_7 = NULL;
	MemberLookup_t2241756900 * G_B13_8 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	Name_t658191338 * G_B15_2 = NULL;
	ParentSymbol_t84807579 * G_B15_3 = NULL;
	Expr_t1372271848 * G_B15_4 = NULL;
	CType_t1813387470 * G_B15_5 = NULL;
	CSemanticChecker_t1535940568 * G_B15_6 = NULL;
	MemberLookup_t2241756900 * G_B15_7 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	Name_t658191338 * G_B14_2 = NULL;
	ParentSymbol_t84807579 * G_B14_3 = NULL;
	Expr_t1372271848 * G_B14_4 = NULL;
	CType_t1813387470 * G_B14_5 = NULL;
	CSemanticChecker_t1535940568 * G_B14_6 = NULL;
	MemberLookup_t2241756900 * G_B14_7 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	Name_t658191338 * G_B16_3 = NULL;
	ParentSymbol_t84807579 * G_B16_4 = NULL;
	Expr_t1372271848 * G_B16_5 = NULL;
	CType_t1813387470 * G_B16_6 = NULL;
	CSemanticChecker_t1535940568 * G_B16_7 = NULL;
	MemberLookup_t2241756900 * G_B16_8 = NULL;
	{
		Expr_t1372271848 * L_0 = ___callingObject1;
		NullCheck(L_0);
		CType_t1813387470 * L_1 = Expr_get_Type_m1482347846(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		CType_t1813387470 * L_2 = V_0;
		if (!((ArrayType_t406051177 *)IsInstSealed((RuntimeObject*)L_2, ArrayType_t406051177_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		CSemanticChecker_t1535940568 * L_3 = __this->get__semanticChecker_7();
		NullCheck(L_3);
		SymbolLoader_t2983914338 * L_4 = CSemanticChecker_get_SymbolLoader_m2577500808(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		AggregateType_t567267003 * L_5 = SymbolLoader_GetPredefindType_m3767020077(L_4, ((int32_t)19), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0022:
	{
		CType_t1813387470 * L_6 = V_0;
		NullableType_t2956603701 * L_7 = ((NullableType_t2956603701 *)IsInstSealed((RuntimeObject*)L_6, NullableType_t2956603701_il2cpp_TypeInfo_var));
		V_1 = L_7;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		NullableType_t2956603701 * L_8 = V_1;
		NullCheck(L_8);
		AggregateType_t567267003 * L_9 = NullableType_GetAts_m2570537238(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0033:
	{
		MemberLookup_t2241756900 * L_10 = ___mem4;
		CSemanticChecker_t1535940568 * L_11 = __this->get__semanticChecker_7();
		CType_t1813387470 * L_12 = V_0;
		Expr_t1372271848 * L_13 = ___callingObject1;
		ParentSymbol_t84807579 * L_14 = ___context2;
		String_t* L_15 = ___name0;
		Name_t658191338 * L_16 = SymbolTable_GetName_m1066594422(__this, L_15, /*hidden argument*/NULL);
		int32_t L_17 = ___arity3;
		bool L_18 = ___allowSpecialNames5;
		G_B5_0 = L_17;
		G_B5_1 = L_16;
		G_B5_2 = L_14;
		G_B5_3 = L_13;
		G_B5_4 = L_12;
		G_B5_5 = L_11;
		G_B5_6 = L_10;
		if (L_18)
		{
			G_B6_0 = L_17;
			G_B6_1 = L_16;
			G_B6_2 = L_14;
			G_B6_3 = L_13;
			G_B6_4 = L_12;
			G_B6_5 = L_11;
			G_B6_6 = L_10;
			goto IL_0052;
		}
	}
	{
		G_B7_0 = ((int32_t)256);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		G_B7_6 = G_B5_5;
		G_B7_7 = G_B5_6;
		goto IL_0053;
	}

IL_0052:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
		G_B7_6 = G_B6_5;
		G_B7_7 = G_B6_6;
	}

IL_0053:
	{
		String_t* L_19 = ___name0;
		bool L_20 = String_op_Equality_m920492651(NULL /*static, unused*/, L_19, _stringLiteral167031539, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
		G_B8_4 = G_B7_4;
		G_B8_5 = G_B7_5;
		G_B8_6 = G_B7_6;
		G_B8_7 = G_B7_7;
		if (L_20)
		{
			G_B9_0 = G_B7_0;
			G_B9_1 = G_B7_1;
			G_B9_2 = G_B7_2;
			G_B9_3 = G_B7_3;
			G_B9_4 = G_B7_4;
			G_B9_5 = G_B7_5;
			G_B9_6 = G_B7_6;
			G_B9_7 = G_B7_7;
			goto IL_0063;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		G_B10_4 = G_B8_3;
		G_B10_5 = G_B8_4;
		G_B10_6 = G_B8_5;
		G_B10_7 = G_B8_6;
		G_B10_8 = G_B8_7;
		goto IL_0064;
	}

IL_0063:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
		G_B10_4 = G_B9_3;
		G_B10_5 = G_B9_4;
		G_B10_6 = G_B9_5;
		G_B10_7 = G_B9_6;
		G_B10_8 = G_B9_7;
	}

IL_0064:
	{
		String_t* L_21 = ___name0;
		bool L_22 = String_op_Equality_m920492651(NULL /*static, unused*/, L_21, _stringLiteral1221375020, /*hidden argument*/NULL);
		G_B11_0 = ((int32_t)((int32_t)G_B10_1|(int32_t)G_B10_0));
		G_B11_1 = G_B10_2;
		G_B11_2 = G_B10_3;
		G_B11_3 = G_B10_4;
		G_B11_4 = G_B10_5;
		G_B11_5 = G_B10_6;
		G_B11_6 = G_B10_7;
		G_B11_7 = G_B10_8;
		if (L_22)
		{
			G_B12_0 = ((int32_t)((int32_t)G_B10_1|(int32_t)G_B10_0));
			G_B12_1 = G_B10_2;
			G_B12_2 = G_B10_3;
			G_B12_3 = G_B10_4;
			G_B12_4 = G_B10_5;
			G_B12_5 = G_B10_6;
			G_B12_6 = G_B10_7;
			G_B12_7 = G_B10_8;
			goto IL_0075;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		G_B13_4 = G_B11_3;
		G_B13_5 = G_B11_4;
		G_B13_6 = G_B11_5;
		G_B13_7 = G_B11_6;
		G_B13_8 = G_B11_7;
		goto IL_0076;
	}

IL_0075:
	{
		G_B13_0 = 2;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
		G_B13_5 = G_B12_4;
		G_B13_6 = G_B12_5;
		G_B13_7 = G_B12_6;
		G_B13_8 = G_B12_7;
	}

IL_0076:
	{
		bool L_23 = ___requireInvocable6;
		G_B14_0 = ((int32_t)((int32_t)G_B13_1|(int32_t)G_B13_0));
		G_B14_1 = G_B13_2;
		G_B14_2 = G_B13_3;
		G_B14_3 = G_B13_4;
		G_B14_4 = G_B13_5;
		G_B14_5 = G_B13_6;
		G_B14_6 = G_B13_7;
		G_B14_7 = G_B13_8;
		if (L_23)
		{
			G_B15_0 = ((int32_t)((int32_t)G_B13_1|(int32_t)G_B13_0));
			G_B15_1 = G_B13_2;
			G_B15_2 = G_B13_3;
			G_B15_3 = G_B13_4;
			G_B15_4 = G_B13_5;
			G_B15_5 = G_B13_6;
			G_B15_6 = G_B13_7;
			G_B15_7 = G_B13_8;
			goto IL_007e;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		G_B16_5 = G_B14_4;
		G_B16_6 = G_B14_5;
		G_B16_7 = G_B14_6;
		G_B16_8 = G_B14_7;
		goto IL_0083;
	}

IL_007e:
	{
		G_B16_0 = ((int32_t)536870912);
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
		G_B16_5 = G_B15_4;
		G_B16_6 = G_B15_5;
		G_B16_7 = G_B15_6;
		G_B16_8 = G_B15_7;
	}

IL_0083:
	{
		NullCheck(G_B16_8);
		bool L_24 = MemberLookup_Lookup_m2759281917(G_B16_8, G_B16_7, G_B16_6, G_B16_5, G_B16_4, G_B16_3, G_B16_2, ((int32_t)((int32_t)G_B16_1|(int32_t)G_B16_0)), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_008d;
		}
	}
	{
		return (SymWithType_t1275985997 *)NULL;
	}

IL_008d:
	{
		MemberLookup_t2241756900 * L_25 = ___mem4;
		NullCheck(L_25);
		SymWithType_t1275985997 * L_26 = MemberLookup_SwtFirst_m3060222568(L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddParameterConversions(System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddParameterConversions_m1951495065 (SymbolTable_t2007508464 * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	ParameterInfoU5BU5D_t390618515* V_0 = NULL;
	int32_t V_1 = 0;
	ParameterInfo_t1861056598 * V_2 = NULL;
	{
		MethodBase_t * L_0 = ___method0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t390618515* L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_000b:
	{
		ParameterInfoU5BU5D_t390618515* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParameterInfo_t1861056598 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		ParameterInfo_t1861056598 * L_6 = V_2;
		NullCheck(L_6);
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_6);
		SymbolTable_AddConversionsForType_m2635794899(__this, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		ParameterInfoU5BU5D_t390618515* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddNamesOnType(Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddNamesOnType_m3786497449 (SymbolTable_t2007508464 * __this, NameHashKey_t2012175420 * ___key0, const RuntimeMethod* method)
{
	List_1_t3956019502 * V_0 = NULL;
	{
		NameHashKey_t2012175420 * L_0 = ___key0;
		NullCheck(L_0);
		Type_t * L_1 = L_0->get_type_0();
		List_1_t3956019502 * L_2 = SymbolTable_CreateInheritanceHierarchyList_m2459147864(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		NameHashKey_t2012175420 * L_3 = ___key0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_1();
		List_1_t3956019502 * L_5 = V_0;
		SymbolTable_AddNamesInInheritanceHierarchy_m2733379745(__this, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddNamesInInheritanceHierarchy(System.String,System.Collections.Generic.List`1<System.Type>)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddNamesInInheritanceHierarchy_m2733379745 (SymbolTable_t2007508464 * __this, String_t* ___name0, List_1_t3956019502 * ___inheritance1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddNamesInInheritanceHierarchy_m2733379745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t2873125857 * V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass15_1_t916810721 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	List_1_t819628108 * V_4 = NULL;
	AggregateType_t567267003 * V_5 = NULL;
	AggregateSymbol_t3146081271 * V_6 = NULL;
	FieldSymbol_t2811293341 * V_7 = NULL;
	MemberInfo_t * V_8 = NULL;
	MethodInfo_t * V_9 = NULL;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	ConstructorInfo_t5769829 * V_12 = NULL;
	PropertyInfo_t * V_13 = NULL;
	FieldInfo_t * V_14 = NULL;
	EventInfo_t * V_15 = NULL;
	Enumerator_t2708871985  V_16;
	memset(&V_16, 0, sizeof(V_16));
	EventInfo_t * V_17 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	List_1_t819628108 * G_B26_0 = NULL;
	List_1_t819628108 * G_B25_0 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_t2873125857 * L_0 = (U3CU3Ec__DisplayClass15_0_t2873125857 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t2873125857_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_m2404963081(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t2873125857 * L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		L_1->set_name_0(L_2);
		List_1_t3956019502 * L_3 = ___inheritance1;
		NullCheck(L_3);
		int32_t L_4 = List_1_get_Count_m4094549910(L_3, /*hidden argument*/List_1_get_Count_m4094549910_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_0204;
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass15_1_t916810721 * L_5 = (U3CU3Ec__DisplayClass15_1_t916810721 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_1_t916810721_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_1__ctor_m2404963954(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		U3CU3Ec__DisplayClass15_1_t916810721 * L_6 = V_2;
		U3CU3Ec__DisplayClass15_0_t2873125857 * L_7 = V_0;
		NullCheck(L_6);
		L_6->set_CSU24U3CU3E8__locals1_1(L_7);
		U3CU3Ec__DisplayClass15_1_t916810721 * L_8 = V_2;
		List_1_t3956019502 * L_9 = ___inheritance1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		Type_t * L_11 = List_1_get_Item_m787150517(L_9, L_10, /*hidden argument*/List_1_get_Item_m787150517_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->set_type_0(L_11);
		U3CU3Ec__DisplayClass15_1_t916810721 * L_12 = V_2;
		NullCheck(L_12);
		Type_t * L_13 = L_12->get_type_0();
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		U3CU3Ec__DisplayClass15_1_t916810721 * L_15 = V_2;
		U3CU3Ec__DisplayClass15_1_t916810721 * L_16 = V_2;
		NullCheck(L_16);
		Type_t * L_17 = L_16->get_type_0();
		NullCheck(L_17);
		Type_t * L_18 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_17);
		NullCheck(L_15);
		L_15->set_type_0(L_18);
	}

IL_0053:
	{
		HashSet_1_t577124894 * L_19 = __this->get__namesLoadedForEachType_1();
		U3CU3Ec__DisplayClass15_1_t916810721 * L_20 = V_2;
		NullCheck(L_20);
		Type_t * L_21 = L_20->get_type_0();
		U3CU3Ec__DisplayClass15_1_t916810721 * L_22 = V_2;
		NullCheck(L_22);
		U3CU3Ec__DisplayClass15_0_t2873125857 * L_23 = L_22->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_23);
		String_t* L_24 = L_23->get_name_0();
		NameHashKey_t2012175420 * L_25 = (NameHashKey_t2012175420 *)il2cpp_codegen_object_new(NameHashKey_t2012175420_il2cpp_TypeInfo_var);
		NameHashKey__ctor_m2404976955(L_25, L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_26 = HashSet_1_Add_m917316575(L_19, L_25, /*hidden argument*/HashSet_1_Add_m917316575_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_0200;
		}
	}
	{
		U3CU3Ec__DisplayClass15_1_t916810721 * L_27 = V_2;
		NullCheck(L_27);
		Type_t * L_28 = L_27->get_type_0();
		NullCheck(L_28);
		MemberInfoU5BU5D_t1302094432* L_29 = VirtFuncInvoker1< MemberInfoU5BU5D_t1302094432*, int32_t >::Invoke(62 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_28, ((int32_t)60));
		U3CU3Ec__DisplayClass15_1_t916810721 * L_30 = V_2;
		intptr_t L_31 = (intptr_t)U3CU3Ec__DisplayClass15_1_U3CAddNamesInInheritanceHierarchyU3Eb__0_m1699310696_RuntimeMethod_var;
		Func_2_t2217434578 * L_32 = (Func_2_t2217434578 *)il2cpp_codegen_object_new(Func_2_t2217434578_il2cpp_TypeInfo_var);
		Func_2__ctor_m2384193652(L_32, L_30, (intptr_t)L_31, /*hidden argument*/Func_2__ctor_m2384193652_RuntimeMethod_var);
		RuntimeObject* L_33 = Enumerable_Where_TisMemberInfo_t_m3084826832(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_29, L_32, /*hidden argument*/Enumerable_Where_TisMemberInfo_t_m3084826832_RuntimeMethod_var);
		NullCheck(L_33);
		RuntimeObject* L_34 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t2359854630_il2cpp_TypeInfo_var, L_33);
		V_3 = L_34;
		RuntimeObject* L_35 = V_3;
		NullCheck(L_35);
		bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_35);
		if (!L_36)
		{
			goto IL_0200;
		}
	}
	{
		V_4 = (List_1_t819628108 *)NULL;
		U3CU3Ec__DisplayClass15_1_t916810721 * L_37 = V_2;
		NullCheck(L_37);
		Type_t * L_38 = L_37->get_type_0();
		CType_t1813387470 * L_39 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_38, /*hidden argument*/NULL);
		AggregateType_t567267003 * L_40 = ((AggregateType_t567267003 *)IsInstSealed((RuntimeObject*)L_39, AggregateType_t567267003_il2cpp_TypeInfo_var));
		V_5 = L_40;
		if (!L_40)
		{
			goto IL_0200;
		}
	}
	{
		AggregateType_t567267003 * L_41 = V_5;
		NullCheck(L_41);
		AggregateSymbol_t3146081271 * L_42 = CType_getAggregate_m653932837(L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		V_7 = (FieldSymbol_t2811293341 *)NULL;
	}

IL_00d0:
	{
		RuntimeObject* L_43 = V_3;
		NullCheck(L_43);
		MemberInfo_t * L_44 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t3812572209_il2cpp_TypeInfo_var, L_43);
		V_8 = L_44;
		MemberInfo_t * L_45 = V_8;
		MethodInfo_t * L_46 = ((MethodInfo_t *)IsInstClass((RuntimeObject*)L_45, MethodInfo_t_il2cpp_TypeInfo_var));
		V_9 = L_46;
		if (!L_46)
		{
			goto IL_0143;
		}
	}
	{
		MemberInfo_t * L_47 = V_8;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_47);
		V_11 = L_48;
		String_t* L_49 = V_11;
		bool L_50 = String_op_Equality_m920492651(NULL /*static, unused*/, L_49, _stringLiteral2401610308, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0119;
		}
	}
	{
		String_t* L_51 = V_11;
		bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral3306367446, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_011e;
		}
	}
	{
		String_t* L_53 = V_11;
		bool L_54 = String_op_Equality_m920492651(NULL /*static, unused*/, L_53, _stringLiteral2655463595, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_0123;
		}
	}
	{
		goto IL_0128;
	}

IL_0119:
	{
		V_10 = 8;
		goto IL_012c;
	}

IL_011e:
	{
		V_10 = 6;
		goto IL_012c;
	}

IL_0123:
	{
		V_10 = 5;
		goto IL_012c;
	}

IL_0128:
	{
		V_10 = ((int32_t)20);
	}

IL_012c:
	{
		MethodInfo_t * L_55 = V_9;
		AggregateSymbol_t3146081271 * L_56 = V_6;
		int32_t L_57 = V_10;
		SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_55, L_56, L_57, /*hidden argument*/NULL);
		MethodInfo_t * L_58 = V_9;
		SymbolTable_AddParameterConversions_m1951495065(__this, L_58, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_0143:
	{
		MemberInfo_t * L_59 = V_8;
		ConstructorInfo_t5769829 * L_60 = ((ConstructorInfo_t5769829 *)IsInstClass((RuntimeObject*)L_59, ConstructorInfo_t5769829_il2cpp_TypeInfo_var));
		V_12 = L_60;
		if (!L_60)
		{
			goto IL_0165;
		}
	}
	{
		ConstructorInfo_t5769829 * L_61 = V_12;
		AggregateSymbol_t3146081271 * L_62 = V_6;
		SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_61, L_62, 1, /*hidden argument*/NULL);
		ConstructorInfo_t5769829 * L_63 = V_12;
		SymbolTable_AddParameterConversions_m1951495065(__this, L_63, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_0165:
	{
		MemberInfo_t * L_64 = V_8;
		PropertyInfo_t * L_65 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_64, PropertyInfo_t_il2cpp_TypeInfo_var));
		V_13 = L_65;
		if (!L_65)
		{
			goto IL_017d;
		}
	}
	{
		PropertyInfo_t * L_66 = V_13;
		AggregateSymbol_t3146081271 * L_67 = V_6;
		SymbolTable_AddPropertyToSymbolTable_m2793273731(__this, L_66, L_67, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_017d:
	{
		MemberInfo_t * L_68 = V_8;
		FieldInfo_t * L_69 = ((FieldInfo_t *)IsInstClass((RuntimeObject*)L_68, FieldInfo_t_il2cpp_TypeInfo_var));
		V_14 = L_69;
		if (!L_69)
		{
			goto IL_0197;
		}
	}
	{
		FieldInfo_t * L_70 = V_14;
		AggregateSymbol_t3146081271 * L_71 = V_6;
		FieldSymbol_t2811293341 * L_72 = SymbolTable_AddFieldToSymbolTable_m2953080925(__this, L_70, L_71, /*hidden argument*/NULL);
		V_7 = L_72;
		goto IL_01b8;
	}

IL_0197:
	{
		MemberInfo_t * L_73 = V_8;
		EventInfo_t * L_74 = ((EventInfo_t *)IsInstClass((RuntimeObject*)L_73, EventInfo_t_il2cpp_TypeInfo_var));
		V_15 = L_74;
		if (!L_74)
		{
			goto IL_01b8;
		}
	}
	{
		List_1_t819628108 * L_75 = V_4;
		List_1_t819628108 * L_76 = L_75;
		G_B25_0 = L_76;
		if (L_76)
		{
			G_B26_0 = L_76;
			goto IL_01ae;
		}
	}
	{
		List_1_t819628108 * L_77 = (List_1_t819628108 *)il2cpp_codegen_object_new(List_1_t819628108_il2cpp_TypeInfo_var);
		List_1__ctor_m555233112(L_77, /*hidden argument*/List_1__ctor_m555233112_RuntimeMethod_var);
		G_B26_0 = L_77;
	}

IL_01ae:
	{
		List_1_t819628108 * L_78 = G_B26_0;
		V_4 = L_78;
		EventInfo_t * L_79 = V_15;
		NullCheck(L_78);
		List_1_Add_m2350095192(L_78, L_79, /*hidden argument*/List_1_Add_m2350095192_RuntimeMethod_var);
	}

IL_01b8:
	{
		RuntimeObject* L_80 = V_3;
		NullCheck(L_80);
		bool L_81 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_80);
		if (L_81)
		{
			goto IL_00d0;
		}
	}
	{
		List_1_t819628108 * L_82 = V_4;
		if (!L_82)
		{
			goto IL_0200;
		}
	}
	{
		List_1_t819628108 * L_83 = V_4;
		NullCheck(L_83);
		Enumerator_t2708871985  L_84 = List_1_GetEnumerator_m2709014514(L_83, /*hidden argument*/List_1_GetEnumerator_m2709014514_RuntimeMethod_var);
		V_16 = L_84;
	}

IL_01d0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01e7;
		}

IL_01d2:
		{
			EventInfo_t * L_85 = Enumerator_get_Current_m3666420137((Enumerator_t2708871985 *)(&V_16), /*hidden argument*/Enumerator_get_Current_m3666420137_RuntimeMethod_var);
			V_17 = L_85;
			EventInfo_t * L_86 = V_17;
			AggregateSymbol_t3146081271 * L_87 = V_6;
			FieldSymbol_t2811293341 * L_88 = V_7;
			SymbolTable_AddEventToSymbolTable_m1786974805(__this, L_86, L_87, L_88, /*hidden argument*/NULL);
		}

IL_01e7:
		{
			bool L_89 = Enumerator_MoveNext_m1672893779((Enumerator_t2708871985 *)(&V_16), /*hidden argument*/Enumerator_MoveNext_m1672893779_RuntimeMethod_var);
			if (L_89)
			{
				goto IL_01d2;
			}
		}

IL_01f0:
		{
			IL2CPP_LEAVE(0x200, FINALLY_01f2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01f2;
	}

FINALLY_01f2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3472778301((Enumerator_t2708871985 *)(&V_16), /*hidden argument*/Enumerator_Dispose_m3472778301_RuntimeMethod_var);
		IL2CPP_END_FINALLY(498)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(498)
	{
		IL2CPP_JUMP_TBL(0x200, IL_0200)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0200:
	{
		int32_t L_90 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1));
	}

IL_0204:
	{
		int32_t L_91 = V_1;
		if ((((int32_t)L_91) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.Type> Microsoft.CSharp.RuntimeBinder.SymbolTable::CreateInheritanceHierarchyList(System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t3956019502 * SymbolTable_CreateInheritanceHierarchyList_m2459147864 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_CreateInheritanceHierarchyList_m2459147864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3956019502 * V_0 = NULL;
	CType_t1813387470 * V_1 = NULL;
	Type_t * V_2 = NULL;
	TypeU5BU5D_t3940880105* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * V_5 = NULL;
	Type_t * V_6 = NULL;
	TypeArray_t2467755373 * V_7 = NULL;
	int32_t V_8 = 0;
	CType_t1813387470 * V_9 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsInterface_m3284996719(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		TypeU5BU5D_t3940880105* L_3 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_2);
		NullCheck(L_3);
		List_1_t3956019502 * L_4 = (List_1_t3956019502 *)il2cpp_codegen_object_new(List_1_t3956019502_il2cpp_TypeInfo_var);
		List_1__ctor_m4285917392(L_4, ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), (int32_t)2)), /*hidden argument*/List_1__ctor_m4285917392_RuntimeMethod_var);
		List_1_t3956019502 * L_5 = L_4;
		Type_t * L_6 = ___type0;
		NullCheck(L_5);
		List_1_Add_m3669611020(L_5, L_6, /*hidden argument*/List_1_Add_m3669611020_RuntimeMethod_var);
		V_0 = L_5;
		Type_t * L_7 = ___type0;
		NullCheck(L_7);
		TypeU5BU5D_t3940880105* L_8 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		V_3 = L_8;
		V_4 = 0;
		goto IL_0048;
	}

IL_002b:
	{
		TypeU5BU5D_t3940880105* L_9 = V_3;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Type_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		Type_t * L_13 = V_5;
		SymbolTable_LoadSymbolsFromType_m2262646512(__this, L_13, /*hidden argument*/NULL);
		List_1_t3956019502 * L_14 = V_0;
		Type_t * L_15 = V_5;
		NullCheck(L_14);
		List_1_Add_m3669611020(L_14, L_15, /*hidden argument*/List_1_Add_m3669611020_RuntimeMethod_var);
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_17 = V_4;
		TypeU5BU5D_t3940880105* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		Type_t * L_21 = V_2;
		SymbolTable_LoadSymbolsFromType_m2262646512(__this, L_21, /*hidden argument*/NULL);
		List_1_t3956019502 * L_22 = V_0;
		Type_t * L_23 = V_2;
		NullCheck(L_22);
		List_1_Add_m3669611020(L_22, L_23, /*hidden argument*/List_1_Add_m3669611020_RuntimeMethod_var);
		goto IL_00a6;
	}

IL_006b:
	{
		List_1_t3956019502 * L_24 = (List_1_t3956019502 *)il2cpp_codegen_object_new(List_1_t3956019502_il2cpp_TypeInfo_var);
		List_1__ctor_m259484671(L_24, /*hidden argument*/List_1__ctor_m259484671_RuntimeMethod_var);
		List_1_t3956019502 * L_25 = L_24;
		Type_t * L_26 = ___type0;
		NullCheck(L_25);
		List_1_Add_m3669611020(L_25, L_26, /*hidden argument*/List_1_Add_m3669611020_RuntimeMethod_var);
		V_0 = L_25;
		Type_t * L_27 = ___type0;
		NullCheck(L_27);
		Type_t * L_28 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_27);
		V_6 = L_28;
		goto IL_009c;
	}

IL_0082:
	{
		Type_t * L_29 = V_6;
		SymbolTable_LoadSymbolsFromType_m2262646512(__this, L_29, /*hidden argument*/NULL);
		List_1_t3956019502 * L_30 = V_0;
		Type_t * L_31 = V_6;
		NullCheck(L_30);
		List_1_Add_m3669611020(L_30, L_31, /*hidden argument*/List_1_Add_m3669611020_RuntimeMethod_var);
		Type_t * L_32 = V_6;
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_32);
		V_6 = L_33;
	}

IL_009c:
	{
		Type_t * L_34 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_35 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_34, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0082;
		}
	}

IL_00a6:
	{
		Type_t * L_36 = ___type0;
		CType_t1813387470 * L_37 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		CType_t1813387470 * L_38 = V_1;
		NullCheck(L_38);
		bool L_39 = CType_IsWindowsRuntimeType_m280844425(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00fc;
		}
	}
	{
		CType_t1813387470 * L_40 = V_1;
		CSemanticChecker_t1535940568 * L_41 = __this->get__semanticChecker_7();
		NullCheck(L_41);
		SymbolLoader_t2983914338 * L_42 = CSemanticChecker_get_SymbolLoader_m2577500808(L_41, /*hidden argument*/NULL);
		NullCheck(((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_40, AggregateType_t567267003_il2cpp_TypeInfo_var)));
		TypeArray_t2467755373 * L_43 = AggregateType_GetWinRTCollectionIfacesAll_m3264305352(((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_40, AggregateType_t567267003_il2cpp_TypeInfo_var)), L_42, /*hidden argument*/NULL);
		V_7 = L_43;
		V_8 = 0;
		goto IL_00f1;
	}

IL_00d3:
	{
		TypeArray_t2467755373 * L_44 = V_7;
		int32_t L_45 = V_8;
		NullCheck(L_44);
		CType_t1813387470 * L_46 = TypeArray_get_Item_m3570930834(L_44, L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		List_1_t3956019502 * L_47 = V_0;
		CType_t1813387470 * L_48 = V_9;
		NullCheck(L_48);
		Type_t * L_49 = CType_get_AssociatedSystemType_m1536780166(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_Add_m3669611020(L_47, L_49, /*hidden argument*/List_1_Add_m3669611020_RuntimeMethod_var);
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00f1:
	{
		int32_t L_51 = V_8;
		TypeArray_t2467755373 * L_52 = V_7;
		NullCheck(L_52);
		int32_t L_53 = TypeArray_get_Count_m4264721965(L_52, /*hidden argument*/NULL);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_00d3;
		}
	}

IL_00fc:
	{
		List_1_t3956019502 * L_54 = V_0;
		return L_54;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.SymbolTable::GetName(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * SymbolTable_GetName_m1066594422 (SymbolTable_t2007508464 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetName_m1066594422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NameManager_t1767112997 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NameManager_t1767112997 * G_B1_1 = NULL;
	{
		NameManager_t1767112997 * L_0 = __this->get__nameManager_4();
		String_t* L_1 = ___p0;
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0010;
		}
	}
	{
		G_B2_0 = _stringLiteral757602046;
		G_B2_1 = G_B1_1;
	}

IL_0010:
	{
		NullCheck(G_B2_1);
		Name_t658191338 * L_3 = NameManager_Add_m3684855591(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		return L_3;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.SymbolTable::GetName(System.Type)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * SymbolTable_GetName_m2509943126 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		V_0 = L_1;
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m363431711(L_4, ((int32_t)96), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		NameManager_t1767112997 * L_7 = __this->get__nameManager_4();
		String_t* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		Name_t658191338 * L_10 = NameManager_Add_m2932834222(L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002a:
	{
		NameManager_t1767112997 * L_11 = __this->get__nameManager_4();
		String_t* L_12 = V_0;
		NullCheck(L_11);
		Name_t658191338 * L_13 = NameManager_Add_m3684855591(L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.SymbolTable::GetMethodTypeParameters(System.Reflection.MethodInfo,Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * SymbolTable_GetMethodTypeParameters_m798564244 (SymbolTable_t2007508464 * __this, MethodInfo_t * ___method0, MethodSymbol_t394006151 * ___parent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetMethodTypeParameters_m798564244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t3940880105* V_0 = NULL;
	CTypeU5BU5D_t868586555* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * V_5 = NULL;
	{
		MethodInfo_t * L_0 = ___method0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_0);
		if (!L_1)
		{
			goto IL_008b;
		}
	}
	{
		MethodInfo_t * L_2 = ___method0;
		NullCheck(L_2);
		TypeU5BU5D_t3940880105* L_3 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(23 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		V_0 = L_3;
		TypeU5BU5D_t3940880105* L_4 = V_0;
		NullCheck(L_4);
		CTypeU5BU5D_t868586555* L_5 = (CTypeU5BU5D_t868586555*)SZArrayNew(CTypeU5BU5D_t868586555_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))));
		V_1 = L_5;
		V_2 = 0;
		goto IL_0032;
	}

IL_001f:
	{
		TypeU5BU5D_t3940880105* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		CTypeU5BU5D_t868586555* L_10 = V_1;
		int32_t L_11 = V_2;
		MethodSymbol_t394006151 * L_12 = ___parent1;
		Type_t * L_13 = V_3;
		TypeParameterType_t171561091 * L_14 = SymbolTable_LoadMethodTypeParameter_m3062046655(__this, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (CType_t1813387470 *)L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_16 = V_2;
		TypeU5BU5D_t3940880105* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		V_4 = 0;
		goto IL_0074;
	}

IL_003d:
	{
		TypeU5BU5D_t3940880105* L_18 = V_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Type_t * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_5 = L_21;
		CTypeU5BU5D_t868586555* L_22 = V_1;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		CType_t1813387470 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(((TypeParameterType_t171561091 *)CastclassSealed((RuntimeObject*)L_25, TypeParameterType_t171561091_il2cpp_TypeInfo_var)));
		TypeParameterSymbol_t755586405 * L_26 = TypeParameterType_GetTypeParameterSymbol_m812331021(((TypeParameterType_t171561091 *)CastclassSealed((RuntimeObject*)L_25, TypeParameterType_t171561091_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		BSYMMGR_t2938027401 * L_27 = __this->get__bsymmgr_6();
		Type_t * L_28 = V_5;
		NullCheck(L_28);
		TypeU5BU5D_t3940880105* L_29 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(90 /* System.Type[] System.Type::GetGenericParameterConstraints() */, L_28);
		CTypeU5BU5D_t868586555* L_30 = SymbolTable_GetCTypeArrayFromTypes_m4106394335(__this, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		TypeArray_t2467755373 * L_31 = BSYMMGR_AllocParams_m784650617(L_27, L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		TypeParameterSymbol_SetBounds_m3448967516(L_26, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_33 = V_4;
		TypeU5BU5D_t3940880105* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		BSYMMGR_t2938027401 * L_35 = __this->get__bsymmgr_6();
		CTypeU5BU5D_t868586555* L_36 = V_1;
		NullCheck(L_36);
		CTypeU5BU5D_t868586555* L_37 = V_1;
		NullCheck(L_35);
		TypeArray_t2467755373 * L_38 = BSYMMGR_AllocParams_m78811279(L_35, (((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))), L_37, /*hidden argument*/NULL);
		return L_38;
	}

IL_008b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		TypeArray_t2467755373 * L_39 = BSYMMGR_EmptyTypeArray_m2278114118(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_39;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.SymbolTable::GetAggregateTypeParameters(System.Type,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * SymbolTable_GetAggregateTypeParameters_m2250120112 (SymbolTable_t2007508464 * __this, Type_t * ___type0, AggregateSymbol_t3146081271 * ___agg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetAggregateTypeParameters_m2250120112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	List_1_t3285462212 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Type_t * V_5 = NULL;
	CType_t1813387470 * V_6 = NULL;
	int32_t G_B4_0 = 0;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_00bb;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		TypeU5BU5D_t3940880105* L_5 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_4);
		V_1 = L_5;
		List_1_t3285462212 * L_6 = (List_1_t3285462212 *)il2cpp_codegen_object_new(List_1_t3285462212_il2cpp_TypeInfo_var);
		List_1__ctor_m1419539908(L_6, /*hidden argument*/List_1__ctor_m1419539908_RuntimeMethod_var);
		V_2 = L_6;
		AggregateSymbol_t3146081271 * L_7 = ___agg1;
		NullCheck(L_7);
		bool L_8 = AggregateSymbol_isNested_m1174542334(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_003a;
	}

IL_002a:
	{
		AggregateSymbol_t3146081271 * L_9 = ___agg1;
		NullCheck(L_9);
		AggregateSymbol_t3146081271 * L_10 = AggregateSymbol_GetOuterAgg_m161187221(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		TypeArray_t2467755373 * L_11 = AggregateSymbol_GetTypeVarsAll_m443298054(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = TypeArray_get_Count_m4264721965(L_11, /*hidden argument*/NULL);
		G_B4_0 = L_12;
	}

IL_003a:
	{
		V_3 = G_B4_0;
		V_4 = 0;
		goto IL_009c;
	}

IL_0040:
	{
		TypeU5BU5D_t3940880105* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Type_t * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
		Type_t * L_17 = V_5;
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(88 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_17);
		int32_t L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0096;
		}
	}
	{
		Type_t * L_20 = V_5;
		NullCheck(L_20);
		bool L_21 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericParameter() */, L_20);
		if (!L_21)
		{
			goto IL_0075;
		}
	}
	{
		Type_t * L_22 = V_5;
		NullCheck(L_22);
		Type_t * L_23 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_22);
		Type_t * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_25 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0075;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_26 = ___agg1;
		Type_t * L_27 = V_5;
		TypeParameterType_t171561091 * L_28 = SymbolTable_LoadClassTypeParameter_m1292531502(__this, L_26, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		goto IL_007f;
	}

IL_0075:
	{
		Type_t * L_29 = V_5;
		CType_t1813387470 * L_30 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
	}

IL_007f:
	{
		CType_t1813387470 * L_31 = V_6;
		NullCheck(((TypeParameterType_t171561091 *)CastclassSealed((RuntimeObject*)L_31, TypeParameterType_t171561091_il2cpp_TypeInfo_var)));
		ParentSymbol_t84807579 * L_32 = TypeParameterType_GetOwningSymbol_m2672672759(((TypeParameterType_t171561091 *)CastclassSealed((RuntimeObject*)L_31, TypeParameterType_t171561091_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_33 = ___agg1;
		if ((!(((RuntimeObject*)(ParentSymbol_t84807579 *)L_32) == ((RuntimeObject*)(AggregateSymbol_t3146081271 *)L_33))))
		{
			goto IL_0096;
		}
	}
	{
		List_1_t3285462212 * L_34 = V_2;
		CType_t1813387470 * L_35 = V_6;
		NullCheck(L_34);
		List_1_Add_m3042044450(L_34, L_35, /*hidden argument*/List_1_Add_m3042044450_RuntimeMethod_var);
	}

IL_0096:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_009c:
	{
		int32_t L_37 = V_4;
		TypeU5BU5D_t3940880105* L_38 = V_1;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))))))
		{
			goto IL_0040;
		}
	}
	{
		BSYMMGR_t2938027401 * L_39 = __this->get__bsymmgr_6();
		List_1_t3285462212 * L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = List_1_get_Count_m3795182392(L_40, /*hidden argument*/List_1_get_Count_m3795182392_RuntimeMethod_var);
		List_1_t3285462212 * L_42 = V_2;
		NullCheck(L_42);
		CTypeU5BU5D_t868586555* L_43 = List_1_ToArray_m2498037548(L_42, /*hidden argument*/List_1_ToArray_m2498037548_RuntimeMethod_var);
		NullCheck(L_39);
		TypeArray_t2467755373 * L_44 = BSYMMGR_AllocParams_m78811279(L_39, L_41, L_43, /*hidden argument*/NULL);
		return L_44;
	}

IL_00bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		TypeArray_t2467755373 * L_45 = BSYMMGR_EmptyTypeArray_m2278114118(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_45;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::LoadClassTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_LoadClassTypeParameter_m1292531502 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___parent0, Type_t * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_LoadClassTypeParameter_m1292531502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AggregateSymbol_t3146081271 * V_0 = NULL;
	TypeParameterSymbol_t755586405 * V_1 = NULL;
	{
		AggregateSymbol_t3146081271 * L_0 = ___parent0;
		V_0 = L_0;
		goto IL_005c;
	}

IL_0004:
	{
		BSYMMGR_t2938027401 * L_1 = __this->get__bsymmgr_6();
		Type_t * L_2 = ___t1;
		Name_t658191338 * L_3 = SymbolTable_GetName_m2509943126(__this, L_2, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_4 = V_0;
		NullCheck(L_1);
		Symbol_t3348236047 * L_5 = BSYMMGR_LookupAggMember_m2413661113(L_1, L_3, L_4, (((int64_t)((int64_t)((int32_t)16)))), /*hidden argument*/NULL);
		V_1 = ((TypeParameterSymbol_t755586405 *)IsInstSealed((RuntimeObject*)L_5, TypeParameterSymbol_t755586405_il2cpp_TypeInfo_var));
		goto IL_004d;
	}

IL_0022:
	{
		TypeParameterSymbol_t755586405 * L_6 = V_1;
		NullCheck(L_6);
		TypeParameterType_t171561091 * L_7 = TypeParameterSymbol_GetTypeParameterType_m2208544558(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Type_t * L_8 = CType_get_AssociatedSystemType_m1536780166(L_7, /*hidden argument*/NULL);
		Type_t * L_9 = ___t1;
		bool L_10 = SymbolTable_AreTypeParametersEquivalent_m972801204(__this, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		TypeParameterSymbol_t755586405 * L_11 = V_1;
		NullCheck(L_11);
		TypeParameterType_t171561091 * L_12 = TypeParameterSymbol_GetTypeParameterType_m2208544558(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003d:
	{
		TypeParameterSymbol_t755586405 * L_13 = V_1;
		AggregateSymbol_t3146081271 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		Symbol_t3348236047 * L_15 = BSYMMGR_LookupNextSym_m1831996135(NULL /*static, unused*/, L_13, L_14, (((int64_t)((int64_t)((int32_t)16)))), /*hidden argument*/NULL);
		V_1 = ((TypeParameterSymbol_t755586405 *)IsInstSealed((RuntimeObject*)L_15, TypeParameterSymbol_t755586405_il2cpp_TypeInfo_var));
	}

IL_004d:
	{
		TypeParameterSymbol_t755586405 * L_16 = V_1;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_17 = V_0;
		NullCheck(L_17);
		ParentSymbol_t84807579 * L_18 = ((Symbol_t3348236047 *)L_17)->get_parent_3();
		V_0 = ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_18, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var));
	}

IL_005c:
	{
		AggregateSymbol_t3146081271 * L_19 = V_0;
		if (L_19)
		{
			goto IL_0004;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_20 = ___parent0;
		Type_t * L_21 = ___t1;
		TypeParameterType_t171561091 * L_22 = SymbolTable_AddTypeParameterToSymbolTable_m3616144431(__this, L_20, (MethodSymbol_t394006151 *)NULL, L_21, (bool)1, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::AreTypeParametersEquivalent(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_AreTypeParametersEquivalent_m972801204 (SymbolTable_t2007508464 * __this, Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AreTypeParametersEquivalent_m972801204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___t10;
		Type_t * L_1 = ___t21;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Type_t * L_3 = ___t10;
		Type_t * L_4 = SymbolTable_GetOriginalTypeParameterType_m3831275873(__this, L_3, /*hidden argument*/NULL);
		Type_t * L_5 = ___t21;
		Type_t * L_6 = SymbolTable_GetOriginalTypeParameterType_m3831275873(__this, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Type_t * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::GetOriginalTypeParameterType(System.Type)
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_GetOriginalTypeParameterType_m3831275873 (SymbolTable_t2007508464 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetOriginalTypeParameterType_m3831275873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	Nullable_1_t378540539  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Nullable_1_t378540539  V_5;
	memset(&V_5, 0, sizeof(V_5));
	TypeU5BU5D_t3940880105* G_B13_0 = NULL;
	TypeU5BU5D_t3940880105* G_B12_0 = NULL;
	Nullable_1_t378540539  G_B14_0;
	memset(&G_B14_0, 0, sizeof(G_B14_0));
	int32_t G_B17_0 = 0;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(88 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_0);
		V_0 = L_1;
		Type_t * L_2 = ___t0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		V_1 = L_3;
		Type_t * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_4, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_6);
		if (!L_7)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_8);
		V_1 = L_9;
	}

IL_0026:
	{
		Type_t * L_10 = ___t0;
		NullCheck(L_10);
		MethodBase_t * L_11 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_10);
		bool L_12 = MethodBase_op_Inequality_m736913402(NULL /*static, unused*/, L_11, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_13 = V_1;
		NullCheck(L_13);
		TypeU5BU5D_t3940880105* L_14 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_13);
		if (!L_14)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_15 = V_0;
		Type_t * L_16 = V_1;
		NullCheck(L_16);
		TypeU5BU5D_t3940880105* L_17 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_00a5;
		}
	}

IL_0047:
	{
		Type_t * L_18 = ___t0;
		return L_18;
	}

IL_0049:
	{
		Type_t * L_19 = V_1;
		NullCheck(L_19);
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_19);
		V_2 = L_20;
		Type_t * L_21 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_22 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_21, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0068;
		}
	}
	{
		Type_t * L_23 = V_2;
		NullCheck(L_23);
		bool L_24 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_23);
		if (!L_24)
		{
			goto IL_0068;
		}
	}
	{
		Type_t * L_25 = V_2;
		NullCheck(L_25);
		Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_25);
		V_2 = L_26;
	}

IL_0068:
	{
		Type_t * L_27 = V_2;
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		Type_t * L_28 = V_2;
		NullCheck(L_28);
		TypeU5BU5D_t3940880105* L_29 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_28);
		TypeU5BU5D_t3940880105* L_30 = L_29;
		G_B12_0 = L_30;
		if (L_30)
		{
			G_B13_0 = L_30;
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_31 = V_5;
		G_B14_0 = L_31;
		goto IL_0088;
	}

IL_0081:
	{
		NullCheck(G_B13_0);
		Nullable_1_t378540539  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Nullable_1__ctor_m2962682148((&L_32), (((int32_t)((int32_t)(((RuntimeArray *)G_B13_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m2962682148_RuntimeMethod_var);
		G_B14_0 = L_32;
	}

IL_0088:
	{
		V_3 = G_B14_0;
		int32_t L_33 = V_0;
		V_4 = L_33;
		int32_t L_34 = Nullable_1_GetValueOrDefault_m463439517((Nullable_1_t378540539 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_m463439517_RuntimeMethod_var);
		int32_t L_35 = V_4;
		if ((((int32_t)L_34) > ((int32_t)L_35)))
		{
			goto IL_009a;
		}
	}
	{
		G_B17_0 = 0;
		goto IL_00a1;
	}

IL_009a:
	{
		bool L_36 = Nullable_1_get_HasValue_m3898097692((Nullable_1_t378540539 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m3898097692_RuntimeMethod_var);
		G_B17_0 = ((int32_t)(L_36));
	}

IL_00a1:
	{
		if (!G_B17_0)
		{
			goto IL_00b0;
		}
	}
	{
		Type_t * L_37 = V_2;
		V_1 = L_37;
	}

IL_00a5:
	{
		Type_t * L_38 = V_1;
		NullCheck(L_38);
		TypeU5BU5D_t3940880105* L_39 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_38);
		NullCheck(L_39);
		int32_t L_40 = V_0;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length))))) > ((int32_t)L_40)))
		{
			goto IL_0049;
		}
	}

IL_00b0:
	{
		Type_t * L_41 = V_1;
		NullCheck(L_41);
		TypeU5BU5D_t3940880105* L_42 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_41);
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Type_t * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		return L_45;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::LoadMethodTypeParameter(Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_LoadMethodTypeParameter_m3062046655 (SymbolTable_t2007508464 * __this, MethodSymbol_t394006151 * ___parent0, Type_t * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_LoadMethodTypeParameter_m3062046655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Symbol_t3348236047 * V_0 = NULL;
	TypeParameterSymbol_t755586405 * V_1 = NULL;
	TypeParameterType_t171561091 * V_2 = NULL;
	{
		MethodSymbol_t394006151 * L_0 = ___parent0;
		NullCheck(L_0);
		Symbol_t3348236047 * L_1 = ((ParentSymbol_t84807579 *)L_0)->get_firstChild_6();
		V_0 = L_1;
		goto IL_0032;
	}

IL_0009:
	{
		Symbol_t3348236047 * L_2 = V_0;
		TypeParameterSymbol_t755586405 * L_3 = ((TypeParameterSymbol_t755586405 *)IsInstSealed((RuntimeObject*)L_2, TypeParameterSymbol_t755586405_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		TypeParameterSymbol_t755586405 * L_4 = V_1;
		NullCheck(L_4);
		TypeParameterType_t171561091 * L_5 = TypeParameterSymbol_GetTypeParameterType_m2208544558(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		TypeParameterType_t171561091 * L_6 = V_2;
		NullCheck(L_6);
		Type_t * L_7 = CType_get_AssociatedSystemType_m1536780166(L_6, /*hidden argument*/NULL);
		Type_t * L_8 = ___t1;
		bool L_9 = SymbolTable_AreTypeParametersEquivalent_m972801204(__this, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002b;
		}
	}
	{
		TypeParameterType_t171561091 * L_10 = V_2;
		return L_10;
	}

IL_002b:
	{
		Symbol_t3348236047 * L_11 = V_0;
		NullCheck(L_11);
		Symbol_t3348236047 * L_12 = L_11->get_nextChild_4();
		V_0 = L_12;
	}

IL_0032:
	{
		Symbol_t3348236047 * L_13 = V_0;
		if (L_13)
		{
			goto IL_0009;
		}
	}
	{
		MethodSymbol_t394006151 * L_14 = ___parent0;
		Type_t * L_15 = ___t1;
		TypeParameterType_t171561091 * L_16 = SymbolTable_AddTypeParameterToSymbolTable_m3616144431(__this, (AggregateSymbol_t3146081271 *)NULL, L_14, L_15, (bool)0, /*hidden argument*/NULL);
		return L_16;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::AddTypeParameterToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol,System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_AddTypeParameterToSymbolTable_m3616144431 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___agg0, MethodSymbol_t394006151 * ___meth1, Type_t * ___t2, bool ___bIsAggregate3, const RuntimeMethod* method)
{
	TypeParameterSymbol_t755586405 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = ___bIsAggregate3;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		SymFactory_t300688847 * L_1 = __this->get__symFactory_3();
		Type_t * L_2 = ___t2;
		Name_t658191338 * L_3 = SymbolTable_GetName_m2509943126(__this, L_2, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_4 = ___agg0;
		Type_t * L_5 = ___t2;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(88 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_5);
		Type_t * L_7 = ___t2;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(88 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_7);
		NullCheck(L_1);
		TypeParameterSymbol_t755586405 * L_9 = SymFactory_CreateClassTypeParameter_m542853122(L_1, L_3, L_4, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0046;
	}

IL_0026:
	{
		SymFactory_t300688847 * L_10 = __this->get__symFactory_3();
		Type_t * L_11 = ___t2;
		Name_t658191338 * L_12 = SymbolTable_GetName_m2509943126(__this, L_11, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_13 = ___meth1;
		Type_t * L_14 = ___t2;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(88 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_14);
		Type_t * L_16 = ___t2;
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(88 /* System.Int32 System.Type::get_GenericParameterPosition() */, L_16);
		NullCheck(L_10);
		TypeParameterSymbol_t755586405 * L_18 = SymFactory_CreateMethodTypeParameter_m3290049661(L_10, L_12, L_13, L_15, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
	}

IL_0046:
	{
		Type_t * L_19 = ___t2;
		NullCheck(L_19);
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(64 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_19);
		if (!((int32_t)((int32_t)L_20&(int32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		TypeParameterSymbol_t755586405 * L_21 = V_0;
		NullCheck(L_21);
		L_21->set_Covariant_12((bool)1);
	}

IL_0057:
	{
		Type_t * L_22 = ___t2;
		NullCheck(L_22);
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(64 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_22);
		if (!((int32_t)((int32_t)L_23&(int32_t)2)))
		{
			goto IL_0068;
		}
	}
	{
		TypeParameterSymbol_t755586405 * L_24 = V_0;
		NullCheck(L_24);
		L_24->set_Contravariant_13((bool)1);
	}

IL_0068:
	{
		V_1 = 0;
		Type_t * L_25 = ___t2;
		NullCheck(L_25);
		int32_t L_26 = VirtFuncInvoker0< int32_t >::Invoke(64 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_25);
		if (!((int32_t)((int32_t)L_26&(int32_t)((int32_t)16))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27|(int32_t)1));
	}

IL_0079:
	{
		Type_t * L_28 = ___t2;
		NullCheck(L_28);
		int32_t L_29 = VirtFuncInvoker0< int32_t >::Invoke(64 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_28);
		if (!((int32_t)((int32_t)L_29&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30|(int32_t)2));
	}

IL_0087:
	{
		Type_t * L_31 = ___t2;
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(64 /* System.Reflection.GenericParameterAttributes System.Type::get_GenericParameterAttributes() */, L_31);
		if (!((int32_t)((int32_t)L_32&(int32_t)8)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)((int32_t)L_33|(int32_t)4));
	}

IL_0095:
	{
		TypeParameterSymbol_t755586405 * L_34 = V_0;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		TypeParameterSymbol_SetConstraints_m3356455386(L_34, L_35, /*hidden argument*/NULL);
		TypeParameterSymbol_t755586405 * L_36 = V_0;
		NullCheck(L_36);
		Symbol_SetAccess_m3955101489(L_36, 5, /*hidden argument*/NULL);
		TypeManager_t4140799422 * L_37 = __this->get__typeManager_5();
		TypeParameterSymbol_t755586405 * L_38 = V_0;
		NullCheck(L_37);
		TypeParameterType_t171561091 * L_39 = TypeManager_GetTypeParameter_m3201366330(L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::LoadSymbolsFromType(System.Type)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_LoadSymbolsFromType_m2262646512 (SymbolTable_t2007508464 * __this, Type_t * ___originalType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_LoadSymbolsFromType_m2262646512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	Type_t * V_1 = NULL;
	CType_t1813387470 * V_2 = NULL;
	bool V_3 = false;
	NamespaceOrAggregateSymbol_t2365823281 * V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	NamespaceOrAggregateSymbol_t2365823281 * V_7 = NULL;
	Type_t * V_8 = NULL;
	Name_t658191338 * V_9 = NULL;
	Type_t * V_10 = NULL;
	CType_t1813387470 * V_11 = NULL;
	AggregateType_t567267003 * V_12 = NULL;
	Type_t * G_B9_0 = NULL;
	Type_t * G_B8_0 = NULL;
	Type_t * G_B10_0 = NULL;
	Type_t * G_B10_1 = NULL;
	{
		Type_t * L_0 = ___originalType0;
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		List_1_t257213610 * L_1 = SymbolTable_BuildDeclarationChain_m718011609(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___originalType0;
		V_1 = L_2;
		V_2 = (CType_t1813387470 *)NULL;
		Type_t * L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = Type_get_IsByRef_m1262524108(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_6 = V_1;
		NullCheck(L_6);
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_6);
		V_1 = L_7;
	}

IL_001c:
	{
		NamespaceSymbol_t4294485991 * L_8 = __this->get__rootNamespace_8();
		V_4 = L_8;
		V_5 = 0;
		goto IL_016a;
	}

IL_002c:
	{
		List_1_t257213610 * L_9 = V_0;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		RuntimeObject * L_11 = List_1_get_Item_m1328026504(L_9, L_10, /*hidden argument*/List_1_get_Item_m1328026504_RuntimeMethod_var);
		V_6 = L_11;
		RuntimeObject * L_12 = V_6;
		if (!((Type_t *)IsInstClass((RuntimeObject*)L_12, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_011d;
		}
	}
	{
		RuntimeObject * L_13 = V_6;
		V_8 = ((Type_t *)IsInstClass((RuntimeObject*)L_13, Type_t_il2cpp_TypeInfo_var));
		V_9 = (Name_t658191338 *)NULL;
		Type_t * L_14 = V_8;
		Name_t658191338 * L_15 = SymbolTable_GetName_m2509943126(__this, L_14, /*hidden argument*/NULL);
		V_9 = L_15;
		SYMTBL_t752690877 * L_16 = __this->get__symbolTable_2();
		Name_t658191338 * L_17 = V_9;
		NamespaceOrAggregateSymbol_t2365823281 * L_18 = V_4;
		NullCheck(L_16);
		Symbol_t3348236047 * L_19 = SYMTBL_LookupSym_m2091533833(L_16, L_17, L_18, (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		V_7 = ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_19, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var));
		NamespaceOrAggregateSymbol_t2365823281 * L_20 = V_7;
		if (!L_20)
		{
			goto IL_0085;
		}
	}
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_21 = V_7;
		Type_t * L_22 = V_8;
		AggregateSymbol_t3146081271 * L_23 = SymbolTable_FindSymWithMatchingArity_m1958855211(__this, ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_21, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var)), L_22, /*hidden argument*/NULL);
		V_7 = L_23;
	}

IL_0085:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_24 = V_7;
		if (!L_24)
		{
			goto IL_00ba;
		}
	}
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_25 = V_7;
		NullCheck(((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_25, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var)));
		Type_t * L_26 = ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_25, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var))->get_AssociatedSystemType_10();
		Type_t * L_27 = V_8;
		NullCheck(L_27);
		bool L_28 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_27);
		G_B8_0 = L_26;
		if (L_28)
		{
			G_B9_0 = L_26;
			goto IL_00a2;
		}
	}
	{
		Type_t * L_29 = V_8;
		G_B10_0 = L_29;
		G_B10_1 = G_B8_0;
		goto IL_00a9;
	}

IL_00a2:
	{
		Type_t * L_30 = V_8;
		NullCheck(L_30);
		Type_t * L_31 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_30);
		G_B10_0 = L_31;
		G_B10_1 = G_B9_0;
	}

IL_00a9:
	{
		V_10 = G_B10_0;
		Type_t * L_32 = V_10;
		NullCheck(G_B10_1);
		bool L_33 = VirtFuncInvoker1< bool, Type_t * >::Invoke(122 /* System.Boolean System.Type::IsEquivalentTo(System.Type) */, G_B10_1, L_32);
		if (L_33)
		{
			goto IL_00ba;
		}
	}
	{
		ResetBindException_t1303326642 * L_34 = (ResetBindException_t1303326642 *)il2cpp_codegen_object_new(ResetBindException_t1303326642_il2cpp_TypeInfo_var);
		ResetBindException__ctor_m2049701776(L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, NULL, SymbolTable_LoadSymbolsFromType_m2262646512_RuntimeMethod_var);
	}

IL_00ba:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_35 = V_7;
		if (!L_35)
		{
			goto IL_00c7;
		}
	}
	{
		Type_t * L_36 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		bool L_37 = RuntimeBinderExtensions_IsNullableType_m1655450255(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0102;
		}
	}

IL_00c7:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_38 = V_4;
		Type_t * L_39 = V_8;
		CType_t1813387470 * L_40 = SymbolTable_ProcessSpecialTypeInChain_m2251391497(__this, L_38, L_39, /*hidden argument*/NULL);
		V_11 = L_40;
		CType_t1813387470 * L_41 = V_11;
		if (!L_41)
		{
			goto IL_00f6;
		}
	}
	{
		CType_t1813387470 * L_42 = V_11;
		AggregateType_t567267003 * L_43 = ((AggregateType_t567267003 *)IsInstSealed((RuntimeObject*)L_42, AggregateType_t567267003_il2cpp_TypeInfo_var));
		V_12 = L_43;
		if (!L_43)
		{
			goto IL_00ee;
		}
	}
	{
		AggregateType_t567267003 * L_44 = V_12;
		NullCheck(L_44);
		AggregateSymbol_t3146081271 * L_45 = AggregateType_GetOwningAggregate_m2611624830(L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		goto IL_0102;
	}

IL_00ee:
	{
		CType_t1813387470 * L_46 = V_11;
		V_2 = L_46;
		goto IL_0177;
	}

IL_00f6:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_47 = V_4;
		Type_t * L_48 = V_8;
		AggregateSymbol_t3146081271 * L_49 = SymbolTable_AddAggregateToSymbolTable_m2773205952(__this, L_47, L_48, /*hidden argument*/NULL);
		V_7 = L_49;
	}

IL_0102:
	{
		Type_t * L_50 = V_8;
		Type_t * L_51 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_52 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0160;
		}
	}
	{
		Type_t * L_53 = V_1;
		NamespaceOrAggregateSymbol_t2365823281 * L_54 = V_7;
		CType_t1813387470 * L_55 = SymbolTable_GetConstructedType_m3153641545(__this, L_53, ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_54, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_55;
		goto IL_0177;
	}

IL_011d:
	{
		RuntimeObject * L_56 = V_6;
		if (!((MethodInfo_t *)IsInstClass((RuntimeObject*)L_56, MethodInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_014f;
		}
	}
	{
		RuntimeObject * L_57 = V_6;
		List_1_t257213610 * L_58 = V_0;
		int32_t L_59 = V_5;
		int32_t L_60 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		V_5 = L_60;
		NullCheck(L_58);
		RuntimeObject * L_61 = List_1_get_Item_m1328026504(L_58, L_60, /*hidden argument*/List_1_get_Item_m1328026504_RuntimeMethod_var);
		NamespaceOrAggregateSymbol_t2365823281 * L_62 = V_4;
		TypeParameterType_t171561091 * L_63 = SymbolTable_ProcessMethodTypeParameter_m1926306387(__this, ((MethodInfo_t *)IsInstClass((RuntimeObject*)L_57, MethodInfo_t_il2cpp_TypeInfo_var)), ((Type_t *)IsInstClass((RuntimeObject*)L_61, Type_t_il2cpp_TypeInfo_var)), ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_62, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_63;
		goto IL_0177;
	}

IL_014f:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_64 = V_4;
		RuntimeObject * L_65 = V_6;
		NamespaceSymbol_t4294485991 * L_66 = SymbolTable_AddNamespaceToSymbolTable_m876063316(__this, L_64, ((String_t*)IsInstSealed((RuntimeObject*)L_65, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_7 = L_66;
	}

IL_0160:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_67 = V_7;
		V_4 = L_67;
		int32_t L_68 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
	}

IL_016a:
	{
		int32_t L_69 = V_5;
		List_1_t257213610 * L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = List_1_get_Count_m2934127733(L_70, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		if ((((int32_t)L_69) < ((int32_t)L_71)))
		{
			goto IL_002c;
		}
	}

IL_0177:
	{
		bool L_72 = V_3;
		if (!L_72)
		{
			goto IL_0188;
		}
	}
	{
		TypeManager_t4140799422 * L_73 = __this->get__typeManager_5();
		CType_t1813387470 * L_74 = V_2;
		NullCheck(L_73);
		ParameterModifierType_t867882597 * L_75 = TypeManager_GetParameterModifier_m1738454542(L_73, L_74, (bool)0, /*hidden argument*/NULL);
		V_2 = L_75;
	}

IL_0188:
	{
		CType_t1813387470 * L_76 = V_2;
		return L_76;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeParameterType Microsoft.CSharp.RuntimeBinder.SymbolTable::ProcessMethodTypeParameter(System.Reflection.MethodInfo,System.Type,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR TypeParameterType_t171561091 * SymbolTable_ProcessMethodTypeParameter_m1926306387 (SymbolTable_t2007508464 * __this, MethodInfo_t * ___methinfo0, Type_t * ___t1, AggregateSymbol_t3146081271 * ___parent2, const RuntimeMethod* method)
{
	MethodSymbol_t394006151 * V_0 = NULL;
	{
		MethodInfo_t * L_0 = ___methinfo0;
		AggregateSymbol_t3146081271 * L_1 = ___parent2;
		MethodSymbol_t394006151 * L_2 = SymbolTable_FindMatchingMethod_m1410031394(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodSymbol_t394006151 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		MethodInfo_t * L_4 = ___methinfo0;
		AggregateSymbol_t3146081271 * L_5 = ___parent2;
		MethodSymbol_t394006151 * L_6 = SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_4, L_5, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0017:
	{
		MethodSymbol_t394006151 * L_7 = V_0;
		Type_t * L_8 = ___t1;
		TypeParameterType_t171561091 * L_9 = SymbolTable_LoadMethodTypeParameter_m3062046655(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetConstructedType(System.Type,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_GetConstructedType_m3153641545 (SymbolTable_t2007508464 * __this, Type_t * ___type0, AggregateSymbol_t3146081271 * ___agg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetConstructedType_m3153641545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3285462212 * V_0 = NULL;
	TypeArray_t2467755373 * V_1 = NULL;
	TypeU5BU5D_t3940880105* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		List_1_t3285462212 * L_2 = (List_1_t3285462212 *)il2cpp_codegen_object_new(List_1_t3285462212_il2cpp_TypeInfo_var);
		List_1__ctor_m1419539908(L_2, /*hidden argument*/List_1__ctor_m1419539908_RuntimeMethod_var);
		V_0 = L_2;
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		TypeU5BU5D_t3940880105* L_4 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0030;
	}

IL_0019:
	{
		TypeU5BU5D_t3940880105* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		List_1_t3285462212 * L_9 = V_0;
		Type_t * L_10 = V_4;
		CType_t1813387470 * L_11 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m3042044450(L_9, L_11, /*hidden argument*/List_1_Add_m3042044450_RuntimeMethod_var);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_3;
		TypeU5BU5D_t3940880105* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		BSYMMGR_t2938027401 * L_15 = __this->get__bsymmgr_6();
		List_1_t3285462212 * L_16 = V_0;
		NullCheck(L_16);
		CTypeU5BU5D_t868586555* L_17 = List_1_ToArray_m2498037548(L_16, /*hidden argument*/List_1_ToArray_m2498037548_RuntimeMethod_var);
		NullCheck(L_15);
		TypeArray_t2467755373 * L_18 = BSYMMGR_AllocParams_m784650617(L_15, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		TypeManager_t4140799422 * L_19 = __this->get__typeManager_5();
		AggregateSymbol_t3146081271 * L_20 = ___agg1;
		TypeArray_t2467755373 * L_21 = V_1;
		NullCheck(L_19);
		AggregateType_t567267003 * L_22 = TypeManager_GetAggregate_m2312002896(L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_0056:
	{
		AggregateSymbol_t3146081271 * L_23 = ___agg1;
		NullCheck(L_23);
		AggregateType_t567267003 * L_24 = AggregateSymbol_getThisType_m4290204095(L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::ProcessSpecialTypeInChain(Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_ProcessSpecialTypeInChain_m2251391497 (SymbolTable_t2007508464 * __this, NamespaceOrAggregateSymbol_t2365823281 * ___parent0, Type_t * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_ProcessSpecialTypeInChain_m2251391497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AggregateSymbol_t3146081271 * V_0 = NULL;
	AggregateSymbol_t3146081271 * V_1 = NULL;
	{
		Type_t * L_0 = ___t1;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericParameter() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_2 = ___parent0;
		V_0 = ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_2, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var));
		AggregateSymbol_t3146081271 * L_3 = V_0;
		Type_t * L_4 = ___t1;
		TypeParameterType_t171561091 * L_5 = SymbolTable_LoadClassTypeParameter_m1292531502(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0018:
	{
		Type_t * L_6 = ___t1;
		NullCheck(L_6);
		bool L_7 = Type_get_IsArray_m2591212821(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		TypeManager_t4140799422 * L_8 = __this->get__typeManager_5();
		Type_t * L_9 = ___t1;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_9);
		CType_t1813387470 * L_11 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_10, /*hidden argument*/NULL);
		Type_t * L_12 = ___t1;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 System.Type::GetArrayRank() */, L_12);
		Type_t * L_14 = ___t1;
		NullCheck(L_14);
		Type_t * L_15 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_14);
		NullCheck(L_15);
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Type::MakeArrayType() */, L_15);
		Type_t * L_17 = ___t1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_18 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayType_t406051177 * L_19 = TypeManager_GetArray_m606745551(L_8, L_11, L_13, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_004f:
	{
		Type_t * L_20 = ___t1;
		NullCheck(L_20);
		bool L_21 = Type_get_IsPointer_m4067542339(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		TypeManager_t4140799422 * L_22 = __this->get__typeManager_5();
		Type_t * L_23 = ___t1;
		NullCheck(L_23);
		Type_t * L_24 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_23);
		CType_t1813387470 * L_25 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		PointerType_t3368101717 * L_26 = TypeManager_GetPointer_m1783654527(L_22, L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_006f:
	{
		Type_t * L_27 = ___t1;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		bool L_28 = RuntimeBinderExtensions_IsNullableType_m1655450255(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e5;
		}
	}
	{
		Type_t * L_29 = ___t1;
		NullCheck(L_29);
		TypeU5BU5D_t3940880105* L_30 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_29);
		NullCheck(L_30);
		int32_t L_31 = 0;
		Type_t * L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_32);
		Type_t * L_34 = ___t1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_35 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00cb;
		}
	}
	{
		SYMTBL_t752690877 * L_36 = __this->get__symbolTable_2();
		Type_t * L_37 = ___t1;
		Name_t658191338 * L_38 = SymbolTable_GetName_m2509943126(__this, L_37, /*hidden argument*/NULL);
		NamespaceOrAggregateSymbol_t2365823281 * L_39 = ___parent0;
		NullCheck(L_36);
		Symbol_t3348236047 * L_40 = SYMTBL_LookupSym_m2091533833(L_36, L_38, L_39, (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		V_1 = ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_40, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var));
		AggregateSymbol_t3146081271 * L_41 = V_1;
		if (!L_41)
		{
			goto IL_00bd;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_42 = V_1;
		Type_t * L_43 = ___t1;
		AggregateSymbol_t3146081271 * L_44 = SymbolTable_FindSymWithMatchingArity_m1958855211(__this, L_42, L_43, /*hidden argument*/NULL);
		V_1 = L_44;
		AggregateSymbol_t3146081271 * L_45 = V_1;
		if (!L_45)
		{
			goto IL_00bd;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_46 = V_1;
		NullCheck(L_46);
		AggregateType_t567267003 * L_47 = AggregateSymbol_getThisType_m4290204095(L_46, /*hidden argument*/NULL);
		return L_47;
	}

IL_00bd:
	{
		NamespaceOrAggregateSymbol_t2365823281 * L_48 = ___parent0;
		Type_t * L_49 = ___t1;
		AggregateSymbol_t3146081271 * L_50 = SymbolTable_AddAggregateToSymbolTable_m2773205952(__this, L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		AggregateType_t567267003 * L_51 = AggregateSymbol_getThisType_m4290204095(L_50, /*hidden argument*/NULL);
		return L_51;
	}

IL_00cb:
	{
		TypeManager_t4140799422 * L_52 = __this->get__typeManager_5();
		Type_t * L_53 = ___t1;
		NullCheck(L_53);
		TypeU5BU5D_t3940880105* L_54 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_53);
		NullCheck(L_54);
		int32_t L_55 = 0;
		Type_t * L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		CType_t1813387470 * L_57 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_56, /*hidden argument*/NULL);
		NullCheck(L_52);
		NullableType_t2956603701 * L_58 = TypeManager_GetNullable_m41344782(L_52, L_57, /*hidden argument*/NULL);
		return L_58;
	}

IL_00e5:
	{
		return (CType_t1813387470 *)NULL;
	}
}
// System.Collections.Generic.List`1<System.Object> Microsoft.CSharp.RuntimeBinder.SymbolTable::BuildDeclarationChain(System.Type)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * SymbolTable_BuildDeclarationChain_m718011609 (RuntimeObject * __this /* static, unused */, Type_t * ___callingType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_BuildDeclarationChain_m718011609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t257213610 * V_0 = NULL;
	Type_t * V_1 = NULL;
	U3CU3Ec__DisplayClass30_0_t2872929247 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Func_2_t3487522507 * V_4 = NULL;
	MethodInfo_t * V_5 = NULL;
	int32_t V_6 = 0;
	StringU5BU5D_t1281789340* V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_2_t3487522507 * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_t3487522507 * G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	{
		Type_t * L_0 = ___callingType0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsByRef_m1262524108(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_2 = ___callingType0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(108 /* System.Type System.Type::GetElementType() */, L_2);
		___callingType0 = L_3;
	}

IL_0010:
	{
		List_1_t257213610 * L_4 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_4, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		V_0 = L_4;
		Type_t * L_5 = ___callingType0;
		V_1 = L_5;
		goto IL_00bc;
	}

IL_001d:
	{
		List_1_t257213610 * L_6 = V_0;
		Type_t * L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m3338814081(L_6, L_7, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericParameter() */, L_8);
		if (!L_9)
		{
			goto IL_00b5;
		}
	}
	{
		Type_t * L_10 = V_1;
		NullCheck(L_10);
		MethodBase_t * L_11 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_10);
		bool L_12 = MethodBase_op_Inequality_m736913402(NULL /*static, unused*/, L_11, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b5;
		}
	}
	{
		U3CU3Ec__DisplayClass30_0_t2872929247 * L_13 = (U3CU3Ec__DisplayClass30_0_t2872929247 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_0_t2872929247_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass30_0__ctor_m4117277833(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		U3CU3Ec__DisplayClass30_0_t2872929247 * L_14 = V_2;
		Type_t * L_15 = V_1;
		NullCheck(L_15);
		MethodBase_t * L_16 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_15);
		NullCheck(L_14);
		L_14->set_methodBase_0(L_16);
		Type_t * L_17 = V_1;
		NullCheck(L_17);
		Type_t * L_18 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_17);
		RuntimeObject* L_19 = RuntimeReflectionExtensions_GetRuntimeMethods_m2137572665(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass30_0_t2872929247 * L_20 = V_2;
		NullCheck(L_20);
		Func_2_t3487522507 * L_21 = L_20->get_U3CU3E9__0_1();
		Func_2_t3487522507 * L_22 = L_21;
		G_B6_0 = L_22;
		G_B6_1 = L_19;
		if (L_22)
		{
			G_B7_0 = L_22;
			G_B7_1 = L_19;
			goto IL_007b;
		}
	}
	{
		U3CU3Ec__DisplayClass30_0_t2872929247 * L_23 = V_2;
		U3CU3Ec__DisplayClass30_0_t2872929247 * L_24 = V_2;
		intptr_t L_25 = (intptr_t)U3CU3Ec__DisplayClass30_0_U3CBuildDeclarationChainU3Eb__0_m360352475_RuntimeMethod_var;
		Func_2_t3487522507 * L_26 = (Func_2_t3487522507 *)il2cpp_codegen_object_new(Func_2_t3487522507_il2cpp_TypeInfo_var);
		Func_2__ctor_m1610613808(L_26, L_24, (intptr_t)L_25, /*hidden argument*/Func_2__ctor_m1610613808_RuntimeMethod_var);
		Func_2_t3487522507 * L_27 = L_26;
		V_4 = L_27;
		NullCheck(L_23);
		L_23->set_U3CU3E9__0_1(L_27);
		Func_2_t3487522507 * L_28 = V_4;
		G_B7_0 = L_28;
		G_B7_1 = G_B6_1;
	}

IL_007b:
	{
		RuntimeObject* L_29 = Enumerable_Where_TisMethodInfo_t_m1737046122(NULL /*static, unused*/, G_B7_1, G_B7_0, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m1737046122_RuntimeMethod_var);
		NullCheck(L_29);
		RuntimeObject* L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_t857479137_il2cpp_TypeInfo_var, L_29);
		V_3 = L_30;
	}

IL_0086:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_0088:
		{
			RuntimeObject* L_31 = V_3;
			NullCheck(L_31);
			MethodInfo_t * L_32 = InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t2310196716_il2cpp_TypeInfo_var, L_31);
			V_5 = L_32;
			MethodInfo_t * L_33 = V_5;
			NullCheck(L_33);
			bool L_34 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_33);
			if (!L_34)
			{
				goto IL_00a1;
			}
		}

IL_0099:
		{
			List_1_t257213610 * L_35 = V_0;
			MethodInfo_t * L_36 = V_5;
			NullCheck(L_35);
			List_1_Add_m3338814081(L_35, L_36, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		}

IL_00a1:
		{
			RuntimeObject* L_37 = V_3;
			NullCheck(L_37);
			bool L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_37);
			if (L_38)
			{
				goto IL_0088;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_39 = V_3;
			if (!L_39)
			{
				goto IL_00b4;
			}
		}

IL_00ae:
		{
			RuntimeObject* L_40 = V_3;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(171)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b5:
	{
		Type_t * L_41 = V_1;
		NullCheck(L_41);
		Type_t * L_42 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_41);
		V_1 = L_42;
	}

IL_00bc:
	{
		Type_t * L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_44 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_43, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t257213610 * L_45 = V_0;
		NullCheck(L_45);
		List_1_Reverse_m3108420294(L_45, /*hidden argument*/List_1_Reverse_m3108420294_RuntimeMethod_var);
		Type_t * L_46 = ___callingType0;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_46);
		if (!L_47)
		{
			goto IL_011a;
		}
	}
	{
		Type_t * L_48 = ___callingType0;
		NullCheck(L_48);
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_48);
		CharU5BU5D_t3528271667* L_50 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_51 = L_50;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_49);
		StringU5BU5D_t1281789340* L_52 = String_Split_m3646115398(L_49, L_51, /*hidden argument*/NULL);
		V_6 = 0;
		V_7 = L_52;
		V_8 = 0;
		goto IL_0112;
	}

IL_00f6:
	{
		StringU5BU5D_t1281789340* L_53 = V_7;
		int32_t L_54 = V_8;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		String_t* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_9 = L_56;
		List_1_t257213610 * L_57 = V_0;
		int32_t L_58 = V_6;
		int32_t L_59 = L_58;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		String_t* L_60 = V_9;
		NullCheck(L_57);
		List_1_Insert_m3705215113(L_57, L_59, L_60, /*hidden argument*/List_1_Insert_m3705215113_RuntimeMethod_var);
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0112:
	{
		int32_t L_62 = V_8;
		StringU5BU5D_t1281789340* L_63 = V_7;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_63)->max_length)))))))
		{
			goto IL_00f6;
		}
	}

IL_011a:
	{
		List_1_t257213610 * L_64 = V_0;
		return L_64;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::FindSymWithMatchingArity(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * SymbolTable_FindSymWithMatchingArity_m1958855211 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___aggregateSymbol0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_FindSymWithMatchingArity_m1958855211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AggregateSymbol_t3146081271 * V_0 = NULL;
	{
		AggregateSymbol_t3146081271 * L_0 = ___aggregateSymbol0;
		V_0 = L_0;
		goto IL_002f;
	}

IL_0004:
	{
		AggregateSymbol_t3146081271 * L_1 = V_0;
		NullCheck(L_1);
		TypeArray_t2467755373 * L_2 = AggregateSymbol_GetTypeVarsAll_m443298054(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = TypeArray_get_Count_m4264721965(L_2, /*hidden argument*/NULL);
		Type_t * L_4 = ___type1;
		NullCheck(L_4);
		TypeU5BU5D_t3940880105* L_5 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_4);
		NullCheck(L_5);
		if ((!(((uint32_t)L_3) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))))))
		{
			goto IL_001b;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_6 = V_0;
		return L_6;
	}

IL_001b:
	{
		AggregateSymbol_t3146081271 * L_7 = V_0;
		AggregateSymbol_t3146081271 * L_8 = V_0;
		NullCheck(L_8);
		NamespaceOrAggregateSymbol_t2365823281 * L_9 = AggregateSymbol_get_Parent_m2303668570(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		Symbol_t3348236047 * L_10 = BSYMMGR_LookupNextSym_m1831996135(NULL /*static, unused*/, L_7, L_9, (((int64_t)((int64_t)4))), /*hidden argument*/NULL);
		V_0 = ((AggregateSymbol_t3146081271 *)IsInstClass((RuntimeObject*)L_10, AggregateSymbol_t3146081271_il2cpp_TypeInfo_var));
	}

IL_002f:
	{
		AggregateSymbol_t3146081271 * L_11 = V_0;
		if (L_11)
		{
			goto IL_0004;
		}
	}
	{
		return (AggregateSymbol_t3146081271 *)NULL;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddNamespaceToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,System.String)
extern "C" IL2CPP_METHOD_ATTR NamespaceSymbol_t4294485991 * SymbolTable_AddNamespaceToSymbolTable_m876063316 (SymbolTable_t2007508464 * __this, NamespaceOrAggregateSymbol_t2365823281 * ___parent0, String_t* ___sz1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddNamespaceToSymbolTable_m876063316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Name_t658191338 * V_0 = NULL;
	NamespaceSymbol_t4294485991 * G_B2_0 = NULL;
	NamespaceSymbol_t4294485991 * G_B1_0 = NULL;
	{
		String_t* L_0 = ___sz1;
		Name_t658191338 * L_1 = SymbolTable_GetName_m1066594422(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SYMTBL_t752690877 * L_2 = __this->get__symbolTable_2();
		Name_t658191338 * L_3 = V_0;
		NamespaceOrAggregateSymbol_t2365823281 * L_4 = ___parent0;
		NullCheck(L_2);
		Symbol_t3348236047 * L_5 = SYMTBL_LookupSym_m2091533833(L_2, L_3, L_4, (((int64_t)((int64_t)1))), /*hidden argument*/NULL);
		NamespaceSymbol_t4294485991 * L_6 = ((NamespaceSymbol_t4294485991 *)IsInstSealed((RuntimeObject*)L_5, NamespaceSymbol_t4294485991_il2cpp_TypeInfo_var));
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0032;
		}
	}
	{
		SymFactory_t300688847 * L_7 = __this->get__symFactory_3();
		Name_t658191338 * L_8 = V_0;
		NamespaceOrAggregateSymbol_t2365823281 * L_9 = ___parent0;
		NullCheck(L_7);
		NamespaceSymbol_t4294485991 * L_10 = SymFactory_CreateNamespace_m2756311511(L_7, L_8, ((NamespaceSymbol_t4294485991 *)IsInstSealed((RuntimeObject*)L_9, NamespaceSymbol_t4294485991_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B2_0 = L_10;
	}

IL_0032:
	{
		return G_B2_0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType[] Microsoft.CSharp.RuntimeBinder.SymbolTable::GetCTypeArrayFromTypes(System.Type[])
extern "C" IL2CPP_METHOD_ATTR CTypeU5BU5D_t868586555* SymbolTable_GetCTypeArrayFromTypes_m4106394335 (SymbolTable_t2007508464 * __this, TypeU5BU5D_t3940880105* ___types0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetCTypeArrayFromTypes_m4106394335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CTypeU5BU5D_t868586555* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	{
		TypeU5BU5D_t3940880105* L_0 = ___types0;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		CTypeU5BU5D_t868586555* L_2 = Array_Empty_TisCType_t1813387470_m3542555726(NULL /*static, unused*/, /*hidden argument*/Array_Empty_TisCType_t1813387470_m3542555726_RuntimeMethod_var);
		return L_2;
	}

IL_000d:
	{
		int32_t L_3 = V_0;
		CTypeU5BU5D_t868586555* L_4 = (CTypeU5BU5D_t868586555*)SZArrayNew(CTypeU5BU5D_t868586555_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		goto IL_002a;
	}

IL_0018:
	{
		TypeU5BU5D_t3940880105* L_5 = ___types0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		CTypeU5BU5D_t868586555* L_9 = V_1;
		int32_t L_10 = V_2;
		Type_t * L_11 = V_3;
		CType_t1813387470 * L_12 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (CType_t1813387470 *)L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_14 = V_2;
		TypeU5BU5D_t3940880105* L_15 = ___types0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		CTypeU5BU5D_t868586555* L_16 = V_1;
		return L_16;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetCTypeFromType(System.Type)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_GetCTypeFromType_m3194020084 (SymbolTable_t2007508464 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		CType_t1813387470 * L_1 = SymbolTable_LoadSymbolsFromType_m2262646512(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddAggregateToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.NamespaceOrAggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR AggregateSymbol_t3146081271 * SymbolTable_AddAggregateToSymbolTable_m2773205952 (SymbolTable_t2007508464 * __this, NamespaceOrAggregateSymbol_t2365823281 * ___parent0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddAggregateToSymbolTable_m2773205952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AggregateSymbol_t3146081271 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TypeU5BU5D_t3940880105* V_3 = NULL;
	int32_t V_4 = 0;
	Type_t * V_5 = NULL;
	TypeParameterType_t171561091 * V_6 = NULL;
	String_t* V_7 = NULL;
	uint32_t V_8 = 0;
	Type_t * V_9 = NULL;
	AggregateSymbol_t3146081271 * G_B2_0 = NULL;
	AggregateSymbol_t3146081271 * G_B1_0 = NULL;
	Type_t * G_B3_0 = NULL;
	AggregateSymbol_t3146081271 * G_B3_1 = NULL;
	{
		SymFactory_t300688847 * L_0 = __this->get__symFactory_3();
		Type_t * L_1 = ___type1;
		Name_t658191338 * L_2 = SymbolTable_GetName_m2509943126(__this, L_1, /*hidden argument*/NULL);
		NamespaceOrAggregateSymbol_t2365823281 * L_3 = ___parent0;
		TypeManager_t4140799422 * L_4 = __this->get__typeManager_5();
		NullCheck(L_0);
		AggregateSymbol_t3146081271 * L_5 = SymFactory_CreateAggregate_m1510365684(L_0, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		AggregateSymbol_t3146081271 * L_6 = V_0;
		Type_t * L_7 = ___type1;
		NullCheck(L_7);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_7);
		G_B1_0 = L_6;
		if (L_8)
		{
			G_B2_0 = L_6;
			goto IL_0026;
		}
	}
	{
		Type_t * L_9 = ___type1;
		G_B3_0 = L_9;
		G_B3_1 = G_B1_0;
		goto IL_002c;
	}

IL_0026:
	{
		Type_t * L_10 = ___type1;
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_10);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_002c:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_AssociatedSystemType_10(G_B3_0);
		AggregateSymbol_t3146081271 * L_12 = V_0;
		Type_t * L_13 = ___type1;
		NullCheck(L_13);
		Assembly_t * L_14 = VirtFuncInvoker0< Assembly_t * >::Invoke(24 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_13);
		NullCheck(L_12);
		L_12->set_AssociatedAssembly_11(L_14);
		Type_t * L_15 = ___type1;
		NullCheck(L_15);
		bool L_16 = Type_get_IsInterface_m3284996719(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_004c;
		}
	}
	{
		V_1 = 3;
		goto IL_00cf;
	}

IL_004c:
	{
		Type_t * L_17 = ___type1;
		NullCheck(L_17);
		bool L_18 = VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsEnum() */, L_17);
		if (!L_18)
		{
			goto IL_006f;
		}
	}
	{
		V_1 = 5;
		AggregateSymbol_t3146081271 * L_19 = V_0;
		Type_t * L_20 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		Type_t * L_21 = Enum_GetUnderlyingType_m2480312097(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		CType_t1813387470 * L_22 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		AggregateSymbol_SetUnderlyingType_m3102494060(L_19, ((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_22, AggregateType_t567267003_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_006f:
	{
		Type_t * L_23 = ___type1;
		NullCheck(L_23);
		bool L_24 = Type_get_IsValueType_m3108065642(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_007b;
		}
	}
	{
		V_1 = 4;
		goto IL_00cf;
	}

IL_007b:
	{
		Type_t * L_25 = ___type1;
		NullCheck(L_25);
		Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_27 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_26, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00cd;
		}
	}
	{
		Type_t * L_28 = ___type1;
		NullCheck(L_28);
		Type_t * L_29 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_28);
		NullCheck(L_29);
		String_t* L_30 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_29);
		bool L_31 = String_op_Equality_m920492651(NULL /*static, unused*/, L_30, _stringLiteral4106723201, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00b7;
		}
	}
	{
		Type_t * L_32 = ___type1;
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_32);
		NullCheck(L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_33);
		bool L_35 = String_op_Equality_m920492651(NULL /*static, unused*/, L_34, _stringLiteral842632268, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00cd;
		}
	}

IL_00b7:
	{
		Type_t * L_36 = ___type1;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_36);
		bool L_38 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_37, _stringLiteral4106723201, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00cd;
		}
	}
	{
		V_1 = 2;
		goto IL_00cf;
	}

IL_00cd:
	{
		V_1 = 1;
	}

IL_00cf:
	{
		AggregateSymbol_t3146081271 * L_39 = V_0;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		AggregateSymbol_SetAggKind_m809582924(L_39, L_40, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_41 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		TypeArray_t2467755373 * L_42 = BSYMMGR_EmptyTypeArray_m2278114118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_41);
		AggregateSymbol_SetTypeVars_m2557572345(L_41, L_42, /*hidden argument*/NULL);
		Type_t * L_43 = ___type1;
		NullCheck(L_43);
		bool L_44 = Type_get_IsPublic_m3753422318(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00ed;
		}
	}
	{
		V_2 = 5;
		goto IL_0133;
	}

IL_00ed:
	{
		Type_t * L_45 = ___type1;
		NullCheck(L_45);
		bool L_46 = Type_get_IsNested_m3546087448(L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}
	{
		Type_t * L_47 = ___type1;
		NullCheck(L_47);
		bool L_48 = Type_get_IsNestedAssembly_m2663872037(L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0105;
		}
	}
	{
		Type_t * L_49 = ___type1;
		NullCheck(L_49);
		bool L_50 = Type_get_IsNestedFamANDAssem_m3716627270(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0109;
		}
	}

IL_0105:
	{
		V_2 = 2;
		goto IL_0133;
	}

IL_0109:
	{
		Type_t * L_51 = ___type1;
		NullCheck(L_51);
		bool L_52 = Type_get_IsNestedFamORAssem_m3330578303(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0115;
		}
	}
	{
		V_2 = 4;
		goto IL_0133;
	}

IL_0115:
	{
		Type_t * L_53 = ___type1;
		NullCheck(L_53);
		bool L_54 = Type_get_IsNestedPrivate_m4042001536(L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0121;
		}
	}
	{
		V_2 = 1;
		goto IL_0133;
	}

IL_0121:
	{
		Type_t * L_55 = ___type1;
		NullCheck(L_55);
		bool L_56 = Type_get_IsNestedFamily_m927634460(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_012d;
		}
	}
	{
		V_2 = 3;
		goto IL_0133;
	}

IL_012d:
	{
		V_2 = 5;
		goto IL_0133;
	}

IL_0131:
	{
		V_2 = 2;
	}

IL_0133:
	{
		AggregateSymbol_t3146081271 * L_57 = V_0;
		int32_t L_58 = V_2;
		NullCheck(L_57);
		Symbol_SetAccess_m3955101489(L_57, L_58, /*hidden argument*/NULL);
		Type_t * L_59 = ___type1;
		NullCheck(L_59);
		bool L_60 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericParameter() */, L_59);
		if (L_60)
		{
			goto IL_0150;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_61 = V_0;
		Type_t * L_62 = ___type1;
		AggregateSymbol_t3146081271 * L_63 = V_0;
		TypeArray_t2467755373 * L_64 = SymbolTable_GetAggregateTypeParameters_m2250120112(__this, L_62, L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		AggregateSymbol_SetTypeVars_m2557572345(L_61, L_64, /*hidden argument*/NULL);
	}

IL_0150:
	{
		Type_t * L_65 = ___type1;
		NullCheck(L_65);
		bool L_66 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_65);
		if (!L_66)
		{
			goto IL_01bf;
		}
	}
	{
		Type_t * L_67 = ___type1;
		NullCheck(L_67);
		Type_t * L_68 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_67);
		NullCheck(L_68);
		TypeU5BU5D_t3940880105* L_69 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(109 /* System.Type[] System.Type::GetGenericArguments() */, L_68);
		V_3 = L_69;
		V_4 = 0;
		goto IL_01b0;
	}

IL_0169:
	{
		TypeU5BU5D_t3940880105* L_70 = V_3;
		int32_t L_71 = V_4;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Type_t * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = L_73;
		AggregateSymbol_t3146081271 * L_74 = V_0;
		NullCheck(L_74);
		TypeArray_t2467755373 * L_75 = AggregateSymbol_GetTypeVars_m958591200(L_74, /*hidden argument*/NULL);
		int32_t L_76 = V_4;
		NullCheck(L_75);
		CType_t1813387470 * L_77 = TypeArray_get_Item_m3570930834(L_75, L_76, /*hidden argument*/NULL);
		TypeParameterType_t171561091 * L_78 = ((TypeParameterType_t171561091 *)IsInstSealed((RuntimeObject*)L_77, TypeParameterType_t171561091_il2cpp_TypeInfo_var));
		V_6 = L_78;
		if (!L_78)
		{
			goto IL_01aa;
		}
	}
	{
		TypeParameterType_t171561091 * L_79 = V_6;
		NullCheck(L_79);
		TypeParameterSymbol_t755586405 * L_80 = TypeParameterType_GetTypeParameterSymbol_m812331021(L_79, /*hidden argument*/NULL);
		BSYMMGR_t2938027401 * L_81 = __this->get__bsymmgr_6();
		Type_t * L_82 = V_5;
		NullCheck(L_82);
		TypeU5BU5D_t3940880105* L_83 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(90 /* System.Type[] System.Type::GetGenericParameterConstraints() */, L_82);
		CTypeU5BU5D_t868586555* L_84 = SymbolTable_GetCTypeArrayFromTypes_m4106394335(__this, L_83, /*hidden argument*/NULL);
		NullCheck(L_81);
		TypeArray_t2467755373 * L_85 = BSYMMGR_AllocParams_m784650617(L_81, L_84, /*hidden argument*/NULL);
		NullCheck(L_80);
		TypeParameterSymbol_SetBounds_m3448967516(L_80, L_85, /*hidden argument*/NULL);
	}

IL_01aa:
	{
		int32_t L_86 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_01b0:
	{
		int32_t L_87 = V_4;
		AggregateSymbol_t3146081271 * L_88 = V_0;
		NullCheck(L_88);
		TypeArray_t2467755373 * L_89 = AggregateSymbol_GetTypeVars_m958591200(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		int32_t L_90 = TypeArray_get_Count_m4264721965(L_89, /*hidden argument*/NULL);
		if ((((int32_t)L_87) < ((int32_t)L_90)))
		{
			goto IL_0169;
		}
	}

IL_01bf:
	{
		AggregateSymbol_t3146081271 * L_91 = V_0;
		Type_t * L_92 = ___type1;
		NullCheck(L_92);
		bool L_93 = Type_get_IsAbstract_m1120089130(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		AggregateSymbol_SetAbstract_m1567389381(L_91, L_93, /*hidden argument*/NULL);
		Type_t * L_94 = ___type1;
		NullCheck(L_94);
		String_t* L_95 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_94);
		V_7 = L_95;
		Type_t * L_96 = ___type1;
		NullCheck(L_96);
		bool L_97 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_96);
		if (!L_97)
		{
			goto IL_01e8;
		}
	}
	{
		Type_t * L_98 = ___type1;
		NullCheck(L_98);
		Type_t * L_99 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_98);
		NullCheck(L_99);
		String_t* L_100 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_99);
		V_7 = L_100;
	}

IL_01e8:
	{
		String_t* L_101 = V_7;
		if (!L_101)
		{
			goto IL_0203;
		}
	}
	{
		String_t* L_102 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(PredefinedTypeFacts_t718682611_il2cpp_TypeInfo_var);
		uint32_t L_103 = PredefinedTypeFacts_TryGetPredefTypeIndex_m3082312426(NULL /*static, unused*/, L_102, /*hidden argument*/NULL);
		V_8 = L_103;
		uint32_t L_104 = V_8;
		if ((((int32_t)L_104) == ((int32_t)(-1))))
		{
			goto IL_0203;
		}
	}
	{
		AggregateSymbol_t3146081271 * L_105 = V_0;
		uint32_t L_106 = V_8;
		PredefinedTypes_InitializePredefinedType_m3312508642(NULL /*static, unused*/, L_105, L_106, /*hidden argument*/NULL);
	}

IL_0203:
	{
		AggregateSymbol_t3146081271 * L_107 = V_0;
		Type_t * L_108 = ___type1;
		NullCheck(L_108);
		bool L_109 = Type_get_IsSealed_m3543837727(L_108, /*hidden argument*/NULL);
		NullCheck(L_107);
		AggregateSymbol_SetSealed_m1604952804(L_107, L_109, /*hidden argument*/NULL);
		Type_t * L_110 = ___type1;
		NullCheck(L_110);
		Type_t * L_111 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_110);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_112 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_111, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_112)
		{
			goto IL_024a;
		}
	}
	{
		Type_t * L_113 = ___type1;
		NullCheck(L_113);
		Type_t * L_114 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_113);
		V_9 = L_114;
		Type_t * L_115 = V_9;
		NullCheck(L_115);
		bool L_116 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_115);
		if (!L_116)
		{
			goto IL_0237;
		}
	}
	{
		Type_t * L_117 = V_9;
		NullCheck(L_117);
		Type_t * L_118 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_117);
		V_9 = L_118;
	}

IL_0237:
	{
		AggregateSymbol_t3146081271 * L_119 = V_0;
		Type_t * L_120 = V_9;
		CType_t1813387470 * L_121 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_120, /*hidden argument*/NULL);
		NullCheck(L_119);
		AggregateSymbol_SetBaseClass_m678578832(L_119, ((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_121, AggregateType_t567267003_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_024a:
	{
		AggregateSymbol_t3146081271 * L_122 = V_0;
		TypeManager_t4140799422 * L_123 = __this->get__typeManager_5();
		NullCheck(L_122);
		AggregateSymbol_SetTypeManager_m3724921304(L_122, L_123, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_124 = V_0;
		NullCheck(L_124);
		AggregateSymbol_SetFirstUDConversion_m2058433964(L_124, (MethodSymbol_t394006151 *)NULL, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_125 = V_0;
		Type_t * L_126 = ___type1;
		SymbolTable_SetInterfacesOnAggregate_m4130193175(__this, L_125, L_126, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_127 = V_0;
		Type_t * L_128 = ___type1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t3940880105* L_129 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_5();
		NullCheck(L_128);
		ConstructorInfo_t5769829 * L_130 = Type_GetConstructor_m2219014380(L_128, L_129, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t5769829_il2cpp_TypeInfo_var);
		bool L_131 = ConstructorInfo_op_Inequality_m2322742156(NULL /*static, unused*/, L_130, (ConstructorInfo_t5769829 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_127);
		AggregateSymbol_SetHasPubNoArgCtor_m2252766618(L_127, L_131, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_132 = V_0;
		NullCheck(L_132);
		bool L_133 = AggregateSymbol_IsDelegate_m2498524409(L_132, /*hidden argument*/NULL);
		if (!L_133)
		{
			goto IL_029e;
		}
	}
	{
		Type_t * L_134 = ___type1;
		SymbolTable_PopulateSymbolTableWithName_m2474176076(__this, _stringLiteral1221375020, (RuntimeObject*)NULL, L_134, /*hidden argument*/NULL);
		Type_t * L_135 = ___type1;
		SymbolTable_PopulateSymbolTableWithName_m2474176076(__this, _stringLiteral2401610308, (RuntimeObject*)NULL, L_135, /*hidden argument*/NULL);
	}

IL_029e:
	{
		AggregateSymbol_t3146081271 * L_136 = V_0;
		return L_136;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::SetInterfacesOnAggregate(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_SetInterfacesOnAggregate_m4130193175 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___aggregate0, Type_t * ___type1, const RuntimeMethod* method)
{
	TypeU5BU5D_t3940880105* V_0 = NULL;
	{
		Type_t * L_0 = ___type1;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_2 = ___type1;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		___type1 = L_3;
	}

IL_0010:
	{
		Type_t * L_4 = ___type1;
		NullCheck(L_4);
		TypeU5BU5D_t3940880105* L_5 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_4);
		V_0 = L_5;
		AggregateSymbol_t3146081271 * L_6 = ___aggregate0;
		BSYMMGR_t2938027401 * L_7 = __this->get__bsymmgr_6();
		TypeU5BU5D_t3940880105* L_8 = V_0;
		NullCheck(L_8);
		TypeU5BU5D_t3940880105* L_9 = V_0;
		CTypeU5BU5D_t868586555* L_10 = SymbolTable_GetCTypeArrayFromTypes_m4106394335(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		TypeArray_t2467755373 * L_11 = BSYMMGR_AllocParams_m78811279(L_7, (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		AggregateSymbol_SetIfaces_m495326653(L_6, L_11, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_12 = ___aggregate0;
		AggregateSymbol_t3146081271 * L_13 = ___aggregate0;
		NullCheck(L_13);
		TypeArray_t2467755373 * L_14 = AggregateSymbol_GetIfaces_m1529935643(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		AggregateSymbol_SetIfacesAll_m3880275442(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddFieldToSymbolTable(System.Reflection.FieldInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR FieldSymbol_t2811293341 * SymbolTable_AddFieldToSymbolTable_m2953080925 (SymbolTable_t2007508464 * __this, FieldInfo_t * ___fieldInfo0, AggregateSymbol_t3146081271 * ___aggregate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddFieldToSymbolTable_m2953080925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FieldSymbol_t2811293341 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		SYMTBL_t752690877 * L_0 = __this->get__symbolTable_2();
		FieldInfo_t * L_1 = ___fieldInfo0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		Name_t658191338 * L_3 = SymbolTable_GetName_m1066594422(__this, L_2, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_4 = ___aggregate1;
		NullCheck(L_0);
		Symbol_t3348236047 * L_5 = SYMTBL_LookupSym_m2091533833(L_0, L_3, L_4, (((int64_t)((int64_t)((int32_t)32)))), /*hidden argument*/NULL);
		V_0 = ((FieldSymbol_t2811293341 *)IsInstClass((RuntimeObject*)L_5, FieldSymbol_t2811293341_il2cpp_TypeInfo_var));
		FieldSymbol_t2811293341 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		FieldSymbol_t2811293341 * L_7 = V_0;
		return L_7;
	}

IL_0026:
	{
		SymFactory_t300688847 * L_8 = __this->get__symFactory_3();
		FieldInfo_t * L_9 = ___fieldInfo0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		Name_t658191338 * L_11 = SymbolTable_GetName_m1066594422(__this, L_10, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_12 = ___aggregate1;
		NullCheck(L_8);
		FieldSymbol_t2811293341 * L_13 = SymFactory_CreateMemberVar_m2180122799(L_8, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		FieldSymbol_t2811293341 * L_14 = V_0;
		FieldInfo_t * L_15 = ___fieldInfo0;
		NullCheck(L_14);
		L_14->set_AssociatedFieldInfo_11(L_15);
		FieldSymbol_t2811293341 * L_16 = V_0;
		FieldInfo_t * L_17 = ___fieldInfo0;
		NullCheck(L_17);
		bool L_18 = FieldInfo_get_IsStatic_m3482711189(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_isStatic_7(L_18);
		FieldInfo_t * L_19 = ___fieldInfo0;
		NullCheck(L_19);
		bool L_20 = FieldInfo_get_IsPublic_m3378038140(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_005e;
		}
	}
	{
		V_1 = 5;
		goto IL_008c;
	}

IL_005e:
	{
		FieldInfo_t * L_21 = ___fieldInfo0;
		NullCheck(L_21);
		bool L_22 = FieldInfo_get_IsPrivate_m1717932363(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_006a;
		}
	}
	{
		V_1 = 1;
		goto IL_008c;
	}

IL_006a:
	{
		FieldInfo_t * L_23 = ___fieldInfo0;
		NullCheck(L_23);
		bool L_24 = FieldInfo_get_IsFamily_m3077122203(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0076;
		}
	}
	{
		V_1 = 3;
		goto IL_008c;
	}

IL_0076:
	{
		FieldInfo_t * L_25 = ___fieldInfo0;
		NullCheck(L_25);
		bool L_26 = FieldInfo_get_IsAssembly_m3149973128(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0086;
		}
	}
	{
		FieldInfo_t * L_27 = ___fieldInfo0;
		NullCheck(L_27);
		bool L_28 = FieldInfo_get_IsFamilyAndAssembly_m29655538(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_008a;
		}
	}

IL_0086:
	{
		V_1 = 2;
		goto IL_008c;
	}

IL_008a:
	{
		V_1 = 4;
	}

IL_008c:
	{
		FieldSymbol_t2811293341 * L_29 = V_0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		Symbol_SetAccess_m3955101489(L_29, L_30, /*hidden argument*/NULL);
		FieldSymbol_t2811293341 * L_31 = V_0;
		FieldInfo_t * L_32 = ___fieldInfo0;
		NullCheck(L_32);
		bool L_33 = FieldInfo_get_IsInitOnly_m930369112(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_isReadOnly_8(L_33);
		FieldSymbol_t2811293341 * L_34 = V_0;
		NullCheck(L_34);
		L_34->set_isEvent_9((bool)0);
		FieldSymbol_t2811293341 * L_35 = V_0;
		NullCheck(L_35);
		L_35->set_isAssigned_10((bool)1);
		FieldSymbol_t2811293341 * L_36 = V_0;
		FieldInfo_t * L_37 = ___fieldInfo0;
		NullCheck(L_37);
		Type_t * L_38 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_37);
		CType_t1813387470 * L_39 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		FieldSymbol_SetType_m1150868786(L_36, L_39, /*hidden argument*/NULL);
		FieldSymbol_t2811293341 * L_40 = V_0;
		return L_40;
	}
}
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::get_EventRegistrationTokenType()
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_get_EventRegistrationTokenType_m1303499912 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_get_EventRegistrationTokenType_m1303499912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_0 = SymbolTable_GetTypeByName_m1759078710(NULL /*static, unused*/, (Type_t **)(((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_address_of_s_EventRegistrationTokenType_10()), _stringLiteral2141025683, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::get_WindowsRuntimeMarshalType()
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_get_WindowsRuntimeMarshalType_m1959189592 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_get_WindowsRuntimeMarshalType_m1959189592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_0 = SymbolTable_GetTypeByName_m1759078710(NULL /*static, unused*/, (Type_t **)(((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_address_of_s_WindowsRuntimeMarshal_11()), _stringLiteral2834715456, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::get_EventRegistrationTokenTableType()
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_get_EventRegistrationTokenTableType_m97072725 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_get_EventRegistrationTokenTableType_m97072725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_0 = SymbolTable_GetTypeByName_m1759078710(NULL /*static, unused*/, (Type_t **)(((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_address_of_s_EventRegistrationTokenTable_12()), _stringLiteral2513493387, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type Microsoft.CSharp.RuntimeBinder.SymbolTable::GetTypeByName(System.Type&,System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * SymbolTable_GetTypeByName_m1759078710 (RuntimeObject * __this /* static, unused */, Type_t ** ___cachedResult0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetTypeByName_m1759078710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t ** L_0 = ___cachedResult0;
		Type_t * L_1 = *((Type_t **)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_2 = ((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_s_Sentinel_9();
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001c;
		}
	}
	{
		Type_t ** L_3 = ___cachedResult0;
		String_t* L_4 = ___name1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, L_4, (bool)0, "Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a");
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_6 = ((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_s_Sentinel_9();
		InterlockedCompareExchangeImpl<Type_t *>((Type_t **)L_3, L_5, L_6);
	}

IL_001c:
	{
		Type_t ** L_7 = ___cachedResult0;
		Type_t * L_8 = *((Type_t **)L_7);
		return L_8;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddEventToSymbolTable(System.Reflection.EventInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.FieldSymbol)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddEventToSymbolTable_m1786974805 (SymbolTable_t2007508464 * __this, EventInfo_t * ___eventInfo0, AggregateSymbol_t3146081271 * ___aggregate1, FieldSymbol_t2811293341 * ___addedField2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddEventToSymbolTable_m1786974805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventSymbol_t2632276330 * V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	CType_t1813387470 * V_3 = NULL;
	Type_t * V_4 = NULL;
	CType_t1813387470 * G_B14_0 = NULL;
	{
		SYMTBL_t752690877 * L_0 = __this->get__symbolTable_2();
		EventInfo_t * L_1 = ___eventInfo0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		Name_t658191338 * L_3 = SymbolTable_GetName_m1066594422(__this, L_2, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_4 = ___aggregate1;
		NullCheck(L_0);
		Symbol_t3348236047 * L_5 = SYMTBL_LookupSym_m2091533833(L_0, L_3, L_4, (((int64_t)((int64_t)((int32_t)512)))), /*hidden argument*/NULL);
		V_0 = ((EventSymbol_t2632276330 *)IsInstSealed((RuntimeObject*)L_5, EventSymbol_t2632276330_il2cpp_TypeInfo_var));
		EventSymbol_t2632276330 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		SymFactory_t300688847 * L_7 = __this->get__symFactory_3();
		EventInfo_t * L_8 = ___eventInfo0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		Name_t658191338 * L_10 = SymbolTable_GetName_m1066594422(__this, L_9, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_11 = ___aggregate1;
		NullCheck(L_7);
		EventSymbol_t2632276330 * L_12 = SymFactory_CreateEvent_m4144277480(L_7, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		EventSymbol_t2632276330 * L_13 = V_0;
		EventInfo_t * L_14 = ___eventInfo0;
		NullCheck(L_13);
		L_13->set_AssociatedEventInfo_6(L_14);
		V_1 = 1;
		EventInfo_t * L_15 = ___eventInfo0;
		NullCheck(L_15);
		MethodInfo_t * L_16 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.EventInfo::get_AddMethod() */, L_15);
		bool L_17 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_16, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		EventSymbol_t2632276330 * L_18 = V_0;
		EventInfo_t * L_19 = ___eventInfo0;
		NullCheck(L_19);
		MethodInfo_t * L_20 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.EventInfo::get_AddMethod() */, L_19);
		AggregateSymbol_t3146081271 * L_21 = ___aggregate1;
		MethodSymbol_t394006151 * L_22 = SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_20, L_21, 4, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_methAdd_10(L_22);
		EventSymbol_t2632276330 * L_23 = V_0;
		NullCheck(L_23);
		MethodSymbol_t394006151 * L_24 = L_23->get_methAdd_10();
		EventSymbol_t2632276330 * L_25 = V_0;
		NullCheck(L_24);
		MethodSymbol_SetEvent_m1689614715(L_24, L_25, /*hidden argument*/NULL);
		EventSymbol_t2632276330 * L_26 = V_0;
		EventSymbol_t2632276330 * L_27 = V_0;
		NullCheck(L_27);
		MethodSymbol_t394006151 * L_28 = L_27->get_methAdd_10();
		NullCheck(L_28);
		bool L_29 = Symbol_IsOverride_m3657466498(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_isOverride_8(L_29);
		EventSymbol_t2632276330 * L_30 = V_0;
		NullCheck(L_30);
		MethodSymbol_t394006151 * L_31 = L_30->get_methAdd_10();
		NullCheck(L_31);
		int32_t L_32 = Symbol_GetAccess_m2843445626(L_31, /*hidden argument*/NULL);
		V_1 = L_32;
	}

IL_0095:
	{
		EventInfo_t * L_33 = ___eventInfo0;
		NullCheck(L_33);
		MethodInfo_t * L_34 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.EventInfo::get_RemoveMethod() */, L_33);
		bool L_35 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_34, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00e0;
		}
	}
	{
		EventSymbol_t2632276330 * L_36 = V_0;
		EventInfo_t * L_37 = ___eventInfo0;
		NullCheck(L_37);
		MethodInfo_t * L_38 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.EventInfo::get_RemoveMethod() */, L_37);
		AggregateSymbol_t3146081271 * L_39 = ___aggregate1;
		MethodSymbol_t394006151 * L_40 = SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_38, L_39, 4, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_methRemove_11(L_40);
		EventSymbol_t2632276330 * L_41 = V_0;
		NullCheck(L_41);
		MethodSymbol_t394006151 * L_42 = L_41->get_methRemove_11();
		EventSymbol_t2632276330 * L_43 = V_0;
		NullCheck(L_42);
		MethodSymbol_SetEvent_m1689614715(L_42, L_43, /*hidden argument*/NULL);
		EventSymbol_t2632276330 * L_44 = V_0;
		EventSymbol_t2632276330 * L_45 = V_0;
		NullCheck(L_45);
		MethodSymbol_t394006151 * L_46 = L_45->get_methRemove_11();
		NullCheck(L_46);
		bool L_47 = Symbol_IsOverride_m3657466498(L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		L_44->set_isOverride_8(L_47);
		EventSymbol_t2632276330 * L_48 = V_0;
		NullCheck(L_48);
		MethodSymbol_t394006151 * L_49 = L_48->get_methRemove_11();
		NullCheck(L_49);
		int32_t L_50 = Symbol_GetAccess_m2843445626(L_49, /*hidden argument*/NULL);
		V_1 = L_50;
	}

IL_00e0:
	{
		EventSymbol_t2632276330 * L_51 = V_0;
		NullCheck(L_51);
		L_51->set_isStatic_7((bool)0);
		EventSymbol_t2632276330 * L_52 = V_0;
		EventInfo_t * L_53 = ___eventInfo0;
		NullCheck(L_53);
		Type_t * L_54 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_53);
		CType_t1813387470 * L_55 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		L_52->set_type_9(L_55);
		EventSymbol_t2632276330 * L_56 = V_0;
		int32_t L_57 = V_1;
		NullCheck(L_56);
		Symbol_SetAccess_m3955101489(L_56, L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_58 = SymbolTable_get_EventRegistrationTokenType_m1303499912(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_58;
		Type_t * L_59 = V_2;
		if (!L_59)
		{
			goto IL_014d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_60 = SymbolTable_get_WindowsRuntimeMarshalType_m1959189592(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_014d;
		}
	}
	{
		EventSymbol_t2632276330 * L_61 = V_0;
		NullCheck(L_61);
		MethodSymbol_t394006151 * L_62 = L_61->get_methAdd_10();
		NullCheck(L_62);
		CType_t1813387470 * L_63 = ((MethodOrPropertySymbol_t2915275678 *)L_62)->get_RetType_23();
		NullCheck(L_63);
		Type_t * L_64 = CType_get_AssociatedSystemType_m1536780166(L_63, /*hidden argument*/NULL);
		Type_t * L_65 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_66 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_014d;
		}
	}
	{
		EventSymbol_t2632276330 * L_67 = V_0;
		NullCheck(L_67);
		MethodSymbol_t394006151 * L_68 = L_67->get_methRemove_11();
		NullCheck(L_68);
		TypeArray_t2467755373 * L_69 = MethodOrPropertySymbol_get_Params_m804279157(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		CType_t1813387470 * L_70 = TypeArray_get_Item_m3570930834(L_69, 0, /*hidden argument*/NULL);
		NullCheck(L_70);
		Type_t * L_71 = CType_get_AssociatedSystemType_m1536780166(L_70, /*hidden argument*/NULL);
		Type_t * L_72 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_73 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_014d;
		}
	}
	{
		EventSymbol_t2632276330 * L_74 = V_0;
		NullCheck(L_74);
		EventSymbol_set_IsWindowsRuntimeEvent_m1754260102(L_74, (bool)1, /*hidden argument*/NULL);
	}

IL_014d:
	{
		FieldSymbol_t2811293341 * L_75 = ___addedField2;
		if (L_75)
		{
			goto IL_0153;
		}
	}
	{
		G_B14_0 = ((CType_t1813387470 *)(NULL));
		goto IL_0159;
	}

IL_0153:
	{
		FieldSymbol_t2811293341 * L_76 = ___addedField2;
		NullCheck(L_76);
		CType_t1813387470 * L_77 = FieldSymbol_GetType_m1947491790(L_76, /*hidden argument*/NULL);
		G_B14_0 = L_77;
	}

IL_0159:
	{
		V_3 = G_B14_0;
		CType_t1813387470 * L_78 = V_3;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		CType_t1813387470 * L_79 = V_3;
		EventSymbol_t2632276330 * L_80 = V_0;
		NullCheck(L_80);
		CType_t1813387470 * L_81 = L_80->get_type_9();
		if ((!(((RuntimeObject*)(CType_t1813387470 *)L_79) == ((RuntimeObject*)(CType_t1813387470 *)L_81))))
		{
			goto IL_016e;
		}
	}
	{
		FieldSymbol_t2811293341 * L_82 = ___addedField2;
		NullCheck(L_82);
		L_82->set_isEvent_9((bool)1);
		return;
	}

IL_016e:
	{
		CType_t1813387470 * L_83 = V_3;
		NullCheck(L_83);
		Type_t * L_84 = CType_get_AssociatedSystemType_m1536780166(L_83, /*hidden argument*/NULL);
		V_4 = L_84;
		Type_t * L_85 = V_4;
		NullCheck(L_85);
		bool L_86 = VirtFuncInvoker0< bool >::Invoke(86 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_85);
		if (!L_86)
		{
			goto IL_01b4;
		}
	}
	{
		Type_t * L_87 = V_4;
		NullCheck(L_87);
		Type_t * L_88 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_87);
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		Type_t * L_89 = SymbolTable_get_EventRegistrationTokenTableType_m97072725(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_90 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_88, L_89, /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_01b4;
		}
	}
	{
		Type_t * L_91 = V_4;
		NullCheck(L_91);
		TypeU5BU5D_t3940880105* L_92 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(110 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_91);
		NullCheck(L_92);
		int32_t L_93 = 0;
		Type_t * L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		EventSymbol_t2632276330 * L_95 = V_0;
		NullCheck(L_95);
		CType_t1813387470 * L_96 = L_95->get_type_9();
		NullCheck(L_96);
		Type_t * L_97 = CType_get_AssociatedSystemType_m1536780166(L_96, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_98 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_94, L_97, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_01b4;
		}
	}
	{
		FieldSymbol_t2811293341 * L_99 = ___addedField2;
		NullCheck(L_99);
		L_99->set_isEvent_9((bool)1);
	}

IL_01b4:
	{
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddPredefinedPropertyToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddPredefinedPropertyToSymbolTable_m1653277243 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___type0, Name_t658191338 * ___property1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddPredefinedPropertyToSymbolTable_m1653277243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass50_0_t2872929245 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		U3CU3Ec__DisplayClass50_0_t2872929245 * L_0 = (U3CU3Ec__DisplayClass50_0_t2872929245 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass50_0_t2872929245_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass50_0__ctor_m3156650895(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass50_0_t2872929245 * L_1 = V_0;
		Name_t658191338 * L_2 = ___property1;
		NullCheck(L_1);
		L_1->set_property_0(L_2);
		AggregateSymbol_t3146081271 * L_3 = ___type0;
		NullCheck(L_3);
		AggregateType_t567267003 * L_4 = AggregateSymbol_getThisType_m4290204095(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Type_t * L_5 = CType_get_AssociatedSystemType_m1536780166(L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6 = RuntimeReflectionExtensions_GetRuntimeProperties_m229292598(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass50_0_t2872929245 * L_7 = V_0;
		intptr_t L_8 = (intptr_t)U3CU3Ec__DisplayClass50_0_U3CAddPredefinedPropertyToSymbolTableU3Eb__0_m3552718169_RuntimeMethod_var;
		Func_2_t2377163032 * L_9 = (Func_2_t2377163032 *)il2cpp_codegen_object_new(Func_2_t2377163032_il2cpp_TypeInfo_var);
		Func_2__ctor_m3813751571(L_9, L_7, (intptr_t)L_8, /*hidden argument*/Func_2__ctor_m3813751571_RuntimeMethod_var);
		RuntimeObject* L_10 = Enumerable_Where_TisPropertyInfo_t_m3804523869(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/Enumerable_Where_TisPropertyInfo_t_m3804523869_RuntimeMethod_var);
		NullCheck(L_10);
		RuntimeObject* L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t3962162136_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0036:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			PropertyInfo_t * L_13 = InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t1119912419_il2cpp_TypeInfo_var, L_12);
			V_2 = L_13;
			PropertyInfo_t * L_14 = V_2;
			AggregateSymbol_t3146081271 * L_15 = ___type0;
			SymbolTable_AddPropertyToSymbolTable_m2793273731(__this, L_14, L_15, /*hidden argument*/NULL);
		}

IL_0045:
		{
			RuntimeObject* L_16 = V_1;
			NullCheck(L_16);
			bool L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_0036;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x59, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_18 = V_1;
			if (!L_18)
			{
				goto IL_0058;
			}
		}

IL_0052:
		{
			RuntimeObject* L_19 = V_1;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_19);
		}

IL_0058:
		{
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddPropertyToSymbolTable(System.Reflection.PropertyInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddPropertyToSymbolTable_m2793273731 (SymbolTable_t2007508464 * __this, PropertyInfo_t * ___property0, AggregateSymbol_t3146081271 * ___aggregate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddPropertyToSymbolTable_m2793273731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Name_t658191338 * V_0 = NULL;
	bool V_1 = false;
	PropertySymbol_t1241991770 * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	MethodInfo_t * V_4 = NULL;
	int32_t V_5 = 0;
	PropertySymbol_t1241991770 * V_6 = NULL;
	MethodInfo_t * V_7 = NULL;
	Type_t * G_B3_0 = NULL;
	Type_t * G_B2_0 = NULL;
	String_t* G_B6_0 = NULL;
	DefaultMemberAttribute_t3275092422 * G_B5_0 = NULL;
	DefaultMemberAttribute_t3275092422 * G_B4_0 = NULL;
	int32_t G_B8_0 = 0;
	PropertySymbol_t1241991770 * G_B25_0 = NULL;
	PropertySymbol_t1241991770 * G_B24_0 = NULL;
	bool G_B26_0 = false;
	PropertySymbol_t1241991770 * G_B26_1 = NULL;
	MethodInfo_t * G_B30_0 = NULL;
	MethodInfo_t * G_B29_0 = NULL;
	PropertySymbol_t1241991770 * G_B33_0 = NULL;
	PropertySymbol_t1241991770 * G_B31_0 = NULL;
	PropertySymbol_t1241991770 * G_B32_0 = NULL;
	int32_t G_B34_0 = 0;
	PropertySymbol_t1241991770 * G_B34_1 = NULL;
	{
		PropertyInfo_t * L_0 = ___property0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t390618515* L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_0);
		NullCheck(L_1);
		if (!(((RuntimeArray *)L_1)->max_length))
		{
			goto IL_0034;
		}
	}
	{
		PropertyInfo_t * L_2 = ___property0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		Type_t * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0016;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		goto IL_0027;
	}

IL_0016:
	{
		DefaultMemberAttribute_t3275092422 * L_5 = CustomAttributeExtensions_GetCustomAttribute_TisDefaultMemberAttribute_t3275092422_m3748746748(NULL /*static, unused*/, G_B3_0, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisDefaultMemberAttribute_t3275092422_m3748746748_RuntimeMethod_var);
		DefaultMemberAttribute_t3275092422 * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0022;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		goto IL_0027;
	}

IL_0022:
	{
		NullCheck(G_B5_0);
		String_t* L_7 = DefaultMemberAttribute_get_MemberName_m3384235354(G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_7;
	}

IL_0027:
	{
		PropertyInfo_t * L_8 = ___property0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, G_B6_0, L_9, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_10));
		goto IL_0035;
	}

IL_0034:
	{
		G_B8_0 = 0;
	}

IL_0035:
	{
		V_1 = (bool)G_B8_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		Name_t658191338 * L_12 = SymbolTable_GetName_m1066594422(__this, _stringLiteral167031539, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0054;
	}

IL_0047:
	{
		PropertyInfo_t * L_13 = ___property0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		Name_t658191338 * L_15 = SymbolTable_GetName_m1066594422(__this, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_0054:
	{
		SYMTBL_t752690877 * L_16 = __this->get__symbolTable_2();
		Name_t658191338 * L_17 = V_0;
		AggregateSymbol_t3146081271 * L_18 = ___aggregate1;
		NullCheck(L_16);
		Symbol_t3348236047 * L_19 = SYMTBL_LookupSym_m2091533833(L_16, L_17, L_18, (((int64_t)((int64_t)((int32_t)256)))), /*hidden argument*/NULL);
		V_2 = ((PropertySymbol_t1241991770 *)IsInstClass((RuntimeObject*)L_19, PropertySymbol_t1241991770_il2cpp_TypeInfo_var));
		PropertySymbol_t1241991770 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00b5;
		}
	}
	{
		V_6 = (PropertySymbol_t1241991770 *)NULL;
		goto IL_00aa;
	}

IL_0075:
	{
		PropertySymbol_t1241991770 * L_21 = V_2;
		NullCheck(L_21);
		PropertyInfo_t * L_22 = PropertySymbol_get_AssociatedPropertyInfo_m262388383(L_21, /*hidden argument*/NULL);
		PropertyInfo_t * L_23 = ___property0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		bool L_24 = RuntimeBinderExtensions_IsEquivalentTo_m3460129938(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0084;
		}
	}
	{
		return;
	}

IL_0084:
	{
		PropertySymbol_t1241991770 * L_25 = V_2;
		V_6 = L_25;
		CSemanticChecker_t1535940568 * L_26 = __this->get__semanticChecker_7();
		NullCheck(L_26);
		SymbolLoader_t2983914338 * L_27 = CSemanticChecker_get_SymbolLoader_m2577500808(L_26, /*hidden argument*/NULL);
		PropertySymbol_t1241991770 * L_28 = V_2;
		PropertySymbol_t1241991770 * L_29 = V_2;
		NullCheck(L_29);
		ParentSymbol_t84807579 * L_30 = ((Symbol_t3348236047 *)L_29)->get_parent_3();
		NullCheck(L_27);
		Symbol_t3348236047 * L_31 = SymbolLoader_LookupNextSym_m513919061(L_27, L_28, L_30, (((int64_t)((int64_t)((int32_t)256)))), /*hidden argument*/NULL);
		V_2 = ((PropertySymbol_t1241991770 *)IsInstClass((RuntimeObject*)L_31, PropertySymbol_t1241991770_il2cpp_TypeInfo_var));
	}

IL_00aa:
	{
		PropertySymbol_t1241991770 * L_32 = V_2;
		if (L_32)
		{
			goto IL_0075;
		}
	}
	{
		PropertySymbol_t1241991770 * L_33 = V_6;
		V_2 = L_33;
		bool L_34 = V_1;
		if (!L_34)
		{
			goto IL_00b5;
		}
	}
	{
		V_2 = (PropertySymbol_t1241991770 *)NULL;
	}

IL_00b5:
	{
		PropertySymbol_t1241991770 * L_35 = V_2;
		if (L_35)
		{
			goto IL_0118;
		}
	}
	{
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_00f4;
		}
	}
	{
		CSemanticChecker_t1535940568 * L_37 = __this->get__semanticChecker_7();
		NullCheck(L_37);
		SymbolLoader_t2983914338 * L_38 = CSemanticChecker_get_SymbolLoader_m2577500808(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		SymFactory_t300688847 * L_39 = SymbolLoader_GetGlobalSymbolFactory_m1604297671(L_38, /*hidden argument*/NULL);
		Name_t658191338 * L_40 = V_0;
		AggregateSymbol_t3146081271 * L_41 = ___aggregate1;
		PropertyInfo_t * L_42 = ___property0;
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_42);
		Name_t658191338 * L_44 = SymbolTable_GetName_m1066594422(__this, L_43, /*hidden argument*/NULL);
		NullCheck(L_39);
		IndexerSymbol_t2017513160 * L_45 = SymFactory_CreateIndexer_m759759791(L_39, L_40, L_41, L_44, /*hidden argument*/NULL);
		V_2 = L_45;
		PropertySymbol_t1241991770 * L_46 = V_2;
		PropertyInfo_t * L_47 = ___property0;
		NullCheck(L_47);
		ParameterInfoU5BU5D_t390618515* L_48 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_47);
		TypeArray_t2467755373 * L_49 = SymbolTable_CreateParameterArray_m634093492(__this, (MemberInfo_t *)NULL, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		MethodOrPropertySymbol_set_Params_m3680210325(L_46, L_49, /*hidden argument*/NULL);
		goto IL_0118;
	}

IL_00f4:
	{
		SymFactory_t300688847 * L_50 = __this->get__symFactory_3();
		PropertyInfo_t * L_51 = ___property0;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_51);
		Name_t658191338 * L_53 = SymbolTable_GetName_m1066594422(__this, L_52, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_54 = ___aggregate1;
		NullCheck(L_50);
		PropertySymbol_t1241991770 * L_55 = SymFactory_CreateProperty_m2945403817(L_50, L_53, L_54, /*hidden argument*/NULL);
		V_2 = L_55;
		PropertySymbol_t1241991770 * L_56 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		TypeArray_t2467755373 * L_57 = BSYMMGR_EmptyTypeArray_m2278114118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_56);
		MethodOrPropertySymbol_set_Params_m3680210325(L_56, L_57, /*hidden argument*/NULL);
	}

IL_0118:
	{
		PropertySymbol_t1241991770 * L_58 = V_2;
		PropertyInfo_t * L_59 = ___property0;
		NullCheck(L_58);
		PropertySymbol_set_AssociatedPropertyInfo_m380991233(L_58, L_59, /*hidden argument*/NULL);
		PropertySymbol_t1241991770 * L_60 = V_2;
		PropertyInfo_t * L_61 = ___property0;
		NullCheck(L_61);
		MethodInfo_t * L_62 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_61, (bool)1);
		bool L_63 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_62, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		G_B24_0 = L_60;
		if (L_63)
		{
			G_B25_0 = L_60;
			goto IL_013d;
		}
	}
	{
		PropertyInfo_t * L_64 = ___property0;
		NullCheck(L_64);
		MethodInfo_t * L_65 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(26 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_64, (bool)1);
		NullCheck(L_65);
		bool L_66 = MethodBase_get_IsStatic_m2399864271(L_65, /*hidden argument*/NULL);
		G_B26_0 = L_66;
		G_B26_1 = G_B24_0;
		goto IL_0149;
	}

IL_013d:
	{
		PropertyInfo_t * L_67 = ___property0;
		NullCheck(L_67);
		MethodInfo_t * L_68 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_67, (bool)1);
		NullCheck(L_68);
		bool L_69 = MethodBase_get_IsStatic_m2399864271(L_68, /*hidden argument*/NULL);
		G_B26_0 = L_69;
		G_B26_1 = G_B25_0;
	}

IL_0149:
	{
		NullCheck(G_B26_1);
		((MethodOrPropertySymbol_t2915275678 *)G_B26_1)->set_isStatic_9(G_B26_0);
		PropertySymbol_t1241991770 * L_70 = V_2;
		PropertyInfo_t * L_71 = ___property0;
		NullCheck(L_71);
		ParameterInfoU5BU5D_t390618515* L_72 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_71);
		bool L_73 = SymbolTable_DoesMethodHaveParameterArray_m3086024223(__this, L_72, /*hidden argument*/NULL);
		NullCheck(L_70);
		((MethodOrPropertySymbol_t2915275678 *)L_70)->set_isParamArray_12(L_73);
		PropertySymbol_t1241991770 * L_74 = V_2;
		NullCheck(L_74);
		((MethodOrPropertySymbol_t2915275678 *)L_74)->set_swtSlot_21((SymWithType_t1275985997 *)NULL);
		PropertySymbol_t1241991770 * L_75 = V_2;
		PropertyInfo_t * L_76 = ___property0;
		NullCheck(L_76);
		Type_t * L_77 = VirtFuncInvoker0< Type_t * >::Invoke(21 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_76);
		CType_t1813387470 * L_78 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_77, /*hidden argument*/NULL);
		NullCheck(L_75);
		((MethodOrPropertySymbol_t2915275678 *)L_75)->set_RetType_23(L_78);
		PropertySymbol_t1241991770 * L_79 = V_2;
		bool L_80 = V_1;
		NullCheck(L_79);
		((MethodOrPropertySymbol_t2915275678 *)L_79)->set_isOperator_11(L_80);
		PropertyInfo_t * L_81 = ___property0;
		NullCheck(L_81);
		MethodInfo_t * L_82 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_81);
		bool L_83 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_82, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_83)
		{
			goto IL_019c;
		}
	}
	{
		PropertyInfo_t * L_84 = ___property0;
		NullCheck(L_84);
		MethodInfo_t * L_85 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_84);
		bool L_86 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_85, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_01e7;
		}
	}

IL_019c:
	{
		PropertyInfo_t * L_87 = ___property0;
		NullCheck(L_87);
		MethodInfo_t * L_88 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_87);
		MethodInfo_t * L_89 = L_88;
		G_B29_0 = L_89;
		if (L_89)
		{
			G_B30_0 = L_89;
			goto IL_01ac;
		}
	}
	{
		PropertyInfo_t * L_90 = ___property0;
		NullCheck(L_90);
		MethodInfo_t * L_91 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_90);
		G_B30_0 = L_91;
	}

IL_01ac:
	{
		V_7 = G_B30_0;
		PropertySymbol_t1241991770 * L_92 = V_2;
		MethodInfo_t * L_93 = V_7;
		NullCheck(L_93);
		bool L_94 = MethodBase_get_IsVirtual_m2008546636(L_93, /*hidden argument*/NULL);
		G_B31_0 = L_92;
		if (!L_94)
		{
			G_B33_0 = L_92;
			goto IL_01d1;
		}
	}
	{
		MethodInfo_t * L_95 = V_7;
		NullCheck(L_95);
		bool L_96 = MethodBase_get_IsHideBySig_m1251605706(L_95, /*hidden argument*/NULL);
		G_B32_0 = G_B31_0;
		if (!L_96)
		{
			G_B33_0 = G_B31_0;
			goto IL_01d1;
		}
	}
	{
		MethodInfo_t * L_97 = V_7;
		MethodInfo_t * L_98 = RuntimeReflectionExtensions_GetRuntimeBaseDefinition_m3606280828(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
		MethodInfo_t * L_99 = V_7;
		bool L_100 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_98, L_99, /*hidden argument*/NULL);
		G_B34_0 = ((int32_t)(L_100));
		G_B34_1 = G_B32_0;
		goto IL_01d2;
	}

IL_01d1:
	{
		G_B34_0 = 0;
		G_B34_1 = G_B33_0;
	}

IL_01d2:
	{
		NullCheck(G_B34_1);
		((MethodOrPropertySymbol_t2915275678 *)G_B34_1)->set_isOverride_10((bool)G_B34_0);
		PropertySymbol_t1241991770 * L_101 = V_2;
		MethodInfo_t * L_102 = V_7;
		NullCheck(L_102);
		bool L_103 = MethodBase_get_IsHideBySig_m1251605706(L_102, /*hidden argument*/NULL);
		NullCheck(L_101);
		((MethodOrPropertySymbol_t2915275678 *)L_101)->set_isHideByName_13((bool)((((int32_t)L_103) == ((int32_t)0))? 1 : 0));
	}

IL_01e7:
	{
		PropertySymbol_t1241991770 * L_104 = V_2;
		PropertyInfo_t * L_105 = ___property0;
		NullCheck(L_105);
		ParameterInfoU5BU5D_t390618515* L_106 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_105);
		SymbolTable_SetParameterDataForMethProp_m2192450889(__this, L_104, L_106, /*hidden argument*/NULL);
		PropertyInfo_t * L_107 = ___property0;
		NullCheck(L_107);
		MethodInfo_t * L_108 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_GetMethod() */, L_107);
		V_3 = L_108;
		PropertyInfo_t * L_109 = ___property0;
		NullCheck(L_109);
		MethodInfo_t * L_110 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::get_SetMethod() */, L_109);
		V_4 = L_110;
		V_5 = 1;
		MethodInfo_t * L_111 = V_3;
		bool L_112 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_111, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_112)
		{
			goto IL_0271;
		}
	}
	{
		PropertySymbol_t1241991770 * L_113 = V_2;
		MethodInfo_t * L_114 = V_3;
		AggregateSymbol_t3146081271 * L_115 = ___aggregate1;
		MethodSymbol_t394006151 * L_116 = SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_114, L_115, 3, /*hidden argument*/NULL);
		NullCheck(L_113);
		PropertySymbol_set_GetterMethod_m212908264(L_113, L_116, /*hidden argument*/NULL);
		bool L_117 = V_1;
		if (L_117)
		{
			goto IL_0233;
		}
	}
	{
		PropertySymbol_t1241991770 * L_118 = V_2;
		NullCheck(L_118);
		MethodSymbol_t394006151 * L_119 = PropertySymbol_get_GetterMethod_m68567719(L_118, /*hidden argument*/NULL);
		NullCheck(L_119);
		TypeArray_t2467755373 * L_120 = MethodOrPropertySymbol_get_Params_m804279157(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		int32_t L_121 = TypeArray_get_Count_m4264721965(L_120, /*hidden argument*/NULL);
		if (L_121)
		{
			goto IL_0241;
		}
	}

IL_0233:
	{
		PropertySymbol_t1241991770 * L_122 = V_2;
		NullCheck(L_122);
		MethodSymbol_t394006151 * L_123 = PropertySymbol_get_GetterMethod_m68567719(L_122, /*hidden argument*/NULL);
		PropertySymbol_t1241991770 * L_124 = V_2;
		NullCheck(L_123);
		MethodSymbol_SetProperty_m3000721926(L_123, L_124, /*hidden argument*/NULL);
		goto IL_0255;
	}

IL_0241:
	{
		PropertySymbol_t1241991770 * L_125 = V_2;
		NullCheck(L_125);
		PropertySymbol_set_Bogus_m3386905033(L_125, (bool)1, /*hidden argument*/NULL);
		PropertySymbol_t1241991770 * L_126 = V_2;
		NullCheck(L_126);
		MethodSymbol_t394006151 * L_127 = PropertySymbol_get_GetterMethod_m68567719(L_126, /*hidden argument*/NULL);
		NullCheck(L_127);
		MethodSymbol_SetMethKind_m789659642(L_127, ((int32_t)20), /*hidden argument*/NULL);
	}

IL_0255:
	{
		PropertySymbol_t1241991770 * L_128 = V_2;
		NullCheck(L_128);
		MethodSymbol_t394006151 * L_129 = PropertySymbol_get_GetterMethod_m68567719(L_128, /*hidden argument*/NULL);
		NullCheck(L_129);
		int32_t L_130 = Symbol_GetAccess_m2843445626(L_129, /*hidden argument*/NULL);
		int32_t L_131 = V_5;
		if ((((int32_t)L_130) <= ((int32_t)L_131)))
		{
			goto IL_0271;
		}
	}
	{
		PropertySymbol_t1241991770 * L_132 = V_2;
		NullCheck(L_132);
		MethodSymbol_t394006151 * L_133 = PropertySymbol_get_GetterMethod_m68567719(L_132, /*hidden argument*/NULL);
		NullCheck(L_133);
		int32_t L_134 = Symbol_GetAccess_m2843445626(L_133, /*hidden argument*/NULL);
		V_5 = L_134;
	}

IL_0271:
	{
		MethodInfo_t * L_135 = V_4;
		bool L_136 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_135, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_02df;
		}
	}
	{
		PropertySymbol_t1241991770 * L_137 = V_2;
		MethodInfo_t * L_138 = V_4;
		AggregateSymbol_t3146081271 * L_139 = ___aggregate1;
		MethodSymbol_t394006151 * L_140 = SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_138, L_139, 3, /*hidden argument*/NULL);
		NullCheck(L_137);
		PropertySymbol_set_SetterMethod_m3806594370(L_137, L_140, /*hidden argument*/NULL);
		bool L_141 = V_1;
		if (L_141)
		{
			goto IL_02a1;
		}
	}
	{
		PropertySymbol_t1241991770 * L_142 = V_2;
		NullCheck(L_142);
		MethodSymbol_t394006151 * L_143 = PropertySymbol_get_SetterMethod_m68178699(L_142, /*hidden argument*/NULL);
		NullCheck(L_143);
		TypeArray_t2467755373 * L_144 = MethodOrPropertySymbol_get_Params_m804279157(L_143, /*hidden argument*/NULL);
		NullCheck(L_144);
		int32_t L_145 = TypeArray_get_Count_m4264721965(L_144, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_145) == ((uint32_t)1))))
		{
			goto IL_02af;
		}
	}

IL_02a1:
	{
		PropertySymbol_t1241991770 * L_146 = V_2;
		NullCheck(L_146);
		MethodSymbol_t394006151 * L_147 = PropertySymbol_get_SetterMethod_m68178699(L_146, /*hidden argument*/NULL);
		PropertySymbol_t1241991770 * L_148 = V_2;
		NullCheck(L_147);
		MethodSymbol_SetProperty_m3000721926(L_147, L_148, /*hidden argument*/NULL);
		goto IL_02c3;
	}

IL_02af:
	{
		PropertySymbol_t1241991770 * L_149 = V_2;
		NullCheck(L_149);
		PropertySymbol_set_Bogus_m3386905033(L_149, (bool)1, /*hidden argument*/NULL);
		PropertySymbol_t1241991770 * L_150 = V_2;
		NullCheck(L_150);
		MethodSymbol_t394006151 * L_151 = PropertySymbol_get_SetterMethod_m68178699(L_150, /*hidden argument*/NULL);
		NullCheck(L_151);
		MethodSymbol_SetMethKind_m789659642(L_151, ((int32_t)20), /*hidden argument*/NULL);
	}

IL_02c3:
	{
		PropertySymbol_t1241991770 * L_152 = V_2;
		NullCheck(L_152);
		MethodSymbol_t394006151 * L_153 = PropertySymbol_get_SetterMethod_m68178699(L_152, /*hidden argument*/NULL);
		NullCheck(L_153);
		int32_t L_154 = Symbol_GetAccess_m2843445626(L_153, /*hidden argument*/NULL);
		int32_t L_155 = V_5;
		if ((((int32_t)L_154) <= ((int32_t)L_155)))
		{
			goto IL_02df;
		}
	}
	{
		PropertySymbol_t1241991770 * L_156 = V_2;
		NullCheck(L_156);
		MethodSymbol_t394006151 * L_157 = PropertySymbol_get_SetterMethod_m68178699(L_156, /*hidden argument*/NULL);
		NullCheck(L_157);
		int32_t L_158 = Symbol_GetAccess_m2843445626(L_157, /*hidden argument*/NULL);
		V_5 = L_158;
	}

IL_02df:
	{
		PropertySymbol_t1241991770 * L_159 = V_2;
		int32_t L_160 = V_5;
		NullCheck(L_159);
		Symbol_SetAccess_m3955101489(L_159, L_160, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddPredefinedMethodToSymbolTable(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Syntax.Name)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddPredefinedMethodToSymbolTable_m767599493 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___type0, Name_t658191338 * ___methodName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddPredefinedMethodToSymbolTable_m767599493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass52_0_t2872798173 * V_0 = NULL;
	ConstructorInfoU5BU5D_t881249896* V_1 = NULL;
	int32_t V_2 = 0;
	ConstructorInfo_t5769829 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	MethodInfo_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	AggregateSymbol_t3146081271 * G_B9_0 = NULL;
	MethodInfo_t * G_B9_1 = NULL;
	SymbolTable_t2007508464 * G_B9_2 = NULL;
	AggregateSymbol_t3146081271 * G_B8_0 = NULL;
	MethodInfo_t * G_B8_1 = NULL;
	SymbolTable_t2007508464 * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	AggregateSymbol_t3146081271 * G_B10_1 = NULL;
	MethodInfo_t * G_B10_2 = NULL;
	SymbolTable_t2007508464 * G_B10_3 = NULL;
	{
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_0 = (U3CU3Ec__DisplayClass52_0_t2872798173 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass52_0_t2872798173_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass52_0__ctor_m1025141957(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_1 = V_0;
		Name_t658191338 * L_2 = ___methodName1;
		NullCheck(L_1);
		L_1->set_methodName_0(L_2);
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_3 = V_0;
		AggregateSymbol_t3146081271 * L_4 = ___type0;
		NullCheck(L_4);
		AggregateType_t567267003 * L_5 = AggregateSymbol_getThisType_m4290204095(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Type_t * L_6 = CType_get_AssociatedSystemType_m1536780166(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_t_1(L_6);
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_7 = V_0;
		NullCheck(L_7);
		Name_t658191338 * L_8 = L_7->get_methodName_0();
		IL2CPP_RUNTIME_CLASS_INIT(NameManager_t1767112997_il2cpp_TypeInfo_var);
		Name_t658191338 * L_9 = NameManager_GetPredefinedName_m2121682198(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Name_t658191338 *)L_8) == ((RuntimeObject*)(Name_t658191338 *)L_9))))
		{
			goto IL_0055;
		}
	}
	{
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_10 = V_0;
		NullCheck(L_10);
		Type_t * L_11 = L_10->get_t_1();
		NullCheck(L_11);
		ConstructorInfoU5BU5D_t881249896* L_12 = Type_GetConstructors_m1172352582(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		V_2 = 0;
		goto IL_004e;
	}

IL_003c:
	{
		ConstructorInfoU5BU5D_t881249896* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ConstructorInfo_t5769829 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		ConstructorInfo_t5769829 * L_17 = V_3;
		AggregateSymbol_t3146081271 * L_18 = ___type0;
		SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_17, L_18, 1, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_20 = V_2;
		ConstructorInfoU5BU5D_t881249896* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}

IL_0055:
	{
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = L_22->get_t_1();
		RuntimeObject* L_24 = RuntimeReflectionExtensions_GetRuntimeMethods_m2137572665(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass52_0_t2872798173 * L_25 = V_0;
		intptr_t L_26 = (intptr_t)U3CU3Ec__DisplayClass52_0_U3CAddPredefinedMethodToSymbolTableU3Eb__0_m364477531_RuntimeMethod_var;
		Func_2_t3487522507 * L_27 = (Func_2_t3487522507 *)il2cpp_codegen_object_new(Func_2_t3487522507_il2cpp_TypeInfo_var);
		Func_2__ctor_m1610613808(L_27, L_25, (intptr_t)L_26, /*hidden argument*/Func_2__ctor_m1610613808_RuntimeMethod_var);
		RuntimeObject* L_28 = Enumerable_Where_TisMethodInfo_t_m1737046122(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/Enumerable_Where_TisMethodInfo_t_m1737046122_RuntimeMethod_var);
		NullCheck(L_28);
		RuntimeObject* L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_t857479137_il2cpp_TypeInfo_var, L_28);
		V_4 = L_29;
	}

IL_0078:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_007a:
		{
			RuntimeObject* L_30 = V_4;
			NullCheck(L_30);
			MethodInfo_t * L_31 = InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t2310196716_il2cpp_TypeInfo_var, L_30);
			V_5 = L_31;
			MethodInfo_t * L_32 = V_5;
			AggregateSymbol_t3146081271 * L_33 = ___type0;
			MethodInfo_t * L_34 = V_5;
			NullCheck(L_34);
			String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			bool L_36 = String_op_Equality_m920492651(NULL /*static, unused*/, L_35, _stringLiteral2401610308, /*hidden argument*/NULL);
			G_B8_0 = L_33;
			G_B8_1 = L_32;
			G_B8_2 = __this;
			if (L_36)
			{
				G_B9_0 = L_33;
				G_B9_1 = L_32;
				G_B9_2 = __this;
				goto IL_009e;
			}
		}

IL_009a:
		{
			G_B10_0 = ((int32_t)20);
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			G_B10_3 = G_B8_2;
			goto IL_009f;
		}

IL_009e:
		{
			G_B10_0 = 8;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
			G_B10_3 = G_B9_2;
		}

IL_009f:
		{
			NullCheck(G_B10_3);
			SymbolTable_AddMethodToSymbolTable_m1421278763(G_B10_3, G_B10_2, G_B10_1, G_B10_0, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			RuntimeObject* L_37 = V_4;
			NullCheck(L_37);
			bool L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_37);
			if (L_38)
			{
				goto IL_007a;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xBC, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_39 = V_4;
			if (!L_39)
			{
				goto IL_00bb;
			}
		}

IL_00b4:
		{
			RuntimeObject* L_40 = V_4;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
		}

IL_00bb:
		{
			IL2CPP_END_FINALLY(176)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bc:
	{
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::AddMethodToSymbolTable(System.Reflection.MethodBase,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,Microsoft.CSharp.RuntimeBinder.Semantics.MethodKindEnum)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymbolTable_AddMethodToSymbolTable_m1421278763 (SymbolTable_t2007508464 * __this, MethodBase_t * ___member0, AggregateSymbol_t3146081271 * ___callingAggregate1, int32_t ___kind2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddMethodToSymbolTable_m1421278763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	MethodSymbol_t394006151 * V_1 = NULL;
	ParameterInfoU5BU5D_t390618515* V_2 = NULL;
	int32_t V_3 = 0;
	MethodSymbol_t394006151 * G_B23_0 = NULL;
	MethodSymbol_t394006151 * G_B21_0 = NULL;
	MethodSymbol_t394006151 * G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	MethodSymbol_t394006151 * G_B24_1 = NULL;
	{
		MethodBase_t * L_0 = ___member0;
		V_0 = ((MethodInfo_t *)IsInstClass((RuntimeObject*)L_0, MethodInfo_t_il2cpp_TypeInfo_var));
		int32_t L_1 = ___kind2;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0027;
		}
	}
	{
		MethodInfo_t * L_2 = V_0;
		bool L_3 = MethodInfo_op_Equality_m1241144064(NULL /*static, unused*/, L_2, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		MethodInfo_t * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = MethodBase_get_IsStatic_m2399864271(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		MethodInfo_t * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MethodBase_get_IsSpecialName_m1671317191(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}

IL_0025:
	{
		return (MethodSymbol_t394006151 *)NULL;
	}

IL_0027:
	{
		MethodBase_t * L_8 = ___member0;
		AggregateSymbol_t3146081271 * L_9 = ___callingAggregate1;
		MethodSymbol_t394006151 * L_10 = SymbolTable_FindMatchingMethod_m1410031394(__this, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		MethodSymbol_t394006151 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0035;
		}
	}
	{
		MethodSymbol_t394006151 * L_12 = V_1;
		return L_12;
	}

IL_0035:
	{
		MethodBase_t * L_13 = ___member0;
		NullCheck(L_13);
		ParameterInfoU5BU5D_t390618515* L_14 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_13);
		V_2 = L_14;
		SymFactory_t300688847 * L_15 = __this->get__symFactory_3();
		MethodBase_t * L_16 = ___member0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		Name_t658191338 * L_18 = SymbolTable_GetName_m1066594422(__this, L_17, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_19 = ___callingAggregate1;
		NullCheck(L_15);
		MethodSymbol_t394006151 * L_20 = SymFactory_CreateMethod_m2166430499(L_15, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		MethodSymbol_t394006151 * L_21 = V_1;
		MethodBase_t * L_22 = ___member0;
		NullCheck(L_21);
		L_21->set_AssociatedMemberInfo_34(L_22);
		MethodSymbol_t394006151 * L_23 = V_1;
		int32_t L_24 = ___kind2;
		NullCheck(L_23);
		MethodSymbol_SetMethKind_m789659642(L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = ___kind2;
		if ((((int32_t)L_25) == ((int32_t)5)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___kind2;
		if ((!(((uint32_t)L_26) == ((uint32_t)6))))
		{
			goto IL_0084;
		}
	}

IL_006b:
	{
		AggregateSymbol_t3146081271 * L_27 = ___callingAggregate1;
		NullCheck(L_27);
		AggregateSymbol_SetHasConversion_m1916043271(L_27, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_28 = V_1;
		AggregateSymbol_t3146081271 * L_29 = ___callingAggregate1;
		NullCheck(L_29);
		MethodSymbol_t394006151 * L_30 = AggregateSymbol_GetFirstUDConversion_m3315532410(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		MethodSymbol_SetConvNext_m293642509(L_28, L_30, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_31 = ___callingAggregate1;
		MethodSymbol_t394006151 * L_32 = V_1;
		NullCheck(L_31);
		AggregateSymbol_SetFirstUDConversion_m2058433964(L_31, L_32, /*hidden argument*/NULL);
	}

IL_0084:
	{
		MethodBase_t * L_33 = ___member0;
		NullCheck(L_33);
		bool L_34 = MethodBase_get_IsPublic_m2180846589(L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0090;
		}
	}
	{
		V_3 = 5;
		goto IL_00b6;
	}

IL_0090:
	{
		MethodBase_t * L_35 = ___member0;
		NullCheck(L_35);
		bool L_36 = MethodBase_get_IsPrivate_m1924826529(L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_009c;
		}
	}
	{
		V_3 = 1;
		goto IL_00b6;
	}

IL_009c:
	{
		MethodBase_t * L_37 = ___member0;
		NullCheck(L_37);
		bool L_38 = MethodBase_get_IsFamily_m3588449059(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00a8;
		}
	}
	{
		V_3 = 3;
		goto IL_00b6;
	}

IL_00a8:
	{
		MethodBase_t * L_39 = ___member0;
		NullCheck(L_39);
		bool L_40 = MethodBase_get_IsFamilyOrAssembly_m2812831457(L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00b4;
		}
	}
	{
		V_3 = 4;
		goto IL_00b6;
	}

IL_00b4:
	{
		V_3 = 2;
	}

IL_00b6:
	{
		MethodSymbol_t394006151 * L_41 = V_1;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		Symbol_SetAccess_m3955101489(L_41, L_42, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_43 = V_1;
		MethodBase_t * L_44 = ___member0;
		NullCheck(L_44);
		bool L_45 = MethodBase_get_IsVirtual_m2008546636(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		L_43->set_isVirtual_31(L_45);
		MethodSymbol_t394006151 * L_46 = V_1;
		MethodBase_t * L_47 = ___member0;
		NullCheck(L_47);
		bool L_48 = MethodBase_get_IsAbstract_m428833029(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		L_46->set_isAbstract_32(L_48);
		MethodSymbol_t394006151 * L_49 = V_1;
		MethodBase_t * L_50 = ___member0;
		NullCheck(L_50);
		bool L_51 = MethodBase_get_IsStatic_m2399864271(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		((MethodOrPropertySymbol_t2915275678 *)L_49)->set_isStatic_9(L_51);
		MethodInfo_t * L_52 = V_0;
		bool L_53 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_52, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_015b;
		}
	}
	{
		MethodSymbol_t394006151 * L_54 = V_1;
		MethodInfo_t * L_55 = V_0;
		MethodSymbol_t394006151 * L_56 = V_1;
		TypeArray_t2467755373 * L_57 = SymbolTable_GetMethodTypeParameters_m798564244(__this, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		L_54->set_typeVars_35(L_57);
		MethodSymbol_t394006151 * L_58 = V_1;
		MethodInfo_t * L_59 = V_0;
		NullCheck(L_59);
		bool L_60 = MethodBase_get_IsVirtual_m2008546636(L_59, /*hidden argument*/NULL);
		G_B21_0 = L_58;
		if (!L_60)
		{
			G_B23_0 = L_58;
			goto IL_0117;
		}
	}
	{
		MethodInfo_t * L_61 = V_0;
		NullCheck(L_61);
		bool L_62 = MethodBase_get_IsHideBySig_m1251605706(L_61, /*hidden argument*/NULL);
		G_B22_0 = G_B21_0;
		if (!L_62)
		{
			G_B23_0 = G_B21_0;
			goto IL_0117;
		}
	}
	{
		MethodInfo_t * L_63 = V_0;
		MethodInfo_t * L_64 = RuntimeReflectionExtensions_GetRuntimeBaseDefinition_m3606280828(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		MethodInfo_t * L_65 = V_0;
		bool L_66 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		G_B24_0 = ((int32_t)(L_66));
		G_B24_1 = G_B22_0;
		goto IL_0118;
	}

IL_0117:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0118:
	{
		NullCheck(G_B24_1);
		((MethodOrPropertySymbol_t2915275678 *)G_B24_1)->set_isOverride_10((bool)G_B24_0);
		MethodSymbol_t394006151 * L_67 = V_1;
		MethodInfo_t * L_68 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SymbolTable_t2007508464_il2cpp_TypeInfo_var);
		bool L_69 = SymbolTable_IsOperator_m3403205358(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		((MethodOrPropertySymbol_t2915275678 *)L_67)->set_isOperator_11(L_69);
		MethodSymbol_t394006151 * L_70 = V_1;
		MethodInfo_t * L_71 = V_0;
		SymWithType_t1275985997 * L_72 = SymbolTable_GetSlotForOverride_m1988677043(__this, L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		((MethodOrPropertySymbol_t2915275678 *)L_70)->set_swtSlot_21(L_72);
		MethodSymbol_t394006151 * L_73 = V_1;
		MethodInfo_t * L_74 = V_0;
		NullCheck(L_74);
		int32_t L_75 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_74);
		NullCheck(L_73);
		L_73->set_isVarargs_33((bool)((((int32_t)((int32_t)((int32_t)L_75&(int32_t)2))) == ((int32_t)2))? 1 : 0));
		MethodSymbol_t394006151 * L_76 = V_1;
		MethodInfo_t * L_77 = V_0;
		NullCheck(L_77);
		Type_t * L_78 = VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_77);
		CType_t1813387470 * L_79 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_78, /*hidden argument*/NULL);
		NullCheck(L_76);
		((MethodOrPropertySymbol_t2915275678 *)L_76)->set_RetType_23(L_79);
		goto IL_0193;
	}

IL_015b:
	{
		MethodSymbol_t394006151 * L_80 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		TypeArray_t2467755373 * L_81 = BSYMMGR_EmptyTypeArray_m2278114118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_80);
		L_80->set_typeVars_35(L_81);
		MethodSymbol_t394006151 * L_82 = V_1;
		NullCheck(L_82);
		((MethodOrPropertySymbol_t2915275678 *)L_82)->set_isOverride_10((bool)0);
		MethodSymbol_t394006151 * L_83 = V_1;
		NullCheck(L_83);
		((MethodOrPropertySymbol_t2915275678 *)L_83)->set_isOperator_11((bool)0);
		MethodSymbol_t394006151 * L_84 = V_1;
		NullCheck(L_84);
		((MethodOrPropertySymbol_t2915275678 *)L_84)->set_swtSlot_21((SymWithType_t1275985997 *)NULL);
		MethodSymbol_t394006151 * L_85 = V_1;
		NullCheck(L_85);
		L_85->set_isVarargs_33((bool)0);
		MethodSymbol_t394006151 * L_86 = V_1;
		TypeManager_t4140799422 * L_87 = __this->get__typeManager_5();
		NullCheck(L_87);
		VoidType_t3686515033 * L_88 = TypeManager_GetVoid_m3244573903(L_87, /*hidden argument*/NULL);
		NullCheck(L_86);
		((MethodOrPropertySymbol_t2915275678 *)L_86)->set_RetType_23(L_88);
	}

IL_0193:
	{
		MethodSymbol_t394006151 * L_89 = V_1;
		ParameterInfoU5BU5D_t390618515* L_90 = V_2;
		uint32_t L_91 = SymbolTable_GetCountOfModOpts_m900901776(__this, L_90, /*hidden argument*/NULL);
		NullCheck(L_89);
		((MethodOrPropertySymbol_t2915275678 *)L_89)->set_modOptCount_8(L_91);
		MethodSymbol_t394006151 * L_92 = V_1;
		ParameterInfoU5BU5D_t390618515* L_93 = V_2;
		bool L_94 = SymbolTable_DoesMethodHaveParameterArray_m3086024223(__this, L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		((MethodOrPropertySymbol_t2915275678 *)L_92)->set_isParamArray_12(L_94);
		MethodSymbol_t394006151 * L_95 = V_1;
		NullCheck(L_95);
		((MethodOrPropertySymbol_t2915275678 *)L_95)->set_isHideByName_13((bool)0);
		MethodSymbol_t394006151 * L_96 = V_1;
		NullCheck(L_96);
		((MethodOrPropertySymbol_t2915275678 *)L_96)->set_errExpImpl_22((ErrorType_t685300011 *)NULL);
		MethodSymbol_t394006151 * L_97 = V_1;
		MethodSymbol_t394006151 * L_98 = V_1;
		NullCheck(L_98);
		MemberInfo_t * L_99 = L_98->get_AssociatedMemberInfo_34();
		ParameterInfoU5BU5D_t390618515* L_100 = V_2;
		TypeArray_t2467755373 * L_101 = SymbolTable_CreateParameterArray_m634093492(__this, L_99, L_100, /*hidden argument*/NULL);
		NullCheck(L_97);
		MethodOrPropertySymbol_set_Params_m3680210325(L_97, L_101, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_102 = V_1;
		ParameterInfoU5BU5D_t390618515* L_103 = V_2;
		SymbolTable_SetParameterDataForMethProp_m2192450889(__this, L_102, L_103, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_104 = V_1;
		return L_104;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::SetParameterDataForMethProp(Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol,System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_SetParameterDataForMethProp_m2192450889 (SymbolTable_t2007508464 * __this, MethodOrPropertySymbol_t2915275678 * ___methProp0, ParameterInfoU5BU5D_t390618515* ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_SetParameterDataForMethProp_m2192450889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ParameterInfoU5BU5D_t390618515* L_0 = ___parameters1;
		NullCheck(L_0);
		if (!(((RuntimeArray *)L_0)->max_length))
		{
			goto IL_0054;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_1 = ___parameters1;
		ParameterInfoU5BU5D_t390618515* L_2 = ___parameters1;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)1));
		ParameterInfo_t1861056598 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (ParamArrayAttribute_t3664765590_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Attribute_t861562559 * L_7 = CustomAttributeExtensions_GetCustomAttribute_m3870800302(NULL /*static, unused*/, L_4, L_6, (bool)0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		MethodOrPropertySymbol_t2915275678 * L_8 = ___methProp0;
		NullCheck(L_8);
		L_8->set_isParamArray_12((bool)1);
	}

IL_0024:
	{
		V_0 = 0;
		goto IL_004e;
	}

IL_0028:
	{
		MethodOrPropertySymbol_t2915275678 * L_9 = ___methProp0;
		ParameterInfoU5BU5D_t390618515* L_10 = ___parameters1;
		int32_t L_11 = V_0;
		SymbolTable_SetParameterAttributes_m3726288706(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		MethodOrPropertySymbol_t2915275678 * L_12 = ___methProp0;
		NullCheck(L_12);
		List_1_t2130266080 * L_13 = MethodOrPropertySymbol_get_ParameterNames_m4084152379(L_12, /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t390618515* L_14 = ___parameters1;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ParameterInfo_t1861056598 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_17);
		Name_t658191338 * L_19 = SymbolTable_GetName_m1066594422(__this, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m4155803952(L_13, L_19, /*hidden argument*/List_1_Add_m4155803952_RuntimeMethod_var);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_004e:
	{
		int32_t L_21 = V_0;
		ParameterInfoU5BU5D_t390618515* L_22 = ___parameters1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0028;
		}
	}

IL_0054:
	{
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::SetParameterAttributes(Microsoft.CSharp.RuntimeBinder.Semantics.MethodOrPropertySymbol,System.Reflection.ParameterInfo[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_SetParameterAttributes_m3726288706 (SymbolTable_t2007508464 * __this, MethodOrPropertySymbol_t2915275678 * ___methProp0, ParameterInfoU5BU5D_t390618515* ___parameters1, int32_t ___i2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_SetParameterAttributes_m3726288706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfo_t1861056598 * V_0 = NULL;
	DateTimeConstantAttribute_t375130962 * V_1 = NULL;
	MarshalAsAttribute_t3522571978 * V_2 = NULL;
	ConstVal_t1597617476  V_3;
	memset(&V_3, 0, sizeof(V_3));
	CType_t1813387470 * V_4 = NULL;
	DateTime_t3738529785  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DecimalConstantAttribute_t1976047975 * V_6 = NULL;
	ConstVal_t1597617476  V_7;
	memset(&V_7, 0, sizeof(V_7));
	CType_t1813387470 * V_8 = NULL;
	ConstVal_t1597617476  V_9;
	memset(&V_9, 0, sizeof(V_9));
	CType_t1813387470 * V_10 = NULL;
	RuntimeObject * V_11 = NULL;
	int32_t V_12 = 0;
	{
		ParameterInfoU5BU5D_t390618515* L_0 = ___parameters1;
		int32_t L_1 = ___i2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ParameterInfo_t1861056598 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		ParameterInfo_t1861056598 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, L_4);
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)16))))
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfo_t1861056598 * L_6 = V_0;
		NullCheck(L_6);
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_6);
		NullCheck(L_7);
		bool L_8 = Type_get_IsByRef_m1262524108(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		MethodOrPropertySymbol_t2915275678 * L_9 = ___methProp0;
		int32_t L_10 = ___i2;
		NullCheck(L_9);
		MethodOrPropertySymbol_SetOptionalParameter_m2354215495(L_9, L_10, /*hidden argument*/NULL);
		TypeU5BU5D_t3940880105* L_11 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_12 = L_11;
		RuntimeTypeHandle_t3027515415  L_13 = { reinterpret_cast<intptr_t> (Missing_t508514592_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_14);
		RuntimeTypeHandle_t3027515415  L_15 = { reinterpret_cast<intptr_t> (Missing_t508514592_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		SymbolTable_PopulateSymbolTableWithName_m2474176076(__this, _stringLiteral3493619321, (RuntimeObject*)(RuntimeObject*)L_12, L_16, /*hidden argument*/NULL);
	}

IL_004b:
	{
		ParameterInfo_t1861056598 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, L_17);
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)8192))))
		{
			goto IL_0071;
		}
	}
	{
		ParameterInfo_t1861056598 * L_19 = V_0;
		MarshalAsAttribute_t3522571978 * L_20 = CustomAttributeExtensions_GetCustomAttribute_TisMarshalAsAttribute_t3522571978_m2166632158(NULL /*static, unused*/, L_19, (bool)0, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisMarshalAsAttribute_t3522571978_m2166632158_RuntimeMethod_var);
		V_2 = L_20;
		MarshalAsAttribute_t3522571978 * L_21 = V_2;
		if (!L_21)
		{
			goto IL_0071;
		}
	}
	{
		MethodOrPropertySymbol_t2915275678 * L_22 = ___methProp0;
		int32_t L_23 = ___i2;
		MarshalAsAttribute_t3522571978 * L_24 = V_2;
		NullCheck(L_24);
		int32_t L_25 = MarshalAsAttribute_get_Value_m1222266980(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		MethodOrPropertySymbol_SetMarshalAsParameter_m2750967238(L_22, L_23, L_25, /*hidden argument*/NULL);
	}

IL_0071:
	{
		ParameterInfo_t1861056598 * L_26 = V_0;
		DateTimeConstantAttribute_t375130962 * L_27 = CustomAttributeExtensions_GetCustomAttribute_TisDateTimeConstantAttribute_t375130962_m1416647332(NULL /*static, unused*/, L_26, (bool)0, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisDateTimeConstantAttribute_t375130962_m1416647332_RuntimeMethod_var);
		V_1 = L_27;
		DateTimeConstantAttribute_t375130962 * L_28 = V_1;
		if (!L_28)
		{
			goto IL_00b5;
		}
	}
	{
		DateTimeConstantAttribute_t375130962 * L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject * L_30 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.Runtime.CompilerServices.CustomConstantAttribute::get_Value() */, L_29);
		V_5 = ((*(DateTime_t3738529785 *)((DateTime_t3738529785 *)UnBox(L_30, DateTime_t3738529785_il2cpp_TypeInfo_var))));
		int64_t L_31 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_32 = ConstVal_Get_m937917375(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		CSemanticChecker_t1535940568 * L_33 = __this->get__semanticChecker_7();
		NullCheck(L_33);
		SymbolLoader_t2983914338 * L_34 = CSemanticChecker_get_SymbolLoader_m2577500808(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		AggregateType_t567267003 * L_35 = SymbolLoader_GetPredefindType_m3767020077(L_34, ((int32_t)23), /*hidden argument*/NULL);
		V_4 = L_35;
		MethodOrPropertySymbol_t2915275678 * L_36 = ___methProp0;
		int32_t L_37 = ___i2;
		CType_t1813387470 * L_38 = V_4;
		ConstVal_t1597617476  L_39 = V_3;
		NullCheck(L_36);
		MethodOrPropertySymbol_SetDefaultParameterValue_m4205833015(L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		return;
	}

IL_00b5:
	{
		ParameterInfo_t1861056598 * L_40 = V_0;
		DecimalConstantAttribute_t1976047975 * L_41 = CustomAttributeExtensions_GetCustomAttribute_TisDecimalConstantAttribute_t1976047975_m3679650293(NULL /*static, unused*/, L_40, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisDecimalConstantAttribute_t1976047975_m3679650293_RuntimeMethod_var);
		V_6 = L_41;
		DecimalConstantAttribute_t1976047975 * L_42 = V_6;
		if (!L_42)
		{
			goto IL_00ee;
		}
	}
	{
		DecimalConstantAttribute_t1976047975 * L_43 = V_6;
		NullCheck(L_43);
		Decimal_t2948259380  L_44 = DecimalConstantAttribute_get_Value_m2842993264(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_45 = ConstVal_Get_m3246233736(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_7 = L_45;
		CSemanticChecker_t1535940568 * L_46 = __this->get__semanticChecker_7();
		NullCheck(L_46);
		SymbolLoader_t2983914338 * L_47 = CSemanticChecker_get_SymbolLoader_m2577500808(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		AggregateType_t567267003 * L_48 = SymbolLoader_GetPredefindType_m3767020077(L_47, 6, /*hidden argument*/NULL);
		V_8 = L_48;
		MethodOrPropertySymbol_t2915275678 * L_49 = ___methProp0;
		int32_t L_50 = ___i2;
		CType_t1813387470 * L_51 = V_8;
		ConstVal_t1597617476  L_52 = V_7;
		NullCheck(L_49);
		MethodOrPropertySymbol_SetDefaultParameterValue_m4205833015(L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		return;
	}

IL_00ee:
	{
		ParameterInfo_t1861056598 * L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, L_53);
		if (!((int32_t)((int32_t)L_54&(int32_t)((int32_t)4096))))
		{
			goto IL_03b0;
		}
	}
	{
		ParameterInfo_t1861056598 * L_55 = V_0;
		NullCheck(L_55);
		Type_t * L_56 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_55);
		NullCheck(L_56);
		bool L_57 = Type_get_IsByRef_m1262524108(L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_03b0;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(ConstVal_t1597617476 ));
		CSemanticChecker_t1535940568 * L_58 = __this->get__semanticChecker_7();
		NullCheck(L_58);
		SymbolLoader_t2983914338 * L_59 = CSemanticChecker_get_SymbolLoader_m2577500808(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		AggregateType_t567267003 * L_60 = SymbolLoader_GetPredefindType_m3767020077(L_59, ((int32_t)15), /*hidden argument*/NULL);
		V_10 = L_60;
		ParameterInfo_t1861056598 * L_61 = V_0;
		NullCheck(L_61);
		RuntimeObject * L_62 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_61);
		if (!L_62)
		{
			goto IL_03a5;
		}
	}
	{
		ParameterInfo_t1861056598 * L_63 = V_0;
		NullCheck(L_63);
		RuntimeObject * L_64 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* System.Object System.Reflection.ParameterInfo::get_DefaultValue() */, L_63);
		V_11 = L_64;
		RuntimeObject * L_65 = V_11;
		NullCheck(L_65);
		Type_t * L_66 = Object_GetType_m88164663(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_67 = Type_GetTypeCode_m480753082(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		V_12 = L_67;
		int32_t L_68 = V_12;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)3)))
		{
			case 0:
			{
				goto IL_02ca;
			}
			case 1:
			{
				goto IL_02a4;
			}
			case 2:
			{
				goto IL_02f0;
			}
			case 3:
			{
				goto IL_019a;
			}
			case 4:
			{
				goto IL_01c0;
			}
			case 5:
			{
				goto IL_0317;
			}
			case 6:
			{
				goto IL_01e6;
			}
			case 7:
			{
				goto IL_033b;
			}
			case 8:
			{
				goto IL_020c;
			}
			case 9:
			{
				goto IL_035f;
			}
			case 10:
			{
				goto IL_0232;
			}
			case 11:
			{
				goto IL_0258;
			}
			case 12:
			{
				goto IL_027e;
			}
			case 13:
			{
				goto IL_03a5;
			}
			case 14:
			{
				goto IL_03a5;
			}
			case 15:
			{
				goto IL_0383;
			}
		}
	}
	{
		goto IL_03a5;
	}

IL_019a:
	{
		RuntimeObject * L_69 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_70 = ConstVal_Get_m937524154(NULL /*static, unused*/, ((*(uint8_t*)((uint8_t*)UnBox(L_69, Byte_t1134296376_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_70;
		CSemanticChecker_t1535940568 * L_71 = __this->get__semanticChecker_7();
		NullCheck(L_71);
		SymbolLoader_t2983914338 * L_72 = CSemanticChecker_get_SymbolLoader_m2577500808(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		AggregateType_t567267003 * L_73 = SymbolLoader_GetPredefindType_m3767020077(L_72, 0, /*hidden argument*/NULL);
		V_10 = L_73;
		goto IL_03a5;
	}

IL_01c0:
	{
		RuntimeObject * L_74 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_75 = ConstVal_Get_m937524154(NULL /*static, unused*/, ((*(int16_t*)((int16_t*)UnBox(L_74, Int16_t2552820387_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_75;
		CSemanticChecker_t1535940568 * L_76 = __this->get__semanticChecker_7();
		NullCheck(L_76);
		SymbolLoader_t2983914338 * L_77 = CSemanticChecker_get_SymbolLoader_m2577500808(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		AggregateType_t567267003 * L_78 = SymbolLoader_GetPredefindType_m3767020077(L_77, 1, /*hidden argument*/NULL);
		V_10 = L_78;
		goto IL_03a5;
	}

IL_01e6:
	{
		RuntimeObject * L_79 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_80 = ConstVal_Get_m937524154(NULL /*static, unused*/, ((*(int32_t*)((int32_t*)UnBox(L_79, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_80;
		CSemanticChecker_t1535940568 * L_81 = __this->get__semanticChecker_7();
		NullCheck(L_81);
		SymbolLoader_t2983914338 * L_82 = CSemanticChecker_get_SymbolLoader_m2577500808(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		AggregateType_t567267003 * L_83 = SymbolLoader_GetPredefindType_m3767020077(L_82, 2, /*hidden argument*/NULL);
		V_10 = L_83;
		goto IL_03a5;
	}

IL_020c:
	{
		RuntimeObject * L_84 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_85 = ConstVal_Get_m937917375(NULL /*static, unused*/, ((*(int64_t*)((int64_t*)UnBox(L_84, Int64_t3736567304_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_85;
		CSemanticChecker_t1535940568 * L_86 = __this->get__semanticChecker_7();
		NullCheck(L_86);
		SymbolLoader_t2983914338 * L_87 = CSemanticChecker_get_SymbolLoader_m2577500808(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		AggregateType_t567267003 * L_88 = SymbolLoader_GetPredefindType_m3767020077(L_87, 3, /*hidden argument*/NULL);
		V_10 = L_88;
		goto IL_03a5;
	}

IL_0232:
	{
		RuntimeObject * L_89 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_90 = ConstVal_Get_m1139800877(NULL /*static, unused*/, ((*(float*)((float*)UnBox(L_89, Single_t1397266774_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_90;
		CSemanticChecker_t1535940568 * L_91 = __this->get__semanticChecker_7();
		NullCheck(L_91);
		SymbolLoader_t2983914338 * L_92 = CSemanticChecker_get_SymbolLoader_m2577500808(L_91, /*hidden argument*/NULL);
		NullCheck(L_92);
		AggregateType_t567267003 * L_93 = SymbolLoader_GetPredefindType_m3767020077(L_92, 4, /*hidden argument*/NULL);
		V_10 = L_93;
		goto IL_03a5;
	}

IL_0258:
	{
		RuntimeObject * L_94 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_95 = ConstVal_Get_m2322407324(NULL /*static, unused*/, ((*(double*)((double*)UnBox(L_94, Double_t594665363_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_95;
		CSemanticChecker_t1535940568 * L_96 = __this->get__semanticChecker_7();
		NullCheck(L_96);
		SymbolLoader_t2983914338 * L_97 = CSemanticChecker_get_SymbolLoader_m2577500808(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		AggregateType_t567267003 * L_98 = SymbolLoader_GetPredefindType_m3767020077(L_97, 5, /*hidden argument*/NULL);
		V_10 = L_98;
		goto IL_03a5;
	}

IL_027e:
	{
		RuntimeObject * L_99 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_100 = ConstVal_Get_m3246233736(NULL /*static, unused*/, ((*(Decimal_t2948259380 *)((Decimal_t2948259380 *)UnBox(L_99, Decimal_t2948259380_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_100;
		CSemanticChecker_t1535940568 * L_101 = __this->get__semanticChecker_7();
		NullCheck(L_101);
		SymbolLoader_t2983914338 * L_102 = CSemanticChecker_get_SymbolLoader_m2577500808(L_101, /*hidden argument*/NULL);
		NullCheck(L_102);
		AggregateType_t567267003 * L_103 = SymbolLoader_GetPredefindType_m3767020077(L_102, 6, /*hidden argument*/NULL);
		V_10 = L_103;
		goto IL_03a5;
	}

IL_02a4:
	{
		RuntimeObject * L_104 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_105 = ConstVal_Get_m937524154(NULL /*static, unused*/, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_104, Char_t3634460470_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_105;
		CSemanticChecker_t1535940568 * L_106 = __this->get__semanticChecker_7();
		NullCheck(L_106);
		SymbolLoader_t2983914338 * L_107 = CSemanticChecker_get_SymbolLoader_m2577500808(L_106, /*hidden argument*/NULL);
		NullCheck(L_107);
		AggregateType_t567267003 * L_108 = SymbolLoader_GetPredefindType_m3767020077(L_107, 7, /*hidden argument*/NULL);
		V_10 = L_108;
		goto IL_03a5;
	}

IL_02ca:
	{
		RuntimeObject * L_109 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_110 = ConstVal_Get_m1109629884(NULL /*static, unused*/, ((*(bool*)((bool*)UnBox(L_109, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_110;
		CSemanticChecker_t1535940568 * L_111 = __this->get__semanticChecker_7();
		NullCheck(L_111);
		SymbolLoader_t2983914338 * L_112 = CSemanticChecker_get_SymbolLoader_m2577500808(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		AggregateType_t567267003 * L_113 = SymbolLoader_GetPredefindType_m3767020077(L_112, 8, /*hidden argument*/NULL);
		V_10 = L_113;
		goto IL_03a5;
	}

IL_02f0:
	{
		RuntimeObject * L_114 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_115 = ConstVal_Get_m937524154(NULL /*static, unused*/, ((*(int8_t*)((int8_t*)UnBox(L_114, SByte_t1669577662_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_115;
		CSemanticChecker_t1535940568 * L_116 = __this->get__semanticChecker_7();
		NullCheck(L_116);
		SymbolLoader_t2983914338 * L_117 = CSemanticChecker_get_SymbolLoader_m2577500808(L_116, /*hidden argument*/NULL);
		NullCheck(L_117);
		AggregateType_t567267003 * L_118 = SymbolLoader_GetPredefindType_m3767020077(L_117, ((int32_t)9), /*hidden argument*/NULL);
		V_10 = L_118;
		goto IL_03a5;
	}

IL_0317:
	{
		RuntimeObject * L_119 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_120 = ConstVal_Get_m937524154(NULL /*static, unused*/, ((*(uint16_t*)((uint16_t*)UnBox(L_119, UInt16_t2177724958_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_120;
		CSemanticChecker_t1535940568 * L_121 = __this->get__semanticChecker_7();
		NullCheck(L_121);
		SymbolLoader_t2983914338 * L_122 = CSemanticChecker_get_SymbolLoader_m2577500808(L_121, /*hidden argument*/NULL);
		NullCheck(L_122);
		AggregateType_t567267003 * L_123 = SymbolLoader_GetPredefindType_m3767020077(L_122, ((int32_t)10), /*hidden argument*/NULL);
		V_10 = L_123;
		goto IL_03a5;
	}

IL_033b:
	{
		RuntimeObject * L_124 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_125 = ConstVal_Get_m3180580785(NULL /*static, unused*/, ((*(uint32_t*)((uint32_t*)UnBox(L_124, UInt32_t2560061978_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_125;
		CSemanticChecker_t1535940568 * L_126 = __this->get__semanticChecker_7();
		NullCheck(L_126);
		SymbolLoader_t2983914338 * L_127 = CSemanticChecker_get_SymbolLoader_m2577500808(L_126, /*hidden argument*/NULL);
		NullCheck(L_127);
		AggregateType_t567267003 * L_128 = SymbolLoader_GetPredefindType_m3767020077(L_127, ((int32_t)11), /*hidden argument*/NULL);
		V_10 = L_128;
		goto IL_03a5;
	}

IL_035f:
	{
		RuntimeObject * L_129 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_130 = ConstVal_Get_m48216295(NULL /*static, unused*/, ((*(uint64_t*)((uint64_t*)UnBox(L_129, UInt64_t4134040092_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_9 = L_130;
		CSemanticChecker_t1535940568 * L_131 = __this->get__semanticChecker_7();
		NullCheck(L_131);
		SymbolLoader_t2983914338 * L_132 = CSemanticChecker_get_SymbolLoader_m2577500808(L_131, /*hidden argument*/NULL);
		NullCheck(L_132);
		AggregateType_t567267003 * L_133 = SymbolLoader_GetPredefindType_m3767020077(L_132, ((int32_t)12), /*hidden argument*/NULL);
		V_10 = L_133;
		goto IL_03a5;
	}

IL_0383:
	{
		RuntimeObject * L_134 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(ConstVal_t1597617476_il2cpp_TypeInfo_var);
		ConstVal_t1597617476  L_135 = ConstVal_Get_m971466612(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_134, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_9 = L_135;
		CSemanticChecker_t1535940568 * L_136 = __this->get__semanticChecker_7();
		NullCheck(L_136);
		SymbolLoader_t2983914338 * L_137 = CSemanticChecker_get_SymbolLoader_m2577500808(L_136, /*hidden argument*/NULL);
		NullCheck(L_137);
		AggregateType_t567267003 * L_138 = SymbolLoader_GetPredefindType_m3767020077(L_137, ((int32_t)16), /*hidden argument*/NULL);
		V_10 = L_138;
	}

IL_03a5:
	{
		MethodOrPropertySymbol_t2915275678 * L_139 = ___methProp0;
		int32_t L_140 = ___i2;
		CType_t1813387470 * L_141 = V_10;
		ConstVal_t1597617476  L_142 = V_9;
		NullCheck(L_139);
		MethodOrPropertySymbol_SetDefaultParameterValue_m4205833015(L_139, L_140, L_141, L_142, /*hidden argument*/NULL);
	}

IL_03b0:
	{
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::FindMatchingMethod(System.Reflection.MemberInfo,Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymbolTable_FindMatchingMethod_m1410031394 (SymbolTable_t2007508464 * __this, MemberInfo_t * ___method0, AggregateSymbol_t3146081271 * ___callingAggregate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_FindMatchingMethod_m1410031394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodSymbol_t394006151 * V_0 = NULL;
	{
		BSYMMGR_t2938027401 * L_0 = __this->get__bsymmgr_6();
		MemberInfo_t * L_1 = ___method0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		Name_t658191338 * L_3 = SymbolTable_GetName_m1066594422(__this, L_2, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_4 = ___callingAggregate1;
		NullCheck(L_0);
		Symbol_t3348236047 * L_5 = BSYMMGR_LookupAggMember_m2413661113(L_0, L_3, L_4, (((int64_t)((int64_t)((int32_t)128)))), /*hidden argument*/NULL);
		V_0 = ((MethodSymbol_t394006151 *)IsInstSealed((RuntimeObject*)L_5, MethodSymbol_t394006151_il2cpp_TypeInfo_var));
		goto IL_0049;
	}

IL_0026:
	{
		MethodSymbol_t394006151 * L_6 = V_0;
		NullCheck(L_6);
		MemberInfo_t * L_7 = L_6->get_AssociatedMemberInfo_34();
		MemberInfo_t * L_8 = ___method0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		bool L_9 = RuntimeBinderExtensions_IsEquivalentTo_m3460129938(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		MethodSymbol_t394006151 * L_10 = V_0;
		return L_10;
	}

IL_0036:
	{
		MethodSymbol_t394006151 * L_11 = V_0;
		AggregateSymbol_t3146081271 * L_12 = ___callingAggregate1;
		IL2CPP_RUNTIME_CLASS_INIT(BSYMMGR_t2938027401_il2cpp_TypeInfo_var);
		Symbol_t3348236047 * L_13 = BSYMMGR_LookupNextSym_m1831996135(NULL /*static, unused*/, L_11, L_12, (((int64_t)((int64_t)((int32_t)128)))), /*hidden argument*/NULL);
		V_0 = ((MethodSymbol_t394006151 *)IsInstSealed((RuntimeObject*)L_13, MethodSymbol_t394006151_il2cpp_TypeInfo_var));
	}

IL_0049:
	{
		MethodSymbol_t394006151 * L_14 = V_0;
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		return (MethodSymbol_t394006151 *)NULL;
	}
}
// System.UInt32 Microsoft.CSharp.RuntimeBinder.SymbolTable::GetCountOfModOpts(System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR uint32_t SymbolTable_GetCountOfModOpts_m900901776 (SymbolTable_t2007508464 * __this, ParameterInfoU5BU5D_t390618515* ___parameters0, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.TypeArray Microsoft.CSharp.RuntimeBinder.SymbolTable::CreateParameterArray(System.Reflection.MemberInfo,System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR TypeArray_t2467755373 * SymbolTable_CreateParameterArray_m634093492 (SymbolTable_t2007508464 * __this, MemberInfo_t * ___associatedInfo0, ParameterInfoU5BU5D_t390618515* ___parameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_CreateParameterArray_m634093492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3285462212 * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	ParameterInfoU5BU5D_t390618515* V_2 = NULL;
	int32_t V_3 = 0;
	ParameterInfo_t1861056598 * V_4 = NULL;
	{
		List_1_t3285462212 * L_0 = (List_1_t3285462212 *)il2cpp_codegen_object_new(List_1_t3285462212_il2cpp_TypeInfo_var);
		List_1__ctor_m1419539908(L_0, /*hidden argument*/List_1__ctor_m1419539908_RuntimeMethod_var);
		V_0 = L_0;
		ParameterInfoU5BU5D_t390618515* L_1 = ___parameters1;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0024;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t390618515* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ParameterInfo_t1861056598 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		List_1_t3285462212 * L_6 = V_0;
		ParameterInfo_t1861056598 * L_7 = V_4;
		MemberInfo_t * L_8 = ___associatedInfo0;
		CType_t1813387470 * L_9 = SymbolTable_GetTypeOfParameter_m2694454471(__this, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m3042044450(L_6, L_9, /*hidden argument*/List_1_Add_m3042044450_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_11 = V_3;
		ParameterInfoU5BU5D_t390618515* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_000c;
		}
	}
	{
		MemberInfo_t * L_13 = ___associatedInfo0;
		V_1 = ((MethodInfo_t *)IsInstClass((RuntimeObject*)L_13, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t * L_14 = V_1;
		bool L_15 = MethodInfo_op_Inequality_m708125611(NULL /*static, unused*/, L_14, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		MethodInfo_t * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_16);
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		List_1_t3285462212 * L_18 = V_0;
		TypeManager_t4140799422 * L_19 = __this->get__typeManager_5();
		NullCheck(L_19);
		ArgumentListType_t3380992639 * L_20 = TypeManager_GetArgListType_m3444419805(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m3042044450(L_18, L_20, /*hidden argument*/List_1_Add_m3042044450_RuntimeMethod_var);
	}

IL_0056:
	{
		BSYMMGR_t2938027401 * L_21 = __this->get__bsymmgr_6();
		List_1_t3285462212 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m3795182392(L_22, /*hidden argument*/List_1_get_Count_m3795182392_RuntimeMethod_var);
		List_1_t3285462212 * L_24 = V_0;
		NullCheck(L_24);
		CTypeU5BU5D_t868586555* L_25 = List_1_ToArray_m2498037548(L_24, /*hidden argument*/List_1_ToArray_m2498037548_RuntimeMethod_var);
		NullCheck(L_21);
		TypeArray_t2467755373 * L_26 = BSYMMGR_AllocParams_m78811279(L_21, L_23, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.CType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetTypeOfParameter(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR CType_t1813387470 * SymbolTable_GetTypeOfParameter_m2694454471 (SymbolTable_t2007508464 * __this, ParameterInfo_t1861056598 * ___p0, MemberInfo_t * ___m1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetTypeOfParameter_m2694454471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	CType_t1813387470 * V_1 = NULL;
	ParameterModifierType_t867882597 * V_2 = NULL;
	CType_t1813387470 * V_3 = NULL;
	{
		ParameterInfo_t1861056598 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_IsGenericParameter() */, L_2);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		MethodBase_t * L_5 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_4);
		bool L_6 = MethodBase_op_Inequality_m736913402(NULL /*static, unused*/, L_5, (MethodBase_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_7 = V_0;
		NullCheck(L_7);
		MethodBase_t * L_8 = VirtFuncInvoker0< MethodBase_t * >::Invoke(16 /* System.Reflection.MethodBase System.Type::get_DeclaringMethod() */, L_7);
		MemberInfo_t * L_9 = ___m1;
		bool L_10 = MemberInfo_op_Equality_m2351077054(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		MemberInfo_t * L_11 = ___m1;
		MethodSymbol_t394006151 * L_12 = SymbolTable_FindMethodFromMemberInfo_m2223710338(__this, L_11, /*hidden argument*/NULL);
		Type_t * L_13 = V_0;
		TypeParameterType_t171561091 * L_14 = SymbolTable_LoadMethodTypeParameter_m3062046655(__this, L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0044;
	}

IL_003c:
	{
		Type_t * L_15 = V_0;
		CType_t1813387470 * L_16 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0044:
	{
		CType_t1813387470 * L_17 = V_1;
		ParameterModifierType_t867882597 * L_18 = ((ParameterModifierType_t867882597 *)IsInstSealed((RuntimeObject*)L_17, ParameterModifierType_t867882597_il2cpp_TypeInfo_var));
		V_2 = L_18;
		if (!L_18)
		{
			goto IL_0073;
		}
	}
	{
		ParameterInfo_t1861056598 * L_19 = ___p0;
		NullCheck(L_19);
		bool L_20 = ParameterInfo_get_IsOut_m867677222(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0073;
		}
	}
	{
		ParameterInfo_t1861056598 * L_21 = ___p0;
		NullCheck(L_21);
		bool L_22 = ParameterInfo_get_IsIn_m1278224586(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0073;
		}
	}
	{
		ParameterModifierType_t867882597 * L_23 = V_2;
		NullCheck(L_23);
		CType_t1813387470 * L_24 = ParameterModifierType_GetParameterType_m488399978(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		TypeManager_t4140799422 * L_25 = __this->get__typeManager_5();
		CType_t1813387470 * L_26 = V_3;
		NullCheck(L_25);
		ParameterModifierType_t867882597 * L_27 = TypeManager_GetParameterModifier_m1738454542(L_25, L_26, (bool)1, /*hidden argument*/NULL);
		V_1 = L_27;
	}

IL_0073:
	{
		CType_t1813387470 * L_28 = V_1;
		return L_28;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::DoesMethodHaveParameterArray(System.Reflection.ParameterInfo[])
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_DoesMethodHaveParameterArray_m3086024223 (SymbolTable_t2007508464 * __this, ParameterInfoU5BU5D_t390618515* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_DoesMethodHaveParameterArray_m3086024223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ParameterInfoU5BU5D_t390618515* L_0 = ___parameters0;
		NullCheck(L_0);
		if ((((RuntimeArray *)L_0)->max_length))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		ParameterInfoU5BU5D_t390618515* L_1 = ___parameters0;
		ParameterInfoU5BU5D_t390618515* L_2 = ___parameters0;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), (int32_t)1));
		ParameterInfo_t1861056598 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		ObjectU5BU5D_t2843939325* L_5 = VirtFuncInvoker1< ObjectU5BU5D_t2843939325*, bool >::Invoke(13 /* System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Boolean) */, L_4, (bool)0);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0028;
	}

IL_0018:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!((ParamArrayAttribute_t3664765590 *)IsInstSealed((RuntimeObject*)L_9, ParamArrayAttribute_t3664765590_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}

IL_0024:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0028:
	{
		int32_t L_11 = V_1;
		ObjectU5BU5D_t2843939325* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.SymWithType Microsoft.CSharp.RuntimeBinder.SymbolTable::GetSlotForOverride(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR SymWithType_t1275985997 * SymbolTable_GetSlotForOverride_m1988677043 (SymbolTable_t2007508464 * __this, MethodInfo_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_GetSlotForOverride_m1988677043_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	AggregateSymbol_t3146081271 * V_1 = NULL;
	MethodSymbol_t394006151 * G_B6_0 = NULL;
	MethodSymbol_t394006151 * G_B5_0 = NULL;
	{
		MethodInfo_t * L_0 = ___method0;
		NullCheck(L_0);
		bool L_1 = MethodBase_get_IsVirtual_m2008546636(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		MethodInfo_t * L_2 = ___method0;
		NullCheck(L_2);
		bool L_3 = MethodBase_get_IsHideBySig_m1251605706(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		MethodInfo_t * L_4 = ___method0;
		MethodInfo_t * L_5 = RuntimeReflectionExtensions_GetRuntimeBaseDefinition_m3606280828(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		MethodInfo_t * L_6 = V_0;
		MethodInfo_t * L_7 = ___method0;
		bool L_8 = MethodInfo_op_Equality_m1241144064(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0022;
		}
	}
	{
		return (SymWithType_t1275985997 *)NULL;
	}

IL_0022:
	{
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		CType_t1813387470 * L_11 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		AggregateSymbol_t3146081271 * L_12 = CType_getAggregate_m653932837(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		MethodInfo_t * L_13 = V_0;
		MethodSymbol_t394006151 * L_14 = SymbolTable_FindMethodFromMemberInfo_m2223710338(__this, L_13, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_0044;
		}
	}
	{
		Exception_t * L_16 = Error_InternalCompilerError_m572151956(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, SymbolTable_GetSlotForOverride_m1988677043_RuntimeMethod_var);
	}

IL_0044:
	{
		AggregateSymbol_t3146081271 * L_17 = V_1;
		NullCheck(L_17);
		AggregateType_t567267003 * L_18 = AggregateSymbol_getThisType_m4290204095(L_17, /*hidden argument*/NULL);
		SymWithType_t1275985997 * L_19 = (SymWithType_t1275985997 *)il2cpp_codegen_object_new(SymWithType_t1275985997_il2cpp_TypeInfo_var);
		SymWithType__ctor_m3807594455(L_19, G_B6_0, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0050:
	{
		return (SymWithType_t1275985997 *)NULL;
	}
}
// Microsoft.CSharp.RuntimeBinder.Semantics.MethodSymbol Microsoft.CSharp.RuntimeBinder.SymbolTable::FindMethodFromMemberInfo(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR MethodSymbol_t394006151 * SymbolTable_FindMethodFromMemberInfo_m2223710338 (SymbolTable_t2007508464 * __this, MemberInfo_t * ___baseMemberInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_FindMethodFromMemberInfo_m2223710338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AggregateSymbol_t3146081271 * V_0 = NULL;
	MethodSymbol_t394006151 * V_1 = NULL;
	{
		MemberInfo_t * L_0 = ___baseMemberInfo0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		CType_t1813387470 * L_2 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		AggregateSymbol_t3146081271 * L_3 = CType_getAggregate_m653932837(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		CSemanticChecker_t1535940568 * L_4 = __this->get__semanticChecker_7();
		NullCheck(L_4);
		SymbolLoader_t2983914338 * L_5 = CSemanticChecker_get_SymbolLoader_m2577500808(L_4, /*hidden argument*/NULL);
		MemberInfo_t * L_6 = ___baseMemberInfo0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		Name_t658191338 * L_8 = SymbolTable_GetName_m1066594422(__this, L_7, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_9 = V_0;
		NullCheck(L_5);
		Symbol_t3348236047 * L_10 = SymbolLoader_LookupAggMember_m4112456114(L_5, L_8, L_9, (((int64_t)((int64_t)((int32_t)128)))), /*hidden argument*/NULL);
		V_1 = ((MethodSymbol_t394006151 *)IsInstSealed((RuntimeObject*)L_10, MethodSymbol_t394006151_il2cpp_TypeInfo_var));
		goto IL_005b;
	}

IL_003d:
	{
		CSemanticChecker_t1535940568 * L_11 = __this->get__semanticChecker_7();
		NullCheck(L_11);
		SymbolLoader_t2983914338 * L_12 = CSemanticChecker_get_SymbolLoader_m2577500808(L_11, /*hidden argument*/NULL);
		MethodSymbol_t394006151 * L_13 = V_1;
		AggregateSymbol_t3146081271 * L_14 = V_0;
		NullCheck(L_12);
		Symbol_t3348236047 * L_15 = SymbolLoader_LookupNextSym_m513919061(L_12, L_13, L_14, (((int64_t)((int64_t)((int32_t)128)))), /*hidden argument*/NULL);
		V_1 = ((MethodSymbol_t394006151 *)IsInstSealed((RuntimeObject*)L_15, MethodSymbol_t394006151_il2cpp_TypeInfo_var));
	}

IL_005b:
	{
		MethodSymbol_t394006151 * L_16 = V_1;
		if (!L_16)
		{
			goto IL_006c;
		}
	}
	{
		MethodSymbol_t394006151 * L_17 = V_1;
		NullCheck(L_17);
		MemberInfo_t * L_18 = L_17->get_AssociatedMemberInfo_34();
		MemberInfo_t * L_19 = ___baseMemberInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		bool L_20 = RuntimeBinderExtensions_IsEquivalentTo_m3460129938(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_003d;
		}
	}

IL_006c:
	{
		MethodSymbol_t394006151 * L_21 = V_1;
		return L_21;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::AggregateContainsMethod(Microsoft.CSharp.RuntimeBinder.Semantics.AggregateSymbol,System.String,Microsoft.CSharp.RuntimeBinder.Semantics.symbmask_t)
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_AggregateContainsMethod_m859381752 (SymbolTable_t2007508464 * __this, AggregateSymbol_t3146081271 * ___agg0, String_t* ___szName1, int64_t ___mask2, const RuntimeMethod* method)
{
	{
		CSemanticChecker_t1535940568 * L_0 = __this->get__semanticChecker_7();
		NullCheck(L_0);
		SymbolLoader_t2983914338 * L_1 = CSemanticChecker_get_SymbolLoader_m2577500808(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___szName1;
		Name_t658191338 * L_3 = SymbolTable_GetName_m1066594422(__this, L_2, /*hidden argument*/NULL);
		AggregateSymbol_t3146081271 * L_4 = ___agg0;
		int64_t L_5 = ___mask2;
		NullCheck(L_1);
		Symbol_t3348236047 * L_6 = SymbolLoader_LookupAggMember_m4112456114(L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(Symbol_t3348236047 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddConversionsForType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddConversionsForType_m2635794899 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddConversionsForType_m2635794899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsInterface_m3284996719(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ___type0;
		SymbolTable_AddConversionsForOneType_m2033170488(__this, L_2, /*hidden argument*/NULL);
	}

IL_000f:
	{
		Type_t * L_3 = ___type0;
		V_0 = L_3;
		goto IL_0021;
	}

IL_0013:
	{
		Type_t * L_4 = V_0;
		SymbolTable_AddConversionsForOneType_m2033170488(__this, L_4, /*hidden argument*/NULL);
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_5);
		V_0 = L_6;
	}

IL_0021:
	{
		Type_t * L_7 = V_0;
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_8, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::AddConversionsForOneType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SymbolTable_AddConversionsForOneType_m2033170488 (SymbolTable_t2007508464 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_AddConversionsForOneType_m2033170488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CType_t1813387470 * V_0 = NULL;
	TypeParameterType_t171561091 * V_1 = NULL;
	AggregateSymbol_t3146081271 * V_2 = NULL;
	CType_t1813387470 * V_3 = NULL;
	CTypeU5BU5D_t868586555* V_4 = NULL;
	int32_t V_5 = 0;
	CType_t1813387470 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	MethodInfo_t * V_8 = NULL;
	int32_t V_9 = 0;
	String_t* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(84 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(111 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		___type0 = L_3;
	}

IL_0010:
	{
		HashSet_1_t1048894234 * L_4 = __this->get__typesWithConversionsLoaded_0();
		Type_t * L_5 = ___type0;
		NullCheck(L_4);
		bool L_6 = HashSet_1_Add_m4258915900(L_4, L_5, /*hidden argument*/HashSet_1_Add_m4258915900_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		Type_t * L_7 = ___type0;
		CType_t1813387470 * L_8 = SymbolTable_GetCTypeFromType_m3194020084(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		CType_t1813387470 * L_9 = V_0;
		if (((AggregateType_t567267003 *)IsInstSealed((RuntimeObject*)L_9, AggregateType_t567267003_il2cpp_TypeInfo_var)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0033;
	}

IL_0031:
	{
		CType_t1813387470 * L_10 = V_3;
		V_0 = L_10;
	}

IL_0033:
	{
		CType_t1813387470 * L_11 = V_0;
		NullCheck(L_11);
		CType_t1813387470 * L_12 = CType_GetBaseOrParameterOrElementType_m3054820432(L_11, /*hidden argument*/NULL);
		CType_t1813387470 * L_13 = L_12;
		V_3 = L_13;
		if (L_13)
		{
			goto IL_0031;
		}
	}

IL_003d:
	{
		CType_t1813387470 * L_14 = V_0;
		TypeParameterType_t171561091 * L_15 = ((TypeParameterType_t171561091 *)IsInstSealed((RuntimeObject*)L_14, TypeParameterType_t171561091_il2cpp_TypeInfo_var));
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		TypeParameterType_t171561091 * L_16 = V_1;
		NullCheck(L_16);
		TypeArray_t2467755373 * L_17 = TypeParameterType_GetBounds_m3786599685(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		CTypeU5BU5D_t868586555* L_18 = TypeArray_get_Items_m3402575676(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		V_5 = 0;
		goto IL_0073;
	}

IL_0059:
	{
		CTypeU5BU5D_t868586555* L_19 = V_4;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		CType_t1813387470 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_6 = L_22;
		CType_t1813387470 * L_23 = V_6;
		NullCheck(L_23);
		Type_t * L_24 = CType_get_AssociatedSystemType_m1536780166(L_23, /*hidden argument*/NULL);
		SymbolTable_AddConversionsForType_m2635794899(__this, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0073:
	{
		int32_t L_26 = V_5;
		CTypeU5BU5D_t868586555* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0059;
		}
	}
	{
		return;
	}

IL_007c:
	{
		CType_t1813387470 * L_28 = V_0;
		NullCheck(((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_28, AggregateType_t567267003_il2cpp_TypeInfo_var)));
		AggregateSymbol_t3146081271 * L_29 = CType_getAggregate_m653932837(((AggregateType_t567267003 *)CastclassSealed((RuntimeObject*)L_28, AggregateType_t567267003_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_29;
		Type_t * L_30 = ___type0;
		RuntimeObject* L_31 = RuntimeReflectionExtensions_GetRuntimeMethods_m2137572665(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		RuntimeObject* L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator() */, IEnumerable_1_t857479137_il2cpp_TypeInfo_var, L_31);
		V_7 = L_32;
	}

IL_0095:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010e;
		}

IL_0097:
		{
			RuntimeObject* L_33 = V_7;
			NullCheck(L_33);
			MethodInfo_t * L_34 = InterfaceFuncInvoker0< MethodInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current() */, IEnumerator_1_t2310196716_il2cpp_TypeInfo_var, L_33);
			V_8 = L_34;
			MethodInfo_t * L_35 = V_8;
			NullCheck(L_35);
			bool L_36 = MethodBase_get_IsPublic_m2180846589(L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_010e;
			}
		}

IL_00a9:
		{
			MethodInfo_t * L_37 = V_8;
			NullCheck(L_37);
			bool L_38 = MethodBase_get_IsStatic_m2399864271(L_37, /*hidden argument*/NULL);
			if (!L_38)
			{
				goto IL_010e;
			}
		}

IL_00b2:
		{
			MethodInfo_t * L_39 = V_8;
			NullCheck(L_39);
			Type_t * L_40 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_39);
			Type_t * L_41 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_42 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_010e;
			}
		}

IL_00c1:
		{
			MethodInfo_t * L_43 = V_8;
			NullCheck(L_43);
			bool L_44 = MethodBase_get_IsSpecialName_m1671317191(L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_010e;
			}
		}

IL_00ca:
		{
			MethodInfo_t * L_45 = V_8;
			NullCheck(L_45);
			bool L_46 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_45);
			if (L_46)
			{
				goto IL_010e;
			}
		}

IL_00d3:
		{
			MethodInfo_t * L_47 = V_8;
			NullCheck(L_47);
			String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_47);
			V_10 = L_48;
			String_t* L_49 = V_10;
			bool L_50 = String_op_Equality_m920492651(NULL /*static, unused*/, L_49, _stringLiteral3306367446, /*hidden argument*/NULL);
			if (L_50)
			{
				goto IL_00fa;
			}
		}

IL_00ea:
		{
			String_t* L_51 = V_10;
			bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral2655463595, /*hidden argument*/NULL);
			if (L_52)
			{
				goto IL_00ff;
			}
		}

IL_00f8:
		{
			goto IL_010e;
		}

IL_00fa:
		{
			V_9 = 6;
			goto IL_0102;
		}

IL_00ff:
		{
			V_9 = 5;
		}

IL_0102:
		{
			MethodInfo_t * L_53 = V_8;
			AggregateSymbol_t3146081271 * L_54 = V_2;
			int32_t L_55 = V_9;
			SymbolTable_AddMethodToSymbolTable_m1421278763(__this, L_53, L_54, L_55, /*hidden argument*/NULL);
		}

IL_010e:
		{
			RuntimeObject* L_56 = V_7;
			NullCheck(L_56);
			bool L_57 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_56);
			if (L_57)
			{
				goto IL_0097;
			}
		}

IL_0117:
		{
			IL2CPP_LEAVE(0x125, FINALLY_0119);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0119;
	}

FINALLY_0119:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_58 = V_7;
			if (!L_58)
			{
				goto IL_0124;
			}
		}

IL_011d:
		{
			RuntimeObject* L_59 = V_7;
			NullCheck(L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_59);
		}

IL_0124:
		{
			IL2CPP_END_FINALLY(281)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(281)
	{
		IL2CPP_JUMP_TBL(0x125, IL_0125)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0125:
	{
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable::IsOperator(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool SymbolTable_IsOperator_m3403205358 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable_IsOperator_m3403205358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		MethodInfo_t * L_0 = ___method0;
		NullCheck(L_0);
		bool L_1 = MethodBase_get_IsSpecialName_m1671317191(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_03ab;
		}
	}
	{
		MethodInfo_t * L_2 = ___method0;
		NullCheck(L_2);
		bool L_3 = MethodBase_get_IsStatic_m2399864271(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_03ab;
		}
	}
	{
		MethodInfo_t * L_4 = ___method0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint32_t L_7 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m2114985558(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)1915672496)))))
		{
			goto IL_00f7;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)1195761148)))))
		{
			goto IL_008b;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)835846267)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)90588446))))
		{
			goto IL_0360;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)215197780))))
		{
			goto IL_01bf;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)835846267))))
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_03ab;
	}

IL_0065:
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)906583475))))
		{
			goto IL_01e9;
		}
	}
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1034931220))))
		{
			goto IL_038d;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)1195761148))))
		{
			goto IL_0291;
		}
	}
	{
		goto IL_03ab;
	}

IL_008b:
	{
		uint32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)1516143579)))))
		{
			goto IL_00b9;
		}
	}
	{
		uint32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)1234170120))))
		{
			goto IL_02a6;
		}
	}
	{
		uint32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)1258540185))))
		{
			goto IL_027c;
		}
	}
	{
		uint32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)1516143579))))
		{
			goto IL_02d0;
		}
	}
	{
		goto IL_03ab;
	}

IL_00b9:
	{
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)1587019679)))))
		{
			goto IL_00dc;
		}
	}
	{
		uint32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)1548478473))))
		{
			goto IL_0267;
		}
	}
	{
		uint32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)1587019679))))
		{
			goto IL_01d4;
		}
	}
	{
		goto IL_03ab;
	}

IL_00dc:
	{
		uint32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)1850069070))))
		{
			goto IL_037e;
		}
	}
	{
		uint32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)1915672496))))
		{
			goto IL_0228;
		}
	}
	{
		goto IL_03ab;
	}

IL_00f7:
	{
		uint32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-1720289397)))))
		{
			goto IL_0153;
		}
	}
	{
		uint32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) <= ((uint32_t)((int32_t)-1865288344)))))
		{
			goto IL_012d;
		}
	}
	{
		uint32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)-2052671594))))
		{
			goto IL_0252;
		}
	}
	{
		uint32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)-1928171460))))
		{
			goto IL_030f;
		}
	}
	{
		uint32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-1865288344))))
		{
			goto IL_023d;
		}
	}
	{
		goto IL_03ab;
	}

IL_012d:
	{
		uint32_t L_31 = V_1;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)-1835114885))))
		{
			goto IL_02bb;
		}
	}
	{
		uint32_t L_32 = V_1;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)-1758240948))))
		{
			goto IL_039c;
		}
	}
	{
		uint32_t L_33 = V_1;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)-1720289397))))
		{
			goto IL_0333;
		}
	}
	{
		goto IL_03ab;
	}

IL_0153:
	{
		uint32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) <= ((uint32_t)((int32_t)-1015548097)))))
		{
			goto IL_0181;
		}
	}
	{
		uint32_t L_35 = V_1;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)-1336714801))))
		{
			goto IL_0213;
		}
	}
	{
		uint32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)-1219271166))))
		{
			goto IL_0351;
		}
	}
	{
		uint32_t L_37 = V_1;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)-1015548097))))
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_03ab;
	}

IL_0181:
	{
		uint32_t L_38 = V_1;
		if ((!(((uint32_t)L_38) <= ((uint32_t)((int32_t)-726066397)))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_39 = V_1;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)-802416729))))
		{
			goto IL_0324;
		}
	}
	{
		uint32_t L_40 = V_1;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-726066397))))
		{
			goto IL_036f;
		}
	}
	{
		goto IL_03ab;
	}

IL_01a4:
	{
		uint32_t L_41 = V_1;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)-578301403))))
		{
			goto IL_0342;
		}
	}
	{
		uint32_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)-500649512))))
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_03ab;
	}

IL_01bf:
	{
		String_t* L_43 = V_0;
		bool L_44 = String_op_Equality_m920492651(NULL /*static, unused*/, L_43, _stringLiteral3306367446, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_01d4:
	{
		String_t* L_45 = V_0;
		bool L_46 = String_op_Equality_m920492651(NULL /*static, unused*/, L_45, _stringLiteral2655463595, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_01e9:
	{
		String_t* L_47 = V_0;
		bool L_48 = String_op_Equality_m920492651(NULL /*static, unused*/, L_47, _stringLiteral964622056, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_01fe:
	{
		String_t* L_49 = V_0;
		bool L_50 = String_op_Equality_m920492651(NULL /*static, unused*/, L_49, _stringLiteral3897952179, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0213:
	{
		String_t* L_51 = V_0;
		bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral4198891390, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0228:
	{
		String_t* L_53 = V_0;
		bool L_54 = String_op_Equality_m920492651(NULL /*static, unused*/, L_53, _stringLiteral946927187, /*hidden argument*/NULL);
		if (L_54)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_023d:
	{
		String_t* L_55 = V_0;
		bool L_56 = String_op_Equality_m920492651(NULL /*static, unused*/, L_55, _stringLiteral152203953, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0252:
	{
		String_t* L_57 = V_0;
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_57, _stringLiteral967860007, /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0267:
	{
		String_t* L_59 = V_0;
		bool L_60 = String_op_Equality_m920492651(NULL /*static, unused*/, L_59, _stringLiteral1600105539, /*hidden argument*/NULL);
		if (L_60)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_027c:
	{
		String_t* L_61 = V_0;
		bool L_62 = String_op_Equality_m920492651(NULL /*static, unused*/, L_61, _stringLiteral2234161082, /*hidden argument*/NULL);
		if (L_62)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0291:
	{
		String_t* L_63 = V_0;
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral3119448475, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_02a6:
	{
		String_t* L_65 = V_0;
		bool L_66 = String_op_Equality_m920492651(NULL /*static, unused*/, L_65, _stringLiteral2038133541, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_02bb:
	{
		String_t* L_67 = V_0;
		bool L_68 = String_op_Equality_m920492651(NULL /*static, unused*/, L_67, _stringLiteral1065866263, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_02d0:
	{
		String_t* L_69 = V_0;
		bool L_70 = String_op_Equality_m920492651(NULL /*static, unused*/, L_69, _stringLiteral3482834024, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_02e5:
	{
		String_t* L_71 = V_0;
		bool L_72 = String_op_Equality_m920492651(NULL /*static, unused*/, L_71, _stringLiteral2993467114, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_02fa:
	{
		String_t* L_73 = V_0;
		bool L_74 = String_op_Equality_m920492651(NULL /*static, unused*/, L_73, _stringLiteral1357986273, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_030f:
	{
		String_t* L_75 = V_0;
		bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral1905736822, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0324:
	{
		String_t* L_77 = V_0;
		bool L_78 = String_op_Equality_m920492651(NULL /*static, unused*/, L_77, _stringLiteral2260015710, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0333:
	{
		String_t* L_79 = V_0;
		bool L_80 = String_op_Equality_m920492651(NULL /*static, unused*/, L_79, _stringLiteral1958770049, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0342:
	{
		String_t* L_81 = V_0;
		bool L_82 = String_op_Equality_m920492651(NULL /*static, unused*/, L_81, _stringLiteral831415459, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0351:
	{
		String_t* L_83 = V_0;
		bool L_84 = String_op_Equality_m920492651(NULL /*static, unused*/, L_83, _stringLiteral4079233801, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_0360:
	{
		String_t* L_85 = V_0;
		bool L_86 = String_op_Equality_m920492651(NULL /*static, unused*/, L_85, _stringLiteral1818253423, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_036f:
	{
		String_t* L_87 = V_0;
		bool L_88 = String_op_Equality_m920492651(NULL /*static, unused*/, L_87, _stringLiteral3133858467, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_037e:
	{
		String_t* L_89 = V_0;
		bool L_90 = String_op_Equality_m920492651(NULL /*static, unused*/, L_89, _stringLiteral3647647696, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_038d:
	{
		String_t* L_91 = V_0;
		bool L_92 = String_op_Equality_m920492651(NULL /*static, unused*/, L_91, _stringLiteral2022012807, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_03a9;
		}
	}
	{
		goto IL_03ab;
	}

IL_039c:
	{
		String_t* L_93 = V_0;
		bool L_94 = String_op_Equality_m920492651(NULL /*static, unused*/, L_93, _stringLiteral2040559864, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_03ab;
		}
	}

IL_03a9:
	{
		return (bool)1;
	}

IL_03ab:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SymbolTable__cctor_m1653900139 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymbolTable__cctor_m1653900139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (SymbolTable_t2007508464_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->set_s_Sentinel_9(L_1);
		Type_t * L_2 = ((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_s_Sentinel_9();
		((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->set_s_EventRegistrationTokenType_10(L_2);
		Type_t * L_3 = ((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_s_Sentinel_9();
		((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->set_s_WindowsRuntimeMarshal_11(L_3);
		Type_t * L_4 = ((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->get_s_Sentinel_9();
		((SymbolTable_t2007508464_StaticFields*)il2cpp_codegen_static_fields_for(SymbolTable_t2007508464_il2cpp_TypeInfo_var))->set_s_EventRegistrationTokenTable_12(L_4);
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
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m2404963081 (U3CU3Ec__DisplayClass15_0_t2873125857 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_1__ctor_m2404963954 (U3CU3Ec__DisplayClass15_1_t916810721 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass15_1::<AddNamesInInheritanceHierarchy>b__0(System.Reflection.MemberInfo)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_1_U3CAddNamesInInheritanceHierarchyU3Eb__0_m1699310696 (U3CU3Ec__DisplayClass15_1_t916810721 * __this, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass15_1_U3CAddNamesInInheritanceHierarchyU3Eb__0_m1699310696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		Type_t * L_2 = __this->get_type_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		MemberInfo_t * L_4 = ___member0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		U3CU3Ec__DisplayClass15_0_t2873125857 * L_6 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_name_0();
		bool L_8 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
	{
		return (bool)0;
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
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m4117277833 (U3CU3Ec__DisplayClass30_0_t2872929247 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass30_0::<BuildDeclarationChain>b__0(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass30_0_U3CBuildDeclarationChainU3Eb__0_m360352475 (U3CU3Ec__DisplayClass30_0_t2872929247 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass30_0_U3CBuildDeclarationChainU3Eb__0_m360352475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		MethodBase_t * L_1 = __this->get_methodBase_0();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeBinderExtensions_t974401502_il2cpp_TypeInfo_var);
		bool L_2 = RuntimeBinderExtensions_HasSameMetadataDefinitionAs_m1587284476(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass50_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m3156650895 (U3CU3Ec__DisplayClass50_0_t2872929245 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass50_0::<AddPredefinedPropertyToSymbolTable>b__0(System.Reflection.PropertyInfo)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass50_0_U3CAddPredefinedPropertyToSymbolTableU3Eb__0_m3552718169 (U3CU3Ec__DisplayClass50_0_t2872929245 * __this, PropertyInfo_t * ___x0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		Name_t658191338 * L_2 = __this->get_property_0();
		NullCheck(L_2);
		String_t* L_3 = Name_get_Text_m2490619376(L_2, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m1025141957 (U3CU3Ec__DisplayClass52_0_t2872798173 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/<>c__DisplayClass52_0::<AddPredefinedMethodToSymbolTable>b__0(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass52_0_U3CAddPredefinedMethodToSymbolTableU3Eb__0_m364477531 (U3CU3Ec__DisplayClass52_0_t2872798173 * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass52_0_U3CAddPredefinedMethodToSymbolTableU3Eb__0_m364477531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		Name_t658191338 * L_2 = __this->get_methodName_0();
		NullCheck(L_2);
		String_t* L_3 = Name_get_Text_m2490619376(L_2, /*hidden argument*/NULL);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		MethodInfo_t * L_5 = ___m0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		Type_t * L_7 = __this->get_t_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Equality_m2683486427(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002a:
	{
		return (bool)0;
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
// System.Void Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::.ctor(System.Type,System.String)
extern "C" IL2CPP_METHOD_ATTR void NameHashKey__ctor_m2404976955 (NameHashKey_t2012175420 * __this, Type_t * ___type0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type0;
		__this->set_type_0(L_0);
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		return;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::Equals(Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey)
extern "C" IL2CPP_METHOD_ATTR bool NameHashKey_Equals_m63292071 (NameHashKey_t2012175420 * __this, NameHashKey_t2012175420 * ___other0, const RuntimeMethod* method)
{
	{
		NameHashKey_t2012175420 * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_1 = __this->get_type_0();
		NameHashKey_t2012175420 * L_2 = ___other0;
		NullCheck(L_2);
		Type_t * L_3 = L_2->get_type_0();
		NullCheck(L_1);
		bool L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(124 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = __this->get_name_1();
		NameHashKey_t2012175420 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_name_1();
		NullCheck(L_5);
		bool L_8 = String_Equals_m2270643605(L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0028:
	{
		return (bool)0;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool NameHashKey_Equals_m1729024198 (NameHashKey_t2012175420 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameHashKey_Equals_m1729024198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = NameHashKey_Equals_m63292071(__this, ((NameHashKey_t2012175420 *)IsInstSealed((RuntimeObject*)L_0, NameHashKey_t2012175420_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Microsoft.CSharp.RuntimeBinder.SymbolTable/NameHashKey::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t NameHashKey_GetHashCode_m2929150464 (NameHashKey_t2012175420 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_type_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		String_t* L_2 = __this->get_name_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
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
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.Name::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Name__ctor_m3223606436 (Name_t658191338 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		__this->set_U3CTextU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Microsoft.CSharp.RuntimeBinder.Syntax.Name::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Name_get_Text_m2490619376 (Name_t658191338 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Microsoft.CSharp.RuntimeBinder.Syntax.Name::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Name_ToString_m347480520 (Name_t658191338 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Name_get_Text_m2490619376(__this, /*hidden argument*/NULL);
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
// Microsoft.CSharp.RuntimeBinder.Syntax.NameTable Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::GetKnownNames()
extern "C" IL2CPP_METHOD_ATTR NameTable_t1897568201 * NameManager_GetKnownNames_m3242543041 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager_GetKnownNames_m3242543041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NameTable_t1897568201 * V_0 = NULL;
	NameU5BU5D_t1359183151* V_1 = NULL;
	int32_t V_2 = 0;
	Name_t658191338 * V_3 = NULL;
	{
		NameTable_t1897568201 * L_0 = (NameTable_t1897568201 *)il2cpp_codegen_object_new(NameTable_t1897568201_il2cpp_TypeInfo_var);
		NameTable__ctor_m1499832512(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(NameManager_t1767112997_il2cpp_TypeInfo_var);
		NameU5BU5D_t1359183151* L_1 = ((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->get_s_predefinedNames_0();
		V_1 = L_1;
		V_2 = 0;
		goto IL_001f;
	}

IL_0010:
	{
		NameU5BU5D_t1359183151* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Name_t658191338 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		NameTable_t1897568201 * L_6 = V_0;
		Name_t658191338 * L_7 = V_3;
		NullCheck(L_6);
		NameTable_Add_m1946126680(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001f:
	{
		int32_t L_9 = V_2;
		NameU5BU5D_t1359183151* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		NameTable_t1897568201 * L_11 = V_0;
		return L_11;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::Add(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_Add_m3684855591 (NameManager_t1767112997 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager_Add_m3684855591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Name_t658191338 * G_B4_0 = NULL;
	Name_t658191338 * G_B3_0 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		Exception_t * L_1 = Error_InternalCompilerError_m572151956(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NameManager_Add_m3684855591_RuntimeMethod_var);
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NameManager_t1767112997_il2cpp_TypeInfo_var);
		NameTable_t1897568201 * L_2 = ((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->get_s_knownNames_1();
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		Name_t658191338 * L_4 = NameTable_Lookup_m2347088846(L_2, L_3, /*hidden argument*/NULL);
		Name_t658191338 * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0024;
		}
	}
	{
		NameTable_t1897568201 * L_6 = __this->get__names_2();
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		Name_t658191338 * L_8 = NameTable_Add_m25256284(L_6, L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_0024:
	{
		return G_B4_0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::Add(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_Add_m2932834222 (NameManager_t1767112997 * __this, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager_Add_m2932834222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Name_t658191338 * G_B2_0 = NULL;
	Name_t658191338 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NameManager_t1767112997_il2cpp_TypeInfo_var);
		NameTable_t1897568201 * L_0 = ((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->get_s_knownNames_1();
		String_t* L_1 = ___key0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		Name_t658191338 * L_3 = NameTable_Lookup_m2130697690(L_0, L_1, L_2, /*hidden argument*/NULL);
		Name_t658191338 * L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001d;
		}
	}
	{
		NameTable_t1897568201 * L_5 = __this->get__names_2();
		String_t* L_6 = ___key0;
		int32_t L_7 = ___length1;
		NullCheck(L_5);
		Name_t658191338 * L_8 = NameTable_Add_m2509265472(L_5, L_6, L_7, /*hidden argument*/NULL);
		G_B2_0 = L_8;
	}

IL_001d:
	{
		return G_B2_0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::Lookup(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_Lookup_m2555217768 (NameManager_t1767112997 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager_Lookup_m2555217768_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Name_t658191338 * G_B4_0 = NULL;
	Name_t658191338 * G_B3_0 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		Exception_t * L_1 = Error_InternalCompilerError_m572151956(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NameManager_Lookup_m2555217768_RuntimeMethod_var);
	}

IL_0009:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NameManager_t1767112997_il2cpp_TypeInfo_var);
		NameTable_t1897568201 * L_2 = ((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->get_s_knownNames_1();
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		Name_t658191338 * L_4 = NameTable_Lookup_m2347088846(L_2, L_3, /*hidden argument*/NULL);
		Name_t658191338 * L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_0024;
		}
	}
	{
		NameTable_t1897568201 * L_6 = __this->get__names_2();
		String_t* L_7 = ___key0;
		NullCheck(L_6);
		Name_t658191338 * L_8 = NameTable_Lookup_m2347088846(L_6, L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
	}

IL_0024:
	{
		return G_B4_0;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::GetPredefinedName(Microsoft.CSharp.RuntimeBinder.Syntax.PredefinedName)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameManager_GetPredefinedName_m2121682198 (RuntimeObject * __this /* static, unused */, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager_GetPredefinedName_m2121682198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NameManager_t1767112997_il2cpp_TypeInfo_var);
		NameU5BU5D_t1359183151* L_0 = ((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->get_s_predefinedNames_0();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Name_t658191338 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NameManager__ctor_m3561128949 (NameManager_t1767112997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager__ctor_m3561128949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameTable_t1897568201 * L_0 = (NameTable_t1897568201 *)il2cpp_codegen_object_new(NameTable_t1897568201_il2cpp_TypeInfo_var);
		NameTable__ctor_m1499832512(L_0, /*hidden argument*/NULL);
		__this->set__names_2(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void NameManager__cctor_m3652871016 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameManager__cctor_m3652871016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NameU5BU5D_t1359183151* L_0 = (NameU5BU5D_t1359183151*)SZArrayNew(NameU5BU5D_t1359183151_il2cpp_TypeInfo_var, (uint32_t)((int32_t)121));
		NameU5BU5D_t1359183151* L_1 = L_0;
		Name_t658191338 * L_2 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_2, _stringLiteral1221375020, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Name_t658191338 *)L_2);
		NameU5BU5D_t1359183151* L_3 = L_1;
		Name_t658191338 * L_4 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_4, _stringLiteral362524596, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Name_t658191338 *)L_4);
		NameU5BU5D_t1359183151* L_5 = L_3;
		Name_t658191338 * L_6 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_6, _stringLiteral3452012868, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Name_t658191338 *)L_6);
		NameU5BU5D_t1359183151* L_7 = L_5;
		Name_t658191338 * L_8 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_8, _stringLiteral3452614534, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Name_t658191338 *)L_8);
		NameU5BU5D_t1359183151* L_9 = L_7;
		Name_t658191338 * L_10 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_10, _stringLiteral3450910609, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Name_t658191338 *)L_10);
		NameU5BU5D_t1359183151* L_11 = L_9;
		Name_t658191338 * L_12 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_12, _stringLiteral3452614525, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Name_t658191338 *)L_12);
		NameU5BU5D_t1359183151* L_13 = L_11;
		Name_t658191338 * L_14 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_14, _stringLiteral3452614522, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Name_t658191338 *)L_14);
		NameU5BU5D_t1359183151* L_15 = L_13;
		Name_t658191338 * L_16 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_16, _stringLiteral2530921766, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Name_t658191338 *)L_16);
		NameU5BU5D_t1359183151* L_17 = L_15;
		Name_t658191338 * L_18 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_18, _stringLiteral2530921763, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Name_t658191338 *)L_18);
		NameU5BU5D_t1359183151* L_19 = L_17;
		Name_t658191338 * L_20 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_20, _stringLiteral2530921764, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Name_t658191338 *)L_20);
		NameU5BU5D_t1359183151* L_21 = L_19;
		Name_t658191338 * L_22 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_22, _stringLiteral2463878438, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Name_t658191338 *)L_22);
		NameU5BU5D_t1359183151* L_23 = L_21;
		Name_t658191338 * L_24 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_24, _stringLiteral2463878435, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Name_t658191338 *)L_24);
		NameU5BU5D_t1359183151* L_25 = L_23;
		Name_t658191338 * L_26 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_26, _stringLiteral2463878436, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Name_t658191338 *)L_26);
		NameU5BU5D_t1359183151* L_27 = L_25;
		Name_t658191338 * L_28 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_28, _stringLiteral2401610308, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Name_t658191338 *)L_28);
		NameU5BU5D_t1359183151* L_29 = L_27;
		Name_t658191338 * L_30 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_30, _stringLiteral1212501634, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Name_t658191338 *)L_30);
		NameU5BU5D_t1359183151* L_31 = L_29;
		Name_t658191338 * L_32 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_32, _stringLiteral1949155704, /*hidden argument*/NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Name_t658191338 *)L_32);
		NameU5BU5D_t1359183151* L_33 = L_31;
		Name_t658191338 * L_34 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_34, _stringLiteral167031539, /*hidden argument*/NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Name_t658191338 *)L_34);
		NameU5BU5D_t1359183151* L_35 = L_33;
		Name_t658191338 * L_36 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_36, _stringLiteral2449292300, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Name_t658191338 *)L_36);
		NameU5BU5D_t1359183151* L_37 = L_35;
		Name_t658191338 * L_38 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_38, _stringLiteral13687727, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Name_t658191338 *)L_38);
		NameU5BU5D_t1359183151* L_39 = L_37;
		Name_t658191338 * L_40 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_40, _stringLiteral2655463595, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Name_t658191338 *)L_40);
		NameU5BU5D_t1359183151* L_41 = L_39;
		Name_t658191338 * L_42 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_42, _stringLiteral3306367446, /*hidden argument*/NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Name_t658191338 *)L_42);
		NameU5BU5D_t1359183151* L_43 = L_41;
		Name_t658191338 * L_44 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_44, _stringLiteral4079233801, /*hidden argument*/NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (Name_t658191338 *)L_44);
		NameU5BU5D_t1359183151* L_45 = L_43;
		Name_t658191338 * L_46 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_46, _stringLiteral831415459, /*hidden argument*/NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Name_t658191338 *)L_46);
		NameU5BU5D_t1359183151* L_47 = L_45;
		Name_t658191338 * L_48 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_48, _stringLiteral1818253423, /*hidden argument*/NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Name_t658191338 *)L_48);
		NameU5BU5D_t1359183151* L_49 = L_47;
		Name_t658191338 * L_50 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_50, _stringLiteral2022012807, /*hidden argument*/NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (Name_t658191338 *)L_50);
		NameU5BU5D_t1359183151* L_51 = L_49;
		Name_t658191338 * L_52 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_52, _stringLiteral2040559864, /*hidden argument*/NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (Name_t658191338 *)L_52);
		NameU5BU5D_t1359183151* L_53 = L_51;
		Name_t658191338 * L_54 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_54, _stringLiteral964622056, /*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (Name_t658191338 *)L_54);
		NameU5BU5D_t1359183151* L_55 = L_53;
		Name_t658191338 * L_56 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_56, _stringLiteral3897952179, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (Name_t658191338 *)L_56);
		NameU5BU5D_t1359183151* L_57 = L_55;
		Name_t658191338 * L_58 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_58, _stringLiteral4198891390, /*hidden argument*/NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (Name_t658191338 *)L_58);
		NameU5BU5D_t1359183151* L_59 = L_57;
		Name_t658191338 * L_60 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_60, _stringLiteral946927187, /*hidden argument*/NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (Name_t658191338 *)L_60);
		NameU5BU5D_t1359183151* L_61 = L_59;
		Name_t658191338 * L_62 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_62, _stringLiteral152203953, /*hidden argument*/NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (Name_t658191338 *)L_62);
		NameU5BU5D_t1359183151* L_63 = L_61;
		Name_t658191338 * L_64 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_64, _stringLiteral1905736822, /*hidden argument*/NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (Name_t658191338 *)L_64);
		NameU5BU5D_t1359183151* L_65 = L_63;
		Name_t658191338 * L_66 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_66, _stringLiteral1357986273, /*hidden argument*/NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (Name_t658191338 *)L_66);
		NameU5BU5D_t1359183151* L_67 = L_65;
		Name_t658191338 * L_68 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_68, _stringLiteral2260015710, /*hidden argument*/NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (Name_t658191338 *)L_68);
		NameU5BU5D_t1359183151* L_69 = L_67;
		Name_t658191338 * L_70 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_70, _stringLiteral967860007, /*hidden argument*/NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_70);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (Name_t658191338 *)L_70);
		NameU5BU5D_t1359183151* L_71 = L_69;
		Name_t658191338 * L_72 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_72, _stringLiteral1600105539, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (Name_t658191338 *)L_72);
		NameU5BU5D_t1359183151* L_73 = L_71;
		Name_t658191338 * L_74 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_74, _stringLiteral240249401, /*hidden argument*/NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (Name_t658191338 *)L_74);
		NameU5BU5D_t1359183151* L_75 = L_73;
		Name_t658191338 * L_76 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_76, _stringLiteral1669731555, /*hidden argument*/NULL);
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, L_76);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (Name_t658191338 *)L_76);
		NameU5BU5D_t1359183151* L_77 = L_75;
		Name_t658191338 * L_78 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_78, _stringLiteral3482834024, /*hidden argument*/NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (Name_t658191338 *)L_78);
		NameU5BU5D_t1359183151* L_79 = L_77;
		Name_t658191338 * L_80 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_80, _stringLiteral2993467114, /*hidden argument*/NULL);
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (Name_t658191338 *)L_80);
		NameU5BU5D_t1359183151* L_81 = L_79;
		Name_t658191338 * L_82 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_82, _stringLiteral3119448475, /*hidden argument*/NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_82);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (Name_t658191338 *)L_82);
		NameU5BU5D_t1359183151* L_83 = L_81;
		Name_t658191338 * L_84 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_84, _stringLiteral2234161082, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_84);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (Name_t658191338 *)L_84);
		NameU5BU5D_t1359183151* L_85 = L_83;
		Name_t658191338 * L_86 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_86, _stringLiteral1065866263, /*hidden argument*/NULL);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_86);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (Name_t658191338 *)L_86);
		NameU5BU5D_t1359183151* L_87 = L_85;
		Name_t658191338 * L_88 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_88, _stringLiteral2038133541, /*hidden argument*/NULL);
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_88);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (Name_t658191338 *)L_88);
		NameU5BU5D_t1359183151* L_89 = L_87;
		Name_t658191338 * L_90 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_90, _stringLiteral3133858467, /*hidden argument*/NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (Name_t658191338 *)L_90);
		NameU5BU5D_t1359183151* L_91 = L_89;
		Name_t658191338 * L_92 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_92, _stringLiteral3647647696, /*hidden argument*/NULL);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_92);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (Name_t658191338 *)L_92);
		NameU5BU5D_t1359183151* L_93 = L_91;
		Name_t658191338 * L_94 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_94, _stringLiteral1958770049, /*hidden argument*/NULL);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (Name_t658191338 *)L_94);
		NameU5BU5D_t1359183151* L_95 = L_93;
		Name_t658191338 * L_96 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_96, _stringLiteral1980976520, /*hidden argument*/NULL);
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, L_96);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (Name_t658191338 *)L_96);
		NameU5BU5D_t1359183151* L_97 = L_95;
		Name_t658191338 * L_98 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_98, _stringLiteral3265744085, /*hidden argument*/NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_98);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (Name_t658191338 *)L_98);
		NameU5BU5D_t1359183151* L_99 = L_97;
		Name_t658191338 * L_100 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_100, _stringLiteral2834630198, /*hidden argument*/NULL);
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_100);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (Name_t658191338 *)L_100);
		NameU5BU5D_t1359183151* L_101 = L_99;
		Name_t658191338 * L_102 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_102, _stringLiteral1943245113, /*hidden argument*/NULL);
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (Name_t658191338 *)L_102);
		NameU5BU5D_t1359183151* L_103 = L_101;
		Name_t658191338 * L_104 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_104, _stringLiteral3395178267, /*hidden argument*/NULL);
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, L_104);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (Name_t658191338 *)L_104);
		NameU5BU5D_t1359183151* L_105 = L_103;
		Name_t658191338 * L_106 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_106, _stringLiteral1428058533, /*hidden argument*/NULL);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_106);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (Name_t658191338 *)L_106);
		NameU5BU5D_t1359183151* L_107 = L_105;
		Name_t658191338 * L_108 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_108, _stringLiteral3591958911, /*hidden argument*/NULL);
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, L_108);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (Name_t658191338 *)L_108);
		NameU5BU5D_t1359183151* L_109 = L_107;
		Name_t658191338 * L_110 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_110, _stringLiteral226364123, /*hidden argument*/NULL);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_110);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (Name_t658191338 *)L_110);
		NameU5BU5D_t1359183151* L_111 = L_109;
		Name_t658191338 * L_112 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_112, _stringLiteral3493619321, /*hidden argument*/NULL);
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, L_112);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (Name_t658191338 *)L_112);
		NameU5BU5D_t1359183151* L_113 = L_111;
		Name_t658191338 * L_114 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_114, _stringLiteral3129076673, /*hidden argument*/NULL);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_114);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (Name_t658191338 *)L_114);
		NameU5BU5D_t1359183151* L_115 = L_113;
		Name_t658191338 * L_116 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_116, _stringLiteral1624027964, /*hidden argument*/NULL);
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, L_116);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (Name_t658191338 *)L_116);
		NameU5BU5D_t1359183151* L_117 = L_115;
		Name_t658191338 * L_118 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_118, _stringLiteral3452614545, /*hidden argument*/NULL);
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, L_118);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (Name_t658191338 *)L_118);
		NameU5BU5D_t1359183151* L_119 = L_117;
		Name_t658191338 * L_120 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_120, _stringLiteral1911909880, /*hidden argument*/NULL);
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_120);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (Name_t658191338 *)L_120);
		NameU5BU5D_t1359183151* L_121 = L_119;
		Name_t658191338 * L_122 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_122, _stringLiteral1596053975, /*hidden argument*/NULL);
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, L_122);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (Name_t658191338 *)L_122);
		NameU5BU5D_t1359183151* L_123 = L_121;
		Name_t658191338 * L_124 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_124, _stringLiteral3365149210, /*hidden argument*/NULL);
		NullCheck(L_123);
		ArrayElementTypeCheck (L_123, L_124);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (Name_t658191338 *)L_124);
		NameU5BU5D_t1359183151* L_125 = L_123;
		Name_t658191338 * L_126 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_126, _stringLiteral370620675, /*hidden argument*/NULL);
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, L_126);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (Name_t658191338 *)L_126);
		NameU5BU5D_t1359183151* L_127 = L_125;
		Name_t658191338 * L_128 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_128, _stringLiteral1608512694, /*hidden argument*/NULL);
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, L_128);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (Name_t658191338 *)L_128);
		NameU5BU5D_t1359183151* L_129 = L_127;
		Name_t658191338 * L_130 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_130, _stringLiteral3817161931, /*hidden argument*/NULL);
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, L_130);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (Name_t658191338 *)L_130);
		NameU5BU5D_t1359183151* L_131 = L_129;
		Name_t658191338 * L_132 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_132, _stringLiteral1922147846, /*hidden argument*/NULL);
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, L_132);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (Name_t658191338 *)L_132);
		NameU5BU5D_t1359183151* L_133 = L_131;
		Name_t658191338 * L_134 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_134, _stringLiteral3554584786, /*hidden argument*/NULL);
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, L_134);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (Name_t658191338 *)L_134);
		NameU5BU5D_t1359183151* L_135 = L_133;
		Name_t658191338 * L_136 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_136, _stringLiteral3851094587, /*hidden argument*/NULL);
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, L_136);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (Name_t658191338 *)L_136);
		NameU5BU5D_t1359183151* L_137 = L_135;
		Name_t658191338 * L_138 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_138, _stringLiteral3716885418, /*hidden argument*/NULL);
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_138);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (Name_t658191338 *)L_138);
		NameU5BU5D_t1359183151* L_139 = L_137;
		Name_t658191338 * L_140 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_140, _stringLiteral2118277584, /*hidden argument*/NULL);
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, L_140);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (Name_t658191338 *)L_140);
		NameU5BU5D_t1359183151* L_141 = L_139;
		Name_t658191338 * L_142 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_142, _stringLiteral3657586736, /*hidden argument*/NULL);
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, L_142);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (Name_t658191338 *)L_142);
		NameU5BU5D_t1359183151* L_143 = L_141;
		Name_t658191338 * L_144 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_144, _stringLiteral2302702733, /*hidden argument*/NULL);
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, L_144);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (Name_t658191338 *)L_144);
		NameU5BU5D_t1359183151* L_145 = L_143;
		Name_t658191338 * L_146 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_146, _stringLiteral3266137301, /*hidden argument*/NULL);
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, L_146);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (Name_t658191338 *)L_146);
		NameU5BU5D_t1359183151* L_147 = L_145;
		Name_t658191338 * L_148 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_148, _stringLiteral3455629281, /*hidden argument*/NULL);
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, L_148);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (Name_t658191338 *)L_148);
		NameU5BU5D_t1359183151* L_149 = L_147;
		Name_t658191338 * L_150 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_150, _stringLiteral397788344, /*hidden argument*/NULL);
		NullCheck(L_149);
		ArrayElementTypeCheck (L_149, L_150);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (Name_t658191338 *)L_150);
		NameU5BU5D_t1359183151* L_151 = L_149;
		Name_t658191338 * L_152 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_152, _stringLiteral1561152289, /*hidden argument*/NULL);
		NullCheck(L_151);
		ArrayElementTypeCheck (L_151, L_152);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (Name_t658191338 *)L_152);
		NameU5BU5D_t1359183151* L_153 = L_151;
		Name_t658191338 * L_154 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_154, _stringLiteral702478112, /*hidden argument*/NULL);
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_154);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (Name_t658191338 *)L_154);
		NameU5BU5D_t1359183151* L_155 = L_153;
		Name_t658191338 * L_156 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_156, _stringLiteral1706695038, /*hidden argument*/NULL);
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (Name_t658191338 *)L_156);
		NameU5BU5D_t1359183151* L_157 = L_155;
		Name_t658191338 * L_158 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_158, _stringLiteral1706683095, /*hidden argument*/NULL);
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, L_158);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (Name_t658191338 *)L_158);
		NameU5BU5D_t1359183151* L_159 = L_157;
		Name_t658191338 * L_160 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_160, _stringLiteral3606852686, /*hidden argument*/NULL);
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_160);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (Name_t658191338 *)L_160);
		NameU5BU5D_t1359183151* L_161 = L_159;
		Name_t658191338 * L_162 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_162, _stringLiteral2937509622, /*hidden argument*/NULL);
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, L_162);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (Name_t658191338 *)L_162);
		NameU5BU5D_t1359183151* L_163 = L_161;
		Name_t658191338 * L_164 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_164, _stringLiteral3744565719, /*hidden argument*/NULL);
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, L_164);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (Name_t658191338 *)L_164);
		NameU5BU5D_t1359183151* L_165 = L_163;
		Name_t658191338 * L_166 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_166, _stringLiteral3845928853, /*hidden argument*/NULL);
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, L_166);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (Name_t658191338 *)L_166);
		NameU5BU5D_t1359183151* L_167 = L_165;
		Name_t658191338 * L_168 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_168, _stringLiteral3259370764, /*hidden argument*/NULL);
		NullCheck(L_167);
		ArrayElementTypeCheck (L_167, L_168);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (Name_t658191338 *)L_168);
		NameU5BU5D_t1359183151* L_169 = L_167;
		Name_t658191338 * L_170 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_170, _stringLiteral1279271071, /*hidden argument*/NULL);
		NullCheck(L_169);
		ArrayElementTypeCheck (L_169, L_170);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (Name_t658191338 *)L_170);
		NameU5BU5D_t1359183151* L_171 = L_169;
		Name_t658191338 * L_172 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_172, _stringLiteral335526127, /*hidden argument*/NULL);
		NullCheck(L_171);
		ArrayElementTypeCheck (L_171, L_172);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (Name_t658191338 *)L_172);
		NameU5BU5D_t1359183151* L_173 = L_171;
		Name_t658191338 * L_174 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_174, _stringLiteral3962391455, /*hidden argument*/NULL);
		NullCheck(L_173);
		ArrayElementTypeCheck (L_173, L_174);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (Name_t658191338 *)L_174);
		NameU5BU5D_t1359183151* L_175 = L_173;
		Name_t658191338 * L_176 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_176, _stringLiteral1534802076, /*hidden argument*/NULL);
		NullCheck(L_175);
		ArrayElementTypeCheck (L_175, L_176);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (Name_t658191338 *)L_176);
		NameU5BU5D_t1359183151* L_177 = L_175;
		Name_t658191338 * L_178 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_178, _stringLiteral3110370589, /*hidden argument*/NULL);
		NullCheck(L_177);
		ArrayElementTypeCheck (L_177, L_178);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (Name_t658191338 *)L_178);
		NameU5BU5D_t1359183151* L_179 = L_177;
		Name_t658191338 * L_180 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_180, _stringLiteral1201842171, /*hidden argument*/NULL);
		NullCheck(L_179);
		ArrayElementTypeCheck (L_179, L_180);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (Name_t658191338 *)L_180);
		NameU5BU5D_t1359183151* L_181 = L_179;
		Name_t658191338 * L_182 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_182, _stringLiteral2149933305, /*hidden argument*/NULL);
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, L_182);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (Name_t658191338 *)L_182);
		NameU5BU5D_t1359183151* L_183 = L_181;
		Name_t658191338 * L_184 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_184, _stringLiteral1159972017, /*hidden argument*/NULL);
		NullCheck(L_183);
		ArrayElementTypeCheck (L_183, L_184);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (Name_t658191338 *)L_184);
		NameU5BU5D_t1359183151* L_185 = L_183;
		Name_t658191338 * L_186 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_186, _stringLiteral359718035, /*hidden argument*/NULL);
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, L_186);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (Name_t658191338 *)L_186);
		NameU5BU5D_t1359183151* L_187 = L_185;
		Name_t658191338 * L_188 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_188, _stringLiteral662109, /*hidden argument*/NULL);
		NullCheck(L_187);
		ArrayElementTypeCheck (L_187, L_188);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (Name_t658191338 *)L_188);
		NameU5BU5D_t1359183151* L_189 = L_187;
		Name_t658191338 * L_190 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_190, _stringLiteral1150379851, /*hidden argument*/NULL);
		NullCheck(L_189);
		ArrayElementTypeCheck (L_189, L_190);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (Name_t658191338 *)L_190);
		NameU5BU5D_t1359183151* L_191 = L_189;
		Name_t658191338 * L_192 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_192, _stringLiteral3208316269, /*hidden argument*/NULL);
		NullCheck(L_191);
		ArrayElementTypeCheck (L_191, L_192);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (Name_t658191338 *)L_192);
		NameU5BU5D_t1359183151* L_193 = L_191;
		Name_t658191338 * L_194 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_194, _stringLiteral2553611048, /*hidden argument*/NULL);
		NullCheck(L_193);
		ArrayElementTypeCheck (L_193, L_194);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (Name_t658191338 *)L_194);
		NameU5BU5D_t1359183151* L_195 = L_193;
		Name_t658191338 * L_196 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_196, _stringLiteral2102554591, /*hidden argument*/NULL);
		NullCheck(L_195);
		ArrayElementTypeCheck (L_195, L_196);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (Name_t658191338 *)L_196);
		NameU5BU5D_t1359183151* L_197 = L_195;
		Name_t658191338 * L_198 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_198, _stringLiteral4193572954, /*hidden argument*/NULL);
		NullCheck(L_197);
		ArrayElementTypeCheck (L_197, L_198);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (Name_t658191338 *)L_198);
		NameU5BU5D_t1359183151* L_199 = L_197;
		Name_t658191338 * L_200 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_200, _stringLiteral2683055194, /*hidden argument*/NULL);
		NullCheck(L_199);
		ArrayElementTypeCheck (L_199, L_200);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (Name_t658191338 *)L_200);
		NameU5BU5D_t1359183151* L_201 = L_199;
		Name_t658191338 * L_202 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_202, _stringLiteral543608943, /*hidden argument*/NULL);
		NullCheck(L_201);
		ArrayElementTypeCheck (L_201, L_202);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (Name_t658191338 *)L_202);
		NameU5BU5D_t1359183151* L_203 = L_201;
		Name_t658191338 * L_204 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_204, _stringLiteral3113391153, /*hidden argument*/NULL);
		NullCheck(L_203);
		ArrayElementTypeCheck (L_203, L_204);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (Name_t658191338 *)L_204);
		NameU5BU5D_t1359183151* L_205 = L_203;
		Name_t658191338 * L_206 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_206, _stringLiteral3450869561, /*hidden argument*/NULL);
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_206);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (Name_t658191338 *)L_206);
		NameU5BU5D_t1359183151* L_207 = L_205;
		Name_t658191338 * L_208 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_208, _stringLiteral4002445229, /*hidden argument*/NULL);
		NullCheck(L_207);
		ArrayElementTypeCheck (L_207, L_208);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (Name_t658191338 *)L_208);
		NameU5BU5D_t1359183151* L_209 = L_207;
		Name_t658191338 * L_210 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_210, _stringLiteral3875954633, /*hidden argument*/NULL);
		NullCheck(L_209);
		ArrayElementTypeCheck (L_209, L_210);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (Name_t658191338 *)L_210);
		NameU5BU5D_t1359183151* L_211 = L_209;
		Name_t658191338 * L_212 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_212, _stringLiteral1202628576, /*hidden argument*/NULL);
		NullCheck(L_211);
		ArrayElementTypeCheck (L_211, L_212);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (Name_t658191338 *)L_212);
		NameU5BU5D_t1359183151* L_213 = L_211;
		Name_t658191338 * L_214 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_214, _stringLiteral2838662761, /*hidden argument*/NULL);
		NullCheck(L_213);
		ArrayElementTypeCheck (L_213, L_214);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (Name_t658191338 *)L_214);
		NameU5BU5D_t1359183151* L_215 = L_213;
		Name_t658191338 * L_216 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_216, _stringLiteral1178749465, /*hidden argument*/NULL);
		NullCheck(L_215);
		ArrayElementTypeCheck (L_215, L_216);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (Name_t658191338 *)L_216);
		NameU5BU5D_t1359183151* L_217 = L_215;
		Name_t658191338 * L_218 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_218, _stringLiteral3637139173, /*hidden argument*/NULL);
		NullCheck(L_217);
		ArrayElementTypeCheck (L_217, L_218);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (Name_t658191338 *)L_218);
		NameU5BU5D_t1359183151* L_219 = L_217;
		Name_t658191338 * L_220 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_220, _stringLiteral3596048705, /*hidden argument*/NULL);
		NullCheck(L_219);
		ArrayElementTypeCheck (L_219, L_220);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (Name_t658191338 *)L_220);
		NameU5BU5D_t1359183151* L_221 = L_219;
		Name_t658191338 * L_222 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_222, _stringLiteral3751140108, /*hidden argument*/NULL);
		NullCheck(L_221);
		ArrayElementTypeCheck (L_221, L_222);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (Name_t658191338 *)L_222);
		NameU5BU5D_t1359183151* L_223 = L_221;
		Name_t658191338 * L_224 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_224, _stringLiteral2289034063, /*hidden argument*/NULL);
		NullCheck(L_223);
		ArrayElementTypeCheck (L_223, L_224);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (Name_t658191338 *)L_224);
		NameU5BU5D_t1359183151* L_225 = L_223;
		Name_t658191338 * L_226 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_226, _stringLiteral76350221, /*hidden argument*/NULL);
		NullCheck(L_225);
		ArrayElementTypeCheck (L_225, L_226);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (Name_t658191338 *)L_226);
		NameU5BU5D_t1359183151* L_227 = L_225;
		Name_t658191338 * L_228 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_228, _stringLiteral2724702165, /*hidden argument*/NULL);
		NullCheck(L_227);
		ArrayElementTypeCheck (L_227, L_228);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (Name_t658191338 *)L_228);
		NameU5BU5D_t1359183151* L_229 = L_227;
		Name_t658191338 * L_230 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_230, _stringLiteral3455563711, /*hidden argument*/NULL);
		NullCheck(L_229);
		ArrayElementTypeCheck (L_229, L_230);
		(L_229)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (Name_t658191338 *)L_230);
		NameU5BU5D_t1359183151* L_231 = L_229;
		Name_t658191338 * L_232 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_232, _stringLiteral4158218461, /*hidden argument*/NULL);
		NullCheck(L_231);
		ArrayElementTypeCheck (L_231, L_232);
		(L_231)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (Name_t658191338 *)L_232);
		NameU5BU5D_t1359183151* L_233 = L_231;
		Name_t658191338 * L_234 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_234, _stringLiteral3455563719, /*hidden argument*/NULL);
		NullCheck(L_233);
		ArrayElementTypeCheck (L_233, L_234);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (Name_t658191338 *)L_234);
		NameU5BU5D_t1359183151* L_235 = L_233;
		Name_t658191338 * L_236 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_236, _stringLiteral2101930777, /*hidden argument*/NULL);
		NullCheck(L_235);
		ArrayElementTypeCheck (L_235, L_236);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (Name_t658191338 *)L_236);
		NameU5BU5D_t1359183151* L_237 = L_235;
		Name_t658191338 * L_238 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_238, _stringLiteral2097807219, /*hidden argument*/NULL);
		NullCheck(L_237);
		ArrayElementTypeCheck (L_237, L_238);
		(L_237)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (Name_t658191338 *)L_238);
		NameU5BU5D_t1359183151* L_239 = L_237;
		Name_t658191338 * L_240 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_240, _stringLiteral75909655, /*hidden argument*/NULL);
		NullCheck(L_239);
		ArrayElementTypeCheck (L_239, L_240);
		(L_239)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (Name_t658191338 *)L_240);
		NameU5BU5D_t1359183151* L_241 = L_239;
		Name_t658191338 * L_242 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_242, _stringLiteral757602046, /*hidden argument*/NULL);
		NullCheck(L_241);
		ArrayElementTypeCheck (L_241, L_242);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (Name_t658191338 *)L_242);
		((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->set_s_predefinedNames_0(L_241);
		NameTable_t1897568201 * L_243 = NameManager_GetKnownNames_m3242543041(NULL /*static, unused*/, /*hidden argument*/NULL);
		((NameManager_t1767112997_StaticFields*)il2cpp_codegen_static_fields_for(NameManager_t1767112997_il2cpp_TypeInfo_var))->set_s_knownNames_1(L_243);
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
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NameTable__ctor_m1499832512 (NameTable_t1897568201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameTable__ctor_m1499832512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set__mask_2(((int32_t)31));
		int32_t L_0 = __this->get__mask_2();
		EntryU5BU5D_t3854683283* L_1 = (EntryU5BU5D_t3854683283*)SZArrayNew(EntryU5BU5D_t3854683283_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		__this->set__entries_0(L_1);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Add(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Add_m25256284 (NameTable_t1897568201 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameTable_Add_m25256284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t2595452246 * V_1 = NULL;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = NameTable_ComputeHashCode_m1803052549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		EntryU5BU5D_t3854683283* L_2 = __this->get__entries_0();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get__mask_2();
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)((int32_t)L_3&(int32_t)L_4));
		Entry_t2595452246 * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0043;
	}

IL_0019:
	{
		Entry_t2595452246 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_HashCode_1();
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003c;
		}
	}
	{
		Entry_t2595452246 * L_10 = V_1;
		NullCheck(L_10);
		Name_t658191338 * L_11 = L_10->get_Name_0();
		NullCheck(L_11);
		String_t* L_12 = Name_get_Text_m2490619376(L_11, /*hidden argument*/NULL);
		String_t* L_13 = ___key0;
		NullCheck(L_12);
		bool L_14 = String_Equals_m2270643605(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_003c;
		}
	}
	{
		Entry_t2595452246 * L_15 = V_1;
		NullCheck(L_15);
		Name_t658191338 * L_16 = L_15->get_Name_0();
		return L_16;
	}

IL_003c:
	{
		Entry_t2595452246 * L_17 = V_1;
		NullCheck(L_17);
		Entry_t2595452246 * L_18 = L_17->get_Next_2();
		V_1 = L_18;
	}

IL_0043:
	{
		Entry_t2595452246 * L_19 = V_1;
		if (L_19)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_20 = ___key0;
		Name_t658191338 * L_21 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_21, L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		Name_t658191338 * L_23 = NameTable_AddEntry_m881532682(__this, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Add(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Add_m2509265472 (NameTable_t1897568201 * __this, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameTable_Add_m2509265472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t2595452246 * V_1 = NULL;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___length1;
		int32_t L_2 = NameTable_ComputeHashCode_m3709987485(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		EntryU5BU5D_t3854683283* L_3 = __this->get__entries_0();
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get__mask_2();
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)((int32_t)L_4&(int32_t)L_5));
		Entry_t2595452246 * L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0045;
	}

IL_001a:
	{
		Entry_t2595452246 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_HashCode_1();
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		Entry_t2595452246 * L_11 = V_1;
		NullCheck(L_11);
		Name_t658191338 * L_12 = L_11->get_Name_0();
		NullCheck(L_12);
		String_t* L_13 = Name_get_Text_m2490619376(L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___key0;
		int32_t L_15 = ___length1;
		bool L_16 = NameTable_Equals_m496338380(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_003e;
		}
	}
	{
		Entry_t2595452246 * L_17 = V_1;
		NullCheck(L_17);
		Name_t658191338 * L_18 = L_17->get_Name_0();
		return L_18;
	}

IL_003e:
	{
		Entry_t2595452246 * L_19 = V_1;
		NullCheck(L_19);
		Entry_t2595452246 * L_20 = L_19->get_Next_2();
		V_1 = L_20;
	}

IL_0045:
	{
		Entry_t2595452246 * L_21 = V_1;
		if (L_21)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_22 = ___key0;
		int32_t L_23 = ___length1;
		NullCheck(L_22);
		String_t* L_24 = String_Substring_m1610150815(L_22, 0, L_23, /*hidden argument*/NULL);
		Name_t658191338 * L_25 = (Name_t658191338 *)il2cpp_codegen_object_new(Name_t658191338_il2cpp_TypeInfo_var);
		Name__ctor_m3223606436(L_25, L_24, /*hidden argument*/NULL);
		int32_t L_26 = V_0;
		Name_t658191338 * L_27 = NameTable_AddEntry_m881532682(__this, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Add(Microsoft.CSharp.RuntimeBinder.Syntax.Name)
extern "C" IL2CPP_METHOD_ATTR void NameTable_Add_m1946126680 (NameTable_t1897568201 * __this, Name_t658191338 * ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Name_t658191338 * L_0 = ___name0;
		NullCheck(L_0);
		String_t* L_1 = Name_get_Text_m2490619376(L_0, /*hidden argument*/NULL);
		int32_t L_2 = NameTable_ComputeHashCode_m1803052549(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Name_t658191338 * L_3 = ___name0;
		int32_t L_4 = V_0;
		NameTable_AddEntry_m881532682(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Lookup(System.String)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Lookup_m2347088846 (NameTable_t1897568201 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Entry_t2595452246 * V_1 = NULL;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = NameTable_ComputeHashCode_m1803052549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		EntryU5BU5D_t3854683283* L_2 = __this->get__entries_0();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get__mask_2();
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)((int32_t)L_3&(int32_t)L_4));
		Entry_t2595452246 * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0043;
	}

IL_0019:
	{
		Entry_t2595452246 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_HashCode_1();
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003c;
		}
	}
	{
		Entry_t2595452246 * L_10 = V_1;
		NullCheck(L_10);
		Name_t658191338 * L_11 = L_10->get_Name_0();
		NullCheck(L_11);
		String_t* L_12 = Name_get_Text_m2490619376(L_11, /*hidden argument*/NULL);
		String_t* L_13 = ___key0;
		NullCheck(L_12);
		bool L_14 = String_Equals_m2270643605(L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_003c;
		}
	}
	{
		Entry_t2595452246 * L_15 = V_1;
		NullCheck(L_15);
		Name_t658191338 * L_16 = L_15->get_Name_0();
		return L_16;
	}

IL_003c:
	{
		Entry_t2595452246 * L_17 = V_1;
		NullCheck(L_17);
		Entry_t2595452246 * L_18 = L_17->get_Next_2();
		V_1 = L_18;
	}

IL_0043:
	{
		Entry_t2595452246 * L_19 = V_1;
		if (L_19)
		{
			goto IL_0019;
		}
	}
	{
		return (Name_t658191338 *)NULL;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Lookup(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_Lookup_m2130697690 (NameTable_t1897568201 * __this, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Entry_t2595452246 * V_1 = NULL;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___length1;
		int32_t L_2 = NameTable_ComputeHashCode_m3709987485(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		EntryU5BU5D_t3854683283* L_3 = __this->get__entries_0();
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get__mask_2();
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)((int32_t)L_4&(int32_t)L_5));
		Entry_t2595452246 * L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_0045;
	}

IL_001a:
	{
		Entry_t2595452246 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_HashCode_1();
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		Entry_t2595452246 * L_11 = V_1;
		NullCheck(L_11);
		Name_t658191338 * L_12 = L_11->get_Name_0();
		NullCheck(L_12);
		String_t* L_13 = Name_get_Text_m2490619376(L_12, /*hidden argument*/NULL);
		String_t* L_14 = ___key0;
		int32_t L_15 = ___length1;
		bool L_16 = NameTable_Equals_m496338380(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_003e;
		}
	}
	{
		Entry_t2595452246 * L_17 = V_1;
		NullCheck(L_17);
		Name_t658191338 * L_18 = L_17->get_Name_0();
		return L_18;
	}

IL_003e:
	{
		Entry_t2595452246 * L_19 = V_1;
		NullCheck(L_19);
		Entry_t2595452246 * L_20 = L_19->get_Next_2();
		V_1 = L_20;
	}

IL_0045:
	{
		Entry_t2595452246 * L_21 = V_1;
		if (L_21)
		{
			goto IL_001a;
		}
	}
	{
		return (Name_t658191338 *)NULL;
	}
}
// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::ComputeHashCode(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NameTable_ComputeHashCode_m1803052549 (RuntimeObject * __this /* static, unused */, String_t* ___key0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		String_t* L_4 = ___key0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m2986988803(L_4, L_5, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)7))^(int32_t)L_6))));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___key0;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m3847582255(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)((int32_t)L_16>>(int32_t)5))));
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::ComputeHashCode(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NameTable_ComputeHashCode_m3709987485 (RuntimeObject * __this /* static, unused */, String_t* ___key0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		String_t* L_3 = ___key0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)7))^(int32_t)L_5))));
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___length1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)((int32_t)L_10>>(int32_t)((int32_t)17)))));
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)11)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)((int32_t)L_14>>(int32_t)5))));
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Boolean Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Equals(System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NameTable_Equals_m496338380 (RuntimeObject * __this /* static, unused */, String_t* ___candidate0, String_t* ___key1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___candidate0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m3847582255(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___length2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000f:
	{
		String_t* L_3 = ___candidate0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___key1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m2986988803(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)L_8)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		String_t* L_11 = ___candidate0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}
}
// Microsoft.CSharp.RuntimeBinder.Syntax.Name Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::AddEntry(Microsoft.CSharp.RuntimeBinder.Syntax.Name,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Name_t658191338 * NameTable_AddEntry_m881532682 (NameTable_t1897568201 * __this, Name_t658191338 * ___name0, int32_t ___hashCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameTable_AddEntry_m881532682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t2595452246 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___hashCode1;
		int32_t L_1 = __this->get__mask_2();
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)L_1));
		Name_t658191338 * L_2 = ___name0;
		int32_t L_3 = ___hashCode1;
		EntryU5BU5D_t3854683283* L_4 = __this->get__entries_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Entry_t2595452246 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Entry_t2595452246 * L_8 = (Entry_t2595452246 *)il2cpp_codegen_object_new(Entry_t2595452246_il2cpp_TypeInfo_var);
		Entry__ctor_m47334438(L_8, L_2, L_3, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		EntryU5BU5D_t3854683283* L_9 = __this->get__entries_0();
		int32_t L_10 = V_0;
		Entry_t2595452246 * L_11 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Entry_t2595452246 *)L_11);
		int32_t L_12 = __this->get__count_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set__count_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get__mask_2();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0041;
		}
	}
	{
		NameTable_Grow_m1567448162(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		Entry_t2595452246 * L_16 = V_1;
		NullCheck(L_16);
		Name_t658191338 * L_17 = L_16->get_Name_0();
		return L_17;
	}
}
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable::Grow()
extern "C" IL2CPP_METHOD_ATTR void NameTable_Grow_m1567448162 (NameTable_t1897568201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NameTable_Grow_m1567448162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EntryU5BU5D_t3854683283* V_1 = NULL;
	EntryU5BU5D_t3854683283* V_2 = NULL;
	int32_t V_3 = 0;
	Entry_t2595452246 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get__mask_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2)), (int32_t)1));
		EntryU5BU5D_t3854683283* L_1 = __this->get__entries_0();
		V_1 = L_1;
		int32_t L_2 = V_0;
		EntryU5BU5D_t3854683283* L_3 = (EntryU5BU5D_t3854683283*)SZArrayNew(EntryU5BU5D_t3854683283_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		V_2 = L_3;
		V_3 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		EntryU5BU5D_t3854683283* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Entry_t2595452246 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		goto IL_004b;
	}

IL_0026:
	{
		Entry_t2595452246 * L_8 = V_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_HashCode_1();
		int32_t L_10 = V_0;
		V_5 = ((int32_t)((int32_t)L_9&(int32_t)L_10));
		Entry_t2595452246 * L_11 = V_4;
		NullCheck(L_11);
		Entry_t2595452246 * L_12 = L_11->get_Next_2();
		Entry_t2595452246 * L_13 = V_4;
		EntryU5BU5D_t3854683283* L_14 = V_2;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Entry_t2595452246 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		L_13->set_Next_2(L_17);
		EntryU5BU5D_t3854683283* L_18 = V_2;
		int32_t L_19 = V_5;
		Entry_t2595452246 * L_20 = V_4;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Entry_t2595452246 *)L_20);
		V_4 = L_12;
	}

IL_004b:
	{
		Entry_t2595452246 * L_21 = V_4;
		if (L_21)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_23 = V_3;
		EntryU5BU5D_t3854683283* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		EntryU5BU5D_t3854683283* L_25 = V_2;
		__this->set__entries_0(L_25);
		int32_t L_26 = V_0;
		__this->set__mask_2(L_26);
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
// System.Void Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry::.ctor(Microsoft.CSharp.RuntimeBinder.Syntax.Name,System.Int32,Microsoft.CSharp.RuntimeBinder.Syntax.NameTable/Entry)
extern "C" IL2CPP_METHOD_ATTR void Entry__ctor_m47334438 (Entry_t2595452246 * __this, Name_t658191338 * ___name0, int32_t ___hashCode1, Entry_t2595452246 * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Name_t658191338 * L_0 = ___name0;
		__this->set_Name_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_t2595452246 * L_2 = ___next2;
		__this->set_Next_2(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.CSharp.RuntimeBinder.Syntax.TokenFacts::GetText(Microsoft.CSharp.RuntimeBinder.Syntax.TokenKind)
extern "C" IL2CPP_METHOD_ATTR String_t* TokenFacts_GetText_m4064052485 (RuntimeObject * __this /* static, unused */, uint8_t ___kind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TokenFacts_GetText_m4064052485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___kind0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_00e7;
			}
			case 1:
			{
				goto IL_00ed;
			}
			case 2:
			{
				goto IL_00f3;
			}
			case 3:
			{
				goto IL_00f9;
			}
			case 4:
			{
				goto IL_00ff;
			}
			case 5:
			{
				goto IL_0105;
			}
			case 6:
			{
				goto IL_010b;
			}
			case 7:
			{
				goto IL_0111;
			}
			case 8:
			{
				goto IL_0117;
			}
			case 9:
			{
				goto IL_011d;
			}
			case 10:
			{
				goto IL_0123;
			}
			case 11:
			{
				goto IL_0129;
			}
			case 12:
			{
				goto IL_012f;
			}
			case 13:
			{
				goto IL_0135;
			}
			case 14:
			{
				goto IL_013b;
			}
			case 15:
			{
				goto IL_0141;
			}
			case 16:
			{
				goto IL_0147;
			}
			case 17:
			{
				goto IL_014d;
			}
			case 18:
			{
				goto IL_0153;
			}
			case 19:
			{
				goto IL_0159;
			}
			case 20:
			{
				goto IL_015f;
			}
			case 21:
			{
				goto IL_0165;
			}
			case 22:
			{
				goto IL_016b;
			}
			case 23:
			{
				goto IL_0171;
			}
			case 24:
			{
				goto IL_0177;
			}
			case 25:
			{
				goto IL_017d;
			}
			case 26:
			{
				goto IL_0183;
			}
			case 27:
			{
				goto IL_0189;
			}
			case 28:
			{
				goto IL_018f;
			}
			case 29:
			{
				goto IL_0195;
			}
			case 30:
			{
				goto IL_019b;
			}
			case 31:
			{
				goto IL_01a1;
			}
			case 32:
			{
				goto IL_01a7;
			}
			case 33:
			{
				goto IL_01ad;
			}
			case 34:
			{
				goto IL_01b3;
			}
			case 35:
			{
				goto IL_01b9;
			}
			case 36:
			{
				goto IL_01bf;
			}
			case 37:
			{
				goto IL_01c5;
			}
			case 38:
			{
				goto IL_01cb;
			}
			case 39:
			{
				goto IL_01d1;
			}
			case 40:
			{
				goto IL_01d7;
			}
			case 41:
			{
				goto IL_01dd;
			}
			case 42:
			{
				goto IL_01e3;
			}
			case 43:
			{
				goto IL_01e9;
			}
			case 44:
			{
				goto IL_01ef;
			}
			case 45:
			{
				goto IL_01f5;
			}
			case 46:
			{
				goto IL_01fb;
			}
			case 47:
			{
				goto IL_0201;
			}
			case 48:
			{
				goto IL_0207;
			}
			case 49:
			{
				goto IL_020d;
			}
			case 50:
			{
				goto IL_0213;
			}
			case 51:
			{
				goto IL_0219;
			}
			case 52:
			{
				goto IL_021f;
			}
			case 53:
			{
				goto IL_0225;
			}
			case 54:
			{
				goto IL_022b;
			}
		}
	}
	{
		goto IL_0231;
	}

IL_00e7:
	{
		return _stringLiteral3751140108;
	}

IL_00ed:
	{
		return _stringLiteral2289034063;
	}

IL_00f3:
	{
		return _stringLiteral76350221;
	}

IL_00f9:
	{
		return _stringLiteral2724702165;
	}

IL_00ff:
	{
		return _stringLiteral3455563711;
	}

IL_0105:
	{
		return _stringLiteral2838662761;
	}

IL_010b:
	{
		return _stringLiteral4158218461;
	}

IL_0111:
	{
		return _stringLiteral3637139173;
	}

IL_0117:
	{
		return _stringLiteral3875954633;
	}

IL_011d:
	{
		return _stringLiteral3596048705;
	}

IL_0123:
	{
		return _stringLiteral3455563719;
	}

IL_0129:
	{
		return _stringLiteral1202628576;
	}

IL_012f:
	{
		return _stringLiteral1178749465;
	}

IL_0135:
	{
		return _stringLiteral4002445229;
	}

IL_013b:
	{
		return _stringLiteral2101930777;
	}

IL_0141:
	{
		return _stringLiteral2097807219;
	}

IL_0147:
	{
		return _stringLiteral75909655;
	}

IL_014d:
	{
		return _stringLiteral3452614547;
	}

IL_0153:
	{
		return _stringLiteral3451762565;
	}

IL_0159:
	{
		return _stringLiteral3451762563;
	}

IL_015f:
	{
		return _stringLiteral3451762566;
	}

IL_0165:
	{
		return _stringLiteral3451762561;
	}

IL_016b:
	{
		return _stringLiteral3451762555;
	}

IL_0171:
	{
		return _stringLiteral3451762554;
	}

IL_0177:
	{
		return _stringLiteral3451762674;
	}

IL_017d:
	{
		return _stringLiteral3451762644;
	}

IL_0183:
	{
		return _stringLiteral3478190429;
	}

IL_0189:
	{
		return _stringLiteral3478059355;
	}

IL_018f:
	{
		return _stringLiteral3452614545;
	}

IL_0195:
	{
		return _stringLiteral3452614550;
	}

IL_019b:
	{
		return _stringLiteral3451959190;
	}

IL_01a1:
	{
		return _stringLiteral3456022484;
	}

IL_01a7:
	{
		return _stringLiteral3450124154;
	}

IL_01ad:
	{
		return _stringLiteral3452614612;
	}

IL_01b3:
	{
		return _stringLiteral3452614642;
	}

IL_01b9:
	{
		return _stringLiteral3452614522;
	}

IL_01bf:
	{
		return _stringLiteral3451762579;
	}

IL_01c5:
	{
		return _stringLiteral3451762559;
	}

IL_01cb:
	{
		return _stringLiteral3452614548;
	}

IL_01d1:
	{
		return _stringLiteral3451762580;
	}

IL_01d7:
	{
		return _stringLiteral3452614546;
	}

IL_01dd:
	{
		return _stringLiteral3451762578;
	}

IL_01e3:
	{
		return _stringLiteral3451828116;
	}

IL_01e9:
	{
		return _stringLiteral3451697042;
	}

IL_01ef:
	{
		return _stringLiteral3452614533;
	}

IL_01f5:
	{
		return _stringLiteral3452614531;
	}

IL_01fb:
	{
		return _stringLiteral3452614534;
	}

IL_0201:
	{
		return _stringLiteral3452614529;
	}

IL_0207:
	{
		return _stringLiteral3452614523;
	}

IL_020d:
	{
		return _stringLiteral3452614610;
	}

IL_0213:
	{
		return _stringLiteral3452614527;
	}

IL_0219:
	{
		return _stringLiteral3450845061;
	}

IL_021f:
	{
		return _stringLiteral3450713987;
	}

IL_0225:
	{
		return _stringLiteral3452614530;
	}

IL_022b:
	{
		return _stringLiteral3451631505;
	}

IL_0231:
	{
		Exception_t * L_1 = Error_InternalCompilerError_m572151956(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TokenFacts_GetText_m4064052485_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SR::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* SR_Format_m4261011655 (RuntimeObject * __this /* static, unused */, String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SR_Format_m4261011655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_0 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___resourceFormat0;
		RuntimeObject * L_2 = ___p11;
		String_t* L_3 = String_Format_m3179549879(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
