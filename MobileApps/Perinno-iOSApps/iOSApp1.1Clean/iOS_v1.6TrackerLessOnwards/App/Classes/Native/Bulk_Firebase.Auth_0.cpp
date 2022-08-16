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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t3247595434;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1357866714;
// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t3683244484;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t497556005;
// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3506210183;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t3361360866;
// Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8
struct U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865;
// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0
struct U3CGetAuthU3Ec__AnonStorey0_t454145548;
// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1
struct U3CGetAuthU3Ec__AnonStorey1_t454211084;
// Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7
struct U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931;
// Firebase.Auth.FirebaseAuth/MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t2685760848;
// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct StateChangedDelegate_t330995958;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4237635511;
// Firebase.Auth.Future_User
struct Future_User_t1455245928;
// Firebase.Auth.Future_User/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t1473534857;
// Firebase.Auth.Future_User/Action
struct Action_t3279312088;
// Firebase.Auth.Future_User/Action[]
struct ActionU5BU5D_t2463843529;
// Firebase.Auth.Future_User/MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t893897288;
// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t4100679291;
// Firebase.CleanupNotifier/DeleteObjectDelegate
struct DeleteObjectDelegate_t1957612988;
// Firebase.CleanupNotifier/DisposeObjectDelegate
struct DisposeObjectDelegate_t1709778548;
// Firebase.Dispatcher
struct Dispatcher_t1781628575;
// Firebase.FirebaseApp
struct FirebaseApp_t2526288410;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t3131870060;
// Firebase.FirebaseApp/LogMessageDelegate
struct LogMessageDelegate_t2362307948;
// Firebase.FirebaseException
struct FirebaseException_t627220627;
// Firebase.FutureBase
struct FutureBase_t1024553797;
// Firebase.FutureString
struct FutureString_t4072148675;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t3186567461;
// Firebase.FutureVoid
struct FutureVoid_t983301800;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t2224793779;
// Firebase.InitializationException
struct InitializationException_t1111396117;
// Firebase.Platform.Default.BaseAuthService
struct BaseAuthService_t3388892161;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t3234831756;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t2087675187;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t148948;
// Firebase.Platform.IAuthService
struct IAuthService_t11025045;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t1304256382;
// Firebase.Unity.FirebaseAuthService
struct FirebaseAuthService_t2470375121;
// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0
struct U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498;
// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1
struct U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557;
// Firebase.Unity.FirebaseAuthService/UserRefreshState
struct UserRefreshState_t1484377516;
// Firebase.Unity.FirebaseAuthService/UserRefreshState[]
struct UserRefreshStateU5BU5D_t1850853925;
// System.Action
struct Action_t1264377477;
// System.Action`1<Firebase.Auth.FirebaseAuth>
struct Action_1_t3533828461;
// System.Action`1<System.Action>
struct Action_1_t1436845072;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t1520675985;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t363146638;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t3425458459;
// System.AggregateException
struct AggregateException_t3586243216;
// System.ApplicationException
struct ApplicationException_t2339761290;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.ArithmeticException
struct ArithmeticException_t4283546778;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct KeyCollection_t4190886002;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.Object>
struct KeyCollection_t1491647354;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Firebase.Auth.Future_User/Action,System.Collections.DictionaryEntry>
struct Transform_1_t2068182373;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState,System.Collections.DictionaryEntry>
struct Transform_1_t4135593389;
// System.Collections.Generic.Dictionary`2/Transform`1<System.IntPtr,System.WeakReference,System.Collections.DictionaryEntry>
struct Transform_1_t2011406813;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct Dictionary_2_t2168025419;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_t1596674066;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t133523557;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct Dictionary_2_t4001210531;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t1301971883;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t3851719731;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>
struct Dictionary_2_t1120143015;
// System.Collections.Generic.IEnumerable`1<System.IntPtr>
struct IEnumerable_1_t4114970366;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t2947482199;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t880095394;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.IntPtr>
struct List_1_t2312224923;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2649313536;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.DivideByZeroException
struct DivideByZeroException_t1856388118;
// System.EventArgs
struct EventArgs_t3591816995;
// System.EventHandler
struct EventHandler_t1348719766;
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t2197675447;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1515976428;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// System.Exception
struct Exception_t;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_t2062041240;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t2129588086;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t680774166;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.IOException
struct IOException_t4088381929;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidCastException
struct InvalidCastException_t3927145244;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.OutOfMemoryException
struct OutOfMemoryException_t2437671686;
// System.OverflowException
struct OverflowException_t2020128637;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.SystemException
struct SystemException_t176217640;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct TaskCompletionSource_1_t2638358328;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1480828981;
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct Task_1_t1348208390;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3252990864;
// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t558034686;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// System.WeakReference
struct WeakReference_t1334886716;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t4021634645;

extern RuntimeClass* Action_1_t1520675985_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3425458459_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3533828461_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t3279312088_il2cpp_TypeInfo_var;
extern RuntimeClass* ApplicationException_t2339761290_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ArithmeticException_t4283546778_il2cpp_TypeInfo_var;
extern RuntimeClass* AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseAuthService_t3388892161_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* CleanupNotifier_t720088202_il2cpp_TypeInfo_var;
extern RuntimeClass* DeleteObjectDelegate_t1957612988_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2168025419_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3851719731_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t4001210531_il2cpp_TypeInfo_var;
extern RuntimeClass* DisposeObjectDelegate_t1709778548_il2cpp_TypeInfo_var;
extern RuntimeClass* DivideByZeroException_t1856388118_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1515976428_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_t1348719766_il2cpp_TypeInfo_var;
extern RuntimeClass* ExceptionArgumentDelegate_t1357866714_il2cpp_TypeInfo_var;
extern RuntimeClass* ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseApp_t2526288410_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseAuth_t3361360866_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseException_t627220627_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseHandler_t2087675187_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseUser_t4237635511_il2cpp_TypeInfo_var;
extern RuntimeClass* FutureString_t4072148675_il2cpp_TypeInfo_var;
extern RuntimeClass* FutureVoid_t983301800_il2cpp_TypeInfo_var;
extern RuntimeClass* Future_User_t1455245928_il2cpp_TypeInfo_var;
extern RuntimeClass* IOException_t4088381929_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* InitializationException_t1111396117_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t3927145244_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2312224923_il2cpp_TypeInfo_var;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* OutOfMemoryException_t2437671686_il2cpp_TypeInfo_var;
extern RuntimeClass* OverflowException_t2020128637_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIGPendingException_t3190247900_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIGPendingException_t3769198788_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIGStringDelegate_t3506210183_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIGStringHelper_t497556005_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIG_CompletionDelegate_t4100679291_il2cpp_TypeInfo_var;
extern RuntimeClass* Services_t463074608_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StateChangedDelegate_t330995958_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SystemException_t176217640_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_t2638358328_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetAuthU3Ec__AnonStorey0_t454145548_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetAuthU3Ec__AnonStorey1_t454211084_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t1473534857_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931_il2cpp_TypeInfo_var;
extern RuntimeClass* UserRefreshState_t1484377516_il2cpp_TypeInfo_var;
extern RuntimeClass* WeakReference_t1334886716_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1565319960;
extern String_t* _stringLiteral1718430138;
extern String_t* _stringLiteral1985503341;
extern String_t* _stringLiteral2413456795;
extern String_t* _stringLiteral2669073561;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3597086977;
extern String_t* _stringLiteral3792442775;
extern String_t* _stringLiteral88632345;
extern const RuntimeMethod* Action_1_Invoke_m2917758882_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3690900092_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m722766574_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m839606331_RuntimeMethod_var;
extern const RuntimeMethod* AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseAuth_m3233001950_RuntimeMethod_var;
extern const RuntimeMethod* AuthUtil_CreateAuthStateListener_m1154075212_RuntimeMethod_var;
extern const RuntimeMethod* AuthUtil_CreateIdTokenListener_m1166398406_RuntimeMethod_var;
extern const RuntimeMethod* AuthUtil_DestroyAuthStateListener_m2035806860_RuntimeMethod_var;
extern const RuntimeMethod* AuthUtil_DestroyIdTokenListener_m920823836_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1614452640_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3198892635_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m735242794_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2442954558_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3377532459_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3586319931_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1091767215_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2827708710_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3117022313_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m2062204081_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2636174372_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3155210180_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3729300617_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1777996260_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3923053051_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2322814383_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1__ctor_m1585652483_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuthService_RefreshExpiredTokens_m3996987898_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_DisposeObject_m4027421320_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_GetAuthInternal_m3254775501_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_IdTokenChangedFunction_m3469931091_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_SignOut_m2697804734_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_StateChangedFunction_m3953799837_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_ThrowIfNull_m3441179502_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m1983144428_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_U3CStateChangedFunctionU3Em__0_m311707170_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseAuth_get_CurrentUserInternal_m794105557_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseUser_get_DisplayName_m1864675456_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseUser_get_Email_m2568650205_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseUser_get_IsEmailVerified_m2828554770_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseUser_get_UserId_m502665137_RuntimeMethod_var;
extern const RuntimeMethod* Future_User_SWIG_CompletionDispatcher_m2723325741_RuntimeMethod_var;
extern const RuntimeMethod* Future_User_SWIG_FreeCompletionData_m3840256860_RuntimeMethod_var;
extern const RuntimeMethod* Future_User_SWIG_OnCompletion_m1226104428_RuntimeMethod_var;
extern const RuntimeMethod* Future_User_result_m3781469802_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3513205496_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1277177286_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m4103441096_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m1072098740_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m4283099985_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m4229534085_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m4180331635_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m1823119383_RuntimeMethod_var;
extern const RuntimeMethod* SWIGPendingException_Set_m543672851_RuntimeMethod_var;
extern const RuntimeMethod* SWIGStringHelper_CreateString_m755717645_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSourceCompat_1_SetException_m1553797418_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m3915829379_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetException_m3841834645_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m2181318245_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m1516347784_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m522014888_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ContinueWith_m2455971619_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ContinueWith_m2941200014_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_get_Result_m3400309620_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_U3CU3Em__0_m2391262187_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetAuthU3Ec__AnonStorey1_U3CU3Em__0_m516710641_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2468008402_RuntimeMethod_var;
extern const RuntimeMethod* U3CRefreshExpiredTokensU3Ec__AnonStorey1_U3CU3Em__0_m4067483229_RuntimeMethod_var;
extern const RuntimeMethod* U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_U3CU3Em__0_m337689263_RuntimeMethod_var;
extern const RuntimeType* AuthUtilPINVOKE_t590481425_0_0_0_var;
extern const uint32_t AuthUtilPINVOKE__cctor_m1626855908_MetadataUsageId;
extern const uint32_t AuthUtil_CreateAuthStateListener_m1154075212_MetadataUsageId;
extern const uint32_t AuthUtil_CreateIdTokenListener_m1166398406_MetadataUsageId;
extern const uint32_t AuthUtil_DestroyAuthStateListener_m2035806860_MetadataUsageId;
extern const uint32_t AuthUtil_DestroyIdTokenListener_m920823836_MetadataUsageId;
extern const uint32_t FirebaseAuthService_OnIdTokenChanged_m2557035096_MetadataUsageId;
extern const uint32_t FirebaseAuthService_RefreshExpiredTokens_m3996987898_MetadataUsageId;
extern const uint32_t FirebaseAuthService_StopTokenRefresh_m1727498840_MetadataUsageId;
extern const uint32_t FirebaseAuthService__cctor_m2716884544_MetadataUsageId;
extern const uint32_t FirebaseAuthService__ctor_m3401510087_MetadataUsageId;
extern const uint32_t FirebaseAuthService_get_Instance_m128522418_MetadataUsageId;
extern const uint32_t FirebaseAuth_CompleteFirebaseUserTask_m2514684495_MetadataUsageId;
extern const uint32_t FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m250930766_MetadataUsageId;
extern const uint32_t FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_m742258242_MetadataUsageId;
extern const uint32_t FirebaseAuth_DisposeInternal_m3446725357_MetadataUsageId;
extern const uint32_t FirebaseAuth_DisposeObject_m4027421320_MetadataUsageId;
extern const uint32_t FirebaseAuth_ForwardStateChange_m2255408459_MetadataUsageId;
extern const uint32_t FirebaseAuth_GetAuthInternal_m3254775501_MetadataUsageId;
extern const uint32_t FirebaseAuth_GetAuth_m3801311256_MetadataUsageId;
extern const uint32_t FirebaseAuth_IdTokenChangedFunction_m3469931091_MetadataUsageId;
extern const uint32_t FirebaseAuth_ProxyFromAppCPtr_m1270286461_MetadataUsageId;
extern const uint32_t FirebaseAuth_SendPasswordResetEmailAsync_m3805802880_MetadataUsageId;
extern const uint32_t FirebaseAuth_SignInWithEmailAndPasswordAsync_m3596045113_MetadataUsageId;
extern const uint32_t FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_m284197153_MetadataUsageId;
extern const uint32_t FirebaseAuth_SignOut_m2697804734_MetadataUsageId;
extern const uint32_t FirebaseAuth_StateChangedFunction_m3953799837_MetadataUsageId;
extern const uint32_t FirebaseAuth_ThrowIfNull_m3441179502_MetadataUsageId;
extern const uint32_t FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m1983144428_MetadataUsageId;
extern const uint32_t FirebaseAuth_U3CStateChangedFunctionU3Em__0_m311707170_MetadataUsageId;
extern const uint32_t FirebaseAuth_UpdateCurrentUser_m2746281638_MetadataUsageId;
extern const uint32_t FirebaseAuth__cctor_m409293379_MetadataUsageId;
extern const uint32_t FirebaseAuth_add_StateChanged_m4173304667_MetadataUsageId;
extern const uint32_t FirebaseAuth_getCPtr_m4190853153_MetadataUsageId;
extern const uint32_t FirebaseAuth_get_CurrentUserInternal_m794105557_MetadataUsageId;
extern const uint32_t FirebaseAuth_get_CurrentUser_m3915863574_MetadataUsageId;
extern const uint32_t FirebaseAuth_get_DefaultInstance_m236605690_MetadataUsageId;
extern const uint32_t FirebaseAuth_remove_StateChanged_m2550155252_MetadataUsageId;
extern const uint32_t FirebaseUser_Dispose_m590215956_MetadataUsageId;
extern const uint32_t FirebaseUser_SendEmailVerificationAsync_m2322493457_MetadataUsageId;
extern const uint32_t FirebaseUser_TokenAsync_m1960073769_MetadataUsageId;
extern const uint32_t FirebaseUser_getCPtr_m1424584513_MetadataUsageId;
extern const uint32_t FirebaseUser_get_DisplayName_m1864675456_MetadataUsageId;
extern const uint32_t FirebaseUser_get_Email_m2568650205_MetadataUsageId;
extern const uint32_t FirebaseUser_get_IsEmailVerified_m2828554770_MetadataUsageId;
extern const uint32_t FirebaseUser_get_UserId_m502665137_MetadataUsageId;
extern const uint32_t Future_User_Dispose_m429064847_MetadataUsageId;
extern const uint32_t Future_User_GetTask_m4097663285_MetadataUsageId;
extern const uint32_t Future_User_SWIG_CompletionDispatcher_m2723325741_MetadataUsageId;
extern const uint32_t Future_User_SWIG_FreeCompletionData_m3840256860_MetadataUsageId;
extern const uint32_t Future_User_SWIG_OnCompletion_m1226104428_MetadataUsageId;
extern const uint32_t Future_User_SetCompletionData_m185985433_MetadataUsageId;
extern const uint32_t Future_User_SetOnCompletionCallback_m2404728356_MetadataUsageId;
extern const uint32_t Future_User__cctor_m2487069903_MetadataUsageId;
extern const uint32_t Future_User__ctor_m3952942069_MetadataUsageId;
extern const uint32_t Future_User_result_m3781469802_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingApplicationException_m4103441096_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingArgumentException_m1072098740_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m4283099985_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingIOException_m4229534085_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m4180331635_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper_SetPendingSystemException_m1823119383_MetadataUsageId;
extern const uint32_t SWIGExceptionHelper__cctor_m2541351505_MetadataUsageId;
extern const uint32_t SWIGPendingException_Retrieve_m2823107563_MetadataUsageId;
extern const uint32_t SWIGPendingException_Set_m543672851_MetadataUsageId;
extern const uint32_t SWIGStringHelper__cctor_m1770408897_MetadataUsageId;
extern const uint32_t SWIG_CompletionDelegate_BeginInvoke_m4224026332_MetadataUsageId;
extern const uint32_t StateChangedDelegate_BeginInvoke_m2611951787_MetadataUsageId;
extern const uint32_t U3CGetAuthU3Ec__AnonStorey1_U3CU3Em__0_m516710641_MetadataUsageId;
extern const uint32_t U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2468008402_MetadataUsageId;
extern const uint32_t U3CRefreshExpiredTokensU3Ec__AnonStorey1_U3CU3Em__0_m4067483229_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745556_H
#define U3CMODULEU3E_T692745556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745556 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745556_H
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
#ifndef AUTHUTIL_T931274733_H
#define AUTHUTIL_T931274733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtil
struct  AuthUtil_t931274733  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHUTIL_T931274733_H
#ifndef AUTHUTILPINVOKE_T590481425_H
#define AUTHUTILPINVOKE_T590481425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE
struct  AuthUtilPINVOKE_t590481425  : public RuntimeObject
{
public:

public:
};

struct AuthUtilPINVOKE_t590481425_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper Firebase.Auth.AuthUtilPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t3247595434 * ___swigExceptionHelper_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper Firebase.Auth.AuthUtilPINVOKE::swigStringHelper
	SWIGStringHelper_t497556005 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_t590481425_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t3247595434 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t3247595434 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t3247595434 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((&___swigExceptionHelper_0), value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(AuthUtilPINVOKE_t590481425_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t497556005 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t497556005 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t497556005 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((&___swigStringHelper_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHUTILPINVOKE_T590481425_H
#ifndef SWIGEXCEPTIONHELPER_T3247595434_H
#define SWIGEXCEPTIONHELPER_T3247595434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper
struct  SWIGExceptionHelper_t3247595434  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t3247595434_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t3683244484 * ___applicationDelegate_0;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t3683244484 * ___arithmeticDelegate_1;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t3683244484 * ___divideByZeroDelegate_2;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t3683244484 * ___indexOutOfRangeDelegate_3;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t3683244484 * ___invalidCastDelegate_4;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t3683244484 * ___invalidOperationDelegate_5;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t3683244484 * ___ioDelegate_6;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t3683244484 * ___nullReferenceDelegate_7;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t3683244484 * ___outOfMemoryDelegate_8;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t3683244484 * ___overflowDelegate_9;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t3683244484 * ___systemDelegate_10;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t1357866714 * ___argumentDelegate_11;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t1357866714 * ___argumentNullDelegate_12;
	// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t1357866714 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t3683244484 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t3683244484 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationDelegate_0), value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t3683244484 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t3683244484 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___arithmeticDelegate_1), value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t3683244484 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t3683244484 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___divideByZeroDelegate_2), value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t3683244484 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t3683244484 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___indexOutOfRangeDelegate_3), value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t3683244484 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t3683244484 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalidCastDelegate_4), value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t3683244484 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t3683244484 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalidOperationDelegate_5), value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t3683244484 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t3683244484 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&___ioDelegate_6), value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t3683244484 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t3683244484 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&___nullReferenceDelegate_7), value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t3683244484 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t3683244484 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___outOfMemoryDelegate_8), value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t3683244484 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t3683244484 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___overflowDelegate_9), value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t3683244484 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t3683244484 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t3683244484 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((&___systemDelegate_10), value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t1357866714 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t1357866714 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t1357866714 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((&___argumentDelegate_11), value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t1357866714 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t1357866714 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t1357866714 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___argumentNullDelegate_12), value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t3247595434_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t1357866714 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t1357866714 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t1357866714 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((&___argumentOutOfRangeDelegate_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGEXCEPTIONHELPER_T3247595434_H
#ifndef SWIGPENDINGEXCEPTION_T3769198788_H
#define SWIGPENDINGEXCEPTION_T3769198788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException
struct  SWIGPendingException_t3769198788  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t3769198788_StaticFields
{
public:
	// System.Int32 Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t3769198788_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t3769198788_ThreadStaticFields
{
public:
	// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t3769198788_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((&___pendingException_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGPENDINGEXCEPTION_T3769198788_H
#ifndef SWIGSTRINGHELPER_T497556005_H
#define SWIGSTRINGHELPER_T497556005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper
struct  SWIGStringHelper_t497556005  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t497556005_StaticFields
{
public:
	// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t3506210183 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t497556005_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t3506210183 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t3506210183 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t3506210183 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___stringDelegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGSTRINGHELPER_T497556005_H
#ifndef U3CCREATEUSERWITHEMAILANDPASSWORDASYNCU3EC__ANONSTOREY8_T4089389865_H
#define U3CCREATEUSERWITHEMAILANDPASSWORDASYNCU3EC__ANONSTOREY8_T4089389865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8
struct  U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8::taskCompletionSource
	TaskCompletionSource_1_t2638358328 * ___taskCompletionSource_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8::$this
	FirebaseAuth_t3361360866 * ___U24this_1;

public:
	inline static int32_t get_offset_of_taskCompletionSource_0() { return static_cast<int32_t>(offsetof(U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865, ___taskCompletionSource_0)); }
	inline TaskCompletionSource_1_t2638358328 * get_taskCompletionSource_0() const { return ___taskCompletionSource_0; }
	inline TaskCompletionSource_1_t2638358328 ** get_address_of_taskCompletionSource_0() { return &___taskCompletionSource_0; }
	inline void set_taskCompletionSource_0(TaskCompletionSource_1_t2638358328 * value)
	{
		___taskCompletionSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___taskCompletionSource_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865, ___U24this_1)); }
	inline FirebaseAuth_t3361360866 * get_U24this_1() const { return ___U24this_1; }
	inline FirebaseAuth_t3361360866 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FirebaseAuth_t3361360866 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEUSERWITHEMAILANDPASSWORDASYNCU3EC__ANONSTOREY8_T4089389865_H
#ifndef U3CGETAUTHU3EC__ANONSTOREY0_T454145548_H
#define U3CGETAUTHU3EC__ANONSTOREY0_T454145548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0
struct  U3CGetAuthU3Ec__AnonStorey0_t454145548  : public RuntimeObject
{
public:
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0::app
	FirebaseApp_t2526288410 * ___app_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0::auth
	FirebaseAuth_t3361360866 * ___auth_1;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey0_t454145548, ___app_0)); }
	inline FirebaseApp_t2526288410 * get_app_0() const { return ___app_0; }
	inline FirebaseApp_t2526288410 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(FirebaseApp_t2526288410 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier((&___app_0), value);
	}

	inline static int32_t get_offset_of_auth_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey0_t454145548, ___auth_1)); }
	inline FirebaseAuth_t3361360866 * get_auth_1() const { return ___auth_1; }
	inline FirebaseAuth_t3361360866 ** get_address_of_auth_1() { return &___auth_1; }
	inline void set_auth_1(FirebaseAuth_t3361360866 * value)
	{
		___auth_1 = value;
		Il2CppCodeGenWriteBarrier((&___auth_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETAUTHU3EC__ANONSTOREY0_T454145548_H
#ifndef U3CSIGNINWITHEMAILANDPASSWORDASYNCU3EC__ANONSTOREY7_T395132931_H
#define U3CSIGNINWITHEMAILANDPASSWORDASYNCU3EC__ANONSTOREY7_T395132931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7
struct  U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7::taskCompletionSource
	TaskCompletionSource_1_t2638358328 * ___taskCompletionSource_0;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7::$this
	FirebaseAuth_t3361360866 * ___U24this_1;

public:
	inline static int32_t get_offset_of_taskCompletionSource_0() { return static_cast<int32_t>(offsetof(U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931, ___taskCompletionSource_0)); }
	inline TaskCompletionSource_1_t2638358328 * get_taskCompletionSource_0() const { return ___taskCompletionSource_0; }
	inline TaskCompletionSource_1_t2638358328 ** get_address_of_taskCompletionSource_0() { return &___taskCompletionSource_0; }
	inline void set_taskCompletionSource_0(TaskCompletionSource_1_t2638358328 * value)
	{
		___taskCompletionSource_0 = value;
		Il2CppCodeGenWriteBarrier((&___taskCompletionSource_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931, ___U24this_1)); }
	inline FirebaseAuth_t3361360866 * get_U24this_1() const { return ___U24this_1; }
	inline FirebaseAuth_t3361360866 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FirebaseAuth_t3361360866 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSIGNINWITHEMAILANDPASSWORDASYNCU3EC__ANONSTOREY7_T395132931_H
#ifndef U3CGETTASKU3EC__ANONSTOREY0_T1473534857_H
#define U3CGETTASKU3EC__ANONSTOREY0_T1473534857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.Future_User/<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t1473534857  : public RuntimeObject
{
public:
	// Firebase.Auth.Future_User Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::fu
	Future_User_t1455245928 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t2638358328 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t1473534857, ___fu_0)); }
	inline Future_User_t1455245928 * get_fu_0() const { return ___fu_0; }
	inline Future_User_t1455245928 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_User_t1455245928 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((&___fu_0), value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t1473534857, ___tcs_1)); }
	inline TaskCompletionSource_1_t2638358328 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t2638358328 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t2638358328 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((&___tcs_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETTASKU3EC__ANONSTOREY0_T1473534857_H
#ifndef BASEAUTHSERVICE_T3388892161_H
#define BASEAUTHSERVICE_T3388892161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Default.BaseAuthService
struct  BaseAuthService_t3388892161  : public RuntimeObject
{
public:

public:
};

struct BaseAuthService_t3388892161_StaticFields
{
public:
	// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::_instance
	BaseAuthService_t3388892161 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(BaseAuthService_t3388892161_StaticFields, ____instance_0)); }
	inline BaseAuthService_t3388892161 * get__instance_0() const { return ____instance_0; }
	inline BaseAuthService_t3388892161 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(BaseAuthService_t3388892161 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEAUTHSERVICE_T3388892161_H
#ifndef FIREBASEHANDLER_T2087675187_H
#define FIREBASEHANDLER_T2087675187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseHandler
struct  FirebaseHandler_t2087675187  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_3;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_t1515976428 * ___Updated_5;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_t2197675447 * ___ApplicationFocusChanged_6;

public:
	inline static int32_t get_offset_of_U3CIsPlayModeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187, ___U3CIsPlayModeU3Ek__BackingField_3)); }
	inline bool get_U3CIsPlayModeU3Ek__BackingField_3() const { return ___U3CIsPlayModeU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsPlayModeU3Ek__BackingField_3() { return &___U3CIsPlayModeU3Ek__BackingField_3; }
	inline void set_U3CIsPlayModeU3Ek__BackingField_3(bool value)
	{
		___U3CIsPlayModeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_Updated_5() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187, ___Updated_5)); }
	inline EventHandler_1_t1515976428 * get_Updated_5() const { return ___Updated_5; }
	inline EventHandler_1_t1515976428 ** get_address_of_Updated_5() { return &___Updated_5; }
	inline void set_Updated_5(EventHandler_1_t1515976428 * value)
	{
		___Updated_5 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_5), value);
	}

	inline static int32_t get_offset_of_ApplicationFocusChanged_6() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187, ___ApplicationFocusChanged_6)); }
	inline EventHandler_1_t2197675447 * get_ApplicationFocusChanged_6() const { return ___ApplicationFocusChanged_6; }
	inline EventHandler_1_t2197675447 ** get_address_of_ApplicationFocusChanged_6() { return &___ApplicationFocusChanged_6; }
	inline void set_ApplicationFocusChanged_6(EventHandler_1_t2197675447 * value)
	{
		___ApplicationFocusChanged_6 = value;
		Il2CppCodeGenWriteBarrier((&___ApplicationFocusChanged_6), value);
	}
};

