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

// System.Action
struct Action_t1264377477;
// System.Action`1<System.Action>
struct Action_1_t1436845072;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t3359742907;
// System.Action`1<System.Threading.Tasks.Task>[]
struct Action_1U5BU5D_t1565167354;
// System.ActivationContext
struct ActivationContext_t976916018;
// System.AggregateException
struct AggregateException_t3586243216;
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
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t2477436928;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t416590138;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t1869307717;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t3512676632;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t880095394;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t3252057032;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t600458651;
// System.Collections.Generic.IList`1<System.WeakReference>
struct IList_1_t3150206499;
// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct List_1_t536850353;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_t2908811991;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2649313536;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.EventHandler
struct EventHandler_t1348719766;
// System.Exception
struct Exception_t;
// System.Exception[]
struct ExceptionU5BU5D_t2535001212;
// System.Func`1<System.Int32>
struct Func_1_t2380692400;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t2317969963;
// System.Func`2<System.Threading.Tasks.Task,System.Int32>
struct Func_2_t1042699071;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t2775508208;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2
struct U3CContinueWithU3Ec__AnonStorey2_t408331350;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Threading.Tasks.TaskScheduler/<Post>c__AnonStorey0
struct U3CPostU3Ec__AnonStorey0_t2101353913;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t558034686;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Action_1_t1436845072_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* AggregateException_t3586243216_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t2380692400_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t1042699071_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1869307717_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2908811991_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t536850353_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t2649313536_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SynchronizationContext_t2326897723_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskFactory_t2660013028_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskScheduler_t1196198384_il2cpp_TypeInfo_var;
extern RuntimeClass* Task_t3187275312_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadLocal_1_t558034686_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CContinueWithU3Ec__AnonStorey2_t408331350_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CPostU3Ec__AnonStorey0_t2101353913_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3108314859;
extern String_t* _stringLiteral3784574829;
extern const RuntimeMethod* Action_1_Invoke_m102365216_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m1705883979_RuntimeMethod_var;
extern const RuntimeMethod* CancellationTokenSource_Cancel_m475678108_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisException_t_m1212571614_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1367400319_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2714166759_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3208262100_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3960799247_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2005119865_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3152717224_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m403340765_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m2799097583_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m723135826_RuntimeMethod_var;
extern const RuntimeMethod* Task_ContinueWith_TisInt32_t2950945753_m4168882456_RuntimeMethod_var;
extern const RuntimeMethod* Task_U3CexecutionDepthU3Em__0_m1067854210_RuntimeMethod_var;
extern const RuntimeMethod* Task_U3CimmediateExecutorU3Em__1_m723122634_RuntimeMethod_var;
extern const RuntimeMethod* Task_Wait_m319809510_RuntimeMethod_var;
extern const RuntimeMethod* ThreadLocal_1__ctor_m2002828957_RuntimeMethod_var;
extern const RuntimeMethod* ThreadLocal_1_get_Value_m4260241862_RuntimeMethod_var;
extern const RuntimeMethod* ThreadLocal_1_set_Value_m928706297_RuntimeMethod_var;
extern const RuntimeMethod* U3CContinueWithU3Ec__AnonStorey2_U3CU3Em__0_m2442362760_RuntimeMethod_var;
extern const RuntimeMethod* U3CPostU3Ec__AnonStorey0_U3CU3Em__0_m3578688865_RuntimeMethod_var;
extern const uint32_t AggregateException_Flatten_m3350031473_MetadataUsageId;
extern const uint32_t AggregateException_ToString_m3274986950_MetadataUsageId;
extern const uint32_t AggregateException__ctor_m2412340583_MetadataUsageId;
extern const uint32_t CancellationTokenSource_Cancel_m475678108_MetadataUsageId;
extern const uint32_t CancellationTokenSource_Register_m3314457072_MetadataUsageId;
extern const uint32_t CancellationTokenSource_Unregister_m447441061_MetadataUsageId;
extern const uint32_t TaskFactory__ctor_m1781098567_MetadataUsageId;
extern const uint32_t TaskScheduler_Post_m569969481_MetadataUsageId;
extern const uint32_t TaskScheduler__cctor_m447174666_MetadataUsageId;
extern const uint32_t TaskScheduler__ctor_m1514590597_MetadataUsageId;
extern const uint32_t Task_ContinueWith_m3532563952_MetadataUsageId;
extern const uint32_t Task_U3CimmediateExecutorU3Em__1_m723122634_MetadataUsageId;
extern const uint32_t Task_Wait_m319809510_MetadataUsageId;
extern const uint32_t Task__cctor_m1509853403_MetadataUsageId;
extern const uint32_t Task__ctor_m103637820_MetadataUsageId;
extern const uint32_t Task_get_Factory_m3890333327_MetadataUsageId;
extern const uint32_t U3CContinueWithU3Ec__AnonStorey2_U3CU3Em__0_m2442362760_MetadataUsageId;

struct DelegateU5BU5D_t1703627840;


#ifndef U3CMODULEU3E_T692745550_H
#define U3CMODULEU3E_T692745550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745550 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745550_H
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
#ifndef LIST_1_T536850353_H
#define LIST_1_T536850353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>
struct  List_1_t536850353  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t1565167354* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t536850353, ____items_1)); }
	inline Action_1U5BU5D_t1565167354* get__items_1() const { return ____items_1; }
	inline Action_1U5BU5D_t1565167354** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Action_1U5BU5D_t1565167354* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t536850353, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t536850353, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t536850353_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Action_1U5BU5D_t1565167354* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t536850353_StaticFields, ___EmptyArray_4)); }
	inline Action_1U5BU5D_t1565167354* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Action_1U5BU5D_t1565167354** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Action_1U5BU5D_t1565167354* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T536850353_H
#ifndef LIST_1_T2908811991_H
#define LIST_1_T2908811991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Exception>
struct  List_1_t2908811991  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t2535001212* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2908811991, ____items_1)); }
	inline ExceptionU5BU5D_t2535001212* get__items_1() const { return ____items_1; }
	inline ExceptionU5BU5D_t2535001212** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ExceptionU5BU5D_t2535001212* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2908811991, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2908811991, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2908811991_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ExceptionU5BU5D_t2535001212* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2908811991_StaticFields, ___EmptyArray_4)); }
	inline ExceptionU5BU5D_t2535001212* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ExceptionU5BU5D_t2535001212** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ExceptionU5BU5D_t2535001212* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2908811991_H
