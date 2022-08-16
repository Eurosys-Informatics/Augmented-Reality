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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// MNAndroidAlert
struct MNAndroidAlert_t2444998409;
// System.Action`1<System.String>
struct Action_1_t2019918284;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.Text.StringBuilder
struct StringBuilder_t;
// MNP_PlatformSettings
struct MNP_PlatformSettings_t3087930686;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Object
struct Object_t631007953;
// MNAndroidNative
struct MNAndroidNative_t2982907439;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// MNFeaturePreview
struct MNFeaturePreview_t389008354;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// MNIOSAlert
struct MNIOSAlert_t2758643397;
// MNIOSNative
struct MNIOSNative_t1200185216;
// MNP
struct MNP_t4105045159;
// MNP_EditorTesting
struct MNP_EditorTesting_t3291812131;
// MNP_Singleton`1<MNP_EditorTesting>
struct MNP_Singleton_1_t1784082960;
// MNP_Singleton`1<System.Object>
struct MNP_Singleton_1_t1572376993;
// UnityEngine.Transform
struct Transform_t3600365921;
// MNP_EditorUIController
struct MNP_EditorUIController_t1772223415;
// System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>
struct Dictionary_2_t1008909281;
// MNPopup/MNPopupAction
struct MNPopupAction_t1223652982;
// MNP_UIButton
struct MNP_UIButton_t3811144891;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// MNP_EditorUIController/<SetActions>c__AnonStorey0
struct U3CSetActionsU3Ec__AnonStorey0_t1891340468;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t3960448221;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// MNPopup
struct MNPopup_t2344454187;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,MNPopup/MNPopupAction>
struct KeyCollection_t1198584752;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// MNProxyPool
struct MNProxyPool_t755738562;
// MNRateUsPopup
struct MNRateUsPopup_t3514468942;
// MNUseExample
struct MNUseExample_t4260541090;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// MNPopup/MNPopupAction[]
struct MNPopupActionU5BU5D_t2232222451;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,MNPopup/MNPopupAction,System.Collections.DictionaryEntry>
struct Transform_1_t1082634167;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.UI.Text
struct Text_t1901882714;
// MNP_UIButton[]
struct MNP_UIButtonU5BU5D_t49492474;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MNAndroidAlert_t2444998409_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2019918284_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MNAndroidAlert_U3COnCompleteU3Em__0_m2329909476_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m4099869023_RuntimeMethod_var;
extern const uint32_t MNAndroidAlert__ctor_m1330824194_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMNAndroidAlert_t2444998409_m3230324289_RuntimeMethod_var;
extern String_t* _stringLiteral612426437;
extern const uint32_t MNAndroidAlert_Create_m3346940072_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t827303578_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2280021157_il2cpp_TypeInfo_var;
extern RuntimeClass* MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614612;
extern const uint32_t MNAndroidAlert_Show_m3199264168_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m743277474_RuntimeMethod_var;
extern const uint32_t MNAndroidAlert_onPopUpCallBack_m226267688_MetadataUsageId;
extern String_t* _stringLiteral456008947;
extern const uint32_t MNAndroidNative_CallActivityFunction_m3848777755_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3335406256;
extern const uint32_t MNAndroidNative_showMessage_m2469137584_MetadataUsageId;
extern String_t* _stringLiteral2679283682;
extern const uint32_t MNAndroidNative_ShowPreloader_m2654586902_MetadataUsageId;
extern String_t* _stringLiteral508918697;
extern const uint32_t MNAndroidNative_HidePreloader_m4216222762_MetadataUsageId;
extern String_t* _stringLiteral1516215752;
extern const uint32_t MNAndroidNative_RedirectStoreRatingPage_m3524441357_MetadataUsageId;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern const uint32_t MNFeaturePreview_InitStyles_m1732573373_MetadataUsageId;
extern RuntimeClass* MNIOSAlert_t2758643397_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MNIOSAlert_U3COnCompleteU3Em__0_m425783555_RuntimeMethod_var;
extern const uint32_t MNIOSAlert__ctor_m2286725273_MetadataUsageId;
extern const RuntimeMethod* GameObject_AddComponent_TisMNIOSAlert_t2758643397_m2359313214_RuntimeMethod_var;
extern String_t* _stringLiteral1457096102;
extern const uint32_t MNIOSAlert_Create_m3040670208_MetadataUsageId;
extern const uint32_t MNIOSAlert_Show_m2651477221_MetadataUsageId;
extern const uint32_t MNIOSAlert_onPopUpCallBack_m1906982249_MetadataUsageId;
extern RuntimeClass* MNP_Singleton_1_t1784082960_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MNP_Singleton_1__ctor_m949567985_RuntimeMethod_var;
extern const uint32_t MNP_EditorTesting__ctor_m3192168864_MetadataUsageId;
extern const RuntimeMethod* Resources_Load_TisGameObject_t1113636619_m2956672834_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMNP_EditorUIController_t1772223415_m3837191597_RuntimeMethod_var;
extern String_t* _stringLiteral3722926202;
extern const uint32_t MNP_EditorTesting_Awake_m713984912_MetadataUsageId;
extern RuntimeClass* U3CSetActionsU3Ec__AnonStorey0_t1891340468_il2cpp_TypeInfo_var;
extern RuntimeClass* MNPopupAction_t1223652982_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_t3245792599_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m1957078412_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1795896187_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1595870816_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m149761797_RuntimeMethod_var;
extern const RuntimeMethod* U3CSetActionsU3Ec__AnonStorey0_U3CU3Em__0_m4222790365_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2936311680_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m661348193_RuntimeMethod_var;
extern const uint32_t MNP_EditorUIController_SetActions_m802097226_MetadataUsageId;
extern const RuntimeMethod* ScriptableObject_CreateInstance_TisMNP_PlatformSettings_t3087930686_m2234944918_RuntimeMethod_var;
extern String_t* _stringLiteral101239041;
extern const uint32_t MNP_PlatformSettings_get_Instance_m2773898975_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1008909281_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1216260279_RuntimeMethod_var;
extern const uint32_t MNPopup__ctor_m3069196290_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m4035089161_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m4223506253_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3318967940_RuntimeMethod_var;
extern String_t* _stringLiteral773892206;
extern String_t* _stringLiteral1546526260;
extern const uint32_t MNPopup_AddAction_m2914407455_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Keys_m2861062471_RuntimeMethod_var;
extern const RuntimeMethod* MNPopup_OnPopupCompleted_m4025483403_RuntimeMethod_var;
extern const uint32_t MNPopup_Show_m2407814859_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m360236963_RuntimeMethod_var;
extern String_t* _stringLiteral146871817;
extern const uint32_t MNPopup_OnPopupCompleted_m4025483403_MetadataUsageId;
extern const RuntimeMethod* MNRateUsPopup_U3CMNRateUsPopupU3Em__0_m583524513_RuntimeMethod_var;
extern const RuntimeMethod* MNRateUsPopup_U3CMNRateUsPopupU3Em__1_m2539839649_RuntimeMethod_var;
extern const RuntimeMethod* MNRateUsPopup_U3CMNRateUsPopupU3Em__2_m201187489_RuntimeMethod_var;
extern const uint32_t MNRateUsPopup__ctor_m231298984_MetadataUsageId;
extern String_t* _stringLiteral3045211510;
extern String_t* _stringLiteral1023043805;
extern const uint32_t MNUseExample__ctor_m2123611588_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* MNRateUsPopup_t3514468942_il2cpp_TypeInfo_var;
extern RuntimeClass* MNUseExample_t4260541090_il2cpp_TypeInfo_var;
extern RuntimeClass* MNPopup_t2344454187_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__0_m4187805135_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__1_m2621721194_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__2_m3025005721_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__3_m1458921780_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__4_m1862206307_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__5_m296122366_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__6_m699406893_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__7_m3428290248_RuntimeMethod_var;
extern const RuntimeMethod* MNUseExample_U3COnGUIU3Em__8_m3831574775_RuntimeMethod_var;
extern String_t* _stringLiteral2439892768;
extern String_t* _stringLiteral1986594923;
extern String_t* _stringLiteral4293042637;
extern String_t* _stringLiteral472191716;
extern String_t* _stringLiteral4290946605;
extern String_t* _stringLiteral771143923;
extern String_t* _stringLiteral78692466;
extern String_t* _stringLiteral1472239736;
extern String_t* _stringLiteral3963993483;
extern String_t* _stringLiteral1625897302;
extern String_t* _stringLiteral2392305547;
extern String_t* _stringLiteral2795590074;
extern String_t* _stringLiteral3484363638;
extern String_t* _stringLiteral3455039457;
extern String_t* _stringLiteral3108015093;
extern String_t* _stringLiteral3963994475;
extern String_t* _stringLiteral3253942988;
extern String_t* _stringLiteral4260792695;
extern String_t* _stringLiteral3331193656;
extern const uint32_t MNUseExample_OnGUI_m786938601_MetadataUsageId;
extern String_t* _stringLiteral174100631;
extern const uint32_t MNUseExample_U3COnGUIU3Em__0_m4187805135_MetadataUsageId;
extern String_t* _stringLiteral2820903382;
extern const uint32_t MNUseExample_U3COnGUIU3Em__1_m2621721194_MetadataUsageId;
extern String_t* _stringLiteral3188501275;
extern const uint32_t MNUseExample_U3COnGUIU3Em__2_m3025005721_MetadataUsageId;
extern String_t* _stringLiteral4132162756;
extern const uint32_t MNUseExample_U3COnGUIU3Em__3_m1458921780_MetadataUsageId;
extern String_t* _stringLiteral1804806279;
extern const uint32_t MNUseExample_U3COnGUIU3Em__4_m1862206307_MetadataUsageId;
extern String_t* _stringLiteral2364504036;
extern const uint32_t MNUseExample_U3COnGUIU3Em__5_m296122366_MetadataUsageId;
extern String_t* _stringLiteral2045254338;
extern const uint32_t MNUseExample_U3COnGUIU3Em__6_m699406893_MetadataUsageId;
extern String_t* _stringLiteral4151820420;
extern const uint32_t MNUseExample_U3COnGUIU3Em__7_m3428290248_MetadataUsageId;
extern const uint32_t MNUseExample_U3COnGUIU3Em__8_m3831574775_MetadataUsageId;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyleState_t1397964415_marshaled_com;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct MNP_UIButtonU5BU5D_t49492474;


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
#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
#ifndef DICTIONARY_2_T1008909281_H
#define DICTIONARY_2_T1008909281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>
struct  Dictionary_2_t1008909281  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MNPopupActionU5BU5D_t2232222451* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___valueSlots_7)); }
	inline MNPopupActionU5BU5D_t2232222451* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MNPopupActionU5BU5D_t2232222451** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MNPopupActionU5BU5D_t2232222451* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1008909281_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1082634167 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1008909281_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1082634167 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1082634167 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1082634167 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1008909281_H
#ifndef MNP_CONFIG_T4248226897_H
#define MNP_CONFIG_T4248226897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_Config
struct  MNP_Config_t4248226897  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_CONFIG_T4248226897_H
#ifndef MNP_T4105045159_H
#define MNP_T4105045159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP
struct  MNP_t4105045159  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_T4105045159_H
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
#ifndef MNIOSNATIVE_T1200185216_H
#define MNIOSNATIVE_T1200185216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNIOSNative
struct  MNIOSNative_t1200185216  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNIOSNATIVE_T1200185216_H
#ifndef MNANDROIDNATIVE_T2982907439_H
#define MNANDROIDNATIVE_T2982907439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNAndroidNative
struct  MNAndroidNative_t2982907439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNANDROIDNATIVE_T2982907439_H
#ifndef U3CSETACTIONSU3EC__ANONSTOREY0_T1891340468_H
#define U3CSETACTIONSU3EC__ANONSTOREY0_T1891340468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_EditorUIController/<SetActions>c__AnonStorey0
struct  U3CSetActionsU3Ec__AnonStorey0_t1891340468  : public RuntimeObject
{
public:
	// MNPopup/MNPopupAction MNP_EditorUIController/<SetActions>c__AnonStorey0::a
	MNPopupAction_t1223652982 * ___a_0;
	// MNP_EditorUIController MNP_EditorUIController/<SetActions>c__AnonStorey0::$this
	MNP_EditorUIController_t1772223415 * ___U24this_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(U3CSetActionsU3Ec__AnonStorey0_t1891340468, ___a_0)); }
	inline MNPopupAction_t1223652982 * get_a_0() const { return ___a_0; }
	inline MNPopupAction_t1223652982 ** get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(MNPopupAction_t1223652982 * value)
	{
		___a_0 = value;
		Il2CppCodeGenWriteBarrier((&___a_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSetActionsU3Ec__AnonStorey0_t1891340468, ___U24this_1)); }
	inline MNP_EditorUIController_t1772223415 * get_U24this_1() const { return ___U24this_1; }
	inline MNP_EditorUIController_t1772223415 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MNP_EditorUIController_t1772223415 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETACTIONSU3EC__ANONSTOREY0_T1891340468_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef MNPOPUP_T2344454187_H
