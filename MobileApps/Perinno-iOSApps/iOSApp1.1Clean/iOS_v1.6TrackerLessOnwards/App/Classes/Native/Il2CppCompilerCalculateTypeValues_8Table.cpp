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


// System.AppDomain
struct AppDomain_t1571427825;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1196077101;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.AssemblyName
struct AssemblyName_t270931938;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.IPermission
struct IPermission_t4015543450;
// System.Security.NamedPermissionSet
struct NamedPermissionSet_t2915669112;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t4144114052;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2954997752;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3355146440;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3811807446;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Policy.IApplicationTrustManager
struct IApplicationTrustManager_t1290658629;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t97388457;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2891196107;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t3052133691;
// System.Security.Principal.IIdentity
struct IIdentity_t2948385546;
// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t2948242406;
// System.Security.SecurityElement
struct SecurityElement_t1046076091;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.CompressedStack
struct CompressedStack_t1202932761;
// System.Type
struct Type_t;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;




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
#ifndef CODEACCESSPERMISSION_T2681295399_H
#define CODEACCESSPERMISSION_T2681295399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2681295399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2681295399_H
#ifndef HOSTSECURITYMANAGER_T1435734729_H
#define HOSTSECURITYMANAGER_T1435734729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManager
struct  HostSecurityManager_t1435734729  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTSECURITYMANAGER_T1435734729_H
#ifndef PERMISSIONBUILDER_T1403083973_H
#define PERMISSIONBUILDER_T1403083973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionBuilder
struct  PermissionBuilder_t1403083973  : public RuntimeObject
{
public:

public:
};

struct PermissionBuilder_t1403083973_StaticFields
{
public:
	// System.Object[] System.Security.PermissionBuilder::psNone
	ObjectU5BU5D_t2843939325* ___psNone_0;

public:
	inline static int32_t get_offset_of_psNone_0() { return static_cast<int32_t>(offsetof(PermissionBuilder_t1403083973_StaticFields, ___psNone_0)); }
	inline ObjectU5BU5D_t2843939325* get_psNone_0() const { return ___psNone_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_psNone_0() { return &___psNone_0; }
	inline void set_psNone_0(ObjectU5BU5D_t2843939325* value)
	{
		___psNone_0 = value;
		Il2CppCodeGenWriteBarrier((&___psNone_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONBUILDER_T1403083973_H
#ifndef PERMISSIONSET_T223948603_H
#define PERMISSIONSET_T223948603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t223948603  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::<Resolver>k__BackingField
	PolicyLevel_t2891196107 * ___U3CResolverU3Ek__BackingField_0;
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CResolverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___U3CResolverU3Ek__BackingField_0)); }
	inline PolicyLevel_t2891196107 * get_U3CResolverU3Ek__BackingField_0() const { return ___U3CResolverU3Ek__BackingField_0; }
	inline PolicyLevel_t2891196107 ** get_address_of_U3CResolverU3Ek__BackingField_0() { return &___U3CResolverU3Ek__BackingField_0; }
	inline void set_U3CResolverU3Ek__BackingField_0(PolicyLevel_t2891196107 * value)
	{
		___U3CResolverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResolverU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PermissionSet_t223948603, ___U3CDeclarativeSecurityU3Ek__BackingField_1)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_1() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return &___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_1(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T223948603_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T1244998447_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T1244998447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t1244998447  : public RuntimeObject
{
public:
	// System.Int32 System.Security.PermissionSet/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_0;
	// System.Object System.Security.PermissionSet/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_1;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1244998447, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t1244998447, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T1244998447_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t4144114052  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t4144114052, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T4144114052_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t3641947072  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t3641947072, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3641947072_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#define STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t3355146440  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t4116647657* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t3355146440, ___pubkey_0)); }
	inline ByteU5BU5D_t4116647657* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t4116647657* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T3355146440_H
#ifndef ALLMEMBERSHIPCONDITION_T198137363_H
#define ALLMEMBERSHIPCONDITION_T198137363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.AllMembershipCondition
struct  AllMembershipCondition_t198137363  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.AllMembershipCondition::version
	int32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(AllMembershipCondition_t198137363, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLMEMBERSHIPCONDITION_T198137363_H
#ifndef APPLICATIONSECURITYMANAGER_T826984714_H
#define APPLICATIONSECURITYMANAGER_T826984714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationSecurityManager
struct  ApplicationSecurityManager_t826984714  : public RuntimeObject
{
public:

public:
};

struct ApplicationSecurityManager_t826984714_StaticFields
{
public:
	// System.Security.Policy.IApplicationTrustManager System.Security.Policy.ApplicationSecurityManager::_appTrustManager
	RuntimeObject* ____appTrustManager_0;

public:
	inline static int32_t get_offset_of__appTrustManager_0() { return static_cast<int32_t>(offsetof(ApplicationSecurityManager_t826984714_StaticFields, ____appTrustManager_0)); }
	inline RuntimeObject* get__appTrustManager_0() const { return ____appTrustManager_0; }
	inline RuntimeObject** get_address_of__appTrustManager_0() { return &____appTrustManager_0; }
	inline void set__appTrustManager_0(RuntimeObject* value)
	{
		____appTrustManager_0 = value;
		Il2CppCodeGenWriteBarrier((&____appTrustManager_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONSECURITYMANAGER_T826984714_H
#ifndef APPLICATIONTRUST_T3270368423_H
#define APPLICATIONTRUST_T3270368423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t3270368423  : public RuntimeObject
{
public:
	// System.ApplicationIdentity System.Security.Policy.ApplicationTrust::_appid
	ApplicationIdentity_t1917735356 * ____appid_0;
	// System.Security.Policy.PolicyStatement System.Security.Policy.ApplicationTrust::_defaultPolicy
	PolicyStatement_t3052133691 * ____defaultPolicy_1;
	// System.Object System.Security.Policy.ApplicationTrust::_xtranfo
	RuntimeObject * ____xtranfo_2;
	// System.Boolean System.Security.Policy.ApplicationTrust::_trustrun
	bool ____trustrun_3;
	// System.Boolean System.Security.Policy.ApplicationTrust::_persist
	bool ____persist_4;
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_5;

public:
	inline static int32_t get_offset_of__appid_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____appid_0)); }
	inline ApplicationIdentity_t1917735356 * get__appid_0() const { return ____appid_0; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__appid_0() { return &____appid_0; }
	inline void set__appid_0(ApplicationIdentity_t1917735356 * value)
	{
		____appid_0 = value;
		Il2CppCodeGenWriteBarrier((&____appid_0), value);
	}

	inline static int32_t get_offset_of__defaultPolicy_1() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____defaultPolicy_1)); }
	inline PolicyStatement_t3052133691 * get__defaultPolicy_1() const { return ____defaultPolicy_1; }
	inline PolicyStatement_t3052133691 ** get_address_of__defaultPolicy_1() { return &____defaultPolicy_1; }
	inline void set__defaultPolicy_1(PolicyStatement_t3052133691 * value)
	{
		____defaultPolicy_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultPolicy_1), value);
	}

	inline static int32_t get_offset_of__xtranfo_2() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____xtranfo_2)); }
	inline RuntimeObject * get__xtranfo_2() const { return ____xtranfo_2; }
	inline RuntimeObject ** get_address_of__xtranfo_2() { return &____xtranfo_2; }
	inline void set__xtranfo_2(RuntimeObject * value)
	{
		____xtranfo_2 = value;
		Il2CppCodeGenWriteBarrier((&____xtranfo_2), value);
	}

	inline static int32_t get_offset_of__trustrun_3() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____trustrun_3)); }
	inline bool get__trustrun_3() const { return ____trustrun_3; }
	inline bool* get_address_of__trustrun_3() { return &____trustrun_3; }
	inline void set__trustrun_3(bool value)
	{
		____trustrun_3 = value;
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of_fullTrustAssemblies_5() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3270368423, ___fullTrustAssemblies_5)); }
	inline RuntimeObject* get_fullTrustAssemblies_5() const { return ___fullTrustAssemblies_5; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_5() { return &___fullTrustAssemblies_5; }
	inline void set_fullTrustAssemblies_5(RuntimeObject* value)
	{
		___fullTrustAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T3270368423_H
#ifndef CODECONNECTACCESS_T1103527196_H
#define CODECONNECTACCESS_T1103527196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeConnectAccess
struct  CodeConnectAccess_t1103527196  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::_scheme
	String_t* ____scheme_4;
	// System.Int32 System.Security.Policy.CodeConnectAccess::_port
	int32_t ____port_5;

public:
	inline static int32_t get_offset_of__scheme_4() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____scheme_4)); }
	inline String_t* get__scheme_4() const { return ____scheme_4; }
	inline String_t** get_address_of__scheme_4() { return &____scheme_4; }
	inline void set__scheme_4(String_t* value)
	{
		____scheme_4 = value;
		Il2CppCodeGenWriteBarrier((&____scheme_4), value);
	}

	inline static int32_t get_offset_of__port_5() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196, ____port_5)); }
	inline int32_t get__port_5() const { return ____port_5; }
	inline int32_t* get_address_of__port_5() { return &____port_5; }
	inline void set__port_5(int32_t value)
	{
		____port_5 = value;
	}
};

