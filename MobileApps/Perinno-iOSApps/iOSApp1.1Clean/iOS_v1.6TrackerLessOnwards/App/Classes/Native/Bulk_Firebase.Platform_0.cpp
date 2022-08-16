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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>
struct U3CU3E__AnonType0_2_t1320635857;
// Firebase.Dispatcher
struct Dispatcher_t1781628575;
// Firebase.Platform.DebugLogger
struct DebugLogger_t16656067;
// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t2108028355;
// Firebase.Platform.Default.BaseAuthService
struct BaseAuthService_t3388892161;
// Firebase.Platform.Default.SystemClock
struct SystemClock_t2480061955;
// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_t3428627910;
// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_t1404042752;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t2087675187;
// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004;
// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t4273516014;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t148948;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t2982493820;
// Firebase.Platform.IAuthService
struct IAuthService_t11025045;
// Firebase.Platform.ICertificateService
struct ICertificateService_t2118531980;
// Firebase.Platform.IClockService
struct IClockService_t1265908309;
// Firebase.Platform.IFirebaseAppPlatform
struct IFirebaseAppPlatform_t1946962877;
// Firebase.Platform.IFirebaseAppPlatform[]
struct IFirebaseAppPlatformU5BU5D_t2969855152;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t1304256382;
// Firebase.Platform.IHttpFactoryService
struct IHttpFactoryService_t1869123900;
// Firebase.Platform.ILoggingService
struct ILoggingService_t1251626632;
// Firebase.Platform.NoopCertificateService
struct NoopCertificateService_t402701936;
// Firebase.Unity.InstallRootCerts
struct InstallRootCerts_t2034015421;
// Firebase.Unity.UnityHttpFactoryService
struct UnityHttpFactoryService_t3235819319;
// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t1821497488;
// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t705171362;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t2455143249;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_t2051858722;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_t914753507;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_t2871068643;
// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_t4124630109;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t1466989729;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t1125778690;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243025;
// Mono.Security.X509.X509Store
struct X509Store_t2777415284;
// System.Action
struct Action_t1264377477;
// System.Action[]
struct ActionU5BU5D_t388269512;
// System.ActivationContext
struct ActivationContext_t976916018;
// System.AppDomain
struct AppDomain_t1571427825;
// System.AppDomainManager
struct AppDomainManager_t1420869192;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t107971893;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.CollectionBase
struct CollectionBase_t2727926298;
// System.Collections.Generic.Dictionary`2/Transform`1<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Collections.DictionaryEntry>
struct Transform_1_t859381052;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Collections.DictionaryEntry>
struct Transform_1_t840521409;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Threading.ManualResetEvent,System.Collections.DictionaryEntry>
struct Transform_1_t2549035739;
// System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct Dictionary_2_t577727232;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_t1754075794;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t521420319;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t3634922637;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[]
struct Dictionary_2U5BU5D_t1236182565;
// System.Collections.Generic.IEqualityComparer`1<Firebase.Platform.IFirebaseAppPlatform>
struct IEqualityComparer_1_t4054294895;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1110636971;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_t3099366224;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
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
// System.Func`1<<>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>>
struct Func_1_t750382504;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t1283030885;
// System.Func`1<System.Object>
struct Func_1_t2509852811;
// System.Func`1<System.String>
struct Func_1_t1277197336;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.BinaryWriter
struct BinaryWriter_t3992595042;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.AssemblyName
struct AssemblyName_t270931938;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t2792222854;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3411219591;
// System.ResolveEventHandler
struct ResolveEventHandler_t2775508208;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Security.Cryptography.MD5
struct MD5_t3177620429;
// System.Security.Cryptography.Oid
struct Oid_t3552120260;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3779582684;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t875709727;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t714049126;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t2111161276;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t855273292;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection[]
struct X509CertificateCollectionU5BU5D_t1226099292;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1350454579;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t2922691911;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.ManualResetEvent[]
struct ManualResetEventU5BU5D_t2944696895;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t2713193907;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t3253106730;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>[]
struct Tuple_2U5BU5D_t2838978543;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;

extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var;
extern RuntimeClass* ApplicationFocusChangedEventArgs_t4273516014_il2cpp_TypeInfo_var;
extern RuntimeClass* BaseAuthService_t3388892161_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryWriter_t3992595042_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* DebugLogger_t16656067_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Delegate_t1188392813_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3634922637_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t521420319_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t577727232_il2cpp_TypeInfo_var;
extern RuntimeClass* Dispatcher_t1781628575_il2cpp_TypeInfo_var;
extern RuntimeClass* DllNotFoundException_t2721418633_il2cpp_TypeInfo_var;
extern RuntimeClass* EntryPointNotFoundException_t1356862416_il2cpp_TypeInfo_var;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern RuntimeClass* EventHandler_1_t1515976428_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseAppUtilsStub_t1404042752_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseHandler_t2087675187_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t1277197336_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t750382504_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IAppConfigExtensions_t2982493820_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IFirebaseAppPlatform_t1946962877_il2cpp_TypeInfo_var;
extern RuntimeClass* IFirebaseAppUtils_t1304256382_il2cpp_TypeInfo_var;
extern RuntimeClass* ILoggingService_t1251626632_il2cpp_TypeInfo_var;
extern RuntimeClass* InstallRootCerts_t2034015421_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1293755103_il2cpp_TypeInfo_var;
extern RuntimeClass* NoopCertificateService_t402701936_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* PlatformInformation_t3075710655_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t1110636971_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t3099366224_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Services_t463074608_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SystemClock_t2480061955_il2cpp_TypeInfo_var;
extern RuntimeClass* TextAsset_t3022178571_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern RuntimeClass* Tuple_2_t3253106730_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ec__Iterator0_t1125778690_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3E__AnonType0_2_t1320635857_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityHttpFactoryService_t3235819319_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityLoggingService_t1821497488_il2cpp_TypeInfo_var;
extern RuntimeClass* UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Certificate2_t714049126_il2cpp_TypeInfo_var;
extern RuntimeClass* X509CertificateCollection_t3399372417_il2cpp_TypeInfo_var;
extern RuntimeClass* X509Store_t2922691911_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1082995291;
extern String_t* _stringLiteral1125212877;
extern String_t* _stringLiteral1144067059;
extern String_t* _stringLiteral1260313280;
extern String_t* _stringLiteral1274574761;
extern String_t* _stringLiteral1420667165;
extern String_t* _stringLiteral150276601;
extern String_t* _stringLiteral1590298475;
extern String_t* _stringLiteral1599506901;
extern String_t* _stringLiteral1648520711;
extern String_t* _stringLiteral1696742844;
extern String_t* _stringLiteral1775126349;
extern String_t* _stringLiteral1947075767;
extern String_t* _stringLiteral1951566885;
extern String_t* _stringLiteral1986082327;
extern String_t* _stringLiteral2124937934;
extern String_t* _stringLiteral2133384188;
extern String_t* _stringLiteral2289013;
extern String_t* _stringLiteral2436225465;
extern String_t* _stringLiteral2502633208;
extern String_t* _stringLiteral260525481;
extern String_t* _stringLiteral2838599127;
extern String_t* _stringLiteral2860819001;
extern String_t* _stringLiteral2907263252;
extern String_t* _stringLiteral2971297120;
extern String_t* _stringLiteral302891385;
extern String_t* _stringLiteral3080725358;
extern String_t* _stringLiteral3418596879;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3456743389;
extern String_t* _stringLiteral3462484142;
extern String_t* _stringLiteral3525949144;
extern String_t* _stringLiteral3673082043;
extern String_t* _stringLiteral3935273920;
extern String_t* _stringLiteral3977648530;
extern String_t* _stringLiteral4147376044;
extern String_t* _stringLiteral4180665013;
extern String_t* _stringLiteral4181821397;
extern String_t* _stringLiteral43171701;
extern String_t* _stringLiteral43951709;
extern String_t* _stringLiteral513768872;
extern String_t* _stringLiteral532034312;
extern String_t* _stringLiteral644167244;
extern String_t* _stringLiteral687006496;
extern String_t* _stringLiteral750565858;
extern String_t* _stringLiteral929863655;
extern String_t* _stringLiteral9622098;
extern const RuntimeMethod* AppConfigExtensions_GetState_TisString_t_m229117632_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2411720024_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m22733722_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2974843271_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3834261237_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3293937343_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4103594724_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m980036562_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2908341801_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m138888710_RuntimeMethod_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m1658933173_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseEditorDispatcher_PlayModeStateChanged_m4079403325_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseEditorDispatcher_Update_m1938555897_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t97287965_m1573163647_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisString_t_m3713251534_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_2_t1320635857_m1614743876_RuntimeMethod_var;
extern const RuntimeMethod* FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m1161125284_RuntimeMethod_var;
extern const RuntimeMethod* Func_1_Invoke_m537203482_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1312746605_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m3158203758_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m3836164377_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisFirebaseMonoBehaviour_t148948_m3632638077_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSynchronizationContextBehavoir_t1466989729_m1179237419_RuntimeMethod_var;
extern const RuntimeMethod* InstallRootCerts_U3CInstallRootCertsU3Em__0_m2932267415_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m861730954_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1291754567_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1236881166_RuntimeMethod_var;
extern const RuntimeMethod* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m4105490607_RuntimeMethod_var;
extern const RuntimeMethod* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m2849669475_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m2436648904_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m2558054392_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m3011890621_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m4214835553_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m865228370_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m1643786144_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3137435436_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_2__ctor_m459143963_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_2_get_Item1_m2108757255_RuntimeMethod_var;
extern const RuntimeMethod* Tuple_2_get_Item2_m972515913_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m2289986178_RuntimeMethod_var;
extern const RuntimeMethod* U3CSignaledCoroutineU3Ec__Iterator0_Reset_m2893829747_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m3292094358_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3E__AnonType0_2__ctor_m1373264916_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3E__AnonType0_2_get_IsEditor_m3289126363_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3E__AnonType0_2_get_Platform_m3309620788_RuntimeMethod_var;
extern const RuntimeMethod* UnityConfigExtensions_U3CGetWriteablePathU3Em__0_m4259552419_RuntimeMethod_var;
extern const RuntimeMethod* UnitySynchronizationContext_get_Instance_m3770060678_RuntimeMethod_var;
extern const RuntimeType* FirebaseEditorDispatcher_t2959270802_0_0_0_var;
extern const RuntimeType* FirebaseHandler_t2087675187_0_0_0_var;
extern const RuntimeType* InstallRootCerts_t2034015421_0_0_0_var;
extern const RuntimeType* X509Certificate2_t714049126_0_0_0_var;
extern const uint32_t AppConfigExtensions_GetCertPemFile_m3506109383_MetadataUsageId;
extern const uint32_t AppConfigExtensions_GetWriteablePath_m2582474733_MetadataUsageId;
extern const uint32_t AppConfigExtensions__cctor_m3145927757_MetadataUsageId;
extern const uint32_t AppConfigExtensions_get_Instance_m4077653316_MetadataUsageId;
extern const uint32_t ApplicationFocusChangedEventArgs__ctor_m1233238346_MetadataUsageId;
extern const uint32_t BaseAuthService__cctor_m507616607_MetadataUsageId;
extern const uint32_t BaseAuthService_get_BaseInstance_m134369908_MetadataUsageId;
extern const uint32_t DebugLogger__cctor_m536062409_MetadataUsageId;
extern const uint32_t DebugLogger_get_Instance_m2859537582_MetadataUsageId;
extern const uint32_t Dispatcher_ManagesThisThread_m2517286864_MetadataUsageId;
extern const uint32_t Dispatcher_PollJobs_m1460709859_MetadataUsageId;
extern const uint32_t Dispatcher__ctor_m905638064_MetadataUsageId;
extern const uint32_t FirebaseAppUtilsStub_GetDefaultInstanceName_m2557013547_MetadataUsageId;
extern const uint32_t FirebaseAppUtilsStub__cctor_m2956189889_MetadataUsageId;
extern const uint32_t FirebaseAppUtilsStub_get_Instance_m3024774869_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_ListenToPlayState_m2281437871_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_PlayModeStateChanged_m4079403325_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_StartEditorUpdate_m542005982_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_StopEditorUpdate_m1709702929_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_Update_m1938555897_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_get_EditorApplicationType_m617316480_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_m3826356508_MetadataUsageId;
extern const uint32_t FirebaseEditorDispatcher_get_EditorIsPlaying_m2541720911_MetadataUsageId;
extern const uint32_t FirebaseHandler_CreatePartialOnMainThread_m547509157_MetadataUsageId;
extern const uint32_t FirebaseHandler_Create_m3345307180_MetadataUsageId;
extern const uint32_t FirebaseHandler_IsMainThread_m3926971380_MetadataUsageId;
extern const uint32_t FirebaseHandler_OnApplicationFocus_m1555391810_MetadataUsageId;
extern const uint32_t FirebaseHandler_OnMonoBehaviourDestroyed_m527350058_MetadataUsageId;
extern const uint32_t FirebaseHandler_StartMonoBehaviour_m335660146_MetadataUsageId;
extern const uint32_t FirebaseHandler_StopMonoBehaviour_m3551186312_MetadataUsageId;
extern const uint32_t FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m1161125284_MetadataUsageId;
extern const uint32_t FirebaseHandler_Update_m3612919502_MetadataUsageId;
extern const uint32_t FirebaseHandler__cctor_m4189658711_MetadataUsageId;
extern const uint32_t FirebaseHandler_add_Updated_m3059867217_MetadataUsageId;
extern const uint32_t FirebaseHandler_get_AppUtils_m545989917_MetadataUsageId;
extern const uint32_t FirebaseHandler_get_DefaultInstance_m1688339179_MetadataUsageId;
extern const uint32_t FirebaseHandler_get_ThreadDispatcher_m2829853897_MetadataUsageId;
extern const uint32_t FirebaseHandler_remove_Updated_m3046119671_MetadataUsageId;
extern const uint32_t FirebaseHandler_set_AppUtils_m1726160996_MetadataUsageId;
extern const uint32_t FirebaseHandler_set_ThreadDispatcher_m1217991575_MetadataUsageId;
extern const uint32_t FirebaseLogger_LogMessage_m2677119794_MetadataUsageId;
extern const uint32_t FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664_MetadataUsageId;
extern const uint32_t FirebaseMonoBehaviour_OnDestroy_m2329344138_MetadataUsageId;
extern const uint32_t InstallRootCerts_AFunctionThatDoesNotExist_m543483911_MetadataUsageId;
extern const uint32_t InstallRootCerts_DecodeBase64Blobs_m1766109208_MetadataUsageId;
extern const uint32_t InstallRootCerts_DecodeCertificateCollectionFromString_m1749522460_MetadataUsageId;
extern const uint32_t InstallRootCerts_DecodeCollection_m2713176867_MetadataUsageId;
extern const uint32_t InstallRootCerts_DecodeDefaultCollection_m2609779182_MetadataUsageId;
extern const uint32_t InstallRootCerts_HackRefreshMonoRootStore_m495022385_MetadataUsageId;
extern const uint32_t InstallRootCerts_InstallDefaultCRLs_m1774432234_MetadataUsageId;
extern const uint32_t InstallRootCerts_Install_m886740600_MetadataUsageId;
extern const uint32_t InstallRootCerts_IsCertBugPresent_m1532178560_MetadataUsageId;
extern const uint32_t InstallRootCerts_U3CInstallRootCertsU3Em__0_m2932267415_MetadataUsageId;
extern const uint32_t InstallRootCerts__cctor_m3882980770_MetadataUsageId;
extern const uint32_t InstallRootCerts__ctor_m4096283895_MetadataUsageId;
extern const uint32_t InstallRootCerts_get_InstallationRequired_m617562993_MetadataUsageId;
extern const uint32_t InstallRootCerts_get_Instance_m1253718339_MetadataUsageId;
extern const uint32_t NoopCertificateService_Install_m3247800666_MetadataUsageId;
extern const uint32_t NoopCertificateService__cctor_m1411054893_MetadataUsageId;
extern const uint32_t NoopCertificateService_get_Instance_m3246963339_MetadataUsageId;
extern const uint32_t PlatformInformation_get_DefaultConfigLocation_m4179020149_MetadataUsageId;
extern const uint32_t PlatformInformation_get_RealtimeSinceStartupSafe_m2841477420_MetadataUsageId;
extern const uint32_t PlatformInformation_get_RuntimeName_m2684475920_MetadataUsageId;
extern const uint32_t PlatformInformation_get_RuntimeVersion_m14126820_MetadataUsageId;
extern const uint32_t PlatformInformation_get_SynchronizationContext_m3460037789_MetadataUsageId;
extern const uint32_t PlatformInformation_set_RealtimeSinceStartupSafe_m2898243766_MetadataUsageId;
extern const uint32_t Services__cctor_m362562411_MetadataUsageId;
extern const uint32_t Services_get_AppConfig_m1967952270_MetadataUsageId;
extern const uint32_t Services_get_Auth_m3206912075_MetadataUsageId;
extern const uint32_t Services_get_Logging_m804118032_MetadataUsageId;
extern const uint32_t Services_get_RootCerts_m1876842677_MetadataUsageId;
extern const uint32_t Services_set_AppConfig_m1748368462_MetadataUsageId;
extern const uint32_t Services_set_Auth_m4233926872_MetadataUsageId;
extern const uint32_t Services_set_Clock_m3997817468_MetadataUsageId;
extern const uint32_t Services_set_HttpFactory_m3128578016_MetadataUsageId;
extern const uint32_t Services_set_Logging_m3687381023_MetadataUsageId;
extern const uint32_t Services_set_RootCerts_m1720476539_MetadataUsageId;
extern const uint32_t SynchronizationContextBehavoir_Start_m3262537675_MetadataUsageId;
extern const uint32_t SynchronizationContextBehavoir_get_CallbackQueue_m3137540434_MetadataUsageId;
extern const uint32_t SystemClock__cctor_m1105671335_MetadataUsageId;
extern const uint32_t U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m2289986178_MetadataUsageId;
extern const uint32_t U3CSignaledCoroutineU3Ec__Iterator0_MoveNext_m1475675930_MetadataUsageId;
extern const uint32_t U3CSignaledCoroutineU3Ec__Iterator0_Reset_m2893829747_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_MoveNext_m3342284979_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator0_Reset_m3292094358_MetadataUsageId;
extern const uint32_t UnityConfigExtensions_GetWriteablePath_m1223125578_MetadataUsageId;
extern const uint32_t UnityConfigExtensions__cctor_m2097482257_MetadataUsageId;
extern const uint32_t UnityConfigExtensions__ctor_m3178730601_MetadataUsageId;
extern const uint32_t UnityConfigExtensions_get_DefaultInstance_m3365938126_MetadataUsageId;
extern const uint32_t UnityHttpFactoryService__cctor_m1887137595_MetadataUsageId;
extern const uint32_t UnityHttpFactoryService_get_Instance_m3500013823_MetadataUsageId;
extern const uint32_t UnityLoggingService__cctor_m3421292871_MetadataUsageId;
extern const uint32_t UnityLoggingService_get_Instance_m1073141464_MetadataUsageId;
extern const uint32_t UnityPlatformServices_SetupServices_m1275165385_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Create_m2862881828_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Destroy_m806824744_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Post_m308250308_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext__cctor_m1789778_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext__ctor_m1140058627_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_get_Instance_m3770060678_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct AssemblyU5BU5D_t2792222854;
struct StringU5BU5D_t1281789340;
struct TypeU5BU5D_t3940880105;


#ifndef U3CMODULEU3E_T692745553_H
#define U3CMODULEU3E_T692745553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745553 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745553_H
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
#ifndef DISPATCHER_T1781628575_H
#define DISPATCHER_T1781628575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Dispatcher
struct  Dispatcher_t1781628575  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Dispatcher::ownerThreadId
	int32_t ___ownerThreadId_0;
	// System.Collections.Generic.Queue`1<System.Action> Firebase.Dispatcher::queue
	Queue_1_t1110636971 * ___queue_1;