#ifndef READONLYCOLLECTION_1_T2649313536_H
#define READONLYCOLLECTION_1_T2649313536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t2649313536  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2649313536, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T2649313536_H
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
#ifndef CANCELLATIONTOKENSOURCE_T540272775_H
#define CANCELLATIONTOKENSOURCE_T540272775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenSource
struct  CancellationTokenSource_t540272775  : public RuntimeObject
{
public:
	// System.Object System.Threading.CancellationTokenSource::mutex
	RuntimeObject * ___mutex_0;
	// System.Action System.Threading.CancellationTokenSource::actions
	Action_t1264377477 * ___actions_1;
	// System.Boolean System.Threading.CancellationTokenSource::isCancellationRequested
	bool ___isCancellationRequested_2;

public:
	inline static int32_t get_offset_of_mutex_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___mutex_0)); }
	inline RuntimeObject * get_mutex_0() const { return ___mutex_0; }
	inline RuntimeObject ** get_address_of_mutex_0() { return &___mutex_0; }
	inline void set_mutex_0(RuntimeObject * value)
	{
		___mutex_0 = value;
		Il2CppCodeGenWriteBarrier((&___mutex_0), value);
	}

	inline static int32_t get_offset_of_actions_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___actions_1)); }
	inline Action_t1264377477 * get_actions_1() const { return ___actions_1; }
	inline Action_t1264377477 ** get_address_of_actions_1() { return &___actions_1; }
	inline void set_actions_1(Action_t1264377477 * value)
	{
		___actions_1 = value;
		Il2CppCodeGenWriteBarrier((&___actions_1), value);
	}

	inline static int32_t get_offset_of_isCancellationRequested_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t540272775, ___isCancellationRequested_2)); }
	inline bool get_isCancellationRequested_2() const { return ___isCancellationRequested_2; }
	inline bool* get_address_of_isCancellationRequested_2() { return &___isCancellationRequested_2; }
	inline void set_isCancellationRequested_2(bool value)
	{
		___isCancellationRequested_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELLATIONTOKENSOURCE_T540272775_H
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
#ifndef U3CCONTINUEWITHU3EC__ANONSTOREY2_T408331350_H
#define U3CCONTINUEWITHU3EC__ANONSTOREY2_T408331350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2
struct  U3CContinueWithU3Ec__AnonStorey2_t408331350  : public RuntimeObject
{
public:
	// System.Action`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2::continuation
	Action_1_t3359742907 * ___continuation_0;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey2_t408331350, ___continuation_0)); }
	inline Action_1_t3359742907 * get_continuation_0() const { return ___continuation_0; }
	inline Action_1_t3359742907 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Action_1_t3359742907 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCONTINUEWITHU3EC__ANONSTOREY2_T408331350_H
#ifndef TASKEXTENSIONS_T2119891112_H
#define TASKEXTENSIONS_T2119891112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskExtensions
struct  TaskExtensions_t2119891112  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKEXTENSIONS_T2119891112_H
#ifndef TASKSCHEDULER_T1196198384_H
#define TASKSCHEDULER_T1196198384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t1196198384  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t2326897723 * ___context_1;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384, ___context_1)); }
	inline SynchronizationContext_t2326897723 * get_context_1() const { return ___context_1; }
	inline SynchronizationContext_t2326897723 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(SynchronizationContext_t2326897723 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((&___context_1), value);
	}
};

struct TaskScheduler_t1196198384_StaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t2326897723 * ___defaultContext_0;

public:
	inline static int32_t get_offset_of_defaultContext_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t1196198384_StaticFields, ___defaultContext_0)); }
	inline SynchronizationContext_t2326897723 * get_defaultContext_0() const { return ___defaultContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_defaultContext_0() { return &___defaultContext_0; }
	inline void set_defaultContext_0(SynchronizationContext_t2326897723 * value)
	{
		___defaultContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKSCHEDULER_T1196198384_H
#ifndef U3CPOSTU3EC__ANONSTOREY0_T2101353913_H
#define U3CPOSTU3EC__ANONSTOREY0_T2101353913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler/<Post>c__AnonStorey0
struct  U3CPostU3Ec__AnonStorey0_t2101353913  : public RuntimeObject
{
public:
	// System.Action System.Threading.Tasks.TaskScheduler/<Post>c__AnonStorey0::action
	Action_t1264377477 * ___action_0;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(U3CPostU3Ec__AnonStorey0_t2101353913, ___action_0)); }
	inline Action_t1264377477 * get_action_0() const { return ___action_0; }
	inline Action_t1264377477 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t1264377477 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPOSTU3EC__ANONSTOREY0_T2101353913_H
#ifndef THREADLOCAL_1_T558034686_H
#define THREADLOCAL_1_T558034686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadLocal`1<System.Int32>
struct  ThreadLocal_1_t558034686  : public RuntimeObject
{
public:
	// System.Boolean System.Threading.ThreadLocal`1::disposed
	bool ___disposed_3;
	// System.Int64 System.Threading.ThreadLocal`1::id
	int64_t ___id_4;
	// System.Func`1<T> System.Threading.ThreadLocal`1::valueFactory
	Func_1_t2380692400 * ___valueFactory_5;

public:
	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686, ___id_4)); }
	inline int64_t get_id_4() const { return ___id_4; }
	inline int64_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int64_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_valueFactory_5() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686, ___valueFactory_5)); }
	inline Func_1_t2380692400 * get_valueFactory_5() const { return ___valueFactory_5; }
	inline Func_1_t2380692400 ** get_address_of_valueFactory_5() { return &___valueFactory_5; }
	inline void set_valueFactory_5(Func_1_t2380692400 * value)
	{
		___valueFactory_5 = value;
		Il2CppCodeGenWriteBarrier((&___valueFactory_5), value);
	}
};