struct CodeConnectAccess_t1103527196_StaticFields
{
public:
	// System.String System.Security.Policy.CodeConnectAccess::AnyScheme
	String_t* ___AnyScheme_0;
	// System.Int32 System.Security.Policy.CodeConnectAccess::DefaultPort
	int32_t ___DefaultPort_1;
	// System.Int32 System.Security.Policy.CodeConnectAccess::OriginPort
	int32_t ___OriginPort_2;
	// System.String System.Security.Policy.CodeConnectAccess::OriginScheme
	String_t* ___OriginScheme_3;

public:
	inline static int32_t get_offset_of_AnyScheme_0() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___AnyScheme_0)); }
	inline String_t* get_AnyScheme_0() const { return ___AnyScheme_0; }
	inline String_t** get_address_of_AnyScheme_0() { return &___AnyScheme_0; }
	inline void set_AnyScheme_0(String_t* value)
	{
		___AnyScheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___AnyScheme_0), value);
	}

	inline static int32_t get_offset_of_DefaultPort_1() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___DefaultPort_1)); }
	inline int32_t get_DefaultPort_1() const { return ___DefaultPort_1; }
	inline int32_t* get_address_of_DefaultPort_1() { return &___DefaultPort_1; }
	inline void set_DefaultPort_1(int32_t value)
	{
		___DefaultPort_1 = value;
	}

	inline static int32_t get_offset_of_OriginPort_2() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginPort_2)); }
	inline int32_t get_OriginPort_2() const { return ___OriginPort_2; }
	inline int32_t* get_address_of_OriginPort_2() { return &___OriginPort_2; }
	inline void set_OriginPort_2(int32_t value)
	{
		___OriginPort_2 = value;
	}

	inline static int32_t get_offset_of_OriginScheme_3() { return static_cast<int32_t>(offsetof(CodeConnectAccess_t1103527196_StaticFields, ___OriginScheme_3)); }
	inline String_t* get_OriginScheme_3() const { return ___OriginScheme_3; }
	inline String_t** get_address_of_OriginScheme_3() { return &___OriginScheme_3; }
	inline void set_OriginScheme_3(String_t* value)
	{
		___OriginScheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___OriginScheme_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODECONNECTACCESS_T1103527196_H
#ifndef CODEGROUP_T3811807446_H
#define CODEGROUP_T3811807446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t3811807446  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t3052133691 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2718874744 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_policy_0)); }
	inline PolicyStatement_t3052133691 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t3052133691 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t3052133691 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446, ___m_children_4)); }
	inline ArrayList_t2718874744 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2718874744 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2718874744 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t3811807446_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2A_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_5() { return static_cast<int32_t>(offsetof(CodeGroup_t3811807446_StaticFields, ___U3CU3Ef__switchU24map2A_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2A_5() const { return ___U3CU3Ef__switchU24map2A_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2A_5() { return &___U3CU3Ef__switchU24map2A_5; }
	inline void set_U3CU3Ef__switchU24map2A_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2A_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T3811807446_H
#ifndef DEFAULTPOLICIES_T2520506789_H
#define DEFAULTPOLICIES_T2520506789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies
struct  DefaultPolicies_t2520506789  : public RuntimeObject
{
public:

public:
};

struct DefaultPolicies_t2520506789_StaticFields
{
public:
	// System.Version System.Security.Policy.DefaultPolicies::_fxVersion
	Version_t3456873960 * ____fxVersion_0;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_ecmaKey
	ByteU5BU5D_t4116647657* ____ecmaKey_1;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_ecma
	StrongNamePublicKeyBlob_t3355146440 * ____ecma_2;
	// System.Byte[] System.Security.Policy.DefaultPolicies::_msFinalKey
	ByteU5BU5D_t4116647657* ____msFinalKey_3;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.DefaultPolicies::_msFinal
	StrongNamePublicKeyBlob_t3355146440 * ____msFinal_4;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_fullTrust
	NamedPermissionSet_t2915669112 * ____fullTrust_5;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_localIntranet
	NamedPermissionSet_t2915669112 * ____localIntranet_6;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_internet
	NamedPermissionSet_t2915669112 * ____internet_7;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_skipVerification
	NamedPermissionSet_t2915669112 * ____skipVerification_8;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_execution
	NamedPermissionSet_t2915669112 * ____execution_9;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_nothing
	NamedPermissionSet_t2915669112 * ____nothing_10;
	// System.Security.NamedPermissionSet System.Security.Policy.DefaultPolicies::_everything
	NamedPermissionSet_t2915669112 * ____everything_11;

public:
	inline static int32_t get_offset_of__fxVersion_0() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fxVersion_0)); }
	inline Version_t3456873960 * get__fxVersion_0() const { return ____fxVersion_0; }
	inline Version_t3456873960 ** get_address_of__fxVersion_0() { return &____fxVersion_0; }
	inline void set__fxVersion_0(Version_t3456873960 * value)
	{
		____fxVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&____fxVersion_0), value);
	}

	inline static int32_t get_offset_of__ecmaKey_1() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecmaKey_1)); }
	inline ByteU5BU5D_t4116647657* get__ecmaKey_1() const { return ____ecmaKey_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__ecmaKey_1() { return &____ecmaKey_1; }
	inline void set__ecmaKey_1(ByteU5BU5D_t4116647657* value)
	{
		____ecmaKey_1 = value;
		Il2CppCodeGenWriteBarrier((&____ecmaKey_1), value);
	}

	inline static int32_t get_offset_of__ecma_2() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____ecma_2)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__ecma_2() const { return ____ecma_2; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__ecma_2() { return &____ecma_2; }
	inline void set__ecma_2(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____ecma_2 = value;
		Il2CppCodeGenWriteBarrier((&____ecma_2), value);
	}

	inline static int32_t get_offset_of__msFinalKey_3() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinalKey_3)); }
	inline ByteU5BU5D_t4116647657* get__msFinalKey_3() const { return ____msFinalKey_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__msFinalKey_3() { return &____msFinalKey_3; }
	inline void set__msFinalKey_3(ByteU5BU5D_t4116647657* value)
	{
		____msFinalKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____msFinalKey_3), value);
	}

	inline static int32_t get_offset_of__msFinal_4() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____msFinal_4)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get__msFinal_4() const { return ____msFinal_4; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of__msFinal_4() { return &____msFinal_4; }
	inline void set__msFinal_4(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		____msFinal_4 = value;
		Il2CppCodeGenWriteBarrier((&____msFinal_4), value);
	}

	inline static int32_t get_offset_of__fullTrust_5() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____fullTrust_5)); }
	inline NamedPermissionSet_t2915669112 * get__fullTrust_5() const { return ____fullTrust_5; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__fullTrust_5() { return &____fullTrust_5; }
	inline void set__fullTrust_5(NamedPermissionSet_t2915669112 * value)
	{
		____fullTrust_5 = value;
		Il2CppCodeGenWriteBarrier((&____fullTrust_5), value);
	}

	inline static int32_t get_offset_of__localIntranet_6() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____localIntranet_6)); }
	inline NamedPermissionSet_t2915669112 * get__localIntranet_6() const { return ____localIntranet_6; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__localIntranet_6() { return &____localIntranet_6; }
	inline void set__localIntranet_6(NamedPermissionSet_t2915669112 * value)
	{
		____localIntranet_6 = value;
		Il2CppCodeGenWriteBarrier((&____localIntranet_6), value);
	}

	inline static int32_t get_offset_of__internet_7() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____internet_7)); }
	inline NamedPermissionSet_t2915669112 * get__internet_7() const { return ____internet_7; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__internet_7() { return &____internet_7; }
	inline void set__internet_7(NamedPermissionSet_t2915669112 * value)
	{
		____internet_7 = value;
		Il2CppCodeGenWriteBarrier((&____internet_7), value);
	}

	inline static int32_t get_offset_of__skipVerification_8() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____skipVerification_8)); }
	inline NamedPermissionSet_t2915669112 * get__skipVerification_8() const { return ____skipVerification_8; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__skipVerification_8() { return &____skipVerification_8; }
	inline void set__skipVerification_8(NamedPermissionSet_t2915669112 * value)
	{
		____skipVerification_8 = value;
		Il2CppCodeGenWriteBarrier((&____skipVerification_8), value);
	}

	inline static int32_t get_offset_of__execution_9() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____execution_9)); }
	inline NamedPermissionSet_t2915669112 * get__execution_9() const { return ____execution_9; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__execution_9() { return &____execution_9; }
	inline void set__execution_9(NamedPermissionSet_t2915669112 * value)
	{
		____execution_9 = value;
		Il2CppCodeGenWriteBarrier((&____execution_9), value);
	}

	inline static int32_t get_offset_of__nothing_10() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____nothing_10)); }
	inline NamedPermissionSet_t2915669112 * get__nothing_10() const { return ____nothing_10; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__nothing_10() { return &____nothing_10; }
	inline void set__nothing_10(NamedPermissionSet_t2915669112 * value)
	{
		____nothing_10 = value;
		Il2CppCodeGenWriteBarrier((&____nothing_10), value);
	}

	inline static int32_t get_offset_of__everything_11() { return static_cast<int32_t>(offsetof(DefaultPolicies_t2520506789_StaticFields, ____everything_11)); }
	inline NamedPermissionSet_t2915669112 * get__everything_11() const { return ____everything_11; }
	inline NamedPermissionSet_t2915669112 ** get_address_of__everything_11() { return &____everything_11; }
	inline void set__everything_11(NamedPermissionSet_t2915669112 * value)
	{
		____everything_11 = value;
		Il2CppCodeGenWriteBarrier((&____everything_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPOLICIES_T2520506789_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef EVIDENCEENUMERATOR_T1708166667_H
#define EVIDENCEENUMERATOR_T1708166667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1708166667  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1708166667, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1708166667_H
#ifndef HASH_T5925575_H
#define HASH_T5925575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t5925575  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t4116647657* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t5925575, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T5925575_H
#ifndef MEMBERSHIPCONDITIONHELPER_T2246572704_H
#define MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MembershipConditionHelper
struct  MembershipConditionHelper_t2246572704  : public RuntimeObject
{
public:

public:
};

struct MembershipConditionHelper_t2246572704_StaticFields
{
public:
	// System.String System.Security.Policy.MembershipConditionHelper::XmlTag
	String_t* ___XmlTag_0;

public:
	inline static int32_t get_offset_of_XmlTag_0() { return static_cast<int32_t>(offsetof(MembershipConditionHelper_t2246572704_StaticFields, ___XmlTag_0)); }
	inline String_t* get_XmlTag_0() const { return ___XmlTag_0; }
	inline String_t** get_address_of_XmlTag_0() { return &___XmlTag_0; }
	inline void set_XmlTag_0(String_t* value)
	{
		___XmlTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___XmlTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPCONDITIONHELPER_T2246572704_H
#ifndef MONOTRUSTMANAGER_T991661945_H
#define MONOTRUSTMANAGER_T991661945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MonoTrustManager
struct  MonoTrustManager_t991661945  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTRUSTMANAGER_T991661945_H
#ifndef PERMISSIONREQUESTEVIDENCE_T59447972_H
#define PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t59447972  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t223948603 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t223948603 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t223948603 * ___denied_2;

public:
	inline static int32_t get_offset_of_requested_0() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___requested_0)); }
	inline PermissionSet_t223948603 * get_requested_0() const { return ___requested_0; }
	inline PermissionSet_t223948603 ** get_address_of_requested_0() { return &___requested_0; }
	inline void set_requested_0(PermissionSet_t223948603 * value)
	{
		___requested_0 = value;
		Il2CppCodeGenWriteBarrier((&___requested_0), value);
	}

	inline static int32_t get_offset_of_optional_1() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___optional_1)); }
	inline PermissionSet_t223948603 * get_optional_1() const { return ___optional_1; }
	inline PermissionSet_t223948603 ** get_address_of_optional_1() { return &___optional_1; }
	inline void set_optional_1(PermissionSet_t223948603 * value)
	{
		___optional_1 = value;
		Il2CppCodeGenWriteBarrier((&___optional_1), value);
	}

	inline static int32_t get_offset_of_denied_2() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t59447972, ___denied_2)); }
	inline PermissionSet_t223948603 * get_denied_2() const { return ___denied_2; }
	inline PermissionSet_t223948603 ** get_address_of_denied_2() { return &___denied_2; }
	inline void set_denied_2(PermissionSet_t223948603 * value)
	{
		___denied_2 = value;
		Il2CppCodeGenWriteBarrier((&___denied_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONREQUESTEVIDENCE_T59447972_H
#ifndef STRONGNAME_T3675724614_H
#define STRONGNAME_T3675724614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t3675724614  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3355146440 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3456873960 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t3675724614, ___version_2)); }
	inline Version_t3456873960 * get_version_2() const { return ___version_2; }
	inline Version_t3456873960 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3456873960 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3675724614_H
#ifndef STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#define STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t2614563360  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t3355146440 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t3456873960 * ___assemblyVersion_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_blob_1() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___blob_1)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_blob_1() const { return ___blob_1; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_blob_1() { return &___blob_1; }
	inline void set_blob_1(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___blob_1 = value;
		Il2CppCodeGenWriteBarrier((&___blob_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_assemblyVersion_3() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t2614563360, ___assemblyVersion_3)); }
	inline Version_t3456873960 * get_assemblyVersion_3() const { return ___assemblyVersion_3; }
	inline Version_t3456873960 ** get_address_of_assemblyVersion_3() { return &___assemblyVersion_3; }
	inline void set_assemblyVersion_3(Version_t3456873960 * value)
	{
		___assemblyVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMEMBERSHIPCONDITION_T2614563360_H
#ifndef TRUSTMANAGERCONTEXT_T2253791128_H
#define TRUSTMANAGERCONTEXT_T2253791128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.TrustManagerContext
struct  TrustManagerContext_t2253791128  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRUSTMANAGERCONTEXT_T2253791128_H
#ifndef GENERICIDENTITY_T2319019448_H
#define GENERICIDENTITY_T2319019448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericIdentity
struct  GenericIdentity_t2319019448  : public RuntimeObject
{
public:
	// System.String System.Security.Principal.GenericIdentity::m_name
	String_t* ___m_name_0;
	// System.String System.Security.Principal.GenericIdentity::m_type
	String_t* ___m_type_1;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(GenericIdentity_t2319019448, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_0), value);
	}

	inline static int32_t get_offset_of_m_type_1() { return static_cast<int32_t>(offsetof(GenericIdentity_t2319019448, ___m_type_1)); }
	inline String_t* get_m_type_1() const { return ___m_type_1; }
	inline String_t** get_address_of_m_type_1() { return &___m_type_1; }
	inline void set_m_type_1(String_t* value)
	{
		___m_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICIDENTITY_T2319019448_H
#ifndef GENERICPRINCIPAL_T2520297622_H
#define GENERICPRINCIPAL_T2520297622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericPrincipal
struct  GenericPrincipal_t2520297622  : public RuntimeObject
{
public:
	// System.Security.Principal.IIdentity System.Security.Principal.GenericPrincipal::m_identity
	RuntimeObject* ___m_identity_0;
	// System.String[] System.Security.Principal.GenericPrincipal::m_roles
	StringU5BU5D_t1281789340* ___m_roles_1;

public:
	inline static int32_t get_offset_of_m_identity_0() { return static_cast<int32_t>(offsetof(GenericPrincipal_t2520297622, ___m_identity_0)); }
	inline RuntimeObject* get_m_identity_0() const { return ___m_identity_0; }
	inline RuntimeObject** get_address_of_m_identity_0() { return &___m_identity_0; }
	inline void set_m_identity_0(RuntimeObject* value)
	{
		___m_identity_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_identity_0), value);
	}

	inline static int32_t get_offset_of_m_roles_1() { return static_cast<int32_t>(offsetof(GenericPrincipal_t2520297622, ___m_roles_1)); }
	inline StringU5BU5D_t1281789340* get_m_roles_1() const { return ___m_roles_1; }
	inline StringU5BU5D_t1281789340** get_address_of_m_roles_1() { return &___m_roles_1; }
	inline void set_m_roles_1(StringU5BU5D_t1281789340* value)
	{
		___m_roles_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPRINCIPAL_T2520297622_H
#ifndef WINDOWSPRINCIPAL_T239041500_H
#define WINDOWSPRINCIPAL_T239041500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsPrincipal
struct  WindowsPrincipal_t239041500  : public RuntimeObject
{
public:
	// System.Security.Principal.WindowsIdentity System.Security.Principal.WindowsPrincipal::_identity
	WindowsIdentity_t2948242406 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(WindowsPrincipal_t239041500, ____identity_0)); }
	inline WindowsIdentity_t2948242406 * get__identity_0() const { return ____identity_0; }
	inline WindowsIdentity_t2948242406 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(WindowsIdentity_t2948242406 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSPRINCIPAL_T239041500_H
#ifndef SECURITYELEMENT_T1046076091_H
#define SECURITYELEMENT_T1046076091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t1046076091  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t2718874744 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t2718874744 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___attributes_2)); }
	inline ArrayList_t2718874744 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t2718874744 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t2718874744 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091, ___children_3)); }
	inline ArrayList_t2718874744 * get_children_3() const { return ___children_3; }
	inline ArrayList_t2718874744 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t2718874744 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t1046076091_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3528271667* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3528271667* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3528271667* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3528271667* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3528271667* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3528271667* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3528271667* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3528271667* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3528271667* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3528271667* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3528271667* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t1046076091_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3528271667* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3528271667** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3528271667* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T1046076091_H
#ifndef SECURITYATTRIBUTE_T3566489056_H
#define SECURITYATTRIBUTE_T3566489056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t3566489056  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3566489056, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3566489056_H
#ifndef SECURITYMANAGER_T3383402582_H
#define SECURITYMANAGER_T3383402582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3383402582  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t3383402582_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t2718874744 * ____hierarchy_1;
	// System.Security.IPermission System.Security.SecurityManager::_unmanagedCode
	RuntimeObject* ____unmanagedCode_2;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1853889766 * ____declsecCache_3;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t2891196107 * ____level_4;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2954997752 * ____execution_5;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t2718874744 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t2718874744 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t2718874744 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&____hierarchy_1), value);
	}

	inline static int32_t get_offset_of__unmanagedCode_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____unmanagedCode_2)); }
	inline RuntimeObject* get__unmanagedCode_2() const { return ____unmanagedCode_2; }
	inline RuntimeObject** get_address_of__unmanagedCode_2() { return &____unmanagedCode_2; }
	inline void set__unmanagedCode_2(RuntimeObject* value)
	{
		____unmanagedCode_2 = value;
		Il2CppCodeGenWriteBarrier((&____unmanagedCode_2), value);
	}

	inline static int32_t get_offset_of__declsecCache_3() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____declsecCache_3)); }
	inline Hashtable_t1853889766 * get__declsecCache_3() const { return ____declsecCache_3; }
	inline Hashtable_t1853889766 ** get_address_of__declsecCache_3() { return &____declsecCache_3; }
	inline void set__declsecCache_3(Hashtable_t1853889766 * value)
	{
		____declsecCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_3), value);
	}

	inline static int32_t get_offset_of__level_4() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____level_4)); }
	inline PolicyLevel_t2891196107 * get__level_4() const { return ____level_4; }
	inline PolicyLevel_t2891196107 ** get_address_of__level_4() { return &____level_4; }
	inline void set__level_4(PolicyLevel_t2891196107 * value)
	{
		____level_4 = value;
		Il2CppCodeGenWriteBarrier((&____level_4), value);
	}

	inline static int32_t get_offset_of__execution_5() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____execution_5)); }
	inline SecurityPermission_t2954997752 * get__execution_5() const { return ____execution_5; }
	inline SecurityPermission_t2954997752 ** get_address_of__execution_5() { return &____execution_5; }
	inline void set__execution_5(SecurityPermission_t2954997752 * value)
	{
		____execution_5 = value;
		Il2CppCodeGenWriteBarrier((&____execution_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T3383402582_H
#ifndef SECURITYSTATE_T982520134_H
#define SECURITYSTATE_T982520134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityState
struct  SecurityState_t982520134  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSTATE_T982520134_H
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
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t1828959166  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T1828959166_H
#ifndef NAMEDPERMISSIONSET_T2915669112_H
#define NAMEDPERMISSIONSET_T2915669112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t2915669112  : public PermissionSet_t223948603
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_2;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_3;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_description_3() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t2915669112, ___description_3)); }
	inline String_t* get_description_3() const { return ___description_3; }
	inline String_t** get_address_of_description_3() { return &___description_3; }
	inline void set_description_3(String_t* value)
	{
		___description_3 = value;
		Il2CppCodeGenWriteBarrier((&___description_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEDPERMISSIONSET_T2915669112_H
#ifndef SNIP_T4156255223_H
#define SNIP_T4156255223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t4156255223 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t3456873960 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t3355146440 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t3355146440 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t3355146440 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t4156255223, ___AssemblyVersion_2)); }
	inline Version_t3456873960 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t3456873960 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t3456873960 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	char* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t4156255223_marshaled_com
{
	StrongNamePublicKeyBlob_t3355146440 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t3456873960 * ___AssemblyVersion_2;
};
#endif // SNIP_T4156255223_H
#ifndef FIRSTMATCHCODEGROUP_T885469689_H
#define FIRSTMATCHCODEGROUP_T885469689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t885469689  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T885469689_H
#ifndef NETCODEGROUP_T2217812384_H
#define NETCODEGROUP_T2217812384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t2217812384  : public CodeGroup_t3811807446
{
public:
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t1853889766 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;

public:
	inline static int32_t get_offset_of__rules_8() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____rules_8)); }
	inline Hashtable_t1853889766 * get__rules_8() const { return ____rules_8; }
	inline Hashtable_t1853889766 ** get_address_of__rules_8() { return &____rules_8; }
	inline void set__rules_8(Hashtable_t1853889766 * value)
	{
		____rules_8 = value;
		Il2CppCodeGenWriteBarrier((&____rules_8), value);
	}

	inline static int32_t get_offset_of__hashcode_9() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384, ____hashcode_9)); }
	inline int32_t get__hashcode_9() const { return ____hashcode_9; }
	inline int32_t* get_address_of__hashcode_9() { return &____hashcode_9; }
	inline void set__hashcode_9(int32_t value)
	{
		____hashcode_9 = value;
	}
};