public:
	inline static int32_t get_offset_of_ownerThreadId_0() { return static_cast<int32_t>(offsetof(Dispatcher_t1781628575, ___ownerThreadId_0)); }
	inline int32_t get_ownerThreadId_0() const { return ___ownerThreadId_0; }
	inline int32_t* get_address_of_ownerThreadId_0() { return &___ownerThreadId_0; }
	inline void set_ownerThreadId_0(int32_t value)
	{
		___ownerThreadId_0 = value;
	}

	inline static int32_t get_offset_of_queue_1() { return static_cast<int32_t>(offsetof(Dispatcher_t1781628575, ___queue_1)); }
	inline Queue_1_t1110636971 * get_queue_1() const { return ___queue_1; }
	inline Queue_1_t1110636971 ** get_address_of_queue_1() { return &___queue_1; }
	inline void set_queue_1(Queue_1_t1110636971 * value)
	{
		___queue_1 = value;
		Il2CppCodeGenWriteBarrier((&___queue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPATCHER_T1781628575_H
#ifndef DEBUGLOGGER_T16656067_H
#define DEBUGLOGGER_T16656067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.DebugLogger
struct  DebugLogger_t16656067  : public RuntimeObject
{
public:

public:
};

struct DebugLogger_t16656067_StaticFields
{
public:
	// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::_instance
	DebugLogger_t16656067 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DebugLogger_t16656067_StaticFields, ____instance_0)); }
	inline DebugLogger_t16656067 * get__instance_0() const { return ____instance_0; }
	inline DebugLogger_t16656067 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(DebugLogger_t16656067 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLOGGER_T16656067_H
#ifndef APPCONFIGEXTENSIONS_T2108028355_H
#define APPCONFIGEXTENSIONS_T2108028355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Default.AppConfigExtensions
struct  AppConfigExtensions_t2108028355  : public RuntimeObject
{
public:

public:
};

struct AppConfigExtensions_t2108028355_StaticFields
{
public:
	// System.Uri Firebase.Platform.Default.AppConfigExtensions::DefaultUpdateUrl
	Uri_t100236324 * ___DefaultUpdateUrl_0;
	// System.String Firebase.Platform.Default.AppConfigExtensions::Default
	String_t* ___Default_1;
	// System.Object Firebase.Platform.Default.AppConfigExtensions::Sync
	RuntimeObject * ___Sync_2;
	// Firebase.Platform.Default.AppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::_instance
	AppConfigExtensions_t2108028355 * ____instance_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Platform.Default.AppConfigExtensions::SStringState
	Dictionary_2_t521420319 * ___SStringState_4;

public:
	inline static int32_t get_offset_of_DefaultUpdateUrl_0() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2108028355_StaticFields, ___DefaultUpdateUrl_0)); }
	inline Uri_t100236324 * get_DefaultUpdateUrl_0() const { return ___DefaultUpdateUrl_0; }
	inline Uri_t100236324 ** get_address_of_DefaultUpdateUrl_0() { return &___DefaultUpdateUrl_0; }
	inline void set_DefaultUpdateUrl_0(Uri_t100236324 * value)
	{
		___DefaultUpdateUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultUpdateUrl_0), value);
	}

	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2108028355_StaticFields, ___Default_1)); }
	inline String_t* get_Default_1() const { return ___Default_1; }
	inline String_t** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(String_t* value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Sync_2() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2108028355_StaticFields, ___Sync_2)); }
	inline RuntimeObject * get_Sync_2() const { return ___Sync_2; }
	inline RuntimeObject ** get_address_of_Sync_2() { return &___Sync_2; }
	inline void set_Sync_2(RuntimeObject * value)
	{
		___Sync_2 = value;
		Il2CppCodeGenWriteBarrier((&___Sync_2), value);
	}

	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2108028355_StaticFields, ____instance_3)); }
	inline AppConfigExtensions_t2108028355 * get__instance_3() const { return ____instance_3; }
	inline AppConfigExtensions_t2108028355 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(AppConfigExtensions_t2108028355 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier((&____instance_3), value);
	}

	inline static int32_t get_offset_of_SStringState_4() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2108028355_StaticFields, ___SStringState_4)); }
	inline Dictionary_2_t521420319 * get_SStringState_4() const { return ___SStringState_4; }
	inline Dictionary_2_t521420319 ** get_address_of_SStringState_4() { return &___SStringState_4; }
	inline void set_SStringState_4(Dictionary_2_t521420319 * value)
	{
		___SStringState_4 = value;
		Il2CppCodeGenWriteBarrier((&___SStringState_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPCONFIGEXTENSIONS_T2108028355_H
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
#ifndef SYSTEMCLOCK_T2480061955_H
#define SYSTEMCLOCK_T2480061955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Default.SystemClock
struct  SystemClock_t2480061955  : public RuntimeObject
{
public:

public:
};

struct SystemClock_t2480061955_StaticFields
{
public:
	// Firebase.Platform.IClockService Firebase.Platform.Default.SystemClock::Instance
	RuntimeObject* ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(SystemClock_t2480061955_StaticFields, ___Instance_0)); }
	inline RuntimeObject* get_Instance_0() const { return ___Instance_0; }
	inline RuntimeObject** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(RuntimeObject* value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMCLOCK_T2480061955_H
#ifndef FIREBASEAPPUTILSSTUB_T1404042752_H
#define FIREBASEAPPUTILSSTUB_T1404042752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseAppUtilsStub
struct  FirebaseAppUtilsStub_t1404042752  : public RuntimeObject
{
public:

public:
};

struct FirebaseAppUtilsStub_t1404042752_StaticFields
{
public:
	// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::_instance
	FirebaseAppUtilsStub_t1404042752 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(FirebaseAppUtilsStub_t1404042752_StaticFields, ____instance_0)); }
	inline FirebaseAppUtilsStub_t1404042752 * get__instance_0() const { return ____instance_0; }
	inline FirebaseAppUtilsStub_t1404042752 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(FirebaseAppUtilsStub_t1404042752 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEAPPUTILSSTUB_T1404042752_H
#ifndef FIREBASEEDITORDISPATCHER_T2959270802_H
#define FIREBASEEDITORDISPATCHER_T2959270802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseEditorDispatcher
struct  FirebaseEditorDispatcher_t2959270802  : public RuntimeObject
{
public:

public:
};

struct FirebaseEditorDispatcher_t2959270802_StaticFields
{
public:
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache0
	Action_t1264377477 * ___U3CU3Ef__mgU24cache0_0;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache1
	Action_t1264377477 * ___U3CU3Ef__mgU24cache1_1;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache2
	Action_t1264377477 * ___U3CU3Ef__mgU24cache2_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(FirebaseEditorDispatcher_t2959270802_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline Action_t1264377477 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(Action_t1264377477 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_1() { return static_cast<int32_t>(offsetof(FirebaseEditorDispatcher_t2959270802_StaticFields, ___U3CU3Ef__mgU24cache1_1)); }
	inline Action_t1264377477 * get_U3CU3Ef__mgU24cache1_1() const { return ___U3CU3Ef__mgU24cache1_1; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__mgU24cache1_1() { return &___U3CU3Ef__mgU24cache1_1; }
	inline void set_U3CU3Ef__mgU24cache1_1(Action_t1264377477 * value)
	{
		___U3CU3Ef__mgU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_2() { return static_cast<int32_t>(offsetof(FirebaseEditorDispatcher_t2959270802_StaticFields, ___U3CU3Ef__mgU24cache2_2)); }
	inline Action_t1264377477 * get_U3CU3Ef__mgU24cache2_2() const { return ___U3CU3Ef__mgU24cache2_2; }
	inline Action_t1264377477 ** get_address_of_U3CU3Ef__mgU24cache2_2() { return &___U3CU3Ef__mgU24cache2_2; }
	inline void set_U3CU3Ef__mgU24cache2_2(Action_t1264377477 * value)
	{
		___U3CU3Ef__mgU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEEDITORDISPATCHER_T2959270802_H
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
#ifndef U3CCREATEPARTIALONMAINTHREADU3EC__ANONSTOREY0_T2085242004_H
#define U3CCREATEPARTIALONMAINTHREADU3EC__ANONSTOREY0_T2085242004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct  U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004  : public RuntimeObject
{
public:
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::appUtils
	RuntimeObject* ___appUtils_0;

public:
	inline static int32_t get_offset_of_appUtils_0() { return static_cast<int32_t>(offsetof(U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004, ___appUtils_0)); }
	inline RuntimeObject* get_appUtils_0() const { return ___appUtils_0; }
	inline RuntimeObject** get_address_of_appUtils_0() { return &___appUtils_0; }
	inline void set_appUtils_0(RuntimeObject* value)
	{
		___appUtils_0 = value;
		Il2CppCodeGenWriteBarrier((&___appUtils_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEPARTIALONMAINTHREADU3EC__ANONSTOREY0_T2085242004_H
#ifndef FIREBASELOGGER_T403508402_H
#define FIREBASELOGGER_T403508402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseLogger
struct  FirebaseLogger_t403508402  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASELOGGER_T403508402_H
#ifndef NOOPCERTIFICATESERVICE_T402701936_H
#define NOOPCERTIFICATESERVICE_T402701936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.NoopCertificateService
struct  NoopCertificateService_t402701936  : public RuntimeObject
{
public:

public:
};

struct NoopCertificateService_t402701936_StaticFields
{
public:
	// Firebase.Platform.NoopCertificateService Firebase.Platform.NoopCertificateService::_instance
	NoopCertificateService_t402701936 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(NoopCertificateService_t402701936_StaticFields, ____instance_0)); }
	inline NoopCertificateService_t402701936 * get__instance_0() const { return ____instance_0; }
	inline NoopCertificateService_t402701936 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(NoopCertificateService_t402701936 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOOPCERTIFICATESERVICE_T402701936_H
#ifndef PLATFORMINFORMATION_T3075710655_H
#define PLATFORMINFORMATION_T3075710655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.PlatformInformation
struct  PlatformInformation_t3075710655  : public RuntimeObject
{
public:

public:
};

struct PlatformInformation_t3075710655_StaticFields
{
public:
	// System.String Firebase.Platform.PlatformInformation::runtimeVersion
	String_t* ___runtimeVersion_0;
	// System.Single Firebase.Platform.PlatformInformation::<RealtimeSinceStartupSafe>k__BackingField
	float ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache0
	Func_1_t1277197336 * ___U3CU3Ef__amU24cache0_2;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache1
	Func_1_t1277197336 * ___U3CU3Ef__amU24cache1_3;

public:
	inline static int32_t get_offset_of_runtimeVersion_0() { return static_cast<int32_t>(offsetof(PlatformInformation_t3075710655_StaticFields, ___runtimeVersion_0)); }
	inline String_t* get_runtimeVersion_0() const { return ___runtimeVersion_0; }
	inline String_t** get_address_of_runtimeVersion_0() { return &___runtimeVersion_0; }
	inline void set_runtimeVersion_0(String_t* value)
	{
		___runtimeVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___runtimeVersion_0), value);
	}

	inline static int32_t get_offset_of_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlatformInformation_t3075710655_StaticFields, ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1)); }
	inline float get_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() const { return ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1() { return &___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1; }
	inline void set_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1(float value)
	{
		___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(PlatformInformation_t3075710655_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Func_1_t1277197336 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Func_1_t1277197336 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Func_1_t1277197336 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(PlatformInformation_t3075710655_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Func_1_t1277197336 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Func_1_t1277197336 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Func_1_t1277197336 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMINFORMATION_T3075710655_H
#ifndef SERVICES_T463074608_H
#define SERVICES_T463074608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Services
struct  Services_t463074608  : public RuntimeObject
{
public:

public:
};

struct Services_t463074608_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IAuthService Firebase.Platform.Services::<Auth>k__BackingField
	RuntimeObject* ___U3CAuthU3Ek__BackingField_1;
	// Firebase.Platform.ICertificateService Firebase.Platform.Services::<RootCerts>k__BackingField
	RuntimeObject* ___U3CRootCertsU3Ek__BackingField_2;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_3;
	// Firebase.Platform.IHttpFactoryService Firebase.Platform.Services::<HttpFactory>k__BackingField
	RuntimeObject* ___U3CHttpFactoryU3Ek__BackingField_4;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_t463074608_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppConfigU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CAuthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_t463074608_StaticFields, ___U3CAuthU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAuthU3Ek__BackingField_1() const { return ___U3CAuthU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAuthU3Ek__BackingField_1() { return &___U3CAuthU3Ek__BackingField_1; }
	inline void set_U3CAuthU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAuthU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CRootCertsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_t463074608_StaticFields, ___U3CRootCertsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CRootCertsU3Ek__BackingField_2() const { return ___U3CRootCertsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CRootCertsU3Ek__BackingField_2() { return &___U3CRootCertsU3Ek__BackingField_2; }
	inline void set_U3CRootCertsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CRootCertsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRootCertsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Services_t463074608_StaticFields, ___U3CClockU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_3() const { return ___U3CClockU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_3() { return &___U3CClockU3Ek__BackingField_3; }
	inline void set_U3CClockU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClockU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CHttpFactoryU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Services_t463074608_StaticFields, ___U3CHttpFactoryU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CHttpFactoryU3Ek__BackingField_4() const { return ___U3CHttpFactoryU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CHttpFactoryU3Ek__BackingField_4() { return &___U3CHttpFactoryU3Ek__BackingField_4; }
	inline void set_U3CHttpFactoryU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CHttpFactoryU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHttpFactoryU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Services_t463074608_StaticFields, ___U3CLoggingU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_5() const { return ___U3CLoggingU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_5() { return &___U3CLoggingU3Ek__BackingField_5; }
	inline void set_U3CLoggingU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLoggingU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICES_T463074608_H
#ifndef INSTALLROOTCERTS_T2034015421_H
#define INSTALLROOTCERTS_T2034015421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.InstallRootCerts
struct  InstallRootCerts_t2034015421  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Unity.InstallRootCerts::_needsCertificateWorkaround
	bool ____needsCertificateWorkaround_3;

public:
	inline static int32_t get_offset_of__needsCertificateWorkaround_3() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421, ____needsCertificateWorkaround_3)); }
	inline bool get__needsCertificateWorkaround_3() const { return ____needsCertificateWorkaround_3; }
	inline bool* get_address_of__needsCertificateWorkaround_3() { return &____needsCertificateWorkaround_3; }
	inline void set__needsCertificateWorkaround_3(bool value)
	{
		____needsCertificateWorkaround_3 = value;
	}
};

struct InstallRootCerts_t2034015421_StaticFields
{
public:
	// System.Object Firebase.Unity.InstallRootCerts::Sync
	RuntimeObject * ___Sync_0;
	// System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection> Firebase.Unity.InstallRootCerts::_installedRoots
	Dictionary_2_t577727232 * ____installedRoots_1;
	// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::_instance
	InstallRootCerts_t2034015421 * ____instance_2;
	// System.String Firebase.Unity.InstallRootCerts::TrustedRoot
	String_t* ___TrustedRoot_4;
	// System.String Firebase.Unity.InstallRootCerts::IntermediateCA
	String_t* ___IntermediateCA_5;
	// System.Func`1<<>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>> Firebase.Unity.InstallRootCerts::<>f__am$cache0
	Func_1_t750382504 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_Sync_0() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421_StaticFields, ___Sync_0)); }
	inline RuntimeObject * get_Sync_0() const { return ___Sync_0; }
	inline RuntimeObject ** get_address_of_Sync_0() { return &___Sync_0; }
	inline void set_Sync_0(RuntimeObject * value)
	{
		___Sync_0 = value;
		Il2CppCodeGenWriteBarrier((&___Sync_0), value);
	}

	inline static int32_t get_offset_of__installedRoots_1() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421_StaticFields, ____installedRoots_1)); }
	inline Dictionary_2_t577727232 * get__installedRoots_1() const { return ____installedRoots_1; }
	inline Dictionary_2_t577727232 ** get_address_of__installedRoots_1() { return &____installedRoots_1; }
	inline void set__installedRoots_1(Dictionary_2_t577727232 * value)
	{
		____installedRoots_1 = value;
		Il2CppCodeGenWriteBarrier((&____installedRoots_1), value);
	}

	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421_StaticFields, ____instance_2)); }
	inline InstallRootCerts_t2034015421 * get__instance_2() const { return ____instance_2; }
	inline InstallRootCerts_t2034015421 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(InstallRootCerts_t2034015421 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}

	inline static int32_t get_offset_of_TrustedRoot_4() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421_StaticFields, ___TrustedRoot_4)); }
	inline String_t* get_TrustedRoot_4() const { return ___TrustedRoot_4; }
	inline String_t** get_address_of_TrustedRoot_4() { return &___TrustedRoot_4; }
	inline void set_TrustedRoot_4(String_t* value)
	{
		___TrustedRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&___TrustedRoot_4), value);
	}

	inline static int32_t get_offset_of_IntermediateCA_5() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421_StaticFields, ___IntermediateCA_5)); }
	inline String_t* get_IntermediateCA_5() const { return ___IntermediateCA_5; }
	inline String_t** get_address_of_IntermediateCA_5() { return &___IntermediateCA_5; }
	inline void set_IntermediateCA_5(String_t* value)
	{
		___IntermediateCA_5 = value;
		Il2CppCodeGenWriteBarrier((&___IntermediateCA_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(InstallRootCerts_t2034015421_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_1_t750382504 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_1_t750382504 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_1_t750382504 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLROOTCERTS_T2034015421_H
#ifndef UNITYHTTPFACTORYSERVICE_T3235819319_H
#define UNITYHTTPFACTORYSERVICE_T3235819319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnityHttpFactoryService
struct  UnityHttpFactoryService_t3235819319  : public RuntimeObject
{
public:

public:
};

struct UnityHttpFactoryService_t3235819319_StaticFields
{
public:
	// Firebase.Unity.UnityHttpFactoryService Firebase.Unity.UnityHttpFactoryService::_instance
	UnityHttpFactoryService_t3235819319 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(UnityHttpFactoryService_t3235819319_StaticFields, ____instance_0)); }
	inline UnityHttpFactoryService_t3235819319 * get__instance_0() const { return ____instance_0; }
	inline UnityHttpFactoryService_t3235819319 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(UnityHttpFactoryService_t3235819319 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYHTTPFACTORYSERVICE_T3235819319_H
#ifndef UNITYLOGGINGSERVICE_T1821497488_H
#define UNITYLOGGINGSERVICE_T1821497488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnityLoggingService
struct  UnityLoggingService_t1821497488  : public RuntimeObject
{
public:

public:
};

struct UnityLoggingService_t1821497488_StaticFields
{
public:
	// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::_instance
	UnityLoggingService_t1821497488 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(UnityLoggingService_t1821497488_StaticFields, ____instance_0)); }
	inline UnityLoggingService_t1821497488 * get__instance_0() const { return ____instance_0; }
	inline UnityLoggingService_t1821497488 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(UnityLoggingService_t1821497488 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGGINGSERVICE_T1821497488_H
#ifndef UNITYPLATFORMSERVICES_T2540433941_H
#define UNITYPLATFORMSERVICES_T2540433941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnityPlatformServices
struct  UnityPlatformServices_t2540433941  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPLATFORMSERVICES_T2540433941_H
#ifndef U3CSENDU3EC__ANONSTOREY3_T2455143249_H
#define U3CSENDU3EC__ANONSTOREY3_T2455143249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct  U3CSendU3Ec__AnonStorey3_t2455143249  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDU3EC__ANONSTOREY3_T2455143249_H
#ifndef U3CSENDU3EC__ANONSTOREY4_T2051858722_H
#define U3CSENDU3EC__ANONSTOREY4_T2051858722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct  U3CSendU3Ec__AnonStorey4_t2051858722  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDU3EC__ANONSTOREY4_T2051858722_H
#ifndef U3CSENDCOROUTINEU3EC__ANONSTOREY1_T914753507_H
#define U3CSENDCOROUTINEU3EC__ANONSTOREY1_T914753507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct  U3CSendCoroutineU3Ec__AnonStorey1_t914753507  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDCOROUTINEU3EC__ANONSTOREY1_T914753507_H
#ifndef U3CSENDCOROUTINEU3EC__ANONSTOREY2_T2871068643_H
#define U3CSENDCOROUTINEU3EC__ANONSTOREY2_T2871068643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct  U3CSendCoroutineU3Ec__AnonStorey2_t2871068643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDCOROUTINEU3EC__ANONSTOREY2_T2871068643_H
#ifndef U3CSIGNALEDCOROUTINEU3EC__ITERATOR0_T4124630109_H
#define U3CSIGNALEDCOROUTINEU3EC__ITERATOR0_T4124630109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct  U3CSignaledCoroutineU3Ec__Iterator0_t4124630109  : public RuntimeObject
{
public:
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::coroutine
	Func_1_t1283030885 * ___coroutine_0;
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::newSignal
	ManualResetEvent_t451242010 * ___newSignal_1;
	// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_coroutine_0() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t4124630109, ___coroutine_0)); }
	inline Func_1_t1283030885 * get_coroutine_0() const { return ___coroutine_0; }
	inline Func_1_t1283030885 ** get_address_of_coroutine_0() { return &___coroutine_0; }
	inline void set_coroutine_0(Func_1_t1283030885 * value)
	{
		___coroutine_0 = value;
		Il2CppCodeGenWriteBarrier((&___coroutine_0), value);
	}

	inline static int32_t get_offset_of_newSignal_1() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t4124630109, ___newSignal_1)); }
	inline ManualResetEvent_t451242010 * get_newSignal_1() const { return ___newSignal_1; }
	inline ManualResetEvent_t451242010 ** get_address_of_newSignal_1() { return &___newSignal_1; }
	inline void set_newSignal_1(ManualResetEvent_t451242010 * value)
	{
		___newSignal_1 = value;
		Il2CppCodeGenWriteBarrier((&___newSignal_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t4124630109, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t4124630109, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CSignaledCoroutineU3Ec__Iterator0_t4124630109, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSIGNALEDCOROUTINEU3EC__ITERATOR0_T4124630109_H
#ifndef U3CSTARTU3EC__ITERATOR0_T1125778690_H
#define U3CSTARTU3EC__ITERATOR0_T1125778690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t1125778690  : public RuntimeObject
{
public:
	// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::<entry>__0
	Tuple_2_t3253106730 * ___U3CentryU3E__0_0;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$locvar0
	RuntimeObject * ___U24locvar0_1;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$this
	SynchronizationContextBehavoir_t1466989729 * ___U24this_2;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CentryU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1125778690, ___U3CentryU3E__0_0)); }
	inline Tuple_2_t3253106730 * get_U3CentryU3E__0_0() const { return ___U3CentryU3E__0_0; }
	inline Tuple_2_t3253106730 ** get_address_of_U3CentryU3E__0_0() { return &___U3CentryU3E__0_0; }
	inline void set_U3CentryU3E__0_0(Tuple_2_t3253106730 * value)
	{
		___U3CentryU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CentryU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1125778690, ___U24locvar0_1)); }
	inline RuntimeObject * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline RuntimeObject ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(RuntimeObject * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1125778690, ___U24this_2)); }
	inline SynchronizationContextBehavoir_t1466989729 * get_U24this_2() const { return ___U24this_2; }
	inline SynchronizationContextBehavoir_t1466989729 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SynchronizationContextBehavoir_t1466989729 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1125778690, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1125778690, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t1125778690, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T1125778690_H
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
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef DICTIONARY_2_T577727232_H
#define DICTIONARY_2_T577727232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct  Dictionary_2_t577727232  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	IFirebaseAppPlatformU5BU5D_t2969855152* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	X509CertificateCollectionU5BU5D_t1226099292* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___keySlots_6)); }
	inline IFirebaseAppPlatformU5BU5D_t2969855152* get_keySlots_6() const { return ___keySlots_6; }
	inline IFirebaseAppPlatformU5BU5D_t2969855152** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(IFirebaseAppPlatformU5BU5D_t2969855152* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___valueSlots_7)); }
	inline X509CertificateCollectionU5BU5D_t1226099292* get_valueSlots_7() const { return ___valueSlots_7; }
	inline X509CertificateCollectionU5BU5D_t1226099292** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(X509CertificateCollectionU5BU5D_t1226099292* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t577727232_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t859381052 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t577727232_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t859381052 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t859381052 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t859381052 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T577727232_H
#ifndef DICTIONARY_2_T521420319_H
#define DICTIONARY_2_T521420319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct  Dictionary_2_t521420319  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Dictionary_2U5BU5D_t1236182565* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___valueSlots_7)); }
	inline Dictionary_2U5BU5D_t1236182565* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Dictionary_2U5BU5D_t1236182565** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Dictionary_2U5BU5D_t1236182565* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t521420319_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t840521409 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t521420319_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t840521409 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t840521409 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t840521409 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T521420319_H
#ifndef DICTIONARY_2_T3634922637_H
#define DICTIONARY_2_T3634922637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct  Dictionary_2_t3634922637  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ManualResetEventU5BU5D_t2944696895* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___valueSlots_7)); }
	inline ManualResetEventU5BU5D_t2944696895* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ManualResetEventU5BU5D_t2944696895** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ManualResetEventU5BU5D_t2944696895* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3634922637_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2549035739 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3634922637_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2549035739 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2549035739 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2549035739 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3634922637_H
#ifndef LIST_1_T1293755103_H
#define LIST_1_T1293755103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t1293755103  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t457913172* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1293755103_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5DU5BU5D_t457913172* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1293755103_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1293755103_H
#ifndef QUEUE_1_T1110636971_H
#define QUEUE_1_T1110636971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Action>
struct  Queue_1_t1110636971  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_t388269512* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1110636971, ____array_0)); }
	inline ActionU5BU5D_t388269512* get__array_0() const { return ____array_0; }
	inline ActionU5BU5D_t388269512** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ActionU5BU5D_t388269512* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1110636971, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1110636971, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1110636971, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1110636971, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T1110636971_H