struct FirebaseHandler_t2087675187_StaticFields
{
public:
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t148948 * ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_t1781628575 * ___U3CThreadDispatcherU3Ek__BackingField_2;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_t2087675187 * ___firebaseHandler_4;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler::<>f__am$cache0
	Func_1_t3822001908 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_firebaseMonoBehaviour_0() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187_StaticFields, ___firebaseMonoBehaviour_0)); }
	inline FirebaseMonoBehaviour_t148948 * get_firebaseMonoBehaviour_0() const { return ___firebaseMonoBehaviour_0; }
	inline FirebaseMonoBehaviour_t148948 ** get_address_of_firebaseMonoBehaviour_0() { return &___firebaseMonoBehaviour_0; }
	inline void set_firebaseMonoBehaviour_0(FirebaseMonoBehaviour_t148948 * value)
	{
		___firebaseMonoBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___firebaseMonoBehaviour_0), value);
	}

	inline static int32_t get_offset_of_U3CAppUtilsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187_StaticFields, ___U3CAppUtilsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAppUtilsU3Ek__BackingField_1() const { return ___U3CAppUtilsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAppUtilsU3Ek__BackingField_1() { return &___U3CAppUtilsU3Ek__BackingField_1; }
	inline void set_U3CAppUtilsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAppUtilsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppUtilsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CThreadDispatcherU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187_StaticFields, ___U3CThreadDispatcherU3Ek__BackingField_2)); }
	inline Dispatcher_t1781628575 * get_U3CThreadDispatcherU3Ek__BackingField_2() const { return ___U3CThreadDispatcherU3Ek__BackingField_2; }
	inline Dispatcher_t1781628575 ** get_address_of_U3CThreadDispatcherU3Ek__BackingField_2() { return &___U3CThreadDispatcherU3Ek__BackingField_2; }
	inline void set_U3CThreadDispatcherU3Ek__BackingField_2(Dispatcher_t1781628575 * value)
	{
		___U3CThreadDispatcherU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CThreadDispatcherU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_firebaseHandler_4() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187_StaticFields, ___firebaseHandler_4)); }
	inline FirebaseHandler_t2087675187 * get_firebaseHandler_4() const { return ___firebaseHandler_4; }
	inline FirebaseHandler_t2087675187 ** get_address_of_firebaseHandler_4() { return &___firebaseHandler_4; }
	inline void set_firebaseHandler_4(FirebaseHandler_t2087675187 * value)
	{
		___firebaseHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___firebaseHandler_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2087675187_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Func_1_t3822001908 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Func_1_t3822001908 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEHANDLER_T2087675187_H
#ifndef U3CREFRESHEXPIREDTOKENSU3EC__ANONSTOREY0_T3147025498_H
#define U3CREFRESHEXPIREDTOKENSU3EC__ANONSTOREY0_T3147025498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0
struct  U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498  : public RuntimeObject
{
public:
	// System.Single Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0::now
	float ___now_0;
	// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0::$this
	FirebaseAuthService_t2470375121 * ___U24this_1;

public:
	inline static int32_t get_offset_of_now_0() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498, ___now_0)); }
	inline float get_now_0() const { return ___now_0; }
	inline float* get_address_of_now_0() { return &___now_0; }
	inline void set_now_0(float value)
	{
		___now_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498, ___U24this_1)); }
	inline FirebaseAuthService_t2470375121 * get_U24this_1() const { return ___U24this_1; }
	inline FirebaseAuthService_t2470375121 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FirebaseAuthService_t2470375121 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREFRESHEXPIREDTOKENSU3EC__ANONSTOREY0_T3147025498_H
#ifndef U3CREFRESHEXPIREDTOKENSU3EC__ANONSTOREY1_T1580941557_H
#define U3CREFRESHEXPIREDTOKENSU3EC__ANONSTOREY1_T1580941557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1
struct  U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557  : public RuntimeObject
{
public:
	// Firebase.Unity.FirebaseAuthService/UserRefreshState Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::userRefreshState
	UserRefreshState_t1484377516 * ___userRefreshState_0;
	// Firebase.Auth.FirebaseUser Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::user
	FirebaseUser_t4237635511 * ___user_1;
	// System.String Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::appName
	String_t* ___appName_2;
	// Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0 Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::<>f__ref$0
	U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * ___U3CU3Ef__refU240_3;

public:
	inline static int32_t get_offset_of_userRefreshState_0() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557, ___userRefreshState_0)); }
	inline UserRefreshState_t1484377516 * get_userRefreshState_0() const { return ___userRefreshState_0; }
	inline UserRefreshState_t1484377516 ** get_address_of_userRefreshState_0() { return &___userRefreshState_0; }
	inline void set_userRefreshState_0(UserRefreshState_t1484377516 * value)
	{
		___userRefreshState_0 = value;
		Il2CppCodeGenWriteBarrier((&___userRefreshState_0), value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557, ___user_1)); }
	inline FirebaseUser_t4237635511 * get_user_1() const { return ___user_1; }
	inline FirebaseUser_t4237635511 ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(FirebaseUser_t4237635511 * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier((&___user_1), value);
	}

	inline static int32_t get_offset_of_appName_2() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557, ___appName_2)); }
	inline String_t* get_appName_2() const { return ___appName_2; }
	inline String_t** get_address_of_appName_2() { return &___appName_2; }
	inline void set_appName_2(String_t* value)
	{
		___appName_2 = value;
		Il2CppCodeGenWriteBarrier((&___appName_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_3() { return static_cast<int32_t>(offsetof(U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557, ___U3CU3Ef__refU240_3)); }
	inline U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * get_U3CU3Ef__refU240_3() const { return ___U3CU3Ef__refU240_3; }
	inline U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 ** get_address_of_U3CU3Ef__refU240_3() { return &___U3CU3Ef__refU240_3; }
	inline void set_U3CU3Ef__refU240_3(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * value)
	{
		___U3CU3Ef__refU240_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREFRESHEXPIREDTOKENSU3EC__ANONSTOREY1_T1580941557_H
#ifndef USERREFRESHSTATE_T1484377516_H
#define USERREFRESHSTATE_T1484377516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService/UserRefreshState
struct  UserRefreshState_t1484377516  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Unity.FirebaseAuthService/UserRefreshState::auth
	WeakReference_t1334886716 * ___auth_0;
	// System.WeakReference Firebase.Unity.FirebaseAuthService/UserRefreshState::user
	WeakReference_t1334886716 * ___user_1;
	// System.Single Firebase.Unity.FirebaseAuthService/UserRefreshState::lastTokenRefreshTime
	float ___lastTokenRefreshTime_2;
	// System.Boolean Firebase.Unity.FirebaseAuthService/UserRefreshState::forceRefresh
	bool ___forceRefresh_3;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(UserRefreshState_t1484377516, ___auth_0)); }
	inline WeakReference_t1334886716 * get_auth_0() const { return ___auth_0; }
	inline WeakReference_t1334886716 ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(WeakReference_t1334886716 * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((&___auth_0), value);
	}

	inline static int32_t get_offset_of_user_1() { return static_cast<int32_t>(offsetof(UserRefreshState_t1484377516, ___user_1)); }
	inline WeakReference_t1334886716 * get_user_1() const { return ___user_1; }
	inline WeakReference_t1334886716 ** get_address_of_user_1() { return &___user_1; }
	inline void set_user_1(WeakReference_t1334886716 * value)
	{
		___user_1 = value;
		Il2CppCodeGenWriteBarrier((&___user_1), value);
	}

	inline static int32_t get_offset_of_lastTokenRefreshTime_2() { return static_cast<int32_t>(offsetof(UserRefreshState_t1484377516, ___lastTokenRefreshTime_2)); }
	inline float get_lastTokenRefreshTime_2() const { return ___lastTokenRefreshTime_2; }
	inline float* get_address_of_lastTokenRefreshTime_2() { return &___lastTokenRefreshTime_2; }
	inline void set_lastTokenRefreshTime_2(float value)
	{
		___lastTokenRefreshTime_2 = value;
	}

	inline static int32_t get_offset_of_forceRefresh_3() { return static_cast<int32_t>(offsetof(UserRefreshState_t1484377516, ___forceRefresh_3)); }
	inline bool get_forceRefresh_3() const { return ___forceRefresh_3; }
	inline bool* get_address_of_forceRefresh_3() { return &___forceRefresh_3; }
	inline void set_forceRefresh_3(bool value)
	{
		___forceRefresh_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERREFRESHSTATE_T1484377516_H
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
#ifndef KEYCOLLECTION_T4190886002_H
#define KEYCOLLECTION_T4190886002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct  KeyCollection_t4190886002  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t4001210531 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t4190886002, ___dictionary_0)); }
	inline Dictionary_2_t4001210531 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4001210531 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4001210531 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T4190886002_H
#ifndef DICTIONARY_2_T2168025419_H
#define DICTIONARY_2_T2168025419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>
struct  Dictionary_2_t2168025419  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ActionU5BU5D_t2463843529* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___valueSlots_7)); }
	inline ActionU5BU5D_t2463843529* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ActionU5BU5D_t2463843529** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ActionU5BU5D_t2463843529* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2168025419_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2068182373 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2168025419_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2068182373 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2068182373 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2068182373 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2168025419_H
#ifndef DICTIONARY_2_T4001210531_H
#define DICTIONARY_2_T4001210531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>
struct  Dictionary_2_t4001210531  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	UserRefreshStateU5BU5D_t1850853925* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___valueSlots_7)); }
	inline UserRefreshStateU5BU5D_t1850853925* get_valueSlots_7() const { return ___valueSlots_7; }
	inline UserRefreshStateU5BU5D_t1850853925** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(UserRefreshStateU5BU5D_t1850853925* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t4001210531_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4135593389 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t4001210531_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4135593389 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4135593389 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4135593389 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4001210531_H
#ifndef DICTIONARY_2_T3851719731_H
#define DICTIONARY_2_T3851719731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct  Dictionary_2_t3851719731  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IntPtrU5BU5D_t4013366056* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WeakReferenceU5BU5D_t4021634645* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___keySlots_6)); }
	inline IntPtrU5BU5D_t4013366056* get_keySlots_6() const { return ___keySlots_6; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IntPtrU5BU5D_t4013366056* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___valueSlots_7)); }
	inline WeakReferenceU5BU5D_t4021634645* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WeakReferenceU5BU5D_t4021634645** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WeakReferenceU5BU5D_t4021634645* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3851719731_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2011406813 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3851719731_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2011406813 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2011406813 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2011406813 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3851719731_H
#ifndef LIST_1_T2312224923_H
#define LIST_1_T2312224923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.IntPtr>
struct  List_1_t2312224923  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IntPtrU5BU5D_t4013366056* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2312224923, ____items_1)); }
	inline IntPtrU5BU5D_t4013366056* get__items_1() const { return ____items_1; }
	inline IntPtrU5BU5D_t4013366056** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IntPtrU5BU5D_t4013366056* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2312224923, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2312224923, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2312224923_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	IntPtrU5BU5D_t4013366056* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2312224923_StaticFields, ___EmptyArray_4)); }
	inline IntPtrU5BU5D_t4013366056* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(IntPtrU5BU5D_t4013366056* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2312224923_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
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
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Object System.Threading.Tasks.Task::mutex
	RuntimeObject * ___mutex_2;
	// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>> System.Threading.Tasks.Task::continuations
	RuntimeObject* ___continuations_3;
	// System.AggregateException System.Threading.Tasks.Task::exception
	AggregateException_t3586243216 * ___exception_4;
	// System.Boolean System.Threading.Tasks.Task::isCanceled
	bool ___isCanceled_5;
	// System.Boolean System.Threading.Tasks.Task::isCompleted
	bool ___isCompleted_6;

public:
	inline static int32_t get_offset_of_mutex_2() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___mutex_2)); }
	inline RuntimeObject * get_mutex_2() const { return ___mutex_2; }
	inline RuntimeObject ** get_address_of_mutex_2() { return &___mutex_2; }
	inline void set_mutex_2(RuntimeObject * value)
	{
		___mutex_2 = value;
		Il2CppCodeGenWriteBarrier((&___mutex_2), value);
	}

	inline static int32_t get_offset_of_continuations_3() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___continuations_3)); }
	inline RuntimeObject* get_continuations_3() const { return ___continuations_3; }
	inline RuntimeObject** get_address_of_continuations_3() { return &___continuations_3; }
	inline void set_continuations_3(RuntimeObject* value)
	{
		___continuations_3 = value;
		Il2CppCodeGenWriteBarrier((&___continuations_3), value);
	}

	inline static int32_t get_offset_of_exception_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___exception_4)); }
	inline AggregateException_t3586243216 * get_exception_4() const { return ___exception_4; }
	inline AggregateException_t3586243216 ** get_address_of_exception_4() { return &___exception_4; }
	inline void set_exception_4(AggregateException_t3586243216 * value)
	{
		___exception_4 = value;
		Il2CppCodeGenWriteBarrier((&___exception_4), value);
	}

	inline static int32_t get_offset_of_isCanceled_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___isCanceled_5)); }
	inline bool get_isCanceled_5() const { return ___isCanceled_5; }
	inline bool* get_address_of_isCanceled_5() { return &___isCanceled_5; }
	inline void set_isCanceled_5(bool value)
	{
		___isCanceled_5 = value;
	}

	inline static int32_t get_offset_of_isCompleted_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___isCompleted_6)); }
	inline bool get_isCompleted_6() const { return ___isCompleted_6; }
	inline bool* get_address_of_isCompleted_6() { return &___isCompleted_6; }
	inline void set_isCompleted_6(bool value)
	{
		___isCompleted_6 = value;
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Threading.ThreadLocal`1<System.Int32> System.Threading.Tasks.Task::executionDepth
	ThreadLocal_1_t558034686 * ___executionDepth_0;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::immediateExecutor
	Action_1_t1436845072 * ___immediateExecutor_1;

public:
	inline static int32_t get_offset_of_executionDepth_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___executionDepth_0)); }
	inline ThreadLocal_1_t558034686 * get_executionDepth_0() const { return ___executionDepth_0; }
	inline ThreadLocal_1_t558034686 ** get_address_of_executionDepth_0() { return &___executionDepth_0; }
	inline void set_executionDepth_0(ThreadLocal_1_t558034686 * value)
	{
		___executionDepth_0 = value;
		Il2CppCodeGenWriteBarrier((&___executionDepth_0), value);
	}

	inline static int32_t get_offset_of_immediateExecutor_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___immediateExecutor_1)); }
	inline Action_1_t1436845072 * get_immediateExecutor_1() const { return ___immediateExecutor_1; }
	inline Action_1_t1436845072 ** get_address_of_immediateExecutor_1() { return &___immediateExecutor_1; }
	inline void set_immediateExecutor_1(Action_1_t1436845072 * value)
	{
		___immediateExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((&___immediateExecutor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef TASKCOMPLETIONSOURCE_1_T2638358328_H
#define TASKCOMPLETIONSOURCE_1_T2638358328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>
struct  TaskCompletionSource_1_t2638358328  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1::<Task>k__BackingField
	Task_1_t1348208390 * ___U3CTaskU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTaskU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t2638358328, ___U3CTaskU3Ek__BackingField_0)); }
	inline Task_1_t1348208390 * get_U3CTaskU3Ek__BackingField_0() const { return ___U3CTaskU3Ek__BackingField_0; }
	inline Task_1_t1348208390 ** get_address_of_U3CTaskU3Ek__BackingField_0() { return &___U3CTaskU3Ek__BackingField_0; }
	inline void set_U3CTaskU3Ek__BackingField_0(Task_1_t1348208390 * value)
	{
		___U3CTaskU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTaskU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T2638358328_H
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
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T2685760848_H
#define MONOPINVOKECALLBACKATTRIBUTE_T2685760848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t2685760848  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T2685760848_H
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T893897288_H
#define MONOPINVOKECALLBACKATTRIBUTE_T893897288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.Future_User/MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t893897288  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T893897288_H
#ifndef REGISTRATIONTOKEN_T3106726623_H
#define REGISTRATIONTOKEN_T3106726623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.CleanupNotifier/RegistrationToken
struct  RegistrationToken_t3106726623 
{
public:
	union
	{
		struct
		{
			// System.Int64 Firebase.CleanupNotifier/RegistrationToken::<Identifier>k__BackingField
			int64_t ___U3CIdentifierU3Ek__BackingField_2;
		};
		uint8_t RegistrationToken_t3106726623__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CIdentifierU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RegistrationToken_t3106726623, ___U3CIdentifierU3Ek__BackingField_2)); }
	inline int64_t get_U3CIdentifierU3Ek__BackingField_2() const { return ___U3CIdentifierU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CIdentifierU3Ek__BackingField_2() { return &___U3CIdentifierU3Ek__BackingField_2; }
	inline void set_U3CIdentifierU3Ek__BackingField_2(int64_t value)
	{
		___U3CIdentifierU3Ek__BackingField_2 = value;
	}
};

struct RegistrationToken_t3106726623_StaticFields
{
public:
	// System.Int64 Firebase.CleanupNotifier/RegistrationToken::nextId
	int64_t ___nextId_1;

public:
	inline static int32_t get_offset_of_nextId_1() { return static_cast<int32_t>(offsetof(RegistrationToken_t3106726623_StaticFields, ___nextId_1)); }
	inline int64_t get_nextId_1() const { return ___nextId_1; }
	inline int64_t* get_address_of_nextId_1() { return &___nextId_1; }
	inline void set_nextId_1(int64_t value)
	{
		___nextId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRATIONTOKEN_T3106726623_H
#ifndef FIREBASEEXCEPTION_T627220627_H
#define FIREBASEEXCEPTION_T627220627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseException
struct  FirebaseException_t627220627  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FirebaseException_t627220627, ___U3CErrorCodeU3Ek__BackingField_11)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_11() const { return ___U3CErrorCodeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_11() { return &___U3CErrorCodeU3Ek__BackingField_11; }
	inline void set_U3CErrorCodeU3Ek__BackingField_11(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEEXCEPTION_T627220627_H
#ifndef FIREBASEAUTHSERVICE_T2470375121_H
#define FIREBASEAUTHSERVICE_T2470375121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.FirebaseAuthService
struct  FirebaseAuthService_t2470375121  : public BaseAuthService_t3388892161
{
public:
	// System.Single Firebase.Unity.FirebaseAuthService::TOKEN_REFRESH_PERIOD_SECONDS
	float ___TOKEN_REFRESH_PERIOD_SECONDS_2;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState> Firebase.Unity.FirebaseAuthService::userRefreshStateByAuthCPtr
	Dictionary_2_t4001210531 * ___userRefreshStateByAuthCPtr_3;

public:
	inline static int32_t get_offset_of_TOKEN_REFRESH_PERIOD_SECONDS_2() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t2470375121, ___TOKEN_REFRESH_PERIOD_SECONDS_2)); }
	inline float get_TOKEN_REFRESH_PERIOD_SECONDS_2() const { return ___TOKEN_REFRESH_PERIOD_SECONDS_2; }
	inline float* get_address_of_TOKEN_REFRESH_PERIOD_SECONDS_2() { return &___TOKEN_REFRESH_PERIOD_SECONDS_2; }
	inline void set_TOKEN_REFRESH_PERIOD_SECONDS_2(float value)
	{
		___TOKEN_REFRESH_PERIOD_SECONDS_2 = value;
	}

	inline static int32_t get_offset_of_userRefreshStateByAuthCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t2470375121, ___userRefreshStateByAuthCPtr_3)); }
	inline Dictionary_2_t4001210531 * get_userRefreshStateByAuthCPtr_3() const { return ___userRefreshStateByAuthCPtr_3; }
	inline Dictionary_2_t4001210531 ** get_address_of_userRefreshStateByAuthCPtr_3() { return &___userRefreshStateByAuthCPtr_3; }
	inline void set_userRefreshStateByAuthCPtr_3(Dictionary_2_t4001210531 * value)
	{
		___userRefreshStateByAuthCPtr_3 = value;
		Il2CppCodeGenWriteBarrier((&___userRefreshStateByAuthCPtr_3), value);
	}
};

struct FirebaseAuthService_t2470375121_StaticFields
{
public:
	// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::_instance
	FirebaseAuthService_t2470375121 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(FirebaseAuthService_t2470375121_StaticFields, ____instance_1)); }
	inline FirebaseAuthService_t2470375121 * get__instance_1() const { return ____instance_1; }
	inline FirebaseAuthService_t2470375121 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(FirebaseAuthService_t2470375121 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEAUTHSERVICE_T2470375121_H
#ifndef AGGREGATEEXCEPTION_T3586243216_H
#define AGGREGATEEXCEPTION_T3586243216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AggregateException
struct  AggregateException_t3586243216  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::<InnerExceptions>k__BackingField
	ReadOnlyCollection_1_t2649313536 * ___U3CInnerExceptionsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CInnerExceptionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AggregateException_t3586243216, ___U3CInnerExceptionsU3Ek__BackingField_11)); }
	inline ReadOnlyCollection_1_t2649313536 * get_U3CInnerExceptionsU3Ek__BackingField_11() const { return ___U3CInnerExceptionsU3Ek__BackingField_11; }
	inline ReadOnlyCollection_1_t2649313536 ** get_address_of_U3CInnerExceptionsU3Ek__BackingField_11() { return &___U3CInnerExceptionsU3Ek__BackingField_11; }
	inline void set_U3CInnerExceptionsU3Ek__BackingField_11(ReadOnlyCollection_1_t2649313536 * value)
	{
		___U3CInnerExceptionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInnerExceptionsU3Ek__BackingField_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEEXCEPTION_T3586243216_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
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
#ifndef TASK_1_T1348208390_H
#define TASK_1_T1348208390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>
struct  Task_1_t1348208390  : public Task_t3187275312
{
public:
	// T System.Threading.Tasks.Task`1::result
	FirebaseUser_t4237635511 * ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t1348208390, ___result_7)); }
	inline FirebaseUser_t4237635511 * get_result_7() const { return ___result_7; }
	inline FirebaseUser_t4237635511 ** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(FirebaseUser_t4237635511 * value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier((&___result_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1348208390_H
#ifndef TASK_1_T3252990864_H
#define TASK_1_T3252990864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t3252990864  : public Task_t3187275312
{
public:
	// T System.Threading.Tasks.Task`1::result
	String_t* ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t3252990864, ___result_7)); }
	inline String_t* get_result_7() const { return ___result_7; }
	inline String_t** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(String_t* value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier((&___result_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T3252990864_H
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
#ifndef FUTURESTATUS_T854570584_H
#define FUTURESTATUS_T854570584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureStatus
struct  FutureStatus_t854570584 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FutureStatus_t854570584, ___value___1)); }
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
#endif // FUTURESTATUS_T854570584_H
#ifndef INITRESULT_T3767652586_H
#define INITRESULT_T3767652586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.InitResult
struct  InitResult_t3767652586 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitResult_t3767652586, ___value___1)); }
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
#endif // INITRESULT_T3767652586_H
#ifndef LOGLEVEL_T2506056272_H
#define LOGLEVEL_T2506056272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.LogLevel
struct  LogLevel_t2506056272 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogLevel_t2506056272, ___value___1)); }
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
#endif // LOGLEVEL_T2506056272_H
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
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef ENUMERATOR_T4201468800_H
#define ENUMERATOR_T4201468800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.IntPtr>
struct  Enumerator_t4201468800 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2312224923 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	intptr_t ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t4201468800, ___l_0)); }
	inline List_1_t2312224923 * get_l_0() const { return ___l_0; }
	inline List_1_t2312224923 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2312224923 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t4201468800, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t4201468800, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4201468800, ___current_3)); }
	inline intptr_t get_current_3() const { return ___current_3; }
	inline intptr_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(intptr_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T4201468800_H
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
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
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
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef OUTOFMEMORYEXCEPTION_T2437671686_H
#define OUTOFMEMORYEXCEPTION_T2437671686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2437671686  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2437671686_H
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
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef HANDLEREF_T3745784362_H
#define HANDLEREF_T3745784362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t3745784362 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::wrapper
	RuntimeObject * ___wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___wrapper_0)); }
	inline RuntimeObject * get_wrapper_0() const { return ___wrapper_0; }
	inline RuntimeObject ** get_address_of_wrapper_0() { return &___wrapper_0; }
	inline void set_wrapper_0(RuntimeObject * value)
	{
		___wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___wrapper_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEREF_T3745784362_H
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
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef FIREBASEAUTH_T3361360866_H
#define FIREBASEAUTH_T3361360866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth
struct  FirebaseAuth_t3361360866  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.Auth.FirebaseAuth::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::appProxy
	FirebaseApp_t2526288410 * ___appProxy_2;
	// System.IntPtr Firebase.Auth.FirebaseAuth::appCPtr
	intptr_t ___appCPtr_3;
	// Firebase.CleanupNotifier/RegistrationToken Firebase.Auth.FirebaseAuth::cleanupToken
	RegistrationToken_t3106726623  ___cleanupToken_4;
	// System.IntPtr Firebase.Auth.FirebaseAuth::authStateListener
	intptr_t ___authStateListener_5;
	// System.IntPtr Firebase.Auth.FirebaseAuth::idTokenListener
	intptr_t ___idTokenListener_6;
	// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::currentUser
	FirebaseUser_t4237635511 * ___currentUser_7;
	// System.EventHandler Firebase.Auth.FirebaseAuth::StateChanged
	EventHandler_t1348719766 * ___StateChanged_8;
	// System.EventHandler Firebase.Auth.FirebaseAuth::IdTokenChanged
	EventHandler_t1348719766 * ___IdTokenChanged_9;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_appProxy_2() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___appProxy_2)); }
	inline FirebaseApp_t2526288410 * get_appProxy_2() const { return ___appProxy_2; }
	inline FirebaseApp_t2526288410 ** get_address_of_appProxy_2() { return &___appProxy_2; }
	inline void set_appProxy_2(FirebaseApp_t2526288410 * value)
	{
		___appProxy_2 = value;
		Il2CppCodeGenWriteBarrier((&___appProxy_2), value);
	}

	inline static int32_t get_offset_of_appCPtr_3() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___appCPtr_3)); }
	inline intptr_t get_appCPtr_3() const { return ___appCPtr_3; }
	inline intptr_t* get_address_of_appCPtr_3() { return &___appCPtr_3; }
	inline void set_appCPtr_3(intptr_t value)
	{
		___appCPtr_3 = value;
	}

	inline static int32_t get_offset_of_cleanupToken_4() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___cleanupToken_4)); }
	inline RegistrationToken_t3106726623  get_cleanupToken_4() const { return ___cleanupToken_4; }
	inline RegistrationToken_t3106726623 * get_address_of_cleanupToken_4() { return &___cleanupToken_4; }
	inline void set_cleanupToken_4(RegistrationToken_t3106726623  value)
	{
		___cleanupToken_4 = value;
	}

	inline static int32_t get_offset_of_authStateListener_5() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___authStateListener_5)); }
	inline intptr_t get_authStateListener_5() const { return ___authStateListener_5; }
	inline intptr_t* get_address_of_authStateListener_5() { return &___authStateListener_5; }
	inline void set_authStateListener_5(intptr_t value)
	{
		___authStateListener_5 = value;
	}

	inline static int32_t get_offset_of_idTokenListener_6() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___idTokenListener_6)); }
	inline intptr_t get_idTokenListener_6() const { return ___idTokenListener_6; }
	inline intptr_t* get_address_of_idTokenListener_6() { return &___idTokenListener_6; }
	inline void set_idTokenListener_6(intptr_t value)
	{
		___idTokenListener_6 = value;
	}

	inline static int32_t get_offset_of_currentUser_7() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___currentUser_7)); }
	inline FirebaseUser_t4237635511 * get_currentUser_7() const { return ___currentUser_7; }
	inline FirebaseUser_t4237635511 ** get_address_of_currentUser_7() { return &___currentUser_7; }
	inline void set_currentUser_7(FirebaseUser_t4237635511 * value)
	{
		___currentUser_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentUser_7), value);
	}

	inline static int32_t get_offset_of_StateChanged_8() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___StateChanged_8)); }
	inline EventHandler_t1348719766 * get_StateChanged_8() const { return ___StateChanged_8; }
	inline EventHandler_t1348719766 ** get_address_of_StateChanged_8() { return &___StateChanged_8; }
	inline void set_StateChanged_8(EventHandler_t1348719766 * value)
	{
		___StateChanged_8 = value;
		Il2CppCodeGenWriteBarrier((&___StateChanged_8), value);
	}

	inline static int32_t get_offset_of_IdTokenChanged_9() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866, ___IdTokenChanged_9)); }
	inline EventHandler_t1348719766 * get_IdTokenChanged_9() const { return ___IdTokenChanged_9; }
	inline EventHandler_t1348719766 ** get_address_of_IdTokenChanged_9() { return &___IdTokenChanged_9; }
	inline void set_IdTokenChanged_9(EventHandler_t1348719766 * value)
	{
		___IdTokenChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___IdTokenChanged_9), value);
	}
};