struct NetCodeGroup_t2217812384_StaticFields
{
public:
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;

public:
	inline static int32_t get_offset_of_AbsentOriginScheme_6() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AbsentOriginScheme_6)); }
	inline String_t* get_AbsentOriginScheme_6() const { return ___AbsentOriginScheme_6; }
	inline String_t** get_address_of_AbsentOriginScheme_6() { return &___AbsentOriginScheme_6; }
	inline void set_AbsentOriginScheme_6(String_t* value)
	{
		___AbsentOriginScheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___AbsentOriginScheme_6), value);
	}

	inline static int32_t get_offset_of_AnyOtherOriginScheme_7() { return static_cast<int32_t>(offsetof(NetCodeGroup_t2217812384_StaticFields, ___AnyOtherOriginScheme_7)); }
	inline String_t* get_AnyOtherOriginScheme_7() const { return ___AnyOtherOriginScheme_7; }
	inline String_t** get_address_of_AnyOtherOriginScheme_7() { return &___AnyOtherOriginScheme_7; }
	inline void set_AnyOtherOriginScheme_7(String_t* value)
	{
		___AnyOtherOriginScheme_7 = value;
		Il2CppCodeGenWriteBarrier((&___AnyOtherOriginScheme_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCODEGROUP_T2217812384_H
#ifndef UNIONCODEGROUP_T3773268997_H
#define UNIONCODEGROUP_T3773268997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UnionCodeGroup
struct  UnionCodeGroup_t3773268997  : public CodeGroup_t3811807446
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONCODEGROUP_T3773268997_H
#ifndef SECURESTRING_T3041467854_H
#define SECURESTRING_T3041467854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t3041467854  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_2;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_3;
	// System.Boolean System.Security.SecureString::read_only
	bool ___read_only_4;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t4116647657* ___data_5;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_read_only_4() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___read_only_4)); }
	inline bool get_read_only_4() const { return ___read_only_4; }
	inline bool* get_address_of_read_only_4() { return &___read_only_4; }
	inline void set_read_only_4(bool value)
	{
		___read_only_4 = value;
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(SecureString_t3041467854, ___data_5)); }
	inline ByteU5BU5D_t4116647657* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_t4116647657* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T3041467854_H