#ifndef QUEUE_1_T3099366224_H
#define QUEUE_1_T3099366224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct  Queue_1_t3099366224  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Tuple_2U5BU5D_t2838978543* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3099366224, ____array_0)); }
	inline Tuple_2U5BU5D_t2838978543* get__array_0() const { return ____array_0; }
	inline Tuple_2U5BU5D_t2838978543** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Tuple_2U5BU5D_t2838978543* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3099366224, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3099366224, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3099366224, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3099366224, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T3099366224_H
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
#ifndef BINARYWRITER_T3992595042_H
#define BINARYWRITER_T3992595042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t3992595042  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t1273022909 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t4116647657* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___OutStream_1)); }
	inline Stream_t1273022909 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t1273022909 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t1273022909 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___stringBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuffer_5), value);
	}

	inline static int32_t get_offset_of_maxCharsPerRound_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___maxCharsPerRound_6)); }
	inline int32_t get_maxCharsPerRound_6() const { return ___maxCharsPerRound_6; }
	inline int32_t* get_address_of_maxCharsPerRound_6() { return &___maxCharsPerRound_6; }
	inline void set_maxCharsPerRound_6(int32_t value)
	{
		___maxCharsPerRound_6 = value;
	}
};

struct BinaryWriter_t3992595042_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t3992595042 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042_StaticFields, ___Null_0)); }
	inline BinaryWriter_t3992595042 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t3992595042 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t3992595042 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T3992595042_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public RuntimeObject
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_0)); }
	inline TextReader_t283511965 * get_Null_0() const { return ___Null_0; }
	inline TextReader_t283511965 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_t283511965 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
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
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef HASHALGORITHM_T1432317219_H
#define HASHALGORITHM_T1432317219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1432317219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t4116647657* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashValue_0)); }
	inline ByteU5BU5D_t4116647657* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t4116647657* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1432317219_H
#ifndef X509CERTIFICATE_T713131622_H
#define X509CERTIFICATE_T713131622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t713131622  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t489243024 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t4116647657* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___x509_0)); }
	inline X509Certificate_t489243024 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t489243024 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t489243024 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t4116647657* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t4116647657* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T713131622_H
#ifndef X509CERTIFICATEENUMERATOR_T855273292_H
#define X509CERTIFICATEENUMERATOR_T855273292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t855273292  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t855273292, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T855273292_H
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
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2326897723_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2326897723 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2326897723 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2326897723 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef TUPLE_2_T3253106730_H
#define TUPLE_2_T3253106730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct  Tuple_2_t3253106730  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::<Item1>k__BackingField
	SendOrPostCallback_t2750080073 * ___U3CItem1U3Ek__BackingField_0;
	// T2 System.Tuple`2::<Item2>k__BackingField
	RuntimeObject * ___U3CItem2U3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CItem1U3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tuple_2_t3253106730, ___U3CItem1U3Ek__BackingField_0)); }
	inline SendOrPostCallback_t2750080073 * get_U3CItem1U3Ek__BackingField_0() const { return ___U3CItem1U3Ek__BackingField_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_U3CItem1U3Ek__BackingField_0() { return &___U3CItem1U3Ek__BackingField_0; }
	inline void set_U3CItem1U3Ek__BackingField_0(SendOrPostCallback_t2750080073 * value)
	{
		___U3CItem1U3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CItem1U3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CItem2U3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Tuple_2_t3253106730, ___U3CItem2U3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CItem2U3Ek__BackingField_1() const { return ___U3CItem2U3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CItem2U3Ek__BackingField_1() { return &___U3CItem2U3Ek__BackingField_1; }
	inline void set_U3CItem2U3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CItem2U3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CItem2U3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_2_T3253106730_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
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
#ifndef UNITYCONFIGEXTENSIONS_T3428627910_H
#define UNITYCONFIGEXTENSIONS_T3428627910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Default.UnityConfigExtensions
struct  UnityConfigExtensions_t3428627910  : public AppConfigExtensions_t2108028355
{
public:

public:
};

struct UnityConfigExtensions_t3428627910_StaticFields
{
public:
	// Firebase.Platform.Default.UnityConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::_instance
	UnityConfigExtensions_t3428627910 * ____instance_5;
	// System.Func`1<System.String> Firebase.Platform.Default.UnityConfigExtensions::<>f__am$cache0
	Func_1_t1277197336 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(UnityConfigExtensions_t3428627910_StaticFields, ____instance_5)); }
	inline UnityConfigExtensions_t3428627910 * get__instance_5() const { return ____instance_5; }
	inline UnityConfigExtensions_t3428627910 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(UnityConfigExtensions_t3428627910 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier((&____instance_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(UnityConfigExtensions_t3428627910_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_1_t1277197336 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_1_t1277197336 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_1_t1277197336 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCONFIGEXTENSIONS_T3428627910_H
#ifndef APPLICATIONFOCUSCHANGEDEVENTARGS_T4273516014_H
#define APPLICATIONFOCUSCHANGEDEVENTARGS_T4273516014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct  ApplicationFocusChangedEventArgs_t4273516014  : public EventArgs_t3591816995
{
public:
	// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CHasFocusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ApplicationFocusChangedEventArgs_t4273516014, ___U3CHasFocusU3Ek__BackingField_1)); }
	inline bool get_U3CHasFocusU3Ek__BackingField_1() const { return ___U3CHasFocusU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CHasFocusU3Ek__BackingField_1() { return &___U3CHasFocusU3Ek__BackingField_1; }
	inline void set_U3CHasFocusU3Ek__BackingField_1(bool value)
	{
		___U3CHasFocusU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONFOCUSCHANGEDEVENTARGS_T4273516014_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T705171362_H
#define UNITYSYNCHRONIZATIONCONTEXT_T705171362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext
struct  UnitySynchronizationContext_t705171362  : public SynchronizationContext_t2326897723
{
public:
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext::queue
	Queue_1_t3099366224 * ___queue_2;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext::behavior
	SynchronizationContextBehavoir_t1466989729 * ___behavior_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext::mainThreadId
	int32_t ___mainThreadId_4;

public:
	inline static int32_t get_offset_of_queue_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t705171362, ___queue_2)); }
	inline Queue_1_t3099366224 * get_queue_2() const { return ___queue_2; }
	inline Queue_1_t3099366224 ** get_address_of_queue_2() { return &___queue_2; }
	inline void set_queue_2(Queue_1_t3099366224 * value)
	{
		___queue_2 = value;
		Il2CppCodeGenWriteBarrier((&___queue_2), value);
	}

	inline static int32_t get_offset_of_behavior_3() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t705171362, ___behavior_3)); }
	inline SynchronizationContextBehavoir_t1466989729 * get_behavior_3() const { return ___behavior_3; }
	inline SynchronizationContextBehavoir_t1466989729 ** get_address_of_behavior_3() { return &___behavior_3; }
	inline void set_behavior_3(SynchronizationContextBehavoir_t1466989729 * value)
	{
		___behavior_3 = value;
		Il2CppCodeGenWriteBarrier((&___behavior_3), value);
	}

	inline static int32_t get_offset_of_mainThreadId_4() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t705171362, ___mainThreadId_4)); }
	inline int32_t get_mainThreadId_4() const { return ___mainThreadId_4; }
	inline int32_t* get_address_of_mainThreadId_4() { return &___mainThreadId_4; }
	inline void set_mainThreadId_4(int32_t value)
	{
		___mainThreadId_4 = value;
	}
};

struct UnitySynchronizationContext_t705171362_StaticFields
{
public:
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::_instance
	UnitySynchronizationContext_t705171362 * ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent> Firebase.Unity.UnitySynchronizationContext::signalDictionary
	Dictionary_2_t3634922637 * ___signalDictionary_5;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t705171362_StaticFields, ____instance_1)); }
	inline UnitySynchronizationContext_t705171362 * get__instance_1() const { return ____instance_1; }
	inline UnitySynchronizationContext_t705171362 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(UnitySynchronizationContext_t705171362 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}

	inline static int32_t get_offset_of_signalDictionary_5() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t705171362_StaticFields, ___signalDictionary_5)); }
	inline Dictionary_2_t3634922637 * get_signalDictionary_5() const { return ___signalDictionary_5; }
	inline Dictionary_2_t3634922637 ** get_address_of_signalDictionary_5() { return &___signalDictionary_5; }
	inline void set_signalDictionary_5(Dictionary_2_t3634922637 * value)
	{
		___signalDictionary_5 = value;
		Il2CppCodeGenWriteBarrier((&___signalDictionary_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T705171362_H
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
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUMERATOR_T3182998980_H
#define ENUMERATOR_T3182998980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct  Enumerator_t3182998980 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1293755103 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ByteU5BU5D_t4116647657* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___l_0)); }
	inline List_1_t1293755103 * get_l_0() const { return ___l_0; }
	inline List_1_t1293755103 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1293755103 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3182998980, ___current_3)); }
	inline ByteU5BU5D_t4116647657* get_current_3() const { return ___current_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ByteU5BU5D_t4116647657* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3182998980_H
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
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
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
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_2)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_7)); }
	inline Encoding_t1523322056 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t1523322056 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_7), value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_8)); }
	inline Decoder_t2204182725 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t2204182725 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t2204182725 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_8), value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_9)); }
	inline Stream_t1273022909 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t1273022909 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t1273022909 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_9), value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_11)); }
	inline StringBuilder_t * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_11), value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_12)); }
	inline StreamReader_t4009935899 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t4009935899 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t4009935899 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
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
#ifndef MD5_T3177620429_H
#define MD5_T3177620429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t3177620429  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T3177620429_H
#ifndef X509CERTIFICATE2_T714049126_H
#define X509CERTIFICATE2_T714049126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_t714049126  : public X509Certificate_t713131622
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::_archived
	bool ____archived_5;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::_extensions
	X509ExtensionCollection_t1350454579 * ____extensions_6;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_name
	String_t* ____name_7;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_serial
	String_t* ____serial_8;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::_publicKey
	PublicKey_t3779582684 * ____publicKey_9;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::issuer_name
	X500DistinguishedName_t875709727 * ___issuer_name_10;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::subject_name
	X500DistinguishedName_t875709727 * ___subject_name_11;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::signature_algorithm
	Oid_t3552120260 * ___signature_algorithm_12;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::_cert
	X509Certificate_t489243025 * ____cert_13;

public:
	inline static int32_t get_offset_of__archived_5() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ____archived_5)); }
	inline bool get__archived_5() const { return ____archived_5; }
	inline bool* get_address_of__archived_5() { return &____archived_5; }
	inline void set__archived_5(bool value)
	{
		____archived_5 = value;
	}

	inline static int32_t get_offset_of__extensions_6() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ____extensions_6)); }
	inline X509ExtensionCollection_t1350454579 * get__extensions_6() const { return ____extensions_6; }
	inline X509ExtensionCollection_t1350454579 ** get_address_of__extensions_6() { return &____extensions_6; }
	inline void set__extensions_6(X509ExtensionCollection_t1350454579 * value)
	{
		____extensions_6 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_6), value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier((&____name_7), value);
	}

	inline static int32_t get_offset_of__serial_8() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ____serial_8)); }
	inline String_t* get__serial_8() const { return ____serial_8; }
	inline String_t** get_address_of__serial_8() { return &____serial_8; }
	inline void set__serial_8(String_t* value)
	{
		____serial_8 = value;
		Il2CppCodeGenWriteBarrier((&____serial_8), value);
	}

	inline static int32_t get_offset_of__publicKey_9() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ____publicKey_9)); }
	inline PublicKey_t3779582684 * get__publicKey_9() const { return ____publicKey_9; }
	inline PublicKey_t3779582684 ** get_address_of__publicKey_9() { return &____publicKey_9; }
	inline void set__publicKey_9(PublicKey_t3779582684 * value)
	{
		____publicKey_9 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_9), value);
	}

	inline static int32_t get_offset_of_issuer_name_10() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ___issuer_name_10)); }
	inline X500DistinguishedName_t875709727 * get_issuer_name_10() const { return ___issuer_name_10; }
	inline X500DistinguishedName_t875709727 ** get_address_of_issuer_name_10() { return &___issuer_name_10; }
	inline void set_issuer_name_10(X500DistinguishedName_t875709727 * value)
	{
		___issuer_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_10), value);
	}

	inline static int32_t get_offset_of_subject_name_11() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ___subject_name_11)); }
	inline X500DistinguishedName_t875709727 * get_subject_name_11() const { return ___subject_name_11; }
	inline X500DistinguishedName_t875709727 ** get_address_of_subject_name_11() { return &___subject_name_11; }
	inline void set_subject_name_11(X500DistinguishedName_t875709727 * value)
	{
		___subject_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_11), value);
	}

	inline static int32_t get_offset_of_signature_algorithm_12() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ___signature_algorithm_12)); }
	inline Oid_t3552120260 * get_signature_algorithm_12() const { return ___signature_algorithm_12; }
	inline Oid_t3552120260 ** get_address_of_signature_algorithm_12() { return &___signature_algorithm_12; }
	inline void set_signature_algorithm_12(Oid_t3552120260 * value)
	{
		___signature_algorithm_12 = value;
		Il2CppCodeGenWriteBarrier((&___signature_algorithm_12), value);
	}

	inline static int32_t get_offset_of__cert_13() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ____cert_13)); }
	inline X509Certificate_t489243025 * get__cert_13() const { return ____cert_13; }
	inline X509Certificate_t489243025 ** get_address_of__cert_13() { return &____cert_13; }
	inline void set__cert_13(X509Certificate_t489243025 * value)
	{
		____cert_13 = value;
		Il2CppCodeGenWriteBarrier((&____cert_13), value);
	}
};

struct X509Certificate2_t714049126_StaticFields
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::empty_error
	String_t* ___empty_error_14;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::commonName
	ByteU5BU5D_t4116647657* ___commonName_15;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::email
	ByteU5BU5D_t4116647657* ___email_16;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_t4116647657* ___signedData_17;

public:
	inline static int32_t get_offset_of_empty_error_14() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126_StaticFields, ___empty_error_14)); }
	inline String_t* get_empty_error_14() const { return ___empty_error_14; }
	inline String_t** get_address_of_empty_error_14() { return &___empty_error_14; }
	inline void set_empty_error_14(String_t* value)
	{
		___empty_error_14 = value;
		Il2CppCodeGenWriteBarrier((&___empty_error_14), value);
	}

	inline static int32_t get_offset_of_commonName_15() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126_StaticFields, ___commonName_15)); }
	inline ByteU5BU5D_t4116647657* get_commonName_15() const { return ___commonName_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_commonName_15() { return &___commonName_15; }
	inline void set_commonName_15(ByteU5BU5D_t4116647657* value)
	{
		___commonName_15 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_15), value);
	}

	inline static int32_t get_offset_of_email_16() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126_StaticFields, ___email_16)); }
	inline ByteU5BU5D_t4116647657* get_email_16() const { return ___email_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_email_16() { return &___email_16; }
	inline void set_email_16(ByteU5BU5D_t4116647657* value)
	{
		___email_16 = value;
		Il2CppCodeGenWriteBarrier((&___email_16), value);
	}

	inline static int32_t get_offset_of_signedData_17() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126_StaticFields, ___signedData_17)); }
	inline ByteU5BU5D_t4116647657* get_signedData_17() const { return ___signedData_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_signedData_17() { return &___signedData_17; }
	inline void set_signedData_17(ByteU5BU5D_t4116647657* value)
	{
		___signedData_17 = value;
		Il2CppCodeGenWriteBarrier((&___signedData_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2_T714049126_H
#ifndef X509CERTIFICATECOLLECTION_T3399372417_H
#define X509CERTIFICATECOLLECTION_T3399372417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct  X509CertificateCollection_t3399372417  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3399372417_H
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
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef PLATFORMLOGLEVEL_T1986555967_H
#define PLATFORMLOGLEVEL_T1986555967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.PlatformLogLevel
struct  PlatformLogLevel_t1986555967 
{
public:
	// System.Int32 Firebase.Platform.PlatformLogLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformLogLevel_t1986555967, ___value___1)); }
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
#endif // PLATFORMLOGLEVEL_T1986555967_H
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___1)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___1)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
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
#ifndef SPECIALFOLDER_T3871784040_H
#define SPECIALFOLDER_T3871784040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t3871784040 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t3871784040, ___value___1)); }
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
#endif // SPECIALFOLDER_T3871784040_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___1)); }
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
#endif // FILEMODE_T1183438340_H
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
#endif // ASSEMBLY_T_H
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___1)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
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
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___1)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
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
#ifndef OPENFLAGS_T968238685_H
#define OPENFLAGS_T968238685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OpenFlags
struct  OpenFlags_t968238685 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OpenFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpenFlags_t968238685, ___value___1)); }
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
#endif // OPENFLAGS_T968238685_H
#ifndef STORELOCATION_T2864310644_H
#define STORELOCATION_T2864310644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t2864310644 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreLocation_t2864310644, ___value___1)); }
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
#endif // STORELOCATION_T2864310644_H
#ifndef X509CERTIFICATE2COLLECTION_T2111161276_H
#define X509CERTIFICATE2COLLECTION_T2111161276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct  X509Certificate2Collection_t2111161276  : public X509CertificateCollection_t3399372417
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2COLLECTION_T2111161276_H
#ifndef PRINCIPALPOLICY_T1761212333_H
#define PRINCIPALPOLICY_T1761212333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1761212333 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1761212333, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T1761212333_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
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
#endif // THREADSTATE_T2533302383_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
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
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef U3CU3E__ANONTYPE0_2_T1320635857_H
#define U3CU3E__ANONTYPE0_2_T1320635857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>
struct  U3CU3E__AnonType0_2_t1320635857  : public RuntimeObject
{
public:
	// <Platform>__T <>__AnonType0`2::<Platform>
	int32_t ___U3CPlatformU3E_0;
	// <IsEditor>__T <>__AnonType0`2::<IsEditor>
	bool ___U3CIsEditorU3E_1;

public:
	inline static int32_t get_offset_of_U3CPlatformU3E_0() { return static_cast<int32_t>(offsetof(U3CU3E__AnonType0_2_t1320635857, ___U3CPlatformU3E_0)); }
	inline int32_t get_U3CPlatformU3E_0() const { return ___U3CPlatformU3E_0; }
	inline int32_t* get_address_of_U3CPlatformU3E_0() { return &___U3CPlatformU3E_0; }
	inline void set_U3CPlatformU3E_0(int32_t value)
	{
		___U3CPlatformU3E_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsEditorU3E_1() { return static_cast<int32_t>(offsetof(U3CU3E__AnonType0_2_t1320635857, ___U3CIsEditorU3E_1)); }
	inline bool get_U3CIsEditorU3E_1() const { return ___U3CIsEditorU3E_1; }
	inline bool* get_address_of_U3CIsEditorU3E_1() { return &___U3CIsEditorU3E_1; }
	inline void set_U3CIsEditorU3E_1(bool value)
	{
		___U3CIsEditorU3E_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3E__ANONTYPE0_2_T1320635857_H
#ifndef APPDOMAIN_T1571427825_H
#define APPDOMAIN_T1571427825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t1571427825  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t2008144148 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t223948603 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t1420869192 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t976916018 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t1917735356 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t107971893 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t2775508208 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1348719766 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1348719766 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t2775508208 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t2775508208 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t3101989324 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t2775508208 * ___ReflectionOnlyAssemblyResolve_21;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____evidence_6)); }
	inline Evidence_t2008144148 * get__evidence_6() const { return ____evidence_6; }
	inline Evidence_t2008144148 ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(Evidence_t2008144148 * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____granted_7)); }
	inline PermissionSet_t223948603 * get__granted_7() const { return ____granted_7; }
	inline PermissionSet_t223948603 ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(PermissionSet_t223948603 * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of__domain_manager_11() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____domain_manager_11)); }
	inline AppDomainManager_t1420869192 * get__domain_manager_11() const { return ____domain_manager_11; }
	inline AppDomainManager_t1420869192 ** get_address_of__domain_manager_11() { return &____domain_manager_11; }
	inline void set__domain_manager_11(AppDomainManager_t1420869192 * value)
	{
		____domain_manager_11 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_11), value);
	}

	inline static int32_t get_offset_of__activation_12() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____activation_12)); }
	inline ActivationContext_t976916018 * get__activation_12() const { return ____activation_12; }
	inline ActivationContext_t976916018 ** get_address_of__activation_12() { return &____activation_12; }
	inline void set__activation_12(ActivationContext_t976916018 * value)
	{
		____activation_12 = value;
		Il2CppCodeGenWriteBarrier((&____activation_12), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_13() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____applicationIdentity_13)); }
	inline ApplicationIdentity_t1917735356 * get__applicationIdentity_13() const { return ____applicationIdentity_13; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__applicationIdentity_13() { return &____applicationIdentity_13; }
	inline void set__applicationIdentity_13(ApplicationIdentity_t1917735356 * value)
	{
		____applicationIdentity_13 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_13), value);
	}

	inline static int32_t get_offset_of_AssemblyLoad_14() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___AssemblyLoad_14)); }
	inline AssemblyLoadEventHandler_t107971893 * get_AssemblyLoad_14() const { return ___AssemblyLoad_14; }
	inline AssemblyLoadEventHandler_t107971893 ** get_address_of_AssemblyLoad_14() { return &___AssemblyLoad_14; }
	inline void set_AssemblyLoad_14(AssemblyLoadEventHandler_t107971893 * value)
	{
		___AssemblyLoad_14 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_14), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___AssemblyResolve_15)); }
	inline ResolveEventHandler_t2775508208 * get_AssemblyResolve_15() const { return ___AssemblyResolve_15; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_AssemblyResolve_15() { return &___AssemblyResolve_15; }
	inline void set_AssemblyResolve_15(ResolveEventHandler_t2775508208 * value)
	{
		___AssemblyResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_15), value);
	}

	inline static int32_t get_offset_of_DomainUnload_16() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___DomainUnload_16)); }
	inline EventHandler_t1348719766 * get_DomainUnload_16() const { return ___DomainUnload_16; }
	inline EventHandler_t1348719766 ** get_address_of_DomainUnload_16() { return &___DomainUnload_16; }
	inline void set_DomainUnload_16(EventHandler_t1348719766 * value)
	{
		___DomainUnload_16 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_16), value);
	}

	inline static int32_t get_offset_of_ProcessExit_17() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___ProcessExit_17)); }
	inline EventHandler_t1348719766 * get_ProcessExit_17() const { return ___ProcessExit_17; }
	inline EventHandler_t1348719766 ** get_address_of_ProcessExit_17() { return &___ProcessExit_17; }
	inline void set_ProcessExit_17(EventHandler_t1348719766 * value)
	{
		___ProcessExit_17 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_17), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_18() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___ResourceResolve_18)); }
	inline ResolveEventHandler_t2775508208 * get_ResourceResolve_18() const { return ___ResourceResolve_18; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_ResourceResolve_18() { return &___ResourceResolve_18; }
	inline void set_ResourceResolve_18(ResolveEventHandler_t2775508208 * value)
	{
		___ResourceResolve_18 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_18), value);
	}

	inline static int32_t get_offset_of_TypeResolve_19() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___TypeResolve_19)); }
	inline ResolveEventHandler_t2775508208 * get_TypeResolve_19() const { return ___TypeResolve_19; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_TypeResolve_19() { return &___TypeResolve_19; }
	inline void set_TypeResolve_19(ResolveEventHandler_t2775508208 * value)
	{
		___TypeResolve_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_19), value);
	}

	inline static int32_t get_offset_of_UnhandledException_20() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___UnhandledException_20)); }
	inline UnhandledExceptionEventHandler_t3101989324 * get_UnhandledException_20() const { return ___UnhandledException_20; }
	inline UnhandledExceptionEventHandler_t3101989324 ** get_address_of_UnhandledException_20() { return &___UnhandledException_20; }
	inline void set_UnhandledException_20(UnhandledExceptionEventHandler_t3101989324 * value)
	{
		___UnhandledException_20 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_20), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_21() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___ReflectionOnlyAssemblyResolve_21)); }
	inline ResolveEventHandler_t2775508208 * get_ReflectionOnlyAssemblyResolve_21() const { return ___ReflectionOnlyAssemblyResolve_21; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_ReflectionOnlyAssemblyResolve_21() { return &___ReflectionOnlyAssemblyResolve_21; }
	inline void set_ReflectionOnlyAssemblyResolve_21(ResolveEventHandler_t2775508208 * value)
	{
		___ReflectionOnlyAssemblyResolve_21 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_21), value);
	}
};