#define MNPOPUP_T2344454187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNPopup
struct  MNPopup_t2344454187  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction> MNPopup::actions
	Dictionary_2_t1008909281 * ___actions_0;
	// MNPopup/MNPopupAction MNPopup::dismissCallback
	MNPopupAction_t1223652982 * ___dismissCallback_1;
	// System.String MNPopup::title
	String_t* ___title_2;
	// System.String MNPopup::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_actions_0() { return static_cast<int32_t>(offsetof(MNPopup_t2344454187, ___actions_0)); }
	inline Dictionary_2_t1008909281 * get_actions_0() const { return ___actions_0; }
	inline Dictionary_2_t1008909281 ** get_address_of_actions_0() { return &___actions_0; }
	inline void set_actions_0(Dictionary_2_t1008909281 * value)
	{
		___actions_0 = value;
		Il2CppCodeGenWriteBarrier((&___actions_0), value);
	}

	inline static int32_t get_offset_of_dismissCallback_1() { return static_cast<int32_t>(offsetof(MNPopup_t2344454187, ___dismissCallback_1)); }
	inline MNPopupAction_t1223652982 * get_dismissCallback_1() const { return ___dismissCallback_1; }
	inline MNPopupAction_t1223652982 ** get_address_of_dismissCallback_1() { return &___dismissCallback_1; }
	inline void set_dismissCallback_1(MNPopupAction_t1223652982 * value)
	{
		___dismissCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___dismissCallback_1), value);
	}

	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(MNPopup_t2344454187, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((&___title_2), value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(MNPopup_t2344454187, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((&___message_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNPOPUP_T2344454187_H
#ifndef KEYCOLLECTION_T1198584752_H
#define KEYCOLLECTION_T1198584752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,MNPopup/MNPopupAction>
struct  KeyCollection_t1198584752  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t1008909281 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t1198584752, ___dictionary_0)); }
	inline Dictionary_2_t1008909281 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1008909281 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1008909281 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T1198584752_H
#ifndef MNPROXYPOOL_T755738562_H
#define MNPROXYPOOL_T755738562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNProxyPool
struct  MNProxyPool_t755738562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNPROXYPOOL_T755738562_H
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
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef MNRATEUSPOPUP_T3514468942_H
#define MNRATEUSPOPUP_T3514468942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNRateUsPopup
struct  MNRateUsPopup_t3514468942  : public MNPopup_t2344454187
{
public:
	// MNPopup/MNPopupAction MNRateUsPopup::remindListener
	MNPopupAction_t1223652982 * ___remindListener_6;
	// MNPopup/MNPopupAction MNRateUsPopup::declineListener
	MNPopupAction_t1223652982 * ___declineListener_7;
	// MNPopup/MNPopupAction MNRateUsPopup::rateUsListener
	MNPopupAction_t1223652982 * ___rateUsListener_8;
	// System.String MNRateUsPopup::appleId
	String_t* ___appleId_9;

public:
	inline static int32_t get_offset_of_remindListener_6() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t3514468942, ___remindListener_6)); }
	inline MNPopupAction_t1223652982 * get_remindListener_6() const { return ___remindListener_6; }
	inline MNPopupAction_t1223652982 ** get_address_of_remindListener_6() { return &___remindListener_6; }
	inline void set_remindListener_6(MNPopupAction_t1223652982 * value)
	{
		___remindListener_6 = value;
		Il2CppCodeGenWriteBarrier((&___remindListener_6), value);
	}

	inline static int32_t get_offset_of_declineListener_7() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t3514468942, ___declineListener_7)); }
	inline MNPopupAction_t1223652982 * get_declineListener_7() const { return ___declineListener_7; }
	inline MNPopupAction_t1223652982 ** get_address_of_declineListener_7() { return &___declineListener_7; }
	inline void set_declineListener_7(MNPopupAction_t1223652982 * value)
	{
		___declineListener_7 = value;
		Il2CppCodeGenWriteBarrier((&___declineListener_7), value);
	}

	inline static int32_t get_offset_of_rateUsListener_8() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t3514468942, ___rateUsListener_8)); }
	inline MNPopupAction_t1223652982 * get_rateUsListener_8() const { return ___rateUsListener_8; }
	inline MNPopupAction_t1223652982 ** get_address_of_rateUsListener_8() { return &___rateUsListener_8; }
	inline void set_rateUsListener_8(MNPopupAction_t1223652982 * value)
	{
		___rateUsListener_8 = value;
		Il2CppCodeGenWriteBarrier((&___rateUsListener_8), value);
	}

	inline static int32_t get_offset_of_appleId_9() { return static_cast<int32_t>(offsetof(MNRateUsPopup_t3514468942, ___appleId_9)); }
	inline String_t* get_appleId_9() const { return ___appleId_9; }
	inline String_t** get_address_of_appleId_9() { return &___appleId_9; }
	inline void set_appleId_9(String_t* value)
	{
		___appleId_9 = value;
		Il2CppCodeGenWriteBarrier((&___appleId_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNRATEUSPOPUP_T3514468942_H
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
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
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
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
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
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
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
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
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
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef KEYVALUEPAIR_2_T3406581448_H
#define KEYVALUEPAIR_2_T3406581448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,MNPopup/MNPopupAction>
struct  KeyValuePair_2_t3406581448 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	MNPopupAction_t1223652982 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3406581448, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3406581448, ___value_1)); }
	inline MNPopupAction_t1223652982 * get_value_1() const { return ___value_1; }
	inline MNPopupAction_t1223652982 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(MNPopupAction_t1223652982 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3406581448_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2530217319_H
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
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef BUTTONCLICKEDEVENT_T48803504_H
#define BUTTONCLICKEDEVENT_T48803504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_t48803504  : public UnityEvent_t2581268647
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T48803504_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef ENUMERATOR_T2963092056_H
#define ENUMERATOR_T2963092056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,MNPopup/MNPopupAction>
struct  Enumerator_t2963092056 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1008909281 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t3406581448  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2963092056, ___dictionary_0)); }
	inline Dictionary_2_t1008909281 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1008909281 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1008909281 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2963092056, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2963092056, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2963092056, ___current_3)); }
	inline KeyValuePair_2_t3406581448  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3406581448 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3406581448  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2963092056_H
#ifndef MNDIALOGRESULT_T1109510798_H
#define MNDIALOGRESULT_T1109510798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNDialogResult
struct  MNDialogResult_t1109510798 
{
public:
	// System.Int32 MNDialogResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MNDialogResult_t1109510798, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNDIALOGRESULT_T1109510798_H
#ifndef FONTSTYLE_T82229486_H
#define FONTSTYLE_T82229486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t82229486 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyle_t82229486, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTSTYLE_T82229486_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3840446185 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Background_2)); }
	inline Texture2D_t3840446185 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3840446185 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3840446185 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef MNANDROIDDIALOGTHEME_T4278982173_H
#define MNANDROIDDIALOGTHEME_T4278982173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNAndroidDialogTheme
struct  MNAndroidDialogTheme_t4278982173 
{
public:
	// System.Int32 MNAndroidDialogTheme::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MNAndroidDialogTheme_t4278982173, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNANDROIDDIALOGTHEME_T4278982173_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t1956802104 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_FontInternal_13)); }
	inline Font_t1956802104 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t1956802104 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t1956802104 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_15)); }
	inline GUIStyle_t3956901511 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t3956901511 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
	Font_t1956802104 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T3956901511_H
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
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MNPOPUPACTION_T1223652982_H
#define MNPOPUPACTION_T1223652982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNPopup/MNPopupAction
struct  MNPopupAction_t1223652982  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNPOPUPACTION_T1223652982_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MNP_PLATFORMSETTINGS_T3087930686_H
#define MNP_PLATFORMSETTINGS_T3087930686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_PlatformSettings
struct  MNP_PlatformSettings_t3087930686  : public ScriptableObject_t2528358522
{
public:
	// MNAndroidDialogTheme MNP_PlatformSettings::AndroidDialogTheme
	int32_t ___AndroidDialogTheme_5;

public:
	inline static int32_t get_offset_of_AndroidDialogTheme_5() { return static_cast<int32_t>(offsetof(MNP_PlatformSettings_t3087930686, ___AndroidDialogTheme_5)); }
	inline int32_t get_AndroidDialogTheme_5() const { return ___AndroidDialogTheme_5; }
	inline int32_t* get_address_of_AndroidDialogTheme_5() { return &___AndroidDialogTheme_5; }
	inline void set_AndroidDialogTheme_5(int32_t value)
	{
		___AndroidDialogTheme_5 = value;
	}
};

struct MNP_PlatformSettings_t3087930686_StaticFields
{
public:
	// MNP_PlatformSettings MNP_PlatformSettings::instance
	MNP_PlatformSettings_t3087930686 * ___instance_7;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(MNP_PlatformSettings_t3087930686_StaticFields, ___instance_7)); }
	inline MNP_PlatformSettings_t3087930686 * get_instance_7() const { return ___instance_7; }
	inline MNP_PlatformSettings_t3087930686 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(MNP_PlatformSettings_t3087930686 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((&___instance_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_PLATFORMSETTINGS_T3087930686_H
#ifndef ACTION_1_T2019918284_H
#define ACTION_1_T2019918284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t2019918284  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2019918284_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef MNP_UIBUTTON_T3811144891_H
#define MNP_UIBUTTON_T3811144891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_UIButton
struct  MNP_UIButton_t3811144891  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button MNP_UIButton::Button
	Button_t4055032469 * ___Button_2;
	// UnityEngine.UI.Text MNP_UIButton::Title
	Text_t1901882714 * ___Title_3;

public:
	inline static int32_t get_offset_of_Button_2() { return static_cast<int32_t>(offsetof(MNP_UIButton_t3811144891, ___Button_2)); }
	inline Button_t4055032469 * get_Button_2() const { return ___Button_2; }
	inline Button_t4055032469 ** get_address_of_Button_2() { return &___Button_2; }
	inline void set_Button_2(Button_t4055032469 * value)
	{
		___Button_2 = value;
		Il2CppCodeGenWriteBarrier((&___Button_2), value);
	}

	inline static int32_t get_offset_of_Title_3() { return static_cast<int32_t>(offsetof(MNP_UIButton_t3811144891, ___Title_3)); }
	inline Text_t1901882714 * get_Title_3() const { return ___Title_3; }
	inline Text_t1901882714 ** get_address_of_Title_3() { return &___Title_3; }
	inline void set_Title_3(Text_t1901882714 * value)
	{
		___Title_3 = value;
		Il2CppCodeGenWriteBarrier((&___Title_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_UIBUTTON_T3811144891_H
#ifndef MNFEATUREPREVIEW_T389008354_H
#define MNFEATUREPREVIEW_T389008354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNFeaturePreview
struct  MNFeaturePreview_t389008354  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GUIStyle MNFeaturePreview::style
	GUIStyle_t3956901511 * ___style_2;
	// System.Int32 MNFeaturePreview::buttonWidth
	int32_t ___buttonWidth_3;
	// System.Int32 MNFeaturePreview::buttonHeight
	int32_t ___buttonHeight_4;
	// System.Single MNFeaturePreview::StartY
	float ___StartY_5;
	// System.Single MNFeaturePreview::StartX
	float ___StartX_6;
	// System.Single MNFeaturePreview::XStartPos
	float ___XStartPos_7;
	// System.Single MNFeaturePreview::YStartPos
	float ___YStartPos_8;
	// System.Single MNFeaturePreview::XButtonStep
	float ___XButtonStep_9;
	// System.Single MNFeaturePreview::YButtonStep
	float ___YButtonStep_10;
	// System.Single MNFeaturePreview::YLableStep
	float ___YLableStep_11;

public:
	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___style_2)); }
	inline GUIStyle_t3956901511 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t3956901511 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t3956901511 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_buttonWidth_3() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___buttonWidth_3)); }
	inline int32_t get_buttonWidth_3() const { return ___buttonWidth_3; }
	inline int32_t* get_address_of_buttonWidth_3() { return &___buttonWidth_3; }
	inline void set_buttonWidth_3(int32_t value)
	{
		___buttonWidth_3 = value;
	}

	inline static int32_t get_offset_of_buttonHeight_4() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___buttonHeight_4)); }
	inline int32_t get_buttonHeight_4() const { return ___buttonHeight_4; }
	inline int32_t* get_address_of_buttonHeight_4() { return &___buttonHeight_4; }
	inline void set_buttonHeight_4(int32_t value)
	{
		___buttonHeight_4 = value;
	}

	inline static int32_t get_offset_of_StartY_5() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___StartY_5)); }
	inline float get_StartY_5() const { return ___StartY_5; }
	inline float* get_address_of_StartY_5() { return &___StartY_5; }
	inline void set_StartY_5(float value)
	{
		___StartY_5 = value;
	}

	inline static int32_t get_offset_of_StartX_6() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___StartX_6)); }
	inline float get_StartX_6() const { return ___StartX_6; }
	inline float* get_address_of_StartX_6() { return &___StartX_6; }
	inline void set_StartX_6(float value)
	{
		___StartX_6 = value;
	}

	inline static int32_t get_offset_of_XStartPos_7() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___XStartPos_7)); }
	inline float get_XStartPos_7() const { return ___XStartPos_7; }
	inline float* get_address_of_XStartPos_7() { return &___XStartPos_7; }
	inline void set_XStartPos_7(float value)
	{
		___XStartPos_7 = value;
	}

	inline static int32_t get_offset_of_YStartPos_8() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___YStartPos_8)); }
	inline float get_YStartPos_8() const { return ___YStartPos_8; }
	inline float* get_address_of_YStartPos_8() { return &___YStartPos_8; }
	inline void set_YStartPos_8(float value)
	{
		___YStartPos_8 = value;
	}

	inline static int32_t get_offset_of_XButtonStep_9() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___XButtonStep_9)); }
	inline float get_XButtonStep_9() const { return ___XButtonStep_9; }
	inline float* get_address_of_XButtonStep_9() { return &___XButtonStep_9; }
	inline void set_XButtonStep_9(float value)
	{
		___XButtonStep_9 = value;
	}

	inline static int32_t get_offset_of_YButtonStep_10() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___YButtonStep_10)); }
	inline float get_YButtonStep_10() const { return ___YButtonStep_10; }
	inline float* get_address_of_YButtonStep_10() { return &___YButtonStep_10; }
	inline void set_YButtonStep_10(float value)
	{
		___YButtonStep_10 = value;
	}

	inline static int32_t get_offset_of_YLableStep_11() { return static_cast<int32_t>(offsetof(MNFeaturePreview_t389008354, ___YLableStep_11)); }
	inline float get_YLableStep_11() const { return ___YLableStep_11; }
	inline float* get_address_of_YLableStep_11() { return &___YLableStep_11; }
	inline void set_YLableStep_11(float value)
	{
		___YLableStep_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNFEATUREPREVIEW_T389008354_H
#ifndef MNP_SINGLETON_1_T1784082960_H
#define MNP_SINGLETON_1_T1784082960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_Singleton`1<MNP_EditorTesting>
struct  MNP_Singleton_1_t1784082960  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct MNP_Singleton_1_t1784082960_StaticFields
{
public:
	// T MNP_Singleton`1::_instance
	MNP_EditorTesting_t3291812131 * ____instance_2;
	// System.Boolean MNP_Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(MNP_Singleton_1_t1784082960_StaticFields, ____instance_2)); }
	inline MNP_EditorTesting_t3291812131 * get__instance_2() const { return ____instance_2; }
	inline MNP_EditorTesting_t3291812131 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(MNP_EditorTesting_t3291812131 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_3() { return static_cast<int32_t>(offsetof(MNP_Singleton_1_t1784082960_StaticFields, ___applicationIsQuitting_3)); }
	inline bool get_applicationIsQuitting_3() const { return ___applicationIsQuitting_3; }
	inline bool* get_address_of_applicationIsQuitting_3() { return &___applicationIsQuitting_3; }
	inline void set_applicationIsQuitting_3(bool value)
	{
		___applicationIsQuitting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_SINGLETON_1_T1784082960_H
#ifndef MNIOSALERT_T2758643397_H
#define MNIOSALERT_T2758643397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNIOSAlert
struct  MNIOSAlert_t2758643397  : public MonoBehaviour_t3962482529
{
public:
	// System.String MNIOSAlert::title
	String_t* ___title_2;
	// System.String MNIOSAlert::message
	String_t* ___message_3;
	// System.Collections.Generic.IEnumerable`1<System.String> MNIOSAlert::actions
	RuntimeObject* ___actions_4;
	// System.Action`1<System.String> MNIOSAlert::OnComplete
	Action_1_t2019918284 * ___OnComplete_5;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(MNIOSAlert_t2758643397, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((&___title_2), value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(MNIOSAlert_t2758643397, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((&___message_3), value);
	}

	inline static int32_t get_offset_of_actions_4() { return static_cast<int32_t>(offsetof(MNIOSAlert_t2758643397, ___actions_4)); }
	inline RuntimeObject* get_actions_4() const { return ___actions_4; }
	inline RuntimeObject** get_address_of_actions_4() { return &___actions_4; }
	inline void set_actions_4(RuntimeObject* value)
	{
		___actions_4 = value;
		Il2CppCodeGenWriteBarrier((&___actions_4), value);
	}

	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(MNIOSAlert_t2758643397, ___OnComplete_5)); }
	inline Action_1_t2019918284 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_1_t2019918284 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_1_t2019918284 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnComplete_5), value);
	}
};

struct MNIOSAlert_t2758643397_StaticFields
{
public:
	// System.Action`1<System.String> MNIOSAlert::<>f__am$cache0
	Action_1_t2019918284 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(MNIOSAlert_t2758643397_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t2019918284 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t2019918284 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t2019918284 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNIOSALERT_T2758643397_H
#ifndef MNANDROIDALERT_T2444998409_H
#define MNANDROIDALERT_T2444998409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNAndroidAlert
struct  MNAndroidAlert_t2444998409  : public MonoBehaviour_t3962482529
{
public:
	// System.String MNAndroidAlert::title
	String_t* ___title_2;
	// System.String MNAndroidAlert::message
	String_t* ___message_3;
	// System.Collections.Generic.IEnumerable`1<System.String> MNAndroidAlert::actions
	RuntimeObject* ___actions_4;
	// System.Action`1<System.String> MNAndroidAlert::OnComplete
	Action_1_t2019918284 * ___OnComplete_5;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2444998409, ___title_2)); }
	inline String_t* get_title_2() const { return ___title_2; }
	inline String_t** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(String_t* value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier((&___title_2), value);
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2444998409, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier((&___message_3), value);
	}

	inline static int32_t get_offset_of_actions_4() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2444998409, ___actions_4)); }
	inline RuntimeObject* get_actions_4() const { return ___actions_4; }
	inline RuntimeObject** get_address_of_actions_4() { return &___actions_4; }
	inline void set_actions_4(RuntimeObject* value)
	{
		___actions_4 = value;
		Il2CppCodeGenWriteBarrier((&___actions_4), value);
	}

	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2444998409, ___OnComplete_5)); }
	inline Action_1_t2019918284 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_1_t2019918284 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_1_t2019918284 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnComplete_5), value);
	}
};