#ifndef SECURITYFRAME_T1422462475_H
#define SECURITYFRAME_T1422462475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t1422462475 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t1571427825 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t223948603 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t223948603 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t223948603 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____domain_0)); }
	inline AppDomain_t1571427825 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t1571427825 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t1571427825 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____assert_2)); }
	inline PermissionSet_t223948603 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t223948603 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t223948603 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____deny_3)); }
	inline PermissionSet_t223948603 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t223948603 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t223948603 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t1422462475, ____permitonly_4)); }
	inline PermissionSet_t223948603 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t223948603 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t223948603 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1422462475_marshaled_pinvoke
{
	AppDomain_t1571427825 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t223948603 * ____assert_2;
	PermissionSet_t223948603 * ____deny_3;
	PermissionSet_t223948603 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1422462475_marshaled_com
{
	AppDomain_t1571427825 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t223948603 * ____assert_2;
	PermissionSet_t223948603 * ____deny_3;
	PermissionSet_t223948603 * ____permitonly_4;
};
#endif // SECURITYFRAME_T1422462475_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#define SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t3505979402  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T3505979402_H
#ifndef SECURITYTRANSPARENTATTRIBUTE_T2529084213_H
#define SECURITYTRANSPARENTATTRIBUTE_T2529084213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityTransparentAttribute
struct  SecurityTransparentAttribute_t2529084213  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYTRANSPARENTATTRIBUTE_T2529084213_H
#ifndef SECURITYTREATASSAFEATTRIBUTE_T3506736250_H
#define SECURITYTREATASSAFEATTRIBUTE_T3506736250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityTreatAsSafeAttribute
struct  SecurityTreatAsSafeAttribute_t3506736250  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYTREATASSAFEATTRIBUTE_T3506736250_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t744305558  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T744305558_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#define UNVERIFIABLECODEATTRIBUTE_T3228760399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t3228760399  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T3228760399_H
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
#ifndef HOSTSECURITYMANAGEROPTIONS_T756318624_H
#define HOSTSECURITYMANAGEROPTIONS_T756318624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManagerOptions
struct  HostSecurityManagerOptions_t756318624 
{
public:
	// System.Int32 System.Security.HostSecurityManagerOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostSecurityManagerOptions_t756318624, ___value___1)); }
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
#endif // HOSTSECURITYMANAGEROPTIONS_T756318624_H
#ifndef FILEIOPERMISSIONACCESS_T1559273540_H
#define FILEIOPERMISSIONACCESS_T1559273540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t1559273540 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t1559273540, ___value___1)); }
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
#endif // FILEIOPERMISSIONACCESS_T1559273540_H
#ifndef HOSTPROTECTIONRESOURCE_T3168622669_H
#define HOSTPROTECTIONRESOURCE_T3168622669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t3168622669 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostProtectionResource_t3168622669, ___value___1)); }
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
#endif // HOSTPROTECTIONRESOURCE_T3168622669_H
#ifndef ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#define ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageContainment
struct  IsolatedStorageContainment_t3203638662 
{
public:
	// System.Int32 System.Security.Permissions.IsolatedStorageContainment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IsolatedStorageContainment_t3203638662, ___value___1)); }
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
#endif // ISOLATEDSTORAGECONTAINMENT_T3203638662_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#define KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t3864969297 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t3864969297, ___value___1)); }
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
#endif // KEYCONTAINERPERMISSIONFLAGS_T3864969297_H
#ifndef PERMISSIONSTATE_T1178999876_H
#define PERMISSIONSTATE_T1178999876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1178999876 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t1178999876, ___value___1)); }
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
#endif // PERMISSIONSTATE_T1178999876_H
#ifndef REFLECTIONPERMISSIONFLAG_T4199904140_H
#define REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t4199904140 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t4199904140, ___value___1)); }
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
#endif // REFLECTIONPERMISSIONFLAG_T4199904140_H
#ifndef REGISTRYPERMISSIONACCESS_T307445458_H
#define REGISTRYPERMISSIONACCESS_T307445458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t307445458 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t307445458, ___value___1)); }
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
#endif // REGISTRYPERMISSIONACCESS_T307445458_H
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___1)); }
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
#endif // SECURITYACTION_T569814076_H
#ifndef SECURITYPERMISSIONFLAG_T3459270124_H
#define SECURITYPERMISSIONFLAG_T3459270124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t3459270124 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t3459270124, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T3459270124_H
#ifndef UIPERMISSIONCLIPBOARD_T4002838840_H
#define UIPERMISSIONCLIPBOARD_T4002838840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t4002838840 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t4002838840, ___value___1)); }
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
#endif // UIPERMISSIONCLIPBOARD_T4002838840_H
#ifndef UIPERMISSIONWINDOW_T985109583_H
#define UIPERMISSIONWINDOW_T985109583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t985109583 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t985109583, ___value___1)); }
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
#endif // UIPERMISSIONWINDOW_T985109583_H
#ifndef KEY_T3006169375_H
#define KEY_T3006169375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.DefaultPolicies/Key
struct  Key_t3006169375 
{
public:
	// System.Int32 System.Security.Policy.DefaultPolicies/Key::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Key_t3006169375, ___value___1)); }
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
#endif // KEY_T3006169375_H
#ifndef POLICYEXCEPTION_T1520028310_H
#define POLICYEXCEPTION_T1520028310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyException
struct  PolicyException_t1520028310  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYEXCEPTION_T1520028310_H
#ifndef POLICYSTATEMENTATTRIBUTE_T1674167676_H
#define POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t1674167676 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t1674167676, ___value___1)); }
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
#endif // POLICYSTATEMENTATTRIBUTE_T1674167676_H
#ifndef POLICYLEVELTYPE_T244468749_H
#define POLICYLEVELTYPE_T244468749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t244468749 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t244468749, ___value___1)); }
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
#endif // POLICYLEVELTYPE_T244468749_H
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
#ifndef TOKENIMPERSONATIONLEVEL_T3773270939_H
#define TOKENIMPERSONATIONLEVEL_T3773270939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.TokenImpersonationLevel
struct  TokenImpersonationLevel_t3773270939 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t3773270939, ___value___1)); }
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
#endif // TOKENIMPERSONATIONLEVEL_T3773270939_H
#ifndef WINDOWSACCOUNTTYPE_T2283000883_H
#define WINDOWSACCOUNTTYPE_T2283000883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t2283000883 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t2283000883, ___value___1)); }
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
#endif // WINDOWSACCOUNTTYPE_T2283000883_H
#ifndef RUNTIMEDECLSECURITYENTRY_T3144469156_H
#define RUNTIMEDECLSECURITYENTRY_T3144469156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t3144469156 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	intptr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___blob_0)); }
	inline intptr_t get_blob_0() const { return ___blob_0; }
	inline intptr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(intptr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t3144469156, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T3144469156_H
#ifndef SECURITYCONTEXT_T2435442044_H
#define SECURITYCONTEXT_T2435442044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t2435442044  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	intptr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t1202932761 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity_3;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_4;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____winid_1)); }
	inline intptr_t get__winid_1() const { return ____winid_1; }
	inline intptr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(intptr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____stack_2)); }
	inline CompressedStack_t1202932761 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t1202932761 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t1202932761 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlowWindowsIdentity_3() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____suppressFlowWindowsIdentity_3)); }
	inline bool get__suppressFlowWindowsIdentity_3() const { return ____suppressFlowWindowsIdentity_3; }
	inline bool* get_address_of__suppressFlowWindowsIdentity_3() { return &____suppressFlowWindowsIdentity_3; }
	inline void set__suppressFlowWindowsIdentity_3(bool value)
	{
		____suppressFlowWindowsIdentity_3 = value;
	}

	inline static int32_t get_offset_of__suppressFlow_4() { return static_cast<int32_t>(offsetof(SecurityContext_t2435442044, ____suppressFlow_4)); }
	inline bool get__suppressFlow_4() const { return ____suppressFlow_4; }
	inline bool* get_address_of__suppressFlow_4() { return &____suppressFlow_4; }
	inline void set__suppressFlow_4(bool value)
	{
		____suppressFlow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T2435442044_H
#ifndef SECURITYCRITICALSCOPE_T606020417_H
#define SECURITYCRITICALSCOPE_T606020417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t606020417 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t606020417, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T606020417_H
#ifndef SECURITYZONE_T1272287263_H
#define SECURITYZONE_T1272287263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t1272287263 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityZone_t1272287263, ___value___1)); }
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
#endif // SECURITYZONE_T1272287263_H
#ifndef HOSTPROTECTIONEXCEPTION_T1178110569_H
#define HOSTPROTECTIONEXCEPTION_T1178110569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostProtectionException
struct  HostProtectionException_t1178110569  : public SystemException_t176217640
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_protected
	int32_t ____protected_11;
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_demanded
	int32_t ____demanded_12;

public:
	inline static int32_t get_offset_of__protected_11() { return static_cast<int32_t>(offsetof(HostProtectionException_t1178110569, ____protected_11)); }
	inline int32_t get__protected_11() const { return ____protected_11; }
	inline int32_t* get_address_of__protected_11() { return &____protected_11; }
	inline void set__protected_11(int32_t value)
	{
		____protected_11 = value;
	}

	inline static int32_t get_offset_of__demanded_12() { return static_cast<int32_t>(offsetof(HostProtectionException_t1178110569, ____demanded_12)); }
	inline int32_t get__demanded_12() const { return ____demanded_12; }
	inline int32_t* get_address_of__demanded_12() { return &____demanded_12; }
	inline void set__demanded_12(int32_t value)
	{
		____demanded_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONEXCEPTION_T1178110569_H
#ifndef ISOLATEDSTORAGEPERMISSION_T2996329588_H
#define ISOLATEDSTORAGEPERMISSION_T2996329588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStoragePermission
struct  IsolatedStoragePermission_t2996329588  : public CodeAccessPermission_t2681295399
{
public:
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_userQuota
	int64_t ___m_userQuota_0;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_machineQuota
	int64_t ___m_machineQuota_1;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_expirationDays
	int64_t ___m_expirationDays_2;
	// System.Boolean System.Security.Permissions.IsolatedStoragePermission::m_permanentData
	bool ___m_permanentData_3;
	// System.Security.Permissions.IsolatedStorageContainment System.Security.Permissions.IsolatedStoragePermission::m_allowed
	int32_t ___m_allowed_4;

public:
	inline static int32_t get_offset_of_m_userQuota_0() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_userQuota_0)); }
	inline int64_t get_m_userQuota_0() const { return ___m_userQuota_0; }
	inline int64_t* get_address_of_m_userQuota_0() { return &___m_userQuota_0; }
	inline void set_m_userQuota_0(int64_t value)
	{
		___m_userQuota_0 = value;
	}

	inline static int32_t get_offset_of_m_machineQuota_1() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_machineQuota_1)); }
	inline int64_t get_m_machineQuota_1() const { return ___m_machineQuota_1; }
	inline int64_t* get_address_of_m_machineQuota_1() { return &___m_machineQuota_1; }
	inline void set_m_machineQuota_1(int64_t value)
	{
		___m_machineQuota_1 = value;
	}

	inline static int32_t get_offset_of_m_expirationDays_2() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_expirationDays_2)); }
	inline int64_t get_m_expirationDays_2() const { return ___m_expirationDays_2; }
	inline int64_t* get_address_of_m_expirationDays_2() { return &___m_expirationDays_2; }
	inline void set_m_expirationDays_2(int64_t value)
	{
		___m_expirationDays_2 = value;
	}

	inline static int32_t get_offset_of_m_permanentData_3() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_permanentData_3)); }
	inline bool get_m_permanentData_3() const { return ___m_permanentData_3; }
	inline bool* get_address_of_m_permanentData_3() { return &___m_permanentData_3; }
	inline void set_m_permanentData_3(bool value)
	{
		___m_permanentData_3 = value;
	}

	inline static int32_t get_offset_of_m_allowed_4() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2996329588, ___m_allowed_4)); }
	inline int32_t get_m_allowed_4() const { return ___m_allowed_4; }
	inline int32_t* get_address_of_m_allowed_4() { return &___m_allowed_4; }
	inline void set_m_allowed_4(int32_t value)
	{
		___m_allowed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEPERMISSION_T2996329588_H
#ifndef KEYCONTAINERPERMISSION_T1460699488_H
#define KEYCONTAINERPERMISSION_T1460699488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1460699488  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t4144114052 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t4144114052 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t4144114052 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1460699488, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSION_T1460699488_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t3026022710  : public RuntimeObject
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermissionAccessEntry::_flags
	int32_t ____flags_0;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_containerName
	String_t* ____containerName_1;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_spec
	int32_t ____spec_2;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_store
	String_t* ____store_3;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_providerName
	String_t* ____providerName_4;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_type
	int32_t ____type_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t3026022710, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T3026022710_H
#ifndef REFLECTIONPERMISSION_T2208099681_H
#define REFLECTIONPERMISSION_T2208099681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t2208099681  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t2208099681, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSION_T2208099681_H
#ifndef REGISTRYPERMISSION_T4244934776_H
#define REGISTRYPERMISSION_T4244934776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4244934776  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t2718874744 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t2718874744 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t2718874744 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___createList_1)); }
	inline ArrayList_t2718874744 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t2718874744 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t2718874744 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___readList_2)); }
	inline ArrayList_t2718874744 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t2718874744 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t2718874744 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4244934776, ___writeList_3)); }
	inline ArrayList_t2718874744 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t2718874744 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t2718874744 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T4244934776_H