struct AppDomain_t1571427825_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1571427825 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1571427825 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1571427825 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1571427825 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
	}
};

struct AppDomain_t1571427825_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t1853889766 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t1853889766 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t1853889766 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	RuntimeObject* ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Hashtable_t1853889766 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Hashtable_t1853889766 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Hashtable_t1853889766 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Hashtable_t1853889766 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Hashtable_t1853889766 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Hashtable_t1853889766 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Hashtable_t1853889766 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Hashtable_t1853889766 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Hashtable_t1853889766 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject* get__principal_9() const { return ____principal_9; }
	inline RuntimeObject** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject* value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAIN_T1571427825_H
#ifndef DLLNOTFOUNDEXCEPTION_T2721418633_H
#define DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2721418633  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t1356862416  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
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
#ifndef ASSEMBLYNAME_T270931938_H
#define ASSEMBLYNAME_T270931938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t270931938  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4157843068 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3456873960 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___cultureinfo_6)); }
	inline CultureInfo_t4157843068 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4157843068 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4157843068 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keypair_9)); }
	inline StrongNameKeyPair_t3411219591 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3411219591 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3411219591 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___publicKey_10)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keyToken_11)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___version_13)); }
	inline Version_t3456873960 * get_version_13() const { return ___version_13; }
	inline Version_t3456873960 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3456873960 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T270931938_H
#ifndef X509STORE_T2922691911_H
#define X509STORE_T2922691911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t2922691911  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t2111161276 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t2777415284 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t2922691911, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t2922691911, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t2922691911, ___list_2)); }
	inline X509Certificate2Collection_t2111161276 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t2111161276 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t2111161276 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t2922691911, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t2922691911, ___store_4)); }
	inline X509Store_t2777415284 * get_store_4() const { return ___store_4; }
	inline X509Store_t2777415284 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t2777415284 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier((&___store_4), value);
	}
};