struct ThreadLocal_1_t558034686_StaticFields
{
public:
	// System.Int64 System.Threading.ThreadLocal`1::lastId
	int64_t ___lastId_0;
	// System.Collections.Generic.IList`1<System.WeakReference> System.Threading.ThreadLocal`1::allDataDictionaries
	RuntimeObject* ___allDataDictionaries_2;
	// System.Func`1<T> System.Threading.ThreadLocal`1::<>f__am$cache0
	Func_1_t2380692400 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_lastId_0() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686_StaticFields, ___lastId_0)); }
	inline int64_t get_lastId_0() const { return ___lastId_0; }
	inline int64_t* get_address_of_lastId_0() { return &___lastId_0; }
	inline void set_lastId_0(int64_t value)
	{
		___lastId_0 = value;
	}

	inline static int32_t get_offset_of_allDataDictionaries_2() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686_StaticFields, ___allDataDictionaries_2)); }
	inline RuntimeObject* get_allDataDictionaries_2() const { return ___allDataDictionaries_2; }
	inline RuntimeObject** get_address_of_allDataDictionaries_2() { return &___allDataDictionaries_2; }
	inline void set_allDataDictionaries_2(RuntimeObject* value)
	{
		___allDataDictionaries_2 = value;
		Il2CppCodeGenWriteBarrier((&___allDataDictionaries_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Func_1_t2380692400 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Func_1_t2380692400 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Func_1_t2380692400 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}
};

struct ThreadLocal_1_t558034686_ThreadStaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1::threadLocalData
	RuntimeObject* ___threadLocalData_1;

public:
	inline static int32_t get_offset_of_threadLocalData_1() { return static_cast<int32_t>(offsetof(ThreadLocal_1_t558034686_ThreadStaticFields, ___threadLocalData_1)); }
	inline RuntimeObject* get_threadLocalData_1() const { return ___threadLocalData_1; }
	inline RuntimeObject** get_address_of_threadLocalData_1() { return &___threadLocalData_1; }
	inline void set_threadLocalData_1(RuntimeObject* value)
	{
		___threadLocalData_1 = value;
		Il2CppCodeGenWriteBarrier((&___threadLocalData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADLOCAL_1_T558034686_H
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
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::source
	CancellationTokenSource_t540272775 * ___source_0;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___source_0)); }
	inline CancellationTokenSource_t540272775 * get_source_0() const { return ___source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(CancellationTokenSource_t540272775 * value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef CANCELLATIONTOKENREGISTRATION_T2813424904_H
#define CANCELLATIONTOKENREGISTRATION_T2813424904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_t2813424904 
{
public:
	// System.Action System.Threading.CancellationTokenRegistration::action
	Action_t1264377477 * ___action_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenRegistration::source
	CancellationTokenSource_t540272775 * ___source_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t2813424904, ___action_0)); }
	inline Action_t1264377477 * get_action_0() const { return ___action_0; }
	inline Action_t1264377477 ** get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(Action_t1264377477 * value)
	{
		___action_0 = value;
		Il2CppCodeGenWriteBarrier((&___action_0), value);
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t2813424904, ___source_1)); }
	inline CancellationTokenSource_t540272775 * get_source_1() const { return ___source_1; }
	inline CancellationTokenSource_t540272775 ** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(CancellationTokenSource_t540272775 * value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t2813424904_marshaled_pinvoke
{
	Il2CppMethodPointer ___action_0;
	CancellationTokenSource_t540272775 * ___source_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t2813424904_marshaled_com
{
	Il2CppMethodPointer ___action_0;
	CancellationTokenSource_t540272775 * ___source_1;
};
#endif // CANCELLATIONTOKENREGISTRATION_T2813424904_H
#ifndef TASK_1_T61518632_H
#define TASK_1_T61518632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_t61518632  : public Task_t3187275312
{
public:
	// T System.Threading.Tasks.Task`1::result
	int32_t ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t61518632, ___result_7)); }
	inline int32_t get_result_7() const { return ___result_7; }
	inline int32_t* get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(int32_t value)
	{
		___result_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T61518632_H
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
#ifndef TASKFACTORY_T2660013028_H
#define TASKFACTORY_T2660013028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t2660013028  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::scheduler
	TaskScheduler_t1196198384 * ___scheduler_0;
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::cancellationToken
	CancellationToken_t784455623  ___cancellationToken_1;

public:
	inline static int32_t get_offset_of_scheduler_0() { return static_cast<int32_t>(offsetof(TaskFactory_t2660013028, ___scheduler_0)); }
	inline TaskScheduler_t1196198384 * get_scheduler_0() const { return ___scheduler_0; }
	inline TaskScheduler_t1196198384 ** get_address_of_scheduler_0() { return &___scheduler_0; }
	inline void set_scheduler_0(TaskScheduler_t1196198384 * value)
	{
		___scheduler_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_0), value);
	}

	inline static int32_t get_offset_of_cancellationToken_1() { return static_cast<int32_t>(offsetof(TaskFactory_t2660013028, ___cancellationToken_1)); }
	inline CancellationToken_t784455623  get_cancellationToken_1() const { return ___cancellationToken_1; }
	inline CancellationToken_t784455623 * get_address_of_cancellationToken_1() { return &___cancellationToken_1; }
	inline void set_cancellationToken_1(CancellationToken_t784455623  value)
	{
		___cancellationToken_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKFACTORY_T2660013028_H
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
#ifndef ACTION_1_T1436845072_H
#define ACTION_1_T1436845072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Action>
struct  Action_1_t1436845072  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1436845072_H
#ifndef ACTION_1_T3359742907_H
#define ACTION_1_T3359742907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Threading.Tasks.Task>
struct  Action_1_t3359742907  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3359742907_H
#ifndef FUNC_1_T2380692400_H
#define FUNC_1_T2380692400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Int32>
struct  Func_1_t2380692400  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T2380692400_H
#ifndef FUNC_2_T1042699071_H
#define FUNC_2_T1042699071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Threading.Tasks.Task,System.Int32>
struct  Func_2_t1042699071  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1042699071_H
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


// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m823724574_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyCollection_1__ctor_m3900376080_gshared (ReadOnlyCollection_1_t4292682451 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m1703441965_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m1645301223_gshared (Func_2_t2317969963 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Int32>(System.Func`2<System.Threading.Tasks.Task,T>,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_1_t61518632 * Task_ContinueWith_TisInt32_t2950945753_m4168882456_gshared (Task_t3187275312 * __this, Func_2_t1042699071 * ___continuation0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m1367400319_gshared (Func_1_t2380692400 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.ctor(System.Func`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void ThreadLocal_1__ctor_m2002828957_gshared (ThreadLocal_1_t558034686 * __this, Func_1_t2380692400 * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Threading.ThreadLocal`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t ThreadLocal_1_get_Value_m4260241862_gshared (ThreadLocal_1_t558034686 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ThreadLocal`1<System.Int32>::set_Value(!0)
extern "C" IL2CPP_METHOD_ATTR void ThreadLocal_1_set_Value_m928706297_gshared (ThreadLocal_1_t558034686 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Exception>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t2908811991 * Enumerable_ToList_TisException_t_m1212571614 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t2908811991 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m823724574_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::.ctor(System.Collections.Generic.IList`1<!0>)
inline void ReadOnlyCollection_1__ctor_m723135826 (ReadOnlyCollection_1_t2649313536 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollection_1_t2649313536 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m3900376080_gshared)(__this, p0, method);
}
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C" IL2CPP_METHOD_ATTR void AggregateException_set_InnerExceptions_m3226968125 (AggregateException_t3586243216 * __this, ReadOnlyCollection_1_t2649313536 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_m2005119865 (List_1_t2908811991 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2908811991 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2649313536 * AggregateException_get_InnerExceptions_m2706272495 (AggregateException_t3586243216 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2799097583 (ReadOnlyCollection_1_t2649313536 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t2649313536 *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m1703441965_gshared)(__this, method);
}
// System.AggregateException System.AggregateException::Flatten()
extern "C" IL2CPP_METHOD_ATTR AggregateException_t3586243216 * AggregateException_Flatten_m3350031473 (AggregateException_t3586243216 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Exception>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3208262100 (List_1_t2908811991 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2908811991 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(!0)
inline void List_1_Add_m3960799247 (List_1_t2908811991 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2908811991 *, Exception_t *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern "C" IL2CPP_METHOD_ATTR void AggregateException__ctor_m2412340583 (AggregateException_t3586243216 * __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method);
// System.String System.Exception::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Exception_ToString_m1413572637 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2989139009 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m1438862993 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_t2813424904  CancellationTokenSource_Register_m3314457072 (CancellationTokenSource_t540272775 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_t2813424904  CancellationToken_Register_m2102259550 (CancellationToken_t784455623 * __this, Action_t1264377477 * ___callback0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenRegistration__ctor_m1891161396 (CancellationTokenRegistration_t2813424904 * __this, CancellationTokenSource_t540272775 * ___source0, Action_t1264377477 * ___action1, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenSource_Unregister_m447441061 (CancellationTokenSource_t540272775 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m3366716184 (CancellationTokenRegistration_t2813424904 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C" IL2CPP_METHOD_ATTR bool CancellationTokenSource_get_IsCancellationRequested_m1998452844 (CancellationTokenSource_t540272775 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m475678108 (CancellationTokenSource_t540272775 * __this, bool ___throwOnFirstException0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_m403340765 (List_1_t2908811991 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2908811991 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Threading.Tasks.Task>>::.ctor()
inline void List_1__ctor_m3152717224 (List_1_t536850353 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t536850353 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskFactory__ctor_m1781098567 (TaskFactory_t2660013028 * __this, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" IL2CPP_METHOD_ATTR AggregateException_t3586243216 * Task_get_Exception_m1363338588 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m3967183205 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Monitor::Wait(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Monitor_Wait_m2644425468 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_m4214781122 (Task_t3187275312 * __this, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" IL2CPP_METHOD_ATTR CancellationToken_t784455623  CancellationToken_get_None_m3806680868 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_ContinueWith_m3532563952 (Task_t3187275312 * __this, Action_1_t3359742907 * ___continuation0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CContinueWithU3Ec__AnonStorey2__ctor_m2897701466 (U3CContinueWithU3Ec__AnonStorey2_t408331350 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.Tasks.Task,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2714166759 (Func_2_t1042699071 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1042699071 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1645301223_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.Task::ContinueWith<System.Int32>(System.Func`2<System.Threading.Tasks.Task,T>,System.Threading.CancellationToken)
inline Task_1_t61518632 * Task_ContinueWith_TisInt32_t2950945753_m4168882456 (Task_t3187275312 * __this, Func_2_t1042699071 * ___continuation0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	return ((  Task_1_t61518632 * (*) (Task_t3187275312 *, Func_2_t1042699071 *, CancellationToken_t784455623 , const RuntimeMethod*))Task_ContinueWith_TisInt32_t2950945753_m4168882456_gshared)(__this, ___continuation0, ___cancellationToken1, method);
}
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1367400319 (Func_1_t2380692400 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2380692400 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m1367400319_gshared)(__this, p0, p1, method);
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.ctor(System.Func`1<!0>)
inline void ThreadLocal_1__ctor_m2002828957 (ThreadLocal_1_t558034686 * __this, Func_1_t2380692400 * p0, const RuntimeMethod* method)
{
	((  void (*) (ThreadLocal_1_t558034686 *, Func_1_t2380692400 *, const RuntimeMethod*))ThreadLocal_1__ctor_m2002828957_gshared)(__this, p0, method);
}
// System.Void System.Action`1<System.Action>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1705883979 (Action_1_t1436845072 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1436845072 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" IL2CPP_METHOD_ATTR AppDomain_t1571427825 * AppDomain_get_CurrentDomain_m182766250 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.AppDomain::get_FriendlyName()
extern "C" IL2CPP_METHOD_ATTR String_t* AppDomain_get_FriendlyName_m643824662 (AppDomain_t1571427825 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// !0 System.Threading.ThreadLocal`1<System.Int32>::get_Value()
inline int32_t ThreadLocal_1_get_Value_m4260241862 (ThreadLocal_1_t558034686 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ThreadLocal_1_t558034686 *, const RuntimeMethod*))ThreadLocal_1_get_Value_m4260241862_gshared)(__this, method);
}
// System.Void System.Threading.ThreadLocal`1<System.Int32>::set_Value(!0)
inline void ThreadLocal_1_set_Value_m928706297 (ThreadLocal_1_t558034686 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (ThreadLocal_1_t558034686 *, int32_t, const RuntimeMethod*))ThreadLocal_1_set_Value_m928706297_gshared)(__this, p0, method);
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C" IL2CPP_METHOD_ATTR TaskFactory_t2660013028 * Task_get_Factory_m3890333327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C" IL2CPP_METHOD_ATTR TaskScheduler_t1196198384 * TaskFactory_get_Scheduler_m2886007471 (TaskFactory_t2660013028 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C" IL2CPP_METHOD_ATTR void TaskScheduler_Post_m569969481 (TaskScheduler_t1196198384 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task>::Invoke(!0)
inline void Action_1_Invoke_m102365216 (Action_1_t3359742907 * __this, Task_t3187275312 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3359742907 *, Task_t3187275312 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method);
}
// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C" IL2CPP_METHOD_ATTR void TaskScheduler__ctor_m1514590597 (TaskScheduler_t1196198384 * __this, SynchronizationContext_t2326897723 * ___context0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory__ctor_m1656316748 (TaskFactory_t2660013028 * __this, TaskScheduler_t1196198384 * ___scheduler0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskScheduler/<Post>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPostU3Ec__AnonStorey0__ctor_m3159961233 (U3CPostU3Ec__AnonStorey0_t2101353913 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m1566534627 (SendOrPostCallback_t2750080073 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m2514243817 (SynchronizationContext_t2326897723 * __this, const RuntimeMethod* method);
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
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern "C" IL2CPP_METHOD_ATTR void AggregateException__ctor_m2412340583 (AggregateException_t3586243216 * __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AggregateException__ctor_m2412340583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___innerExceptions0;
		List_1_t2908811991 * L_1 = Enumerable_ToList_TisException_t_m1212571614(NULL /*static, unused*/, L_0, /*hidden argument*/Enumerable_ToList_TisException_t_m1212571614_RuntimeMethod_var);
		ReadOnlyCollection_1_t2649313536 * L_2 = (ReadOnlyCollection_1_t2649313536 *)il2cpp_codegen_object_new(ReadOnlyCollection_1_t2649313536_il2cpp_TypeInfo_var);
		ReadOnlyCollection_1__ctor_m723135826(L_2, L_1, /*hidden argument*/ReadOnlyCollection_1__ctor_m723135826_RuntimeMethod_var);
		AggregateException_set_InnerExceptions_m3226968125(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2649313536 * AggregateException_get_InnerExceptions_m2706272495 (AggregateException_t3586243216 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2649313536 * L_0 = __this->get_U3CInnerExceptionsU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C" IL2CPP_METHOD_ATTR void AggregateException_set_InnerExceptions_m3226968125 (AggregateException_t3586243216 * __this, ReadOnlyCollection_1_t2649313536 * ___value0, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2649313536 * L_0 = ___value0;
		__this->set_U3CInnerExceptionsU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.AggregateException System.AggregateException::Flatten()
extern "C" IL2CPP_METHOD_ATTR AggregateException_t3586243216 * AggregateException_Flatten_m3350031473 (AggregateException_t3586243216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AggregateException_Flatten_m3350031473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2908811991 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	AggregateException_t3586243216 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2908811991 * L_0 = (List_1_t2908811991 *)il2cpp_codegen_object_new(List_1_t2908811991_il2cpp_TypeInfo_var);
		List_1__ctor_m2005119865(L_0, /*hidden argument*/List_1__ctor_m2005119865_RuntimeMethod_var);
		V_0 = L_0;
		ReadOnlyCollection_1_t2649313536 * L_1 = AggregateException_get_InnerExceptions_m2706272495(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = ReadOnlyCollection_1_GetEnumerator_m2799097583(L_1, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m2799097583_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0017:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			Exception_t * L_4 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t1869307717_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			Exception_t * L_5 = V_1;
			V_3 = ((AggregateException_t3586243216 *)IsInstClass((RuntimeObject*)L_5, AggregateException_t3586243216_il2cpp_TypeInfo_var));
			AggregateException_t3586243216 * L_6 = V_3;
			if (!L_6)
			{
				goto IL_0041;
			}
		}

IL_002b:
		{
			List_1_t2908811991 * L_7 = V_0;
			AggregateException_t3586243216 * L_8 = V_3;
			NullCheck(L_8);
			AggregateException_t3586243216 * L_9 = AggregateException_Flatten_m3350031473(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			ReadOnlyCollection_1_t2649313536 * L_10 = AggregateException_get_InnerExceptions_m2706272495(L_9, /*hidden argument*/NULL);
			NullCheck(L_7);
			List_1_AddRange_m3208262100(L_7, L_10, /*hidden argument*/List_1_AddRange_m3208262100_RuntimeMethod_var);
			goto IL_0048;
		}

IL_0041:
		{
			List_1_t2908811991 * L_11 = V_0;
			Exception_t * L_12 = V_1;
			NullCheck(L_11);
			List_1_Add_m3960799247(L_11, L_12, /*hidden argument*/List_1_Add_m3960799247_RuntimeMethod_var);
		}

IL_0048:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0017;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_0064;
			}
		}

IL_005e:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_0064:
		{
			IL2CPP_END_FINALLY(88)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		List_1_t2908811991 * L_17 = V_0;
		AggregateException_t3586243216 * L_18 = (AggregateException_t3586243216 *)il2cpp_codegen_object_new(AggregateException_t3586243216_il2cpp_TypeInfo_var);
		AggregateException__ctor_m2412340583(L_18, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.String System.AggregateException::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* AggregateException_ToString_m3274986950 (AggregateException_t3586243216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AggregateException_ToString_m3274986950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Exception_t * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = Exception_ToString_m1413572637(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2989139009(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ReadOnlyCollection_1_t2649313536 * L_2 = AggregateException_get_InnerExceptions_m2706272495(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = ReadOnlyCollection_1_GetEnumerator_m2799097583(L_2, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m2799097583_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003d;
		}

IL_001d:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			Exception_t * L_5 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t1869307717_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			StringBuilder_t * L_6 = V_0;
			NullCheck(L_6);
			StringBuilder_AppendLine_m1438862993(L_6, _stringLiteral3108314859, /*hidden argument*/NULL);
			StringBuilder_t * L_7 = V_0;
			Exception_t * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			NullCheck(L_7);
			StringBuilder_AppendLine_m1438862993(L_7, L_9, /*hidden argument*/NULL);
		}

IL_003d:
		{
			RuntimeObject* L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_0059;
			}
		}

IL_0053:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(77)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005a:
	{
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
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
// Conversion methods for marshalling of: System.Threading.CancellationToken
extern "C" void CancellationToken_t784455623_marshal_pinvoke(const CancellationToken_t784455623& unmarshaled, CancellationToken_t784455623_marshaled_pinvoke& marshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationToken': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL, NULL);
}
extern "C" void CancellationToken_t784455623_marshal_pinvoke_back(const CancellationToken_t784455623_marshaled_pinvoke& marshaled, CancellationToken_t784455623& unmarshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationToken': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Threading.CancellationToken
extern "C" void CancellationToken_t784455623_marshal_pinvoke_cleanup(CancellationToken_t784455623_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Threading.CancellationToken
extern "C" void CancellationToken_t784455623_marshal_com(const CancellationToken_t784455623& unmarshaled, CancellationToken_t784455623_marshaled_com& marshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationToken': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL, NULL);
}
extern "C" void CancellationToken_t784455623_marshal_com_back(const CancellationToken_t784455623_marshaled_com& marshaled, CancellationToken_t784455623& unmarshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationToken': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Threading.CancellationToken
extern "C" void CancellationToken_t784455623_marshal_com_cleanup(CancellationToken_t784455623_marshaled_com& marshaled)
{
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C" IL2CPP_METHOD_ATTR CancellationToken_t784455623  CancellationToken_get_None_m3806680868 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	CancellationToken_t784455623  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t784455623 ));
		CancellationToken_t784455623  L_0 = V_0;
		return L_0;
	}
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_t2813424904  CancellationToken_Register_m2102259550 (CancellationToken_t784455623 * __this, Action_t1264377477 * ___callback0, const RuntimeMethod* method)
{
	CancellationTokenRegistration_t2813424904  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CancellationTokenSource_t540272775 * L_0 = __this->get_source_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		CancellationTokenSource_t540272775 * L_1 = __this->get_source_0();
		Action_t1264377477 * L_2 = ___callback0;
		NullCheck(L_1);
		CancellationTokenRegistration_t2813424904  L_3 = CancellationTokenSource_Register_m3314457072(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationTokenRegistration_t2813424904 ));
		CancellationTokenRegistration_t2813424904  L_4 = V_0;
		return L_4;
	}
}
extern "C"  CancellationTokenRegistration_t2813424904  CancellationToken_Register_m2102259550_AdjustorThunk (RuntimeObject * __this, Action_t1264377477 * ___callback0, const RuntimeMethod* method)
{
	CancellationToken_t784455623 * _thisAdjusted = reinterpret_cast<CancellationToken_t784455623 *>(__this + 1);
	return CancellationToken_Register_m2102259550(_thisAdjusted, ___callback0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Threading.CancellationTokenRegistration
extern "C" void CancellationTokenRegistration_t2813424904_marshal_pinvoke(const CancellationTokenRegistration_t2813424904& unmarshaled, CancellationTokenRegistration_t2813424904_marshaled_pinvoke& marshaled)
{
	Exception_t* ___source_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationTokenRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_1Exception, NULL, NULL);
}
extern "C" void CancellationTokenRegistration_t2813424904_marshal_pinvoke_back(const CancellationTokenRegistration_t2813424904_marshaled_pinvoke& marshaled, CancellationTokenRegistration_t2813424904& unmarshaled)
{
	Exception_t* ___source_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationTokenRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Threading.CancellationTokenRegistration
extern "C" void CancellationTokenRegistration_t2813424904_marshal_pinvoke_cleanup(CancellationTokenRegistration_t2813424904_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Threading.CancellationTokenRegistration
extern "C" void CancellationTokenRegistration_t2813424904_marshal_com(const CancellationTokenRegistration_t2813424904& unmarshaled, CancellationTokenRegistration_t2813424904_marshaled_com& marshaled)
{
	Exception_t* ___source_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationTokenRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_1Exception, NULL, NULL);
}
extern "C" void CancellationTokenRegistration_t2813424904_marshal_com_back(const CancellationTokenRegistration_t2813424904_marshaled_com& marshaled, CancellationTokenRegistration_t2813424904& unmarshaled)
{
	Exception_t* ___source_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'CancellationTokenRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.Threading.CancellationTokenRegistration
extern "C" void CancellationTokenRegistration_t2813424904_marshal_com_cleanup(CancellationTokenRegistration_t2813424904_marshaled_com& marshaled)
{
}
// System.Void System.Threading.CancellationTokenRegistration::.ctor(System.Threading.CancellationTokenSource,System.Action)
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenRegistration__ctor_m1891161396 (CancellationTokenRegistration_t2813424904 * __this, CancellationTokenSource_t540272775 * ___source0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t540272775 * L_0 = ___source0;
		__this->set_source_1(L_0);
		Action_t1264377477 * L_1 = ___action1;
		__this->set_action_0(L_1);
		return;
	}
}
extern "C"  void CancellationTokenRegistration__ctor_m1891161396_AdjustorThunk (RuntimeObject * __this, CancellationTokenSource_t540272775 * ___source0, Action_t1264377477 * ___action1, const RuntimeMethod* method)
{
	CancellationTokenRegistration_t2813424904 * _thisAdjusted = reinterpret_cast<CancellationTokenRegistration_t2813424904 *>(__this + 1);
	CancellationTokenRegistration__ctor_m1891161396(_thisAdjusted, ___source0, ___action1, method);
}
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m3366716184 (CancellationTokenRegistration_t2813424904 * __this, const RuntimeMethod* method)
{
	{
		CancellationTokenSource_t540272775 * L_0 = __this->get_source_1();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Action_t1264377477 * L_1 = __this->get_action_0();
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		CancellationTokenSource_t540272775 * L_2 = __this->get_source_1();
		Action_t1264377477 * L_3 = __this->get_action_0();
		NullCheck(L_2);
		CancellationTokenSource_Unregister_m447441061(L_2, L_3, /*hidden argument*/NULL);
		__this->set_action_0((Action_t1264377477 *)NULL);
		__this->set_source_1((CancellationTokenSource_t540272775 *)NULL);
	}

IL_0035:
	{
		return;
	}
}
extern "C"  void CancellationTokenRegistration_Dispose_m3366716184_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CancellationTokenRegistration_t2813424904 * _thisAdjusted = reinterpret_cast<CancellationTokenRegistration_t2813424904 *>(__this + 1);
	CancellationTokenRegistration_Dispose_m3366716184(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C" IL2CPP_METHOD_ATTR CancellationTokenRegistration_t2813424904  CancellationTokenSource_Register_m3314457072 (CancellationTokenSource_t540272775 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationTokenSource_Register_m3314457072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	CancellationTokenRegistration_t2813424904  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_mutex_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			Action_t1264377477 * L_2 = __this->get_actions_1();
			Action_t1264377477 * L_3 = ___action0;
			Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
			__this->set_actions_1(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_4, Action_t1264377477_il2cpp_TypeInfo_var)));
			bool L_5 = CancellationTokenSource_get_IsCancellationRequested_m1998452844(__this, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002f:
		{
			CancellationTokenSource_Cancel_m475678108(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0036:
		{
			Action_t1264377477 * L_6 = ___action0;
			CancellationTokenRegistration_t2813424904  L_7;
			memset(&L_7, 0, sizeof(L_7));
			CancellationTokenRegistration__ctor_m1891161396((&L_7), __this, L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			IL2CPP_LEAVE(0x4A, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		CancellationTokenRegistration_t2813424904  L_9 = V_1;
		return L_9;
	}
}
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenSource_Unregister_m447441061 (CancellationTokenSource_t540272775 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationTokenSource_Unregister_m447441061_MetadataUsageId);
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
		RuntimeObject * L_0 = __this->get_mutex_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Action_t1264377477 * L_2 = __this->get_actions_1();
		Action_t1264377477 * L_3 = ___action0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->set_actions_1(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_4, Action_t1264377477_il2cpp_TypeInfo_var)));
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		RuntimeObject * L_5 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C" IL2CPP_METHOD_ATTR bool CancellationTokenSource_get_IsCancellationRequested_m1998452844 (CancellationTokenSource_t540272775 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_mutex_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool L_2 = __this->get_isCancellationRequested_2();
		V_1 = L_2;
		IL2CPP_LEAVE(0x20, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(25)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m475678108 (CancellationTokenSource_t540272775 * __this, bool ___throwOnFirstException0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationTokenSource_Cancel_m475678108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Delegate_t1188392813 * V_1 = NULL;
	DelegateU5BU5D_t1703627840* V_2 = NULL;
	int32_t V_3 = 0;
	List_1_t2908811991 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_mutex_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			__this->set_isCancellationRequested_2((bool)1);
			Action_t1264377477 * L_2 = __this->get_actions_1();
			if (!L_2)
			{
				goto IL_00a2;
			}
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			{
				bool L_3 = ___throwOnFirstException0;
				if (!L_3)
				{
					goto IL_0035;
				}
			}

IL_0025:
			{
				Action_t1264377477 * L_4 = __this->get_actions_1();
				NullCheck(L_4);
				Action_Invoke_m937035532(L_4, /*hidden argument*/NULL);
				goto IL_0095;
			}

IL_0035:
			{
				Action_t1264377477 * L_5 = __this->get_actions_1();
				NullCheck(L_5);
				DelegateU5BU5D_t1703627840* L_6 = VirtFuncInvoker0< DelegateU5BU5D_t1703627840* >::Invoke(9 /* System.Delegate[] System.Delegate::GetInvocationList() */, L_5);
				V_2 = L_6;
				V_3 = 0;
				goto IL_008c;
			}

IL_0048:
			{
				DelegateU5BU5D_t1703627840* L_7 = V_2;
				int32_t L_8 = V_3;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				Delegate_t1188392813 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_1 = L_10;
				List_1_t2908811991 * L_11 = (List_1_t2908811991 *)il2cpp_codegen_object_new(List_1_t2908811991_il2cpp_TypeInfo_var);
				List_1__ctor_m2005119865(L_11, /*hidden argument*/List_1__ctor_m2005119865_RuntimeMethod_var);
				V_4 = L_11;
			}

IL_0053:
			try
			{ // begin try (depth: 3)
				Delegate_t1188392813 * L_12 = V_1;
				NullCheck(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_12, Action_t1264377477_il2cpp_TypeInfo_var)));
				Action_Invoke_m937035532(((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_12, Action_t1264377477_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				goto IL_0073;
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__exception_local = (Exception_t *)e.ex;
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
					goto CATCH_0063;
				throw e;
			}

CATCH_0063:
			{ // begin catch(System.Exception)
				V_5 = ((Exception_t *)__exception_local);
				List_1_t2908811991 * L_13 = V_4;
				Exception_t * L_14 = V_5;
				NullCheck(L_13);
				List_1_Add_m3960799247(L_13, L_14, /*hidden argument*/List_1_Add_m3960799247_RuntimeMethod_var);
				goto IL_0073;
			} // end catch (depth: 3)

IL_0073:
			{
				List_1_t2908811991 * L_15 = V_4;
				NullCheck(L_15);
				int32_t L_16 = List_1_get_Count_m403340765(L_15, /*hidden argument*/List_1_get_Count_m403340765_RuntimeMethod_var);
				if ((((int32_t)L_16) <= ((int32_t)0)))
				{
					goto IL_0088;
				}
			}

IL_0080:
			{
				List_1_t2908811991 * L_17 = V_4;
				AggregateException_t3586243216 * L_18 = (AggregateException_t3586243216 *)il2cpp_codegen_object_new(AggregateException_t3586243216_il2cpp_TypeInfo_var);
				AggregateException__ctor_m2412340583(L_18, L_17, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, CancellationTokenSource_Cancel_m475678108_RuntimeMethod_var);
			}

IL_0088:
			{
				int32_t L_19 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
			}

IL_008c:
			{
				int32_t L_20 = V_3;
				DelegateU5BU5D_t1703627840* L_21 = V_2;
				NullCheck(L_21);
				if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
				{
					goto IL_0048;
				}
			}

IL_0095:
			{
				IL2CPP_LEAVE(0xA2, FINALLY_009a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009a;
		}

FINALLY_009a:
		{ // begin finally (depth: 2)
			__this->set_actions_1((Action_t1264377477 *)NULL);
			IL2CPP_END_FINALLY(154)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(154)
		{
			IL2CPP_JUMP_TBL(0xA2, IL_00a2)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xAE, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		RuntimeObject * L_22 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(167)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ae:
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
// System.Void System.Threading.Tasks.Task::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Task__ctor_m103637820 (Task_t3187275312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task__ctor_m103637820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set_mutex_2(L_0);
		List_1_t536850353 * L_1 = (List_1_t536850353 *)il2cpp_codegen_object_new(List_1_t536850353_il2cpp_TypeInfo_var);
		List_1__ctor_m3152717224(L_1, /*hidden argument*/List_1__ctor_m3152717224_RuntimeMethod_var);
		__this->set_continuations_3(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C" IL2CPP_METHOD_ATTR TaskFactory_t2660013028 * Task_get_Factory_m3890333327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_get_Factory_m3890333327_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskFactory_t2660013028 * L_0 = (TaskFactory_t2660013028 *)il2cpp_codegen_object_new(TaskFactory_t2660013028_il2cpp_TypeInfo_var);
		TaskFactory__ctor_m1781098567(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C" IL2CPP_METHOD_ATTR AggregateException_t3586243216 * Task_get_Exception_m1363338588 (Task_t3187275312 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	AggregateException_t3586243216 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		AggregateException_t3586243216 * L_2 = __this->get_exception_4();
		V_1 = L_2;
		IL2CPP_LEAVE(0x20, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(25)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		AggregateException_t3586243216 * L_4 = V_1;
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m3056077931 (Task_t3187275312 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool L_2 = __this->get_isCanceled_5();
		V_1 = L_2;
		IL2CPP_LEAVE(0x20, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(25)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m3967183205 (Task_t3187275312 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = __this->get_mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		bool L_2 = __this->get_isCompleted_6();
		V_1 = L_2;
		IL2CPP_LEAVE(0x20, FINALLY_0019);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0019;
	}

FINALLY_0019:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(25)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(25)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0020:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C" IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_m4214781122 (Task_t3187275312 * __this, const RuntimeMethod* method)
{
	{
		AggregateException_t3586243216 * L_0 = Task_get_Exception_m1363338588(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((RuntimeObject*)(AggregateException_t3586243216 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Threading.Tasks.Task::Wait()
extern "C" IL2CPP_METHOD_ATTR void Task_Wait_m319809510 (Task_t3187275312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_Wait_m319809510_MetadataUsageId);
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
		RuntimeObject * L_0 = __this->get_mutex_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = Task_get_IsCompleted_m3967183205(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0024;
			}
		}

IL_0018:
		{
			RuntimeObject * L_3 = __this->get_mutex_2();
			Monitor_Wait_m2644425468(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		}

IL_0024:
		{
			bool L_4 = Task_get_IsFaulted_m4214781122(__this, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0036;
			}
		}

IL_002f:
		{
			AggregateException_t3586243216 * L_5 = Task_get_Exception_m1363338588(__this, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Task_Wait_m319809510_RuntimeMethod_var);
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
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_ContinueWith_m4223483204 (Task_t3187275312 * __this, Action_1_t3359742907 * ___continuation0, const RuntimeMethod* method)
{
	{
		Action_1_t3359742907 * L_0 = ___continuation0;
		CancellationToken_t784455623  L_1 = CancellationToken_get_None_m3806680868(NULL /*static, unused*/, /*hidden argument*/NULL);
		Task_t3187275312 * L_2 = Task_ContinueWith_m3532563952(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR Task_t3187275312 * Task_ContinueWith_m3532563952 (Task_t3187275312 * __this, Action_1_t3359742907 * ___continuation0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_ContinueWith_m3532563952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CContinueWithU3Ec__AnonStorey2_t408331350 * V_0 = NULL;
	{
		U3CContinueWithU3Ec__AnonStorey2_t408331350 * L_0 = (U3CContinueWithU3Ec__AnonStorey2_t408331350 *)il2cpp_codegen_object_new(U3CContinueWithU3Ec__AnonStorey2_t408331350_il2cpp_TypeInfo_var);
		U3CContinueWithU3Ec__AnonStorey2__ctor_m2897701466(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CContinueWithU3Ec__AnonStorey2_t408331350 * L_1 = V_0;
		Action_1_t3359742907 * L_2 = ___continuation0;
		NullCheck(L_1);
		L_1->set_continuation_0(L_2);
		U3CContinueWithU3Ec__AnonStorey2_t408331350 * L_3 = V_0;
		intptr_t L_4 = (intptr_t)U3CContinueWithU3Ec__AnonStorey2_U3CU3Em__0_m2442362760_RuntimeMethod_var;
		Func_2_t1042699071 * L_5 = (Func_2_t1042699071 *)il2cpp_codegen_object_new(Func_2_t1042699071_il2cpp_TypeInfo_var);
		Func_2__ctor_m2714166759(L_5, L_3, L_4, /*hidden argument*/Func_2__ctor_m2714166759_RuntimeMethod_var);
		CancellationToken_t784455623  L_6 = ___cancellationToken1;
		Task_1_t61518632 * L_7 = Task_ContinueWith_TisInt32_t2950945753_m4168882456(__this, L_5, L_6, /*hidden argument*/Task_ContinueWith_TisInt32_t2950945753_m4168882456_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void System.Threading.Tasks.Task::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Task__cctor_m1509853403 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task__cctor_m1509853403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)Task_U3CexecutionDepthU3Em__0_m1067854210_RuntimeMethod_var;
		Func_1_t2380692400 * L_1 = (Func_1_t2380692400 *)il2cpp_codegen_object_new(Func_1_t2380692400_il2cpp_TypeInfo_var);
		Func_1__ctor_m1367400319(L_1, NULL, L_0, /*hidden argument*/Func_1__ctor_m1367400319_RuntimeMethod_var);
		ThreadLocal_1_t558034686 * L_2 = (ThreadLocal_1_t558034686 *)il2cpp_codegen_object_new(ThreadLocal_1_t558034686_il2cpp_TypeInfo_var);
		ThreadLocal_1__ctor_m2002828957(L_2, L_1, /*hidden argument*/ThreadLocal_1__ctor_m2002828957_RuntimeMethod_var);
		((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->set_executionDepth_0(L_2);
		intptr_t L_3 = (intptr_t)Task_U3CimmediateExecutorU3Em__1_m723122634_RuntimeMethod_var;
		Action_1_t1436845072 * L_4 = (Action_1_t1436845072 *)il2cpp_codegen_object_new(Action_1_t1436845072_il2cpp_TypeInfo_var);
		Action_1__ctor_m1705883979(L_4, NULL, L_3, /*hidden argument*/Action_1__ctor_m1705883979_RuntimeMethod_var);
		((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->set_immediateExecutor_1(L_4);
		return;
	}
}
// System.Int32 System.Threading.Tasks.Task::<executionDepth>m__0()
extern "C" IL2CPP_METHOD_ATTR int32_t Task_U3CexecutionDepthU3Em__0_m1067854210 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void System.Threading.Tasks.Task::<immediateExecutor>m__1(System.Action)
extern "C" IL2CPP_METHOD_ATTR void Task_U3CimmediateExecutorU3Em__1_m723122634 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Task_U3CimmediateExecutorU3Em__1_m723122634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		AppDomain_t1571427825 * L_0 = AppDomain_get_CurrentDomain_m182766250(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = AppDomain_get_FriendlyName_m643824662(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = String_Equals_m2270643605(L_1, _stringLiteral3784574829, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = ((int32_t)10);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		V_1 = ((int32_t)200);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		ThreadLocal_1_t558034686 * L_4 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_executionDepth_0();
		ThreadLocal_1_t558034686 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = ThreadLocal_1_get_Value_m4260241862(L_5, /*hidden argument*/ThreadLocal_1_get_Value_m4260241862_RuntimeMethod_var);
		NullCheck(L_5);
		ThreadLocal_1_set_Value_m928706297(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/ThreadLocal_1_set_Value_m928706297_RuntimeMethod_var);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			ThreadLocal_1_t558034686 * L_7 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_executionDepth_0();
			NullCheck(L_7);
			int32_t L_8 = ThreadLocal_1_get_Value_m4260241862(L_7, /*hidden argument*/ThreadLocal_1_get_Value_m4260241862_RuntimeMethod_var);
			int32_t L_9 = V_1;
			if ((((int32_t)L_8) > ((int32_t)L_9)))
			{
				goto IL_0051;
			}
		}

IL_0046:
		{
			Action_t1264377477 * L_10 = ___a0;
			NullCheck(L_10);
			Action_Invoke_m937035532(L_10, /*hidden argument*/NULL);
			goto IL_0061;
		}

IL_0051:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
			TaskFactory_t2660013028 * L_11 = Task_get_Factory_m3890333327(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskScheduler_t1196198384 * L_12 = TaskFactory_get_Scheduler_m2886007471(L_11, /*hidden argument*/NULL);
			Action_t1264377477 * L_13 = ___a0;
			NullCheck(L_12);
			TaskScheduler_Post_m569969481(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x79, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Task_t3187275312_il2cpp_TypeInfo_var);
		ThreadLocal_1_t558034686 * L_14 = ((Task_t3187275312_StaticFields*)il2cpp_codegen_static_fields_for(Task_t3187275312_il2cpp_TypeInfo_var))->get_executionDepth_0();
		ThreadLocal_1_t558034686 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = ThreadLocal_1_get_Value_m4260241862(L_15, /*hidden argument*/ThreadLocal_1_get_Value_m4260241862_RuntimeMethod_var);
		NullCheck(L_15);
		ThreadLocal_1_set_Value_m928706297(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/ThreadLocal_1_set_Value_m928706297_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0079:
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
// System.Void System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CContinueWithU3Ec__AnonStorey2__ctor_m2897701466 (U3CContinueWithU3Ec__AnonStorey2_t408331350 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2::<>m__0(System.Threading.Tasks.Task)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CContinueWithU3Ec__AnonStorey2_U3CU3Em__0_m2442362760 (U3CContinueWithU3Ec__AnonStorey2_t408331350 * __this, Task_t3187275312 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CContinueWithU3Ec__AnonStorey2_U3CU3Em__0_m2442362760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3359742907 * L_0 = __this->get_continuation_0();
		Task_t3187275312 * L_1 = ___t0;
		NullCheck(L_0);
		Action_1_Invoke_m102365216(L_0, L_1, /*hidden argument*/Action_1_Invoke_m102365216_RuntimeMethod_var);
		return 0;
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
// System.Void System.Threading.Tasks.TaskFactory::.ctor(System.Threading.Tasks.TaskScheduler,System.Threading.CancellationToken)
extern "C" IL2CPP_METHOD_ATTR void TaskFactory__ctor_m1656316748 (TaskFactory_t2660013028 * __this, TaskScheduler_t1196198384 * ___scheduler0, CancellationToken_t784455623  ___cancellationToken1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TaskScheduler_t1196198384 * L_0 = ___scheduler0;
		__this->set_scheduler_0(L_0);
		CancellationToken_t784455623  L_1 = ___cancellationToken1;
		__this->set_cancellationToken_1(L_1);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskFactory::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TaskFactory__ctor_m1781098567 (TaskFactory_t2660013028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskFactory__ctor_m1781098567_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskScheduler_t1196198384 * L_0 = (TaskScheduler_t1196198384 *)il2cpp_codegen_object_new(TaskScheduler_t1196198384_il2cpp_TypeInfo_var);
		TaskScheduler__ctor_m1514590597(L_0, (SynchronizationContext_t2326897723 *)NULL, /*hidden argument*/NULL);
		CancellationToken_t784455623  L_1 = CancellationToken_get_None_m3806680868(NULL /*static, unused*/, /*hidden argument*/NULL);
		TaskFactory__ctor_m1656316748(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::get_Scheduler()
extern "C" IL2CPP_METHOD_ATTR TaskScheduler_t1196198384 * TaskFactory_get_Scheduler_m2886007471 (TaskFactory_t2660013028 * __this, const RuntimeMethod* method)
{
	{
		TaskScheduler_t1196198384 * L_0 = __this->get_scheduler_0();
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
// System.Void System.Threading.Tasks.TaskScheduler::.ctor(System.Threading.SynchronizationContext)
extern "C" IL2CPP_METHOD_ATTR void TaskScheduler__ctor_m1514590597 (TaskScheduler_t1196198384 * __this, SynchronizationContext_t2326897723 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskScheduler__ctor_m1514590597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_t2326897723 * G_B2_0 = NULL;
	TaskScheduler_t1196198384 * G_B2_1 = NULL;
	SynchronizationContext_t2326897723 * G_B1_0 = NULL;
	TaskScheduler_t1196198384 * G_B1_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SynchronizationContext_t2326897723 * L_0 = ___context0;
		SynchronizationContext_t2326897723 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t1196198384_il2cpp_TypeInfo_var);
		SynchronizationContext_t2326897723 * L_2 = ((TaskScheduler_t1196198384_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t1196198384_il2cpp_TypeInfo_var))->get_defaultContext_0();
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_0014:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_context_1(G_B2_0);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskScheduler::Post(System.Action)
extern "C" IL2CPP_METHOD_ATTR void TaskScheduler_Post_m569969481 (TaskScheduler_t1196198384 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskScheduler_Post_m569969481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPostU3Ec__AnonStorey0_t2101353913 * V_0 = NULL;
	{
		U3CPostU3Ec__AnonStorey0_t2101353913 * L_0 = (U3CPostU3Ec__AnonStorey0_t2101353913 *)il2cpp_codegen_object_new(U3CPostU3Ec__AnonStorey0_t2101353913_il2cpp_TypeInfo_var);
		U3CPostU3Ec__AnonStorey0__ctor_m3159961233(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPostU3Ec__AnonStorey0_t2101353913 * L_1 = V_0;
		Action_t1264377477 * L_2 = ___action0;
		NullCheck(L_1);
		L_1->set_action_0(L_2);
		SynchronizationContext_t2326897723 * L_3 = __this->get_context_1();
		U3CPostU3Ec__AnonStorey0_t2101353913 * L_4 = V_0;
		intptr_t L_5 = (intptr_t)U3CPostU3Ec__AnonStorey0_U3CU3Em__0_m3578688865_RuntimeMethod_var;
		SendOrPostCallback_t2750080073 * L_6 = (SendOrPostCallback_t2750080073 *)il2cpp_codegen_object_new(SendOrPostCallback_t2750080073_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_m1566534627(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< SendOrPostCallback_t2750080073 *, RuntimeObject * >::Invoke(6 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_6, NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskScheduler::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TaskScheduler__cctor_m447174666 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskScheduler__cctor_m447174666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_t2326897723 * L_0 = (SynchronizationContext_t2326897723 *)il2cpp_codegen_object_new(SynchronizationContext_t2326897723_il2cpp_TypeInfo_var);
		SynchronizationContext__ctor_m2514243817(L_0, /*hidden argument*/NULL);
		((TaskScheduler_t1196198384_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t1196198384_il2cpp_TypeInfo_var))->set_defaultContext_0(L_0);
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
// System.Void System.Threading.Tasks.TaskScheduler/<Post>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CPostU3Ec__AnonStorey0__ctor_m3159961233 (U3CPostU3Ec__AnonStorey0_t2101353913 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskScheduler/<Post>c__AnonStorey0::<>m__0(System.Object)
extern "C" IL2CPP_METHOD_ATTR void U3CPostU3Ec__AnonStorey0_U3CU3Em__0_m3578688865 (U3CPostU3Ec__AnonStorey0_t2101353913 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		Action_t1264377477 * L_0 = __this->get_action_0();
		NullCheck(L_0);
		Action_Invoke_m937035532(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