#ifndef SECURITYATTRIBUTE_T4008260079_H
#define SECURITYATTRIBUTE_T4008260079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t4008260079  : public Attribute_t861562559
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4008260079, ___m_Unrestricted_1)); }
	inline bool get_m_Unrestricted_1() const { return ___m_Unrestricted_1; }
	inline bool* get_address_of_m_Unrestricted_1() { return &___m_Unrestricted_1; }
	inline void set_m_Unrestricted_1(bool value)
	{
		___m_Unrestricted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T4008260079_H
#ifndef SECURITYPERMISSION_T2954997752_H
#define SECURITYPERMISSION_T2954997752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2954997752  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2954997752, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2954997752_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#define STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t2780499738  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t2718874744 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738, ____list_2)); }
	inline ArrayList_t2718874744 * get__list_2() const { return ____list_2; }
	inline ArrayList_t2718874744 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t2718874744 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t2780499738_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t3456873960 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t2780499738_StaticFields, ___defaultVersion_0)); }
	inline Version_t3456873960 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t3456873960 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t3456873960 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T2780499738_H
#ifndef UIPERMISSION_T826475846_H
#define UIPERMISSION_T826475846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t826475846  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t826475846, ____clipboard_1)); }
	inline int32_t get__clipboard_1() const { return ____clipboard_1; }
	inline int32_t* get_address_of__clipboard_1() { return &____clipboard_1; }
	inline void set__clipboard_1(int32_t value)
	{
		____clipboard_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T826475846_H
#ifndef ZONEIDENTITYPERMISSION_T2250593031_H
#define ZONEIDENTITYPERMISSION_T2250593031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t2250593031  : public CodeAccessPermission_t2681295399
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t2250593031, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T2250593031_H
#ifndef FILECODEGROUP_T1720965944_H
#define FILECODEGROUP_T1720965944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t1720965944  : public CodeGroup_t3811807446
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t1720965944, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T1720965944_H
#ifndef POLICYLEVEL_T2891196107_H
#define POLICYLEVEL_T2891196107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t2891196107  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t3811807446 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2718874744 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2718874744 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1853889766 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t1046076091 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___root_code_group_1)); }
	inline CodeGroup_t3811807446 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t3811807446 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t3811807446 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___full_trust_assemblies_2)); }
	inline ArrayList_t2718874744 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2718874744 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2718874744 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___named_permission_sets_3)); }
	inline ArrayList_t2718874744 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2718874744 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2718874744 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___fullNames_6)); }
	inline Hashtable_t1853889766 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1853889766 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1853889766 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t2891196107, ___xml_7)); }
	inline SecurityElement_t1046076091 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t1046076091 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t1046076091 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T2891196107_H