struct FirebaseAuth_t3361360866_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> Firebase.Auth.FirebaseAuth::appCPtrToAuth
	Dictionary_2_t3851719731 * ___appCPtrToAuth_10;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache0
	StateChangedDelegate_t330995958 * ___U3CU3Ef__mgU24cache0_11;
	// Firebase.Auth.FirebaseAuth/StateChangedDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache1
	StateChangedDelegate_t330995958 * ___U3CU3Ef__mgU24cache1_12;
	// Firebase.CleanupNotifier/DisposeObjectDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache2
	DisposeObjectDelegate_t1709778548 * ___U3CU3Ef__mgU24cache2_13;
	// Firebase.CleanupNotifier/DeleteObjectDelegate Firebase.Auth.FirebaseAuth::<>f__mg$cache3
	DeleteObjectDelegate_t1957612988 * ___U3CU3Ef__mgU24cache3_14;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache0
	Action_1_t3533828461 * ___U3CU3Ef__amU24cache0_15;
	// System.Action`1<Firebase.Auth.FirebaseAuth> Firebase.Auth.FirebaseAuth::<>f__am$cache1
	Action_1_t3533828461 * ___U3CU3Ef__amU24cache1_16;

public:
	inline static int32_t get_offset_of_appCPtrToAuth_10() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___appCPtrToAuth_10)); }
	inline Dictionary_2_t3851719731 * get_appCPtrToAuth_10() const { return ___appCPtrToAuth_10; }
	inline Dictionary_2_t3851719731 ** get_address_of_appCPtrToAuth_10() { return &___appCPtrToAuth_10; }
	inline void set_appCPtrToAuth_10(Dictionary_2_t3851719731 * value)
	{
		___appCPtrToAuth_10 = value;
		Il2CppCodeGenWriteBarrier((&___appCPtrToAuth_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline StateChangedDelegate_t330995958 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline StateChangedDelegate_t330995958 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(StateChangedDelegate_t330995958 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_12() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___U3CU3Ef__mgU24cache1_12)); }
	inline StateChangedDelegate_t330995958 * get_U3CU3Ef__mgU24cache1_12() const { return ___U3CU3Ef__mgU24cache1_12; }
	inline StateChangedDelegate_t330995958 ** get_address_of_U3CU3Ef__mgU24cache1_12() { return &___U3CU3Ef__mgU24cache1_12; }
	inline void set_U3CU3Ef__mgU24cache1_12(StateChangedDelegate_t330995958 * value)
	{
		___U3CU3Ef__mgU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_13() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___U3CU3Ef__mgU24cache2_13)); }
	inline DisposeObjectDelegate_t1709778548 * get_U3CU3Ef__mgU24cache2_13() const { return ___U3CU3Ef__mgU24cache2_13; }
	inline DisposeObjectDelegate_t1709778548 ** get_address_of_U3CU3Ef__mgU24cache2_13() { return &___U3CU3Ef__mgU24cache2_13; }
	inline void set_U3CU3Ef__mgU24cache2_13(DisposeObjectDelegate_t1709778548 * value)
	{
		___U3CU3Ef__mgU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_14() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___U3CU3Ef__mgU24cache3_14)); }
	inline DeleteObjectDelegate_t1957612988 * get_U3CU3Ef__mgU24cache3_14() const { return ___U3CU3Ef__mgU24cache3_14; }
	inline DeleteObjectDelegate_t1957612988 ** get_address_of_U3CU3Ef__mgU24cache3_14() { return &___U3CU3Ef__mgU24cache3_14; }
	inline void set_U3CU3Ef__mgU24cache3_14(DeleteObjectDelegate_t1957612988 * value)
	{
		___U3CU3Ef__mgU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_15() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___U3CU3Ef__amU24cache0_15)); }
	inline Action_1_t3533828461 * get_U3CU3Ef__amU24cache0_15() const { return ___U3CU3Ef__amU24cache0_15; }
	inline Action_1_t3533828461 ** get_address_of_U3CU3Ef__amU24cache0_15() { return &___U3CU3Ef__amU24cache0_15; }
	inline void set_U3CU3Ef__amU24cache0_15(Action_1_t3533828461 * value)
	{
		___U3CU3Ef__amU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_16() { return static_cast<int32_t>(offsetof(FirebaseAuth_t3361360866_StaticFields, ___U3CU3Ef__amU24cache1_16)); }
	inline Action_1_t3533828461 * get_U3CU3Ef__amU24cache1_16() const { return ___U3CU3Ef__amU24cache1_16; }
	inline Action_1_t3533828461 ** get_address_of_U3CU3Ef__amU24cache1_16() { return &___U3CU3Ef__amU24cache1_16; }
	inline void set_U3CU3Ef__amU24cache1_16(Action_1_t3533828461 * value)
	{
		___U3CU3Ef__amU24cache1_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEAUTH_T3361360866_H
#ifndef U3CGETAUTHU3EC__ANONSTOREY1_T454211084_H
#define U3CGETAUTHU3EC__ANONSTOREY1_T454211084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1
struct  U3CGetAuthU3Ec__AnonStorey1_t454211084  : public RuntimeObject
{
public:
	// Firebase.InitResult Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::init_result
	int32_t ___init_result_0;
	// Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0 Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::<>f__ref$0
	U3CGetAuthU3Ec__AnonStorey0_t454145548 * ___U3CU3Ef__refU240_1;

public:
	inline static int32_t get_offset_of_init_result_0() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey1_t454211084, ___init_result_0)); }
	inline int32_t get_init_result_0() const { return ___init_result_0; }
	inline int32_t* get_address_of_init_result_0() { return &___init_result_0; }
	inline void set_init_result_0(int32_t value)
	{
		___init_result_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU240_1() { return static_cast<int32_t>(offsetof(U3CGetAuthU3Ec__AnonStorey1_t454211084, ___U3CU3Ef__refU240_1)); }
	inline U3CGetAuthU3Ec__AnonStorey0_t454145548 * get_U3CU3Ef__refU240_1() const { return ___U3CU3Ef__refU240_1; }
	inline U3CGetAuthU3Ec__AnonStorey0_t454145548 ** get_address_of_U3CU3Ef__refU240_1() { return &___U3CU3Ef__refU240_1; }
	inline void set_U3CU3Ef__refU240_1(U3CGetAuthU3Ec__AnonStorey0_t454145548 * value)
	{
		___U3CU3Ef__refU240_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU240_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETAUTHU3EC__ANONSTOREY1_T454211084_H
#ifndef FIREBASEUSER_T4237635511_H
#define FIREBASEUSER_T4237635511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseUser
struct  FirebaseUser_t4237635511  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Auth.FirebaseUser::swigCMemOwn
	bool ___swigCMemOwn_0;
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_1;
	// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseUser::authProxy
	FirebaseAuth_t3361360866 * ___authProxy_2;

public:
	inline static int32_t get_offset_of_swigCMemOwn_0() { return static_cast<int32_t>(offsetof(FirebaseUser_t4237635511, ___swigCMemOwn_0)); }
	inline bool get_swigCMemOwn_0() const { return ___swigCMemOwn_0; }
	inline bool* get_address_of_swigCMemOwn_0() { return &___swigCMemOwn_0; }
	inline void set_swigCMemOwn_0(bool value)
	{
		___swigCMemOwn_0 = value;
	}

	inline static int32_t get_offset_of_swigCPtr_1() { return static_cast<int32_t>(offsetof(FirebaseUser_t4237635511, ___swigCPtr_1)); }
	inline HandleRef_t3745784362  get_swigCPtr_1() const { return ___swigCPtr_1; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_1() { return &___swigCPtr_1; }
	inline void set_swigCPtr_1(HandleRef_t3745784362  value)
	{
		___swigCPtr_1 = value;
	}

	inline static int32_t get_offset_of_authProxy_2() { return static_cast<int32_t>(offsetof(FirebaseUser_t4237635511, ___authProxy_2)); }
	inline FirebaseAuth_t3361360866 * get_authProxy_2() const { return ___authProxy_2; }
	inline FirebaseAuth_t3361360866 ** get_address_of_authProxy_2() { return &___authProxy_2; }
	inline void set_authProxy_2(FirebaseAuth_t3361360866 * value)
	{
		___authProxy_2 = value;
		Il2CppCodeGenWriteBarrier((&___authProxy_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEUSER_T4237635511_H
#ifndef FIREBASEAPP_T2526288410_H
#define FIREBASEAPP_T2526288410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp
struct  FirebaseApp_t2526288410  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_2;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t3234831756 * ___appPlatform_9;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_appPlatform_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___appPlatform_9)); }
	inline FirebaseAppPlatform_t3234831756 * get_appPlatform_9() const { return ___appPlatform_9; }
	inline FirebaseAppPlatform_t3234831756 ** get_address_of_appPlatform_9() { return &___appPlatform_9; }
	inline void set_appPlatform_9(FirebaseAppPlatform_t3234831756 * value)
	{
		___appPlatform_9 = value;
		Il2CppCodeGenWriteBarrier((&___appPlatform_9), value);
	}
};

struct FirebaseApp_t2526288410_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t1120143015 * ___nameToProxy_3;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t3851719731 * ___cPtrToProxy_4;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_5;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_6;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_7;
	// System.Boolean Firebase.FirebaseApp::installedCerts
	bool ___installedCerts_8;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t3131870060 * ___U3CU3Ef__amU24cache0_10;
	// Firebase.FirebaseApp/LogMessageDelegate Firebase.FirebaseApp::<>f__mg$cache0
	LogMessageDelegate_t2362307948 * ___U3CU3Ef__mgU24cache0_11;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t2062041240 * ___U3CU3Ef__amU24cache1_12;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache2
	Func_2_t680774166 * ___U3CU3Ef__amU24cache2_13;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache3
	Func_2_t2129588086 * ___U3CU3Ef__amU24cache3_14;

public:
	inline static int32_t get_offset_of_nameToProxy_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___nameToProxy_3)); }
	inline Dictionary_2_t1120143015 * get_nameToProxy_3() const { return ___nameToProxy_3; }
	inline Dictionary_2_t1120143015 ** get_address_of_nameToProxy_3() { return &___nameToProxy_3; }
	inline void set_nameToProxy_3(Dictionary_2_t1120143015 * value)
	{
		___nameToProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___nameToProxy_3), value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___cPtrToProxy_4)); }
	inline Dictionary_2_t3851719731 * get_cPtrToProxy_4() const { return ___cPtrToProxy_4; }
	inline Dictionary_2_t3851719731 ** get_address_of_cPtrToProxy_4() { return &___cPtrToProxy_4; }
	inline void set_cPtrToProxy_4(Dictionary_2_t3851719731 * value)
	{
		___cPtrToProxy_4 = value;
		Il2CppCodeGenWriteBarrier((&___cPtrToProxy_4), value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___AppUtilCallbacksInitialized_5)); }
	inline bool get_AppUtilCallbacksInitialized_5() const { return ___AppUtilCallbacksInitialized_5; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_5() { return &___AppUtilCallbacksInitialized_5; }
	inline void set_AppUtilCallbacksInitialized_5(bool value)
	{
		___AppUtilCallbacksInitialized_5 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___AppUtilCallbacksLock_6)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_6() const { return ___AppUtilCallbacksLock_6; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_6() { return &___AppUtilCallbacksLock_6; }
	inline void set_AppUtilCallbacksLock_6(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___AppUtilCallbacksLock_6), value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___PreventOnAllAppsDestroyed_7)); }
	inline bool get_PreventOnAllAppsDestroyed_7() const { return ___PreventOnAllAppsDestroyed_7; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_7() { return &___PreventOnAllAppsDestroyed_7; }
	inline void set_PreventOnAllAppsDestroyed_7(bool value)
	{
		___PreventOnAllAppsDestroyed_7 = value;
	}

	inline static int32_t get_offset_of_installedCerts_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___installedCerts_8)); }
	inline bool get_installedCerts_8() const { return ___installedCerts_8; }
	inline bool* get_address_of_installedCerts_8() { return &___installedCerts_8; }
	inline void set_installedCerts_8(bool value)
	{
		___installedCerts_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline CreateDelegate_t3131870060 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline CreateDelegate_t3131870060 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(CreateDelegate_t3131870060 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_11() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__mgU24cache0_11)); }
	inline LogMessageDelegate_t2362307948 * get_U3CU3Ef__mgU24cache0_11() const { return ___U3CU3Ef__mgU24cache0_11; }
	inline LogMessageDelegate_t2362307948 ** get_address_of_U3CU3Ef__mgU24cache0_11() { return &___U3CU3Ef__mgU24cache0_11; }
	inline void set_U3CU3Ef__mgU24cache0_11(LogMessageDelegate_t2362307948 * value)
	{
		___U3CU3Ef__mgU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_1_t2062041240 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_1_t2062041240 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_1_t2062041240 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache2_13)); }
	inline Func_2_t680774166 * get_U3CU3Ef__amU24cache2_13() const { return ___U3CU3Ef__amU24cache2_13; }
	inline Func_2_t680774166 ** get_address_of_U3CU3Ef__amU24cache2_13() { return &___U3CU3Ef__amU24cache2_13; }
	inline void set_U3CU3Ef__amU24cache2_13(Func_2_t680774166 * value)
	{
		___U3CU3Ef__amU24cache2_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache3_14)); }
	inline Func_2_t2129588086 * get_U3CU3Ef__amU24cache3_14() const { return ___U3CU3Ef__amU24cache3_14; }
	inline Func_2_t2129588086 ** get_address_of_U3CU3Ef__amU24cache3_14() { return &___U3CU3Ef__amU24cache3_14; }
	inline void set_U3CU3Ef__amU24cache3_14(Func_2_t2129588086 * value)
	{
		___U3CU3Ef__amU24cache3_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEAPP_T2526288410_H
#ifndef FUTUREBASE_T1024553797_H
#define FUTUREBASE_T1024553797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureBase
struct  FutureBase_t1024553797  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t1024553797, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t1024553797, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTUREBASE_T1024553797_H
#ifndef INITIALIZATIONEXCEPTION_T1111396117_H
#define INITIALIZATIONEXCEPTION_T1111396117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.InitializationException
struct  InitializationException_t1111396117  : public Exception_t
{
public:
	// Firebase.InitResult Firebase.InitializationException::<InitResult>k__BackingField
	int32_t ___U3CInitResultU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CInitResultU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(InitializationException_t1111396117, ___U3CInitResultU3Ek__BackingField_11)); }
	inline int32_t get_U3CInitResultU3Ek__BackingField_11() const { return ___U3CInitResultU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CInitResultU3Ek__BackingField_11() { return &___U3CInitResultU3Ek__BackingField_11; }
	inline void set_U3CInitResultU3Ek__BackingField_11(int32_t value)
	{
		___U3CInitResultU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIALIZATIONEXCEPTION_T1111396117_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DIVIDEBYZEROEXCEPTION_T1856388118_H
#define DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t1856388118  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T1856388118_H
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
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
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
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef EXCEPTIONARGUMENTDELEGATE_T1357866714_H
#define EXCEPTIONARGUMENTDELEGATE_T1357866714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t1357866714  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONARGUMENTDELEGATE_T1357866714_H
#ifndef EXCEPTIONDELEGATE_T3683244484_H
#define EXCEPTIONDELEGATE_T3683244484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct  ExceptionDelegate_t3683244484  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONDELEGATE_T3683244484_H
#ifndef SWIGSTRINGDELEGATE_T3506210183_H
#define SWIGSTRINGDELEGATE_T3506210183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct  SWIGStringDelegate_t3506210183  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGSTRINGDELEGATE_T3506210183_H
#ifndef STATECHANGEDDELEGATE_T330995958_H
#define STATECHANGEDDELEGATE_T330995958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/StateChangedDelegate
struct  StateChangedDelegate_t330995958  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGEDDELEGATE_T330995958_H
#ifndef FUTURE_USER_T1455245928_H
#define FUTURE_USER_T1455245928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.Future_User
struct  Future_User_t1455245928  : public FutureBase_t1024553797
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Auth.Future_User::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_2;
	// System.IntPtr Firebase.Auth.Future_User::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Auth.Future_User/SWIG_CompletionDelegate Firebase.Auth.Future_User::SWIG_CompletionCB
	SWIG_CompletionDelegate_t4100679291 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_User_t1455245928, ___swigCPtr_2)); }
	inline HandleRef_t3745784362  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t3745784362  value)
	{
		___swigCPtr_2 = value;
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_User_t1455245928, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_User_t1455245928, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t4100679291 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t4100679291 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t4100679291 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((&___SWIG_CompletionCB_7), value);
	}
};

struct Future_User_t1455245928_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action> Firebase.Auth.Future_User::Callbacks
	Dictionary_2_t2168025419 * ___Callbacks_3;
	// System.Int32 Firebase.Auth.Future_User::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Auth.Future_User::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_User_t1455245928_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t2168025419 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t2168025419 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t2168025419 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((&___Callbacks_3), value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_User_t1455245928_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_User_t1455245928_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackLock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTURE_USER_T1455245928_H
#ifndef ACTION_T3279312088_H
#define ACTION_T3279312088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.Future_User/Action
struct  Action_t3279312088  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T3279312088_H
#ifndef SWIG_COMPLETIONDELEGATE_T4100679291_H
#define SWIG_COMPLETIONDELEGATE_T4100679291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.Future_User/SWIG_CompletionDelegate
struct  SWIG_CompletionDelegate_t4100679291  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIG_COMPLETIONDELEGATE_T4100679291_H
#ifndef DELETEOBJECTDELEGATE_T1957612988_H
#define DELETEOBJECTDELEGATE_T1957612988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.CleanupNotifier/DeleteObjectDelegate
struct  DeleteObjectDelegate_t1957612988  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEOBJECTDELEGATE_T1957612988_H
#ifndef DISPOSEOBJECTDELEGATE_T1709778548_H
#define DISPOSEOBJECTDELEGATE_T1709778548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.CleanupNotifier/DisposeObjectDelegate
struct  DisposeObjectDelegate_t1709778548  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPOSEOBJECTDELEGATE_T1709778548_H
#ifndef FUTURESTRING_T4072148675_H
#define FUTURESTRING_T4072148675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureString
struct  FutureString_t4072148675  : public FutureBase_t1024553797
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureString::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureString::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureString/SWIG_CompletionDelegate Firebase.FutureString::SWIG_CompletionCB
	SWIG_CompletionDelegate_t3186567461 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureString_t4072148675, ___swigCPtr_2)); }
	inline HandleRef_t3745784362  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t3745784362  value)
	{
		___swigCPtr_2 = value;
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureString_t4072148675, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureString_t4072148675, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t3186567461 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t3186567461 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t3186567461 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((&___SWIG_CompletionCB_7), value);
	}
};

struct FutureString_t4072148675_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action> Firebase.FutureString::Callbacks
	Dictionary_2_t1596674066 * ___Callbacks_3;
	// System.Int32 Firebase.FutureString::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureString::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureString_t4072148675_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t1596674066 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t1596674066 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t1596674066 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((&___Callbacks_3), value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureString_t4072148675_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureString_t4072148675_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackLock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTURESTRING_T4072148675_H
#ifndef FUTUREVOID_T983301800_H
#define FUTUREVOID_T983301800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureVoid
struct  FutureVoid_t983301800  : public FutureBase_t1024553797
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t2224793779 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800, ___swigCPtr_2)); }
	inline HandleRef_t3745784362  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t3745784362  value)
	{
		___swigCPtr_2 = value;
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t2224793779 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t2224793779 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t2224793779 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((&___SWIG_CompletionCB_7), value);
	}
};