struct MNAndroidAlert_t2444998409_StaticFields
{
public:
	// System.Action`1<System.String> MNAndroidAlert::<>f__am$cache0
	Action_1_t2019918284 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(MNAndroidAlert_t2444998409_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_1_t2019918284 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_1_t2019918284 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_1_t2019918284 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNANDROIDALERT_T2444998409_H
#ifndef MNP_EDITORUICONTROLLER_T1772223415_H
#define MNP_EDITORUICONTROLLER_T1772223415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_EditorUIController
struct  MNP_EditorUIController_t1772223415  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject MNP_EditorUIController::Root
	GameObject_t1113636619 * ___Root_2;
	// UnityEngine.UI.Text MNP_EditorUIController::Title
	Text_t1901882714 * ___Title_3;
	// UnityEngine.UI.Text MNP_EditorUIController::Message
	Text_t1901882714 * ___Message_4;
	// MNP_UIButton[] MNP_EditorUIController::UIButtons
	MNP_UIButtonU5BU5D_t49492474* ___UIButtons_5;
	// MNPopup/MNPopupAction MNP_EditorUIController::dismiss
	MNPopupAction_t1223652982 * ___dismiss_6;
	// System.Boolean MNP_EditorUIController::isActive
	bool ___isActive_7;

public:
	inline static int32_t get_offset_of_Root_2() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t1772223415, ___Root_2)); }
	inline GameObject_t1113636619 * get_Root_2() const { return ___Root_2; }
	inline GameObject_t1113636619 ** get_address_of_Root_2() { return &___Root_2; }
	inline void set_Root_2(GameObject_t1113636619 * value)
	{
		___Root_2 = value;
		Il2CppCodeGenWriteBarrier((&___Root_2), value);
	}

	inline static int32_t get_offset_of_Title_3() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t1772223415, ___Title_3)); }
	inline Text_t1901882714 * get_Title_3() const { return ___Title_3; }
	inline Text_t1901882714 ** get_address_of_Title_3() { return &___Title_3; }
	inline void set_Title_3(Text_t1901882714 * value)
	{
		___Title_3 = value;
		Il2CppCodeGenWriteBarrier((&___Title_3), value);
	}

	inline static int32_t get_offset_of_Message_4() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t1772223415, ___Message_4)); }
	inline Text_t1901882714 * get_Message_4() const { return ___Message_4; }
	inline Text_t1901882714 ** get_address_of_Message_4() { return &___Message_4; }
	inline void set_Message_4(Text_t1901882714 * value)
	{
		___Message_4 = value;
		Il2CppCodeGenWriteBarrier((&___Message_4), value);
	}

	inline static int32_t get_offset_of_UIButtons_5() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t1772223415, ___UIButtons_5)); }
	inline MNP_UIButtonU5BU5D_t49492474* get_UIButtons_5() const { return ___UIButtons_5; }
	inline MNP_UIButtonU5BU5D_t49492474** get_address_of_UIButtons_5() { return &___UIButtons_5; }
	inline void set_UIButtons_5(MNP_UIButtonU5BU5D_t49492474* value)
	{
		___UIButtons_5 = value;
		Il2CppCodeGenWriteBarrier((&___UIButtons_5), value);
	}

	inline static int32_t get_offset_of_dismiss_6() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t1772223415, ___dismiss_6)); }
	inline MNPopupAction_t1223652982 * get_dismiss_6() const { return ___dismiss_6; }
	inline MNPopupAction_t1223652982 ** get_address_of_dismiss_6() { return &___dismiss_6; }
	inline void set_dismiss_6(MNPopupAction_t1223652982 * value)
	{
		___dismiss_6 = value;
		Il2CppCodeGenWriteBarrier((&___dismiss_6), value);
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(MNP_EditorUIController_t1772223415, ___isActive_7)); }
	inline bool get_isActive_7() const { return ___isActive_7; }
	inline bool* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(bool value)
	{
		___isActive_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_EDITORUICONTROLLER_T1772223415_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MNP_EDITORTESTING_T3291812131_H
#define MNP_EDITORTESTING_T3291812131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNP_EditorTesting
struct  MNP_EditorTesting_t3291812131  : public MNP_Singleton_1_t1784082960
{
public:
	// MNP_EditorUIController MNP_EditorTesting::UiController
	MNP_EditorUIController_t1772223415 * ___UiController_4;

public:
	inline static int32_t get_offset_of_UiController_4() { return static_cast<int32_t>(offsetof(MNP_EditorTesting_t3291812131, ___UiController_4)); }
	inline MNP_EditorUIController_t1772223415 * get_UiController_4() const { return ___UiController_4; }
	inline MNP_EditorUIController_t1772223415 ** get_address_of_UiController_4() { return &___UiController_4; }
	inline void set_UiController_4(MNP_EditorUIController_t1772223415 * value)
	{
		___UiController_4 = value;
		Il2CppCodeGenWriteBarrier((&___UiController_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNP_EDITORTESTING_T3291812131_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MNUSEEXAMPLE_T4260541090_H
#define MNUSEEXAMPLE_T4260541090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MNUseExample
struct  MNUseExample_t4260541090  : public MNFeaturePreview_t389008354
{
public:
	// System.String MNUseExample::appleId
	String_t* ___appleId_12;
	// System.String MNUseExample::androidAppUrl
	String_t* ___androidAppUrl_13;

public:
	inline static int32_t get_offset_of_appleId_12() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090, ___appleId_12)); }
	inline String_t* get_appleId_12() const { return ___appleId_12; }
	inline String_t** get_address_of_appleId_12() { return &___appleId_12; }
	inline void set_appleId_12(String_t* value)
	{
		___appleId_12 = value;
		Il2CppCodeGenWriteBarrier((&___appleId_12), value);
	}

	inline static int32_t get_offset_of_androidAppUrl_13() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090, ___androidAppUrl_13)); }
	inline String_t* get_androidAppUrl_13() const { return ___androidAppUrl_13; }
	inline String_t** get_address_of_androidAppUrl_13() { return &___androidAppUrl_13; }
	inline void set_androidAppUrl_13(String_t* value)
	{
		___androidAppUrl_13 = value;
		Il2CppCodeGenWriteBarrier((&___androidAppUrl_13), value);
	}
};