#ifndef POLICYSTATEMENT_T3052133691_H
#define POLICYSTATEMENT_T3052133691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t3052133691  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t223948603 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___perms_0)); }
	inline PermissionSet_t223948603 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t223948603 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t223948603 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t3052133691, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T3052133691_H
#ifndef ZONE_T2011285646_H
#define ZONE_T2011285646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Zone
struct  Zone_t2011285646  : public RuntimeObject
{
public:
	// System.Security.SecurityZone System.Security.Policy.Zone::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(Zone_t2011285646, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONE_T2011285646_H
#ifndef ZONEMEMBERSHIPCONDITION_T3195636716_H
#define ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t3195636716  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3195636716, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T3195636716_H
#ifndef WINDOWSIDENTITY_T2948242406_H
#define WINDOWSIDENTITY_T2948242406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t2948242406  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t950877179 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406, ____info_5)); }
	inline SerializationInfo_t950877179 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t950877179 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t950877179 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t2948242406_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2948242406_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T2948242406_H
#ifndef RUNTIMEDECLSECURITYACTIONS_T582952764_H
#define RUNTIMEDECLSECURITYACTIONS_T582952764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityActions
struct  RuntimeDeclSecurityActions_t582952764 
{
public:
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::cas
	RuntimeDeclSecurityEntry_t3144469156  ___cas_0;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::noncas
	RuntimeDeclSecurityEntry_t3144469156  ___noncas_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::choice
	RuntimeDeclSecurityEntry_t3144469156  ___choice_2;

public:
	inline static int32_t get_offset_of_cas_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___cas_0)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_cas_0() const { return ___cas_0; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_cas_0() { return &___cas_0; }
	inline void set_cas_0(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___cas_0 = value;
	}

	inline static int32_t get_offset_of_noncas_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___noncas_1)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_noncas_1() const { return ___noncas_1; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_noncas_1() { return &___noncas_1; }
	inline void set_noncas_1(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___noncas_1 = value;
	}

	inline static int32_t get_offset_of_choice_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t582952764, ___choice_2)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_choice_2() const { return ___choice_2; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_choice_2() { return &___choice_2; }
	inline void set_choice_2(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___choice_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYACTIONS_T582952764_H
#ifndef RUNTIMESECURITYFRAME_T536173748_H
#define RUNTIMESECURITYFRAME_T536173748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t536173748  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t1571427825 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t3144469156  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t3144469156  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t3144469156  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___domain_0)); }
	inline AppDomain_t1571427825 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t1571427825 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t1571427825 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t536173748, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t3144469156  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t3144469156 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t3144469156  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T536173748_H
#ifndef SECURITYCRITICALATTRIBUTE_T2279322844_H
#define SECURITYCRITICALATTRIBUTE_T2279322844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t2279322844  : public Attribute_t861562559
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t2279322844, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T2279322844_H
#ifndef SECURITYEXCEPTION_T975544473_H
#define SECURITYEXCEPTION_T975544473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t975544473  : public SystemException_t176217640
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2008144148 * ____evidence_18;
	// System.Security.Permissions.SecurityAction System.Security.SecurityException::_action
	int32_t ____action_19;
	// System.Object System.Security.SecurityException::_denyset
	RuntimeObject * ____denyset_20;
	// System.Object System.Security.SecurityException::_permitset
	RuntimeObject * ____permitset_21;
	// System.Reflection.AssemblyName System.Security.SecurityException::_assembly
	AssemblyName_t270931938 * ____assembly_22;
	// System.String System.Security.SecurityException::_url
	String_t* ____url_23;
	// System.Security.SecurityZone System.Security.SecurityException::_zone
	int32_t ____zone_24;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____evidence_18)); }
	inline Evidence_t2008144148 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t2008144148 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t2008144148 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}

	inline static int32_t get_offset_of__action_19() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____action_19)); }
	inline int32_t get__action_19() const { return ____action_19; }
	inline int32_t* get_address_of__action_19() { return &____action_19; }
	inline void set__action_19(int32_t value)
	{
		____action_19 = value;
	}

	inline static int32_t get_offset_of__denyset_20() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____denyset_20)); }
	inline RuntimeObject * get__denyset_20() const { return ____denyset_20; }
	inline RuntimeObject ** get_address_of__denyset_20() { return &____denyset_20; }
	inline void set__denyset_20(RuntimeObject * value)
	{
		____denyset_20 = value;
		Il2CppCodeGenWriteBarrier((&____denyset_20), value);
	}

	inline static int32_t get_offset_of__permitset_21() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____permitset_21)); }
	inline RuntimeObject * get__permitset_21() const { return ____permitset_21; }
	inline RuntimeObject ** get_address_of__permitset_21() { return &____permitset_21; }
	inline void set__permitset_21(RuntimeObject * value)
	{
		____permitset_21 = value;
		Il2CppCodeGenWriteBarrier((&____permitset_21), value);
	}

	inline static int32_t get_offset_of__assembly_22() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____assembly_22)); }
	inline AssemblyName_t270931938 * get__assembly_22() const { return ____assembly_22; }
	inline AssemblyName_t270931938 ** get_address_of__assembly_22() { return &____assembly_22; }
	inline void set__assembly_22(AssemblyName_t270931938 * value)
	{
		____assembly_22 = value;
		Il2CppCodeGenWriteBarrier((&____assembly_22), value);
	}

	inline static int32_t get_offset_of__url_23() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____url_23)); }
	inline String_t* get__url_23() const { return ____url_23; }
	inline String_t** get_address_of__url_23() { return &____url_23; }
	inline void set__url_23(String_t* value)
	{
		____url_23 = value;
		Il2CppCodeGenWriteBarrier((&____url_23), value);
	}

	inline static int32_t get_offset_of__zone_24() { return static_cast<int32_t>(offsetof(SecurityException_t975544473, ____zone_24)); }
	inline int32_t get__zone_24() const { return ____zone_24; }
	inline int32_t* get_address_of__zone_24() { return &____zone_24; }
	inline void set__zone_24(int32_t value)
	{
		____zone_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T975544473_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#define CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t3236455365  : public SecurityAttribute_t4008260079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T3236455365_H
#ifndef ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#define ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageFilePermission
struct  IsolatedStorageFilePermission_t2861120981  : public IsolatedStoragePermission_t2996329588
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEFILEPERMISSION_T2861120981_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#define SECURITYPERMISSIONATTRIBUTE_T2256310021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t2256310021  : public CodeAccessSecurityAttribute_t3236455365
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t2256310021, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T2256310021_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (IsolatedStorageContainment_t3203638662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable802[13] = 
{
	IsolatedStorageContainment_t3203638662::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (IsolatedStorageFilePermission_t2861120981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (IsolatedStoragePermission_t2996329588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable804[5] = 
{
	IsolatedStoragePermission_t2996329588::get_offset_of_m_userQuota_0(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_machineQuota_1(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_expirationDays_2(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_permanentData_3(),
	IsolatedStoragePermission_t2996329588::get_offset_of_m_allowed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (KeyContainerPermission_t1460699488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable805[2] = 
{
	KeyContainerPermission_t1460699488::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1460699488::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (KeyContainerPermissionAccessEntry_t3026022710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable806[6] = 
{
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t3026022710::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (KeyContainerPermissionAccessEntryCollection_t4144114052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable807[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t4144114052::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t3641947072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable808[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t3641947072::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (KeyContainerPermissionFlags_t3864969297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable809[12] = 
{
	KeyContainerPermissionFlags_t3864969297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (PermissionState_t1178999876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable810[3] = 
{
	PermissionState_t1178999876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (ReflectionPermission_t2208099681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable811[1] = 
{
	ReflectionPermission_t2208099681::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (ReflectionPermissionFlag_t4199904140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable812[7] = 
{
	ReflectionPermissionFlag_t4199904140::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (RegistryPermission_t4244934776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable813[4] = 
{
	RegistryPermission_t4244934776::get_offset_of__state_0(),
	RegistryPermission_t4244934776::get_offset_of_createList_1(),
	RegistryPermission_t4244934776::get_offset_of_readList_2(),
	RegistryPermission_t4244934776::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (RegistryPermissionAccess_t307445458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable814[6] = 
{
	RegistryPermissionAccess_t307445458::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (SecurityAction_t569814076)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable815[10] = 
{
	SecurityAction_t569814076::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (SecurityPermission_t2954997752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable816[1] = 
{
	SecurityPermission_t2954997752::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (SecurityPermissionAttribute_t2256310021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable817[1] = 
{
	SecurityPermissionAttribute_t2256310021::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (SecurityPermissionFlag_t3459270124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable818[17] = 
{
	SecurityPermissionFlag_t3459270124::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (StrongNameIdentityPermission_t2780499738), -1, sizeof(StrongNameIdentityPermission_t2780499738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable819[3] = 
{
	StrongNameIdentityPermission_t2780499738_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__state_1(),
	StrongNameIdentityPermission_t2780499738::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (SNIP_t4156255223)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable820[3] = 
{
	SNIP_t4156255223::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t4156255223::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (StrongNamePublicKeyBlob_t3355146440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable821[1] = 
{
	StrongNamePublicKeyBlob_t3355146440::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (UIPermission_t826475846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable822[2] = 
{
	UIPermission_t826475846::get_offset_of__window_0(),
	UIPermission_t826475846::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (UIPermissionClipboard_t4002838840)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable823[4] = 
{
	UIPermissionClipboard_t4002838840::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (UIPermissionWindow_t985109583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable824[5] = 
{
	UIPermissionWindow_t985109583::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (ZoneIdentityPermission_t2250593031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable825[1] = 
{
	ZoneIdentityPermission_t2250593031::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (AllMembershipCondition_t198137363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable826[1] = 
{
	AllMembershipCondition_t198137363::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (ApplicationSecurityManager_t826984714), -1, sizeof(ApplicationSecurityManager_t826984714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable827[1] = 
{
	ApplicationSecurityManager_t826984714_StaticFields::get_offset_of__appTrustManager_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (ApplicationTrust_t3270368423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable828[6] = 
{
	ApplicationTrust_t3270368423::get_offset_of__appid_0(),
	ApplicationTrust_t3270368423::get_offset_of__defaultPolicy_1(),
	ApplicationTrust_t3270368423::get_offset_of__xtranfo_2(),
	ApplicationTrust_t3270368423::get_offset_of__trustrun_3(),
	ApplicationTrust_t3270368423::get_offset_of__persist_4(),
	ApplicationTrust_t3270368423::get_offset_of_fullTrustAssemblies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (CodeConnectAccess_t1103527196), -1, sizeof(CodeConnectAccess_t1103527196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable829[6] = 
{
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_AnyScheme_0(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_DefaultPort_1(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginPort_2(),
	CodeConnectAccess_t1103527196_StaticFields::get_offset_of_OriginScheme_3(),
	CodeConnectAccess_t1103527196::get_offset_of__scheme_4(),
	CodeConnectAccess_t1103527196::get_offset_of__port_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (CodeGroup_t3811807446), -1, sizeof(CodeGroup_t3811807446_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable830[6] = 
{
	CodeGroup_t3811807446::get_offset_of_m_policy_0(),
	CodeGroup_t3811807446::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t3811807446::get_offset_of_m_description_2(),
	CodeGroup_t3811807446::get_offset_of_m_name_3(),
	CodeGroup_t3811807446::get_offset_of_m_children_4(),
	CodeGroup_t3811807446_StaticFields::get_offset_of_U3CU3Ef__switchU24map2A_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (DefaultPolicies_t2520506789), -1, sizeof(DefaultPolicies_t2520506789_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable831[12] = 
{
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fxVersion_0(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecmaKey_1(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__ecma_2(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinalKey_3(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__msFinal_4(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__fullTrust_5(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__localIntranet_6(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__internet_7(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__skipVerification_8(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__execution_9(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__nothing_10(),
	DefaultPolicies_t2520506789_StaticFields::get_offset_of__everything_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (Key_t3006169375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable832[3] = 
{
	Key_t3006169375::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (Evidence_t2008144148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable833[4] = 
{
	Evidence_t2008144148::get_offset_of__locked_0(),
	Evidence_t2008144148::get_offset_of_hostEvidenceList_1(),
	Evidence_t2008144148::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t2008144148::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (EvidenceEnumerator_t1708166667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable834[3] = 
{
	EvidenceEnumerator_t1708166667::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1708166667::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1708166667::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (FileCodeGroup_t1720965944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable835[1] = 
{
	FileCodeGroup_t1720965944::get_offset_of_m_access_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { sizeof (FirstMatchCodeGroup_t885469689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { sizeof (Hash_t5925575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable837[2] = 
{
	Hash_t5925575::get_offset_of_assembly_0(),
	Hash_t5925575::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (MembershipConditionHelper_t2246572704), -1, sizeof(MembershipConditionHelper_t2246572704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable843[1] = 
{
	MembershipConditionHelper_t2246572704_StaticFields::get_offset_of_XmlTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (MonoTrustManager_t991661945), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (NetCodeGroup_t2217812384), -1, sizeof(NetCodeGroup_t2217812384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable845[4] = 
{
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AbsentOriginScheme_6(),
	NetCodeGroup_t2217812384_StaticFields::get_offset_of_AnyOtherOriginScheme_7(),
	NetCodeGroup_t2217812384::get_offset_of__rules_8(),
	NetCodeGroup_t2217812384::get_offset_of__hashcode_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (PermissionRequestEvidence_t59447972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable846[3] = 
{
	PermissionRequestEvidence_t59447972::get_offset_of_requested_0(),
	PermissionRequestEvidence_t59447972::get_offset_of_optional_1(),
	PermissionRequestEvidence_t59447972::get_offset_of_denied_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (PolicyException_t1520028310), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (PolicyLevel_t2891196107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable848[8] = 
{
	PolicyLevel_t2891196107::get_offset_of_label_0(),
	PolicyLevel_t2891196107::get_offset_of_root_code_group_1(),
	PolicyLevel_t2891196107::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t2891196107::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t2891196107::get_offset_of__location_4(),
	PolicyLevel_t2891196107::get_offset_of__type_5(),
	PolicyLevel_t2891196107::get_offset_of_fullNames_6(),
	PolicyLevel_t2891196107::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (PolicyStatement_t3052133691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable849[2] = 
{
	PolicyStatement_t3052133691::get_offset_of_perms_0(),
	PolicyStatement_t3052133691::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (PolicyStatementAttribute_t1674167676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable850[5] = 
{
	PolicyStatementAttribute_t1674167676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (StrongName_t3675724614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable851[3] = 
{
	StrongName_t3675724614::get_offset_of_publickey_0(),
	StrongName_t3675724614::get_offset_of_name_1(),
	StrongName_t3675724614::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (StrongNameMembershipCondition_t2614563360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable852[4] = 
{
	StrongNameMembershipCondition_t2614563360::get_offset_of_version_0(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_blob_1(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_name_2(),
	StrongNameMembershipCondition_t2614563360::get_offset_of_assemblyVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (TrustManagerContext_t2253791128), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (UnionCodeGroup_t3773268997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (Zone_t2011285646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable855[1] = 
{
	Zone_t2011285646::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (ZoneMembershipCondition_t3195636716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable856[2] = 
{
	ZoneMembershipCondition_t3195636716::get_offset_of_version_0(),
	ZoneMembershipCondition_t3195636716::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (GenericIdentity_t2319019448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable857[2] = 
{
	GenericIdentity_t2319019448::get_offset_of_m_name_0(),
	GenericIdentity_t2319019448::get_offset_of_m_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (GenericPrincipal_t2520297622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable858[2] = 
{
	GenericPrincipal_t2520297622::get_offset_of_m_identity_0(),
	GenericPrincipal_t2520297622::get_offset_of_m_roles_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (PrincipalPolicy_t1761212333)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable861[4] = 
{
	PrincipalPolicy_t1761212333::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (TokenImpersonationLevel_t3773270939)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable862[6] = 
{
	TokenImpersonationLevel_t3773270939::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (WindowsAccountType_t2283000883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable863[5] = 
{
	WindowsAccountType_t2283000883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (WindowsIdentity_t2948242406), -1, sizeof(WindowsIdentity_t2948242406_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable864[7] = 
{
	WindowsIdentity_t2948242406::get_offset_of__token_0(),
	WindowsIdentity_t2948242406::get_offset_of__type_1(),
	WindowsIdentity_t2948242406::get_offset_of__account_2(),
	WindowsIdentity_t2948242406::get_offset_of__authenticated_3(),
	WindowsIdentity_t2948242406::get_offset_of__name_4(),
	WindowsIdentity_t2948242406::get_offset_of__info_5(),
	WindowsIdentity_t2948242406_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (WindowsPrincipal_t239041500), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable865[1] = 
{
	WindowsPrincipal_t239041500::get_offset_of__identity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (AllowPartiallyTrustedCallersAttribute_t1828959166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (CodeAccessPermission_t2681295399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (HostProtectionException_t1178110569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable868[2] = 
{
	HostProtectionException_t1178110569::get_offset_of__protected_11(),
	HostProtectionException_t1178110569::get_offset_of__demanded_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (HostSecurityManager_t1435734729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (HostSecurityManagerOptions_t756318624)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable870[8] = 
{
	HostSecurityManagerOptions_t756318624::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (NamedPermissionSet_t2915669112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable876[2] = 
{
	NamedPermissionSet_t2915669112::get_offset_of_name_2(),
	NamedPermissionSet_t2915669112::get_offset_of_description_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (PermissionBuilder_t1403083973), -1, sizeof(PermissionBuilder_t1403083973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable877[1] = 
{
	PermissionBuilder_t1403083973_StaticFields::get_offset_of_psNone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (PermissionSet_t223948603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable878[2] = 
{
	PermissionSet_t223948603::get_offset_of_U3CResolverU3Ek__BackingField_0(),
	PermissionSet_t223948603::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t1244998447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable879[2] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t1244998447::get_offset_of_U24PC_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t1244998447::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (PolicyLevelType_t244468749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable880[5] = 
{
	PolicyLevelType_t244468749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (SecureString_t3041467854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable881[6] = 
{
	0,
	0,
	SecureString_t3041467854::get_offset_of_length_2(),
	SecureString_t3041467854::get_offset_of_disposed_3(),
	SecureString_t3041467854::get_offset_of_read_only_4(),
	SecureString_t3041467854::get_offset_of_data_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (SecurityContext_t2435442044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable882[5] = 
{
	SecurityContext_t2435442044::get_offset_of__capture_0(),
	SecurityContext_t2435442044::get_offset_of__winid_1(),
	SecurityContext_t2435442044::get_offset_of__stack_2(),
	SecurityContext_t2435442044::get_offset_of__suppressFlowWindowsIdentity_3(),
	SecurityContext_t2435442044::get_offset_of__suppressFlow_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (SecurityCriticalAttribute_t2279322844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable883[1] = 
{
	SecurityCriticalAttribute_t2279322844::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (SecurityCriticalScope_t606020417)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable884[3] = 
{
	SecurityCriticalScope_t606020417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (SecurityElement_t1046076091), -1, sizeof(SecurityElement_t1046076091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable885[9] = 
{
	SecurityElement_t1046076091::get_offset_of_text_0(),
	SecurityElement_t1046076091::get_offset_of_tag_1(),
	SecurityElement_t1046076091::get_offset_of_attributes_2(),
	SecurityElement_t1046076091::get_offset_of_children_3(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t1046076091_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (SecurityAttribute_t3566489056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable886[2] = 
{
	SecurityAttribute_t3566489056::get_offset_of__name_0(),
	SecurityAttribute_t3566489056::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (SecurityException_t975544473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable887[14] = 
{
	SecurityException_t975544473::get_offset_of_permissionState_11(),
	SecurityException_t975544473::get_offset_of_permissionType_12(),
	SecurityException_t975544473::get_offset_of__granted_13(),
	SecurityException_t975544473::get_offset_of__refused_14(),
	SecurityException_t975544473::get_offset_of__demanded_15(),
	SecurityException_t975544473::get_offset_of__firstperm_16(),
	SecurityException_t975544473::get_offset_of__method_17(),
	SecurityException_t975544473::get_offset_of__evidence_18(),
	SecurityException_t975544473::get_offset_of__action_19(),
	SecurityException_t975544473::get_offset_of__denyset_20(),
	SecurityException_t975544473::get_offset_of__permitset_21(),
	SecurityException_t975544473::get_offset_of__assembly_22(),
	SecurityException_t975544473::get_offset_of__url_23(),
	SecurityException_t975544473::get_offset_of__zone_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (RuntimeDeclSecurityEntry_t3144469156)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t3144469156 ), 0, 0 };
extern const int32_t g_FieldOffsetTable888[3] = 
{
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t3144469156::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (RuntimeSecurityFrame_t536173748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable889[5] = 
{
	RuntimeSecurityFrame_t536173748::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t536173748::get_offset_of_method_1(),
	RuntimeSecurityFrame_t536173748::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t536173748::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t536173748::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (SecurityFrame_t1422462475)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable890[5] = 
{
	SecurityFrame_t1422462475::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1422462475::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (RuntimeDeclSecurityActions_t582952764)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityActions_t582952764 ), 0, 0 };
extern const int32_t g_FieldOffsetTable891[3] = 
{
	RuntimeDeclSecurityActions_t582952764::get_offset_of_cas_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t582952764::get_offset_of_noncas_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t582952764::get_offset_of_choice_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (SecurityManager_t3383402582), -1, sizeof(SecurityManager_t3383402582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable892[6] = 
{
	SecurityManager_t3383402582_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__hierarchy_1(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__unmanagedCode_2(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__declsecCache_3(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__level_4(),
	SecurityManager_t3383402582_StaticFields::get_offset_of__execution_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (SecuritySafeCriticalAttribute_t3505979402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (SecurityState_t982520134), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (SecurityTransparentAttribute_t2529084213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (SecurityTreatAsSafeAttribute_t3506736250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (SecurityZone_t1272287263)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable897[7] = 
{
	SecurityZone_t1272287263::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t744305558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (UnverifiableCodeAttribute_t3228760399), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