struct FutureVoid_t983301800_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_t133523557 * ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t133523557 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t133523557 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t133523557 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((&___Callbacks_3), value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackLock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTUREVOID_T983301800_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T3533828461_H
#define ACTION_1_T3533828461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Firebase.Auth.FirebaseAuth>
struct  Action_1_t3533828461  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3533828461_H
#ifndef ACTION_1_T1520675985_H
#define ACTION_1_T1520675985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct  Action_1_t1520675985  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1520675985_H
#ifndef ACTION_1_T3425458459_H
#define ACTION_1_T3425458459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct  Action_1_t3425458459  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3425458459_H
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
#ifndef EVENTHANDLER_T1348719766_H
#define EVENTHANDLER_T1348719766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1348719766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1348719766_H
#ifndef EVENTHANDLER_1_T1515976428_H
#define EVENTHANDLER_1_T1515976428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_t1515976428  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T1515976428_H
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3495031886_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m273080844_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2521704440_gshared (Dictionary_2_t1301971883 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m3592511947_gshared (TaskCompletionSource_1_t1480828981 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_1_ContinueWith_m650681576_gshared (Task_1_t190679043 * __this, Action_1_t363146638 * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_1_t190679043 * TaskCompletionSource_1_get_Task_m956462093_gshared (TaskCompletionSource_1_t1480828981 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m3013710522_gshared (TaskCompletionSource_1_t1480828981 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<System.Object>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSourceCompat_1_SetException_m2226010287_gshared (RuntimeObject * __this /* static, unused */, TaskCompletionSource_1_t1480828981 * p0, AggregateException_t3586243216 * p1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m822420933_gshared (Task_1_t190679043 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m1045642339_gshared (TaskCompletionSource_1_t1480828981 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517598155_gshared (Dictionary_2_t1301971883 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m3035911479_gshared (TaskCompletionSource_1_t1480828981 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3327106492_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4193450060_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m699822512_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t1491647354 * Dictionary_2_get_Keys_m303053832_gshared (Dictionary_2_t1301971883 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.IntPtr>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1277177286_gshared (List_1_t2312224923 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.IntPtr>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t4201468800  List_1_GetEnumerator_m3513205496_gshared (List_1_t2312224923 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.IntPtr>::get_Current()
extern "C" IL2CPP_METHOD_ATTR intptr_t Enumerator_get_Current_m2322814383_gshared (Enumerator_t4201468800 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.IntPtr>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3923053051_gshared (Enumerator_t4201468800 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.IntPtr>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1777996260_gshared (Enumerator_t4201468800 * __this, const RuntimeMethod* method);

// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
extern "C" IL2CPP_METHOD_ATTR HandleRef_t3745784362  FirebaseAuth_getCPtr_m4190853153 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateListener_m3340408272 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, StateChangedDelegate_t330995958 * ___jarg21, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
extern "C" IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m582413763 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
extern "C" IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m2171998990 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyAuthStateListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateListener_m2649155670 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateIdTokenListener_m2667247784 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, StateChangedDelegate_t330995958 * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyIdTokenListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyIdTokenListener_m1613535237 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m3616102058 (SWIGExceptionHelper_t3247595434 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m526319892 (SWIGStringHelper_t497556005 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m4103441096 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4283099985 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4229534085 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m4180331635 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m1823119383 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1072098740 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m3335081099 (ExceptionDelegate_t3683244484 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m1450365699 (ExceptionArgumentDelegate_t1357866714 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m1662750850 (RuntimeObject * __this /* static, unused */, ExceptionDelegate_t3683244484 * ___applicationDelegate0, ExceptionDelegate_t3683244484 * ___arithmeticDelegate1, ExceptionDelegate_t3683244484 * ___divideByZeroDelegate2, ExceptionDelegate_t3683244484 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t3683244484 * ___invalidCastDelegate4, ExceptionDelegate_t3683244484 * ___invalidOperationDelegate5, ExceptionDelegate_t3683244484 * ___ioDelegate6, ExceptionDelegate_t3683244484 * ___nullReferenceDelegate7, ExceptionDelegate_t3683244484 * ___outOfMemoryDelegate8, ExceptionDelegate_t3683244484 * ___overflowDelegate9, ExceptionDelegate_t3683244484 * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m3857266315 (RuntimeObject * __this /* static, unused */, ExceptionArgumentDelegate_t1357866714 * ___argumentDelegate0, ExceptionArgumentDelegate_t1357866714 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t1357866714 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
extern "C" IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m2823107563 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void ApplicationException__ctor_m692455299 (ApplicationException_t2339761290 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m543672851 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m3829702723 (ArithmeticException_t4283546778 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m3132723944 (DivideByZeroException_t1856388118 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m3342077230 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m2604994586 (InvalidCastException_t3927145244 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1685032583 (InvalidOperationException_t56020091 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void IOException__ctor_m3246761956 (IOException_t4088381929 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m3182281066 (NullReferenceException_t1023182353 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m4180974057 (OutOfMemoryException_t2437671686 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void OverflowException__ctor_m2524654454 (OverflowException_t2020128637 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m3761792013 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, Exception_t * p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m2009621981 (ArgumentNullException_t1615371798 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m2258064360 (ExceptionArgumentDelegate_t1357866714 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m548027919 (ExceptionDelegate_t3683244484 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m755717645 (RuntimeObject * __this /* static, unused */, String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m2878487898 (SWIGStringDelegate_t3506210183 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
extern "C" IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m312855186 (RuntimeObject * __this /* static, unused */, SWIGStringDelegate_t3506210183 * ___stringDelegate0, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m706080673 (SWIGStringDelegate_t3506210183 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m3953799837 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m3469931091 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void HandleRef__ctor_m868850155 (HandleRef_t3745784362 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m1724996530 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_m3446725357 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3377532459 (Dictionary_2_t3851719731 * __this, intptr_t p0, WeakReference_t1334886716 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3851719731 *, intptr_t, WeakReference_t1334886716 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3495031886_gshared)(__this, p0, p1, method);
}
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FirebaseApp_WeakReferenceGetTarget_m3657098532 (RuntimeObject * __this /* static, unused */, WeakReference_t1334886716 * p0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
extern "C" IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m4239591804 (HandleRef_t3745784362 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m744513393 (NullReferenceException_t1023182353 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey0__ctor_m2673240060 (U3CGetAuthU3Ec__AnonStorey0_t454145548 * __this, const RuntimeMethod* method);
// Firebase.Platform.IAuthService Firebase.Platform.Services::get_Auth()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_m3206912075 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR FirebaseAuthService_t2470375121 * FirebaseAuthService_get_Instance_m128522418 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Auth(Firebase.Platform.IAuthService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Auth_m4233926872 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1__ctor_m2549835772 (U3CGetAuthU3Ec__AnonStorey1_t454211084 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
extern "C" IL2CPP_METHOD_ATTR HandleRef_t3745784362  FirebaseApp_getCPtr_m4063892236 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * p0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_ProxyFromAppCPtr_m1270286461 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::TranslateDllNotFoundException(System.Action)
extern "C" IL2CPP_METHOD_ATTR void FirebaseApp_TranslateDllNotFoundException_m3112929971 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * p0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m593347426 (StateChangedDelegate_t330995958 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m1154075212 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___auth0, StateChangedDelegate_t330995958 * ___state_changed_delegate1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m1166398406 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___auth0, StateChangedDelegate_t330995958 * ___state_changed_delegate1, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * p0, bool p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2636174372 (Dictionary_2_t3851719731 * __this, intptr_t p0, WeakReference_t1334886716 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3851719731 *, intptr_t, WeakReference_t1334886716 *, const RuntimeMethod*))Dictionary_2_set_Item_m273080844_gshared)(__this, p0, p1, method);
}
// System.Void Firebase.Unity.FirebaseAuthService::OnIdTokenChanged(Firebase.Auth.FirebaseAuth)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_OnIdTokenChanged_m2557035096 (FirebaseAuthService_t2470375121 * __this, FirebaseAuth_t3361360866 * ___auth0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.CleanupNotifier/DisposeObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DisposeObjectDelegate__ctor_m2871048726 (DisposeObjectDelegate_t1709778548 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Firebase.CleanupNotifier/DeleteObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void DeleteObjectDelegate__ctor_m1051687624 (DeleteObjectDelegate_t1957612988 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// Firebase.CleanupNotifier/RegistrationToken Firebase.CleanupNotifier::RegisterForCleanup(System.IntPtr,System.IntPtr,System.Object,System.Type,Firebase.CleanupNotifier/DisposeObjectDelegate,Firebase.CleanupNotifier/DeleteObjectDelegate)
extern "C" IL2CPP_METHOD_ATTR RegistrationToken_t3106726623  CleanupNotifier_RegisterForCleanup_m3761672935 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, RuntimeObject * p2, Type_t * p3, DisposeObjectDelegate_t1709778548 * p4, DeleteObjectDelegate_t1957612988 * p5, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService::OnAuthDisposed(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_OnAuthDisposed_m2492562215 (FirebaseAuthService_t2470375121 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::Remove(!0)
inline bool Dictionary_2_Remove_m3198892635 (Dictionary_2_t3851719731 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3851719731 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m2521704440_gshared)(__this, p0, method);
}
// System.Void Firebase.Auth.FirebaseUser::Dispose()
extern "C" IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m590215956 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m2035806860 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m920823836 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method);
// System.Void Firebase.CleanupNotifier::DisposeObject(Firebase.CleanupNotifier/RegistrationToken&,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CleanupNotifier_DisposeObject_m2709111202 (RuntimeObject * __this /* static, unused */, RegistrationToken_t3106726623 * p0, RuntimeObject * p1, bool p2, const RuntimeMethod* method);
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::Invoke(!0)
inline void Action_1_Invoke_m2917758882 (Action_1_t3533828461 * __this, FirebaseAuth_t3361360866 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3533828461 *, FirebaseAuth_t3361360866 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method);
}
// System.Void System.Action`1<Firebase.Auth.FirebaseAuth>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m722766574 (Action_1_t3533828461 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3533828461 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m2255408459 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, Action_1_t3533828461 * ___stateChangeClosure1, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR FirebaseApp_t2526288410 * FirebaseApp_get_DefaultInstance_m3436350982 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_GetAuth_m3801311256 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
extern "C" IL2CPP_METHOD_ATTR HandleRef_t3745784362  FirebaseUser_getCPtr_m1424584513 (RuntimeObject * __this /* static, unused */, FirebaseUser_t4237635511 * ___obj0, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * FirebaseAuth_get_CurrentUserInternal_m794105557 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * FirebaseAuth_UpdateCurrentUser_m2746281638 (FirebaseAuth_t3361360866 * __this, FirebaseUser_t4237635511 * ___proxy0, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7__ctor_m2293161068 (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_m3441179502 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::.ctor()
inline void TaskCompletionSource_1__ctor_m1516347784 (TaskCompletionSource_1_t2638358328 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t2638358328 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3592511947_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordInternalAsync(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_m284197153 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m839606331 (Action_1_t1520675985 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1520675985 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t3187275312 * Task_1_ContinueWith_m2455971619 (Task_1_t1348208390 * __this, Action_1_t1520675985 * p0, const RuntimeMethod* method)
{
	return ((  Task_t3187275312 * (*) (Task_1_t1348208390 *, Action_1_t1520675985 *, const RuntimeMethod*))Task_1_ContinueWith_m650681576_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::get_Task()
inline Task_1_t1348208390 * TaskCompletionSource_1_get_Task_m522014888 (TaskCompletionSource_1_t2638358328 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t1348208390 * (*) (TaskCompletionSource_1_t2638358328 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m956462093_gshared)(__this, method);
}
// System.Void Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8__ctor_m632827701 (U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::CreateUserWithEmailAndPasswordInternalAsync(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_m742258242 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m3056077931 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m3915829379 (TaskCompletionSource_1_t2638358328 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t2638358328 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m3013710522_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_m4214781122 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" IL2CPP_METHOD_ATTR AggregateException_t3586243216 * Task_get_Exception_m1363338588 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Void Firebase.Internal.TaskCompletionSourceCompat`1<Firebase.Auth.FirebaseUser>::SetException(System.Threading.Tasks.TaskCompletionSource`1<!0>,System.AggregateException)
inline void TaskCompletionSourceCompat_1_SetException_m1553797418 (RuntimeObject * __this /* static, unused */, TaskCompletionSource_1_t2638358328 * p0, AggregateException_t3586243216 * p1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, TaskCompletionSource_1_t2638358328 *, AggregateException_t3586243216 *, const RuntimeMethod*))TaskCompletionSourceCompat_1_SetException_m2226010287_gshared)(__this /* static, unused */, p0, p1, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>::get_Result()
inline FirebaseUser_t4237635511 * Task_1_get_Result_m3400309620 (Task_1_t1348208390 * __this, const RuntimeMethod* method)
{
	return ((  FirebaseUser_t4237635511 * (*) (Task_1_t1348208390 *, const RuntimeMethod*))Task_1_get_Result_m822420933_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m2181318245 (TaskCompletionSource_1_t2638358328 * __this, FirebaseUser_t4237635511 * p0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t2638358328 *, FirebaseUser_t4237635511 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m1045642339_gshared)(__this, p0, method);
}
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal(System.Runtime.InteropServices.HandleRef,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal_m2680282494 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Future_User__ctor_m3952942069 (Future_User_t1455245928 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * Future_User_GetTask_m4097663285 (RuntimeObject * __this /* static, unused */, Future_User_t1455245928 * ___fu0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal(System.Runtime.InteropServices.HandleRef,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal_m2266735512 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SignOut(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignOut_m3753412278 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SendPasswordResetEmail(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SendPasswordResetEmail_m915485665 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FutureVoid__ctor_m3140861867 (FutureVoid_t983301800 * __this, intptr_t p0, bool p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * FutureVoid_GetTask_m4275693369 (RuntimeObject * __this /* static, unused */, FutureVoid_t983301800 * p0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m1010221189 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_m2282330213 (FirebaseAuth_t3361360866 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUserInternal_get_m760294484 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseUser__ctor_m3519002295 (FirebaseUser_t4237635511 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::.ctor()
inline void Dictionary_2__ctor_m1091767215 (Dictionary_2_t3851719731 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3851719731 *, const RuntimeMethod*))Dictionary_2__ctor_m517598155_gshared)(__this, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_Invoke_m2047579917 (EventHandler_t1348719766 * __this, RuntimeObject * p0, EventArgs_t3591816995 * p1, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m2514684495 (FirebaseAuth_t3361360866 * __this, Task_1_t1348208390 * ___task0, TaskCompletionSource_1_t2638358328 * ___taskCompletionSource1, const RuntimeMethod* method);
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_GetAuthInternal_m3254775501 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method);
// System.Void Firebase.InitializationException::.ctor(Firebase.InitResult)
extern "C" IL2CPP_METHOD_ATTR void InitializationException__ctor_m612166457 (InitializationException_t1111396117 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_m2276802918 (StateChangedDelegate_t330995958 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m2042297620 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m1643407471 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, bool ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FutureString__ctor_m2115360400 (FutureString_t4072148675 * __this, intptr_t p0, bool p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3252990864 * FutureString_GetTask_m2289068801 (RuntimeObject * __this /* static, unused */, FutureString_t4072148675 * p0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_SendEmailVerification(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_SendEmailVerification_m2425539532 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_DisplayName_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_DisplayName_get_m2334642060 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Email_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Email_get_m3475476817 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_IsEmailVerified_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_IsEmailVerified_get_m147146998 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_UserId_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m150766812 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_m2723325741 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIGUpcast(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIGUpcast_m1241835802 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FutureBase__ctor_m4133108386 (FutureBase_t1024553797 * __this, intptr_t p0, bool p1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
extern "C" IL2CPP_METHOD_ATTR void FutureBase_Finalize_m1172048056 (FutureBase_t1024553797 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_Future_User(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_Future_User_m3517198631 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m185985433 (Future_User_t1455245928 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
extern "C" IL2CPP_METHOD_ATTR void FutureBase_Dispose_m3149756878 (FutureBase_t1024553797 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m863357698 (U3CGetTaskU3Ec__AnonStorey0_t1473534857 * __this, const RuntimeMethod* method);
// Firebase.FutureStatus Firebase.FutureBase::status()
extern "C" IL2CPP_METHOD_ATTR int32_t FutureBase_status_m2790518304 (FutureBase_t1024553797 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void FirebaseException__ctor_m2690917590 (FirebaseException_t627220627 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m3841834645 (TaskCompletionSource_1_t2638358328 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t2638358328 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_m3035911479_gshared)(__this, p0, method);
}
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m3628338205 (Action_t3279312088 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_m2404728356 (Future_User_t1455245928 * __this, Action_t3279312088 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3375603479 (SWIG_CompletionDelegate_t4100679291 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::.ctor()
inline void Dictionary_2__ctor_m3117022313 (Dictionary_2_t2168025419 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2168025419 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3155210180 (Dictionary_2_t2168025419 * __this, int32_t p0, Action_t3279312088 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2168025419 *, int32_t, Action_t3279312088 *, const RuntimeMethod*))Dictionary_2_set_Item_m3327106492_gshared)(__this, p0, p1, method);
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m1226104428 (Future_User_t1455245928 * __this, SWIG_CompletionDelegate_t4100679291 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m3840256860 (Future_User_t1455245928 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3586319931 (Dictionary_2_t2168025419 * __this, int32_t p0, Action_t3279312088 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2168025419 *, int32_t, Action_t3279312088 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Auth.Future_User/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m1614452640 (Dictionary_2_t2168025419 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2168025419 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m3171690342 (Action_t3279312088 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_OnCompletion_m4140874164 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, SWIG_CompletionDelegate_t4100679291 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_FreeCompletionData_m852262520 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_result(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_result_m3536853542 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method);
// System.Int32 Firebase.FutureBase::error()
extern "C" IL2CPP_METHOD_ATTR int32_t FutureBase_error_m319631945 (FutureBase_t1024553797 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
extern "C" IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m2570640618 (FutureBase_t1024553797 * __this, const RuntimeMethod* method);
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::result()
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * Future_User_result_m3781469802 (Future_User_t1455245928 * __this, const RuntimeMethod* method);
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m1292403671 (SWIG_CompletionDelegate_t4100679291 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::.ctor()
inline void Dictionary_2__ctor_m2827708710 (Dictionary_2_t4001210531 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4001210531 *, const RuntimeMethod*))Dictionary_2__ctor_m517598155_gshared)(__this, method);
}
// System.Void Firebase.Platform.Default.BaseAuthService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseAuthService__ctor_m4243196943 (BaseAuthService_t3388892161 * __this, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR FirebaseHandler_t2087675187 * FirebaseHandler_get_DefaultInstance_m1688339179 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m1585652483 (EventHandler_1_t1515976428 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1515976428 *, RuntimeObject *, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m699822512_gshared)(__this, p0, p1, method);
}
// System.Void Firebase.Platform.FirebaseHandler::add_Updated(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_add_Updated_m3059867217 (FirebaseHandler_t2087675187 * __this, EventHandler_1_t1515976428 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2442954558 (Dictionary_2_t4001210531 * __this, intptr_t p0, UserRefreshState_t1484377516 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4001210531 *, intptr_t, UserRefreshState_t1484377516 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3495031886_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::Remove(!0)
inline bool Dictionary_2_Remove_m735242794 (Dictionary_2_t4001210531 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4001210531 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m2521704440_gshared)(__this, p0, method);
}
// System.Int64 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int64_t IntPtr_op_Explicit_m3885458658 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::get_App()
extern "C" IL2CPP_METHOD_ATTR FirebaseApp_t2526288410 * FirebaseAuth_get_App_m1298869767 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m2009872515 (FirebaseApp_t2526288410 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::LogMessage(Firebase.LogLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void FirebaseApp_LogMessage_m439117050 (RuntimeObject * __this /* static, unused */, int32_t p0, String_t* p1, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService::StopTokenRefresh(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_StopTokenRefresh_m1727498840 (FirebaseAuthService_t2470375121 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService/UserRefreshState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UserRefreshState__ctor_m63835205 (UserRefreshState_t1484377516 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3729300617 (Dictionary_2_t4001210531 * __this, intptr_t p0, UserRefreshState_t1484377516 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4001210531 *, intptr_t, UserRefreshState_t1484377516 *, const RuntimeMethod*))Dictionary_2_set_Item_m273080844_gshared)(__this, p0, p1, method);
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * FirebaseAuth_get_CurrentUser_m3915863574 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method);
// System.String Firebase.Auth.FirebaseUser::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_m502665137 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method);
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartupSafe()
extern "C" IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartupSafe_m2841477420 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey0__ctor_m150800156 (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.Unity.FirebaseAuthService/UserRefreshState>::get_Keys()
inline KeyCollection_t4190886002 * Dictionary_2_get_Keys_m2062204081 (Dictionary_2_t4001210531 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t4190886002 * (*) (Dictionary_2_t4001210531 *, const RuntimeMethod*))Dictionary_2_get_Keys_m303053832_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.IntPtr>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m1277177286 (List_1_t2312224923 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2312224923 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1277177286_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.IntPtr>::GetEnumerator()
inline Enumerator_t4201468800  List_1_GetEnumerator_m3513205496 (List_1_t2312224923 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4201468800  (*) (List_1_t2312224923 *, const RuntimeMethod*))List_1_GetEnumerator_m3513205496_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.IntPtr>::get_Current()
inline intptr_t Enumerator_get_Current_m2322814383 (Enumerator_t4201468800 * __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Enumerator_t4201468800 *, const RuntimeMethod*))Enumerator_get_Current_m2322814383_gshared)(__this, method);
}
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey1__ctor_m150801245 (U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.Auth.FirebaseUser::TokenAsync(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3252990864 * FirebaseUser_TokenAsync_m1960073769 (FirebaseUser_t4237635511 * __this, bool ___forceRefresh0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3690900092 (Action_1_t3425458459 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3425458459 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t3187275312 * Task_1_ContinueWith_m2941200014 (Task_1_t3252990864 * __this, Action_1_t3425458459 * p0, const RuntimeMethod* method)
{
	return ((  Task_t3187275312 * (*) (Task_1_t3252990864 *, Action_1_t3425458459 *, const RuntimeMethod*))Task_1_ContinueWith_m650681576_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.IntPtr>::MoveNext()
inline bool Enumerator_MoveNext_m3923053051 (Enumerator_t4201468800 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4201468800 *, const RuntimeMethod*))Enumerator_MoveNext_m3923053051_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.IntPtr>::Dispose()
inline void Enumerator_Dispose_m1777996260 (Enumerator_t4201468800 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4201468800 *, const RuntimeMethod*))Enumerator_Dispose_m1777996260_gshared)(__this, method);
}
// System.Void Firebase.Unity.FirebaseAuthService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService__ctor_m3401510087 (FirebaseAuthService_t2470375121 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m3967183205 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m3947131094 (float* __this, const RuntimeMethod* method);
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
// System.IntPtr Firebase.Auth.AuthUtil::CreateAuthStateListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateAuthStateListener_m1154075212 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___auth0, StateChangedDelegate_t330995958 * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_CreateAuthStateListener_m1154075212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		FirebaseAuth_t3361360866 * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		HandleRef_t3745784362  L_1 = FirebaseAuth_getCPtr_m4190853153(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		StateChangedDelegate_t330995958 * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateListener_m3340408272(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, AuthUtil_CreateAuthStateListener_m1154075212_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyAuthStateListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtil_DestroyAuthStateListener_m2035806860 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_DestroyAuthStateListener_m2035806860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateListener_m2649155670(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AuthUtil_DestroyAuthStateListener_m2035806860_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.AuthUtil::CreateIdTokenListener(Firebase.Auth.FirebaseAuth,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtil_CreateIdTokenListener_m1166398406 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___auth0, StateChangedDelegate_t330995958 * ___state_changed_delegate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_CreateIdTokenListener_m1166398406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		FirebaseAuth_t3361360866 * L_0 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		HandleRef_t3745784362  L_1 = FirebaseAuth_getCPtr_m4190853153(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		StateChangedDelegate_t330995958 * L_2 = ___state_changed_delegate1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_CreateIdTokenListener_m2667247784(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, AuthUtil_CreateIdTokenListener_m1166398406_RuntimeMethod_var);
	}

IL_001d:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Auth.AuthUtil::DestroyIdTokenListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtil_DestroyIdTokenListener_m920823836 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtil_DestroyIdTokenListener_m920823836_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_DestroyIdTokenListener_m1613535237(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AuthUtil_DestroyIdTokenListener_m920823836_RuntimeMethod_var);
	}

IL_0016:
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
// System.Void Firebase.Auth.AuthUtilPINVOKE::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE__cctor_m1626855908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthUtilPINVOKE__cctor_m1626855908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t3247595434 * L_0 = (SWIGExceptionHelper_t3247595434 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m3616102058(L_0, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_t590481425_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t497556005 * L_1 = (SWIGStringHelper_t497556005 *)il2cpp_codegen_object_new(SWIGStringHelper_t497556005_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m526319892(L_1, /*hidden argument*/NULL);
		((AuthUtilPINVOKE_t590481425_StaticFields*)il2cpp_codegen_static_fields_for(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_Future_User_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_OnCompletion_m4140874164 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, SWIG_CompletionDelegate_t4100679291 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Auth_Future_User_SWIG_FreeCompletionData(void*, intptr_t);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_FreeCompletionData_m852262520 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_Future_User_result(void*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_result(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_result_m3536853542 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_result)(____jarg10_marshaled);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Auth_delete_Future_User(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_Future_User(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_Future_User_m3517198631 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_delete_Future_User)(____jarg10_marshaled);

}
extern "C" void DEFAULT_CALL Firebase_Auth_delete_FirebaseUser(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseUser(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m2042297620 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_delete_FirebaseUser)(____jarg10_marshaled);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseUser_Token(void*, int32_t);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Token(System.Runtime.InteropServices.HandleRef,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m1643407471 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, bool ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_Token)(____jarg10_marshaled, static_cast<int32_t>(___jarg21));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseUser_SendEmailVerification(void*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_SendEmailVerification(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_SendEmailVerification_m2425539532 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_SendEmailVerification)(____jarg10_marshaled);

	return returnValue;
}
extern "C" char* DEFAULT_CALL Firebase_Auth_FirebaseUser_DisplayName_get(void*);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_DisplayName_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_DisplayName_get_m2334642060 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_DisplayName_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" char* DEFAULT_CALL Firebase_Auth_FirebaseUser_Email_get(void*);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_Email_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Email_get_m3475476817 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_Email_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL Firebase_Auth_FirebaseUser_IsEmailVerified_get(void*);
// System.Boolean Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_IsEmailVerified_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR bool AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_IsEmailVerified_get_m147146998 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_IsEmailVerified_get)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" char* DEFAULT_CALL Firebase_Auth_FirebaseUser_UserId_get(void*);
// System.String Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseUser_UserId_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR String_t* AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m150766812 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseUser_UserId_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL Firebase_Auth_delete_FirebaseAuth(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_delete_FirebaseAuth(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseAuth_m3233001950 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_delete_FirebaseAuth)(____jarg10_marshaled);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal(void*, char*, char*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal(System.Runtime.InteropServices.HandleRef,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal_m2680282494 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal(void*, char*, char*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal(System.Runtime.InteropServices.HandleRef,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal_m2266735512 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, String_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Marshaling of parameter '___jarg32' to native representation
	char* ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_string(___jarg32);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	// Marshaling cleanup of parameter '___jarg32' native representation
	il2cpp_codegen_marshal_free(____jarg32_marshaled);
	____jarg32_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Auth_FirebaseAuth_SignOut(void*);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SignOut(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignOut_m3753412278 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_SignOut)(____jarg10_marshaled);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_SendPasswordResetEmail(void*, char*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_SendPasswordResetEmail(System.Runtime.InteropServices.HandleRef,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SendPasswordResetEmail_m915485665 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_SendPasswordResetEmail)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_GetAuthInternal(void*, int32_t*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_GetAuthInternal(System.Runtime.InteropServices.HandleRef,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m1010221189 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, int32_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_GetAuthInternal)(____jarg10_marshaled, ___jarg21);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_FirebaseAuth_CurrentUserInternal_get(void*);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_FirebaseAuth_CurrentUserInternal_get(System.Runtime.InteropServices.HandleRef)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUserInternal_get_m760294484 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_FirebaseAuth_CurrentUserInternal_get)(____jarg10_marshaled);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_CreateAuthStateListener(void*, Il2CppMethodPointer);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateAuthStateListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateAuthStateListener_m3340408272 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, StateChangedDelegate_t330995958 * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CreateAuthStateListener)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Auth_DestroyAuthStateListener(intptr_t);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyAuthStateListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyAuthStateListener_m2649155670 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_DestroyAuthStateListener)(___jarg10);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_CreateIdTokenListener(void*, Il2CppMethodPointer);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_CreateIdTokenListener(System.Runtime.InteropServices.HandleRef,Firebase.Auth.FirebaseAuth/StateChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_CreateIdTokenListener_m2667247784 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, StateChangedDelegate_t330995958 * ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_CreateIdTokenListener)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Auth_DestroyIdTokenListener(intptr_t);
// System.Void Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_DestroyIdTokenListener(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AuthUtilPINVOKE_Firebase_Auth_DestroyIdTokenListener_m1613535237 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Auth_DestroyIdTokenListener)(___jarg10);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Auth_Future_User_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.Auth.AuthUtilPINVOKE::Firebase_Auth_Future_User_SWIGUpcast(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIGUpcast_m1241835802 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Auth_Future_User_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m4103441096(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m4103441096(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m4283099985(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m4283099985(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m4229534085(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m4229534085(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m4180331635(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m4180331635(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m1823119383(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m1823119383(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1072098740(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m1072098740(NULL, ____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777(NULL, ____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287(NULL, ____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m2541351505 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m2541351505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m4103441096_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_1 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_1, NULL, L_0, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_1);
		intptr_t L_2 = (intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m4283099985_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_3 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_3, NULL, L_2, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_3);
		intptr_t L_4 = (intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_5 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_5, NULL, L_4, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_5);
		intptr_t L_6 = (intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_7 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_7, NULL, L_6, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_7);
		intptr_t L_8 = (intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_9 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_9, NULL, L_8, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_9);
		intptr_t L_10 = (intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_11 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_11, NULL, L_10, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_11);
		intptr_t L_12 = (intptr_t)SWIGExceptionHelper_SetPendingIOException_m4229534085_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_13 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_13, NULL, L_12, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_13);
		intptr_t L_14 = (intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_15 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_15, NULL, L_14, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_15);
		intptr_t L_16 = (intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_17 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_17, NULL, L_16, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_17);
		intptr_t L_18 = (intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m4180331635_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_19 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_19, NULL, L_18, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_19);
		intptr_t L_20 = (intptr_t)SWIGExceptionHelper_SetPendingSystemException_m1823119383_RuntimeMethod_var;
		ExceptionDelegate_t3683244484 * L_21 = (ExceptionDelegate_t3683244484 *)il2cpp_codegen_object_new(ExceptionDelegate_t3683244484_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m3335081099(L_21, NULL, L_20, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_21);
		intptr_t L_22 = (intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m1072098740_RuntimeMethod_var;
		ExceptionArgumentDelegate_t1357866714 * L_23 = (ExceptionArgumentDelegate_t1357866714 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1357866714_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m1450365699(L_23, NULL, L_22, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_23);
		intptr_t L_24 = (intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777_RuntimeMethod_var;
		ExceptionArgumentDelegate_t1357866714 * L_25 = (ExceptionArgumentDelegate_t1357866714 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1357866714_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m1450365699(L_25, NULL, L_24, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_25);
		intptr_t L_26 = (intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287_RuntimeMethod_var;
		ExceptionArgumentDelegate_t1357866714 * L_27 = (ExceptionArgumentDelegate_t1357866714 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1357866714_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m1450365699(L_27, NULL, L_26, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_27);
		ExceptionDelegate_t3683244484 * L_28 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t3683244484 * L_29 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t3683244484 * L_30 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t3683244484 * L_31 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t3683244484 * L_32 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t3683244484 * L_33 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t3683244484 * L_34 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t3683244484 * L_35 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t3683244484 * L_36 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t3683244484 * L_37 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t3683244484 * L_38 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m1662750850(NULL /*static, unused*/, L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t1357866714 * L_39 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t1357866714 * L_40 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t1357866714 * L_41 = ((SWIGExceptionHelper_t3247595434_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t3247595434_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m3857266315(NULL /*static, unused*/, L_39, L_40, L_41, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m3616102058 (SWIGExceptionHelper_t3247595434 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL SWIGRegisterExceptionCallbacks_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_AuthUtil_m1662750850 (RuntimeObject * __this /* static, unused */, ExceptionDelegate_t3683244484 * ___applicationDelegate0, ExceptionDelegate_t3683244484 * ___arithmeticDelegate1, ExceptionDelegate_t3683244484 * ___divideByZeroDelegate2, ExceptionDelegate_t3683244484 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t3683244484 * ___invalidCastDelegate4, ExceptionDelegate_t3683244484 * ___invalidOperationDelegate5, ExceptionDelegate_t3683244484 * ___ioDelegate6, ExceptionDelegate_t3683244484 * ___nullReferenceDelegate7, ExceptionDelegate_t3683244484 * ___outOfMemoryDelegate8, ExceptionDelegate_t3683244484 * ___overflowDelegate9, ExceptionDelegate_t3683244484 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_AuthUtil)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
extern "C" void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_AuthUtil(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_AuthUtil_m3857266315 (RuntimeObject * __this /* static, unused */, ExceptionArgumentDelegate_t1357866714 * ___argumentDelegate0, ExceptionArgumentDelegate_t1357866714 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t1357866714 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_AuthUtil)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m4103441096 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_m4103441096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		ApplicationException_t2339761290 * L_2 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m692455299(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m4283099985 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m4283099985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		ArithmeticException_t4283546778 * L_2 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3829702723(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m256175683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		DivideByZeroException_t1856388118 * L_2 = (DivideByZeroException_t1856388118 *)il2cpp_codegen_object_new(DivideByZeroException_t1856388118_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m3132723944(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m2502665851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		IndexOutOfRangeException_t1578797820 * L_2 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3342077230(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m2038718443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_2 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m2604994586(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m3589957128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1685032583(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m4229534085 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m4229534085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOException_t4088381929 * L_2 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3246761956(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_m1450175763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullReferenceException_t1023182353 * L_2 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3182281066(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m382037648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		OutOfMemoryException_t2437671686 * L_2 = (OutOfMemoryException_t2437671686 *)il2cpp_codegen_object_new(OutOfMemoryException_t2437671686_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m4180974057(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m4180331635 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m4180331635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_2 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2524654454(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m1823119383 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m1823119383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		SystemException_t176217640 * L_2 = (SystemException_t176217640 *)il2cpp_codegen_object_new(SystemException_t176217640_il2cpp_TypeInfo_var);
		SystemException__ctor_m4132668650(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m1072098740 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_m1072098740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3761792013(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m3008650777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_0 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_2, _stringLiteral88632345, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t1615371798 * L_8 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2009621981(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3067190287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_0 = SWIGPendingException_Retrieve_m2823107563(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_2, _stringLiteral88632345, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m543672851(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t1357866714 (ExceptionArgumentDelegate_t1357866714 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m1450365699 (ExceptionArgumentDelegate_t1357866714 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m2258064360 (ExceptionArgumentDelegate_t1357866714 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ExceptionArgumentDelegate_Invoke_m2258064360((ExceptionArgumentDelegate_t1357866714 *)__this->get_prev_9(), ___message0, ___paramName1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m461189066 (ExceptionArgumentDelegate_t1357866714 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m1527264329 (ExceptionArgumentDelegate_t1357866714 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ExceptionDelegate_t3683244484 (ExceptionDelegate_t3683244484 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m3335081099 (ExceptionDelegate_t3683244484 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m548027919 (ExceptionDelegate_t3683244484 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ExceptionDelegate_Invoke_m548027919((ExceptionDelegate_t3683244484 *)__this->get_prev_9(), ___message0, method);
	}
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
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___message0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m3430874287 (ExceptionDelegate_t3683244484 * __this, String_t* ___message0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m1438117734 (ExceptionDelegate_t3683244484 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Set(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m543672851 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m543672851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_t3769198788_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = ((SWIGPendingException_t3769198788_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1985503341, L_2, _stringLiteral3452614535, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t2339761290 * L_5 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m692455299(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SWIGPendingException_Set_m543672851_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		((SWIGPendingException_t3769198788_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (AuthUtilPINVOKE_t590481425_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_t3769198788_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t3769198788_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::Retrieve()
extern "C" IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m2823107563 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m2823107563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t3769198788_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_1 = ((SWIGPendingException_t3769198788_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t3769198788_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t3769198788_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (AuthUtilPINVOKE_t590481425_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var);
		int32_t L_6 = ((SWIGPendingException_t3769198788_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t3769198788_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t3769198788_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGPendingException::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m4022145539 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m755717645(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m755717645(NULL, ____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m1770408897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_m1770408897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SWIGStringHelper_CreateString_m755717645_RuntimeMethod_var;
		SWIGStringDelegate_t3506210183 * L_1 = (SWIGStringDelegate_t3506210183 *)il2cpp_codegen_object_new(SWIGStringDelegate_t3506210183_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m2878487898(L_1, NULL, L_0, /*hidden argument*/NULL);
		((SWIGStringHelper_t497556005_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t497556005_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_1);
		SWIGStringDelegate_t3506210183 * L_2 = ((SWIGStringHelper_t497556005_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t497556005_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m312855186(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m526319892 (SWIGStringHelper_t497556005 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL SWIGRegisterStringCallback_AuthUtil(Il2CppMethodPointer);
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_AuthUtil(Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate)
extern "C" IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_AuthUtil_m312855186 (RuntimeObject * __this /* static, unused */, SWIGStringDelegate_t3506210183 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_AuthUtil)(____stringDelegate0_marshaled);

}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper::CreateString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m755717645 (RuntimeObject * __this /* static, unused */, String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
extern "C"  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t3506210183 (SWIGStringDelegate_t3506210183 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m2878487898 (SWIGStringDelegate_t3506210183 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m706080673 (SWIGStringDelegate_t3506210183 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		SWIGStringDelegate_Invoke_m706080673((SWIGStringDelegate_t3506210183 *)__this->get_prev_9(), ___message0, method);
	}
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
				typedef String_t* (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___message0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef String_t* (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m2084854498 (SWIGStringDelegate_t3506210183 * __this, String_t* ___message0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Auth.AuthUtilPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m1791186730 (SWIGStringDelegate_t3506210183 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_StateChangedFunction_m3953799837(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_StateChangedFunction_m3953799837(NULL, ___appCPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FirebaseAuth_IdTokenChangedFunction_m3469931091(intptr_t ___appCPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	FirebaseAuth_IdTokenChangedFunction_m3469931091(NULL, ___appCPtr0, NULL);

}
// System.Void Firebase.Auth.FirebaseAuth::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth__ctor_m2282330213 (FirebaseAuth_t3361360866 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t3745784362  L_2;
		memset(&L_2, 0, sizeof(L_2));
		HandleRef__ctor_m868850155((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseAuth::getCPtr(Firebase.Auth.FirebaseAuth)
extern "C" IL2CPP_METHOD_ATTR HandleRef_t3745784362  FirebaseAuth_getCPtr_m4190853153 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_getCPtr_m4190853153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t3745784362  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		FirebaseAuth_t3361360866 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t3745784362  L_1;
		memset(&L_1, 0, sizeof(L_1));
		HandleRef__ctor_m868850155((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseAuth_t3361360866 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t3745784362  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Finalize()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_Finalize_m2874399642 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_Dispose_m1724996530(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::Dispose()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_Dispose_m1724996530 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	{
		FirebaseAuth_DisposeInternal_m3446725357(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::ProxyFromAppCPtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_ProxyFromAppCPtr_m1270286461 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ProxyFromAppCPtr_m1270286461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_t1334886716 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	FirebaseAuth_t3361360866 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_0 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			Dictionary_2_t3851719731 * L_2 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_3 = ___appCPtr0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m3377532459(L_2, L_3, (WeakReference_t1334886716 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3377532459_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WeakReference_t1334886716 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			RuntimeObject * L_6 = FirebaseApp_WeakReferenceGetTarget_m3657098532(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			V_2 = ((FirebaseAuth_t3361360866 *)IsInstSealed((RuntimeObject*)L_6, FirebaseAuth_t3361360866_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x3D, FINALLY_0034);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return (FirebaseAuth_t3361360866 *)NULL;
	}

IL_003d:
	{
		FirebaseAuth_t3361360866 * L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ThrowIfNull()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_ThrowIfNull_m3441179502 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ThrowIfNull_m3441179502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t3745784362 * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		NullReferenceException_t1023182353 * L_3 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m744513393(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, FirebaseAuth_ThrowIfNull_m3441179502_RuntimeMethod_var);
	}

IL_0020:
	{
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuth(Firebase.FirebaseApp)
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_GetAuth_m3801311256 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_GetAuth_m3801311256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAuthU3Ec__AnonStorey0_t454145548 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	U3CGetAuthU3Ec__AnonStorey1_t454211084 * V_2 = NULL;
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	HandleRef_t3745784362  V_4;
	memset(&V_4, 0, sizeof(V_4));
	FirebaseAuth_t3361360866 * V_5 = NULL;
	HandleRef_t3745784362  V_6;
	memset(&V_6, 0, sizeof(V_6));
	HandleRef_t3745784362  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	FirebaseAuth_t3361360866 * G_B7_0 = NULL;
	FirebaseAuth_t3361360866 * G_B7_1 = NULL;
	FirebaseAuth_t3361360866 * G_B6_0 = NULL;
	FirebaseAuth_t3361360866 * G_B6_1 = NULL;
	FirebaseAuth_t3361360866 * G_B9_0 = NULL;
	FirebaseAuth_t3361360866 * G_B9_1 = NULL;
	FirebaseAuth_t3361360866 * G_B8_0 = NULL;
	FirebaseAuth_t3361360866 * G_B8_1 = NULL;
	Type_t * G_B11_0 = NULL;
	FirebaseAuth_t3361360866 * G_B11_1 = NULL;
	intptr_t G_B11_2;
	memset(&G_B11_2, 0, sizeof(G_B11_2));
	intptr_t G_B11_3;
	memset(&G_B11_3, 0, sizeof(G_B11_3));
	FirebaseAuth_t3361360866 * G_B11_4 = NULL;
	Type_t * G_B10_0 = NULL;
	FirebaseAuth_t3361360866 * G_B10_1 = NULL;
	intptr_t G_B10_2;
	memset(&G_B10_2, 0, sizeof(G_B10_2));
	intptr_t G_B10_3;
	memset(&G_B10_3, 0, sizeof(G_B10_3));
	FirebaseAuth_t3361360866 * G_B10_4 = NULL;
	DisposeObjectDelegate_t1709778548 * G_B13_0 = NULL;
	Type_t * G_B13_1 = NULL;
	FirebaseAuth_t3361360866 * G_B13_2 = NULL;
	intptr_t G_B13_3;
	memset(&G_B13_3, 0, sizeof(G_B13_3));
	intptr_t G_B13_4;
	memset(&G_B13_4, 0, sizeof(G_B13_4));
	FirebaseAuth_t3361360866 * G_B13_5 = NULL;
	DisposeObjectDelegate_t1709778548 * G_B12_0 = NULL;
	Type_t * G_B12_1 = NULL;
	FirebaseAuth_t3361360866 * G_B12_2 = NULL;
	intptr_t G_B12_3;
	memset(&G_B12_3, 0, sizeof(G_B12_3));
	intptr_t G_B12_4;
	memset(&G_B12_4, 0, sizeof(G_B12_4));
	FirebaseAuth_t3361360866 * G_B12_5 = NULL;
	{
		U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_0 = (U3CGetAuthU3Ec__AnonStorey0_t454145548 *)il2cpp_codegen_object_new(U3CGetAuthU3Ec__AnonStorey0_t454145548_il2cpp_TypeInfo_var);
		U3CGetAuthU3Ec__AnonStorey0__ctor_m2673240060(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_1 = V_0;
		FirebaseApp_t2526288410 * L_2 = ___app0;
		NullCheck(L_1);
		L_1->set_app_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = Services_get_Auth_m3206912075(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (((FirebaseAuthService_t2470375121 *)IsInstClass((RuntimeObject*)L_3, FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var)))
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var);
		FirebaseAuthService_t2470375121 * L_4 = FirebaseAuthService_get_Instance_m128522418(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		Services_set_Auth_m4233926872(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_5 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_1 = L_5;
		RuntimeObject * L_6 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			U3CGetAuthU3Ec__AnonStorey1_t454211084 * L_7 = (U3CGetAuthU3Ec__AnonStorey1_t454211084 *)il2cpp_codegen_object_new(U3CGetAuthU3Ec__AnonStorey1_t454211084_il2cpp_TypeInfo_var);
			U3CGetAuthU3Ec__AnonStorey1__ctor_m2549835772(L_7, /*hidden argument*/NULL);
			V_2 = L_7;
			U3CGetAuthU3Ec__AnonStorey1_t454211084 * L_8 = V_2;
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_9 = V_0;
			NullCheck(L_8);
			L_8->set_U3CU3Ef__refU240_1(L_9);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_10 = V_0;
			NullCheck(L_10);
			FirebaseApp_t2526288410 * L_11 = L_10->get_app_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			HandleRef_t3745784362  L_12 = FirebaseApp_getCPtr_m4063892236(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
			V_4 = L_12;
			intptr_t L_13 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_13;
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_14 = V_0;
			intptr_t L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			FirebaseAuth_t3361360866 * L_16 = FirebaseAuth_ProxyFromAppCPtr_m1270286461(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_auth_1(L_16);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_17 = V_0;
			NullCheck(L_17);
			FirebaseAuth_t3361360866 * L_18 = L_17->get_auth_1();
			if (!L_18)
			{
				goto IL_0078;
			}
		}

IL_006b:
		{
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_19 = V_0;
			NullCheck(L_19);
			FirebaseAuth_t3361360866 * L_20 = L_19->get_auth_1();
			V_5 = L_20;
			IL2CPP_LEAVE(0x1C9, FINALLY_01bb);
		}

IL_0078:
		{
			U3CGetAuthU3Ec__AnonStorey1_t454211084 * L_21 = V_2;
			intptr_t L_22 = (intptr_t)U3CGetAuthU3Ec__AnonStorey1_U3CU3Em__0_m516710641_RuntimeMethod_var;
			Action_t1264377477 * L_23 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
			Action__ctor_m2994342681(L_23, L_21, L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			FirebaseApp_TranslateDllNotFoundException_m3112929971(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_24 = V_0;
			NullCheck(L_24);
			FirebaseAuth_t3361360866 * L_25 = L_24->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_26 = V_0;
			NullCheck(L_26);
			FirebaseAuth_t3361360866 * L_27 = L_26->get_auth_1();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			StateChangedDelegate_t330995958 * L_28 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
			G_B6_0 = L_27;
			G_B6_1 = L_25;
			if (L_28)
			{
				G_B7_0 = L_27;
				G_B7_1 = L_25;
				goto IL_00ad;
			}
		}

IL_009c:
		{
			intptr_t L_29 = (intptr_t)FirebaseAuth_StateChangedFunction_m3953799837_RuntimeMethod_var;
			StateChangedDelegate_t330995958 * L_30 = (StateChangedDelegate_t330995958 *)il2cpp_codegen_object_new(StateChangedDelegate_t330995958_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_m593347426(L_30, NULL, L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_11(L_30);
			G_B7_0 = G_B6_0;
			G_B7_1 = G_B6_1;
		}

IL_00ad:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			StateChangedDelegate_t330995958 * L_31 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_11();
			intptr_t L_32 = AuthUtil_CreateAuthStateListener_m1154075212(NULL /*static, unused*/, G_B7_0, L_31, /*hidden argument*/NULL);
			NullCheck(G_B7_1);
			G_B7_1->set_authStateListener_5(L_32);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_33 = V_0;
			NullCheck(L_33);
			FirebaseAuth_t3361360866 * L_34 = L_33->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_35 = V_0;
			NullCheck(L_35);
			FirebaseAuth_t3361360866 * L_36 = L_35->get_auth_1();
			StateChangedDelegate_t330995958 * L_37 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
			G_B8_0 = L_36;
			G_B8_1 = L_34;
			if (L_37)
			{
				G_B9_0 = L_36;
				G_B9_1 = L_34;
				goto IL_00e0;
			}
		}

IL_00cf:
		{
			intptr_t L_38 = (intptr_t)FirebaseAuth_IdTokenChangedFunction_m3469931091_RuntimeMethod_var;
			StateChangedDelegate_t330995958 * L_39 = (StateChangedDelegate_t330995958 *)il2cpp_codegen_object_new(StateChangedDelegate_t330995958_il2cpp_TypeInfo_var);
			StateChangedDelegate__ctor_m593347426(L_39, NULL, L_38, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_12(L_39);
			G_B9_0 = G_B8_0;
			G_B9_1 = G_B8_1;
		}

IL_00e0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			StateChangedDelegate_t330995958 * L_40 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_12();
			intptr_t L_41 = AuthUtil_CreateIdTokenListener_m1166398406(NULL /*static, unused*/, G_B9_0, L_40, /*hidden argument*/NULL);
			NullCheck(G_B9_1);
			G_B9_1->set_idTokenListener_6(L_41);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_42 = V_0;
			NullCheck(L_42);
			FirebaseAuth_t3361360866 * L_43 = L_42->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_44 = V_0;
			NullCheck(L_44);
			FirebaseApp_t2526288410 * L_45 = L_44->get_app_0();
			NullCheck(L_43);
			L_43->set_appProxy_2(L_45);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_46 = V_0;
			NullCheck(L_46);
			FirebaseAuth_t3361360866 * L_47 = L_46->get_auth_1();
			intptr_t L_48 = V_3;
			NullCheck(L_47);
			L_47->set_appCPtr_3(L_48);
			Dictionary_2_t3851719731 * L_49 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
			intptr_t L_50 = V_3;
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_51 = V_0;
			NullCheck(L_51);
			FirebaseAuth_t3361360866 * L_52 = L_51->get_auth_1();
			WeakReference_t1334886716 * L_53 = (WeakReference_t1334886716 *)il2cpp_codegen_object_new(WeakReference_t1334886716_il2cpp_TypeInfo_var);
			WeakReference__ctor_m1054065938(L_53, L_52, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_49);
			Dictionary_2_set_Item_m2636174372(L_49, L_50, L_53, /*hidden argument*/Dictionary_2_set_Item_m2636174372_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var);
			FirebaseAuthService_t2470375121 * L_54 = FirebaseAuthService_get_Instance_m128522418(NULL /*static, unused*/, /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_55 = V_0;
			NullCheck(L_55);
			FirebaseAuth_t3361360866 * L_56 = L_55->get_auth_1();
			NullCheck(L_54);
			FirebaseAuthService_OnIdTokenChanged_m2557035096(L_54, L_56, /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_57 = V_0;
			NullCheck(L_57);
			FirebaseAuth_t3361360866 * L_58 = L_57->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_59 = V_0;
			NullCheck(L_59);
			FirebaseApp_t2526288410 * L_60 = L_59->get_app_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			HandleRef_t3745784362  L_61 = FirebaseApp_getCPtr_m4063892236(NULL /*static, unused*/, L_60, /*hidden argument*/NULL);
			V_6 = L_61;
			intptr_t L_62 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_6), /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_63 = V_0;
			NullCheck(L_63);
			FirebaseAuth_t3361360866 * L_64 = L_63->get_auth_1();
			HandleRef_t3745784362  L_65 = FirebaseAuth_getCPtr_m4190853153(NULL /*static, unused*/, L_64, /*hidden argument*/NULL);
			V_7 = L_65;
			intptr_t L_66 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_7), /*hidden argument*/NULL);
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_67 = V_0;
			NullCheck(L_67);
			FirebaseAuth_t3361360866 * L_68 = L_67->get_auth_1();
			U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_69 = V_0;
			NullCheck(L_69);
			FirebaseAuth_t3361360866 * L_70 = L_69->get_auth_1();
			NullCheck(L_70);
			Type_t * L_71 = Object_GetType_m88164663(L_70, /*hidden argument*/NULL);
			DisposeObjectDelegate_t1709778548 * L_72 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_13();
			G_B10_0 = L_71;
			G_B10_1 = L_68;
			G_B10_2 = L_66;
			G_B10_3 = L_62;
			G_B10_4 = L_58;
			if (L_72)
			{
				G_B11_0 = L_71;
				G_B11_1 = L_68;
				G_B11_2 = L_66;
				G_B11_3 = L_62;
				G_B11_4 = L_58;
				goto IL_018a;
			}
		}

IL_0179:
		{
			intptr_t L_73 = (intptr_t)FirebaseAuth_DisposeObject_m4027421320_RuntimeMethod_var;
			DisposeObjectDelegate_t1709778548 * L_74 = (DisposeObjectDelegate_t1709778548 *)il2cpp_codegen_object_new(DisposeObjectDelegate_t1709778548_il2cpp_TypeInfo_var);
			DisposeObjectDelegate__ctor_m2871048726(L_74, NULL, L_73, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_13(L_74);
			G_B11_0 = G_B10_0;
			G_B11_1 = G_B10_1;
			G_B11_2 = G_B10_2;
			G_B11_3 = G_B10_3;
			G_B11_4 = G_B10_4;
		}

IL_018a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			DisposeObjectDelegate_t1709778548 * L_75 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_13();
			DeleteObjectDelegate_t1957612988 * L_76 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_14();
			G_B12_0 = L_75;
			G_B12_1 = G_B11_0;
			G_B12_2 = G_B11_1;
			G_B12_3 = G_B11_2;
			G_B12_4 = G_B11_3;
			G_B12_5 = G_B11_4;
			if (L_76)
			{
				G_B13_0 = L_75;
				G_B13_1 = G_B11_0;
				G_B13_2 = G_B11_1;
				G_B13_3 = G_B11_2;
				G_B13_4 = G_B11_3;
				G_B13_5 = G_B11_4;
				goto IL_01a7;
			}
		}

IL_0196:
		{
			intptr_t L_77 = (intptr_t)AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseAuth_m3233001950_RuntimeMethod_var;
			DeleteObjectDelegate_t1957612988 * L_78 = (DeleteObjectDelegate_t1957612988 *)il2cpp_codegen_object_new(DeleteObjectDelegate_t1957612988_il2cpp_TypeInfo_var);
			DeleteObjectDelegate__ctor_m1051687624(L_78, NULL, L_77, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache3_14(L_78);
			G_B13_0 = G_B12_0;
			G_B13_1 = G_B12_1;
			G_B13_2 = G_B12_2;
			G_B13_3 = G_B12_3;
			G_B13_4 = G_B12_4;
			G_B13_5 = G_B12_5;
		}

IL_01a7:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			DeleteObjectDelegate_t1957612988 * L_79 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache3_14();
			IL2CPP_RUNTIME_CLASS_INIT(CleanupNotifier_t720088202_il2cpp_TypeInfo_var);
			RegistrationToken_t3106726623  L_80 = CleanupNotifier_RegisterForCleanup_m3761672935(NULL /*static, unused*/, G_B13_4, G_B13_3, G_B13_2, G_B13_1, G_B13_0, L_79, /*hidden argument*/NULL);
			NullCheck(G_B13_5);
			G_B13_5->set_cleanupToken_4(L_80);
			IL2CPP_LEAVE(0x1C2, FINALLY_01bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01bb;
	}

FINALLY_01bb:
	{ // begin finally (depth: 1)
		RuntimeObject * L_81 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(443)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(443)
	{
		IL2CPP_JUMP_TBL(0x1C9, IL_01c9)
		IL2CPP_JUMP_TBL(0x1C2, IL_01c2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01c2:
	{
		U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_82 = V_0;
		NullCheck(L_82);
		FirebaseAuth_t3361360866 * L_83 = L_82->get_auth_1();
		return L_83;
	}

IL_01c9:
	{
		FirebaseAuth_t3361360866 * L_84 = V_5;
		return L_84;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::DisposeInternal()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeInternal_m3446725357 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_DisposeInternal_m3446725357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_0 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_1 = __this;
			RuntimeObject * L_2 = V_1;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0014:
		try
		{ // begin try (depth: 2)
			{
				GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
				HandleRef_t3745784362 * L_3 = __this->get_address_of_swigCPtr_0();
				intptr_t L_4 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_3, /*hidden argument*/NULL);
				bool L_5 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_5)
				{
					goto IL_0109;
				}
			}

IL_0034:
			{
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var);
				FirebaseAuthService_t2470375121 * L_6 = FirebaseAuthService_get_Instance_m128522418(NULL /*static, unused*/, /*hidden argument*/NULL);
				HandleRef_t3745784362 * L_7 = __this->get_address_of_swigCPtr_0();
				intptr_t L_8 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_7, /*hidden argument*/NULL);
				NullCheck(L_6);
				FirebaseAuthService_OnAuthDisposed_m2492562215(L_6, L_8, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
				Dictionary_2_t3851719731 * L_9 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
				intptr_t L_10 = __this->get_appCPtr_3();
				NullCheck(L_9);
				Dictionary_2_Remove_m3198892635(L_9, L_10, /*hidden argument*/Dictionary_2_Remove_m3198892635_RuntimeMethod_var);
				__this->set_appProxy_2((FirebaseApp_t2526288410 *)NULL);
				__this->set_appCPtr_3((intptr_t)(0));
				FirebaseUser_t4237635511 * L_11 = __this->get_currentUser_7();
				if (!L_11)
				{
					goto IL_0089;
				}
			}

IL_0077:
			{
				FirebaseUser_t4237635511 * L_12 = __this->get_currentUser_7();
				NullCheck(L_12);
				FirebaseUser_Dispose_m590215956(L_12, /*hidden argument*/NULL);
				__this->set_currentUser_7((FirebaseUser_t4237635511 *)NULL);
			}

IL_0089:
			{
				intptr_t L_13 = __this->get_authStateListener_5();
				bool L_14 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_13, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_00b4;
				}
			}

IL_009e:
			{
				intptr_t L_15 = __this->get_authStateListener_5();
				AuthUtil_DestroyAuthStateListener_m2035806860(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
				__this->set_authStateListener_5((intptr_t)(0));
			}

IL_00b4:
			{
				intptr_t L_16 = __this->get_idTokenListener_6();
				bool L_17 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_16, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_17)
				{
					goto IL_00df;
				}
			}

IL_00c9:
			{
				intptr_t L_18 = __this->get_idTokenListener_6();
				AuthUtil_DestroyIdTokenListener_m920823836(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
				__this->set_idTokenListener_6((intptr_t)(0));
			}

IL_00df:
			{
				RegistrationToken_t3106726623 * L_19 = __this->get_address_of_cleanupToken_4();
				bool L_20 = __this->get_swigCMemOwn_1();
				IL2CPP_RUNTIME_CLASS_INIT(CleanupNotifier_t720088202_il2cpp_TypeInfo_var);
				CleanupNotifier_DisposeObject_m2709111202(NULL /*static, unused*/, (RegistrationToken_t3106726623 *)L_19, __this, L_20, /*hidden argument*/NULL);
				__this->set_swigCMemOwn_1((bool)0);
				HandleRef_t3745784362  L_21;
				memset(&L_21, 0, sizeof(L_21));
				HandleRef__ctor_m868850155((&L_21), NULL, (intptr_t)(0), /*hidden argument*/NULL);
				__this->set_swigCPtr_0(L_21);
			}

IL_0109:
			{
				IL2CPP_LEAVE(0x115, FINALLY_010e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_010e;
		}

FINALLY_010e:
		{ // begin finally (depth: 2)
			RuntimeObject * L_22 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(270)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(270)
		{
			IL2CPP_JUMP_TBL(0x115, IL_0115)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0115:
		{
			IL2CPP_LEAVE(0x121, FINALLY_011a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011a;
	}

FINALLY_011a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_23 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(282)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(282)
	{
		IL2CPP_JUMP_TBL(0x121, IL_0121)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0121:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::DisposeObject(System.Object)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_DisposeObject_m4027421320 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___objectToDispose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_DisposeObject_m4027421320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___objectToDispose0;
		NullCheck(((FirebaseAuth_t3361360866 *)CastclassSealed((RuntimeObject*)L_0, FirebaseAuth_t3361360866_il2cpp_TypeInfo_var)));
		FirebaseAuth_DisposeInternal_m3446725357(((FirebaseAuth_t3361360866 *)CastclassSealed((RuntimeObject*)L_0, FirebaseAuth_t3361360866_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::ForwardStateChange(System.IntPtr,System.Action`1<Firebase.Auth.FirebaseAuth>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_ForwardStateChange_m2255408459 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, Action_1_t3533828461 * ___stateChangeClosure1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_ForwardStateChange_m2255408459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	FirebaseAuth_t3361360866 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_0 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_2 = ___appCPtr0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			FirebaseAuth_t3361360866 * L_3 = FirebaseAuth_ProxyFromAppCPtr_m1270286461(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			FirebaseAuth_t3361360866 * L_4 = V_1;
			if (!L_4)
			{
				goto IL_0020;
			}
		}

IL_0019:
		{
			Action_1_t3533828461 * L_5 = ___stateChangeClosure1;
			FirebaseAuth_t3361360866 * L_6 = V_1;
			NullCheck(L_5);
			Action_1_Invoke_m2917758882(L_5, L_6, /*hidden argument*/Action_1_Invoke_m2917758882_RuntimeMethod_var);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::StateChangedFunction(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_StateChangedFunction_m3953799837 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_StateChangedFunction_m3953799837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Action_1_t3533828461 * L_1 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_15();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		intptr_t L_2 = (intptr_t)FirebaseAuth_U3CStateChangedFunctionU3Em__0_m311707170_RuntimeMethod_var;
		Action_1_t3533828461 * L_3 = (Action_1_t3533828461 *)il2cpp_codegen_object_new(Action_1_t3533828461_il2cpp_TypeInfo_var);
		Action_1__ctor_m722766574(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m722766574_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_15(L_3);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Action_1_t3533828461 * L_4 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_15();
		FirebaseAuth_ForwardStateChange_m2255408459(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::IdTokenChangedFunction(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_IdTokenChangedFunction_m3469931091 (RuntimeObject * __this /* static, unused */, intptr_t ___appCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_IdTokenChangedFunction_m3469931091_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B2_0;
	memset(&G_B2_0, 0, sizeof(G_B2_0));
	intptr_t G_B1_0;
	memset(&G_B1_0, 0, sizeof(G_B1_0));
	{
		intptr_t L_0 = ___appCPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Action_1_t3533828461 * L_1 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_16();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		intptr_t L_2 = (intptr_t)FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m1983144428_RuntimeMethod_var;
		Action_1_t3533828461 * L_3 = (Action_1_t3533828461 *)il2cpp_codegen_object_new(Action_1_t3533828461_il2cpp_TypeInfo_var);
		Action_1__ctor_m722766574(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m722766574_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_16(L_3);
		G_B2_0 = G_B1_0;
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Action_1_t3533828461 * L_4 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_16();
		FirebaseAuth_ForwardStateChange_m2255408459(NULL /*static, unused*/, G_B2_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_get_DefaultInstance_m236605690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_get_DefaultInstance_m236605690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
		FirebaseApp_t2526288410 * L_0 = FirebaseApp_get_DefaultInstance_m3436350982(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		FirebaseAuth_t3361360866 * L_1 = FirebaseAuth_GetAuth_m3801311256(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.FirebaseApp Firebase.Auth.FirebaseAuth::get_App()
extern "C" IL2CPP_METHOD_ATTR FirebaseApp_t2526288410 * FirebaseAuth_get_App_m1298869767 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t2526288410 * L_0 = __this->get_appProxy_2();
		return L_0;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::add_StateChanged(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_add_StateChanged_m4173304667 (FirebaseAuth_t3361360866 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_add_StateChanged_m4173304667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1348719766 * V_0 = NULL;
	EventHandler_t1348719766 * V_1 = NULL;
	{
		EventHandler_t1348719766 * L_0 = __this->get_StateChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1348719766 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1348719766 ** L_2 = __this->get_address_of_StateChanged_8();
		EventHandler_t1348719766 * L_3 = V_1;
		EventHandler_t1348719766 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1348719766 * L_6 = V_0;
		EventHandler_t1348719766 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1348719766 *>((EventHandler_t1348719766 **)L_2, ((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1348719766_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1348719766 * L_8 = V_0;
		EventHandler_t1348719766 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1348719766 *)L_8) == ((RuntimeObject*)(EventHandler_t1348719766 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::remove_StateChanged(System.EventHandler)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_remove_StateChanged_m2550155252 (FirebaseAuth_t3361360866 * __this, EventHandler_t1348719766 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_remove_StateChanged_m2550155252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1348719766 * V_0 = NULL;
	EventHandler_t1348719766 * V_1 = NULL;
	{
		EventHandler_t1348719766 * L_0 = __this->get_StateChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1348719766 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1348719766 ** L_2 = __this->get_address_of_StateChanged_8();
		EventHandler_t1348719766 * L_3 = V_1;
		EventHandler_t1348719766 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1348719766 * L_6 = V_0;
		EventHandler_t1348719766 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1348719766 *>((EventHandler_t1348719766 **)L_2, ((EventHandler_t1348719766 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1348719766_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1348719766 * L_8 = V_0;
		EventHandler_t1348719766 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1348719766 *)L_8) == ((RuntimeObject*)(EventHandler_t1348719766 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::UpdateCurrentUser(Firebase.Auth.FirebaseUser)
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * FirebaseAuth_UpdateCurrentUser_m2746281638 (FirebaseAuth_t3361360866 * __this, FirebaseUser_t4237635511 * ___proxy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_UpdateCurrentUser_m2746281638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	HandleRef_t3745784362  V_1;
	memset(&V_1, 0, sizeof(V_1));
	HandleRef_t3745784362  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_0 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			FirebaseUser_t4237635511 * L_2 = ___proxy0;
			if (L_2)
			{
				goto IL_001e;
			}
		}

IL_0012:
		{
			__this->set_currentUser_7((FirebaseUser_t4237635511 *)NULL);
			goto IL_0072;
		}

IL_001e:
		{
			FirebaseUser_t4237635511 * L_3 = __this->get_currentUser_7();
			if (L_3)
			{
				goto IL_0035;
			}
		}

IL_0029:
		{
			FirebaseUser_t4237635511 * L_4 = ___proxy0;
			__this->set_currentUser_7(L_4);
			goto IL_0072;
		}

IL_0035:
		{
			FirebaseUser_t4237635511 * L_5 = __this->get_currentUser_7();
			HandleRef_t3745784362  L_6 = FirebaseUser_getCPtr_m1424584513(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			intptr_t L_7 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_1), /*hidden argument*/NULL);
			FirebaseUser_t4237635511 * L_8 = ___proxy0;
			HandleRef_t3745784362  L_9 = FirebaseUser_getCPtr_m1424584513(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			intptr_t L_10 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_2), /*hidden argument*/NULL);
			bool L_11 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0072;
			}
		}

IL_0060:
		{
			FirebaseUser_t4237635511 * L_12 = __this->get_currentUser_7();
			NullCheck(L_12);
			FirebaseUser_Dispose_m590215956(L_12, /*hidden argument*/NULL);
			FirebaseUser_t4237635511 * L_13 = ___proxy0;
			__this->set_currentUser_7(L_13);
		}

IL_0072:
		{
			FirebaseUser_t4237635511 * L_14 = __this->get_currentUser_7();
			if (!L_14)
			{
				goto IL_0089;
			}
		}

IL_007d:
		{
			FirebaseUser_t4237635511 * L_15 = __this->get_currentUser_7();
			NullCheck(L_15);
			L_15->set_authProxy_2(__this);
		}

IL_0089:
		{
			IL2CPP_LEAVE(0x95, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_16 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(142)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0095:
	{
		FirebaseUser_t4237635511 * L_17 = __this->get_currentUser_7();
		return L_17;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUser()
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * FirebaseAuth_get_CurrentUser_m3915863574 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_get_CurrentUser_m3915863574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseUser_t4237635511 * V_0 = NULL;
	FirebaseUser_t4237635511 * G_B3_0 = NULL;
	{
		HandleRef_t3745784362 * L_0 = __this->get_address_of_swigCPtr_0();
		intptr_t L_1 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		FirebaseUser_t4237635511 * L_3 = FirebaseAuth_get_CurrentUserInternal_m794105557(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((FirebaseUser_t4237635511 *)(NULL));
	}

IL_0026:
	{
		V_0 = G_B3_0;
		FirebaseUser_t4237635511 * L_4 = V_0;
		FirebaseUser_t4237635511 * L_5 = FirebaseAuth_UpdateCurrentUser_m2746281638(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordAsync(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * FirebaseAuth_SignInWithEmailAndPasswordAsync_m3596045113 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_SignInWithEmailAndPasswordAsync_m3596045113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * V_0 = NULL;
	{
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * L_0 = (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 *)il2cpp_codegen_object_new(U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931_il2cpp_TypeInfo_var);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7__ctor_m2293161068(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		FirebaseAuth_ThrowIfNull_m3441179502(__this, /*hidden argument*/NULL);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * L_2 = V_0;
		TaskCompletionSource_1_t2638358328 * L_3 = (TaskCompletionSource_1_t2638358328 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t2638358328_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1516347784(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m1516347784_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_taskCompletionSource_0(L_3);
		String_t* L_4 = ___email0;
		String_t* L_5 = ___password1;
		Task_1_t1348208390 * L_6 = FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_m284197153(__this, L_4, L_5, /*hidden argument*/NULL);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * L_7 = V_0;
		intptr_t L_8 = (intptr_t)U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_U3CU3Em__0_m337689263_RuntimeMethod_var;
		Action_1_t1520675985 * L_9 = (Action_1_t1520675985 *)il2cpp_codegen_object_new(Action_1_t1520675985_il2cpp_TypeInfo_var);
		Action_1__ctor_m839606331(L_9, L_7, L_8, /*hidden argument*/Action_1__ctor_m839606331_RuntimeMethod_var);
		NullCheck(L_6);
		Task_1_ContinueWith_m2455971619(L_6, L_9, /*hidden argument*/Task_1_ContinueWith_m2455971619_RuntimeMethod_var);
		U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_t2638358328 * L_11 = L_10->get_taskCompletionSource_0();
		NullCheck(L_11);
		Task_1_t1348208390 * L_12 = TaskCompletionSource_1_get_Task_m522014888(L_11, /*hidden argument*/TaskCompletionSource_1_get_Task_m522014888_RuntimeMethod_var);
		return L_12;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::CreateUserWithEmailAndPasswordAsync(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m250930766 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_CreateUserWithEmailAndPasswordAsync_m250930766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * V_0 = NULL;
	{
		U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * L_0 = (U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 *)il2cpp_codegen_object_new(U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865_il2cpp_TypeInfo_var);
		U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8__ctor_m632827701(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		FirebaseAuth_ThrowIfNull_m3441179502(__this, /*hidden argument*/NULL);
		U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * L_2 = V_0;
		TaskCompletionSource_1_t2638358328 * L_3 = (TaskCompletionSource_1_t2638358328 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t2638358328_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1516347784(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m1516347784_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_taskCompletionSource_0(L_3);
		String_t* L_4 = ___email0;
		String_t* L_5 = ___password1;
		Task_1_t1348208390 * L_6 = FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_m742258242(__this, L_4, L_5, /*hidden argument*/NULL);
		U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * L_7 = V_0;
		intptr_t L_8 = (intptr_t)U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_U3CU3Em__0_m2391262187_RuntimeMethod_var;
		Action_1_t1520675985 * L_9 = (Action_1_t1520675985 *)il2cpp_codegen_object_new(Action_1_t1520675985_il2cpp_TypeInfo_var);
		Action_1__ctor_m839606331(L_9, L_7, L_8, /*hidden argument*/Action_1__ctor_m839606331_RuntimeMethod_var);
		NullCheck(L_6);
		Task_1_ContinueWith_m2455971619(L_6, L_9, /*hidden argument*/Task_1_ContinueWith_m2455971619_RuntimeMethod_var);
		U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_t2638358328 * L_11 = L_10->get_taskCompletionSource_0();
		NullCheck(L_11);
		Task_1_t1348208390 * L_12 = TaskCompletionSource_1_get_Task_m522014888(L_11, /*hidden argument*/TaskCompletionSource_1_get_Task_m522014888_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::CompleteFirebaseUserTask(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Auth.FirebaseUser>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_CompleteFirebaseUserTask_m2514684495 (FirebaseAuth_t3361360866 * __this, Task_1_t1348208390 * ___task0, TaskCompletionSource_1_t2638358328 * ___taskCompletionSource1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_CompleteFirebaseUserTask_m2514684495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_1_t1348208390 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsCanceled_m3056077931(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		TaskCompletionSource_1_t2638358328 * L_2 = ___taskCompletionSource1;
		NullCheck(L_2);
		TaskCompletionSource_1_SetCanceled_m3915829379(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m3915829379_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0016:
	{
		Task_1_t1348208390 * L_3 = ___task0;
		NullCheck(L_3);
		bool L_4 = Task_get_IsFaulted_m4214781122(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		TaskCompletionSource_1_t2638358328 * L_5 = ___taskCompletionSource1;
		Task_1_t1348208390 * L_6 = ___task0;
		NullCheck(L_6);
		AggregateException_t3586243216 * L_7 = Task_get_Exception_m1363338588(L_6, /*hidden argument*/NULL);
		TaskCompletionSourceCompat_1_SetException_m1553797418(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/TaskCompletionSourceCompat_1_SetException_m1553797418_RuntimeMethod_var);
		goto IL_0044;
	}

IL_0032:
	{
		TaskCompletionSource_1_t2638358328 * L_8 = ___taskCompletionSource1;
		Task_1_t1348208390 * L_9 = ___task0;
		NullCheck(L_9);
		FirebaseUser_t4237635511 * L_10 = Task_1_get_Result_m3400309620(L_9, /*hidden argument*/Task_1_get_Result_m3400309620_RuntimeMethod_var);
		FirebaseUser_t4237635511 * L_11 = FirebaseAuth_UpdateCurrentUser_m2746281638(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetResult_m2181318245(L_8, L_11, /*hidden argument*/TaskCompletionSource_1_SetResult_m2181318245_RuntimeMethod_var);
	}

IL_0044:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::SignInWithEmailAndPasswordInternalAsync(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_m284197153 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_SignInWithEmailAndPasswordInternalAsync_m284197153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t1348208390 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___email0;
		String_t* L_2 = ___password1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignInWithEmailAndPasswordInternal_m2680282494(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		Future_User_t1455245928 * L_4 = (Future_User_t1455245928 *)il2cpp_codegen_object_new(Future_User_t1455245928_il2cpp_TypeInfo_var);
		Future_User__ctor_m3952942069(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
		Task_1_t1348208390 * L_5 = Future_User_GetTask_m4097663285(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Task_1_t1348208390 * L_6 = V_0;
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.FirebaseAuth::CreateUserWithEmailAndPasswordInternalAsync(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_m742258242 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, String_t* ___password1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_CreateUserWithEmailAndPasswordInternalAsync_m742258242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t1348208390 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___email0;
		String_t* L_2 = ___password1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CreateUserWithEmailAndPasswordInternal_m2266735512(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		Future_User_t1455245928 * L_4 = (Future_User_t1455245928 *)il2cpp_codegen_object_new(Future_User_t1455245928_il2cpp_TypeInfo_var);
		Future_User__ctor_m3952942069(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
		Task_1_t1348208390 * L_5 = Future_User_GetTask_m4097663285(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Task_1_t1348208390 * L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::SignOut()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_SignOut_m2697804734 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_SignOut_m2697804734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SignOut_m3753412278(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseAuth_SignOut_m2697804734_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Threading.Tasks.Task Firebase.Auth.FirebaseAuth::SendPasswordResetEmailAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * FirebaseAuth_SendPasswordResetEmailAsync_m3805802880 (FirebaseAuth_t3361360866 * __this, String_t* ___email0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_SendPasswordResetEmailAsync_m3805802880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_t3187275312 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___email0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_2 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_SendPasswordResetEmail_m915485665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		FutureVoid_t983301800 * L_3 = (FutureVoid_t983301800 *)il2cpp_codegen_object_new(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		FutureVoid__ctor_m3140861867(L_3, L_2, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_4 = FutureVoid_GetTask_m4275693369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Task_t3187275312 * L_5 = V_0;
		return L_5;
	}
}
// Firebase.Auth.FirebaseAuth Firebase.Auth.FirebaseAuth::GetAuthInternal(Firebase.FirebaseApp,Firebase.InitResult&)
extern "C" IL2CPP_METHOD_ATTR FirebaseAuth_t3361360866 * FirebaseAuth_GetAuthInternal_m3254775501 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, int32_t* ___init_result_out1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_GetAuthInternal_m3254775501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	FirebaseAuth_t3361360866 * V_2 = NULL;
	FirebaseAuth_t3361360866 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	FirebaseAuth_t3361360866 * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t2526288410 * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			HandleRef_t3745784362  L_1 = FirebaseApp_getCPtr_m4063892236(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
			intptr_t L_2 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_GetAuthInternal_m1010221189(NULL /*static, unused*/, L_1, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = L_2;
			intptr_t L_3 = V_1;
			bool L_4 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			G_B4_0 = ((FirebaseAuth_t3361360866 *)(NULL));
			goto IL_002d;
		}

IL_0026:
		{
			intptr_t L_5 = V_1;
			FirebaseAuth_t3361360866 * L_6 = (FirebaseAuth_t3361360866 *)il2cpp_codegen_object_new(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			FirebaseAuth__ctor_m2282330213(L_6, L_5, (bool)1, /*hidden argument*/NULL);
			G_B4_0 = L_6;
		}

IL_002d:
		{
			V_2 = G_B4_0;
			IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
			bool L_7 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
			Exception_t * L_8 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, FirebaseAuth_GetAuthInternal_m3254775501_RuntimeMethod_var);
		}

IL_003e:
		{
			FirebaseAuth_t3361360866 * L_9 = V_2;
			V_3 = L_9;
			IL2CPP_LEAVE(0x49, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		int32_t* L_10 = ___init_result_out1;
		int32_t L_11 = V_0;
		*((int32_t*)(L_10)) = (int32_t)L_11;
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x49, IL_0049)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0049:
	{
		FirebaseAuth_t3361360866 * L_12 = V_3;
		return L_12;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.FirebaseAuth::get_CurrentUserInternal()
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * FirebaseAuth_get_CurrentUserInternal_m794105557 (FirebaseAuth_t3361360866 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_get_CurrentUserInternal_m794105557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	FirebaseUser_t4237635511 * V_1 = NULL;
	FirebaseUser_t4237635511 * G_B3_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseAuth_CurrentUserInternal_get_m760294484(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_t4237635511 *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseUser_t4237635511 * L_5 = (FirebaseUser_t4237635511 *)il2cpp_codegen_object_new(FirebaseUser_t4237635511_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_m3519002295(L_5, L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_6 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_7 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, FirebaseAuth_get_CurrentUserInternal_m794105557_RuntimeMethod_var);
	}

IL_003a:
	{
		FirebaseUser_t4237635511 * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::.cctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth__cctor_m409293379 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth__cctor_m409293379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3851719731 * L_0 = (Dictionary_2_t3851719731 *)il2cpp_codegen_object_new(Dictionary_2_t3851719731_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1091767215(L_0, /*hidden argument*/Dictionary_2__ctor_m1091767215_RuntimeMethod_var);
		((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->set_appCPtrToAuth_10(L_0);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::<StateChangedFunction>m__0(Firebase.Auth.FirebaseAuth)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_U3CStateChangedFunctionU3Em__0_m311707170 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_U3CStateChangedFunctionU3Em__0_m311707170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		FirebaseAuth_t3361360866 * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t1348719766 * L_1 = L_0->get_StateChanged_8();
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		Dictionary_2_t3851719731 * L_2 = ((FirebaseAuth_t3361360866_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var))->get_appCPtrToAuth_10();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		FirebaseAuth_t3361360866 * L_4 = ___auth0;
		FirebaseAuth_t3361360866 * L_5 = ___auth0;
		NullCheck(L_5);
		FirebaseUser_t4237635511 * L_6 = FirebaseAuth_get_CurrentUserInternal_m794105557(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		FirebaseAuth_UpdateCurrentUser_m2746281638(L_4, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0030:
	{
		FirebaseAuth_t3361360866 * L_8 = ___auth0;
		NullCheck(L_8);
		EventHandler_t1348719766 * L_9 = L_8->get_StateChanged_8();
		FirebaseAuth_t3361360866 * L_10 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_11 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_9);
		EventHandler_Invoke_m2047579917(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth::<IdTokenChangedFunction>m__1(Firebase.Auth.FirebaseAuth)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m1983144428 (RuntimeObject * __this /* static, unused */, FirebaseAuth_t3361360866 * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuth_U3CIdTokenChangedFunctionU3Em__1_m1983144428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuth_t3361360866 * L_0 = ___auth0;
		NullCheck(L_0);
		EventHandler_t1348719766 * L_1 = L_0->get_IdTokenChanged_9();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		FirebaseAuth_t3361360866 * L_2 = ___auth0;
		NullCheck(L_2);
		EventHandler_t1348719766 * L_3 = L_2->get_IdTokenChanged_9();
		FirebaseAuth_t3361360866 * L_4 = ___auth0;
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_5 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_Invoke_m2047579917(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var);
		FirebaseAuthService_t2470375121 * L_6 = FirebaseAuthService_get_Instance_m128522418(NULL /*static, unused*/, /*hidden argument*/NULL);
		FirebaseAuth_t3361360866 * L_7 = ___auth0;
		NullCheck(L_6);
		FirebaseAuthService_OnIdTokenChanged_m2557035096(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8__ctor_m632827701 (U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<CreateUserWithEmailAndPasswordAsync>c__AnonStorey8::<>m__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
extern "C" IL2CPP_METHOD_ATTR void U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_U3CU3Em__0_m2391262187 (U3CCreateUserWithEmailAndPasswordAsyncU3Ec__AnonStorey8_t4089389865 * __this, Task_1_t1348208390 * ___task0, const RuntimeMethod* method)
{
	{
		FirebaseAuth_t3361360866 * L_0 = __this->get_U24this_1();
		Task_1_t1348208390 * L_1 = ___task0;
		TaskCompletionSource_1_t2638358328 * L_2 = __this->get_taskCompletionSource_0();
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m2514684495(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey0__ctor_m2673240060 (U3CGetAuthU3Ec__AnonStorey0_t454145548 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1__ctor_m2549835772 (U3CGetAuthU3Ec__AnonStorey1_t454211084 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<GetAuth>c__AnonStorey1::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CGetAuthU3Ec__AnonStorey1_U3CU3Em__0_m516710641 (U3CGetAuthU3Ec__AnonStorey1_t454211084 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetAuthU3Ec__AnonStorey1_U3CU3Em__0_m516710641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_0 = __this->get_U3CU3Ef__refU240_1();
		U3CGetAuthU3Ec__AnonStorey0_t454145548 * L_1 = __this->get_U3CU3Ef__refU240_1();
		NullCheck(L_1);
		FirebaseApp_t2526288410 * L_2 = L_1->get_app_0();
		int32_t* L_3 = __this->get_address_of_init_result_0();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
		FirebaseAuth_t3361360866 * L_4 = FirebaseAuth_GetAuthInternal_m3254775501(NULL /*static, unused*/, L_2, (int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_auth_1(L_4);
		int32_t L_5 = __this->get_init_result_0();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_6 = __this->get_init_result_0();
		InitializationException_t1111396117 * L_7 = (InitializationException_t1111396117 *)il2cpp_codegen_object_new(InitializationException_t1111396117_il2cpp_TypeInfo_var);
		InitializationException__ctor_m612166457(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, U3CGetAuthU3Ec__AnonStorey1_U3CU3Em__0_m516710641_RuntimeMethod_var);
	}

IL_0038:
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
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7__ctor_m2293161068 (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.FirebaseAuth/<SignInWithEmailAndPasswordAsync>c__AnonStorey7::<>m__0(System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>)
extern "C" IL2CPP_METHOD_ATTR void U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_U3CU3Em__0_m337689263 (U3CSignInWithEmailAndPasswordAsyncU3Ec__AnonStorey7_t395132931 * __this, Task_1_t1348208390 * ___task0, const RuntimeMethod* method)
{
	{
		FirebaseAuth_t3361360866 * L_0 = __this->get_U24this_1();
		Task_1_t1348208390 * L_1 = ___task0;
		TaskCompletionSource_1_t2638358328 * L_2 = __this->get_taskCompletionSource_0();
		NullCheck(L_0);
		FirebaseAuth_CompleteFirebaseUserTask_m2514684495(L_0, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Firebase.Auth.FirebaseAuth/MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m3189038699 (MonoPInvokeCallbackAttribute_t2685760848 * __this, Type_t * ___t0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_StateChangedDelegate_t330995958 (StateChangedDelegate_t330995958 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___authCPtr0);

}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StateChangedDelegate__ctor_m593347426 (StateChangedDelegate_t330995958 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void StateChangedDelegate_Invoke_m2276802918 (StateChangedDelegate_t330995958 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		StateChangedDelegate_Invoke_m2276802918((StateChangedDelegate_t330995958 *)__this->get_prev_9(), ___authCPtr0, method);
	}
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
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___authCPtr0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___authCPtr0, targetMethod);
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
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___authCPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___authCPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___authCPtr0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___authCPtr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.FirebaseAuth/StateChangedDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* StateChangedDelegate_BeginInvoke_m2611951787 (StateChangedDelegate_t330995958 * __this, intptr_t ___authCPtr0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateChangedDelegate_BeginInvoke_m2611951787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___authCPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Auth.FirebaseAuth/StateChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void StateChangedDelegate_EndInvoke_m538356544 (StateChangedDelegate_t330995958 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.FirebaseUser::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseUser__ctor_m3519002295 (FirebaseUser_t4237635511 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___cPtr0;
		HandleRef_t3745784362  L_1;
		memset(&L_1, 0, sizeof(L_1));
		HandleRef__ctor_m868850155((&L_1), __this, L_0, /*hidden argument*/NULL);
		__this->set_swigCPtr_1(L_1);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Auth.FirebaseUser::getCPtr(Firebase.Auth.FirebaseUser)
extern "C" IL2CPP_METHOD_ATTR HandleRef_t3745784362  FirebaseUser_getCPtr_m1424584513 (RuntimeObject * __this /* static, unused */, FirebaseUser_t4237635511 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_getCPtr_m1424584513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t3745784362  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		FirebaseUser_t4237635511 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t3745784362  L_1;
		memset(&L_1, 0, sizeof(L_1));
		HandleRef__ctor_m868850155((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseUser_t4237635511 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t3745784362  L_3 = L_2->get_swigCPtr_1();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Finalize()
extern "C" IL2CPP_METHOD_ATTR void FirebaseUser_Finalize_m92845888 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		FirebaseUser_Dispose_m590215956(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.FirebaseUser::Dispose()
extern "C" IL2CPP_METHOD_ATTR void FirebaseUser_Dispose_m590215956 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_Dispose_m590215956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_1();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = __this->get_swigCMemOwn_0();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			__this->set_swigCMemOwn_0((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_1();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_Firebase_Auth_delete_FirebaseUser_m2042297620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_1(L_6);
		}

IL_0050:
		{
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x62, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Auth.FirebaseUser::TokenAsync(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3252990864 * FirebaseUser_TokenAsync_m1960073769 (FirebaseUser_t4237635511 * __this, bool ___forceRefresh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_TokenAsync_m1960073769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t3252990864 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_1();
		bool L_1 = ___forceRefresh0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_2 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Token_m1643407471(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		FutureString_t4072148675 * L_3 = (FutureString_t4072148675 *)il2cpp_codegen_object_new(FutureString_t4072148675_il2cpp_TypeInfo_var);
		FutureString__ctor_m2115360400(L_3, L_2, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t4072148675_il2cpp_TypeInfo_var);
		Task_1_t3252990864 * L_4 = FutureString_GetTask_m2289068801(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Task_1_t3252990864 * L_5 = V_0;
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.Auth.FirebaseUser::SendEmailVerificationAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * FirebaseUser_SendEmailVerificationAsync_m2322493457 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_SendEmailVerificationAsync_m2322493457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_t3187275312 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_SendEmailVerification_m2425539532(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		FutureVoid_t983301800 * L_2 = (FutureVoid_t983301800 *)il2cpp_codegen_object_new(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		FutureVoid__ctor_m3140861867(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_3 = FutureVoid_GetTask_m4275693369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Task_t3187275312 * L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_DisplayName_m1864675456 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_DisplayName_m1864675456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		String_t* L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_DisplayName_get_m2334642060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, FirebaseUser_get_DisplayName_m1864675456_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_Email()
extern "C" IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_Email_m2568650205 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_Email_m2568650205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		String_t* L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_Email_get_m3475476817(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, FirebaseUser_get_Email_m2568650205_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Auth.FirebaseUser::get_IsEmailVerified()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseUser_get_IsEmailVerified_m2828554770 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_IsEmailVerified_m2828554770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		bool L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_IsEmailVerified_get_m147146998(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, FirebaseUser_get_IsEmailVerified_m2828554770_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Auth.FirebaseUser::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* FirebaseUser_get_UserId_m502665137 (FirebaseUser_t4237635511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseUser_get_UserId_m502665137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		String_t* L_1 = AuthUtilPINVOKE_Firebase_Auth_FirebaseUser_UserId_get_m150766812(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, FirebaseUser_get_UserId_m502665137_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_User_SWIG_CompletionDispatcher_m2723325741(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_User_SWIG_CompletionDispatcher_m2723325741(NULL, ___key0, NULL);

}
// System.Void Firebase.Auth.Future_User::.ctor(System.IntPtr,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Future_User__ctor_m3952942069 (Future_User_t1455245928 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User__ctor_m3952942069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIGUpcast_m1241835802(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m4133108386(__this, L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t3745784362  L_4;
		memset(&L_4, 0, sizeof(L_4));
		HandleRef__ctor_m868850155((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Future_User_Finalize_m1635607943 (Future_User_t1455245928 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_m1172048056(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Auth.Future_User::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Future_User_Dispose_m429064847 (Future_User_t1455245928 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_Dispose_m429064847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_2();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = ((FutureBase_t1024553797 *)__this)->get_swigCMemOwn_1();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			((FutureBase_t1024553797 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
			AuthUtilPINVOKE_Firebase_Auth_delete_Future_User_m3517198631(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_6);
		}

IL_0050:
		{
			Future_User_SetCompletionData_m185985433(__this, (intptr_t)(0), /*hidden argument*/NULL);
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			FutureBase_Dispose_m3149756878(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x73, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0073:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser> Firebase.Auth.Future_User::GetTask(Firebase.Auth.Future_User)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1348208390 * Future_User_GetTask_m4097663285 (RuntimeObject * __this /* static, unused */, Future_User_t1455245928 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_GetTask_m4097663285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t1473534857 * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t1473534857 *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t1473534857_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m863357698(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_1 = V_0;
		Future_User_t1455245928 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_3 = V_0;
		TaskCompletionSource_1_t2638358328 * L_4 = (TaskCompletionSource_1_t2638358328 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t2638358328_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1516347784(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m1516347784_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_5 = V_0;
		NullCheck(L_5);
		Future_User_t1455245928 * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7 = FutureBase_status_m2790518304(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t2638358328 * L_9 = L_8->get_tcs_1();
		FirebaseException_t627220627 * L_10 = (FirebaseException_t627220627 *)il2cpp_codegen_object_new(FirebaseException_t627220627_il2cpp_TypeInfo_var);
		FirebaseException__ctor_m2690917590(L_10, 0, _stringLiteral2669073561, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m3841834645(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m3841834645_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t2638358328 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t1348208390 * L_13 = TaskCompletionSource_1_get_Task_m522014888(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_m522014888_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_14 = V_0;
		NullCheck(L_14);
		Future_User_t1455245928 * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_16 = V_0;
		intptr_t L_17 = (intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2468008402_RuntimeMethod_var;
		Action_t3279312088 * L_18 = (Action_t3279312088 *)il2cpp_codegen_object_new(Action_t3279312088_il2cpp_TypeInfo_var);
		Action__ctor_m3628338205(L_18, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_User_SetOnCompletionCallback_m2404728356(L_15, L_18, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t1473534857 * L_19 = V_0;
		NullCheck(L_19);
		TaskCompletionSource_1_t2638358328 * L_20 = L_19->get_tcs_1();
		NullCheck(L_20);
		Task_1_t1348208390 * L_21 = TaskCompletionSource_1_get_Task_m522014888(L_20, /*hidden argument*/TaskCompletionSource_1_get_Task_m522014888_RuntimeMethod_var);
		return L_21;
	}
}
// System.Void Firebase.Auth.Future_User::SetOnCompletionCallback(Firebase.Auth.Future_User/Action)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SetOnCompletionCallback_m2404728356 (Future_User_t1455245928 * __this, Action_t3279312088 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SetOnCompletionCallback_m2404728356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		SWIG_CompletionDelegate_t4100679291 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_1 = (intptr_t)Future_User_SWIG_CompletionDispatcher_m2723325741_RuntimeMethod_var;
		SWIG_CompletionDelegate_t4100679291 * L_2 = (SWIG_CompletionDelegate_t4100679291 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t4100679291_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m3375603479(L_2, NULL, L_1, /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_2);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
			Dictionary_2_t2168025419 * L_5 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_5)
			{
				goto IL_003d;
			}
		}

IL_0033:
		{
			Dictionary_2_t2168025419 * L_6 = (Dictionary_2_t2168025419 *)il2cpp_codegen_object_new(Dictionary_2_t2168025419_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m3117022313(L_6, /*hidden argument*/Dictionary_2__ctor_m3117022313_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
			((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->set_Callbacks_3(L_6);
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
			int32_t L_7 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
			((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_8);
			V_0 = L_8;
			Dictionary_2_t2168025419 * L_9 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_10 = V_0;
			Action_t3279312088 * L_11 = ___userCompletionCallback0;
			NullCheck(L_9);
			Dictionary_2_set_Item_m3155210180(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m3155210180_RuntimeMethod_var);
			IL2CPP_LEAVE(0x63, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		SWIG_CompletionDelegate_t4100679291 * L_13 = __this->get_SWIG_CompletionCB_7();
		int32_t L_14 = V_0;
		intptr_t L_15 = Future_User_SWIG_OnCompletion_m1226104428(__this, L_13, L_14, /*hidden argument*/NULL);
		Future_User_SetCompletionData_m185985433(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SetCompletionData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SetCompletionData_m185985433 (Future_User_t1455245928 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SetCompletionData_m185985433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_callbackData_6();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_2 = __this->get_callbackData_6();
		Future_User_SWIG_FreeCompletionData_m3840256860(__this, L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		intptr_t L_3 = ___data0;
		__this->set_callbackData_6(L_3);
		return;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_CompletionDispatcher(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SWIG_CompletionDispatcher_m2723325741 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SWIG_CompletionDispatcher_m2723325741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t3279312088 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Action_t3279312088 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
			Dictionary_2_t2168025419 * L_2 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
			Dictionary_2_t2168025419 * L_3 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_m3586319931(L_3, L_4, (Action_t3279312088 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3586319931_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_User_t1455245928_il2cpp_TypeInfo_var);
			Dictionary_2_t2168025419 * L_6 = ((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			Dictionary_2_Remove_m1614452640(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m1614452640_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		Action_t3279312088 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Action_t3279312088 * L_10 = V_0;
		NullCheck(L_10);
		Action_Invoke_m3171690342(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Auth.Future_User::SWIG_OnCompletion(Firebase.Auth.Future_User/SWIG_CompletionDelegate,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Future_User_SWIG_OnCompletion_m1226104428 (Future_User_t1455245928 * __this, SWIG_CompletionDelegate_t4100679291 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SWIG_OnCompletion_m1226104428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t4100679291 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_3 = AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_OnCompletion_m4140874164(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Future_User_SWIG_OnCompletion_m1226104428_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Auth.Future_User::SWIG_FreeCompletionData(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Future_User_SWIG_FreeCompletionData_m3840256860 (Future_User_t1455245928 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_SWIG_FreeCompletionData_m3840256860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		AuthUtilPINVOKE_Firebase_Auth_Future_User_SWIG_FreeCompletionData_m852262520(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Future_User_SWIG_FreeCompletionData_m3840256860_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Auth.FirebaseUser Firebase.Auth.Future_User::result()
extern "C" IL2CPP_METHOD_ATTR FirebaseUser_t4237635511 * Future_User_result_m3781469802 (Future_User_t1455245928 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User_result_m3781469802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	FirebaseUser_t4237635511 * V_1 = NULL;
	FirebaseUser_t4237635511 * G_B3_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(AuthUtilPINVOKE_t590481425_il2cpp_TypeInfo_var);
		intptr_t L_1 = AuthUtilPINVOKE_Firebase_Auth_Future_User_result_m3536853542(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseUser_t4237635511 *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseUser_t4237635511 * L_5 = (FirebaseUser_t4237635511 *)il2cpp_codegen_object_new(FirebaseUser_t4237635511_il2cpp_TypeInfo_var);
		FirebaseUser__ctor_m3519002295(L_5, L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_6 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_7 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Future_User_result_m3781469802_RuntimeMethod_var);
	}

IL_003a:
	{
		FirebaseUser_t4237635511 * L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Auth.Future_User::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Future_User__cctor_m2487069903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_User__cctor_m2487069903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((Future_User_t1455245928_StaticFields*)il2cpp_codegen_static_fields_for(Future_User_t1455245928_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m863357698 (U3CGetTaskU3Ec__AnonStorey0_t1473534857 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Auth.Future_User/<GetTask>c__AnonStorey0::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2468008402 (U3CGetTaskU3Ec__AnonStorey0_t1473534857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2468008402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Future_User_t1455245928 * L_0 = __this->get_fu_0();
		NullCheck(L_0);
		int32_t L_1 = FutureBase_status_m2790518304(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0021;
		}
	}
	{
		TaskCompletionSource_1_t2638358328 * L_2 = __this->get_tcs_1();
		NullCheck(L_2);
		TaskCompletionSource_1_SetCanceled_m3915829379(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m3915829379_RuntimeMethod_var);
		goto IL_006a;
	}

IL_0021:
	{
		Future_User_t1455245928 * L_3 = __this->get_fu_0();
		NullCheck(L_3);
		int32_t L_4 = FutureBase_error_m319631945(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		TaskCompletionSource_1_t2638358328 * L_6 = __this->get_tcs_1();
		int32_t L_7 = V_0;
		Future_User_t1455245928 * L_8 = __this->get_fu_0();
		NullCheck(L_8);
		String_t* L_9 = FutureBase_error_message_m2570640618(L_8, /*hidden argument*/NULL);
		FirebaseException_t627220627 * L_10 = (FirebaseException_t627220627 *)il2cpp_codegen_object_new(FirebaseException_t627220627_il2cpp_TypeInfo_var);
		FirebaseException__ctor_m2690917590(L_10, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		TaskCompletionSource_1_SetException_m3841834645(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m3841834645_RuntimeMethod_var);
		goto IL_006a;
	}

IL_0054:
	{
		TaskCompletionSource_1_t2638358328 * L_11 = __this->get_tcs_1();
		Future_User_t1455245928 * L_12 = __this->get_fu_0();
		NullCheck(L_12);
		FirebaseUser_t4237635511 * L_13 = Future_User_result_m3781469802(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		TaskCompletionSource_1_SetResult_m2181318245(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m2181318245_RuntimeMethod_var);
	}

IL_006a:
	{
		Future_User_t1455245928 * L_14 = __this->get_fu_0();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_14);
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
extern "C"  void DelegatePInvokeWrapper_Action_t3279312088 (Action_t3279312088 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Auth.Future_User/Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m3628338205 (Action_t3279312088 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User/Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m3171690342 (Action_t3279312088 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Action_Invoke_m3171690342((Action_t3279312088 *)__this->get_prev_9(), method);
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
// System.IAsyncResult Firebase.Auth.Future_User/Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m314537986 (Action_t3279312088 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Firebase.Auth.Future_User/Action::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Action_EndInvoke_m3191465117 (Action_t3279312088 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Auth.Future_User/MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m2470296738 (MonoPInvokeCallbackAttribute_t893897288 * __this, Type_t * ___t0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t4100679291 (SWIG_CompletionDelegate_t4100679291 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3375603479 (SWIG_CompletionDelegate_t4100679291 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::Invoke(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m1292403671 (SWIG_CompletionDelegate_t4100679291 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SWIG_CompletionDelegate_Invoke_m1292403671((SWIG_CompletionDelegate_t4100679291 *)__this->get_prev_9(), ___index0, method);
	}
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
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___index0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Auth.Future_User/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m4224026332 (SWIG_CompletionDelegate_t4100679291 * __this, int32_t ___index0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIG_CompletionDelegate_BeginInvoke_m4224026332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Auth.Future_User/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m1606620923 (SWIG_CompletionDelegate_t4100679291 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.FirebaseAuthService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService__ctor_m3401510087 (FirebaseAuthService_t2470375121 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService__ctor_m3401510087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_TOKEN_REFRESH_PERIOD_SECONDS_2((3480.0f));
		Dictionary_2_t4001210531 * L_0 = (Dictionary_2_t4001210531 *)il2cpp_codegen_object_new(Dictionary_2_t4001210531_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2827708710(L_0, /*hidden argument*/Dictionary_2__ctor_m2827708710_RuntimeMethod_var);
		__this->set_userRefreshStateByAuthCPtr_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(BaseAuthService_t3388892161_il2cpp_TypeInfo_var);
		BaseAuthService__ctor_m4243196943(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_1 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)FirebaseAuthService_RefreshExpiredTokens_m3996987898_RuntimeMethod_var;
		EventHandler_1_t1515976428 * L_3 = (EventHandler_1_t1515976428 *)il2cpp_codegen_object_new(EventHandler_1_t1515976428_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m1585652483(L_3, __this, L_2, /*hidden argument*/EventHandler_1__ctor_m1585652483_RuntimeMethod_var);
		NullCheck(L_1);
		FirebaseHandler_add_Updated_m3059867217(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Unity.FirebaseAuthService Firebase.Unity.FirebaseAuthService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR FirebaseAuthService_t2470375121 * FirebaseAuthService_get_Instance_m128522418 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_get_Instance_m128522418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var);
		FirebaseAuthService_t2470375121 * L_0 = ((FirebaseAuthService_t2470375121_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var))->get__instance_1();
		return L_0;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::StopTokenRefresh(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_StopTokenRefresh_m1727498840 (FirebaseAuthService_t2470375121 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_StopTokenRefresh_m1727498840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	UserRefreshState_t1484377516 * V_1 = NULL;
	FirebaseAuth_t3361360866 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	RuntimeObject * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	RuntimeObject * G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	String_t* G_B7_0 = NULL;
	RuntimeObject * G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	int32_t G_B7_3 = 0;
	FirebaseApp_t2526288410 * G_B6_0 = NULL;
	RuntimeObject * G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	FirebaseApp_t2526288410 * G_B5_0 = NULL;
	RuntimeObject * G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	int32_t G_B5_3 = 0;
	{
		Dictionary_2_t4001210531 * L_0 = __this->get_userRefreshStateByAuthCPtr_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t4001210531 * L_2 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_3 = ___authCPtr0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m2442954558(L_2, L_3, (UserRefreshState_t1484377516 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m2442954558_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0077;
			}
		}

IL_0020:
		{
			Dictionary_2_t4001210531 * L_5 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_6 = ___authCPtr0;
			NullCheck(L_5);
			Dictionary_2_Remove_m735242794(L_5, L_6, /*hidden argument*/Dictionary_2_Remove_m735242794_RuntimeMethod_var);
			UserRefreshState_t1484377516 * L_7 = V_1;
			NullCheck(L_7);
			WeakReference_t1334886716 * L_8 = L_7->get_auth_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			RuntimeObject * L_9 = FirebaseApp_WeakReferenceGetTarget_m3657098532(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_2 = ((FirebaseAuth_t3361360866 *)IsInstSealed((RuntimeObject*)L_9, FirebaseAuth_t3361360866_il2cpp_TypeInfo_var));
			intptr_t L_10 = ___authCPtr0;
			int64_t L_11 = IntPtr_op_Explicit_m3885458658(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
			int64_t L_12 = L_11;
			RuntimeObject * L_13 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_12);
			FirebaseAuth_t3361360866 * L_14 = V_2;
			G_B3_0 = L_13;
			G_B3_1 = _stringLiteral3792442775;
			G_B3_2 = 1;
			if (L_14)
			{
				G_B4_0 = L_13;
				G_B4_1 = _stringLiteral3792442775;
				G_B4_2 = 1;
				goto IL_0058;
			}
		}

IL_0052:
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B3_0;
			G_B7_2 = G_B3_1;
			G_B7_3 = G_B3_2;
			goto IL_006d;
		}

IL_0058:
		{
			FirebaseAuth_t3361360866 * L_15 = V_2;
			NullCheck(L_15);
			FirebaseApp_t2526288410 * L_16 = FirebaseAuth_get_App_m1298869767(L_15, /*hidden argument*/NULL);
			FirebaseApp_t2526288410 * L_17 = L_16;
			G_B5_0 = L_17;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
			if (L_17)
			{
				G_B6_0 = L_17;
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				goto IL_0068;
			}
		}

IL_0061:
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_006d;
		}

IL_0068:
		{
			NullCheck(G_B6_0);
			String_t* L_18 = FirebaseApp_get_Name_m2009872515(G_B6_0, /*hidden argument*/NULL);
			G_B7_0 = L_18;
			G_B7_1 = G_B6_1;
			G_B7_2 = G_B6_2;
			G_B7_3 = G_B6_3;
		}

IL_006d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_19 = String_Format_m2556382932(NULL /*static, unused*/, G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			FirebaseApp_LogMessage_m439117050(NULL /*static, unused*/, G_B7_3, L_19, /*hidden argument*/NULL);
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_20 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::OnAuthDisposed(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_OnAuthDisposed_m2492562215 (FirebaseAuthService_t2470375121 * __this, intptr_t ___authCPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___authCPtr0;
		FirebaseAuthService_StopTokenRefresh_m1727498840(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::OnIdTokenChanged(Firebase.Auth.FirebaseAuth)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_OnIdTokenChanged_m2557035096 (FirebaseAuthService_t2470375121 * __this, FirebaseAuth_t3361360866 * ___auth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_OnIdTokenChanged_m2557035096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	HandleRef_t3745784362  V_2;
	memset(&V_2, 0, sizeof(V_2));
	UserRefreshState_t1484377516 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	FirebaseApp_t2526288410 * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	int32_t G_B7_3 = 0;
	FirebaseApp_t2526288410 * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	int32_t G_B6_3 = 0;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	int32_t G_B8_3 = 0;
	{
		Dictionary_2_t4001210531 * L_0 = __this->get_userRefreshStateByAuthCPtr_3();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			FirebaseAuth_t3361360866 * L_2 = ___auth0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseAuth_t3361360866_il2cpp_TypeInfo_var);
			HandleRef_t3745784362  L_3 = FirebaseAuth_getCPtr_m4190853153(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			intptr_t L_4 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_2), /*hidden argument*/NULL);
			V_1 = L_4;
			Dictionary_2_t4001210531 * L_5 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_6 = V_1;
			NullCheck(L_5);
			bool L_7 = Dictionary_2_TryGetValue_m2442954558(L_5, L_6, (UserRefreshState_t1484377516 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m2442954558_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0049;
			}
		}

IL_002f:
		{
			UserRefreshState_t1484377516 * L_8 = (UserRefreshState_t1484377516 *)il2cpp_codegen_object_new(UserRefreshState_t1484377516_il2cpp_TypeInfo_var);
			UserRefreshState__ctor_m63835205(L_8, /*hidden argument*/NULL);
			V_3 = L_8;
			UserRefreshState_t1484377516 * L_9 = V_3;
			NullCheck(L_9);
			L_9->set_forceRefresh_3((bool)1);
			Dictionary_2_t4001210531 * L_10 = __this->get_userRefreshStateByAuthCPtr_3();
			intptr_t L_11 = V_1;
			UserRefreshState_t1484377516 * L_12 = V_3;
			NullCheck(L_10);
			Dictionary_2_set_Item_m3729300617(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m3729300617_RuntimeMethod_var);
		}

IL_0049:
		{
			FirebaseAuth_t3361360866 * L_13 = ___auth0;
			NullCheck(L_13);
			FirebaseUser_t4237635511 * L_14 = FirebaseAuth_get_CurrentUser_m3915863574(L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_006e;
			}
		}

IL_0054:
		{
			intptr_t L_15 = V_1;
			FirebaseAuthService_StopTokenRefresh_m1727498840(__this, L_15, /*hidden argument*/NULL);
			UserRefreshState_t1484377516 * L_16 = V_3;
			NullCheck(L_16);
			L_16->set_auth_0((WeakReference_t1334886716 *)NULL);
			UserRefreshState_t1484377516 * L_17 = V_3;
			NullCheck(L_17);
			L_17->set_user_1((WeakReference_t1334886716 *)NULL);
			goto IL_00c8;
		}

IL_006e:
		{
			FirebaseAuth_t3361360866 * L_18 = ___auth0;
			NullCheck(L_18);
			FirebaseUser_t4237635511 * L_19 = FirebaseAuth_get_CurrentUser_m3915863574(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			String_t* L_20 = FirebaseUser_get_UserId_m502665137(L_19, /*hidden argument*/NULL);
			FirebaseAuth_t3361360866 * L_21 = ___auth0;
			NullCheck(L_21);
			FirebaseApp_t2526288410 * L_22 = FirebaseAuth_get_App_m1298869767(L_21, /*hidden argument*/NULL);
			FirebaseApp_t2526288410 * L_23 = L_22;
			G_B6_0 = L_23;
			G_B6_1 = L_20;
			G_B6_2 = _stringLiteral1565319960;
			G_B6_3 = 1;
			if (L_23)
			{
				G_B7_0 = L_23;
				G_B7_1 = L_20;
				G_B7_2 = _stringLiteral1565319960;
				G_B7_3 = 1;
				goto IL_008f;
			}
		}

IL_0088:
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_0094;
		}

IL_008f:
		{
			NullCheck(G_B7_0);
			String_t* L_24 = FirebaseApp_get_Name_m2009872515(G_B7_0, /*hidden argument*/NULL);
			G_B8_0 = L_24;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
			G_B8_3 = G_B7_3;
		}

IL_0094:
		{
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_25 = String_Format_m2556382932(NULL /*static, unused*/, G_B8_2, G_B8_1, G_B8_0, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			FirebaseApp_LogMessage_m439117050(NULL /*static, unused*/, G_B8_3, L_25, /*hidden argument*/NULL);
			UserRefreshState_t1484377516 * L_26 = V_3;
			float L_27 = PlatformInformation_get_RealtimeSinceStartupSafe_m2841477420(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_26);
			L_26->set_lastTokenRefreshTime_2(L_27);
			UserRefreshState_t1484377516 * L_28 = V_3;
			FirebaseAuth_t3361360866 * L_29 = ___auth0;
			WeakReference_t1334886716 * L_30 = (WeakReference_t1334886716 *)il2cpp_codegen_object_new(WeakReference_t1334886716_il2cpp_TypeInfo_var);
			WeakReference__ctor_m1054065938(L_30, L_29, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_28);
			L_28->set_auth_0(L_30);
			UserRefreshState_t1484377516 * L_31 = V_3;
			FirebaseAuth_t3361360866 * L_32 = ___auth0;
			NullCheck(L_32);
			FirebaseUser_t4237635511 * L_33 = FirebaseAuth_get_CurrentUser_m3915863574(L_32, /*hidden argument*/NULL);
			WeakReference_t1334886716 * L_34 = (WeakReference_t1334886716 *)il2cpp_codegen_object_new(WeakReference_t1334886716_il2cpp_TypeInfo_var);
			WeakReference__ctor_m1054065938(L_34, L_33, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_31);
			L_31->set_user_1(L_34);
		}

IL_00c8:
		{
			IL2CPP_LEAVE(0xD4, FINALLY_00cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cd;
	}

FINALLY_00cd:
	{ // begin finally (depth: 1)
		RuntimeObject * L_35 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(205)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(205)
	{
		IL2CPP_JUMP_TBL(0xD4, IL_00d4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d4:
	{
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::RefreshExpiredTokens(System.Object,System.EventArgs)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService_RefreshExpiredTokens_m3996987898 (FirebaseAuthService_t2470375121 * __this, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService_RefreshExpiredTokens_m3996987898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	intptr_t V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t4201468800  V_3;
	memset(&V_3, 0, sizeof(V_3));
	U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * V_4 = NULL;
	FirebaseAuth_t3361360866 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	FirebaseApp_t2526288410 * G_B13_0 = NULL;
	U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * G_B13_1 = NULL;
	FirebaseApp_t2526288410 * G_B12_0 = NULL;
	U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * G_B14_1 = NULL;
	{
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_0 = (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 *)il2cpp_codegen_object_new(U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498_il2cpp_TypeInfo_var);
		U3CRefreshExpiredTokensU3Ec__AnonStorey0__ctor_m150800156(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_2 = V_0;
		float L_3 = PlatformInformation_get_RealtimeSinceStartupSafe_m2841477420(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_now_0(L_3);
		Dictionary_2_t4001210531 * L_4 = __this->get_userRefreshStateByAuthCPtr_3();
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t4001210531 * L_6 = __this->get_userRefreshStateByAuthCPtr_3();
			NullCheck(L_6);
			KeyCollection_t4190886002 * L_7 = Dictionary_2_get_Keys_m2062204081(L_6, /*hidden argument*/Dictionary_2_get_Keys_m2062204081_RuntimeMethod_var);
			List_1_t2312224923 * L_8 = (List_1_t2312224923 *)il2cpp_codegen_object_new(List_1_t2312224923_il2cpp_TypeInfo_var);
			List_1__ctor_m1277177286(L_8, L_7, /*hidden argument*/List_1__ctor_m1277177286_RuntimeMethod_var);
			NullCheck(L_8);
			Enumerator_t4201468800  L_9 = List_1_GetEnumerator_m3513205496(L_8, /*hidden argument*/List_1_GetEnumerator_m3513205496_RuntimeMethod_var);
			V_3 = L_9;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01bd;
			}

IL_0040:
			{
				intptr_t L_10 = Enumerator_get_Current_m2322814383((Enumerator_t4201468800 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2322814383_RuntimeMethod_var);
				V_2 = L_10;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_11 = (U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 *)il2cpp_codegen_object_new(U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557_il2cpp_TypeInfo_var);
				U3CRefreshExpiredTokensU3Ec__AnonStorey1__ctor_m150801245(L_11, /*hidden argument*/NULL);
				V_4 = L_11;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_12 = V_4;
				U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_13 = V_0;
				NullCheck(L_12);
				L_12->set_U3CU3Ef__refU240_3(L_13);
				Dictionary_2_t4001210531 * L_14 = __this->get_userRefreshStateByAuthCPtr_3();
				intptr_t L_15 = V_2;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_16 = V_4;
				NullCheck(L_16);
				UserRefreshState_t1484377516 ** L_17 = L_16->get_address_of_userRefreshState_0();
				NullCheck(L_14);
				bool L_18 = Dictionary_2_TryGetValue_m2442954558(L_14, L_15, (UserRefreshState_t1484377516 **)L_17, /*hidden argument*/Dictionary_2_TryGetValue_m2442954558_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_0074;
				}
			}

IL_006f:
			{
				goto IL_01bd;
			}

IL_0074:
			{
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_19 = V_4;
				NullCheck(L_19);
				UserRefreshState_t1484377516 * L_20 = L_19->get_userRefreshState_0();
				NullCheck(L_20);
				WeakReference_t1334886716 * L_21 = L_20->get_auth_0();
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
				RuntimeObject * L_22 = FirebaseApp_WeakReferenceGetTarget_m3657098532(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
				V_5 = ((FirebaseAuth_t3361360866 *)IsInstSealed((RuntimeObject*)L_22, FirebaseAuth_t3361360866_il2cpp_TypeInfo_var));
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_23 = V_4;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_24 = V_4;
				NullCheck(L_24);
				UserRefreshState_t1484377516 * L_25 = L_24->get_userRefreshState_0();
				NullCheck(L_25);
				WeakReference_t1334886716 * L_26 = L_25->get_user_1();
				RuntimeObject * L_27 = FirebaseApp_WeakReferenceGetTarget_m3657098532(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
				NullCheck(L_23);
				L_23->set_user_1(((FirebaseUser_t4237635511 *)IsInstSealed((RuntimeObject*)L_27, FirebaseUser_t4237635511_il2cpp_TypeInfo_var)));
				FirebaseAuth_t3361360866 * L_28 = V_5;
				if (!L_28)
				{
					goto IL_00bc;
				}
			}

IL_00b0:
			{
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_29 = V_4;
				NullCheck(L_29);
				FirebaseUser_t4237635511 * L_30 = L_29->get_user_1();
				if (L_30)
				{
					goto IL_00c8;
				}
			}

IL_00bc:
			{
				intptr_t L_31 = V_2;
				FirebaseAuthService_StopTokenRefresh_m1727498840(__this, L_31, /*hidden argument*/NULL);
				goto IL_01bd;
			}

IL_00c8:
			{
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_32 = V_4;
				NullCheck(L_32);
				UserRefreshState_t1484377516 * L_33 = L_32->get_userRefreshState_0();
				NullCheck(L_33);
				bool L_34 = L_33->get_forceRefresh_3();
				if (L_34)
				{
					goto IL_00fc;
				}
			}

IL_00d9:
			{
				U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_35 = V_0;
				NullCheck(L_35);
				float L_36 = L_35->get_now_0();
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_37 = V_4;
				NullCheck(L_37);
				UserRefreshState_t1484377516 * L_38 = L_37->get_userRefreshState_0();
				NullCheck(L_38);
				float L_39 = L_38->get_lastTokenRefreshTime_2();
				float L_40 = __this->get_TOKEN_REFRESH_PERIOD_SECONDS_2();
				if ((((float)((float)il2cpp_codegen_subtract((float)L_36, (float)L_39))) >= ((float)L_40)))
				{
					goto IL_00fc;
				}
			}

IL_00f7:
			{
				goto IL_01bd;
			}

IL_00fc:
			{
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_41 = V_4;
				FirebaseAuth_t3361360866 * L_42 = V_5;
				NullCheck(L_42);
				FirebaseApp_t2526288410 * L_43 = FirebaseAuth_get_App_m1298869767(L_42, /*hidden argument*/NULL);
				FirebaseApp_t2526288410 * L_44 = L_43;
				G_B12_0 = L_44;
				G_B12_1 = L_41;
				if (L_44)
				{
					G_B13_0 = L_44;
					G_B13_1 = L_41;
					goto IL_010f;
				}
			}

IL_0108:
			{
				G_B14_0 = ((String_t*)(NULL));
				G_B14_1 = G_B12_1;
				goto IL_0114;
			}

IL_010f:
			{
				NullCheck(G_B13_0);
				String_t* L_45 = FirebaseApp_get_Name_m2009872515(G_B13_0, /*hidden argument*/NULL);
				G_B14_0 = L_45;
				G_B14_1 = G_B13_1;
			}

IL_0114:
			{
				NullCheck(G_B14_1);
				G_B14_1->set_appName_2(G_B14_0);
				ObjectU5BU5D_t2843939325* L_46 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
				ObjectU5BU5D_t2843939325* L_47 = L_46;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_48 = V_4;
				NullCheck(L_48);
				FirebaseUser_t4237635511 * L_49 = L_48->get_user_1();
				NullCheck(L_49);
				String_t* L_50 = FirebaseUser_get_UserId_m502665137(L_49, /*hidden argument*/NULL);
				NullCheck(L_47);
				ArrayElementTypeCheck (L_47, L_50);
				(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_50);
				ObjectU5BU5D_t2843939325* L_51 = L_47;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_52 = V_4;
				NullCheck(L_52);
				String_t* L_53 = L_52->get_appName_2();
				NullCheck(L_51);
				ArrayElementTypeCheck (L_51, L_53);
				(L_51)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_53);
				ObjectU5BU5D_t2843939325* L_54 = L_51;
				U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_55 = V_0;
				NullCheck(L_55);
				float L_56 = L_55->get_now_0();
				float L_57 = L_56;
				RuntimeObject * L_58 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_57);
				NullCheck(L_54);
				ArrayElementTypeCheck (L_54, L_58);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_58);
				ObjectU5BU5D_t2843939325* L_59 = L_54;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_60 = V_4;
				NullCheck(L_60);
				UserRefreshState_t1484377516 * L_61 = L_60->get_userRefreshState_0();
				NullCheck(L_61);
				float L_62 = L_61->get_lastTokenRefreshTime_2();
				float L_63 = L_62;
				RuntimeObject * L_64 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_63);
				NullCheck(L_59);
				ArrayElementTypeCheck (L_59, L_64);
				(L_59)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_64);
				ObjectU5BU5D_t2843939325* L_65 = L_59;
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_66 = V_4;
				NullCheck(L_66);
				UserRefreshState_t1484377516 * L_67 = L_66->get_userRefreshState_0();
				NullCheck(L_67);
				bool L_68 = L_67->get_forceRefresh_3();
				bool L_69 = L_68;
				RuntimeObject * L_70 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_69);
				NullCheck(L_65);
				ArrayElementTypeCheck (L_65, L_70);
				(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_70);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_71 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral1718430138, L_65, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
				FirebaseApp_LogMessage_m439117050(NULL /*static, unused*/, 1, L_71, /*hidden argument*/NULL);
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_72 = V_4;
				NullCheck(L_72);
				UserRefreshState_t1484377516 * L_73 = L_72->get_userRefreshState_0();
				NullCheck(L_73);
				L_73->set_forceRefresh_3((bool)0);
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_74 = V_4;
				NullCheck(L_74);
				UserRefreshState_t1484377516 * L_75 = L_74->get_userRefreshState_0();
				U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_76 = V_0;
				NullCheck(L_76);
				float L_77 = L_76->get_now_0();
				NullCheck(L_75);
				L_75->set_lastTokenRefreshTime_2(L_77);
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_78 = V_4;
				NullCheck(L_78);
				FirebaseUser_t4237635511 * L_79 = L_78->get_user_1();
				NullCheck(L_79);
				Task_1_t3252990864 * L_80 = FirebaseUser_TokenAsync_m1960073769(L_79, (bool)1, /*hidden argument*/NULL);
				U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * L_81 = V_4;
				intptr_t L_82 = (intptr_t)U3CRefreshExpiredTokensU3Ec__AnonStorey1_U3CU3Em__0_m4067483229_RuntimeMethod_var;
				Action_1_t3425458459 * L_83 = (Action_1_t3425458459 *)il2cpp_codegen_object_new(Action_1_t3425458459_il2cpp_TypeInfo_var);
				Action_1__ctor_m3690900092(L_83, L_81, L_82, /*hidden argument*/Action_1__ctor_m3690900092_RuntimeMethod_var);
				NullCheck(L_80);
				Task_1_ContinueWith_m2941200014(L_80, L_83, /*hidden argument*/Task_1_ContinueWith_m2941200014_RuntimeMethod_var);
			}

IL_01bd:
			{
				bool L_84 = Enumerator_MoveNext_m3923053051((Enumerator_t4201468800 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m3923053051_RuntimeMethod_var);
				if (L_84)
				{
					goto IL_0040;
				}
			}

IL_01c9:
			{
				IL2CPP_LEAVE(0x1DC, FINALLY_01ce);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01ce;
		}

FINALLY_01ce:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1777996260((Enumerator_t4201468800 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m1777996260_RuntimeMethod_var);
			IL2CPP_END_FINALLY(462)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(462)
		{
			IL2CPP_JUMP_TBL(0x1DC, IL_01dc)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01dc:
		{
			IL2CPP_LEAVE(0x1E8, FINALLY_01e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e1;
	}

FINALLY_01e1:
	{ // begin finally (depth: 1)
		RuntimeObject * L_85 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(481)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(481)
	{
		IL2CPP_JUMP_TBL(0x1E8, IL_01e8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01e8:
	{
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAuthService__cctor_m2716884544 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAuthService__cctor_m2716884544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAuthService_t2470375121 * L_0 = (FirebaseAuthService_t2470375121 *)il2cpp_codegen_object_new(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var);
		FirebaseAuthService__ctor_m3401510087(L_0, /*hidden argument*/NULL);
		((FirebaseAuthService_t2470375121_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAuthService_t2470375121_il2cpp_TypeInfo_var))->set__instance_1(L_0);
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
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey0__ctor_m150800156 (U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey1__ctor_m150801245 (U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Unity.FirebaseAuthService/<RefreshExpiredTokens>c__AnonStorey1::<>m__0(System.Threading.Tasks.Task`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshExpiredTokensU3Ec__AnonStorey1_U3CU3Em__0_m4067483229 (U3CRefreshExpiredTokensU3Ec__AnonStorey1_t1580941557 * __this, Task_1_t3252990864 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshExpiredTokensU3Ec__AnonStorey1_U3CU3Em__0_m4067483229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	float V_1 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Task_1_t3252990864 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsCompleted_m3967183205(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00bc;
		}
	}
	{
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_2 = __this->get_U3CU3Ef__refU240_3();
		NullCheck(L_2);
		FirebaseAuthService_t2470375121 * L_3 = L_2->get_U24this_1();
		NullCheck(L_3);
		Dictionary_2_t4001210531 * L_4 = L_3->get_userRefreshStateByAuthCPtr_3();
		V_0 = L_4;
		RuntimeObject * L_5 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		UserRefreshState_t1484377516 * L_6 = __this->get_userRefreshState_0();
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_7 = __this->get_U3CU3Ef__refU240_3();
		NullCheck(L_7);
		float L_8 = L_7->get_now_0();
		NullCheck(L_6);
		L_6->set_lastTokenRefreshTime_2(L_8);
		IL2CPP_LEAVE(0x44, FINALLY_003d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x44, IL_0044)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0044:
	{
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		FirebaseUser_t4237635511 * L_12 = __this->get_user_1();
		NullCheck(L_12);
		String_t* L_13 = FirebaseUser_get_UserId_m502665137(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_11;
		String_t* L_15 = __this->get_appName_2();
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_14;
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_17 = __this->get_U3CU3Ef__refU240_3();
		NullCheck(L_17);
		float* L_18 = L_17->get_address_of_now_0();
		String_t* L_19 = Single_ToString_m3947131094((float*)L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_21 = __this->get_U3CU3Ef__refU240_3();
		NullCheck(L_21);
		float L_22 = L_21->get_now_0();
		U3CRefreshExpiredTokensU3Ec__AnonStorey0_t3147025498 * L_23 = __this->get_U3CU3Ef__refU240_3();
		NullCheck(L_23);
		FirebaseAuthService_t2470375121 * L_24 = L_23->get_U24this_1();
		NullCheck(L_24);
		float L_25 = L_24->get_TOKEN_REFRESH_PERIOD_SECONDS_2();
		V_1 = ((float)il2cpp_codegen_add((float)L_22, (float)L_25));
		String_t* L_26 = Single_ToString_m3947131094((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_26);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral3597086977, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
		FirebaseApp_LogMessage_m439117050(NULL /*static, unused*/, 1, L_27, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_00bc:
	{
		Task_1_t3252990864 * L_28 = ___task0;
		NullCheck(L_28);
		bool L_29 = Task_get_IsCanceled_m3056077931(L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00d2;
		}
	}
	{
		Task_1_t3252990864 * L_30 = ___task0;
		NullCheck(L_30);
		bool L_31 = Task_get_IsFaulted_m4214781122(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00f3;
		}
	}

IL_00d2:
	{
		FirebaseUser_t4237635511 * L_32 = __this->get_user_1();
		NullCheck(L_32);
		String_t* L_33 = FirebaseUser_get_UserId_m502665137(L_32, /*hidden argument*/NULL);
		String_t* L_34 = __this->get_appName_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2413456795, L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
		FirebaseApp_LogMessage_m439117050(NULL /*static, unused*/, 3, L_35, /*hidden argument*/NULL);
	}

IL_00f3:
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
// System.Void Firebase.Unity.FirebaseAuthService/UserRefreshState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UserRefreshState__ctor_m63835205 (UserRefreshState_t1484377516 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