struct X509Store_t2922691911_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Store::<>f__switch$mapF
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapF_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_5() { return static_cast<int32_t>(offsetof(X509Store_t2922691911_StaticFields, ___U3CU3Ef__switchU24mapF_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapF_5() const { return ___U3CU3Ef__switchU24mapF_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapF_5() { return &___U3CU3Ef__switchU24mapF_5; }
	inline void set_U3CU3Ef__switchU24mapF_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapF_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T2922691911_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
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
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
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
#ifndef EVENTHANDLER_1_T2197675447_H
#define EVENTHANDLER_1_T2197675447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct  EventHandler_1_t2197675447  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2197675447_H
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
#ifndef FUNC_1_T750382504_H
#define FUNC_1_T750382504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<<>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>>
struct  Func_1_t750382504  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T750382504_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef FUNC_1_T1283030885_H
#define FUNC_1_T1283030885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Collections.IEnumerator>
struct  Func_1_t1283030885  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T1283030885_H
#ifndef FUNC_1_T1277197336_H
#define FUNC_1_T1277197336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.String>
struct  Func_1_t1277197336  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T1277197336_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
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
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
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
#ifndef FIREBASEMONOBEHAVIOUR_T148948_H
#define FIREBASEMONOBEHAVIOUR_T148948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseMonoBehaviour
struct  FirebaseMonoBehaviour_t148948  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEMONOBEHAVIOUR_T148948_H
#ifndef SYNCHRONIZATIONCONTEXTBEHAVOIR_T1466989729_H
#define SYNCHRONIZATIONCONTEXTBEHAVOIR_T1466989729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct  SynchronizationContextBehavoir_t1466989729  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::callbackQueue
	Queue_1_t3099366224 * ___callbackQueue_4;

public:
	inline static int32_t get_offset_of_callbackQueue_4() { return static_cast<int32_t>(offsetof(SynchronizationContextBehavoir_t1466989729, ___callbackQueue_4)); }
	inline Queue_1_t3099366224 * get_callbackQueue_4() const { return ___callbackQueue_4; }
	inline Queue_1_t3099366224 ** get_address_of_callbackQueue_4() { return &___callbackQueue_4; }
	inline void set_callbackQueue_4(Queue_1_t3099366224 * value)
	{
		___callbackQueue_4 = value;
		Il2CppCodeGenWriteBarrier((&___callbackQueue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXTBEHAVOIR_T1466989729_H
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
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t2792222854  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Assembly_t * m_Items[1];

public:
	inline Assembly_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Assembly_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t * value)
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


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// T Firebase.Platform.Default.AppConfigExtensions::GetState<System.Object>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AppConfigExtensions_GetState_TisRuntimeObject_m2665465981_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___app0, int32_t ___state1, Dictionary_2_t1754075794 * ___store2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m298111648_gshared (Func_1_t2509852811 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Object>(System.Func`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * FirebaseHandler_RunOnMainThread_TisRuntimeObject_m683650324_gshared (RuntimeObject * __this /* static, unused */, Func_1_t2509852811 * ___f0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m341300652_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m1312746605_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
extern "C" IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t97287965_m1573163647_gshared (RuntimeObject * __this /* static, unused */, Func_1_t3822001908 * ___f0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// <Platform>__T <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>::get_Platform()
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3E__AnonType0_2_get_Platform_m3309620788_gshared (U3CU3E__AnonType0_2_t1320635857 * __this, const RuntimeMethod* method);
// <IsEditor>__T <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>::get_IsEditor()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3E__AnonType0_2_get_IsEditor_m3289126363_gshared (U3CU3E__AnonType0_2_t1320635857 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>::.ctor(<Platform>__T,<IsEditor>__T)
extern "C" IL2CPP_METHOD_ATTR void U3CU3E__AnonType0_2__ctor_m1373264916_gshared (U3CU3E__AnonType0_2_t1320635857 * __this, int32_t p0, bool p1, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Tuple_2__ctor_m2484791289_gshared (Tuple_2_t2713193907 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m3093923125_gshared (Func_1_t2509852811 * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Object,System.Object>::get_Item1()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item1_m2290657792_gshared (Tuple_2_t2713193907 * __this, const RuntimeMethod* method);
// !1 System.Tuple`2<System.Object,System.Object>::get_Item2()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Tuple_2_get_Item2_m606637900_gshared (Tuple_2_t2713193907 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_m865228370 (Queue_1_t1110636971 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1110636971 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m1068113671 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_m3137435436 (Queue_1_t1110636971 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1110636971 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_t1264377477 * Queue_1_Dequeue_m2558054392 (Queue_1_t1110636971 * __this, const RuntimeMethod* method)
{
	return ((  Action_t1264377477 * (*) (Queue_1_t1110636971 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.DebugLogger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugLogger__ctor_m483676623 (DebugLogger_t16656067 * __this, const RuntimeMethod* method);
// T Firebase.Platform.Default.AppConfigExtensions::GetState<System.String>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
inline String_t* AppConfigExtensions_GetState_TisString_t_m229117632 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___app0, int32_t ___state1, Dictionary_2_t521420319 * ___store2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, int32_t, Dictionary_2_t521420319 *, const RuntimeMethod*))AppConfigExtensions_GetState_TisRuntimeObject_m2665465981_gshared)(__this /* static, unused */, ___app0, ___state1, ___store2, method);
}
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_m3069088904 (AppConfigExtensions_t2108028355 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m3834261237 (Dictionary_2_t521420319 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t521420319 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void Firebase.Platform.Default.BaseAuthService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseAuthService__ctor_m4243196943 (BaseAuthService_t3388892161 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SystemClock__ctor_m2096984096 (SystemClock_t2480061955 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m3158203758 (Func_1_t1277197336 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t1277197336 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m298111648_gshared)(__this, p0, p1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.String>(System.Func`1<TResult>)
inline String_t* FirebaseHandler_RunOnMainThread_TisString_t_m3713251534 (RuntimeObject * __this /* static, unused */, Func_1_t1277197336 * ___f0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject * /* static, unused */, Func_1_t1277197336 *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_m683650324_gshared)(__this /* static, unused */, ___f0, method);
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m3178730601 (UnityConfigExtensions_t3428627910 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m1428108154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m2406590934 (FirebaseAppUtilsStub_t1404042752 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
extern "C" IL2CPP_METHOD_ATTR Type_t * FirebaseEditorDispatcher_get_EditorApplicationType_m617316480 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_m3414567179 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___eventField0, Action_t1264377477 * ___callback1, RuntimeObject * ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR FirebaseHandler_t2087675187 * FirebaseHandler_get_DefaultInstance_m1688339179 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_Update_m3612919502 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method);
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
extern "C" IL2CPP_METHOD_ATTR EventInfo_t * Type_GetEvent_m1076785471 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m1197120913 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C" IL2CPP_METHOD_ATTR Type_t * EventInfo_get_EventHandlerType_m420690865 (EventInfo_t * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_CreateDelegate_m995503480 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, MethodInfo_t * p2, const RuntimeMethod* method);
// System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR void EventInfo_AddEventHandler_m1121664596 (EventInfo_t * __this, RuntimeObject * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR void EventInfo_RemoveEventHandler_m3587542425 (EventInfo_t * __this, RuntimeObject * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m3716247980 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_m2541720911 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m1709702929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m335660146 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_m3032022887 (FirebaseHandler_t2087675187 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_m3826356508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m3551186312 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_m542005982 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m3071622864 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m2460171138 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_m2677119794 (RuntimeObject * __this /* static, unused */, int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
extern "C" IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_t1404042752 * FirebaseAppUtilsStub_get_Instance_m3024774869 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_m1726160996 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m2281437871 (RuntimeObject * __this /* static, unused */, bool ___start0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Firebase.Platform.FirebaseMonoBehaviour>()
inline FirebaseMonoBehaviour_t148948 * GameObject_AddComponent_TisFirebaseMonoBehaviour_t148948_m3632638077 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  FirebaseMonoBehaviour_t148948 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m341300652_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_m2862881828 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1312746605 (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m1312746605_gshared)(__this, p0, p1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t97287965_m1573163647 (RuntimeObject * __this /* static, unused */, Func_1_t3822001908 * ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, Func_1_t3822001908 *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t97287965_m1573163647_gshared)(__this /* static, unused */, ___f0, method);
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t1781628575 * FirebaseHandler_get_ThreadDispatcher_m2829853897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
extern "C" IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_m2517286864 (Dispatcher_t1781628575 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_m3011771843 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_m547509157 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___appUtils0, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
extern "C" IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_m1275165385 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Dispatcher::PollJobs()
extern "C" IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m1460709859 (Dispatcher_t1781628575 * __this, const RuntimeMethod* method);
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m545989917 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1658933173 (EventHandler_1_t1515976428 * __this, RuntimeObject * p0, EventArgs_t3591816995 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t1515976428 *, RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method);
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m1233238346 (ApplicationFocusChangedEventArgs_t4273516014 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m549020680 (ApplicationFocusChangedEventArgs_t4273516014 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m138888710 (EventHandler_1_t2197675447 * __this, RuntimeObject * p0, ApplicationFocusChangedEventArgs_t4273516014 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2197675447 *, RuntimeObject *, ApplicationFocusChangedEventArgs_t4273516014 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m806824744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void Firebase.Dispatcher::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dispatcher__ctor_m905638064 (Dispatcher_t1781628575 * __this, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_m1217991575 (RuntimeObject * __this /* static, unused */, Dispatcher_t1781628575 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m3344420633 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
extern "C" IL2CPP_METHOD_ATTR FirebaseHandler_t2087675187 * FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664 (FirebaseMonoBehaviour_t148948 * __this, const RuntimeMethod* method);
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m1800328376 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_m2898243766 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_m1555391810 (FirebaseHandler_t2087675187 * __this, bool ___hasFocus0, const RuntimeMethod* method);
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_m527350058 (RuntimeObject * __this /* static, unused */, FirebaseMonoBehaviour_t148948 * ___behaviour0, const RuntimeMethod* method);
// Firebase.Platform.ILoggingService Firebase.Platform.Services::get_Logging()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Logging_m804118032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.NoopCertificateService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NoopCertificateService__ctor_m2764640504 (NoopCertificateService_t402701936 * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnitySynchronizationContext_t705171362 * UnitySynchronizationContext_get_Instance_m3770060678 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m1172141117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_unityVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m1068543125 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m4077653316 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
extern "C" IL2CPP_METHOD_ATTR void Services_set_AppConfig_m1748368462 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::get_BaseInstance()
extern "C" IL2CPP_METHOD_ATTR BaseAuthService_t3388892161 * BaseAuthService_get_BaseInstance_m134369908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Auth(Firebase.Platform.IAuthService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Auth_m4233926872 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// Firebase.Platform.NoopCertificateService Firebase.Platform.NoopCertificateService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR NoopCertificateService_t402701936 * NoopCertificateService_get_Instance_m3246963339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_RootCerts(Firebase.Platform.ICertificateService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_RootCerts_m1720476539 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Clock_m3997817468 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DebugLogger_t16656067 * DebugLogger_get_Instance_m2859537582 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Logging_m3687381023 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<<>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m3836164377 (Func_1_t750382504 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t750382504 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m298111648_gshared)(__this, p0, p1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<<>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>>(System.Func`1<TResult>)
inline U3CU3E__AnonType0_2_t1320635857 * FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_2_t1320635857_m1614743876 (RuntimeObject * __this /* static, unused */, Func_1_t750382504 * ___f0, const RuntimeMethod* method)
{
	return ((  U3CU3E__AnonType0_2_t1320635857 * (*) (RuntimeObject * /* static, unused */, Func_1_t750382504 *, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_m683650324_gshared)(__this /* static, unused */, ___f0, method);
}
// <Platform>__T <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>::get_Platform()
inline int32_t U3CU3E__AnonType0_2_get_Platform_m3309620788 (U3CU3E__AnonType0_2_t1320635857 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (U3CU3E__AnonType0_2_t1320635857 *, const RuntimeMethod*))U3CU3E__AnonType0_2_get_Platform_m3309620788_gshared)(__this, method);
}
// System.Boolean Firebase.Unity.InstallRootCerts::IsCertBugPresent(UnityEngine.RuntimePlatform)
extern "C" IL2CPP_METHOD_ATTR bool InstallRootCerts_IsCertBugPresent_m1532178560 (RuntimeObject * __this /* static, unused */, int32_t ___platform0, const RuntimeMethod* method);
// <IsEditor>__T <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>::get_IsEditor()
inline bool U3CU3E__AnonType0_2_get_IsEditor_m3289126363 (U3CU3E__AnonType0_2_t1320635857 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (U3CU3E__AnonType0_2_t1320635857 *, const RuntimeMethod*))U3CU3E__AnonType0_2_get_IsEditor_m3289126363_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" IL2CPP_METHOD_ATTR AppDomain_t1571427825 * AppDomain_get_CurrentDomain_m182766250 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
extern "C" IL2CPP_METHOD_ATTR AssemblyU5BU5D_t2792222854* AppDomain_GetAssemblies_m803088943 (AppDomain_t1571427825 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Firebase.Unity.InstallRootCerts::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts__ctor_m4096283895 (InstallRootCerts_t2034015421 * __this, const RuntimeMethod* method);
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExistInternal()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExistInternal_m2964234874 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExist()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExist_m543483911 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m1236881166 (List_1_t1293755103 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Regex_Split_m3767700898 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_m861730954 (List_1_t1293755103 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1293755103 *, ByteU5BU5D_t4116647657*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m147081211 (X509CertificateCollection_t3399372417 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Byte[]> Firebase.Unity.InstallRootCerts::DecodeBase64Blobs(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR List_1_t1293755103 * InstallRootCerts_DecodeBase64Blobs_m1766109208 (RuntimeObject * __this /* static, unused */, String_t* ___base64BlobList0, String_t* ___startLine1, String_t* ___endLine2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t3182998980  List_1_GetEnumerator_m1291754567 (List_1_t1293755103 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3182998980  (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_t4116647657* Enumerator_get_Current_m2908341801 (Enumerator_t3182998980 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (Enumerator_t3182998980 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void X509Certificate2__ctor_m2370196240 (X509Certificate2_t714049126 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_m907905475 (X509CertificateCollection_t3399372417 * __this, X509Certificate_t713131622 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m980036562 (Enumerator_t3182998980 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3182998980 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_m4103594724 (Enumerator_t3182998980 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3182998980 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void StreamReader__ctor_m1047876681 (StreamReader_t4009935899 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCertificateCollectionFromString(System.String)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_DecodeCertificateCollectionFromString_m1749522460 (RuntimeObject * __this /* static, unused */, String_t* ___certString0, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_m1967952270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m2027878391 (TextAsset_t3022178571 * __this, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" IL2CPP_METHOD_ATTR DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
extern "C" IL2CPP_METHOD_ATTR MD5_t3177620429 * MD5_Create_m3522414168 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2825542963 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m3464863163 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
extern "C" IL2CPP_METHOD_ATTR void FileStream__ctor_m2784380556 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m1874693998 (BinaryWriter_t3992595042 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.String System.Reflection.AssemblyName::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m4072373679 (AssemblyName_t270931938 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean Firebase.Unity.InstallRootCerts::get_InstallationRequired()
extern "C" IL2CPP_METHOD_ATTR bool InstallRootCerts_get_InstallationRequired_m617562993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2411720024 (Dictionary_2_t577727232 * __this, RuntimeObject* p0, X509CertificateCollection_t3399372417 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t577727232 *, RuntimeObject*, X509CertificateCollection_t3399372417 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m327623990 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Directory_Exists_m1484791558 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Environment::SetEnvironmentVariable(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Environment_SetEnvironmentVariable_m2152544225 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void Firebase.Unity.InstallRootCerts::HackRefreshMonoRootStore()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_HackRefreshMonoRootStore_m495022385 (InstallRootCerts_t2034015421 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeDefaultCollection()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_DecodeDefaultCollection_m2609779182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCollection(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_DecodeCollection_m2713176867 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___app0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m1744302937 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m2650657275 (X509CertificateCollection_t3399372417 * __this, X509CertificateCollection_t3399372417 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3293937343 (Dictionary_2_t577727232 * __this, RuntimeObject* p0, X509CertificateCollection_t3399372417 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t577727232 *, RuntimeObject*, X509CertificateCollection_t3399372417 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_m1708965601 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method);
// System.Void Firebase.Unity.InstallRootCerts::InstallDefaultCRLs(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_InstallDefaultCRLs_m1774432234 (RuntimeObject * __this /* static, unused */, String_t* ___resource_name0, String_t* ___directory1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void X509Store__ctor_m1685125329 (X509Store_t2922691911 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C" IL2CPP_METHOD_ATTR void X509Store_Open_m909451489 (X509Store_t2922691911 * __this, int32_t p0, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C" IL2CPP_METHOD_ATTR X509Certificate2Collection_t2111161276 * X509Store_get_Certificates_m2149701265 (X509Store_t2922691911 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR X509CertificateEnumerator_t855273292 * X509CertificateCollection_GetEnumerator_m1686475779 (X509CertificateCollection_t3399372417 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR X509Certificate_t713131622 * X509CertificateEnumerator_get_Current_m364341970 (X509CertificateEnumerator_t855273292 * __this, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateCollection_Contains_m2117915971 (X509CertificateCollection_t3399372417 * __this, X509Certificate_t713131622 * p0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" IL2CPP_METHOD_ATTR void X509Store_Add_m571886061 (X509Store_t2922691911 * __this, X509Certificate2_t714049126 * p0, const RuntimeMethod* method);
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m1557350766 (X509CertificateEnumerator_t855273292 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C" IL2CPP_METHOD_ATTR void X509Store_Close_m799536774 (X509Store_t2922691911 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>::.ctor()
inline void Dictionary_2__ctor_m2974843271 (Dictionary_2_t577727232 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t577727232 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean>::.ctor(<Platform>__T,<IsEditor>__T)
inline void U3CU3E__AnonType0_2__ctor_m1373264916 (U3CU3E__AnonType0_2_t1320635857 * __this, int32_t p0, bool p1, const RuntimeMethod* method)
{
	((  void (*) (U3CU3E__AnonType0_2_t1320635857 *, int32_t, bool, const RuntimeMethod*))U3CU3E__AnonType0_2__ctor_m1373264916_gshared)(__this, p0, p1, method);
}
// System.Void Firebase.Unity.UnityHttpFactoryService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityHttpFactoryService__ctor_m3207162680 (UnityHttpFactoryService_t3235819319 * __this, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_m1031280594 (UnityLoggingService_t1821497488 * __this, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m3365938126 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Firebase.Unity.UnityHttpFactoryService Firebase.Unity.UnityHttpFactoryService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnityHttpFactoryService_t3235819319 * UnityHttpFactoryService_get_Instance_m3500013823 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Firebase.Platform.Services::set_HttpFactory(Firebase.Platform.IHttpFactoryService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_HttpFactory_m3128578016 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method);
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnityLoggingService_t1821497488 * UnityLoggingService_get_Instance_m1073141464 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::get_Instance()
extern "C" IL2CPP_METHOD_ATTR InstallRootCerts_t2034015421 * InstallRootCerts_get_Instance_m1253718339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m2514243817 (SynchronizationContext_t2326897723 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir>()
inline SynchronizationContextBehavoir_t1466989729 * GameObject_AddComponent_TisSynchronizationContextBehavoir_t1466989729_m1179237419 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  SynchronizationContextBehavoir_t1466989729 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m341300652_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
extern "C" IL2CPP_METHOD_ATTR Queue_1_t3099366224 * SynchronizationContextBehavoir_get_CallbackQueue_m3137540434 (SynchronizationContextBehavoir_t1466989729 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m1140058627 (UnitySynchronizationContext_t705171362 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::.ctor(!0,!1)
inline void Tuple_2__ctor_m459143963 (Tuple_2_t3253106730 * __this, SendOrPostCallback_t2750080073 * p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t3253106730 *, SendOrPostCallback_t2750080073 *, RuntimeObject *, const RuntimeMethod*))Tuple_2__ctor_m2484791289_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Enqueue(!0)
inline void Queue_1_Enqueue_m3011890621 (Queue_1_t3099366224 * __this, Tuple_2_t3253106730 * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3099366224 *, Tuple_2_t3253106730 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::.ctor()
inline void Dictionary_2__ctor_m22733722 (Dictionary_2_t3634922637 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3634922637 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// !0 System.Func`1<System.Collections.IEnumerator>::Invoke()
inline RuntimeObject* Func_1_Invoke_m537203482 (Func_1_t1283030885 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t1283030885 *, const RuntimeMethod*))Func_1_Invoke_m3093923125_gshared)(__this, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::.ctor()
inline void Queue_1__ctor_m4214835553 (Queue_1_t3099366224 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3099366224 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3663867818 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::get_Count()
inline int32_t Queue_1_get_Count_m1643786144 (Queue_1_t3099366224 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t3099366224 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Dequeue()
inline Tuple_2_t3253106730 * Queue_1_Dequeue_m2436648904 (Queue_1_t3099366224 * __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t3253106730 * (*) (Queue_1_t3099366224 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// !0 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item1()
inline SendOrPostCallback_t2750080073 * Tuple_2_get_Item1_m2108757255 (Tuple_2_t3253106730 * __this, const RuntimeMethod* method)
{
	return ((  SendOrPostCallback_t2750080073 * (*) (Tuple_2_t3253106730 *, const RuntimeMethod*))Tuple_2_get_Item1_m2290657792_gshared)(__this, method);
}
// !1 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item2()
inline RuntimeObject * Tuple_2_get_Item2_m972515913 (Tuple_2_t3253106730 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Tuple_2_t3253106730 *, const RuntimeMethod*))Tuple_2_get_Item2_m606637900_gshared)(__this, method);
}
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m937799800 (SendOrPostCallback_t2750080073 * __this, RuntimeObject * p0, const RuntimeMethod* method);
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
// System.Void Firebase.Dispatcher::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dispatcher__ctor_m905638064 (Dispatcher_t1781628575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dispatcher__ctor_m905638064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1110636971 * L_0 = (Queue_1_t1110636971 *)il2cpp_codegen_object_new(Queue_1_t1110636971_il2cpp_TypeInfo_var);
		Queue_1__ctor_m865228370(L_0, /*hidden argument*/Queue_1__ctor_m865228370_RuntimeMethod_var);
		__this->set_queue_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_1 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m1068113671(L_1, /*hidden argument*/NULL);
		__this->set_ownerThreadId_0(L_2);
		return;
	}
}
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
extern "C" IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_m2517286864 (Dispatcher_t1781628575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dispatcher_ManagesThisThread_m2517286864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_0 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Thread_get_ManagedThreadId_m1068113671(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_ownerThreadId_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void Firebase.Dispatcher::PollJobs()
extern "C" IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m1460709859 (Dispatcher_t1781628575 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Dispatcher_PollJobs_m1460709859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1264377477 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	{
		Queue_1_t1110636971 * L_0 = __this->get_queue_1();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1110636971 * L_2 = __this->get_queue_1();
			NullCheck(L_2);
			int32_t L_3 = Queue_1_get_Count_m3137435436(L_2, /*hidden argument*/Queue_1_get_Count_m3137435436_RuntimeMethod_var);
			if ((((int32_t)L_3) <= ((int32_t)0)))
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			Queue_1_t1110636971 * L_4 = __this->get_queue_1();
			NullCheck(L_4);
			Action_t1264377477 * L_5 = Queue_1_Dequeue_m2558054392(L_4, /*hidden argument*/Queue_1_Dequeue_m2558054392_RuntimeMethod_var);
			V_0 = L_5;
			goto IL_0034;
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0039);
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x40, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0040:
	{
		Action_t1264377477 * L_7 = V_0;
		NullCheck(L_7);
		Action_Invoke_m937035532(L_7, /*hidden argument*/NULL);
		goto IL_0000;
	}

IL_004b:
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
// System.Void Firebase.Platform.DebugLogger::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugLogger__ctor_m483676623 (DebugLogger_t16656067 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DebugLogger_t16656067 * DebugLogger_get_Instance_m2859537582 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugLogger_get_Instance_m2859537582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DebugLogger_t16656067_il2cpp_TypeInfo_var);
		DebugLogger_t16656067 * L_0 = ((DebugLogger_t16656067_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t16656067_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.DebugLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void DebugLogger_LogMessage_m1652799040 (DebugLogger_t16656067 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Firebase.Platform.DebugLogger::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DebugLogger__cctor_m536062409 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugLogger__cctor_m536062409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DebugLogger_t16656067 * L_0 = (DebugLogger_t16656067 *)il2cpp_codegen_object_new(DebugLogger_t16656067_il2cpp_TypeInfo_var);
		DebugLogger__ctor_m483676623(L_0, /*hidden argument*/NULL);
		((DebugLogger_t16656067_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t16656067_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_m3069088904 (AppConfigExtensions_t2108028355 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m4077653316 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppConfigExtensions_get_Instance_m4077653316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var);
		AppConfigExtensions_t2108028355 * L_0 = ((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->get__instance_3();
		return L_0;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetWriteablePath_m2582474733 (AppConfigExtensions_t2108028355 * __this, RuntimeObject* ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppConfigExtensions_GetWriteablePath_m2582474733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetCertPemFile(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetCertPemFile_m3506109383 (AppConfigExtensions_t2108028355 * __this, RuntimeObject* ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppConfigExtensions_GetCertPemFile_m3506109383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var);
		Dictionary_2_t521420319 * L_1 = ((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->get_SStringState_4();
		String_t* L_2 = AppConfigExtensions_GetState_TisString_t_m229117632(NULL /*static, unused*/, L_0, 5, L_1, /*hidden argument*/AppConfigExtensions_GetState_TisString_t_m229117632_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AppConfigExtensions__cctor_m3145927757 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppConfigExtensions__cctor_m3145927757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t100236324 * L_0 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_0, _stringLiteral43951709, /*hidden argument*/NULL);
		((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->set_DefaultUpdateUrl_0(L_0);
		((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->set_Default_1(_stringLiteral3673082043);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_1, /*hidden argument*/NULL);
		((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->set_Sync_2(L_1);
		AppConfigExtensions_t2108028355 * L_2 = (AppConfigExtensions_t2108028355 *)il2cpp_codegen_object_new(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_m3069088904(L_2, /*hidden argument*/NULL);
		((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->set__instance_3(L_2);
		Dictionary_2_t521420319 * L_3 = (Dictionary_2_t521420319 *)il2cpp_codegen_object_new(Dictionary_2_t521420319_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3834261237(L_3, /*hidden argument*/Dictionary_2__ctor_m3834261237_RuntimeMethod_var);
		((AppConfigExtensions_t2108028355_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var))->set_SStringState_4(L_3);
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
// System.Void Firebase.Platform.Default.BaseAuthService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseAuthService__ctor_m4243196943 (BaseAuthService_t3388892161 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::get_BaseInstance()
extern "C" IL2CPP_METHOD_ATTR BaseAuthService_t3388892161 * BaseAuthService_get_BaseInstance_m134369908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseAuthService_get_BaseInstance_m134369908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseAuthService_t3388892161_il2cpp_TypeInfo_var);
		BaseAuthService_t3388892161 * L_0 = ((BaseAuthService_t3388892161_StaticFields*)il2cpp_codegen_static_fields_for(BaseAuthService_t3388892161_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.BaseAuthService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void BaseAuthService__cctor_m507616607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseAuthService__cctor_m507616607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseAuthService_t3388892161 * L_0 = (BaseAuthService_t3388892161 *)il2cpp_codegen_object_new(BaseAuthService_t3388892161_il2cpp_TypeInfo_var);
		BaseAuthService__ctor_m4243196943(L_0, /*hidden argument*/NULL);
		((BaseAuthService_t3388892161_StaticFields*)il2cpp_codegen_static_fields_for(BaseAuthService_t3388892161_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SystemClock__ctor_m2096984096 (SystemClock_t2480061955 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.SystemClock::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SystemClock__cctor_m1105671335 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SystemClock__cctor_m1105671335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemClock_t2480061955 * L_0 = (SystemClock_t2480061955 *)il2cpp_codegen_object_new(SystemClock_t2480061955_il2cpp_TypeInfo_var);
		SystemClock__ctor_m2096984096(L_0, /*hidden argument*/NULL);
		((SystemClock_t2480061955_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t2480061955_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m3178730601 (UnityConfigExtensions_t3428627910 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityConfigExtensions__ctor_m3178730601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_m3069088904(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m3365938126 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityConfigExtensions_get_DefaultInstance_m3365938126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var);
		UnityConfigExtensions_t3428627910 * L_0 = ((UnityConfigExtensions_t3428627910_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var))->get__instance_5();
		return L_0;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityConfigExtensions_GetWriteablePath_m1223125578 (UnityConfigExtensions_t3428627910 * __this, RuntimeObject* ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityConfigExtensions_GetWriteablePath_m1223125578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var);
		Func_1_t1277197336 * L_0 = ((UnityConfigExtensions_t3428627910_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)UnityConfigExtensions_U3CGetWriteablePathU3Em__0_m4259552419_RuntimeMethod_var;
		Func_1_t1277197336 * L_2 = (Func_1_t1277197336 *)il2cpp_codegen_object_new(Func_1_t1277197336_il2cpp_TypeInfo_var);
		Func_1__ctor_m3158203758(L_2, NULL, L_1, /*hidden argument*/Func_1__ctor_m3158203758_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var);
		((UnityConfigExtensions_t3428627910_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var);
		Func_1_t1277197336 * L_3 = ((UnityConfigExtensions_t3428627910_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		String_t* L_4 = FirebaseHandler_RunOnMainThread_TisString_t_m3713251534(NULL /*static, unused*/, L_3, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisString_t_m3713251534_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UnityConfigExtensions__cctor_m2097482257 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityConfigExtensions__cctor_m2097482257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityConfigExtensions_t3428627910 * L_0 = (UnityConfigExtensions_t3428627910 *)il2cpp_codegen_object_new(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var);
		UnityConfigExtensions__ctor_m3178730601(L_0, /*hidden argument*/NULL);
		((UnityConfigExtensions_t3428627910_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var))->set__instance_5(L_0);
		return;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions::<GetWriteablePath>m__0()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityConfigExtensions_U3CGetWriteablePathU3Em__0_m4259552419 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
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
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m2406590934 (FirebaseAppUtilsStub_t1404042752 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
extern "C" IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_t1404042752 * FirebaseAppUtilsStub_get_Instance_m3024774869 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtilsStub_get_Instance_m3024774869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtilsStub_t1404042752_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_t1404042752 * L_0 = ((FirebaseAppUtilsStub_t1404042752_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_t1404042752_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::TranslateDllNotFoundException(System.Action)
extern "C" IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_TranslateDllNotFoundException_m2271242792 (FirebaseAppUtilsStub_t1404042752 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	{
		Action_t1264377477 * L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::PollCallbacks()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_PollCallbacks_m3459525170 (FirebaseAppUtilsStub_t1404042752 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppPlatform Firebase.Platform.FirebaseAppUtilsStub::GetDefaultInstance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FirebaseAppUtilsStub_GetDefaultInstance_m3941204636 (FirebaseAppUtilsStub_t1404042752 * __this, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Firebase.Platform.FirebaseAppUtilsStub::GetDefaultInstanceName()
extern "C" IL2CPP_METHOD_ATTR String_t* FirebaseAppUtilsStub_GetDefaultInstanceName_m2557013547 (FirebaseAppUtilsStub_t1404042752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtilsStub_GetDefaultInstanceName_m2557013547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral302891385;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtilsStub::GetLogLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t FirebaseAppUtilsStub_GetLogLevel_m3533006515 (FirebaseAppUtilsStub_t1404042752 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.cctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__cctor_m2956189889 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseAppUtilsStub__cctor_m2956189889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtilsStub_t1404042752 * L_0 = (FirebaseAppUtilsStub_t1404042752 *)il2cpp_codegen_object_new(FirebaseAppUtilsStub_t1404042752_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub__ctor_m2406590934(L_0, /*hidden argument*/NULL);
		((FirebaseAppUtilsStub_t1404042752_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_t1404042752_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
extern "C" IL2CPP_METHOD_ATTR Type_t * FirebaseEditorDispatcher_get_EditorApplicationType_m617316480 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_get_EditorApplicationType_m617316480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, _stringLiteral2838599127, "Firebase.Platform, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_0;
		Type_t * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_m2541720911 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_get_EditorIsPlaying_m2541720911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	{
		Type_t * L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m617316480(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t * L_3 = Type_GetProperty_m3414567179(L_2, _stringLiteral513768872, /*hidden argument*/NULL);
		V_1 = L_3;
		PropertyInfo_t * L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return ((*(bool*)((bool*)UnBox(L_6, Boolean_t97287965_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_m3826356508 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_m3826356508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	PropertyInfo_t * V_1 = NULL;
	{
		Type_t * L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m617316480(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t * L_3 = Type_GetProperty_m3414567179(L_2, _stringLiteral2436225465, /*hidden argument*/NULL);
		V_1 = L_3;
		PropertyInfo_t * L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_6 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_t2843939325*)(ObjectU5BU5D_t2843939325*)NULL);
		return ((*(bool*)((bool*)UnBox(L_6, Boolean_t97287965_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_m542005982 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_StartEditorUpdate_m542005982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	FieldInfo_t * G_B3_0 = NULL;
	FieldInfo_t * G_B2_0 = NULL;
	{
		Type_t * L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m617316480(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t * L_3 = Type_GetField_m2961003358(L_2, _stringLiteral1590298475, /*hidden argument*/NULL);
		Action_t1264377477 * L_4 = ((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		intptr_t L_5 = (intptr_t)FirebaseEditorDispatcher_Update_m1938555897_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, NULL, L_5, /*hidden argument*/NULL);
		((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_0(L_6);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_t1264377477 * L_7 = ((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608(NULL /*static, unused*/, G_B3_0, L_7, NULL, (bool)1, _stringLiteral43171701, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m1709702929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_StopEditorUpdate_m1709702929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	FieldInfo_t * G_B3_0 = NULL;
	FieldInfo_t * G_B2_0 = NULL;
	{
		Type_t * L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m617316480(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t * L_3 = Type_GetField_m2961003358(L_2, _stringLiteral1590298475, /*hidden argument*/NULL);
		Action_t1264377477 * L_4 = ((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_1();
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		intptr_t L_5 = (intptr_t)FirebaseEditorDispatcher_Update_m1938555897_RuntimeMethod_var;
		Action_t1264377477 * L_6 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_6, NULL, L_5, /*hidden argument*/NULL);
		((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_1(L_6);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_t1264377477 * L_7 = ((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_1();
		FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608(NULL /*static, unused*/, G_B3_0, L_7, NULL, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Update()
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Update_m1938555897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_Update_m1938555897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_0 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		FirebaseHandler_Update_m3612919502(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m2281437871 (RuntimeObject * __this /* static, unused */, bool ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_ListenToPlayState_m2281437871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	EventInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	MethodInfo_t * V_3 = NULL;
	Delegate_t1188392813 * V_4 = NULL;
	FieldInfo_t * V_5 = NULL;
	Action_t1264377477 * V_6 = NULL;
	bool V_7 = false;
	{
		Type_t * L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m617316480(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		EventInfo_t * L_3 = Type_GetEvent_m1076785471(L_2, _stringLiteral4181821397, /*hidden argument*/NULL);
		V_1 = L_3;
		EventInfo_t * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, _stringLiteral687006496, "Firebase.Platform, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_2 = L_5;
		Type_t * L_6 = V_2;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (FirebaseEditorDispatcher_t2959270802_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		MethodInfo_t * L_9 = Type_GetMethod_m1197120913(L_8, _stringLiteral644167244, ((int32_t)40), /*hidden argument*/NULL);
		V_3 = L_9;
		MethodInfo_t * L_10 = V_3;
		TypeU5BU5D_t3940880105* L_11 = (TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t3940880105* L_12 = L_11;
		Type_t * L_13 = V_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_13);
		NullCheck(L_10);
		MethodInfo_t * L_14 = VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t3940880105* >::Invoke(32 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_10, L_12);
		V_3 = L_14;
		EventInfo_t * L_15 = V_1;
		NullCheck(L_15);
		Type_t * L_16 = EventInfo_get_EventHandlerType_m420690865(L_15, /*hidden argument*/NULL);
		MethodInfo_t * L_17 = V_3;
		Delegate_t1188392813 * L_18 = Delegate_CreateDelegate_m995503480(NULL /*static, unused*/, L_16, NULL, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		bool L_19 = ___start0;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		EventInfo_t * L_20 = V_1;
		Delegate_t1188392813 * L_21 = V_4;
		NullCheck(L_20);
		EventInfo_AddEventHandler_m1121664596(L_20, NULL, L_21, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_007a:
	{
		EventInfo_t * L_22 = V_1;
		Delegate_t1188392813 * L_23 = V_4;
		NullCheck(L_22);
		EventInfo_RemoveEventHandler_m3587542425(L_22, NULL, L_23, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}

IL_0084:
	{
		Type_t * L_24 = V_0;
		NullCheck(L_24);
		FieldInfo_t * L_25 = Type_GetField_m2961003358(L_24, _stringLiteral4180665013, /*hidden argument*/NULL);
		V_5 = L_25;
		Action_t1264377477 * L_26 = ((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_2();
		if (L_26)
		{
			goto IL_00a9;
		}
	}
	{
		intptr_t L_27 = (intptr_t)FirebaseEditorDispatcher_PlayModeStateChanged_m4079403325_RuntimeMethod_var;
		Action_t1264377477 * L_28 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_28, NULL, L_27, /*hidden argument*/NULL);
		((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_2(L_28);
	}

IL_00a9:
	{
		Action_t1264377477 * L_29 = ((FirebaseEditorDispatcher_t2959270802_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_t2959270802_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_2();
		V_6 = L_29;
		bool L_30 = ___start0;
		V_7 = L_30;
		FieldInfo_t * L_31 = V_5;
		Action_t1264377477 * L_32 = V_6;
		bool L_33 = V_7;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608(NULL /*static, unused*/, L_31, L_32, NULL, L_33, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::PlayModeStateChanged()
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_PlayModeStateChanged_m4079403325 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_PlayModeStateChanged_m4079403325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_0 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = FirebaseHandler_get_IsPlayMode_m3716247980(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2 = FirebaseEditorDispatcher_get_EditorIsPlaying_m2541720911(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_m1709702929(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_3 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		FirebaseHandler_StartMonoBehaviour_m335660146(L_3, /*hidden argument*/NULL);
		FirebaseHandler_t2087675187 * L_4 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		FirebaseHandler_set_IsPlayMode_m3032022887(L_4, (bool)1, /*hidden argument*/NULL);
		goto IL_006b;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_5 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = FirebaseHandler_get_IsPlayMode_m3716247980(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		bool L_7 = FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_m3826356508(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_8 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		FirebaseHandler_StopMonoBehaviour_m3551186312(L_8, /*hidden argument*/NULL);
		FirebaseEditorDispatcher_StartEditorUpdate_m542005982(NULL /*static, unused*/, /*hidden argument*/NULL);
		FirebaseHandler_t2087675187 * L_9 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		FirebaseHandler_set_IsPlayMode_m3032022887(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608 (RuntimeObject * __this /* static, unused */, FieldInfo_t * ___eventField0, Action_t1264377477 * ___callback1, RuntimeObject * ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseEditorDispatcher_AddRemoveCallbackToField_m66072608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t1188392813 * V_0 = NULL;
	Delegate_t1188392813 * V_1 = NULL;
	Delegate_t1188392813 * V_2 = NULL;
	{
		FieldInfo_t * L_0 = ___eventField0;
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t * L_1 = ___eventField0;
		NullCheck(L_1);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_1, NULL);
		V_0 = ((Delegate_t1188392813 *)IsInstClass((RuntimeObject*)L_2, Delegate_t1188392813_il2cpp_TypeInfo_var));
		bool L_3 = ___add3;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		FieldInfo_t * L_4 = ___eventField0;
		NullCheck(L_4);
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_4);
		RuntimeObject * L_6 = ___target2;
		Action_t1264377477 * L_7 = ___callback1;
		NullCheck(L_7);
		MethodInfo_t * L_8 = Delegate_get_Method_m3071622864(L_7, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_9 = Delegate_CreateDelegate_m995503480(NULL /*static, unused*/, L_5, L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Delegate_t1188392813 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		FieldInfo_t * L_11 = ___eventField0;
		Delegate_t1188392813 * L_12 = V_0;
		Delegate_t1188392813 * L_13 = V_1;
		Delegate_t1188392813 * L_14 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		FieldInfo_SetValue_m2460171138(L_11, NULL, L_14, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_0045:
	{
		FieldInfo_t * L_15 = ___eventField0;
		Delegate_t1188392813 * L_16 = V_1;
		NullCheck(L_15);
		FieldInfo_SetValue_m2460171138(L_15, NULL, L_16, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}

IL_004e:
	{
		Delegate_t1188392813 * L_17 = V_0;
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t * L_18 = ___eventField0;
		NullCheck(L_18);
		Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		RuntimeObject * L_20 = ___target2;
		Action_t1264377477 * L_21 = ___callback1;
		NullCheck(L_21);
		MethodInfo_t * L_22 = Delegate_get_Method_m3071622864(L_21, /*hidden argument*/NULL);
		Delegate_t1188392813 * L_23 = Delegate_CreateDelegate_m995503480(NULL /*static, unused*/, L_19, L_20, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		FieldInfo_t * L_24 = ___eventField0;
		Delegate_t1188392813 * L_25 = V_0;
		Delegate_t1188392813 * L_26 = V_2;
		Delegate_t1188392813 * L_27 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		FieldInfo_SetValue_m2460171138(L_24, NULL, L_27, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		String_t* L_28 = ___errorMessage4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_30 = ___errorMessage4;
		FirebaseLogger_LogMessage_m2677119794(NULL /*static, unused*/, 4, L_30, /*hidden argument*/NULL);
	}

IL_008a:
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
// System.Void Firebase.Platform.FirebaseHandler::.cctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler__cctor_m4189658711 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler__cctor_m4189658711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAppUtilsStub_t1404042752_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_t1404042752 * L_0 = FirebaseAppUtilsStub_get_Instance_m3024774869(NULL /*static, unused*/, /*hidden argument*/NULL);
		FirebaseHandler_set_AppUtils_m1726160996(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m3344420633 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = FirebaseEditorDispatcher_get_EditorIsPlaying_m2541720911(NULL /*static, unused*/, /*hidden argument*/NULL);
		FirebaseHandler_set_IsPlayMode_m3032022887(__this, L_1, /*hidden argument*/NULL);
		FirebaseEditorDispatcher_ListenToPlayState_m2281437871(NULL /*static, unused*/, (bool)1, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0026:
	{
		FirebaseHandler_set_IsPlayMode_m3032022887(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_002d:
	{
		bool L_2 = FirebaseHandler_get_IsPlayMode_m3716247980(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		FirebaseHandler_StartMonoBehaviour_m335660146(__this, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0043:
	{
		FirebaseEditorDispatcher_StartEditorUpdate_m542005982(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m545989917 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_get_AppUtils_m545989917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_U3CAppUtilsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_m1726160996 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_set_AppUtils_m1726160996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_U3CAppUtilsU3Ek__BackingField_1(L_0);
		return;
	}
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
extern "C" IL2CPP_METHOD_ATTR Dispatcher_t1781628575 * FirebaseHandler_get_ThreadDispatcher_m2829853897 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_get_ThreadDispatcher_m2829853897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		Dispatcher_t1781628575 * L_0 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_U3CThreadDispatcherU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_m1217991575 (RuntimeObject * __this /* static, unused */, Dispatcher_t1781628575 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_set_ThreadDispatcher_m1217991575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_t1781628575 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_U3CThreadDispatcherU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m3716247980 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsPlayModeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_m3032022887 (FirebaseHandler_t2087675187 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsPlayModeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m335660146 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_StartMonoBehaviour_m335660146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_0 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseHandler_4();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_firebaseHandler_4(__this);
	}

IL_0010:
	{
		GameObject_t1113636619 * L_1 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_1, _stringLiteral260525481, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		NullCheck(L_2);
		FirebaseMonoBehaviour_t148948 * L_3 = GameObject_AddComponent_TisFirebaseMonoBehaviour_t148948_m3632638077(L_2, /*hidden argument*/GameObject_AddComponent_TisFirebaseMonoBehaviour_t148948_m3632638077_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_firebaseMonoBehaviour_0(L_3);
		GameObject_t1113636619 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Create_m2862881828(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m3551186312 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_StopMonoBehaviour_m3551186312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t148948 * L_0 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		Func_1_t3822001908 * L_2 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		intptr_t L_3 = (intptr_t)FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m1161125284_RuntimeMethod_var;
		Func_1_t3822001908 * L_4 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m1312746605(L_4, NULL, L_3, /*hidden argument*/Func_1__ctor_m1312746605_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_7(L_4);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		Func_1_t3822001908 * L_5 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_7();
		FirebaseHandler_RunOnMainThread_TisBoolean_t97287965_m1573163647(NULL /*static, unused*/, L_5, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisBoolean_t97287965_m1573163647_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::IsMainThread()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseHandler_IsMainThread_m3926971380 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_IsMainThread_m3926971380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		Dispatcher_t1781628575 * L_0 = FirebaseHandler_get_ThreadDispatcher_m2829853897(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		Dispatcher_t1781628575 * L_1 = FirebaseHandler_get_ThreadDispatcher_m2829853897(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = Dispatcher_ManagesThisThread_m2517286864(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::add_Updated(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_add_Updated_m3059867217 (FirebaseHandler_t2087675187 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_add_Updated_m3059867217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_Updated_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_Updated_5();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::remove_Updated(System.EventHandler`1<System.EventArgs>)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_remove_Updated_m3046119671 (FirebaseHandler_t2087675187 * __this, EventHandler_1_t1515976428 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_remove_Updated_m3046119671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t1515976428 * V_0 = NULL;
	EventHandler_1_t1515976428 * V_1 = NULL;
	{
		EventHandler_1_t1515976428 * L_0 = __this->get_Updated_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t1515976428 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t1515976428 ** L_2 = __this->get_address_of_Updated_5();
		EventHandler_1_t1515976428 * L_3 = V_1;
		EventHandler_1_t1515976428 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_t1515976428 * L_6 = V_0;
		EventHandler_1_t1515976428 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t1515976428 *>((EventHandler_1_t1515976428 **)L_2, ((EventHandler_1_t1515976428 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_t1515976428_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t1515976428 * L_8 = V_0;
		EventHandler_1_t1515976428 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t1515976428 *)L_8) == ((RuntimeObject*)(EventHandler_1_t1515976428 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR FirebaseHandler_t2087675187 * FirebaseHandler_get_DefaultInstance_m1688339179 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_get_DefaultInstance_m1688339179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_0 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseHandler_4();
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_m547509157 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___appUtils0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_CreatePartialOnMainThread_m547509157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * V_0 = NULL;
	{
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * L_0 = (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 *)il2cpp_codegen_object_new(U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004_il2cpp_TypeInfo_var);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_m3011771843(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * L_1 = V_0;
		RuntimeObject* L_2 = ___appUtils0;
		NullCheck(L_1);
		L_1->set_appUtils_0(L_2);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->get_appUtils_0();
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m2289986178_RuntimeMethod_var;
		Action_t1264377477 * L_7 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_t1264377477 * >::Invoke(0 /* System.Void Firebase.Platform.IFirebaseAppUtils::TranslateDllNotFoundException(System.Action) */, IFirebaseAppUtils_t1304256382_il2cpp_TypeInfo_var, L_4, L_7);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_Create_m3345307180 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___appUtils0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_Create_m3345307180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___appUtils0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_m547509157(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityPlatformServices_SetupServices_m1275165385(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Update()
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_Update_m3612919502 (FirebaseHandler_t2087675187 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_Update_m3612919502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		Dispatcher_t1781628575 * L_0 = FirebaseHandler_get_ThreadDispatcher_m2829853897(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dispatcher_PollJobs_m1460709859(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = FirebaseHandler_get_AppUtils_m545989917(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Firebase.Platform.IFirebaseAppUtils::PollCallbacks() */, IFirebaseAppUtils_t1304256382_il2cpp_TypeInfo_var, L_1);
		EventHandler_1_t1515976428 * L_2 = __this->get_Updated_5();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		EventHandler_1_t1515976428 * L_3 = __this->get_Updated_5();
		NullCheck(L_3);
		EventHandler_1_Invoke_m1658933173(L_3, __this, (EventArgs_t3591816995 *)NULL, /*hidden argument*/EventHandler_1_Invoke_m1658933173_RuntimeMethod_var);
	}

IL_002c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_m1555391810 (FirebaseHandler_t2087675187 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_OnApplicationFocus_m1555391810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ApplicationFocusChangedEventArgs_t4273516014 * V_0 = NULL;
	{
		EventHandler_1_t2197675447 * L_0 = __this->get_ApplicationFocusChanged_6();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		EventHandler_1_t2197675447 * L_1 = __this->get_ApplicationFocusChanged_6();
		ApplicationFocusChangedEventArgs_t4273516014 * L_2 = (ApplicationFocusChangedEventArgs_t4273516014 *)il2cpp_codegen_object_new(ApplicationFocusChangedEventArgs_t4273516014_il2cpp_TypeInfo_var);
		ApplicationFocusChangedEventArgs__ctor_m1233238346(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		ApplicationFocusChangedEventArgs_t4273516014 * L_3 = V_0;
		bool L_4 = ___hasFocus0;
		NullCheck(L_3);
		ApplicationFocusChangedEventArgs_set_HasFocus_m549020680(L_3, L_4, /*hidden argument*/NULL);
		ApplicationFocusChangedEventArgs_t4273516014 * L_5 = V_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_m138888710(L_1, NULL, L_5, /*hidden argument*/EventHandler_1_Invoke_m138888710_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
extern "C" IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_m527350058 (RuntimeObject * __this /* static, unused */, FirebaseMonoBehaviour_t148948 * ___behaviour0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_OnMonoBehaviourDestroyed_m527350058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseMonoBehaviour_t148948 * L_0 = ___behaviour0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t148948 * L_1 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_firebaseMonoBehaviour_0((FirebaseMonoBehaviour_t148948 *)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::<StopMonoBehaviour>m__0()
extern "C" IL2CPP_METHOD_ATTR bool FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m1161125284 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m1161125284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t148948 * L_0 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Destroy_m806824744(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t148948 * L_2 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseMonoBehaviour_0();
		NullCheck(L_2);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return (bool)1;
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
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_m3011771843 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m2289986178 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t2085242004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m2289986178_MetadataUsageId);
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
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (FirebaseHandler_t2087675187_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
			FirebaseHandler_t2087675187 * L_3 = ((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->get_firebaseHandler_4();
			if (!L_3)
			{
				goto IL_0020;
			}
		}

IL_001b:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}

IL_0020:
		{
			RuntimeObject* L_4 = __this->get_appUtils_0();
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
			FirebaseHandler_set_AppUtils_m1726160996(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			Dispatcher_t1781628575 * L_5 = FirebaseHandler_get_ThreadDispatcher_m2829853897(NULL /*static, unused*/, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_003f;
			}
		}

IL_0035:
		{
			Dispatcher_t1781628575 * L_6 = (Dispatcher_t1781628575 *)il2cpp_codegen_object_new(Dispatcher_t1781628575_il2cpp_TypeInfo_var);
			Dispatcher__ctor_m905638064(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
			FirebaseHandler_set_ThreadDispatcher_m1217991575(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		}

IL_003f:
		{
			FirebaseHandler_t2087675187 * L_7 = (FirebaseHandler_t2087675187 *)il2cpp_codegen_object_new(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
			FirebaseHandler__ctor_m3344420633(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
			((FirebaseHandler_t2087675187_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var))->set_firebaseHandler_4(L_7);
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
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
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m1233238346 (ApplicationFocusChangedEventArgs_t4273516014 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ApplicationFocusChangedEventArgs__ctor_m1233238346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m549020680 (ApplicationFocusChangedEventArgs_t4273516014 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasFocusU3Ek__BackingField_1(L_0);
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
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_m2677119794 (RuntimeObject * __this /* static, unused */, int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseLogger_LogMessage_m2677119794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = FirebaseHandler_get_AppUtils_m545989917(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* Firebase.Platform.PlatformLogLevel Firebase.Platform.IFirebaseAppUtils::GetLogLevel() */, IFirebaseAppUtils_t1304256382_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___logLevel0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_4 = ___logLevel0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0036:
	{
		String_t* L_5 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0041:
	{
		String_t* L_6 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_004c:
	{
		String_t* L_7 = ___message1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0057:
	{
		goto IL_005c;
	}

IL_005c:
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
// System.Void Firebase.Platform.FirebaseMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour__ctor_m4193140189 (FirebaseMonoBehaviour_t148948 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
extern "C" IL2CPP_METHOD_ATTR FirebaseHandler_t2087675187 * FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664 (FirebaseMonoBehaviour_t148948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHandler_t2087675187 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_t2087675187 * L_0 = FirebaseHandler_get_DefaultInstance_m1688339179(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseHandler_t2087675187 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		FirebaseHandler_t2087675187 * L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnEnable_m1488450258 (FirebaseMonoBehaviour_t148948 * __this, const RuntimeMethod* method)
{
	{
		FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::Update()
extern "C" IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_Update_m2385807287 (FirebaseMonoBehaviour_t148948 * __this, const RuntimeMethod* method)
{
	FirebaseHandler_t2087675187 * V_0 = NULL;
	{
		FirebaseHandler_t2087675187 * L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseHandler_t2087675187 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		float L_2 = PlatformInformation_get_RealtimeSinceStartup_m1800328376(NULL /*static, unused*/, /*hidden argument*/NULL);
		PlatformInformation_set_RealtimeSinceStartupSafe_m2898243766(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		FirebaseHandler_t2087675187 * L_3 = V_0;
		NullCheck(L_3);
		FirebaseHandler_Update_m3612919502(L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnApplicationFocus(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnApplicationFocus_m3350416462 (FirebaseMonoBehaviour_t148948 * __this, bool ___hasFocus0, const RuntimeMethod* method)
{
	FirebaseHandler_t2087675187 * V_0 = NULL;
	{
		FirebaseHandler_t2087675187 * L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m3264570664(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseHandler_t2087675187 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		FirebaseHandler_t2087675187 * L_2 = V_0;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		FirebaseHandler_OnApplicationFocus_m1555391810(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnDestroy_m2329344138 (FirebaseMonoBehaviour_t148948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseMonoBehaviour_OnDestroy_m2329344138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		FirebaseHandler_OnMonoBehaviourDestroyed_m527350058(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
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
// System.Void Firebase.Platform.NoopCertificateService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NoopCertificateService__ctor_m2764640504 (NoopCertificateService_t402701936 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.NoopCertificateService Firebase.Platform.NoopCertificateService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR NoopCertificateService_t402701936 * NoopCertificateService_get_Instance_m3246963339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoopCertificateService_get_Instance_m3246963339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NoopCertificateService_t402701936_il2cpp_TypeInfo_var);
		NoopCertificateService_t402701936 * L_0 = ((NoopCertificateService_t402701936_StaticFields*)il2cpp_codegen_static_fields_for(NoopCertificateService_t402701936_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Platform.NoopCertificateService::Install(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * NoopCertificateService_Install_m3247800666 (NoopCertificateService_t402701936 * __this, RuntimeObject* ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoopCertificateService_Install_m3247800666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_0, 3, _stringLiteral1082995291);
		return (X509CertificateCollection_t3399372417 *)NULL;
	}
}
// System.Void Firebase.Platform.NoopCertificateService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void NoopCertificateService__cctor_m1411054893 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NoopCertificateService__cctor_m1411054893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NoopCertificateService_t402701936 * L_0 = (NoopCertificateService_t402701936 *)il2cpp_codegen_object_new(NoopCertificateService_t402701936_il2cpp_TypeInfo_var);
		NoopCertificateService__ctor_m2764640504(L_0, /*hidden argument*/NULL);
		((NoopCertificateService_t402701936_StaticFields*)il2cpp_codegen_static_fields_for(NoopCertificateService_t402701936_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
extern "C" IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_m592255316 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
extern "C" IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_m650559600 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
extern "C" IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_m4179020149 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_get_DefaultConfigLocation_m4179020149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t1277197336 * L_0 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m4105490607_RuntimeMethod_var;
		Func_1_t1277197336 * L_2 = (Func_1_t1277197336 *)il2cpp_codegen_object_new(Func_1_t1277197336_il2cpp_TypeInfo_var);
		Func_1__ctor_m3158203758(L_2, NULL, L_1, /*hidden argument*/Func_1__ctor_m3158203758_RuntimeMethod_var);
		((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_2(L_2);
	}

IL_0018:
	{
		Func_1_t1277197336 * L_3 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		String_t* L_4 = FirebaseHandler_RunOnMainThread_TisString_t_m3713251534(NULL /*static, unused*/, L_3, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisString_t_m3713251534_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.SynchronizationContext Firebase.Platform.PlatformInformation::get_SynchronizationContext()
extern "C" IL2CPP_METHOD_ATTR SynchronizationContext_t2326897723 * PlatformInformation_get_SynchronizationContext_m3460037789 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_get_SynchronizationContext_m3460037789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t705171362 * L_0 = UnitySynchronizationContext_get_Instance_m3770060678(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m1800328376 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartupSafe()
extern "C" IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartupSafe_m2841477420 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_get_RealtimeSinceStartupSafe_m2841477420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_m2898243766 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_set_RealtimeSinceStartupSafe_m2898243766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->set_U3CRealtimeSinceStartupSafeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
extern "C" IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m2684475920 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_get_RuntimeName_m2684475920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1947075767;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_m14126820 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformInformation_get_RuntimeVersion_m14126820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_runtimeVersion_0();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		Func_1_t1277197336 * L_1 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_3();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = (intptr_t)PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m2849669475_RuntimeMethod_var;
		Func_1_t1277197336 * L_3 = (Func_1_t1277197336 *)il2cpp_codegen_object_new(Func_1_t1277197336_il2cpp_TypeInfo_var);
		Func_1__ctor_m3158203758(L_3, NULL, L_2, /*hidden argument*/Func_1__ctor_m3158203758_RuntimeMethod_var);
		((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache1_3(L_3);
	}

IL_0022:
	{
		Func_1_t1277197336 * L_4 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache1_3();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		String_t* L_5 = FirebaseHandler_RunOnMainThread_TisString_t_m3713251534(NULL /*static, unused*/, L_4, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisString_t_m3713251534_RuntimeMethod_var);
		((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->set_runtimeVersion_0(L_5);
	}

IL_0031:
	{
		String_t* L_6 = ((PlatformInformation_t3075710655_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t3075710655_il2cpp_TypeInfo_var))->get_runtimeVersion_0();
		return L_6;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_DefaultConfigLocation>m__0()
extern "C" IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m4105490607 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Application_get_streamingAssetsPath_m1172141117(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_RuntimeVersion>m__1()
extern "C" IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m2849669475 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Application_get_unityVersion_m1068543125(NULL /*static, unused*/, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.Services::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Services__cctor_m362562411 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services__cctor_m362562411_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AppConfigExtensions_t2108028355_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = AppConfigExtensions_get_Instance_m4077653316(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_AppConfig_m1748368462(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseAuthService_t3388892161_il2cpp_TypeInfo_var);
		BaseAuthService_t3388892161 * L_1 = BaseAuthService_get_BaseInstance_m134369908(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_Auth_m4233926872(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NoopCertificateService_t402701936_il2cpp_TypeInfo_var);
		NoopCertificateService_t402701936 * L_2 = NoopCertificateService_get_Instance_m3246963339(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_RootCerts_m1720476539(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t2480061955_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((SystemClock_t2480061955_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t2480061955_il2cpp_TypeInfo_var))->get_Instance_0();
		Services_set_Clock_m3997817468(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DebugLogger_t16656067_il2cpp_TypeInfo_var);
		DebugLogger_t16656067 * L_4 = DebugLogger_get_Instance_m2859537582(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_Logging_m3687381023(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_m1967952270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_AppConfig_m1967952270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->get_U3CAppConfigU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
extern "C" IL2CPP_METHOD_ATTR void Services_set_AppConfig_m1748368462 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_AppConfig_m1748368462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->set_U3CAppConfigU3Ek__BackingField_0(L_0);
		return;
	}
}
// Firebase.Platform.IAuthService Firebase.Platform.Services::get_Auth()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_m3206912075 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_Auth_m3206912075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->get_U3CAuthU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Auth(Firebase.Platform.IAuthService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Auth_m4233926872 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_Auth_m4233926872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->set_U3CAuthU3Ek__BackingField_1(L_0);
		return;
	}
}
// Firebase.Platform.ICertificateService Firebase.Platform.Services::get_RootCerts()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_RootCerts_m1876842677 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_RootCerts_m1876842677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->get_U3CRootCertsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_RootCerts(Firebase.Platform.ICertificateService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_RootCerts_m1720476539 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_RootCerts_m1720476539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->set_U3CRootCertsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Clock_m3997817468 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_Clock_m3997817468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->set_U3CClockU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_HttpFactory(Firebase.Platform.IHttpFactoryService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_HttpFactory_m3128578016 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_HttpFactory_m3128578016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->set_U3CHttpFactoryU3Ek__BackingField_4(L_0);
		return;
	}
}
// Firebase.Platform.ILoggingService Firebase.Platform.Services::get_Logging()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Logging_m804118032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_get_Logging_m804118032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->get_U3CLoggingU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
extern "C" IL2CPP_METHOD_ATTR void Services_set_Logging_m3687381023 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Services_set_Logging_m3687381023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		((Services_t463074608_StaticFields*)il2cpp_codegen_static_fields_for(Services_t463074608_il2cpp_TypeInfo_var))->set_U3CLoggingU3Ek__BackingField_5(L_0);
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
// System.Void Firebase.Unity.InstallRootCerts::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts__ctor_m4096283895 (InstallRootCerts_t2034015421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts__ctor_m4096283895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3E__AnonType0_2_t1320635857 * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		Func_1_t750382504 * L_0 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		intptr_t L_1 = (intptr_t)InstallRootCerts_U3CInstallRootCertsU3Em__0_m2932267415_RuntimeMethod_var;
		Func_1_t750382504 * L_2 = (Func_1_t750382504 *)il2cpp_codegen_object_new(Func_1_t750382504_il2cpp_TypeInfo_var);
		Func_1__ctor_m3836164377(L_2, NULL, L_1, /*hidden argument*/Func_1__ctor_m3836164377_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_6(L_2);
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		Func_1_t750382504 * L_3 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_6();
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
		U3CU3E__AnonType0_2_t1320635857 * L_4 = FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_2_t1320635857_m1614743876(NULL /*static, unused*/, L_3, /*hidden argument*/FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_2_t1320635857_m1614743876_RuntimeMethod_var);
		V_0 = L_4;
		U3CU3E__AnonType0_2_t1320635857 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = U3CU3E__AnonType0_2_get_Platform_m3309620788(L_5, /*hidden argument*/U3CU3E__AnonType0_2_get_Platform_m3309620788_RuntimeMethod_var);
		bool L_7 = InstallRootCerts_IsCertBugPresent_m1532178560(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		U3CU3E__AnonType0_2_t1320635857 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = U3CU3E__AnonType0_2_get_IsEditor_m3289126363(L_8, /*hidden argument*/U3CU3E__AnonType0_2_get_IsEditor_m3289126363_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral1420667165);
		__this->set__needsCertificateWorkaround_3((bool)1);
		goto IL_0070;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_11, 3, _stringLiteral1951566885);
	}

IL_0070:
	{
		return;
	}
}
// System.Boolean Firebase.Unity.InstallRootCerts::get_InstallationRequired()
extern "C" IL2CPP_METHOD_ATTR bool InstallRootCerts_get_InstallationRequired_m617562993 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_get_InstallationRequired_m617562993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Assembly_t * V_1 = NULL;
	AssemblyU5BU5D_t2792222854* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t * V_4 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return (bool)0;
	}

IL_0019:
	{
		V_0 = (bool)0;
		AppDomain_t1571427825 * L_2 = AppDomain_get_CurrentDomain_m182766250(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		AssemblyU5BU5D_t2792222854* L_3 = AppDomain_GetAssemblies_m803088943(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		V_3 = 0;
		goto IL_004b;
	}

IL_002d:
	{
		AssemblyU5BU5D_t2792222854* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Assembly_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Assembly_t * L_8 = V_1;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(14 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_8, _stringLiteral1648520711);
		V_4 = L_9;
		Type_t * L_10 = V_4;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0047:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_12 = V_3;
		AssemblyU5BU5D_t2792222854* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_14 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_15 = V_0;
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2133384188, L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_14, 1, L_18);
		bool L_19 = V_0;
		return L_19;
	}
}
// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::get_Instance()
extern "C" IL2CPP_METHOD_ATTR InstallRootCerts_t2034015421 * InstallRootCerts_get_Instance_m1253718339 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_get_Instance_m1253718339_MetadataUsageId);
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
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_Sync_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			InstallRootCerts_t2034015421 * L_2 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get__instance_2();
			if (L_2)
			{
				goto IL_0020;
			}
		}

IL_0016:
		{
			InstallRootCerts_t2034015421 * L_3 = (InstallRootCerts_t2034015421 *)il2cpp_codegen_object_new(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			InstallRootCerts__ctor_m4096283895(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set__instance_2(L_3);
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
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		InstallRootCerts_t2034015421 * L_5 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get__instance_2();
		return L_5;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExistInternal()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExistInternal_m2964234874 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "AFunctionThatDoesNotExistInternal", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'AFunctionThatDoesNotExistInternal'"), NULL, NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExist()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExist_m543483911 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_AFunctionThatDoesNotExist_m543483911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		InstallRootCerts_AFunctionThatDoesNotExistInternal_m2964234874(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.InstallRootCerts::IsCertBugPresent(UnityEngine.RuntimePlatform)
extern "C" IL2CPP_METHOD_ATTR bool InstallRootCerts_IsCertBugPresent_m1532178560 (RuntimeObject * __this /* static, unused */, int32_t ___platform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_IsCertBugPresent_m1532178560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___platform0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___platform0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}

IL_000d:
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (X509Certificate2_t714049126_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Assembly_t * L_4 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		NullCheck(L_4);
		Type_t * L_5 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(14 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, _stringLiteral1260313280);
		V_0 = L_5;
		Type_t * L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		InstallRootCerts_AFunctionThatDoesNotExist_m543483911(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_004d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_t2721418633_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0037;
		if(il2cpp_codegen_class_is_assignable_from (EntryPointNotFoundException_t1356862416_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003f;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0047;
		throw e;
	}

CATCH_0037:
	{ // begin catch(System.DllNotFoundException)
		V_1 = (bool)1;
		goto IL_0051;
	} // end catch (depth: 1)

CATCH_003f:
	{ // begin catch(System.EntryPointNotFoundException)
		V_1 = (bool)0;
		goto IL_0051;
	} // end catch (depth: 1)

CATCH_0047:
	{ // begin catch(System.Object)
		goto IL_004d;
	} // end catch (depth: 1)

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Firebase.Unity.InstallRootCerts::DecodeBase64Blobs(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR List_1_t1293755103 * InstallRootCerts_DecodeBase64Blobs_m1766109208 (RuntimeObject * __this /* static, unused */, String_t* ___base64BlobList0, String_t* ___startLine1, String_t* ___endLine2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_DecodeBase64Blobs_m1766109208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1293755103 * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_t1281789340* V_3 = NULL;
	String_t* V_4 = NULL;
	StringU5BU5D_t1281789340* V_5 = NULL;
	int32_t V_6 = 0;
	{
		List_1_t1293755103 * L_0 = (List_1_t1293755103 *)il2cpp_codegen_object_new(List_1_t1293755103_il2cpp_TypeInfo_var);
		List_1__ctor_m1236881166(L_0, /*hidden argument*/List_1__ctor_m1236881166_RuntimeMethod_var);
		V_0 = L_0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = (bool)0;
		String_t* L_2 = ___base64BlobList0;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t3657309853_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_3 = Regex_Split_m3767700898(NULL /*static, unused*/, L_2, _stringLiteral2971297120, /*hidden argument*/NULL);
		V_3 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_3;
		V_5 = L_4;
		V_6 = 0;
		goto IL_007a;
	}

IL_0025:
	{
		StringU5BU5D_t1281789340* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_10 = V_4;
		String_t* L_11 = ___endLine2;
		NullCheck(L_10);
		bool L_12 = String_StartsWith_m1759067526(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		V_2 = (bool)0;
		List_1_t1293755103 * L_13 = V_0;
		StringBuilder_t * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_16 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m861730954(L_13, L_16, /*hidden argument*/List_1_Add_m861730954_RuntimeMethod_var);
		StringBuilder_t * L_17 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_17, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0074;
	}

IL_005d:
	{
		StringBuilder_t * L_18 = V_1;
		String_t* L_19 = V_4;
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, L_19, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_006b:
	{
		String_t* L_20 = V_4;
		String_t* L_21 = ___startLine1;
		NullCheck(L_20);
		bool L_22 = String_StartsWith_m1759067526(L_20, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
	}

IL_0074:
	{
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_24 = V_6;
		StringU5BU5D_t1281789340* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t1293755103 * L_26 = V_0;
		return L_26;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCertificateCollectionFromString(System.String)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_DecodeCertificateCollectionFromString_m1749522460 (RuntimeObject * __this /* static, unused */, String_t* ___certString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_DecodeCertificateCollectionFromString_m1749522460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t3399372417 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Enumerator_t3182998980  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t3399372417 * L_0 = (X509CertificateCollection_t3399372417 *)il2cpp_codegen_object_new(X509CertificateCollection_t3399372417_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m147081211(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___certString0;
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		List_1_t1293755103 * L_2 = InstallRootCerts_DecodeBase64Blobs_m1766109208(NULL /*static, unused*/, L_1, _stringLiteral3080725358, _stringLiteral1696742844, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t3182998980  L_3 = List_1_GetEnumerator_m1291754567(L_2, /*hidden argument*/List_1_GetEnumerator_m1291754567_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0021:
		{
			ByteU5BU5D_t4116647657* L_4 = Enumerator_get_Current_m2908341801((Enumerator_t3182998980 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m2908341801_RuntimeMethod_var);
			V_1 = L_4;
			X509CertificateCollection_t3399372417 * L_5 = V_0;
			ByteU5BU5D_t4116647657* L_6 = V_1;
			X509Certificate2_t714049126 * L_7 = (X509Certificate2_t714049126 *)il2cpp_codegen_object_new(X509Certificate2_t714049126_il2cpp_TypeInfo_var);
			X509Certificate2__ctor_m2370196240(L_7, L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			X509CertificateCollection_Add_m907905475(L_5, L_7, /*hidden argument*/NULL);
		}

IL_0036:
		{
			bool L_8 = Enumerator_MoveNext_m980036562((Enumerator_t3182998980 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m980036562_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0021;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4103594724((Enumerator_t3182998980 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4103594724_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		X509CertificateCollection_t3399372417 * L_9 = V_0;
		return L_9;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeDefaultCollection()
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_DecodeDefaultCollection_m2609779182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_DecodeDefaultCollection_m2609779182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t4009935899 * V_0 = NULL;
	X509CertificateCollection_t3399372417 * V_1 = NULL;
	Exception_t * V_2 = NULL;
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
			RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (InstallRootCerts_t2034015421_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			NullCheck(L_1);
			Assembly_t * L_2 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
			NullCheck(L_2);
			Stream_t1273022909 * L_3 = VirtFuncInvoker1< Stream_t1273022909 *, String_t* >::Invoke(10 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_2, _stringLiteral3462484142);
			StreamReader_t4009935899 * L_4 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
			StreamReader__ctor_m1047876681(L_4, L_3, /*hidden argument*/NULL);
			V_0 = L_4;
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			StreamReader_t4009935899 * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_5);
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			X509CertificateCollection_t3399372417 * L_7 = InstallRootCerts_DecodeCertificateCollectionFromString_m1749522460(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			IL2CPP_LEAVE(0x5A, FINALLY_0030);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0030;
		}

FINALLY_0030:
		{ // begin finally (depth: 2)
			{
				StreamReader_t4009935899 * L_8 = V_0;
				if (!L_8)
				{
					goto IL_003c;
				}
			}

IL_0036:
			{
				StreamReader_t4009935899 * L_9 = V_0;
				NullCheck(L_9);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_9);
			}

IL_003c:
			{
				IL2CPP_END_FINALLY(48)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(48)
		{
			IL2CPP_JUMP_TBL(0x5A, IL_005a)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_10 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		Exception_t * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_10, 4, L_12);
		goto IL_0054;
	} // end catch (depth: 1)

IL_0054:
	{
		X509CertificateCollection_t3399372417 * L_13 = (X509CertificateCollection_t3399372417 *)il2cpp_codegen_object_new(X509CertificateCollection_t3399372417_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m147081211(L_13, /*hidden argument*/NULL);
		return L_13;
	}

IL_005a:
	{
		X509CertificateCollection_t3399372417 * L_14 = V_1;
		return L_14;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCollection(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_DecodeCollection_m2713176867 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_DecodeCollection_m2713176867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TextAsset_t3022178571 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = Services_get_AppConfig_m1967952270(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___app0;
		NullCheck(L_0);
		String_t* L_2 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(1 /* System.String Firebase.Platform.IAppConfigExtensions::GetCertPemFile(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2982493820_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5 = V_0;
		Object_t631007953 * L_6 = Resources_Load_m3880010804(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = ((TextAsset_t3022178571 *)IsInstClass((RuntimeObject*)L_6, TextAsset_t3022178571_il2cpp_TypeInfo_var));
		TextAsset_t3022178571 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		TextAsset_t3022178571 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = TextAsset_get_text_m2027878391(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		X509CertificateCollection_t3399372417 * L_11 = InstallRootCerts_DecodeCertificateCollectionFromString_m1749522460(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_003b:
	{
		X509CertificateCollection_t3399372417 * L_12 = (X509CertificateCollection_t3399372417 *)il2cpp_codegen_object_new(X509CertificateCollection_t3399372417_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m147081211(L_12, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::InstallDefaultCRLs(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_InstallDefaultCRLs_m1774432234 (RuntimeObject * __this /* static, unused */, String_t* ___resource_name0, String_t* ___directory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_InstallDefaultCRLs_m1774432234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_t1273022909 * V_1 = NULL;
	StreamReader_t4009935899 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	Enumerator_t3182998980  V_4;
	memset(&V_4, 0, sizeof(V_4));
	String_t* V_5 = NULL;
	MD5_t3177620429 * V_6 = NULL;
	String_t* V_7 = NULL;
	BinaryWriter_t3992595042 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___directory1;
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ___directory1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2907263252, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_1, 1, L_3);
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (InstallRootCerts_t2034015421_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			Assembly_t * L_6 = VirtFuncInvoker0< Assembly_t * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
			String_t* L_7 = ___resource_name0;
			NullCheck(L_6);
			Stream_t1273022909 * L_8 = VirtFuncInvoker1< Stream_t1273022909 *, String_t* >::Invoke(10 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_6, L_7);
			V_1 = L_8;
			Stream_t1273022909 * L_9 = V_1;
			StreamReader_t4009935899 * L_10 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
			StreamReader__ctor_m1047876681(L_10, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
		}

IL_003c:
		try
		{ // begin try (depth: 2)
			{
				StreamReader_t4009935899 * L_11 = V_2;
				NullCheck(L_11);
				String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.IO.TextReader::ReadToEnd() */, L_11);
				IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
				List_1_t1293755103 * L_13 = InstallRootCerts_DecodeBase64Blobs_m1766109208(NULL /*static, unused*/, L_12, _stringLiteral1599506901, _stringLiteral532034312, /*hidden argument*/NULL);
				NullCheck(L_13);
				Enumerator_t3182998980  L_14 = List_1_GetEnumerator_m1291754567(L_13, /*hidden argument*/List_1_GetEnumerator_m1291754567_RuntimeMethod_var);
				V_4 = L_14;
			}

IL_0058:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00f2;
				}

IL_005d:
				{
					ByteU5BU5D_t4116647657* L_15 = Enumerator_get_Current_m2908341801((Enumerator_t3182998980 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m2908341801_RuntimeMethod_var);
					V_3 = L_15;
					MD5_t3177620429 * L_16 = MD5_Create_m3522414168(NULL /*static, unused*/, /*hidden argument*/NULL);
					V_6 = L_16;
				}

IL_006c:
				try
				{ // begin try (depth: 4)
					MD5_t3177620429 * L_17 = V_6;
					ByteU5BU5D_t4116647657* L_18 = V_3;
					NullCheck(L_17);
					ByteU5BU5D_t4116647657* L_19 = HashAlgorithm_ComputeHash_m2825542963(L_17, L_18, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
					String_t* L_20 = BitConverter_ToString_m3464863163(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
					String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
					NullCheck(L_20);
					String_t* L_22 = String_Replace_m1273907647(L_20, _stringLiteral3452614531, L_21, /*hidden argument*/NULL);
					V_5 = L_22;
					IL2CPP_LEAVE(0x9E, FINALLY_008f);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_008f;
				}

FINALLY_008f:
				{ // begin finally (depth: 4)
					{
						MD5_t3177620429 * L_23 = V_6;
						if (!L_23)
						{
							goto IL_009d;
						}
					}

IL_0096:
					{
						MD5_t3177620429 * L_24 = V_6;
						NullCheck(L_24);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_24);
					}

IL_009d:
					{
						IL2CPP_END_FINALLY(143)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(143)
				{
					IL2CPP_JUMP_TBL(0x9E, IL_009e)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_009e:
				{
					String_t* L_25 = ___directory1;
					String_t* L_26 = V_5;
					IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
					String_t* L_27 = String_Concat_m3937257545(NULL /*static, unused*/, L_26, _stringLiteral3977648530, /*hidden argument*/NULL);
					IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
					String_t* L_28 = Path_Combine_m3389272516(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
					V_7 = L_28;
					String_t* L_29 = V_7;
					bool L_30 = File_Exists_m3943585060(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
					if (!L_30)
					{
						goto IL_00c3;
					}
				}

IL_00be:
				{
					goto IL_00f2;
				}

IL_00c3:
				{
					String_t* L_31 = V_7;
					FileStream_t4292183065 * L_32 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
					FileStream__ctor_m2784380556(L_32, L_31, 1, /*hidden argument*/NULL);
					BinaryWriter_t3992595042 * L_33 = (BinaryWriter_t3992595042 *)il2cpp_codegen_object_new(BinaryWriter_t3992595042_il2cpp_TypeInfo_var);
					BinaryWriter__ctor_m1874693998(L_33, L_32, /*hidden argument*/NULL);
					V_8 = L_33;
				}

IL_00d2:
				try
				{ // begin try (depth: 4)
					BinaryWriter_t3992595042 * L_34 = V_8;
					ByteU5BU5D_t4116647657* L_35 = V_3;
					NullCheck(L_34);
					VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_34, L_35);
					IL2CPP_LEAVE(0xEE, FINALLY_00df);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_00df;
				}

FINALLY_00df:
				{ // begin finally (depth: 4)
					{
						BinaryWriter_t3992595042 * L_36 = V_8;
						if (!L_36)
						{
							goto IL_00ed;
						}
					}

IL_00e6:
					{
						BinaryWriter_t3992595042 * L_37 = V_8;
						NullCheck(L_37);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_37);
					}

IL_00ed:
					{
						IL2CPP_END_FINALLY(223)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(223)
				{
					IL2CPP_JUMP_TBL(0xEE, IL_00ee)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_00ee:
				{
					int32_t L_38 = V_0;
					V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
				}

IL_00f2:
				{
					bool L_39 = Enumerator_MoveNext_m980036562((Enumerator_t3182998980 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m980036562_RuntimeMethod_var);
					if (L_39)
					{
						goto IL_005d;
					}
				}

IL_00fe:
				{
					IL2CPP_LEAVE(0x111, FINALLY_0103);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0103;
			}

FINALLY_0103:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m4103594724((Enumerator_t3182998980 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m4103594724_RuntimeMethod_var);
				IL2CPP_END_FINALLY(259)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(259)
			{
				IL2CPP_JUMP_TBL(0x111, IL_0111)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0111:
			{
				IL2CPP_LEAVE(0x123, FINALLY_0116);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0116;
		}

FINALLY_0116:
		{ // begin finally (depth: 2)
			{
				StreamReader_t4009935899 * L_40 = V_2;
				if (!L_40)
				{
					goto IL_0122;
				}
			}

IL_011c:
			{
				StreamReader_t4009935899 * L_41 = V_2;
				NullCheck(L_41);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_41);
			}

IL_0122:
			{
				IL2CPP_END_FINALLY(278)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(278)
		{
			IL2CPP_JUMP_TBL(0x123, IL_0123)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0123:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
			RuntimeObject* L_42 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
			int32_t L_43 = V_0;
			int32_t L_44 = L_43;
			RuntimeObject * L_45 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_44);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_46 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral1125212877, L_45, /*hidden argument*/NULL);
			NullCheck(L_42);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_42, 1, L_46);
			goto IL_0166;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0143;
		throw e;
	}

CATCH_0143:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_47 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		Exception_t * L_48 = V_9;
		NullCheck(L_48);
		String_t* L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3418596879, L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_47, 4, L_50);
		goto IL_0166;
	} // end catch (depth: 1)

IL_0166:
	{
		return;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::HackRefreshMonoRootStore()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts_HackRefreshMonoRootStore_m495022385 (InstallRootCerts_t2034015421 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_HackRefreshMonoRootStore_m495022385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	AssemblyU5BU5D_t2792222854* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	FieldInfo_t * V_4 = NULL;
	FieldInfo_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
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
			AppDomain_t1571427825 * L_0 = AppDomain_get_CurrentDomain_m182766250(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_0);
			AssemblyU5BU5D_t2792222854* L_1 = AppDomain_GetAssemblies_m803088943(L_0, /*hidden argument*/NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_0089;
		}

IL_0012:
		{
			AssemblyU5BU5D_t2792222854* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			Assembly_t * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_0 = L_5;
			Assembly_t * L_6 = V_0;
			NullCheck(L_6);
			AssemblyName_t270931938 * L_7 = VirtFuncInvoker0< AssemblyName_t270931938 * >::Invoke(17 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_6);
			NullCheck(L_7);
			String_t* L_8 = AssemblyName_get_Name_m4072373679(L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			bool L_9 = String_Equals_m2270643605(L_8, _stringLiteral2289013, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0085;
			}
		}

IL_0030:
		{
			Assembly_t * L_10 = V_0;
			NullCheck(L_10);
			Type_t * L_11 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(14 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_10, _stringLiteral1775126349);
			V_3 = L_11;
			Type_t * L_12 = V_3;
			if (!L_12)
			{
				goto IL_0085;
			}
		}

IL_0042:
		{
			Type_t * L_13 = V_3;
			NullCheck(L_13);
			FieldInfo_t * L_14 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_13, _stringLiteral2860819001, ((int32_t)40));
			V_4 = L_14;
			FieldInfo_t * L_15 = V_4;
			if (!L_15)
			{
				goto IL_0061;
			}
		}

IL_0058:
		{
			FieldInfo_t * L_16 = V_4;
			NullCheck(L_16);
			FieldInfo_SetValue_m2460171138(L_16, NULL, NULL, /*hidden argument*/NULL);
		}

IL_0061:
		{
			Type_t * L_17 = V_3;
			NullCheck(L_17);
			FieldInfo_t * L_18 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_17, _stringLiteral2124937934, ((int32_t)40));
			V_5 = L_18;
			FieldInfo_t * L_19 = V_5;
			if (!L_19)
			{
				goto IL_0085;
			}
		}

IL_0077:
		{
			FieldInfo_t * L_20 = V_5;
			NullCheck(L_20);
			FieldInfo_SetValue_m2460171138(L_20, NULL, NULL, /*hidden argument*/NULL);
			goto IL_00ca;
		}

IL_0085:
		{
			int32_t L_21 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		}

IL_0089:
		{
			int32_t L_22 = V_2;
			AssemblyU5BU5D_t2792222854* L_23 = V_1;
			NullCheck(L_23);
			if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
			{
				goto IL_0012;
			}
		}

IL_0092:
		{
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0097;
		throw e;
	}

CATCH_0097:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		Exception_t * L_25 = V_6;
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4147376044, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_24, 4, L_27);
		goto IL_00ba;
	} // end catch (depth: 1)

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_28, 3, _stringLiteral750565858);
	}

IL_00ca:
	{
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::Install(Firebase.Platform.IFirebaseAppPlatform)
extern "C" IL2CPP_METHOD_ATTR X509CertificateCollection_t3399372417 * InstallRootCerts_Install_m886740600 (InstallRootCerts_t2034015421 * __this, RuntimeObject* ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_Install_m886740600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	X509CertificateCollection_t3399372417 * V_1 = NULL;
	X509CertificateCollection_t3399372417 * V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	X509CertificateCollection_t3399372417 * V_6 = NULL;
	X509CertificateCollection_t3399372417 * V_7 = NULL;
	X509Store_t2922691911 * V_8 = NULL;
	X509CertificateCollection_t3399372417 * V_9 = NULL;
	X509Certificate_t713131622 * V_10 = NULL;
	X509CertificateEnumerator_t855273292 * V_11 = NULL;
	Exception_t * V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		bool L_0 = InstallRootCerts_get_InstallationRequired_m617562993(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (X509CertificateCollection_t3399372417 *)NULL;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_Sync_0();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			Dictionary_2_t577727232 * L_3 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get__installedRoots_1();
			RuntimeObject* L_4 = ___app0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_m2411720024(L_3, L_4, (X509CertificateCollection_t3399372417 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m2411720024_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0031;
			}
		}

IL_002a:
		{
			X509CertificateCollection_t3399372417 * L_6 = V_1;
			V_2 = L_6;
			IL2CPP_LEAVE(0x220, FINALLY_0219);
		}

IL_0031:
		{
			X509CertificateCollection_t3399372417 * L_7 = (X509CertificateCollection_t3399372417 *)il2cpp_codegen_object_new(X509CertificateCollection_t3399372417_il2cpp_TypeInfo_var);
			X509CertificateCollection__ctor_m147081211(L_7, /*hidden argument*/NULL);
			V_1 = L_7;
			String_t* L_8 = Environment_GetFolderPath_m327623990(NULL /*static, unused*/, ((int32_t)26), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_9 = Path_Combine_m3389272516(NULL /*static, unused*/, L_8, _stringLiteral3525949144, /*hidden argument*/NULL);
			String_t* L_10 = Path_Combine_m3389272516(NULL /*static, unused*/, L_9, _stringLiteral9622098, /*hidden argument*/NULL);
			V_3 = L_10;
			V_4 = (bool)0;
		}

IL_0056:
		try
		{ // begin try (depth: 2)
			{
				String_t* L_11 = V_3;
				bool L_12 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
				if (L_12)
				{
					goto IL_006f;
				}
			}

IL_0061:
			{
				String_t* L_13 = V_3;
				DirectoryInfo_t35957480 * L_14 = Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
				G_B9_0 = ((((int32_t)((((RuntimeObject*)(DirectoryInfo_t35957480 *)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0070;
			}

IL_006f:
			{
				G_B9_0 = 1;
			}

IL_0070:
			{
				V_4 = (bool)G_B9_0;
				goto IL_007d;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0077;
			throw e;
		}

CATCH_0077:
		{ // begin catch(System.Exception)
			goto IL_007d;
		} // end catch (depth: 2)

IL_007d:
		{
			bool L_15 = V_4;
			if (L_15)
			{
				goto IL_00ca;
			}
		}

IL_0084:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
			RuntimeObject* L_16 = Services_get_AppConfig_m1967952270(NULL /*static, unused*/, /*hidden argument*/NULL);
			RuntimeObject* L_17 = ___app0;
			NullCheck(L_16);
			String_t* L_18 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String Firebase.Platform.IAppConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2982493820_il2cpp_TypeInfo_var, L_16, L_17);
			V_5 = L_18;
			String_t* L_19 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_00ca;
			}
		}

IL_009d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
			RuntimeObject* L_21 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_22 = V_5;
			String_t* L_23 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_24 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1144067059, L_22, L_23, /*hidden argument*/NULL);
			NullCheck(L_21);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_21, 1, L_24);
			String_t* L_25 = V_5;
			Environment_SetEnvironmentVariable_m2152544225(NULL /*static, unused*/, _stringLiteral1274574761, L_25, /*hidden argument*/NULL);
			String_t* L_26 = V_5;
			V_3 = L_26;
			InstallRootCerts_HackRefreshMonoRootStore_m495022385(__this, /*hidden argument*/NULL);
		}

IL_00ca:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			X509CertificateCollection_t3399372417 * L_27 = InstallRootCerts_DecodeDefaultCollection_m2609779182(NULL /*static, unused*/, /*hidden argument*/NULL);
			V_6 = L_27;
			RuntimeObject* L_28 = ___app0;
			X509CertificateCollection_t3399372417 * L_29 = InstallRootCerts_DecodeCollection_m2713176867(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
			V_7 = L_29;
			RuntimeObject* L_30 = ___app0;
			NullCheck(L_30);
			String_t* L_31 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Firebase.Platform.IFirebaseAppPlatform::get_Name() */, IFirebaseAppPlatform_t1946962877_il2cpp_TypeInfo_var, L_30);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseHandler_t2087675187_il2cpp_TypeInfo_var);
			RuntimeObject* L_32 = FirebaseHandler_get_AppUtils_m545989917(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_32);
			String_t* L_33 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Firebase.Platform.IFirebaseAppUtils::GetDefaultInstanceName() */, IFirebaseAppUtils_t1304256382_il2cpp_TypeInfo_var, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_34 = String_Equals_m1744302937(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_0104;
			}
		}

IL_00f3:
		{
			X509CertificateCollection_t3399372417 * L_35 = V_7;
			X509CertificateCollection_t3399372417 * L_36 = V_6;
			NullCheck(L_35);
			X509CertificateCollection_AddRange_m2650657275(L_35, L_36, /*hidden argument*/NULL);
			X509CertificateCollection_t3399372417 * L_37 = V_7;
			V_1 = L_37;
			goto IL_010c;
		}

IL_0104:
		{
			X509CertificateCollection_t3399372417 * L_38 = V_1;
			X509CertificateCollection_t3399372417 * L_39 = V_6;
			NullCheck(L_38);
			X509CertificateCollection_AddRange_m2650657275(L_38, L_39, /*hidden argument*/NULL);
		}

IL_010c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			Dictionary_2_t577727232 * L_40 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get__installedRoots_1();
			RuntimeObject* L_41 = ___app0;
			X509CertificateCollection_t3399372417 * L_42 = V_7;
			NullCheck(L_40);
			Dictionary_2_set_Item_m3293937343(L_40, L_41, L_42, /*hidden argument*/Dictionary_2_set_Item_m3293937343_RuntimeMethod_var);
			X509CertificateCollection_t3399372417 * L_43 = V_1;
			NullCheck(L_43);
			int32_t L_44 = CollectionBase_get_Count_m1708965601(L_43, /*hidden argument*/NULL);
			if (L_44)
			{
				goto IL_012b;
			}
		}

IL_0124:
		{
			X509CertificateCollection_t3399372417 * L_45 = V_1;
			V_2 = L_45;
			IL2CPP_LEAVE(0x220, FINALLY_0219);
		}

IL_012b:
		{
			String_t* L_46 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
			String_t* L_47 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_TrustedRoot_4();
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_48 = Path_Combine_m3389272516(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
			InstallRootCerts_InstallDefaultCRLs_m1774432234(NULL /*static, unused*/, _stringLiteral2502633208, L_48, /*hidden argument*/NULL);
			String_t* L_49 = V_3;
			String_t* L_50 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_IntermediateCA_5();
			String_t* L_51 = Path_Combine_m3389272516(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
			InstallRootCerts_InstallDefaultCRLs_m1774432234(NULL /*static, unused*/, _stringLiteral929863655, L_51, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
			RuntimeObject* L_52 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
			X509CertificateCollection_t3399372417 * L_53 = V_7;
			NullCheck(L_53);
			int32_t L_54 = CollectionBase_get_Count_m1708965601(L_53, /*hidden argument*/NULL);
			int32_t L_55 = L_54;
			RuntimeObject * L_56 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_55);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_57 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3935273920, L_56, /*hidden argument*/NULL);
			NullCheck(L_52);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_52, 1, L_57);
			String_t* L_58 = ((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->get_TrustedRoot_4();
			X509Store_t2922691911 * L_59 = (X509Store_t2922691911 *)il2cpp_codegen_object_new(X509Store_t2922691911_il2cpp_TypeInfo_var);
			X509Store__ctor_m1685125329(L_59, L_58, /*hidden argument*/NULL);
			V_8 = L_59;
			X509Store_t2922691911 * L_60 = V_8;
			NullCheck(L_60);
			X509Store_Open_m909451489(L_60, 1, /*hidden argument*/NULL);
			X509Store_t2922691911 * L_61 = V_8;
			NullCheck(L_61);
			X509Certificate2Collection_t2111161276 * L_62 = X509Store_get_Certificates_m2149701265(L_61, /*hidden argument*/NULL);
			V_9 = L_62;
			X509CertificateCollection_t3399372417 * L_63 = V_1;
			NullCheck(L_63);
			X509CertificateEnumerator_t855273292 * L_64 = X509CertificateCollection_GetEnumerator_m1686475779(L_63, /*hidden argument*/NULL);
			V_11 = L_64;
		}

IL_019b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01e3;
			}

IL_01a0:
			{
				X509CertificateEnumerator_t855273292 * L_65 = V_11;
				NullCheck(L_65);
				X509Certificate_t713131622 * L_66 = X509CertificateEnumerator_get_Current_m364341970(L_65, /*hidden argument*/NULL);
				V_10 = L_66;
				X509CertificateCollection_t3399372417 * L_67 = V_9;
				X509Certificate_t713131622 * L_68 = V_10;
				NullCheck(L_67);
				bool L_69 = X509CertificateCollection_Contains_m2117915971(L_67, L_68, /*hidden argument*/NULL);
				if (L_69)
				{
					goto IL_01e3;
				}
			}

IL_01b7:
			try
			{ // begin try (depth: 3)
				X509Store_t2922691911 * L_70 = V_8;
				X509Certificate_t713131622 * L_71 = V_10;
				NullCheck(L_70);
				X509Store_Add_m571886061(L_70, ((X509Certificate2_t714049126 *)CastclassClass((RuntimeObject*)L_71, X509Certificate2_t714049126_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				goto IL_01e3;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_01ca;
				throw e;
			}

CATCH_01ca:
			{ // begin catch(System.Exception)
				V_12 = ((Exception_t *)__exception_local);
				IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
				RuntimeObject* L_72 = Services_get_Logging_m804118032(NULL /*static, unused*/, /*hidden argument*/NULL);
				Exception_t * L_73 = V_12;
				NullCheck(L_73);
				String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_73);
				NullCheck(L_72);
				InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t1251626632_il2cpp_TypeInfo_var, L_72, 4, L_74);
				goto IL_01e3;
			} // end catch (depth: 3)

IL_01e3:
			{
				X509CertificateEnumerator_t855273292 * L_75 = V_11;
				NullCheck(L_75);
				bool L_76 = X509CertificateEnumerator_MoveNext_m1557350766(L_75, /*hidden argument*/NULL);
				if (L_76)
				{
					goto IL_01a0;
				}
			}

IL_01ef:
			{
				IL2CPP_LEAVE(0x20B, FINALLY_01f4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01f4;
		}

FINALLY_01f4:
		{ // begin finally (depth: 2)
			{
				X509CertificateEnumerator_t855273292 * L_77 = V_11;
				RuntimeObject* L_78 = ((RuntimeObject*)IsInst((RuntimeObject*)L_77, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				V_13 = L_78;
				if (!L_78)
				{
					goto IL_020a;
				}
			}

IL_0203:
			{
				RuntimeObject* L_79 = V_13;
				NullCheck(L_79);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_79);
			}

IL_020a:
			{
				IL2CPP_END_FINALLY(500)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(500)
		{
			IL2CPP_JUMP_TBL(0x20B, IL_020b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_020b:
		{
			X509Store_t2922691911 * L_80 = V_8;
			NullCheck(L_80);
			X509Store_Close_m799536774(L_80, /*hidden argument*/NULL);
			X509CertificateCollection_t3399372417 * L_81 = V_1;
			V_2 = L_81;
			IL2CPP_LEAVE(0x220, FINALLY_0219);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0219;
	}

FINALLY_0219:
	{ // begin finally (depth: 1)
		RuntimeObject * L_82 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(537)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(537)
	{
		IL2CPP_JUMP_TBL(0x220, IL_0220)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0220:
	{
		X509CertificateCollection_t3399372417 * L_83 = V_2;
		return L_83;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::.cctor()
extern "C" IL2CPP_METHOD_ATTR void InstallRootCerts__cctor_m3882980770 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts__cctor_m3882980770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set_Sync_0(L_0);
		Dictionary_2_t577727232 * L_1 = (Dictionary_2_t577727232 *)il2cpp_codegen_object_new(Dictionary_2_t577727232_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2974843271(L_1, /*hidden argument*/Dictionary_2__ctor_m2974843271_RuntimeMethod_var);
		((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set__installedRoots_1(L_1);
		((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set__instance_2((InstallRootCerts_t2034015421 *)NULL);
		((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set_TrustedRoot_4(_stringLiteral1986082327);
		((InstallRootCerts_t2034015421_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var))->set_IntermediateCA_5(_stringLiteral3456743389);
		return;
	}
}
// <>__AnonType0`2<UnityEngine.RuntimePlatform,System.Boolean> Firebase.Unity.InstallRootCerts::<InstallRootCerts>m__0()
extern "C" IL2CPP_METHOD_ATTR U3CU3E__AnonType0_2_t1320635857 * InstallRootCerts_U3CInstallRootCertsU3Em__0_m2932267415 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InstallRootCerts_U3CInstallRootCertsU3Em__0_m2932267415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		U3CU3E__AnonType0_2_t1320635857 * L_2 = (U3CU3E__AnonType0_2_t1320635857 *)il2cpp_codegen_object_new(U3CU3E__AnonType0_2_t1320635857_il2cpp_TypeInfo_var);
		U3CU3E__AnonType0_2__ctor_m1373264916(L_2, L_0, L_1, /*hidden argument*/U3CU3E__AnonType0_2__ctor_m1373264916_RuntimeMethod_var);
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
// System.Void Firebase.Unity.UnityHttpFactoryService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityHttpFactoryService__ctor_m3207162680 (UnityHttpFactoryService_t3235819319 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Unity.UnityHttpFactoryService Firebase.Unity.UnityHttpFactoryService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnityHttpFactoryService_t3235819319 * UnityHttpFactoryService_get_Instance_m3500013823 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityHttpFactoryService_get_Instance_m3500013823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityHttpFactoryService_t3235819319_il2cpp_TypeInfo_var);
		UnityHttpFactoryService_t3235819319 * L_0 = ((UnityHttpFactoryService_t3235819319_StaticFields*)il2cpp_codegen_static_fields_for(UnityHttpFactoryService_t3235819319_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnityHttpFactoryService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UnityHttpFactoryService__cctor_m1887137595 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityHttpFactoryService__cctor_m1887137595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityHttpFactoryService_t3235819319 * L_0 = (UnityHttpFactoryService_t3235819319 *)il2cpp_codegen_object_new(UnityHttpFactoryService_t3235819319_il2cpp_TypeInfo_var);
		UnityHttpFactoryService__ctor_m3207162680(L_0, /*hidden argument*/NULL);
		((UnityHttpFactoryService_t3235819319_StaticFields*)il2cpp_codegen_static_fields_for(UnityHttpFactoryService_t3235819319_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_m1031280594 (UnityLoggingService_t1821497488 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnityLoggingService_t1821497488 * UnityLoggingService_get_Instance_m1073141464 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLoggingService_get_Instance_m1073141464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityLoggingService_t1821497488_il2cpp_TypeInfo_var);
		UnityLoggingService_t1821497488 * L_0 = ((UnityLoggingService_t1821497488_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t1821497488_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLoggingService_LogMessage_m528427621 (UnityLoggingService_t1821497488 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		String_t* L_1 = ___message1;
		FirebaseLogger_LogMessage_m2677119794(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLoggingService__cctor_m3421292871 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLoggingService__cctor_m3421292871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLoggingService_t1821497488 * L_0 = (UnityLoggingService_t1821497488 *)il2cpp_codegen_object_new(UnityLoggingService_t1821497488_il2cpp_TypeInfo_var);
		UnityLoggingService__ctor_m1031280594(L_0, /*hidden argument*/NULL);
		((UnityLoggingService_t1821497488_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t1821497488_il2cpp_TypeInfo_var))->set__instance_0(L_0);
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
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
extern "C" IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_m1275165385 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityPlatformServices_SetupServices_m1275165385_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityConfigExtensions_t3428627910_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = UnityConfigExtensions_get_DefaultInstance_m3365938126(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		Services_set_AppConfig_m1748368462(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityHttpFactoryService_t3235819319_il2cpp_TypeInfo_var);
		UnityHttpFactoryService_t3235819319 * L_1 = UnityHttpFactoryService_get_Instance_m3500013823(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_HttpFactory_m3128578016(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityLoggingService_t1821497488_il2cpp_TypeInfo_var);
		UnityLoggingService_t1821497488 * L_2 = UnityLoggingService_get_Instance_m1073141464(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_Logging_m3687381023(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InstallRootCerts_t2034015421_il2cpp_TypeInfo_var);
		InstallRootCerts_t2034015421 * L_3 = InstallRootCerts_get_Instance_m1253718339(NULL /*static, unused*/, /*hidden argument*/NULL);
		Services_set_RootCerts_m1720476539(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m1140058627 (UnitySynchronizationContext_t705171362 * __this, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__ctor_m1140058627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext__ctor_m2514243817(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_0 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Thread_get_ManagedThreadId_m1068113671(L_0, /*hidden argument*/NULL);
		__this->set_mainThreadId_4(L_1);
		GameObject_t1113636619 * L_2 = ___gameObject0;
		NullCheck(L_2);
		SynchronizationContextBehavoir_t1466989729 * L_3 = GameObject_AddComponent_TisSynchronizationContextBehavoir_t1466989729_m1179237419(L_2, /*hidden argument*/GameObject_AddComponent_TisSynchronizationContextBehavoir_t1466989729_m1179237419_RuntimeMethod_var);
		__this->set_behavior_3(L_3);
		SynchronizationContextBehavoir_t1466989729 * L_4 = __this->get_behavior_3();
		NullCheck(L_4);
		Queue_1_t3099366224 * L_5 = SynchronizationContextBehavoir_get_CallbackQueue_m3137540434(L_4, /*hidden argument*/NULL);
		__this->set_queue_2(L_5);
		return;
	}
}
// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UnitySynchronizationContext_t705171362 * UnitySynchronizationContext_get_Instance_m3770060678 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_get_Instance_m3770060678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t705171362 * L_0 = ((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->get__instance_1();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral150276601, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnitySynchronizationContext_get_Instance_m3770060678_RuntimeMethod_var);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t705171362 * L_2 = ((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->get__instance_1();
		return L_2;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_m2862881828 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * ___gameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Create_m2862881828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t705171362 * L_0 = ((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->get__instance_1();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t1113636619 * L_1 = ___gameObject0;
		UnitySynchronizationContext_t705171362 * L_2 = (UnitySynchronizationContext_t705171362 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_m1140058627(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->set__instance_1(L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m806824744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Destroy_m806824744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->set__instance_1((UnitySynchronizationContext_t705171362 *)NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_m308250308 (UnitySynchronizationContext_t705171362 * __this, SendOrPostCallback_t2750080073 * ___d0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Post_m308250308_MetadataUsageId);
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
		Queue_1_t3099366224 * L_0 = __this->get_queue_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_1_t3099366224 * L_2 = __this->get_queue_2();
		SendOrPostCallback_t2750080073 * L_3 = ___d0;
		RuntimeObject * L_4 = ___state1;
		Tuple_2_t3253106730 * L_5 = (Tuple_2_t3253106730 *)il2cpp_codegen_object_new(Tuple_2_t3253106730_il2cpp_TypeInfo_var);
		Tuple_2__ctor_m459143963(L_5, L_3, L_4, /*hidden argument*/Tuple_2__ctor_m459143963_RuntimeMethod_var);
		NullCheck(L_2);
		Queue_1_Enqueue_m3011890621(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m3011890621_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2B, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__cctor_m1789778 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__cctor_m1789778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->set__instance_1((UnitySynchronizationContext_t705171362 *)NULL);
		Dictionary_2_t3634922637 * L_0 = (Dictionary_2_t3634922637 *)il2cpp_codegen_object_new(Dictionary_2_t3634922637_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m22733722(L_0, /*hidden argument*/Dictionary_2__ctor_m22733722_RuntimeMethod_var);
		((UnitySynchronizationContext_t705171362_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t705171362_il2cpp_TypeInfo_var))->set_signalDictionary_5(L_0);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m2170763925 (U3CSendU3Ec__AnonStorey3_t2455143249 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m2170762852 (U3CSendU3Ec__AnonStorey4_t2051858722 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey1__ctor_m1691142606 (U3CSendCoroutineU3Ec__AnonStorey1_t914753507 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey2__ctor_m1762511310 (U3CSendCoroutineU3Ec__AnonStorey2_t2871068643 * __this, const RuntimeMethod* method)
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0__ctor_m2737237292 (U3CSignaledCoroutineU3Ec__Iterator0_t4124630109 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSignaledCoroutineU3Ec__Iterator0_MoveNext_m1475675930 (U3CSignaledCoroutineU3Ec__Iterator0_t4124630109 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSignaledCoroutineU3Ec__Iterator0_MoveNext_m1475675930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0021:
	{
		Func_1_t1283030885 * L_2 = __this->get_coroutine_0();
		NullCheck(L_2);
		RuntimeObject* L_3 = Func_1_Invoke_m537203482(L_2, /*hidden argument*/Func_1_Invoke_m537203482_RuntimeMethod_var);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_005b;
	}

IL_0046:
	{
		ManualResetEvent_t451242010 * L_5 = __this->get_newSignal_1();
		NullCheck(L_5);
		EventWaitHandle_Set_m2445193251(L_5, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_0059:
	{
		return (bool)0;
	}

IL_005b:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2765153975 (U3CSignaledCoroutineU3Ec__Iterator0_t4124630109 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m110343847 (U3CSignaledCoroutineU3Ec__Iterator0_t4124630109 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Dispose_m3552604108 (U3CSignaledCoroutineU3Ec__Iterator0_t4124630109 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Reset_m2893829747 (U3CSignaledCoroutineU3Ec__Iterator0_t4124630109 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSignaledCoroutineU3Ec__Iterator0_Reset_m2893829747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSignaledCoroutineU3Ec__Iterator0_Reset_m2893829747_RuntimeMethod_var);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContextBehavoir__ctor_m1522656038 (SynchronizationContextBehavoir_t1466989729 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
extern "C" IL2CPP_METHOD_ATTR Queue_1_t3099366224 * SynchronizationContextBehavoir_get_CallbackQueue_m3137540434 (SynchronizationContextBehavoir_t1466989729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SynchronizationContextBehavoir_get_CallbackQueue_m3137540434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t3099366224 * L_0 = __this->get_callbackQueue_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Queue_1_t3099366224 * L_1 = (Queue_1_t3099366224 *)il2cpp_codegen_object_new(Queue_1_t3099366224_il2cpp_TypeInfo_var);
		Queue_1__ctor_m4214835553(L_1, /*hidden argument*/Queue_1__ctor_m4214835553_RuntimeMethod_var);
		__this->set_callbackQueue_4(L_1);
	}

IL_0016:
	{
		Queue_1_t3099366224 * L_2 = __this->get_callbackQueue_4();
		return L_2;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* SynchronizationContextBehavoir_Start_m3262537675 (SynchronizationContextBehavoir_t1466989729 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SynchronizationContextBehavoir_Start_m3262537675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t1125778690 * V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t1125778690 * L_0 = (U3CStartU3Ec__Iterator0_t1125778690 *)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t1125778690_il2cpp_TypeInfo_var);
		U3CStartU3Ec__Iterator0__ctor_m3663867818(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t1125778690 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_2(__this);
		U3CStartU3Ec__Iterator0_t1125778690 * L_2 = V_0;
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_m3663867818 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m3342284979 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_MoveNext_m3342284979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0021:
	{
		__this->set_U3CentryU3E__0_0((Tuple_2_t3253106730 *)NULL);
		SynchronizationContextBehavoir_t1466989729 * L_2 = __this->get_U24this_2();
		NullCheck(L_2);
		Queue_1_t3099366224 * L_3 = SynchronizationContextBehavoir_get_CallbackQueue_m3137540434(L_2, /*hidden argument*/NULL);
		__this->set_U24locvar0_1(L_3);
		RuntimeObject * L_4 = __this->get_U24locvar0_1();
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContextBehavoir_t1466989729 * L_5 = __this->get_U24this_2();
			NullCheck(L_5);
			Queue_1_t3099366224 * L_6 = SynchronizationContextBehavoir_get_CallbackQueue_m3137540434(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			int32_t L_7 = Queue_1_get_Count_m1643786144(L_6, /*hidden argument*/Queue_1_get_Count_m1643786144_RuntimeMethod_var);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0070;
			}
		}

IL_005a:
		{
			SynchronizationContextBehavoir_t1466989729 * L_8 = __this->get_U24this_2();
			NullCheck(L_8);
			Queue_1_t3099366224 * L_9 = SynchronizationContextBehavoir_get_CallbackQueue_m3137540434(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			Tuple_2_t3253106730 * L_10 = Queue_1_Dequeue_m2436648904(L_9, /*hidden argument*/Queue_1_Dequeue_m2436648904_RuntimeMethod_var);
			__this->set_U3CentryU3E__0_0(L_10);
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x81, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = __this->get_U24locvar0_1();
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x81, IL_0081)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0081:
	{
		Tuple_2_t3253106730 * L_12 = __this->get_U3CentryU3E__0_0();
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		Tuple_2_t3253106730 * L_13 = __this->get_U3CentryU3E__0_0();
		NullCheck(L_13);
		SendOrPostCallback_t2750080073 * L_14 = Tuple_2_get_Item1_m2108757255(L_13, /*hidden argument*/Tuple_2_get_Item1_m2108757255_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00cd;
		}
	}

IL_009c:
	try
	{ // begin try (depth: 1)
		Tuple_2_t3253106730 * L_15 = __this->get_U3CentryU3E__0_0();
		NullCheck(L_15);
		SendOrPostCallback_t2750080073 * L_16 = Tuple_2_get_Item1_m2108757255(L_15, /*hidden argument*/Tuple_2_get_Item1_m2108757255_RuntimeMethod_var);
		Tuple_2_t3253106730 * L_17 = __this->get_U3CentryU3E__0_0();
		NullCheck(L_17);
		RuntimeObject * L_18 = Tuple_2_get_Item2_m972515913(L_17, /*hidden argument*/Tuple_2_get_Item2_m972515913_RuntimeMethod_var);
		NullCheck(L_16);
		SendOrPostCallback_Invoke_m937799800(L_16, L_18, /*hidden argument*/NULL);
		goto IL_00cd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00bc;
		throw e;
	}

CATCH_00bc:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		goto IL_00cd;
	} // end catch (depth: 1)

IL_00cd:
	{
		__this->set_U24current_3(NULL);
		bool L_21 = __this->get_U24disposing_4();
		if (L_21)
		{
			goto IL_00e3;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_00e3:
	{
		goto IL_00f6;
	}

IL_00e8:
	{
		goto IL_0021;
	}
	// Dead block : IL_00ed: ldarg.0

IL_00f4:
	{
		return (bool)0;
	}

IL_00f6:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m102131211 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m294689182 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m1821353851 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m3292094358 (U3CStartU3Ec__Iterator0_t1125778690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator0_Reset_m3292094358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator0_Reset_m3292094358_RuntimeMethod_var);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