struct MNUseExample_t4260541090_StaticFields
{
public:
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache0
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache0_14;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache1
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache1_15;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache2
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache2_16;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache3
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache3_17;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache4
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache4_18;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache5
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache5_19;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache6
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache6_20;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache7
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache7_21;
	// MNPopup/MNPopupAction MNUseExample::<>f__am$cache8
	MNPopupAction_t1223652982 * ___U3CU3Ef__amU24cache8_22;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_14() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache0_14)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache0_14() const { return ___U3CU3Ef__amU24cache0_14; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache0_14() { return &___U3CU3Ef__amU24cache0_14; }
	inline void set_U3CU3Ef__amU24cache0_14(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_15() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache1_15)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache1_15() const { return ___U3CU3Ef__amU24cache1_15; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache1_15() { return &___U3CU3Ef__amU24cache1_15; }
	inline void set_U3CU3Ef__amU24cache1_15(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_16() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache2_16)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache2_16() const { return ___U3CU3Ef__amU24cache2_16; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache2_16() { return &___U3CU3Ef__amU24cache2_16; }
	inline void set_U3CU3Ef__amU24cache2_16(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_17() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache3_17)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache3_17() const { return ___U3CU3Ef__amU24cache3_17; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache3_17() { return &___U3CU3Ef__amU24cache3_17; }
	inline void set_U3CU3Ef__amU24cache3_17(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_18() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache4_18)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache4_18() const { return ___U3CU3Ef__amU24cache4_18; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache4_18() { return &___U3CU3Ef__amU24cache4_18; }
	inline void set_U3CU3Ef__amU24cache4_18(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_19() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache5_19)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache5_19() const { return ___U3CU3Ef__amU24cache5_19; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache5_19() { return &___U3CU3Ef__amU24cache5_19; }
	inline void set_U3CU3Ef__amU24cache5_19(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_20() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache6_20)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache6_20() const { return ___U3CU3Ef__amU24cache6_20; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache6_20() { return &___U3CU3Ef__amU24cache6_20; }
	inline void set_U3CU3Ef__amU24cache6_20(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache6_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_21() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache7_21)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache7_21() const { return ___U3CU3Ef__amU24cache7_21; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache7_21() { return &___U3CU3Ef__amU24cache7_21; }
	inline void set_U3CU3Ef__amU24cache7_21(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache7_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_22() { return static_cast<int32_t>(offsetof(MNUseExample_t4260541090_StaticFields, ___U3CU3Ef__amU24cache8_22)); }
	inline MNPopupAction_t1223652982 * get_U3CU3Ef__amU24cache8_22() const { return ___U3CU3Ef__amU24cache8_22; }
	inline MNPopupAction_t1223652982 ** get_address_of_U3CU3Ef__amU24cache8_22() { return &___U3CU3Ef__amU24cache8_22; }
	inline void set_U3CU3Ef__amU24cache8_22(MNPopupAction_t1223652982 * value)
	{
		___U3CU3Ef__amU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache8_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MNUSEEXAMPLE_T4260541090_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
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
// MNP_UIButton[]
struct MNP_UIButtonU5BU5D_t49492474  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MNP_UIButton_t3811144891 * m_Items[1];

public:
	inline MNP_UIButton_t3811144891 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MNP_UIButton_t3811144891 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MNP_UIButton_t3811144891 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MNP_UIButton_t3811144891 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MNP_UIButton_t3811144891 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MNP_UIButton_t3811144891 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void MNP_Singleton`1<System.Object>::.ctor()
extern "C"  void MNP_Singleton_1__ctor_m743009450_gshared (MNP_Singleton_1_t1572376993 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C"  RuntimeObject * Resources_Load_TisRuntimeObject_m1502289511_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2086727927  Dictionary_2_GetEnumerator_m3278257048_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t2530217319  Enumerator_get_Current_m2655181939_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1328507389_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3464904234_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C"  RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t322220623 * Dictionary_2_get_Keys_m2217135091_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m4099869023(__this, p0, p1, method) ((  void (*) (Action_1_t2019918284 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<MNAndroidAlert>()
#define GameObject_AddComponent_TisMNAndroidAlert_t2444998409_m3230324289(__this, method) ((  MNAndroidAlert_t2444998409 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// MNP_PlatformSettings MNP_PlatformSettings::get_Instance()
extern "C"  MNP_PlatformSettings_t3087930686 * MNP_PlatformSettings_get_Instance_m2773898975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNAndroidNative::showMessage(System.String,System.String,System.String,MNAndroidDialogTheme)
extern "C"  void MNAndroidNative_showMessage_m2469137584 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___actions2, int32_t ___theme3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.String>::Invoke(!0)
#define Action_1_Invoke_m743277474(__this, p0, method) ((  void (*) (Action_1_t2019918284 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNProxyPool::CallStatic(System.String,System.String,System.Object[])
extern "C"  void MNProxyPool_CallStatic_m398663905 (RuntimeObject * __this /* static, unused */, String_t* ___className0, String_t* ___methodName1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNAndroidNative::CallActivityFunction(System.String,System.Object[])
extern "C"  void MNAndroidNative_CallActivityFunction_m3848777755 (RuntimeObject * __this /* static, unused */, String_t* ___methodName0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void GUIStyle_set_fontStyle_m1497341802 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<MNIOSAlert>()
#define GameObject_AddComponent_TisMNIOSAlert_t2758643397_m2359313214(__this, method) ((  MNIOSAlert_t2758643397 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void MNIOSNative::showMessage(System.String,System.String,System.String)
extern "C"  void MNIOSNative_showMessage_m3531223645 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___actions2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::_MNP_ShowMessage(System.String,System.String,System.String)
extern "C"  void MNIOSNative__MNP_ShowMessage_m3597078354 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___actions2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::_MNP_RedirectToAppStoreRatingPage(System.String)
extern "C"  void MNIOSNative__MNP_RedirectToAppStoreRatingPage_m3704447822 (RuntimeObject * __this /* static, unused */, String_t* ___appId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::_MNP_ShowPreloader()
extern "C"  void MNIOSNative__MNP_ShowPreloader_m2162237655 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::_MNP_HidePreloader()
extern "C"  void MNIOSNative__MNP_HidePreloader_m400846517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::_MNP_DismissCurrentAlert()
extern "C"  void MNIOSNative__MNP_DismissCurrentAlert_m3620754221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::ShowPreloader()
extern "C"  void MNIOSNative_ShowPreloader_m2449300039 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::HidePreloader()
extern "C"  void MNIOSNative_HidePreloader_m2003724835 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP_Singleton`1<MNP_EditorTesting>::.ctor()
#define MNP_Singleton_1__ctor_m949567985(__this, method) ((  void (*) (MNP_Singleton_1_t1784082960 *, const RuntimeMethod*))MNP_Singleton_1__ctor_m743009450_gshared)(__this, method)
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
#define Resources_Load_TisGameObject_t1113636619_m2956672834(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m1502289511_gshared)(__this /* static, unused */, p0, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1113636619_m4070250708(__this /* static, unused */, p0, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C"  void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<MNP_EditorUIController>()
#define GameObject_GetComponent_TisMNP_EditorUIController_t1772223415_m3837191597(__this, method) ((  MNP_EditorUIController_t1772223415 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void MNP_EditorUIController::Hide()
extern "C"  void MNP_EditorUIController_Hide_m2156975991 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP_EditorUIController::SetTitle(System.String)
extern "C"  void MNP_EditorUIController_SetTitle_m1926355170 (MNP_EditorUIController_t1772223415 * __this, String_t* ___title0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP_EditorUIController::SetMessage(System.String)
extern "C"  void MNP_EditorUIController_SetMessage_m1263891014 (MNP_EditorUIController_t1772223415 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP_EditorUIController::SetActions(System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>,MNPopup/MNPopupAction)
extern "C"  void MNP_EditorUIController_SetActions_m802097226 (MNP_EditorUIController_t1772223415 * __this, Dictionary_2_t1008909281 * ___actions0, MNPopupAction_t1223652982 * ___dismissAction1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP_EditorUIController::Show()
extern "C"  void MNP_EditorUIController_Show_m2014271737 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1957078412(__this, method) ((  Enumerator_t2963092056  (*) (Dictionary_2_t1008909281 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3278257048_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,MNPopup/MNPopupAction>::get_Current()
#define Enumerator_get_Current_m1795896187(__this, method) ((  KeyValuePair_2_t3406581448  (*) (Enumerator_t2963092056 *, const RuntimeMethod*))Enumerator_get_Current_m2655181939_gshared)(__this, method)
// System.Void MNP_EditorUIController/<SetActions>c__AnonStorey0::.ctor()
extern "C"  void U3CSetActionsU3Ec__AnonStorey0__ctor_m2935743158 (U3CSetActionsU3Ec__AnonStorey0_t1891340468 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.KeyValuePair`2<System.String,MNPopup/MNPopupAction>::get_Key()
#define KeyValuePair_2_get_Key_m1595870816(__this, method) ((  String_t* (*) (KeyValuePair_2_t3406581448 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1328507389_gshared)(__this, method)
// !1 System.Collections.Generic.KeyValuePair`2<System.String,MNPopup/MNPopupAction>::get_Value()
#define KeyValuePair_2_get_Value_m149761797(__this, method) ((  MNPopupAction_t1223652982 * (*) (KeyValuePair_2_t3406581448 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3464904234_gshared)(__this, method)
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t48803504 * Button_get_onClick_m2332132945 (Button_t4055032469 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction__ctor_m772160306 (UnityAction_t3245792599 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m2276267359 (UnityEvent_t2581268647 * __this, UnityAction_t3245792599 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,MNPopup/MNPopupAction>::MoveNext()
#define Enumerator_MoveNext_m2936311680(__this, method) ((  bool (*) (Enumerator_t2963092056 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,MNPopup/MNPopupAction>::Dispose()
#define Enumerator_Dispose_m661348193(__this, method) ((  void (*) (Enumerator_t2963092056 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method)
// System.Void MNPopup/MNPopupAction::Invoke()
extern "C"  void MNPopupAction_Invoke_m4206352591 (MNPopupAction_t1223652982 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
extern "C"  void UnityEventBase_RemoveAllListeners_m858411973 (UnityEventBase_t3960448221 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.ScriptableObject::CreateInstance<MNP_PlatformSettings>()
#define ScriptableObject_CreateInstance_TisMNP_PlatformSettings_t3087930686_m2234944918(__this /* static, unused */, method) ((  MNP_PlatformSettings_t3087930686 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_m1552711675_gshared)(__this /* static, unused */, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::.ctor()
#define Dictionary_2__ctor_m1216260279(__this, method) ((  void (*) (Dictionary_2_t1008909281 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::get_Count()
#define Dictionary_2_get_Count_m4035089161(__this, method) ((  int32_t (*) (Dictionary_2_t1008909281 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method)
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m4223506253(__this, p0, method) ((  bool (*) (Dictionary_2_t1008909281 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::Add(!0,!1)
#define Dictionary_2_Add_m3318967940(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1008909281 *, String_t*, MNPopupAction_t1223652982 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::get_Keys()
#define Dictionary_2_get_Keys_m2861062471(__this, method) ((  KeyCollection_t1198584752 * (*) (Dictionary_2_t1008909281 *, const RuntimeMethod*))Dictionary_2_get_Keys_m2217135091_gshared)(__this, method)
// MNIOSAlert MNIOSAlert::Create(System.String,System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  MNIOSAlert_t2758643397 * MNIOSAlert_Create_m3040670208 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, RuntimeObject* ___actions2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSAlert::Show()
extern "C"  void MNIOSAlert_Show_m2651477221 (MNIOSAlert_t2758643397 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>::get_Item(!0)
#define Dictionary_2_get_Item_m360236963(__this, p0, method) ((  MNPopupAction_t1223652982 * (*) (Dictionary_2_t1008909281 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNPopup::.ctor(System.String,System.String)
extern "C"  void MNPopup__ctor_m3069196290 (MNPopup_t2344454187 * __this, String_t* ___title0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNPopup/MNPopupAction::.ctor(System.Object,System.IntPtr)
extern "C"  void MNPopupAction__ctor_m3793848104 (MNPopupAction_t1223652982 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNPopup::AddAction(System.String,MNPopup/MNPopupAction)
extern "C"  void MNPopup_AddAction_m2914407455 (MNPopup_t2344454187 * __this, String_t* ___title0, MNPopupAction_t1223652982 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNIOSNative::RedirectToAppStoreRatingPage(System.String)
extern "C"  void MNIOSNative_RedirectToAppStoreRatingPage_m3678681813 (RuntimeObject * __this /* static, unused */, String_t* ___appleId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNFeaturePreview::.ctor()
extern "C"  void MNFeaturePreview__ctor_m2656016388 (MNFeaturePreview_t389008354 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNFeaturePreview::UpdateToStartPos()
extern "C"  void MNFeaturePreview_UpdateToStartPos_m3548467640 (MNFeaturePreview_t389008354 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m1518979886 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNRateUsPopup::.ctor(System.String,System.String,System.String,System.String,System.String)
extern "C"  void MNRateUsPopup__ctor_m231298984 (MNRateUsPopup_t3514468942 * __this, String_t* ___title0, String_t* ___message1, String_t* ___rateUs2, String_t* ___decline3, String_t* ___remind4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNRateUsPopup::SetAppleId(System.String)
extern "C"  void MNRateUsPopup_SetAppleId_m3859701770 (MNRateUsPopup_t3514468942 * __this, String_t* ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNRateUsPopup::SetAndroidAppUrl(System.String)
extern "C"  void MNRateUsPopup_SetAndroidAppUrl_m2530085604 (MNRateUsPopup_t3514468942 * __this, String_t* ___appUrl0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNRateUsPopup::AddDeclineListener(MNPopup/MNPopupAction)
extern "C"  void MNRateUsPopup_AddDeclineListener_m1236410923 (MNRateUsPopup_t3514468942 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNRateUsPopup::AddRemindListener(MNPopup/MNPopupAction)
extern "C"  void MNRateUsPopup_AddRemindListener_m1083635737 (MNRateUsPopup_t3514468942 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNRateUsPopup::AddRateUsListener(MNPopup/MNPopupAction)
extern "C"  void MNRateUsPopup_AddRateUsListener_m3438644293 (MNRateUsPopup_t3514468942 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNPopup::AddDismissListener(MNPopup/MNPopupAction)
extern "C"  void MNPopup_AddDismissListener_m879172814 (MNPopup_t2344454187 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNPopup::Show()
extern "C"  void MNPopup_Show_m2407814859 (MNPopup_t2344454187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP::ShowPreloader(System.String,System.String)
extern "C"  void MNP_ShowPreloader_m1216219635 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MNP::HidePreloader()
extern "C"  void MNP_HidePreloader_m2565935768 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void MNAndroidAlert::.ctor()
extern "C"  void MNAndroidAlert__ctor_m1330824194 (MNAndroidAlert_t2444998409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidAlert__ctor_m1330824194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MNAndroidAlert_t2444998409 * G_B2_0 = NULL;
	MNAndroidAlert_t2444998409 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_title_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_message_3(L_1);
		Action_1_t2019918284 * L_2 = ((MNAndroidAlert_t2444998409_StaticFields*)il2cpp_codegen_static_fields_for(MNAndroidAlert_t2444998409_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)MNAndroidAlert_U3COnCompleteU3Em__0_m2329909476_RuntimeMethod_var;
		Action_1_t2019918284 * L_4 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4099869023(L_4, NULL, L_3, /*hidden argument*/Action_1__ctor_m4099869023_RuntimeMethod_var);
		((MNAndroidAlert_t2444998409_StaticFields*)il2cpp_codegen_static_fields_for(MNAndroidAlert_t2444998409_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_4);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		Action_1_t2019918284 * L_5 = ((MNAndroidAlert_t2444998409_StaticFields*)il2cpp_codegen_static_fields_for(MNAndroidAlert_t2444998409_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		NullCheck(G_B2_0);
		G_B2_0->set_OnComplete_5(L_5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// MNAndroidAlert MNAndroidAlert::Create(System.String,System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  MNAndroidAlert_t2444998409 * MNAndroidAlert_Create_m3346940072 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, RuntimeObject* ___actions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidAlert_Create_m3346940072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MNAndroidAlert_t2444998409 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral612426437, /*hidden argument*/NULL);
		NullCheck(L_0);
		MNAndroidAlert_t2444998409 * L_1 = GameObject_AddComponent_TisMNAndroidAlert_t2444998409_m3230324289(L_0, /*hidden argument*/GameObject_AddComponent_TisMNAndroidAlert_t2444998409_m3230324289_RuntimeMethod_var);
		V_0 = L_1;
		MNAndroidAlert_t2444998409 * L_2 = V_0;
		String_t* L_3 = ___title0;
		NullCheck(L_2);
		L_2->set_title_2(L_3);
		MNAndroidAlert_t2444998409 * L_4 = V_0;
		String_t* L_5 = ___message1;
		NullCheck(L_4);
		L_4->set_message_3(L_5);
		MNAndroidAlert_t2444998409 * L_6 = V_0;
		RuntimeObject* L_7 = ___actions2;
		NullCheck(L_6);
		L_6->set_actions_4(L_7);
		MNAndroidAlert_t2444998409 * L_8 = V_0;
		return L_8;
	}
}
// System.Void MNAndroidAlert::Show()
extern "C"  void MNAndroidAlert_Show_m3199264168 (MNAndroidAlert_t2444998409 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidAlert_Show_m3199264168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->get_actions_4();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t827303578_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t2280021157_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		goto IL_0048;
	}

IL_002f:
	{
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, _stringLiteral3452614612, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t2280021157_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		StringBuilder_Append_m1965104174(L_9, L_11, /*hidden argument*/NULL);
	}

IL_0048:
	{
		RuntimeObject* L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
		if (L_13)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_14 = __this->get_title_2();
		String_t* L_15 = __this->get_message_3();
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var);
		MNP_PlatformSettings_t3087930686 * L_18 = MNP_PlatformSettings_get_Instance_m2773898975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = L_18->get_AndroidDialogTheme_5();
		MNAndroidNative_showMessage_m2469137584(NULL /*static, unused*/, L_14, L_15, L_17, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidAlert::onPopUpCallBack(System.String)
extern "C"  void MNAndroidAlert_onPopUpCallBack_m226267688 (MNAndroidAlert_t2444998409 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidAlert_onPopUpCallBack_m226267688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2019918284 * L_0 = __this->get_OnComplete_5();
		String_t* L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_m743277474(L_0, L_1, /*hidden argument*/Action_1_Invoke_m743277474_RuntimeMethod_var);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidAlert::<OnComplete>m__0(System.String)
extern "C"  void MNAndroidAlert_U3COnCompleteU3Em__0_m2329909476 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MNAndroidNative::.ctor()
extern "C"  void MNAndroidNative__ctor_m4116233211 (MNAndroidNative_t2982907439 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidNative::CallActivityFunction(System.String,System.Object[])
extern "C"  void MNAndroidNative_CallActivityFunction_m3848777755 (RuntimeObject * __this /* static, unused */, String_t* ___methodName0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidNative_CallActivityFunction_m3848777755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___methodName0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		MNProxyPool_CallStatic_m398663905(NULL /*static, unused*/, _stringLiteral456008947, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidNative::showMessage(System.String,System.String,System.String,MNAndroidDialogTheme)
extern "C"  void MNAndroidNative_showMessage_m2469137584 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___actions2, int32_t ___theme3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidNative_showMessage_m2469137584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		String_t* L_1 = ___title0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		String_t* L_5 = ___actions2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		int32_t L_7 = ___theme3;
		int32_t L_8 = ((int32_t)L_7);
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		MNAndroidNative_CallActivityFunction_m3848777755(NULL /*static, unused*/, _stringLiteral3335406256, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidNative::ShowPreloader(System.String,System.String,MNAndroidDialogTheme)
extern "C"  void MNAndroidNative_ShowPreloader_m2654586902 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, int32_t ___theme2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidNative_ShowPreloader_m2654586902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		String_t* L_1 = ___title0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		int32_t L_5 = ___theme2;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		MNAndroidNative_CallActivityFunction_m3848777755(NULL /*static, unused*/, _stringLiteral2679283682, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidNative::HidePreloader()
extern "C"  void MNAndroidNative_HidePreloader_m4216222762 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidNative_HidePreloader_m4216222762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MNAndroidNative_CallActivityFunction_m3848777755(NULL /*static, unused*/, _stringLiteral508918697, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNAndroidNative::RedirectStoreRatingPage(System.String)
extern "C"  void MNAndroidNative_RedirectStoreRatingPage_m3524441357 (RuntimeObject * __this /* static, unused */, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNAndroidNative_RedirectStoreRatingPage_m3524441357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		String_t* L_1 = ___url0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		MNAndroidNative_CallActivityFunction_m3848777755(NULL /*static, unused*/, _stringLiteral1516215752, L_0, /*hidden argument*/NULL);
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
// System.Void MNFeaturePreview::.ctor()
extern "C"  void MNFeaturePreview__ctor_m2656016388 (MNFeaturePreview_t389008354 * __this, const RuntimeMethod* method)
{
	{
		__this->set_buttonWidth_3(((int32_t)200));
		__this->set_buttonHeight_4(((int32_t)50));
		__this->set_StartY_5((20.0f));
		__this->set_StartX_6((10.0f));
		__this->set_XStartPos_7((10.0f));
		__this->set_YStartPos_8((10.0f));
		__this->set_XButtonStep_9((220.0f));
		__this->set_YButtonStep_10((60.0f));
		__this->set_YLableStep_11((40.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNFeaturePreview::InitStyles()
extern "C"  void MNFeaturePreview_InitStyles_m1732573373 (MNFeaturePreview_t389008354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNFeaturePreview_InitStyles_m1732573373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GUIStyle_t3956901511 * L_0 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_0, /*hidden argument*/NULL);
		__this->set_style_2(L_0);
		GUIStyle_t3956901511 * L_1 = __this->get_style_2();
		NullCheck(L_1);
		GUIStyleState_t1397964415 * L_2 = GUIStyle_get_normal_m729441812(L_1, /*hidden argument*/NULL);
		Color_t2555686324  L_3 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_textColor_m1105876047(L_2, L_3, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_4 = __this->get_style_2();
		NullCheck(L_4);
		GUIStyle_set_fontSize_m1566850023(L_4, ((int32_t)16), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_5 = __this->get_style_2();
		NullCheck(L_5);
		GUIStyle_set_fontStyle_m1497341802(L_5, 3, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_6 = __this->get_style_2();
		NullCheck(L_6);
		GUIStyle_set_alignment_m3944619660(L_6, 0, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_7 = __this->get_style_2();
		NullCheck(L_7);
		GUIStyle_set_wordWrap_m1419501823(L_7, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNFeaturePreview::Start()
extern "C"  void MNFeaturePreview_Start_m3193002726 (MNFeaturePreview_t389008354 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(4 /* System.Void MNFeaturePreview::InitStyles() */, __this);
		return;
	}
}
// System.Void MNFeaturePreview::UpdateToStartPos()
extern "C"  void MNFeaturePreview_UpdateToStartPos_m3548467640 (MNFeaturePreview_t389008354 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_YStartPos_8();
		__this->set_StartY_5(L_0);
		float L_1 = __this->get_XStartPos_7();
		__this->set_StartX_6(L_1);
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
// System.Void MNIOSAlert::.ctor()
extern "C"  void MNIOSAlert__ctor_m2286725273 (MNIOSAlert_t2758643397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNIOSAlert__ctor_m2286725273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MNIOSAlert_t2758643397 * G_B2_0 = NULL;
	MNIOSAlert_t2758643397 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_title_2(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_message_3(L_1);
		Action_1_t2019918284 * L_2 = ((MNIOSAlert_t2758643397_StaticFields*)il2cpp_codegen_static_fields_for(MNIOSAlert_t2758643397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		intptr_t L_3 = (intptr_t)MNIOSAlert_U3COnCompleteU3Em__0_m425783555_RuntimeMethod_var;
		Action_1_t2019918284 * L_4 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4099869023(L_4, NULL, L_3, /*hidden argument*/Action_1__ctor_m4099869023_RuntimeMethod_var);
		((MNIOSAlert_t2758643397_StaticFields*)il2cpp_codegen_static_fields_for(MNIOSAlert_t2758643397_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_4);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		Action_1_t2019918284 * L_5 = ((MNIOSAlert_t2758643397_StaticFields*)il2cpp_codegen_static_fields_for(MNIOSAlert_t2758643397_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		NullCheck(G_B2_0);
		G_B2_0->set_OnComplete_5(L_5);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// MNIOSAlert MNIOSAlert::Create(System.String,System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  MNIOSAlert_t2758643397 * MNIOSAlert_Create_m3040670208 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, RuntimeObject* ___actions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNIOSAlert_Create_m3040670208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MNIOSAlert_t2758643397 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral1457096102, /*hidden argument*/NULL);
		NullCheck(L_0);
		MNIOSAlert_t2758643397 * L_1 = GameObject_AddComponent_TisMNIOSAlert_t2758643397_m2359313214(L_0, /*hidden argument*/GameObject_AddComponent_TisMNIOSAlert_t2758643397_m2359313214_RuntimeMethod_var);
		V_0 = L_1;
		MNIOSAlert_t2758643397 * L_2 = V_0;
		String_t* L_3 = ___title0;
		NullCheck(L_2);
		L_2->set_title_2(L_3);
		MNIOSAlert_t2758643397 * L_4 = V_0;
		String_t* L_5 = ___message1;
		NullCheck(L_4);
		L_4->set_message_3(L_5);
		MNIOSAlert_t2758643397 * L_6 = V_0;
		RuntimeObject* L_7 = ___actions2;
		NullCheck(L_6);
		L_6->set_actions_4(L_7);
		MNIOSAlert_t2758643397 * L_8 = V_0;
		return L_8;
	}
}
// System.Void MNIOSAlert::Show()
extern "C"  void MNIOSAlert_Show_m2651477221 (MNIOSAlert_t2758643397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNIOSAlert_Show_m2651477221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->get_actions_4();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t827303578_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t2280021157_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		StringBuilder_Append_m1965104174(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		goto IL_0048;
	}

IL_002f:
	{
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_Append_m1965104174(L_8, _stringLiteral3452614612, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = V_0;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t2280021157_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		StringBuilder_Append_m1965104174(L_9, L_11, /*hidden argument*/NULL);
	}

IL_0048:
	{
		RuntimeObject* L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
		if (L_13)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_14 = __this->get_title_2();
		String_t* L_15 = __this->get_message_3();
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		MNIOSNative_showMessage_m3531223645(NULL /*static, unused*/, L_14, L_15, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNIOSAlert::onPopUpCallBack(System.String)
extern "C"  void MNIOSAlert_onPopUpCallBack_m1906982249 (MNIOSAlert_t2758643397 * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNIOSAlert_onPopUpCallBack_m1906982249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2019918284 * L_0 = __this->get_OnComplete_5();
		String_t* L_1 = ___result0;
		NullCheck(L_0);
		Action_1_Invoke_m743277474(L_0, L_1, /*hidden argument*/Action_1_Invoke_m743277474_RuntimeMethod_var);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNIOSAlert::<OnComplete>m__0(System.String)
extern "C"  void MNIOSAlert_U3COnCompleteU3Em__0_m425783555 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
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
// System.Void MNIOSNative::.ctor()
extern "C"  void MNIOSNative__ctor_m3582106494 (MNIOSNative_t1200185216 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL _MNP_ShowMessage(char*, char*, char*);
// System.Void MNIOSNative::_MNP_ShowMessage(System.String,System.String,System.String)
extern "C"  void MNIOSNative__MNP_ShowMessage_m3597078354 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___actions2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___title0' to native representation
	char* ____title0_marshaled = NULL;
	____title0_marshaled = il2cpp_codegen_marshal_string(___title0);

	// Marshaling of parameter '___message1' to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Marshaling of parameter '___actions2' to native representation
	char* ____actions2_marshaled = NULL;
	____actions2_marshaled = il2cpp_codegen_marshal_string(___actions2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_MNP_ShowMessage)(____title0_marshaled, ____message1_marshaled, ____actions2_marshaled);

	// Marshaling cleanup of parameter '___title0' native representation
	il2cpp_codegen_marshal_free(____title0_marshaled);
	____title0_marshaled = NULL;

	// Marshaling cleanup of parameter '___message1' native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

	// Marshaling cleanup of parameter '___actions2' native representation
	il2cpp_codegen_marshal_free(____actions2_marshaled);
	____actions2_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _MNP_DismissCurrentAlert();
// System.Void MNIOSNative::_MNP_DismissCurrentAlert()
extern "C"  void MNIOSNative__MNP_DismissCurrentAlert_m3620754221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_MNP_DismissCurrentAlert)();

}
extern "C" void DEFAULT_CALL _MNP_RedirectToAppStoreRatingPage(char*);
// System.Void MNIOSNative::_MNP_RedirectToAppStoreRatingPage(System.String)
extern "C"  void MNIOSNative__MNP_RedirectToAppStoreRatingPage_m3704447822 (RuntimeObject * __this /* static, unused */, String_t* ___appId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___appId0' to native representation
	char* ____appId0_marshaled = NULL;
	____appId0_marshaled = il2cpp_codegen_marshal_string(___appId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_MNP_RedirectToAppStoreRatingPage)(____appId0_marshaled);

	// Marshaling cleanup of parameter '___appId0' native representation
	il2cpp_codegen_marshal_free(____appId0_marshaled);
	____appId0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL _MNP_ShowPreloader();
// System.Void MNIOSNative::_MNP_ShowPreloader()
extern "C"  void MNIOSNative__MNP_ShowPreloader_m2162237655 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_MNP_ShowPreloader)();

}
extern "C" void DEFAULT_CALL _MNP_HidePreloader();
// System.Void MNIOSNative::_MNP_HidePreloader()
extern "C"  void MNIOSNative__MNP_HidePreloader_m400846517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_MNP_HidePreloader)();

}
// System.Void MNIOSNative::showMessage(System.String,System.String,System.String)
extern "C"  void MNIOSNative_showMessage_m3531223645 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, String_t* ___actions2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		String_t* L_1 = ___message1;
		String_t* L_2 = ___actions2;
		MNIOSNative__MNP_ShowMessage_m3597078354(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNIOSNative::RedirectToAppStoreRatingPage(System.String)
extern "C"  void MNIOSNative_RedirectToAppStoreRatingPage_m3678681813 (RuntimeObject * __this /* static, unused */, String_t* ___appleId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___appleId0;
		MNIOSNative__MNP_RedirectToAppStoreRatingPage_m3704447822(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNIOSNative::ShowPreloader()
extern "C"  void MNIOSNative_ShowPreloader_m2449300039 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		MNIOSNative__MNP_ShowPreloader_m2162237655(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNIOSNative::HidePreloader()
extern "C"  void MNIOSNative_HidePreloader_m2003724835 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		MNIOSNative__MNP_HidePreloader_m400846517(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNIOSNative::dismissCurrentAlert()
extern "C"  void MNIOSNative_dismissCurrentAlert_m2341291758 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		MNIOSNative__MNP_DismissCurrentAlert_m3620754221(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void MNP::.ctor()
extern "C"  void MNP__ctor_m3193206867 (MNP_t4105045159 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP::ShowPreloader(System.String,System.String)
extern "C"  void MNP_ShowPreloader_m1216219635 (RuntimeObject * __this /* static, unused */, String_t* ___title0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		MNIOSNative_ShowPreloader_m2449300039(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP::HidePreloader()
extern "C"  void MNP_HidePreloader_m2565935768 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		MNIOSNative_HidePreloader_m2003724835(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void MNP_EditorTesting::.ctor()
extern "C"  void MNP_EditorTesting__ctor_m3192168864 (MNP_EditorTesting_t3291812131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNP_EditorTesting__ctor_m3192168864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MNP_Singleton_1_t1784082960_il2cpp_TypeInfo_var);
		MNP_Singleton_1__ctor_m949567985(__this, /*hidden argument*/MNP_Singleton_1__ctor_m949567985_RuntimeMethod_var);
		return;
	}
}
// System.Void MNP_EditorTesting::Awake()
extern "C"  void MNP_EditorTesting_Awake_m713984912 (MNP_EditorTesting_t3291812131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNP_EditorTesting_Awake_m713984912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Resources_Load_TisGameObject_t1113636619_m2956672834(NULL /*static, unused*/, _stringLiteral3722926202, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m2956672834_RuntimeMethod_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_SetParent_m381167889(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		MNP_EditorUIController_t1772223415 * L_7 = GameObject_GetComponent_TisMNP_EditorUIController_t1772223415_m3837191597(L_6, /*hidden argument*/GameObject_GetComponent_TisMNP_EditorUIController_t1772223415_m3837191597_RuntimeMethod_var);
		__this->set_UiController_4(L_7);
		MNP_EditorUIController_t1772223415 * L_8 = __this->get_UiController_4();
		NullCheck(L_8);
		MNP_EditorUIController_Hide_m2156975991(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP_EditorTesting::Start()
extern "C"  void MNP_EditorTesting_Start_m1543705388 (MNP_EditorTesting_t3291812131 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MNP_EditorTesting::ShowPopup(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>,MNPopup/MNPopupAction)
extern "C"  void MNP_EditorTesting_ShowPopup_m3355353251 (MNP_EditorTesting_t3291812131 * __this, String_t* ___title0, String_t* ___message1, Dictionary_2_t1008909281 * ___actions2, MNPopupAction_t1223652982 * ___dismiss3, const RuntimeMethod* method)
{
	{
		MNP_EditorUIController_t1772223415 * L_0 = __this->get_UiController_4();
		String_t* L_1 = ___title0;
		NullCheck(L_0);
		MNP_EditorUIController_SetTitle_m1926355170(L_0, L_1, /*hidden argument*/NULL);
		MNP_EditorUIController_t1772223415 * L_2 = __this->get_UiController_4();
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		MNP_EditorUIController_SetMessage_m1263891014(L_2, L_3, /*hidden argument*/NULL);
		MNP_EditorUIController_t1772223415 * L_4 = __this->get_UiController_4();
		Dictionary_2_t1008909281 * L_5 = ___actions2;
		MNPopupAction_t1223652982 * L_6 = ___dismiss3;
		NullCheck(L_4);
		MNP_EditorUIController_SetActions_m802097226(L_4, L_5, L_6, /*hidden argument*/NULL);
		MNP_EditorUIController_t1772223415 * L_7 = __this->get_UiController_4();
		NullCheck(L_7);
		MNP_EditorUIController_Show_m2014271737(L_7, /*hidden argument*/NULL);
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
// System.Void MNP_EditorUIController::.ctor()
extern "C"  void MNP_EditorUIController__ctor_m1333365229 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP_EditorUIController::Awake()
extern "C"  void MNP_EditorUIController_Awake_m3356903060 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MNP_EditorUIController::Start()
extern "C"  void MNP_EditorUIController_Start_m1464424187 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MNP_EditorUIController::Hide()
extern "C"  void MNP_EditorUIController_Hide_m2156975991 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		__this->set_isActive_7((bool)0);
		GameObject_t1113636619 * L_0 = __this->get_Root_2();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0031;
	}

IL_001a:
	{
		MNP_UIButtonU5BU5D_t49492474* L_1 = __this->get_UIButtons_5();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MNP_UIButton_t3811144891 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_7 = V_0;
		MNP_UIButtonU5BU5D_t49492474* L_8 = __this->get_UIButtons_5();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void MNP_EditorUIController::SetTitle(System.String)
extern "C"  void MNP_EditorUIController_SetTitle_m1926355170 (MNP_EditorUIController_t1772223415 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isActive_7();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Text_t1901882714 * L_1 = __this->get_Title_3();
		String_t* L_2 = ___title0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void MNP_EditorUIController::SetMessage(System.String)
extern "C"  void MNP_EditorUIController_SetMessage_m1263891014 (MNP_EditorUIController_t1772223415 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isActive_7();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Text_t1901882714 * L_1 = __this->get_Message_4();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void MNP_EditorUIController::SetActions(System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction>,MNPopup/MNPopupAction)
extern "C"  void MNP_EditorUIController_SetActions_m802097226 (MNP_EditorUIController_t1772223415 * __this, Dictionary_2_t1008909281 * ___actions0, MNPopupAction_t1223652982 * ___dismissAction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNP_EditorUIController_SetActions_m802097226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t3406581448  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t2963092056  V_2;
	memset(&V_2, 0, sizeof(V_2));
	U3CSetActionsU3Ec__AnonStorey0_t1891340468 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_isActive_7();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		V_0 = 0;
		MNPopupAction_t1223652982 * L_1 = ___dismissAction1;
		__this->set_dismiss_6(L_1);
		Dictionary_2_t1008909281 * L_2 = ___actions0;
		NullCheck(L_2);
		Enumerator_t2963092056  L_3 = Dictionary_2_GetEnumerator_m1957078412(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m1957078412_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a0;
		}

IL_0021:
		{
			KeyValuePair_2_t3406581448  L_4 = Enumerator_get_Current_m1795896187((&V_2), /*hidden argument*/Enumerator_get_Current_m1795896187_RuntimeMethod_var);
			V_1 = L_4;
			U3CSetActionsU3Ec__AnonStorey0_t1891340468 * L_5 = (U3CSetActionsU3Ec__AnonStorey0_t1891340468 *)il2cpp_codegen_object_new(U3CSetActionsU3Ec__AnonStorey0_t1891340468_il2cpp_TypeInfo_var);
			U3CSetActionsU3Ec__AnonStorey0__ctor_m2935743158(L_5, /*hidden argument*/NULL);
			V_3 = L_5;
			U3CSetActionsU3Ec__AnonStorey0_t1891340468 * L_6 = V_3;
			NullCheck(L_6);
			L_6->set_U24this_1(__this);
			MNP_UIButtonU5BU5D_t49492474* L_7 = __this->get_UIButtons_5();
			int32_t L_8 = V_0;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			MNP_UIButton_t3811144891 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			NullCheck(L_10);
			Text_t1901882714 * L_11 = L_10->get_Title_3();
			String_t* L_12 = KeyValuePair_2_get_Key_m1595870816((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m1595870816_RuntimeMethod_var);
			NullCheck(L_11);
			VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
			U3CSetActionsU3Ec__AnonStorey0_t1891340468 * L_13 = V_3;
			MNPopupAction_t1223652982 * L_14 = KeyValuePair_2_get_Value_m149761797((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m149761797_RuntimeMethod_var);
			NullCheck(L_14);
			RuntimeObject * L_15 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.Delegate::Clone() */, L_14);
			NullCheck(L_13);
			L_13->set_a_0(((MNPopupAction_t1223652982 *)IsInstSealed((RuntimeObject*)L_15, MNPopupAction_t1223652982_il2cpp_TypeInfo_var)));
			MNP_UIButtonU5BU5D_t49492474* L_16 = __this->get_UIButtons_5();
			int32_t L_17 = V_0;
			NullCheck(L_16);
			int32_t L_18 = L_17;
			MNP_UIButton_t3811144891 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
			NullCheck(L_19);
			Button_t4055032469 * L_20 = L_19->get_Button_2();
			NullCheck(L_20);
			ButtonClickedEvent_t48803504 * L_21 = Button_get_onClick_m2332132945(L_20, /*hidden argument*/NULL);
			U3CSetActionsU3Ec__AnonStorey0_t1891340468 * L_22 = V_3;
			intptr_t L_23 = (intptr_t)U3CSetActionsU3Ec__AnonStorey0_U3CU3Em__0_m4222790365_RuntimeMethod_var;
			UnityAction_t3245792599 * L_24 = (UnityAction_t3245792599 *)il2cpp_codegen_object_new(UnityAction_t3245792599_il2cpp_TypeInfo_var);
			UnityAction__ctor_m772160306(L_24, L_22, L_23, /*hidden argument*/NULL);
			NullCheck(L_21);
			UnityEvent_AddListener_m2276267359(L_21, L_24, /*hidden argument*/NULL);
			MNP_UIButtonU5BU5D_t49492474* L_25 = __this->get_UIButtons_5();
			int32_t L_26 = V_0;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			MNP_UIButton_t3811144891 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			NullCheck(L_28);
			GameObject_t1113636619 * L_29 = Component_get_gameObject_m442555142(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			GameObject_SetActive_m796801857(L_29, (bool)1, /*hidden argument*/NULL);
			int32_t L_30 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		}

IL_00a0:
		{
			bool L_31 = Enumerator_MoveNext_m2936311680((&V_2), /*hidden argument*/Enumerator_MoveNext_m2936311680_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0021;
			}
		}

IL_00ac:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m661348193((&V_2), /*hidden argument*/Enumerator_Dispose_m661348193_RuntimeMethod_var);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bf:
	{
		return;
	}
}
// System.Void MNP_EditorUIController::Show()
extern "C"  void MNP_EditorUIController_Show_m2014271737 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method)
{
	{
		__this->set_isActive_7((bool)1);
		GameObject_t1113636619 * L_0 = __this->get_Root_2();
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP_EditorUIController::OnDismiss()
extern "C"  void MNP_EditorUIController_OnDismiss_m1039666939 (MNP_EditorUIController_t1772223415 * __this, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = __this->get_dismiss_6();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		MNP_EditorUIController_Hide_m2156975991(__this, /*hidden argument*/NULL);
		MNPopupAction_t1223652982 * L_1 = __this->get_dismiss_6();
		NullCheck(L_1);
		MNPopupAction_Invoke_m4206352591(L_1, /*hidden argument*/NULL);
		__this->set_dismiss_6((MNPopupAction_t1223652982 *)NULL);
	}

IL_0023:
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
// System.Void MNP_EditorUIController/<SetActions>c__AnonStorey0::.ctor()
extern "C"  void U3CSetActionsU3Ec__AnonStorey0__ctor_m2935743158 (U3CSetActionsU3Ec__AnonStorey0_t1891340468 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP_EditorUIController/<SetActions>c__AnonStorey0::<>m__0()
extern "C"  void U3CSetActionsU3Ec__AnonStorey0_U3CU3Em__0_m4222790365 (U3CSetActionsU3Ec__AnonStorey0_t1891340468 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		MNPopupAction_t1223652982 * L_0 = __this->get_a_0();
		NullCheck(L_0);
		MNPopupAction_Invoke_m4206352591(L_0, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0032;
	}

IL_0012:
	{
		MNP_EditorUIController_t1772223415 * L_1 = __this->get_U24this_1();
		NullCheck(L_1);
		MNP_UIButtonU5BU5D_t49492474* L_2 = L_1->get_UIButtons_5();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MNP_UIButton_t3811144891 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Button_t4055032469 * L_6 = L_5->get_Button_2();
		NullCheck(L_6);
		ButtonClickedEvent_t48803504 * L_7 = Button_get_onClick_m2332132945(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityEventBase_RemoveAllListeners_m858411973(L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		MNP_EditorUIController_t1772223415 * L_10 = __this->get_U24this_1();
		NullCheck(L_10);
		MNP_UIButtonU5BU5D_t49492474* L_11 = L_10->get_UIButtons_5();
		NullCheck(L_11);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0012;
		}
	}
	{
		MNP_EditorUIController_t1772223415 * L_12 = __this->get_U24this_1();
		NullCheck(L_12);
		MNP_EditorUIController_Hide_m2156975991(L_12, /*hidden argument*/NULL);
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
// System.Void MNP_PlatformSettings::.ctor()
extern "C"  void MNP_PlatformSettings__ctor_m2444854084 (MNP_PlatformSettings_t3087930686 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// MNP_PlatformSettings MNP_PlatformSettings::get_Instance()
extern "C"  MNP_PlatformSettings_t3087930686 * MNP_PlatformSettings_get_Instance_m2773898975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNP_PlatformSettings_get_Instance_m2773898975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var);
		MNP_PlatformSettings_t3087930686 * L_0 = ((MNP_PlatformSettings_t3087930686_StaticFields*)il2cpp_codegen_static_fields_for(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t631007953 * L_2 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral101239041, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var);
		((MNP_PlatformSettings_t3087930686_StaticFields*)il2cpp_codegen_static_fields_for(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var))->set_instance_7(((MNP_PlatformSettings_t3087930686 *)IsInstClass((RuntimeObject*)L_2, MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var)));
		MNP_PlatformSettings_t3087930686 * L_3 = ((MNP_PlatformSettings_t3087930686_StaticFields*)il2cpp_codegen_static_fields_for(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		MNP_PlatformSettings_t3087930686 * L_5 = ScriptableObject_CreateInstance_TisMNP_PlatformSettings_t3087930686_m2234944918(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisMNP_PlatformSettings_t3087930686_m2234944918_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var);
		((MNP_PlatformSettings_t3087930686_StaticFields*)il2cpp_codegen_static_fields_for(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var))->set_instance_7(L_5);
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var);
		MNP_PlatformSettings_t3087930686 * L_6 = ((MNP_PlatformSettings_t3087930686_StaticFields*)il2cpp_codegen_static_fields_for(MNP_PlatformSettings_t3087930686_il2cpp_TypeInfo_var))->get_instance_7();
		return L_6;
	}
}
// System.Void MNP_PlatformSettings::.cctor()
extern "C"  void MNP_PlatformSettings__cctor_m2072035493 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void MNP_UIButton::.ctor()
extern "C"  void MNP_UIButton__ctor_m4212508654 (MNP_UIButton_t3811144891 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNP_UIButton::Start()
extern "C"  void MNP_UIButton_Start_m33518258 (MNP_UIButton_t3811144891 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MNP_UIButton::SetText(System.String)
extern "C"  void MNP_UIButton_SetText_m2483457923 (MNP_UIButton_t3811144891 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_Title_3();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
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
// System.Void MNPopup::.ctor(System.String,System.String)
extern "C"  void MNPopup__ctor_m3069196290 (MNPopup_t2344454187 * __this, String_t* ___title0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNPopup__ctor_m3069196290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1008909281 * L_0 = (Dictionary_2_t1008909281 *)il2cpp_codegen_object_new(Dictionary_2_t1008909281_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1216260279(L_0, /*hidden argument*/Dictionary_2__ctor_m1216260279_RuntimeMethod_var);
		__this->set_actions_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_title_2(L_1);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_message_3(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t1008909281 * L_3 = (Dictionary_2_t1008909281 *)il2cpp_codegen_object_new(Dictionary_2_t1008909281_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1216260279(L_3, /*hidden argument*/Dictionary_2__ctor_m1216260279_RuntimeMethod_var);
		__this->set_actions_0(L_3);
		String_t* L_4 = ___title0;
		__this->set_title_2(L_4);
		String_t* L_5 = ___message1;
		__this->set_message_3(L_5);
		return;
	}
}
// System.Void MNPopup::AddAction(System.String,MNPopup/MNPopupAction)
extern "C"  void MNPopup_AddAction_m2914407455 (MNPopup_t2344454187 * __this, String_t* ___title0, MNPopupAction_t1223652982 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNPopup_AddAction_m2914407455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1008909281 * L_0 = __this->get_actions_0();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m4035089161(L_0, /*hidden argument*/Dictionary_2_get_Count_m4035089161_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral773892206, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0020:
	{
		Dictionary_2_t1008909281 * L_2 = __this->get_actions_0();
		String_t* L_3 = ___title0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_ContainsKey_m4223506253(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m4223506253_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, _stringLiteral1546526260, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0040:
	{
		Dictionary_2_t1008909281 * L_5 = __this->get_actions_0();
		String_t* L_6 = ___title0;
		MNPopupAction_t1223652982 * L_7 = ___callback1;
		NullCheck(L_5);
		Dictionary_2_Add_m3318967940(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m3318967940_RuntimeMethod_var);
	}

IL_004d:
	{
		return;
	}
}
// System.Void MNPopup::AddDismissListener(MNPopup/MNPopupAction)
extern "C"  void MNPopup_AddDismissListener_m879172814 (MNPopup_t2344454187 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = ___callback0;
		__this->set_dismissCallback_1(L_0);
		return;
	}
}
// System.Void MNPopup::Show()
extern "C"  void MNPopup_Show_m2407814859 (MNPopup_t2344454187 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNPopup_Show_m2407814859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MNIOSAlert_t2758643397 * V_0 = NULL;
	{
		String_t* L_0 = __this->get_title_2();
		String_t* L_1 = __this->get_message_3();
		Dictionary_2_t1008909281 * L_2 = __this->get_actions_0();
		NullCheck(L_2);
		KeyCollection_t1198584752 * L_3 = Dictionary_2_get_Keys_m2861062471(L_2, /*hidden argument*/Dictionary_2_get_Keys_m2861062471_RuntimeMethod_var);
		MNIOSAlert_t2758643397 * L_4 = MNIOSAlert_Create_m3040670208(NULL /*static, unused*/, L_0, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MNIOSAlert_t2758643397 * L_5 = V_0;
		MNIOSAlert_t2758643397 * L_6 = L_5;
		NullCheck(L_6);
		Action_1_t2019918284 * L_7 = L_6->get_OnComplete_5();
		intptr_t L_8 = (intptr_t)MNPopup_OnPopupCompleted_m4025483403_RuntimeMethod_var;
		Action_1_t2019918284 * L_9 = (Action_1_t2019918284 *)il2cpp_codegen_object_new(Action_1_t2019918284_il2cpp_TypeInfo_var);
		Action_1__ctor_m4099869023(L_9, __this, L_8, /*hidden argument*/Action_1__ctor_m4099869023_RuntimeMethod_var);
		Delegate_t1188392813 * L_10 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_OnComplete_5(((Action_1_t2019918284 *)CastclassSealed((RuntimeObject*)L_10, Action_1_t2019918284_il2cpp_TypeInfo_var)));
		MNIOSAlert_t2758643397 * L_11 = V_0;
		NullCheck(L_11);
		MNIOSAlert_Show_m2651477221(L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.String MNPopup::get_Title()
extern "C"  String_t* MNPopup_get_Title_m323630273 (MNPopup_t2344454187 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_title_2();
		return L_0;
	}
}
// System.String MNPopup::get_Message()
extern "C"  String_t* MNPopup_get_Message_m3208123396 (MNPopup_t2344454187 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_message_3();
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,MNPopup/MNPopupAction> MNPopup::get_Actions()
extern "C"  Dictionary_2_t1008909281 * MNPopup_get_Actions_m853159513 (MNPopup_t2344454187 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t1008909281 * L_0 = __this->get_actions_0();
		return L_0;
	}
}
// System.Void MNPopup::OnPopupCompleted(System.String)
extern "C"  void MNPopup_OnPopupCompleted_m4025483403 (MNPopup_t2344454187 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNPopup_OnPopupCompleted_m4025483403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1008909281 * L_0 = __this->get_actions_0();
		String_t* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m4223506253(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m4223506253_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t1008909281 * L_3 = __this->get_actions_0();
		String_t* L_4 = ___action0;
		NullCheck(L_3);
		MNPopupAction_t1223652982 * L_5 = Dictionary_2_get_Item_m360236963(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_m360236963_RuntimeMethod_var);
		NullCheck(L_5);
		MNPopupAction_Invoke_m4206352591(L_5, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0027:
	{
		String_t* L_6 = ___action0;
		NullCheck(L_6);
		bool L_7 = String_Equals_m2270643605(L_6, _stringLiteral146871817, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		MNPopupAction_t1223652982 * L_8 = __this->get_dismissCallback_1();
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		MNPopupAction_t1223652982 * L_9 = __this->get_dismissCallback_1();
		NullCheck(L_9);
		MNPopupAction_Invoke_m4206352591(L_9, /*hidden argument*/NULL);
	}

IL_004d:
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
extern "C"  void DelegatePInvokeWrapper_MNPopupAction_t1223652982 (MNPopupAction_t1223652982 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MNPopup/MNPopupAction::.ctor(System.Object,System.IntPtr)
extern "C"  void MNPopupAction__ctor_m3793848104 (MNPopupAction_t1223652982 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MNPopup/MNPopupAction::Invoke()
extern "C"  void MNPopupAction_Invoke_m4206352591 (MNPopupAction_t1223652982 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MNPopupAction_Invoke_m4206352591((MNPopupAction_t1223652982 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MNPopup/MNPopupAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MNPopupAction_BeginInvoke_m3955883575 (MNPopupAction_t1223652982 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void MNPopup/MNPopupAction::EndInvoke(System.IAsyncResult)
extern "C"  void MNPopupAction_EndInvoke_m3466195399 (MNPopupAction_t1223652982 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MNProxyPool::.ctor()
extern "C"  void MNProxyPool__ctor_m1908829952 (MNProxyPool_t755738562 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNProxyPool::CallStatic(System.String,System.String,System.Object[])
extern "C"  void MNProxyPool_CallStatic_m398663905 (RuntimeObject * __this /* static, unused */, String_t* ___className0, String_t* ___methodName1, ObjectU5BU5D_t2843939325* ___args2, const RuntimeMethod* method)
{
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
// System.Void MNRateUsPopup::.ctor(System.String,System.String,System.String,System.String,System.String)
extern "C"  void MNRateUsPopup__ctor_m231298984 (MNRateUsPopup_t3514468942 * __this, String_t* ___title0, String_t* ___message1, String_t* ___rateUs2, String_t* ___decline3, String_t* ___remind4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNRateUsPopup__ctor_m231298984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_appleId_9(L_0);
		String_t* L_1 = ___title0;
		String_t* L_2 = ___message1;
		MNPopup__ctor_m3069196290(__this, L_1, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___remind4;
		intptr_t L_4 = (intptr_t)MNRateUsPopup_U3CMNRateUsPopupU3Em__0_m583524513_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_5 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_5, __this, L_4, /*hidden argument*/NULL);
		MNPopup_AddAction_m2914407455(__this, L_3, L_5, /*hidden argument*/NULL);
		String_t* L_6 = ___decline3;
		intptr_t L_7 = (intptr_t)MNRateUsPopup_U3CMNRateUsPopupU3Em__1_m2539839649_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_8 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_8, __this, L_7, /*hidden argument*/NULL);
		MNPopup_AddAction_m2914407455(__this, L_6, L_8, /*hidden argument*/NULL);
		String_t* L_9 = ___rateUs2;
		intptr_t L_10 = (intptr_t)MNRateUsPopup_U3CMNRateUsPopupU3Em__2_m201187489_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_11 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_11, __this, L_10, /*hidden argument*/NULL);
		MNPopup_AddAction_m2914407455(__this, L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNRateUsPopup::SetAppleId(System.String)
extern "C"  void MNRateUsPopup_SetAppleId_m3859701770 (MNRateUsPopup_t3514468942 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_appleId_9(L_0);
		return;
	}
}
// System.Void MNRateUsPopup::SetAndroidAppUrl(System.String)
extern "C"  void MNRateUsPopup_SetAndroidAppUrl_m2530085604 (MNRateUsPopup_t3514468942 * __this, String_t* ___appUrl0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MNRateUsPopup::AddRateUsListener(MNPopup/MNPopupAction)
extern "C"  void MNRateUsPopup_AddRateUsListener_m3438644293 (MNRateUsPopup_t3514468942 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = ___callback0;
		__this->set_rateUsListener_8(L_0);
		return;
	}
}
// System.Void MNRateUsPopup::AddRemindListener(MNPopup/MNPopupAction)
extern "C"  void MNRateUsPopup_AddRemindListener_m1083635737 (MNRateUsPopup_t3514468942 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = ___callback0;
		__this->set_remindListener_6(L_0);
		return;
	}
}
// System.Void MNRateUsPopup::AddDeclineListener(MNPopup/MNPopupAction)
extern "C"  void MNRateUsPopup_AddDeclineListener_m1236410923 (MNRateUsPopup_t3514468942 * __this, MNPopupAction_t1223652982 * ___callback0, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = ___callback0;
		__this->set_declineListener_7(L_0);
		return;
	}
}
// System.Void MNRateUsPopup::<MNRateUsPopup>m__0()
extern "C"  void MNRateUsPopup_U3CMNRateUsPopupU3Em__0_m583524513 (MNRateUsPopup_t3514468942 * __this, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = __this->get_remindListener_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MNPopupAction_t1223652982 * L_1 = __this->get_remindListener_6();
		NullCheck(L_1);
		MNPopupAction_Invoke_m4206352591(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void MNRateUsPopup::<MNRateUsPopup>m__1()
extern "C"  void MNRateUsPopup_U3CMNRateUsPopupU3Em__1_m2539839649 (MNRateUsPopup_t3514468942 * __this, const RuntimeMethod* method)
{
	{
		MNPopupAction_t1223652982 * L_0 = __this->get_declineListener_7();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MNPopupAction_t1223652982 * L_1 = __this->get_declineListener_7();
		NullCheck(L_1);
		MNPopupAction_Invoke_m4206352591(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void MNRateUsPopup::<MNRateUsPopup>m__2()
extern "C"  void MNRateUsPopup_U3CMNRateUsPopupU3Em__2_m201187489 (MNRateUsPopup_t3514468942 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_appleId_9();
		MNIOSNative_RedirectToAppStoreRatingPage_m3678681813(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		MNPopupAction_t1223652982 * L_1 = __this->get_rateUsListener_8();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		MNPopupAction_t1223652982 * L_2 = __this->get_rateUsListener_8();
		NullCheck(L_2);
		MNPopupAction_Invoke_m4206352591(L_2, /*hidden argument*/NULL);
	}

IL_0021:
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
// System.Void MNUseExample::.ctor()
extern "C"  void MNUseExample__ctor_m2123611588 (MNUseExample_t4260541090 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample__ctor_m2123611588_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_appleId_12(_stringLiteral3045211510);
		__this->set_androidAppUrl_13(_stringLiteral1023043805);
		MNFeaturePreview__ctor_m2656016388(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::Awake()
extern "C"  void MNUseExample_Awake_m227351329 (MNUseExample_t4260541090 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MNUseExample::OnGUI()
extern "C"  void MNUseExample_OnGUI_m786938601 (MNUseExample_t4260541090 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_OnGUI_m786938601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MNRateUsPopup_t3514468942 * V_0 = NULL;
	MNPopup_t2344454187 * V_1 = NULL;
	MNPopup_t2344454187 * V_2 = NULL;
	MNRateUsPopup_t3514468942 * G_B3_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B2_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B5_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B4_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B7_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B6_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B9_0 = NULL;
	MNRateUsPopup_t3514468942 * G_B8_0 = NULL;
	String_t* G_B13_0 = NULL;
	MNPopup_t2344454187 * G_B13_1 = NULL;
	String_t* G_B12_0 = NULL;
	MNPopup_t2344454187 * G_B12_1 = NULL;
	String_t* G_B15_0 = NULL;
	MNPopup_t2344454187 * G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	MNPopup_t2344454187 * G_B14_1 = NULL;
	MNPopup_t2344454187 * G_B17_0 = NULL;
	MNPopup_t2344454187 * G_B16_0 = NULL;
	String_t* G_B21_0 = NULL;
	MNPopup_t2344454187 * G_B21_1 = NULL;
	String_t* G_B20_0 = NULL;
	MNPopup_t2344454187 * G_B20_1 = NULL;
	MNPopup_t2344454187 * G_B23_0 = NULL;
	MNPopup_t2344454187 * G_B22_0 = NULL;
	{
		MNFeaturePreview_UpdateToStartPos_m3548467640(__this, /*hidden argument*/NULL);
		float L_0 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_1 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), L_0, L_1, (((float)((float)L_2))), (40.0f), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_4 = ((MNFeaturePreview_t389008354 *)__this)->get_style_2();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_3, _stringLiteral2439892768, L_4, /*hidden argument*/NULL);
		float L_5 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		float L_6 = ((MNFeaturePreview_t389008354 *)__this)->get_YLableStep_11();
		((MNFeaturePreview_t389008354 *)__this)->set_StartY_5(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		float L_7 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_8 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		int32_t L_9 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonWidth_3();
		int32_t L_10 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonHeight_4();
		Rect_t2360479859  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Rect__ctor_m2614021312((&L_11), L_7, L_8, (((float)((float)L_9))), (((float)((float)L_10))), /*hidden argument*/NULL);
		bool L_12 = GUI_Button_m1518979886(NULL /*static, unused*/, L_11, _stringLiteral1986594923, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_013c;
		}
	}
	{
		MNRateUsPopup_t3514468942 * L_13 = (MNRateUsPopup_t3514468942 *)il2cpp_codegen_object_new(MNRateUsPopup_t3514468942_il2cpp_TypeInfo_var);
		MNRateUsPopup__ctor_m231298984(L_13, _stringLiteral4293042637, _stringLiteral472191716, _stringLiteral4290946605, _stringLiteral771143923, _stringLiteral78692466, /*hidden argument*/NULL);
		V_0 = L_13;
		MNRateUsPopup_t3514468942 * L_14 = V_0;
		String_t* L_15 = __this->get_appleId_12();
		NullCheck(L_14);
		MNRateUsPopup_SetAppleId_m3859701770(L_14, L_15, /*hidden argument*/NULL);
		MNRateUsPopup_t3514468942 * L_16 = V_0;
		String_t* L_17 = __this->get_androidAppUrl_13();
		NullCheck(L_16);
		MNRateUsPopup_SetAndroidAppUrl_m2530085604(L_16, L_17, /*hidden argument*/NULL);
		MNRateUsPopup_t3514468942 * L_18 = V_0;
		MNPopupAction_t1223652982 * L_19 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_14();
		G_B2_0 = L_18;
		if (L_19)
		{
			G_B3_0 = L_18;
			goto IL_00c3;
		}
	}
	{
		intptr_t L_20 = (intptr_t)MNUseExample_U3COnGUIU3Em__0_m4187805135_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_21 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_21, NULL, L_20, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_14(L_21);
		G_B3_0 = G_B2_0;
	}

IL_00c3:
	{
		MNPopupAction_t1223652982 * L_22 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_14();
		NullCheck(G_B3_0);
		MNRateUsPopup_AddDeclineListener_m1236410923(G_B3_0, L_22, /*hidden argument*/NULL);
		MNRateUsPopup_t3514468942 * L_23 = V_0;
		MNPopupAction_t1223652982 * L_24 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_15();
		G_B4_0 = L_23;
		if (L_24)
		{
			G_B5_0 = L_23;
			goto IL_00e6;
		}
	}
	{
		intptr_t L_25 = (intptr_t)MNUseExample_U3COnGUIU3Em__1_m2621721194_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_26 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_26, NULL, L_25, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_15(L_26);
		G_B5_0 = G_B4_0;
	}

IL_00e6:
	{
		MNPopupAction_t1223652982 * L_27 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_15();
		NullCheck(G_B5_0);
		MNRateUsPopup_AddRemindListener_m1083635737(G_B5_0, L_27, /*hidden argument*/NULL);
		MNRateUsPopup_t3514468942 * L_28 = V_0;
		MNPopupAction_t1223652982 * L_29 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_16();
		G_B6_0 = L_28;
		if (L_29)
		{
			G_B7_0 = L_28;
			goto IL_0109;
		}
	}
	{
		intptr_t L_30 = (intptr_t)MNUseExample_U3COnGUIU3Em__2_m3025005721_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_31 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_31, NULL, L_30, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache2_16(L_31);
		G_B7_0 = G_B6_0;
	}

IL_0109:
	{
		MNPopupAction_t1223652982 * L_32 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache2_16();
		NullCheck(G_B7_0);
		MNRateUsPopup_AddRateUsListener_m3438644293(G_B7_0, L_32, /*hidden argument*/NULL);
		MNRateUsPopup_t3514468942 * L_33 = V_0;
		MNPopupAction_t1223652982 * L_34 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_17();
		G_B8_0 = L_33;
		if (L_34)
		{
			G_B9_0 = L_33;
			goto IL_012c;
		}
	}
	{
		intptr_t L_35 = (intptr_t)MNUseExample_U3COnGUIU3Em__3_m1458921780_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_36 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_36, NULL, L_35, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache3_17(L_36);
		G_B9_0 = G_B8_0;
	}

IL_012c:
	{
		MNPopupAction_t1223652982 * L_37 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache3_17();
		NullCheck(G_B9_0);
		MNPopup_AddDismissListener_m879172814(G_B9_0, L_37, /*hidden argument*/NULL);
		MNRateUsPopup_t3514468942 * L_38 = V_0;
		NullCheck(L_38);
		MNPopup_Show_m2407814859(L_38, /*hidden argument*/NULL);
	}

IL_013c:
	{
		float L_39 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_40 = ((MNFeaturePreview_t389008354 *)__this)->get_XButtonStep_9();
		((MNFeaturePreview_t389008354 *)__this)->set_StartX_6(((float)il2cpp_codegen_add((float)L_39, (float)L_40)));
		float L_41 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_42 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		int32_t L_43 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonWidth_3();
		int32_t L_44 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonHeight_4();
		Rect_t2360479859  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Rect__ctor_m2614021312((&L_45), L_41, L_42, (((float)((float)L_43))), (((float)((float)L_44))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_46 = GUI_Button_m1518979886(NULL /*static, unused*/, L_45, _stringLiteral1472239736, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0206;
		}
	}
	{
		MNPopup_t2344454187 * L_47 = (MNPopup_t2344454187 *)il2cpp_codegen_object_new(MNPopup_t2344454187_il2cpp_TypeInfo_var);
		MNPopup__ctor_m3069196290(L_47, _stringLiteral3963993483, _stringLiteral1625897302, /*hidden argument*/NULL);
		V_1 = L_47;
		MNPopup_t2344454187 * L_48 = V_1;
		MNPopupAction_t1223652982 * L_49 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_18();
		G_B12_0 = _stringLiteral2392305547;
		G_B12_1 = L_48;
		if (L_49)
		{
			G_B13_0 = _stringLiteral2392305547;
			G_B13_1 = L_48;
			goto IL_01ab;
		}
	}
	{
		intptr_t L_50 = (intptr_t)MNUseExample_U3COnGUIU3Em__4_m1862206307_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_51 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_51, NULL, L_50, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache4_18(L_51);
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
	}

IL_01ab:
	{
		MNPopupAction_t1223652982 * L_52 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache4_18();
		NullCheck(G_B13_1);
		MNPopup_AddAction_m2914407455(G_B13_1, G_B13_0, L_52, /*hidden argument*/NULL);
		MNPopup_t2344454187 * L_53 = V_1;
		MNPopupAction_t1223652982 * L_54 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache5_19();
		G_B14_0 = _stringLiteral2795590074;
		G_B14_1 = L_53;
		if (L_54)
		{
			G_B15_0 = _stringLiteral2795590074;
			G_B15_1 = L_53;
			goto IL_01d3;
		}
	}
	{
		intptr_t L_55 = (intptr_t)MNUseExample_U3COnGUIU3Em__5_m296122366_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_56 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_56, NULL, L_55, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache5_19(L_56);
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
	}

IL_01d3:
	{
		MNPopupAction_t1223652982 * L_57 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache5_19();
		NullCheck(G_B15_1);
		MNPopup_AddAction_m2914407455(G_B15_1, G_B15_0, L_57, /*hidden argument*/NULL);
		MNPopup_t2344454187 * L_58 = V_1;
		MNPopupAction_t1223652982 * L_59 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache6_20();
		G_B16_0 = L_58;
		if (L_59)
		{
			G_B17_0 = L_58;
			goto IL_01f6;
		}
	}
	{
		intptr_t L_60 = (intptr_t)MNUseExample_U3COnGUIU3Em__6_m699406893_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_61 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_61, NULL, L_60, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache6_20(L_61);
		G_B17_0 = G_B16_0;
	}

IL_01f6:
	{
		MNPopupAction_t1223652982 * L_62 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache6_20();
		NullCheck(G_B17_0);
		MNPopup_AddDismissListener_m879172814(G_B17_0, L_62, /*hidden argument*/NULL);
		MNPopup_t2344454187 * L_63 = V_1;
		NullCheck(L_63);
		MNPopup_Show_m2407814859(L_63, /*hidden argument*/NULL);
	}

IL_0206:
	{
		float L_64 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_65 = ((MNFeaturePreview_t389008354 *)__this)->get_XButtonStep_9();
		((MNFeaturePreview_t389008354 *)__this)->set_StartX_6(((float)il2cpp_codegen_add((float)L_64, (float)L_65)));
		float L_66 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_67 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		int32_t L_68 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonWidth_3();
		int32_t L_69 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonHeight_4();
		Rect_t2360479859  L_70;
		memset(&L_70, 0, sizeof(L_70));
		Rect__ctor_m2614021312((&L_70), L_66, L_67, (((float)((float)L_68))), (((float)((float)L_69))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_71 = GUI_Button_m1518979886(NULL /*static, unused*/, L_70, _stringLiteral3484363638, /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_02a8;
		}
	}
	{
		MNPopup_t2344454187 * L_72 = (MNPopup_t2344454187 *)il2cpp_codegen_object_new(MNPopup_t2344454187_il2cpp_TypeInfo_var);
		MNPopup__ctor_m3069196290(L_72, _stringLiteral3963993483, _stringLiteral1625897302, /*hidden argument*/NULL);
		V_2 = L_72;
		MNPopup_t2344454187 * L_73 = V_2;
		MNPopupAction_t1223652982 * L_74 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache7_21();
		G_B20_0 = _stringLiteral3455039457;
		G_B20_1 = L_73;
		if (L_74)
		{
			G_B21_0 = _stringLiteral3455039457;
			G_B21_1 = L_73;
			goto IL_0275;
		}
	}
	{
		intptr_t L_75 = (intptr_t)MNUseExample_U3COnGUIU3Em__7_m3428290248_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_76 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_76, NULL, L_75, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache7_21(L_76);
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
	}

IL_0275:
	{
		MNPopupAction_t1223652982 * L_77 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache7_21();
		NullCheck(G_B21_1);
		MNPopup_AddAction_m2914407455(G_B21_1, G_B21_0, L_77, /*hidden argument*/NULL);
		MNPopup_t2344454187 * L_78 = V_2;
		MNPopupAction_t1223652982 * L_79 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache8_22();
		G_B22_0 = L_78;
		if (L_79)
		{
			G_B23_0 = L_78;
			goto IL_0298;
		}
	}
	{
		intptr_t L_80 = (intptr_t)MNUseExample_U3COnGUIU3Em__8_m3831574775_RuntimeMethod_var;
		MNPopupAction_t1223652982 * L_81 = (MNPopupAction_t1223652982 *)il2cpp_codegen_object_new(MNPopupAction_t1223652982_il2cpp_TypeInfo_var);
		MNPopupAction__ctor_m3793848104(L_81, NULL, L_80, /*hidden argument*/NULL);
		((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache8_22(L_81);
		G_B23_0 = G_B22_0;
	}

IL_0298:
	{
		MNPopupAction_t1223652982 * L_82 = ((MNUseExample_t4260541090_StaticFields*)il2cpp_codegen_static_fields_for(MNUseExample_t4260541090_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache8_22();
		NullCheck(G_B23_0);
		MNPopup_AddDismissListener_m879172814(G_B23_0, L_82, /*hidden argument*/NULL);
		MNPopup_t2344454187 * L_83 = V_2;
		NullCheck(L_83);
		MNPopup_Show_m2407814859(L_83, /*hidden argument*/NULL);
	}

IL_02a8:
	{
		float L_84 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		float L_85 = ((MNFeaturePreview_t389008354 *)__this)->get_YButtonStep_10();
		((MNFeaturePreview_t389008354 *)__this)->set_StartY_5(((float)il2cpp_codegen_add((float)L_84, (float)L_85)));
		float L_86 = ((MNFeaturePreview_t389008354 *)__this)->get_XStartPos_7();
		((MNFeaturePreview_t389008354 *)__this)->set_StartX_6(L_86);
		float L_87 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_88 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		int32_t L_89 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonWidth_3();
		int32_t L_90 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonHeight_4();
		Rect_t2360479859  L_91;
		memset(&L_91, 0, sizeof(L_91));
		Rect__ctor_m2614021312((&L_91), L_87, L_88, (((float)((float)L_89))), (((float)((float)L_90))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_92 = GUI_Button_m1518979886(NULL /*static, unused*/, L_91, _stringLiteral3108015093, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0314;
		}
	}
	{
		MNP_ShowPreloader_m1216219635(NULL /*static, unused*/, _stringLiteral3963994475, _stringLiteral3253942988, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral4260792695, (3.0f), /*hidden argument*/NULL);
	}

IL_0314:
	{
		float L_93 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_94 = ((MNFeaturePreview_t389008354 *)__this)->get_XButtonStep_9();
		((MNFeaturePreview_t389008354 *)__this)->set_StartX_6(((float)il2cpp_codegen_add((float)L_93, (float)L_94)));
		float L_95 = ((MNFeaturePreview_t389008354 *)__this)->get_StartX_6();
		float L_96 = ((MNFeaturePreview_t389008354 *)__this)->get_StartY_5();
		int32_t L_97 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonWidth_3();
		int32_t L_98 = ((MNFeaturePreview_t389008354 *)__this)->get_buttonHeight_4();
		Rect_t2360479859  L_99;
		memset(&L_99, 0, sizeof(L_99));
		Rect__ctor_m2614021312((&L_99), L_95, L_96, (((float)((float)L_97))), (((float)((float)L_98))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_100 = GUI_Button_m1518979886(NULL /*static, unused*/, L_99, _stringLiteral3331193656, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_035a;
		}
	}
	{
		MNP_HidePreloader_m2565935768(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_035a:
	{
		return;
	}
}
// System.Void MNUseExample::OnPreloaderTimeOut()
extern "C"  void MNUseExample_OnPreloaderTimeOut_m325390161 (MNUseExample_t4260541090 * __this, const RuntimeMethod* method)
{
	{
		MNP_HidePreloader_m2565935768(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__0()
extern "C"  void MNUseExample_U3COnGUIU3Em__0_m4187805135 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__0_m4187805135_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral174100631, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__1()
extern "C"  void MNUseExample_U3COnGUIU3Em__1_m2621721194 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__1_m2621721194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2820903382, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__2()
extern "C"  void MNUseExample_U3COnGUIU3Em__2_m3025005721 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__2_m3025005721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3188501275, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__3()
extern "C"  void MNUseExample_U3COnGUIU3Em__3_m1458921780 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__3_m1458921780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4132162756, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__4()
extern "C"  void MNUseExample_U3COnGUIU3Em__4_m1862206307 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__4_m1862206307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1804806279, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__5()
extern "C"  void MNUseExample_U3COnGUIU3Em__5_m296122366 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__5_m296122366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2364504036, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__6()
extern "C"  void MNUseExample_U3COnGUIU3Em__6_m699406893 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__6_m699406893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2045254338, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__7()
extern "C"  void MNUseExample_U3COnGUIU3Em__7_m3428290248 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__7_m3428290248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4151820420, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MNUseExample::<OnGUI>m__8()
extern "C"  void MNUseExample_U3COnGUIU3Em__8_m3831574775 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MNUseExample_U3COnGUIU3Em__8_m3831574775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2045254338, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
