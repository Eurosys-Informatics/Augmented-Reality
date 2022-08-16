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


// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1713852332;
// System.Collections.Generic.List`1<System.Net.NetworkInformation.MulticastIPAddressInformation>
struct List_1_t3947408138;
// System.Collections.Generic.List`1<System.Net.NetworkInformation.UnicastIPAddressInformation>
struct List_1_t3912039076;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t120437468;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t3811013447;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1108123056;
// System.ComponentModel.ISite
struct ISite_t4006303512;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2315030214;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3964383369;
// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t4242495999;
// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t3249312820;
// System.Net.NetworkInformation.LinuxNetworkInterface
struct LinuxNetworkInterface_t4095034716;
// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t3969281182;
// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t3693474496;
// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t1248062814;
// System.Net.NetworkInformation.Ping
struct Ping_t2815018315;
// System.Net.NetworkInformation.PingCompletedEventHandler
struct PingCompletedEventHandler_t1323096418;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t3156337970;
// System.Net.NetworkInformation.PingReply
struct PingReply_t1006004616;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2401762829;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t3096671123;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t882755512;
// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t4002330115;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.UInt16
struct UInt16_t2177724958;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
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
#ifndef IPADDRESSINFORMATION_T3534952908_H
#define IPADDRESSINFORMATION_T3534952908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPAddressInformation
struct  IPAddressInformation_t3534952908  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESSINFORMATION_T3534952908_H
#ifndef IPGLOBALSTATISTICS_T1020027804_H
#define IPGLOBALSTATISTICS_T1020027804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPGlobalStatistics
struct  IPGlobalStatistics_t1020027804  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPGLOBALSTATISTICS_T1020027804_H
#ifndef IPINTERFACEPROPERTIES_T3964383369_H
#define IPINTERFACEPROPERTIES_T3964383369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPInterfaceProperties
struct  IPInterfaceProperties_t3964383369  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPINTERFACEPROPERTIES_T3964383369_H
#ifndef IPV4INTERFACEPROPERTIES_T4242495999_H
#define IPV4INTERFACEPROPERTIES_T4242495999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPv4InterfaceProperties
struct  IPv4InterfaceProperties_t4242495999  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV4INTERFACEPROPERTIES_T4242495999_H
#ifndef IPV4INTERFACESTATISTICS_T3249312820_H
#define IPV4INTERFACESTATISTICS_T3249312820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct  IPv4InterfaceStatistics_t3249312820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV4INTERFACESTATISTICS_T3249312820_H
#ifndef IPV6INTERFACEPROPERTIES_T263835045_H
#define IPV6INTERFACEPROPERTIES_T263835045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPv6InterfaceProperties
struct  IPv6InterfaceProperties_t263835045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6INTERFACEPROPERTIES_T263835045_H
#ifndef ICMPV4STATISTICS_T3304898107_H
#define ICMPV4STATISTICS_T3304898107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IcmpV4Statistics
struct  IcmpV4Statistics_t3304898107  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPV4STATISTICS_T3304898107_H
#ifndef ICMPV6MESSAGETYPES_T883225832_H
#define ICMPV6MESSAGETYPES_T883225832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IcmpV6MessageTypes
struct  IcmpV6MessageTypes_t883225832  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPV6MESSAGETYPES_T883225832_H
#ifndef ICMPV6STATISTICS_T3428499003_H
#define ICMPV6STATISTICS_T3428499003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IcmpV6Statistics
struct  IcmpV6Statistics_t3428499003  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPV6STATISTICS_T3428499003_H
#ifndef MULTICASTIPADDRESSINFORMATIONCOLLECTION_T3111466650_H
#define MULTICASTIPADDRESSINFORMATIONCOLLECTION_T3111466650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct  MulticastIPAddressInformationCollection_t3111466650  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::list
	List_1_t3947408138 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationCollection_t3111466650, ___list_0)); }
	inline List_1_t3947408138 * get_list_0() const { return ___list_0; }
	inline List_1_t3947408138 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3947408138 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATIONCOLLECTION_T3111466650_H
#ifndef NETWORKCHANGE_T2716465732_H
#define NETWORKCHANGE_T2716465732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkChange
struct  NetworkChange_t2716465732  : public RuntimeObject
{
public:

public:
};

struct NetworkChange_t2716465732_StaticFields
{
public:
	// System.Net.NetworkInformation.NetworkAddressChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAddressChanged
	NetworkAddressChangedEventHandler_t3693474496 * ___NetworkAddressChanged_0;
	// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler System.Net.NetworkInformation.NetworkChange::NetworkAvailabilityChanged
	NetworkAvailabilityChangedEventHandler_t1248062814 * ___NetworkAvailabilityChanged_1;

public:
	inline static int32_t get_offset_of_NetworkAddressChanged_0() { return static_cast<int32_t>(offsetof(NetworkChange_t2716465732_StaticFields, ___NetworkAddressChanged_0)); }
	inline NetworkAddressChangedEventHandler_t3693474496 * get_NetworkAddressChanged_0() const { return ___NetworkAddressChanged_0; }
	inline NetworkAddressChangedEventHandler_t3693474496 ** get_address_of_NetworkAddressChanged_0() { return &___NetworkAddressChanged_0; }
	inline void set_NetworkAddressChanged_0(NetworkAddressChangedEventHandler_t3693474496 * value)
	{
		___NetworkAddressChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___NetworkAddressChanged_0), value);
	}

	inline static int32_t get_offset_of_NetworkAvailabilityChanged_1() { return static_cast<int32_t>(offsetof(NetworkChange_t2716465732_StaticFields, ___NetworkAvailabilityChanged_1)); }
	inline NetworkAvailabilityChangedEventHandler_t1248062814 * get_NetworkAvailabilityChanged_1() const { return ___NetworkAvailabilityChanged_1; }
	inline NetworkAvailabilityChangedEventHandler_t1248062814 ** get_address_of_NetworkAvailabilityChanged_1() { return &___NetworkAvailabilityChanged_1; }
	inline void set_NetworkAvailabilityChanged_1(NetworkAvailabilityChangedEventHandler_t1248062814 * value)
	{
		___NetworkAvailabilityChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___NetworkAvailabilityChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCHANGE_T2716465732_H
#ifndef NETWORKINTERFACE_T271883373_H
#define NETWORKINTERFACE_T271883373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t271883373  : public RuntimeObject
{
public:

public:
};

struct NetworkInterface_t271883373_StaticFields
{
public:
	// System.Version System.Net.NetworkInformation.NetworkInterface::windowsVer51
	Version_t3456873960 * ___windowsVer51_0;
	// System.Boolean System.Net.NetworkInformation.NetworkInterface::runningOnUnix
	bool ___runningOnUnix_1;

public:
	inline static int32_t get_offset_of_windowsVer51_0() { return static_cast<int32_t>(offsetof(NetworkInterface_t271883373_StaticFields, ___windowsVer51_0)); }
	inline Version_t3456873960 * get_windowsVer51_0() const { return ___windowsVer51_0; }
	inline Version_t3456873960 ** get_address_of_windowsVer51_0() { return &___windowsVer51_0; }
	inline void set_windowsVer51_0(Version_t3456873960 * value)
	{
		___windowsVer51_0 = value;
		Il2CppCodeGenWriteBarrier((&___windowsVer51_0), value);
	}

	inline static int32_t get_offset_of_runningOnUnix_1() { return static_cast<int32_t>(offsetof(NetworkInterface_t271883373_StaticFields, ___runningOnUnix_1)); }
	inline bool get_runningOnUnix_1() const { return ___runningOnUnix_1; }
	inline bool* get_address_of_runningOnUnix_1() { return &___runningOnUnix_1; }
	inline void set_runningOnUnix_1(bool value)
	{
		___runningOnUnix_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACE_T271883373_H
#ifndef PHYSICALADDRESS_T728503866_H
#define PHYSICALADDRESS_T728503866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PhysicalAddress
struct  PhysicalAddress_t728503866  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.PhysicalAddress::bytes
	ByteU5BU5D_t4116647657* ___bytes_2;

public:
	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(PhysicalAddress_t728503866, ___bytes_2)); }
	inline ByteU5BU5D_t4116647657* get_bytes_2() const { return ___bytes_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(ByteU5BU5D_t4116647657* value)
	{
		___bytes_2 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_2), value);
	}
};

struct PhysicalAddress_t728503866_StaticFields
{
public:
	// System.Net.NetworkInformation.PhysicalAddress System.Net.NetworkInformation.PhysicalAddress::None
	PhysicalAddress_t728503866 * ___None_1;

public:
	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(PhysicalAddress_t728503866_StaticFields, ___None_1)); }
	inline PhysicalAddress_t728503866 * get_None_1() const { return ___None_1; }
	inline PhysicalAddress_t728503866 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(PhysicalAddress_t728503866 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICALADDRESS_T728503866_H
#ifndef U3CSENDASYNCU3EC__ANONSTOREY6_T600207981_H
#define U3CSENDASYNCU3EC__ANONSTOREY6_T600207981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6
struct  U3CSendAsyncU3Ec__AnonStorey6_t600207981  : public RuntimeObject
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::address
	IPAddress_t241777590 * ___address_0;
	// System.Int32 System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::timeout
	int32_t ___timeout_1;
	// System.Byte[] System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::buffer
	ByteU5BU5D_t4116647657* ___buffer_2;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::options
	PingOptions_t3156337970 * ___options_3;
	// System.Net.NetworkInformation.Ping System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::<>f__this
	Ping_t2815018315 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t600207981, ___address_0)); }
	inline IPAddress_t241777590 * get_address_0() const { return ___address_0; }
	inline IPAddress_t241777590 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t241777590 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t600207981, ___timeout_1)); }
	inline int32_t get_timeout_1() const { return ___timeout_1; }
	inline int32_t* get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(int32_t value)
	{
		___timeout_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t600207981, ___buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_2), value);
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t600207981, ___options_3)); }
	inline PingOptions_t3156337970 * get_options_3() const { return ___options_3; }
	inline PingOptions_t3156337970 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(PingOptions_t3156337970 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier((&___options_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t600207981, ___U3CU3Ef__this_4)); }
	inline Ping_t2815018315 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline Ping_t2815018315 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(Ping_t2815018315 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDASYNCU3EC__ANONSTOREY6_T600207981_H
#ifndef ICMPMESSAGE_T2301849922_H
#define ICMPMESSAGE_T2301849922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/IcmpMessage
struct  IcmpMessage_t2301849922  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.NetworkInformation.Ping/IcmpMessage::bytes
	ByteU5BU5D_t4116647657* ___bytes_0;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(IcmpMessage_t2301849922, ___bytes_0)); }
	inline ByteU5BU5D_t4116647657* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5D_t4116647657* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICMPMESSAGE_T2301849922_H
#ifndef PINGOPTIONS_T3156337970_H
#define PINGOPTIONS_T3156337970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingOptions
struct  PingOptions_t3156337970  : public RuntimeObject
{
public:
	// System.Int32 System.Net.NetworkInformation.PingOptions::ttl
	int32_t ___ttl_0;
	// System.Boolean System.Net.NetworkInformation.PingOptions::dont_fragment
	bool ___dont_fragment_1;

public:
	inline static int32_t get_offset_of_ttl_0() { return static_cast<int32_t>(offsetof(PingOptions_t3156337970, ___ttl_0)); }
	inline int32_t get_ttl_0() const { return ___ttl_0; }
	inline int32_t* get_address_of_ttl_0() { return &___ttl_0; }
	inline void set_ttl_0(int32_t value)
	{
		___ttl_0 = value;
	}

	inline static int32_t get_offset_of_dont_fragment_1() { return static_cast<int32_t>(offsetof(PingOptions_t3156337970, ___dont_fragment_1)); }
	inline bool get_dont_fragment_1() const { return ___dont_fragment_1; }
	inline bool* get_address_of_dont_fragment_1() { return &___dont_fragment_1; }
	inline void set_dont_fragment_1(bool value)
	{
		___dont_fragment_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGOPTIONS_T3156337970_H
#ifndef TCPCONNECTIONINFORMATION_T457447727_H
#define TCPCONNECTIONINFORMATION_T457447727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpConnectionInformation
struct  TcpConnectionInformation_t457447727  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCONNECTIONINFORMATION_T457447727_H
#ifndef TCPSTATISTICS_T3354500482_H
#define TCPSTATISTICS_T3354500482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpStatistics
struct  TcpStatistics_t3354500482  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPSTATISTICS_T3354500482_H
#ifndef UDPSTATISTICS_T827909905_H
#define UDPSTATISTICS_T827909905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UdpStatistics
struct  UdpStatistics_t827909905  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDPSTATISTICS_T827909905_H
#ifndef UNICASTIPADDRESSINFORMATIONCOLLECTION_T2190735649_H
#define UNICASTIPADDRESSINFORMATIONCOLLECTION_T2190735649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct  UnicastIPAddressInformationCollection_t2190735649  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.UnicastIPAddressInformation> System.Net.NetworkInformation.UnicastIPAddressInformationCollection::list
	List_1_t3912039076 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationCollection_t2190735649, ___list_0)); }
	inline List_1_t3912039076 * get_list_0() const { return ___list_0; }
	inline List_1_t3912039076 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3912039076 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICASTIPADDRESSINFORMATIONCOLLECTION_T2190735649_H
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
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#define ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t1863481821  : public EventArgs_t3591816995
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____error_1)); }
	inline Exception_t * get__error_1() const { return ____error_1; }
	inline Exception_t ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t1863481821, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T1863481821_H
#ifndef COMPONENT_T3620823400_H
#define COMPONENT_T3620823400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3620823400  : public MarshalByRefObject_t2760389100
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1108123056 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___event_handlers_1)); }
	inline EventHandlerList_t1108123056 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1108123056 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1108123056 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3620823400, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3620823400_H
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
#ifndef ALIGNMENTUNION_T208902285_H
#define ALIGNMENTUNION_T208902285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t208902285 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T208902285_H
#ifndef LINUXIPV4INTERFACESTATISTICS_T1812025327_H
#define LINUXIPV4INTERFACESTATISTICS_T1812025327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPv4InterfaceStatistics
struct  LinuxIPv4InterfaceStatistics_t1812025327  : public IPv4InterfaceStatistics_t3249312820
{
public:
	// System.Net.NetworkInformation.LinuxNetworkInterface System.Net.NetworkInformation.LinuxIPv4InterfaceStatistics::linux
	LinuxNetworkInterface_t4095034716 * ___linux_0;

public:
	inline static int32_t get_offset_of_linux_0() { return static_cast<int32_t>(offsetof(LinuxIPv4InterfaceStatistics_t1812025327, ___linux_0)); }
	inline LinuxNetworkInterface_t4095034716 * get_linux_0() const { return ___linux_0; }
	inline LinuxNetworkInterface_t4095034716 ** get_address_of_linux_0() { return &___linux_0; }
	inline void set_linux_0(LinuxNetworkInterface_t4095034716 * value)
	{
		___linux_0 = value;
		Il2CppCodeGenWriteBarrier((&___linux_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXIPV4INTERFACESTATISTICS_T1812025327_H
#ifndef MACOSIPV4INTERFACESTATISTICS_T4027772578_H
#define MACOSIPV4INTERFACESTATISTICS_T4027772578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPv4InterfaceStatistics
struct  MacOsIPv4InterfaceStatistics_t4027772578  : public IPv4InterfaceStatistics_t3249312820
{
public:
	// System.Net.NetworkInformation.MacOsNetworkInterface System.Net.NetworkInformation.MacOsIPv4InterfaceStatistics::macos
	MacOsNetworkInterface_t3969281182 * ___macos_0;

public:
	inline static int32_t get_offset_of_macos_0() { return static_cast<int32_t>(offsetof(MacOsIPv4InterfaceStatistics_t4027772578, ___macos_0)); }
	inline MacOsNetworkInterface_t3969281182 * get_macos_0() const { return ___macos_0; }
	inline MacOsNetworkInterface_t3969281182 ** get_address_of_macos_0() { return &___macos_0; }
	inline void set_macos_0(MacOsNetworkInterface_t3969281182 * value)
	{
		___macos_0 = value;
		Il2CppCodeGenWriteBarrier((&___macos_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSIPV4INTERFACESTATISTICS_T4027772578_H
#ifndef SOCKADDR_T371844119_H
#define SOCKADDR_T371844119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr
struct  sockaddr_t371844119 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_len
	uint8_t ___sa_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr::sa_family
	uint8_t ___sa_family_1;

public:
	inline static int32_t get_offset_of_sa_len_0() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_len_0)); }
	inline uint8_t get_sa_len_0() const { return ___sa_len_0; }
	inline uint8_t* get_address_of_sa_len_0() { return &___sa_len_0; }
	inline void set_sa_len_0(uint8_t value)
	{
		___sa_len_0 = value;
	}

	inline static int32_t get_offset_of_sa_family_1() { return static_cast<int32_t>(offsetof(sockaddr_t371844119, ___sa_family_1)); }
	inline uint8_t get_sa_family_1() const { return ___sa_family_1; }
	inline uint8_t* get_address_of_sa_family_1() { return &___sa_family_1; }
	inline void set_sa_family_1(uint8_t value)
	{
		___sa_family_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_T371844119_H
#ifndef SOCKADDR_IN_T1317910171_H
#define SOCKADDR_IN_T1317910171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in
struct  sockaddr_in_t1317910171 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_len
	uint8_t ___sin_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_family
	uint8_t ___sin_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_port
	uint16_t ___sin_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in::sin_addr
	uint32_t ___sin_addr_3;

public:
	inline static int32_t get_offset_of_sin_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_len_0)); }
	inline uint8_t get_sin_len_0() const { return ___sin_len_0; }
	inline uint8_t* get_address_of_sin_len_0() { return &___sin_len_0; }
	inline void set_sin_len_0(uint8_t value)
	{
		___sin_len_0 = value;
	}

	inline static int32_t get_offset_of_sin_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_family_1)); }
	inline uint8_t get_sin_family_1() const { return ___sin_family_1; }
	inline uint8_t* get_address_of_sin_family_1() { return &___sin_family_1; }
	inline void set_sin_family_1(uint8_t value)
	{
		___sin_family_1 = value;
	}

	inline static int32_t get_offset_of_sin_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_port_2)); }
	inline uint16_t get_sin_port_2() const { return ___sin_port_2; }
	inline uint16_t* get_address_of_sin_port_2() { return &___sin_port_2; }
	inline void set_sin_port_2(uint16_t value)
	{
		___sin_port_2 = value;
	}

	inline static int32_t get_offset_of_sin_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in_t1317910171, ___sin_addr_3)); }
	inline uint32_t get_sin_addr_3() const { return ___sin_addr_3; }
	inline uint32_t* get_address_of_sin_addr_3() { return &___sin_addr_3; }
	inline void set_sin_addr_3(uint32_t value)
	{
		___sin_addr_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T1317910171_H
#ifndef MIBIPGLOBALSTATISTICS_T3758853144_H
#define MIBIPGLOBALSTATISTICS_T3758853144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIPGlobalStatistics
struct  MibIPGlobalStatistics_t3758853144  : public IPGlobalStatistics_t1020027804
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIPGlobalStatistics::dic
	StringDictionary_t120437468 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibIPGlobalStatistics_t3758853144, ___dic_0)); }
	inline StringDictionary_t120437468 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t120437468 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t120437468 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBIPGLOBALSTATISTICS_T3758853144_H
#ifndef MIBICMPV4STATISTICS_T4054347055_H
#define MIBICMPV4STATISTICS_T4054347055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIcmpV4Statistics
struct  MibIcmpV4Statistics_t4054347055  : public IcmpV4Statistics_t3304898107
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIcmpV4Statistics::dic
	StringDictionary_t120437468 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibIcmpV4Statistics_t4054347055, ___dic_0)); }
	inline StringDictionary_t120437468 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t120437468 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t120437468 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBICMPV4STATISTICS_T4054347055_H
#ifndef MIBICMPV6STATISTICS_T1375101177_H
#define MIBICMPV6STATISTICS_T1375101177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIcmpV6Statistics
struct  MibIcmpV6Statistics_t1375101177  : public IcmpV6Statistics_t3428499003
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIcmpV6Statistics::dic
	StringDictionary_t120437468 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibIcmpV6Statistics_t1375101177, ___dic_0)); }
	inline StringDictionary_t120437468 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t120437468 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t120437468 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBICMPV6STATISTICS_T1375101177_H
#ifndef MIBTCPSTATISTICS_T2831962491_H
#define MIBTCPSTATISTICS_T2831962491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibTcpStatistics
struct  MibTcpStatistics_t2831962491  : public TcpStatistics_t3354500482
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibTcpStatistics::dic
	StringDictionary_t120437468 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibTcpStatistics_t2831962491, ___dic_0)); }
	inline StringDictionary_t120437468 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t120437468 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t120437468 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBTCPSTATISTICS_T2831962491_H
#ifndef MIBUDPSTATISTICS_T3757832095_H
#define MIBUDPSTATISTICS_T3757832095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibUdpStatistics
struct  MibUdpStatistics_t3757832095  : public UdpStatistics_t827909905
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibUdpStatistics::dic
	StringDictionary_t120437468 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibUdpStatistics_t3757832095, ___dic_0)); }
	inline StringDictionary_t120437468 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t120437468 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t120437468 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier((&___dic_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBUDPSTATISTICS_T3757832095_H
#ifndef MULTICASTIPADDRESSINFORMATION_T2475333396_H
#define MULTICASTIPADDRESSINFORMATION_T2475333396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformation
struct  MulticastIPAddressInformation_t2475333396  : public IPAddressInformation_t3534952908
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATION_T2475333396_H
#ifndef MULTICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T3977501638_H
#define MULTICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T3977501638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection
struct  MulticastIPAddressInformationImplCollection_t3977501638  : public MulticastIPAddressInformationCollection_t3111466650
{
public:
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::is_readonly
	bool ___is_readonly_2;

public:
	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImplCollection_t3977501638, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}
};

struct MulticastIPAddressInformationImplCollection_t3977501638_StaticFields
{
public:
	// System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection System.Net.NetworkInformation.MulticastIPAddressInformationImplCollection::Empty
	MulticastIPAddressInformationImplCollection_t3977501638 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImplCollection_t3977501638_StaticFields, ___Empty_1)); }
	inline MulticastIPAddressInformationImplCollection_t3977501638 * get_Empty_1() const { return ___Empty_1; }
	inline MulticastIPAddressInformationImplCollection_t3977501638 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(MulticastIPAddressInformationImplCollection_t3977501638 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T3977501638_H
#ifndef NETWORKAVAILABILITYEVENTARGS_T1583703948_H
#define NETWORKAVAILABILITYEVENTARGS_T1583703948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkAvailabilityEventArgs
struct  NetworkAvailabilityEventArgs_t1583703948  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.Net.NetworkInformation.NetworkAvailabilityEventArgs::available
	bool ___available_1;

public:
	inline static int32_t get_offset_of_available_1() { return static_cast<int32_t>(offsetof(NetworkAvailabilityEventArgs_t1583703948, ___available_1)); }
	inline bool get_available_1() const { return ___available_1; }
	inline bool* get_address_of_available_1() { return &___available_1; }
	inline void set_available_1(bool value)
	{
		___available_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKAVAILABILITYEVENTARGS_T1583703948_H
#ifndef NETWORKINFORMATIONEXCEPTION_T2303982063_H
#define NETWORKINFORMATIONEXCEPTION_T2303982063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationException
struct  NetworkInformationException_t2303982063  : public Exception_t
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInformationException::error_code
	int32_t ___error_code_11;

public:
	inline static int32_t get_offset_of_error_code_11() { return static_cast<int32_t>(offsetof(NetworkInformationException_t2303982063, ___error_code_11)); }
	inline int32_t get_error_code_11() const { return ___error_code_11; }
	inline int32_t* get_address_of_error_code_11() { return &___error_code_11; }
	inline void set_error_code_11(int32_t value)
	{
		___error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATIONEXCEPTION_T2303982063_H
#ifndef CAP_USER_DATA_T_T1073178338_H
#define CAP_USER_DATA_T_T1073178338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/cap_user_data_t
struct  cap_user_data_t_t1073178338 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::effective
	uint32_t ___effective_0;
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::permitted
	uint32_t ___permitted_1;
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::inheritable
	uint32_t ___inheritable_2;

public:
	inline static int32_t get_offset_of_effective_0() { return static_cast<int32_t>(offsetof(cap_user_data_t_t1073178338, ___effective_0)); }
	inline uint32_t get_effective_0() const { return ___effective_0; }
	inline uint32_t* get_address_of_effective_0() { return &___effective_0; }
	inline void set_effective_0(uint32_t value)
	{
		___effective_0 = value;
	}

	inline static int32_t get_offset_of_permitted_1() { return static_cast<int32_t>(offsetof(cap_user_data_t_t1073178338, ___permitted_1)); }
	inline uint32_t get_permitted_1() const { return ___permitted_1; }
	inline uint32_t* get_address_of_permitted_1() { return &___permitted_1; }
	inline void set_permitted_1(uint32_t value)
	{
		___permitted_1 = value;
	}

	inline static int32_t get_offset_of_inheritable_2() { return static_cast<int32_t>(offsetof(cap_user_data_t_t1073178338, ___inheritable_2)); }
	inline uint32_t get_inheritable_2() const { return ___inheritable_2; }
	inline uint32_t* get_address_of_inheritable_2() { return &___inheritable_2; }
	inline void set_inheritable_2(uint32_t value)
	{
		___inheritable_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAP_USER_DATA_T_T1073178338_H
#ifndef CAP_USER_HEADER_T_T332549070_H
#define CAP_USER_HEADER_T_T332549070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/cap_user_header_t
struct  cap_user_header_t_t332549070 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_header_t::version
	uint32_t ___version_0;
	// System.Int32 System.Net.NetworkInformation.Ping/cap_user_header_t::pid
	int32_t ___pid_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(cap_user_header_t_t332549070, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(cap_user_header_t_t332549070, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAP_USER_HEADER_T_T332549070_H
#ifndef UNICASTIPADDRESSINFORMATION_T2439964334_H
#define UNICASTIPADDRESSINFORMATION_T2439964334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformation
struct  UnicastIPAddressInformation_t2439964334  : public IPAddressInformation_t3534952908
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICASTIPADDRESSINFORMATION_T2439964334_H
#ifndef UNICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T580319182_H
#define UNICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T580319182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection
struct  UnicastIPAddressInformationImplCollection_t580319182  : public UnicastIPAddressInformationCollection_t2190735649
{
public:
	// System.Boolean System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::is_readonly
	bool ___is_readonly_2;

public:
	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationImplCollection_t580319182, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}
};

struct UnicastIPAddressInformationImplCollection_t580319182_StaticFields
{
public:
	// System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection System.Net.NetworkInformation.UnicastIPAddressInformationImplCollection::Empty
	UnicastIPAddressInformationImplCollection_t580319182 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(UnicastIPAddressInformationImplCollection_t580319182_StaticFields, ___Empty_1)); }
	inline UnicastIPAddressInformationImplCollection_t580319182 * get_Empty_1() const { return ___Empty_1; }
	inline UnicastIPAddressInformationImplCollection_t580319182 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(UnicastIPAddressInformationImplCollection_t580319182 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICASTIPADDRESSINFORMATIONIMPLCOLLECTION_T580319182_H
#ifndef UNIXIPV4INTERFACEPROPERTIES_T1849319670_H
#define UNIXIPV4INTERFACEPROPERTIES_T1849319670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPv4InterfaceProperties
struct  UnixIPv4InterfaceProperties_t1849319670  : public IPv4InterfaceProperties_t4242495999
{
public:
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPv4InterfaceProperties::iface
	UnixNetworkInterface_t2401762829 * ___iface_0;

public:
	inline static int32_t get_offset_of_iface_0() { return static_cast<int32_t>(offsetof(UnixIPv4InterfaceProperties_t1849319670, ___iface_0)); }
	inline UnixNetworkInterface_t2401762829 * get_iface_0() const { return ___iface_0; }
	inline UnixNetworkInterface_t2401762829 ** get_address_of_iface_0() { return &___iface_0; }
	inline void set_iface_0(UnixNetworkInterface_t2401762829 * value)
	{
		___iface_0 = value;
		Il2CppCodeGenWriteBarrier((&___iface_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPV4INTERFACEPROPERTIES_T1849319670_H
#ifndef WIN32LENGTHFLAGSUNION_T1383639798_H
#define WIN32LENGTHFLAGSUNION_T1383639798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32LengthFlagsUnion
struct  Win32LengthFlagsUnion_t1383639798 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Length
	uint32_t ___Length_2;
	// System.UInt32 System.Net.NetworkInformation.Win32LengthFlagsUnion::Flags
	uint32_t ___Flags_3;

public:
	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1383639798, ___Length_2)); }
	inline uint32_t get_Length_2() const { return ___Length_2; }
	inline uint32_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(uint32_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_Flags_3() { return static_cast<int32_t>(offsetof(Win32LengthFlagsUnion_t1383639798, ___Flags_3)); }
	inline uint32_t get_Flags_3() const { return ___Flags_3; }
	inline uint32_t* get_address_of_Flags_3() { return &___Flags_3; }
	inline void set_Flags_3(uint32_t value)
	{
		___Flags_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32LENGTHFLAGSUNION_T1383639798_H
#ifndef WIN32_MIBICMPSTATS_T643360748_H
#define WIN32_MIBICMPSTATS_T643360748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPSTATS
struct  Win32_MIBICMPSTATS_t643360748 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Msgs
	uint32_t ___Msgs_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Errors
	uint32_t ___Errors_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::DestUnreachs
	uint32_t ___DestUnreachs_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::TimeExcds
	uint32_t ___TimeExcds_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::ParmProbs
	uint32_t ___ParmProbs_4;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::SrcQuenchs
	uint32_t ___SrcQuenchs_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Redirects
	uint32_t ___Redirects_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Echos
	uint32_t ___Echos_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::EchoReps
	uint32_t ___EchoReps_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::Timestamps
	uint32_t ___Timestamps_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::TimestampReps
	uint32_t ___TimestampReps_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::AddrMasks
	uint32_t ___AddrMasks_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS::AddrMaskReps
	uint32_t ___AddrMaskReps_12;

public:
	inline static int32_t get_offset_of_Msgs_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___Msgs_0)); }
	inline uint32_t get_Msgs_0() const { return ___Msgs_0; }
	inline uint32_t* get_address_of_Msgs_0() { return &___Msgs_0; }
	inline void set_Msgs_0(uint32_t value)
	{
		___Msgs_0 = value;
	}

	inline static int32_t get_offset_of_Errors_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___Errors_1)); }
	inline uint32_t get_Errors_1() const { return ___Errors_1; }
	inline uint32_t* get_address_of_Errors_1() { return &___Errors_1; }
	inline void set_Errors_1(uint32_t value)
	{
		___Errors_1 = value;
	}

	inline static int32_t get_offset_of_DestUnreachs_2() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___DestUnreachs_2)); }
	inline uint32_t get_DestUnreachs_2() const { return ___DestUnreachs_2; }
	inline uint32_t* get_address_of_DestUnreachs_2() { return &___DestUnreachs_2; }
	inline void set_DestUnreachs_2(uint32_t value)
	{
		___DestUnreachs_2 = value;
	}

	inline static int32_t get_offset_of_TimeExcds_3() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___TimeExcds_3)); }
	inline uint32_t get_TimeExcds_3() const { return ___TimeExcds_3; }
	inline uint32_t* get_address_of_TimeExcds_3() { return &___TimeExcds_3; }
	inline void set_TimeExcds_3(uint32_t value)
	{
		___TimeExcds_3 = value;
	}

	inline static int32_t get_offset_of_ParmProbs_4() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___ParmProbs_4)); }
	inline uint32_t get_ParmProbs_4() const { return ___ParmProbs_4; }
	inline uint32_t* get_address_of_ParmProbs_4() { return &___ParmProbs_4; }
	inline void set_ParmProbs_4(uint32_t value)
	{
		___ParmProbs_4 = value;
	}

	inline static int32_t get_offset_of_SrcQuenchs_5() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___SrcQuenchs_5)); }
	inline uint32_t get_SrcQuenchs_5() const { return ___SrcQuenchs_5; }
	inline uint32_t* get_address_of_SrcQuenchs_5() { return &___SrcQuenchs_5; }
	inline void set_SrcQuenchs_5(uint32_t value)
	{
		___SrcQuenchs_5 = value;
	}

	inline static int32_t get_offset_of_Redirects_6() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___Redirects_6)); }
	inline uint32_t get_Redirects_6() const { return ___Redirects_6; }
	inline uint32_t* get_address_of_Redirects_6() { return &___Redirects_6; }
	inline void set_Redirects_6(uint32_t value)
	{
		___Redirects_6 = value;
	}

	inline static int32_t get_offset_of_Echos_7() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___Echos_7)); }
	inline uint32_t get_Echos_7() const { return ___Echos_7; }
	inline uint32_t* get_address_of_Echos_7() { return &___Echos_7; }
	inline void set_Echos_7(uint32_t value)
	{
		___Echos_7 = value;
	}

	inline static int32_t get_offset_of_EchoReps_8() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___EchoReps_8)); }
	inline uint32_t get_EchoReps_8() const { return ___EchoReps_8; }
	inline uint32_t* get_address_of_EchoReps_8() { return &___EchoReps_8; }
	inline void set_EchoReps_8(uint32_t value)
	{
		___EchoReps_8 = value;
	}

	inline static int32_t get_offset_of_Timestamps_9() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___Timestamps_9)); }
	inline uint32_t get_Timestamps_9() const { return ___Timestamps_9; }
	inline uint32_t* get_address_of_Timestamps_9() { return &___Timestamps_9; }
	inline void set_Timestamps_9(uint32_t value)
	{
		___Timestamps_9 = value;
	}

	inline static int32_t get_offset_of_TimestampReps_10() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___TimestampReps_10)); }
	inline uint32_t get_TimestampReps_10() const { return ___TimestampReps_10; }
	inline uint32_t* get_address_of_TimestampReps_10() { return &___TimestampReps_10; }
	inline void set_TimestampReps_10(uint32_t value)
	{
		___TimestampReps_10 = value;
	}

	inline static int32_t get_offset_of_AddrMasks_11() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___AddrMasks_11)); }
	inline uint32_t get_AddrMasks_11() const { return ___AddrMasks_11; }
	inline uint32_t* get_address_of_AddrMasks_11() { return &___AddrMasks_11; }
	inline void set_AddrMasks_11(uint32_t value)
	{
		___AddrMasks_11 = value;
	}

	inline static int32_t get_offset_of_AddrMaskReps_12() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_t643360748, ___AddrMaskReps_12)); }
	inline uint32_t get_AddrMaskReps_12() const { return ___AddrMaskReps_12; }
	inline uint32_t* get_address_of_AddrMaskReps_12() { return &___AddrMaskReps_12; }
	inline void set_AddrMaskReps_12(uint32_t value)
	{
		___AddrMaskReps_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIBICMPSTATS_T643360748_H
#ifndef WIN32_MIB_IPSTATS_T21271030_H
#define WIN32_MIB_IPSTATS_T21271030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IPSTATS
struct  Win32_MIB_IPSTATS_t21271030 
{
public:
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::Forwarding
	int32_t ___Forwarding_0;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::DefaultTTL
	int32_t ___DefaultTTL_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::InReceives
	uint32_t ___InReceives_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::InHdrErrors
	uint32_t ___InHdrErrors_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::InAddrErrors
	uint32_t ___InAddrErrors_4;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::ForwDatagrams
	uint32_t ___ForwDatagrams_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::InUnknownProtos
	uint32_t ___InUnknownProtos_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::InDiscards
	uint32_t ___InDiscards_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::InDelivers
	uint32_t ___InDelivers_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::OutRequests
	uint32_t ___OutRequests_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::RoutingDiscards
	uint32_t ___RoutingDiscards_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::OutDiscards
	uint32_t ___OutDiscards_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::OutNoRoutes
	uint32_t ___OutNoRoutes_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::ReasmTimeout
	uint32_t ___ReasmTimeout_13;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::ReasmReqds
	uint32_t ___ReasmReqds_14;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::ReasmOks
	uint32_t ___ReasmOks_15;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::ReasmFails
	uint32_t ___ReasmFails_16;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::FragOks
	uint32_t ___FragOks_17;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::FragFails
	uint32_t ___FragFails_18;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::FragCreates
	uint32_t ___FragCreates_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::NumIf
	int32_t ___NumIf_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::NumAddr
	int32_t ___NumAddr_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IPSTATS::NumRoutes
	int32_t ___NumRoutes_22;

public:
	inline static int32_t get_offset_of_Forwarding_0() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___Forwarding_0)); }
	inline int32_t get_Forwarding_0() const { return ___Forwarding_0; }
	inline int32_t* get_address_of_Forwarding_0() { return &___Forwarding_0; }
	inline void set_Forwarding_0(int32_t value)
	{
		___Forwarding_0 = value;
	}

	inline static int32_t get_offset_of_DefaultTTL_1() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___DefaultTTL_1)); }
	inline int32_t get_DefaultTTL_1() const { return ___DefaultTTL_1; }
	inline int32_t* get_address_of_DefaultTTL_1() { return &___DefaultTTL_1; }
	inline void set_DefaultTTL_1(int32_t value)
	{
		___DefaultTTL_1 = value;
	}

	inline static int32_t get_offset_of_InReceives_2() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___InReceives_2)); }
	inline uint32_t get_InReceives_2() const { return ___InReceives_2; }
	inline uint32_t* get_address_of_InReceives_2() { return &___InReceives_2; }
	inline void set_InReceives_2(uint32_t value)
	{
		___InReceives_2 = value;
	}

	inline static int32_t get_offset_of_InHdrErrors_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___InHdrErrors_3)); }
	inline uint32_t get_InHdrErrors_3() const { return ___InHdrErrors_3; }
	inline uint32_t* get_address_of_InHdrErrors_3() { return &___InHdrErrors_3; }
	inline void set_InHdrErrors_3(uint32_t value)
	{
		___InHdrErrors_3 = value;
	}

	inline static int32_t get_offset_of_InAddrErrors_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___InAddrErrors_4)); }
	inline uint32_t get_InAddrErrors_4() const { return ___InAddrErrors_4; }
	inline uint32_t* get_address_of_InAddrErrors_4() { return &___InAddrErrors_4; }
	inline void set_InAddrErrors_4(uint32_t value)
	{
		___InAddrErrors_4 = value;
	}

	inline static int32_t get_offset_of_ForwDatagrams_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___ForwDatagrams_5)); }
	inline uint32_t get_ForwDatagrams_5() const { return ___ForwDatagrams_5; }
	inline uint32_t* get_address_of_ForwDatagrams_5() { return &___ForwDatagrams_5; }
	inline void set_ForwDatagrams_5(uint32_t value)
	{
		___ForwDatagrams_5 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___InUnknownProtos_6)); }
	inline uint32_t get_InUnknownProtos_6() const { return ___InUnknownProtos_6; }
	inline uint32_t* get_address_of_InUnknownProtos_6() { return &___InUnknownProtos_6; }
	inline void set_InUnknownProtos_6(uint32_t value)
	{
		___InUnknownProtos_6 = value;
	}

	inline static int32_t get_offset_of_InDiscards_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___InDiscards_7)); }
	inline uint32_t get_InDiscards_7() const { return ___InDiscards_7; }
	inline uint32_t* get_address_of_InDiscards_7() { return &___InDiscards_7; }
	inline void set_InDiscards_7(uint32_t value)
	{
		___InDiscards_7 = value;
	}

	inline static int32_t get_offset_of_InDelivers_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___InDelivers_8)); }
	inline uint32_t get_InDelivers_8() const { return ___InDelivers_8; }
	inline uint32_t* get_address_of_InDelivers_8() { return &___InDelivers_8; }
	inline void set_InDelivers_8(uint32_t value)
	{
		___InDelivers_8 = value;
	}

	inline static int32_t get_offset_of_OutRequests_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___OutRequests_9)); }
	inline uint32_t get_OutRequests_9() const { return ___OutRequests_9; }
	inline uint32_t* get_address_of_OutRequests_9() { return &___OutRequests_9; }
	inline void set_OutRequests_9(uint32_t value)
	{
		___OutRequests_9 = value;
	}

	inline static int32_t get_offset_of_RoutingDiscards_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___RoutingDiscards_10)); }
	inline uint32_t get_RoutingDiscards_10() const { return ___RoutingDiscards_10; }
	inline uint32_t* get_address_of_RoutingDiscards_10() { return &___RoutingDiscards_10; }
	inline void set_RoutingDiscards_10(uint32_t value)
	{
		___RoutingDiscards_10 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___OutDiscards_11)); }
	inline uint32_t get_OutDiscards_11() const { return ___OutDiscards_11; }
	inline uint32_t* get_address_of_OutDiscards_11() { return &___OutDiscards_11; }
	inline void set_OutDiscards_11(uint32_t value)
	{
		___OutDiscards_11 = value;
	}

	inline static int32_t get_offset_of_OutNoRoutes_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___OutNoRoutes_12)); }
	inline uint32_t get_OutNoRoutes_12() const { return ___OutNoRoutes_12; }
	inline uint32_t* get_address_of_OutNoRoutes_12() { return &___OutNoRoutes_12; }
	inline void set_OutNoRoutes_12(uint32_t value)
	{
		___OutNoRoutes_12 = value;
	}

	inline static int32_t get_offset_of_ReasmTimeout_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___ReasmTimeout_13)); }
	inline uint32_t get_ReasmTimeout_13() const { return ___ReasmTimeout_13; }
	inline uint32_t* get_address_of_ReasmTimeout_13() { return &___ReasmTimeout_13; }
	inline void set_ReasmTimeout_13(uint32_t value)
	{
		___ReasmTimeout_13 = value;
	}

	inline static int32_t get_offset_of_ReasmReqds_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___ReasmReqds_14)); }
	inline uint32_t get_ReasmReqds_14() const { return ___ReasmReqds_14; }
	inline uint32_t* get_address_of_ReasmReqds_14() { return &___ReasmReqds_14; }
	inline void set_ReasmReqds_14(uint32_t value)
	{
		___ReasmReqds_14 = value;
	}

	inline static int32_t get_offset_of_ReasmOks_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___ReasmOks_15)); }
	inline uint32_t get_ReasmOks_15() const { return ___ReasmOks_15; }
	inline uint32_t* get_address_of_ReasmOks_15() { return &___ReasmOks_15; }
	inline void set_ReasmOks_15(uint32_t value)
	{
		___ReasmOks_15 = value;
	}

	inline static int32_t get_offset_of_ReasmFails_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___ReasmFails_16)); }
	inline uint32_t get_ReasmFails_16() const { return ___ReasmFails_16; }
	inline uint32_t* get_address_of_ReasmFails_16() { return &___ReasmFails_16; }
	inline void set_ReasmFails_16(uint32_t value)
	{
		___ReasmFails_16 = value;
	}

	inline static int32_t get_offset_of_FragOks_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___FragOks_17)); }
	inline uint32_t get_FragOks_17() const { return ___FragOks_17; }
	inline uint32_t* get_address_of_FragOks_17() { return &___FragOks_17; }
	inline void set_FragOks_17(uint32_t value)
	{
		___FragOks_17 = value;
	}

	inline static int32_t get_offset_of_FragFails_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___FragFails_18)); }
	inline uint32_t get_FragFails_18() const { return ___FragFails_18; }
	inline uint32_t* get_address_of_FragFails_18() { return &___FragFails_18; }
	inline void set_FragFails_18(uint32_t value)
	{
		___FragFails_18 = value;
	}

	inline static int32_t get_offset_of_FragCreates_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___FragCreates_19)); }
	inline uint32_t get_FragCreates_19() const { return ___FragCreates_19; }
	inline uint32_t* get_address_of_FragCreates_19() { return &___FragCreates_19; }
	inline void set_FragCreates_19(uint32_t value)
	{
		___FragCreates_19 = value;
	}

	inline static int32_t get_offset_of_NumIf_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___NumIf_20)); }
	inline int32_t get_NumIf_20() const { return ___NumIf_20; }
	inline int32_t* get_address_of_NumIf_20() { return &___NumIf_20; }
	inline void set_NumIf_20(int32_t value)
	{
		___NumIf_20 = value;
	}

	inline static int32_t get_offset_of_NumAddr_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___NumAddr_21)); }
	inline int32_t get_NumAddr_21() const { return ___NumAddr_21; }
	inline int32_t* get_address_of_NumAddr_21() { return &___NumAddr_21; }
	inline void set_NumAddr_21(int32_t value)
	{
		___NumAddr_21 = value;
	}

	inline static int32_t get_offset_of_NumRoutes_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IPSTATS_t21271030, ___NumRoutes_22)); }
	inline int32_t get_NumRoutes_22() const { return ___NumRoutes_22; }
	inline int32_t* get_address_of_NumRoutes_22() { return &___NumRoutes_22; }
	inline void set_NumRoutes_22(int32_t value)
	{
		___NumRoutes_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIB_IPSTATS_T21271030_H
#ifndef WIN32_MIB_TCPSTATS_T1555608930_H
#define WIN32_MIB_TCPSTATS_T1555608930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_TCPSTATS
struct  Win32_MIB_TCPSTATS_t1555608930 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RtoAlgorithm
	uint32_t ___RtoAlgorithm_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RtoMin
	uint32_t ___RtoMin_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RtoMax
	uint32_t ___RtoMax_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::MaxConn
	uint32_t ___MaxConn_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::ActiveOpens
	uint32_t ___ActiveOpens_4;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::PassiveOpens
	uint32_t ___PassiveOpens_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::AttemptFails
	uint32_t ___AttemptFails_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::EstabResets
	uint32_t ___EstabResets_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::CurrEstab
	uint32_t ___CurrEstab_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::InSegs
	uint32_t ___InSegs_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::OutSegs
	uint32_t ___OutSegs_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::RetransSegs
	uint32_t ___RetransSegs_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::InErrs
	uint32_t ___InErrs_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::OutRsts
	uint32_t ___OutRsts_13;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_TCPSTATS::NumConns
	uint32_t ___NumConns_14;

public:
	inline static int32_t get_offset_of_RtoAlgorithm_0() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___RtoAlgorithm_0)); }
	inline uint32_t get_RtoAlgorithm_0() const { return ___RtoAlgorithm_0; }
	inline uint32_t* get_address_of_RtoAlgorithm_0() { return &___RtoAlgorithm_0; }
	inline void set_RtoAlgorithm_0(uint32_t value)
	{
		___RtoAlgorithm_0 = value;
	}

	inline static int32_t get_offset_of_RtoMin_1() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___RtoMin_1)); }
	inline uint32_t get_RtoMin_1() const { return ___RtoMin_1; }
	inline uint32_t* get_address_of_RtoMin_1() { return &___RtoMin_1; }
	inline void set_RtoMin_1(uint32_t value)
	{
		___RtoMin_1 = value;
	}

	inline static int32_t get_offset_of_RtoMax_2() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___RtoMax_2)); }
	inline uint32_t get_RtoMax_2() const { return ___RtoMax_2; }
	inline uint32_t* get_address_of_RtoMax_2() { return &___RtoMax_2; }
	inline void set_RtoMax_2(uint32_t value)
	{
		___RtoMax_2 = value;
	}

	inline static int32_t get_offset_of_MaxConn_3() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___MaxConn_3)); }
	inline uint32_t get_MaxConn_3() const { return ___MaxConn_3; }
	inline uint32_t* get_address_of_MaxConn_3() { return &___MaxConn_3; }
	inline void set_MaxConn_3(uint32_t value)
	{
		___MaxConn_3 = value;
	}

	inline static int32_t get_offset_of_ActiveOpens_4() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___ActiveOpens_4)); }
	inline uint32_t get_ActiveOpens_4() const { return ___ActiveOpens_4; }
	inline uint32_t* get_address_of_ActiveOpens_4() { return &___ActiveOpens_4; }
	inline void set_ActiveOpens_4(uint32_t value)
	{
		___ActiveOpens_4 = value;
	}

	inline static int32_t get_offset_of_PassiveOpens_5() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___PassiveOpens_5)); }
	inline uint32_t get_PassiveOpens_5() const { return ___PassiveOpens_5; }
	inline uint32_t* get_address_of_PassiveOpens_5() { return &___PassiveOpens_5; }
	inline void set_PassiveOpens_5(uint32_t value)
	{
		___PassiveOpens_5 = value;
	}

	inline static int32_t get_offset_of_AttemptFails_6() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___AttemptFails_6)); }
	inline uint32_t get_AttemptFails_6() const { return ___AttemptFails_6; }
	inline uint32_t* get_address_of_AttemptFails_6() { return &___AttemptFails_6; }
	inline void set_AttemptFails_6(uint32_t value)
	{
		___AttemptFails_6 = value;
	}

	inline static int32_t get_offset_of_EstabResets_7() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___EstabResets_7)); }
	inline uint32_t get_EstabResets_7() const { return ___EstabResets_7; }
	inline uint32_t* get_address_of_EstabResets_7() { return &___EstabResets_7; }
	inline void set_EstabResets_7(uint32_t value)
	{
		___EstabResets_7 = value;
	}

	inline static int32_t get_offset_of_CurrEstab_8() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___CurrEstab_8)); }
	inline uint32_t get_CurrEstab_8() const { return ___CurrEstab_8; }
	inline uint32_t* get_address_of_CurrEstab_8() { return &___CurrEstab_8; }
	inline void set_CurrEstab_8(uint32_t value)
	{
		___CurrEstab_8 = value;
	}

	inline static int32_t get_offset_of_InSegs_9() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___InSegs_9)); }
	inline uint32_t get_InSegs_9() const { return ___InSegs_9; }
	inline uint32_t* get_address_of_InSegs_9() { return &___InSegs_9; }
	inline void set_InSegs_9(uint32_t value)
	{
		___InSegs_9 = value;
	}

	inline static int32_t get_offset_of_OutSegs_10() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___OutSegs_10)); }
	inline uint32_t get_OutSegs_10() const { return ___OutSegs_10; }
	inline uint32_t* get_address_of_OutSegs_10() { return &___OutSegs_10; }
	inline void set_OutSegs_10(uint32_t value)
	{
		___OutSegs_10 = value;
	}

	inline static int32_t get_offset_of_RetransSegs_11() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___RetransSegs_11)); }
	inline uint32_t get_RetransSegs_11() const { return ___RetransSegs_11; }
	inline uint32_t* get_address_of_RetransSegs_11() { return &___RetransSegs_11; }
	inline void set_RetransSegs_11(uint32_t value)
	{
		___RetransSegs_11 = value;
	}

	inline static int32_t get_offset_of_InErrs_12() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___InErrs_12)); }
	inline uint32_t get_InErrs_12() const { return ___InErrs_12; }
	inline uint32_t* get_address_of_InErrs_12() { return &___InErrs_12; }
	inline void set_InErrs_12(uint32_t value)
	{
		___InErrs_12 = value;
	}

	inline static int32_t get_offset_of_OutRsts_13() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___OutRsts_13)); }
	inline uint32_t get_OutRsts_13() const { return ___OutRsts_13; }
	inline uint32_t* get_address_of_OutRsts_13() { return &___OutRsts_13; }
	inline void set_OutRsts_13(uint32_t value)
	{
		___OutRsts_13 = value;
	}

	inline static int32_t get_offset_of_NumConns_14() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPSTATS_t1555608930, ___NumConns_14)); }
	inline uint32_t get_NumConns_14() const { return ___NumConns_14; }
	inline uint32_t* get_address_of_NumConns_14() { return &___NumConns_14; }
	inline void set_NumConns_14(uint32_t value)
	{
		___NumConns_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIB_TCPSTATS_T1555608930_H
#ifndef WIN32_MIB_UDPSTATS_T1540601281_H
#define WIN32_MIB_UDPSTATS_T1540601281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_UDPSTATS
struct  Win32_MIB_UDPSTATS_t1540601281 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::InDatagrams
	uint32_t ___InDatagrams_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::NoPorts
	uint32_t ___NoPorts_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::InErrors
	uint32_t ___InErrors_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::OutDatagrams
	uint32_t ___OutDatagrams_3;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::NumAddrs
	int32_t ___NumAddrs_4;

public:
	inline static int32_t get_offset_of_InDatagrams_0() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t1540601281, ___InDatagrams_0)); }
	inline uint32_t get_InDatagrams_0() const { return ___InDatagrams_0; }
	inline uint32_t* get_address_of_InDatagrams_0() { return &___InDatagrams_0; }
	inline void set_InDatagrams_0(uint32_t value)
	{
		___InDatagrams_0 = value;
	}

	inline static int32_t get_offset_of_NoPorts_1() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t1540601281, ___NoPorts_1)); }
	inline uint32_t get_NoPorts_1() const { return ___NoPorts_1; }
	inline uint32_t* get_address_of_NoPorts_1() { return &___NoPorts_1; }
	inline void set_NoPorts_1(uint32_t value)
	{
		___NoPorts_1 = value;
	}

	inline static int32_t get_offset_of_InErrors_2() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t1540601281, ___InErrors_2)); }
	inline uint32_t get_InErrors_2() const { return ___InErrors_2; }
	inline uint32_t* get_address_of_InErrors_2() { return &___InErrors_2; }
	inline void set_InErrors_2(uint32_t value)
	{
		___InErrors_2 = value;
	}

	inline static int32_t get_offset_of_OutDatagrams_3() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t1540601281, ___OutDatagrams_3)); }
	inline uint32_t get_OutDatagrams_3() const { return ___OutDatagrams_3; }
	inline uint32_t* get_address_of_OutDatagrams_3() { return &___OutDatagrams_3; }
	inline void set_OutDatagrams_3(uint32_t value)
	{
		___OutDatagrams_3 = value;
	}

	inline static int32_t get_offset_of_NumAddrs_4() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t1540601281, ___NumAddrs_4)); }
	inline int32_t get_NumAddrs_4() const { return ___NumAddrs_4; }
	inline int32_t* get_address_of_NumAddrs_4() { return &___NumAddrs_4; }
	inline void set_NumAddrs_4(int32_t value)
	{
		___NumAddrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIB_UDPSTATS_T1540601281_H
#ifndef SOCKADDR_IN_T2786965223_H
#define SOCKADDR_IN_T2786965223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in
struct  sockaddr_in_t2786965223 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_family
	uint16_t ___sin_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_port
	uint16_t ___sin_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in::sin_addr
	uint32_t ___sin_addr_2;

public:
	inline static int32_t get_offset_of_sin_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_family_0)); }
	inline uint16_t get_sin_family_0() const { return ___sin_family_0; }
	inline uint16_t* get_address_of_sin_family_0() { return &___sin_family_0; }
	inline void set_sin_family_0(uint16_t value)
	{
		___sin_family_0 = value;
	}

	inline static int32_t get_offset_of_sin_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_port_1)); }
	inline uint16_t get_sin_port_1() const { return ___sin_port_1; }
	inline uint16_t* get_address_of_sin_port_1() { return &___sin_port_1; }
	inline void set_sin_port_1(uint16_t value)
	{
		___sin_port_1 = value;
	}

	inline static int32_t get_offset_of_sin_addr_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_addr_2)); }
	inline uint32_t get_sin_addr_2() const { return ___sin_addr_2; }
	inline uint32_t* get_address_of_sin_addr_2() { return &___sin_addr_2; }
	inline void set_sin_addr_2(uint32_t value)
	{
		___sin_addr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T2786965223_H
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
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef DUPLICATEADDRESSDETECTIONSTATE_T2047789414_H
#define DUPLICATEADDRESSDETECTIONSTATE_T2047789414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.DuplicateAddressDetectionState
struct  DuplicateAddressDetectionState_t2047789414 
{
public:
	// System.Int32 System.Net.NetworkInformation.DuplicateAddressDetectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DuplicateAddressDetectionState_t2047789414, ___value___1)); }
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
#endif // DUPLICATEADDRESSDETECTIONSTATE_T2047789414_H
#ifndef IPSTATUS_T2681468906_H
#define IPSTATUS_T2681468906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPStatus
struct  IPStatus_t2681468906 
{
public:
	// System.Int32 System.Net.NetworkInformation.IPStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IPStatus_t2681468906, ___value___1)); }
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
#endif // IPSTATUS_T2681468906_H
#ifndef LINUXARPHARDWARE_T827080684_H
#define LINUXARPHARDWARE_T827080684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxArpHardware
struct  LinuxArpHardware_t827080684 
{
public:
	// System.Int32 System.Net.NetworkInformation.LinuxArpHardware::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LinuxArpHardware_t827080684, ___value___1)); }
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
#endif // LINUXARPHARDWARE_T827080684_H
#ifndef LINUXIPV4INTERFACEPROPERTIES_T4058279570_H
#define LINUXIPV4INTERFACEPROPERTIES_T4058279570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPv4InterfaceProperties
struct  LinuxIPv4InterfaceProperties_t4058279570  : public UnixIPv4InterfaceProperties_t1849319670
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXIPV4INTERFACEPROPERTIES_T4058279570_H
#ifndef LINUXUNICASTIPADDRESSINFORMATION_T1918660316_H
#define LINUXUNICASTIPADDRESSINFORMATION_T1918660316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
struct  LinuxUnicastIPAddressInformation_t1918660316  : public UnicastIPAddressInformation_t2439964334
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::address
	IPAddress_t241777590 * ___address_0;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(LinuxUnicastIPAddressInformation_t1918660316, ___address_0)); }
	inline IPAddress_t241777590 * get_address_0() const { return ___address_0; }
	inline IPAddress_t241777590 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t241777590 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXUNICASTIPADDRESSINFORMATION_T1918660316_H
#ifndef MACOSARPHARDWARE_T4198534184_H
#define MACOSARPHARDWARE_T4198534184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsArpHardware
struct  MacOsArpHardware_t4198534184 
{
public:
	// System.Int32 System.Net.NetworkInformation.MacOsArpHardware::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MacOsArpHardware_t4198534184, ___value___1)); }
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
#endif // MACOSARPHARDWARE_T4198534184_H
#ifndef MACOSIPV4INTERFACEPROPERTIES_T1234053671_H
#define MACOSIPV4INTERFACEPROPERTIES_T1234053671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPv4InterfaceProperties
struct  MacOsIPv4InterfaceProperties_t1234053671  : public UnixIPv4InterfaceProperties_t1849319670
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSIPV4INTERFACEPROPERTIES_T1234053671_H
#ifndef IFADDRS_T2169824096_H
#define IFADDRS_T2169824096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct  ifaddrs_t2169824096 
{
public:
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_dstaddr
	intptr_t ___ifa_dstaddr_5;
	// System.IntPtr System.Net.NetworkInformation.MacOsStructs.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_dstaddr_5() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_dstaddr_5)); }
	inline intptr_t get_ifa_dstaddr_5() const { return ___ifa_dstaddr_5; }
	inline intptr_t* get_address_of_ifa_dstaddr_5() { return &___ifa_dstaddr_5; }
	inline void set_ifa_dstaddr_5(intptr_t value)
	{
		___ifa_dstaddr_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t2169824096, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct ifaddrs_t2169824096_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	intptr_t ___ifa_dstaddr_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T2169824096_H
#ifndef IN6_ADDR_T1417766092_H
#define IN6_ADDR_T1417766092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.in6_addr
struct  in6_addr_t1417766092 
{
public:
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t1417766092, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.in6_addr
struct in6_addr_t1417766092_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T1417766092_H
#ifndef SOCKADDR_DL_T1317779094_H
#define SOCKADDR_DL_T1317779094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct  sockaddr_dl_t1317779094 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_len
	uint8_t ___sdl_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_family
	uint8_t ___sdl_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_index
	uint16_t ___sdl_index_2;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_type
	uint8_t ___sdl_type_3;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_nlen
	uint8_t ___sdl_nlen_4;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_alen
	uint8_t ___sdl_alen_5;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_slen
	uint8_t ___sdl_slen_6;
	// System.Byte[] System.Net.NetworkInformation.MacOsStructs.sockaddr_dl::sdl_data
	ByteU5BU5D_t4116647657* ___sdl_data_7;

public:
	inline static int32_t get_offset_of_sdl_len_0() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_len_0)); }
	inline uint8_t get_sdl_len_0() const { return ___sdl_len_0; }
	inline uint8_t* get_address_of_sdl_len_0() { return &___sdl_len_0; }
	inline void set_sdl_len_0(uint8_t value)
	{
		___sdl_len_0 = value;
	}

	inline static int32_t get_offset_of_sdl_family_1() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_family_1)); }
	inline uint8_t get_sdl_family_1() const { return ___sdl_family_1; }
	inline uint8_t* get_address_of_sdl_family_1() { return &___sdl_family_1; }
	inline void set_sdl_family_1(uint8_t value)
	{
		___sdl_family_1 = value;
	}

	inline static int32_t get_offset_of_sdl_index_2() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_index_2)); }
	inline uint16_t get_sdl_index_2() const { return ___sdl_index_2; }
	inline uint16_t* get_address_of_sdl_index_2() { return &___sdl_index_2; }
	inline void set_sdl_index_2(uint16_t value)
	{
		___sdl_index_2 = value;
	}

	inline static int32_t get_offset_of_sdl_type_3() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_type_3)); }
	inline uint8_t get_sdl_type_3() const { return ___sdl_type_3; }
	inline uint8_t* get_address_of_sdl_type_3() { return &___sdl_type_3; }
	inline void set_sdl_type_3(uint8_t value)
	{
		___sdl_type_3 = value;
	}

	inline static int32_t get_offset_of_sdl_nlen_4() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_nlen_4)); }
	inline uint8_t get_sdl_nlen_4() const { return ___sdl_nlen_4; }
	inline uint8_t* get_address_of_sdl_nlen_4() { return &___sdl_nlen_4; }
	inline void set_sdl_nlen_4(uint8_t value)
	{
		___sdl_nlen_4 = value;
	}

	inline static int32_t get_offset_of_sdl_alen_5() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_alen_5)); }
	inline uint8_t get_sdl_alen_5() const { return ___sdl_alen_5; }
	inline uint8_t* get_address_of_sdl_alen_5() { return &___sdl_alen_5; }
	inline void set_sdl_alen_5(uint8_t value)
	{
		___sdl_alen_5 = value;
	}

	inline static int32_t get_offset_of_sdl_slen_6() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_slen_6)); }
	inline uint8_t get_sdl_slen_6() const { return ___sdl_slen_6; }
	inline uint8_t* get_address_of_sdl_slen_6() { return &___sdl_slen_6; }
	inline void set_sdl_slen_6(uint8_t value)
	{
		___sdl_slen_6 = value;
	}

	inline static int32_t get_offset_of_sdl_data_7() { return static_cast<int32_t>(offsetof(sockaddr_dl_t1317779094, ___sdl_data_7)); }
	inline ByteU5BU5D_t4116647657* get_sdl_data_7() const { return ___sdl_data_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_sdl_data_7() { return &___sdl_data_7; }
	inline void set_sdl_data_7(ByteU5BU5D_t4116647657* value)
	{
		___sdl_data_7 = value;
		Il2CppCodeGenWriteBarrier((&___sdl_data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_pinvoke
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t ___sdl_data_7[12];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_dl
struct sockaddr_dl_t1317779094_marshaled_com
{
	uint8_t ___sdl_len_0;
	uint8_t ___sdl_family_1;
	uint16_t ___sdl_index_2;
	uint8_t ___sdl_type_3;
	uint8_t ___sdl_nlen_4;
	uint8_t ___sdl_alen_5;
	uint8_t ___sdl_slen_6;
	uint8_t ___sdl_data_7[12];
};
#endif // SOCKADDR_DL_T1317779094_H
#ifndef MULTICASTIPADDRESSINFORMATIONIMPL_T1150912933_H
#define MULTICASTIPADDRESSINFORMATIONIMPL_T1150912933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationImpl
struct  MulticastIPAddressInformationImpl_t1150912933  : public MulticastIPAddressInformation_t2475333396
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.MulticastIPAddressInformationImpl::address
	IPAddress_t241777590 * ___address_0;
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::is_dns_eligible
	bool ___is_dns_eligible_1;
	// System.Boolean System.Net.NetworkInformation.MulticastIPAddressInformationImpl::is_transient
	bool ___is_transient_2;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImpl_t1150912933, ___address_0)); }
	inline IPAddress_t241777590 * get_address_0() const { return ___address_0; }
	inline IPAddress_t241777590 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t241777590 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_is_dns_eligible_1() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImpl_t1150912933, ___is_dns_eligible_1)); }
	inline bool get_is_dns_eligible_1() const { return ___is_dns_eligible_1; }
	inline bool* get_address_of_is_dns_eligible_1() { return &___is_dns_eligible_1; }
	inline void set_is_dns_eligible_1(bool value)
	{
		___is_dns_eligible_1 = value;
	}

	inline static int32_t get_offset_of_is_transient_2() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationImpl_t1150912933, ___is_transient_2)); }
	inline bool get_is_transient_2() const { return ___is_transient_2; }
	inline bool* get_address_of_is_transient_2() { return &___is_transient_2; }
	inline void set_is_transient_2(bool value)
	{
		___is_transient_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTIPADDRESSINFORMATIONIMPL_T1150912933_H
#ifndef NETBIOSNODETYPE_T3568904212_H
#define NETBIOSNODETYPE_T3568904212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3568904212 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3568904212, ___value___1)); }
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
#endif // NETBIOSNODETYPE_T3568904212_H
#ifndef NETWORKINFORMATIONACCESS_T3492676936_H
#define NETWORKINFORMATIONACCESS_T3492676936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationAccess
struct  NetworkInformationAccess_t3492676936 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInformationAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInformationAccess_t3492676936, ___value___1)); }
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
#endif // NETWORKINFORMATIONACCESS_T3492676936_H
#ifndef NETWORKINTERFACECOMPONENT_T1400510776_H
#define NETWORKINTERFACECOMPONENT_T1400510776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceComponent
struct  NetworkInterfaceComponent_t1400510776 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceComponent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInterfaceComponent_t1400510776, ___value___1)); }
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
#endif // NETWORKINTERFACECOMPONENT_T1400510776_H
#ifndef NETWORKINTERFACETYPE_T616418749_H
#define NETWORKINTERFACETYPE_T616418749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t616418749 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t616418749, ___value___1)); }
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
#endif // NETWORKINTERFACETYPE_T616418749_H
#ifndef OPERATIONALSTATUS_T2709089529_H
#define OPERATIONALSTATUS_T2709089529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2709089529 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperationalStatus_t2709089529, ___value___1)); }
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
#endif // OPERATIONALSTATUS_T2709089529_H
#ifndef PING_T2815018315_H
#define PING_T2815018315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping
struct  Ping_t2815018315  : public Component_t3620823400
{
public:
	// System.ComponentModel.BackgroundWorker System.Net.NetworkInformation.Ping::worker
	BackgroundWorker_t3811013447 * ___worker_12;
	// System.Object System.Net.NetworkInformation.Ping::user_async_state
	RuntimeObject * ___user_async_state_13;
	// System.Net.NetworkInformation.PingCompletedEventHandler System.Net.NetworkInformation.Ping::PingCompleted
	PingCompletedEventHandler_t1323096418 * ___PingCompleted_14;

public:
	inline static int32_t get_offset_of_worker_12() { return static_cast<int32_t>(offsetof(Ping_t2815018315, ___worker_12)); }
	inline BackgroundWorker_t3811013447 * get_worker_12() const { return ___worker_12; }
	inline BackgroundWorker_t3811013447 ** get_address_of_worker_12() { return &___worker_12; }
	inline void set_worker_12(BackgroundWorker_t3811013447 * value)
	{
		___worker_12 = value;
		Il2CppCodeGenWriteBarrier((&___worker_12), value);
	}

	inline static int32_t get_offset_of_user_async_state_13() { return static_cast<int32_t>(offsetof(Ping_t2815018315, ___user_async_state_13)); }
	inline RuntimeObject * get_user_async_state_13() const { return ___user_async_state_13; }
	inline RuntimeObject ** get_address_of_user_async_state_13() { return &___user_async_state_13; }
	inline void set_user_async_state_13(RuntimeObject * value)
	{
		___user_async_state_13 = value;
		Il2CppCodeGenWriteBarrier((&___user_async_state_13), value);
	}

	inline static int32_t get_offset_of_PingCompleted_14() { return static_cast<int32_t>(offsetof(Ping_t2815018315, ___PingCompleted_14)); }
	inline PingCompletedEventHandler_t1323096418 * get_PingCompleted_14() const { return ___PingCompleted_14; }
	inline PingCompletedEventHandler_t1323096418 ** get_address_of_PingCompleted_14() { return &___PingCompleted_14; }
	inline void set_PingCompleted_14(PingCompletedEventHandler_t1323096418 * value)
	{
		___PingCompleted_14 = value;
		Il2CppCodeGenWriteBarrier((&___PingCompleted_14), value);
	}
};

struct Ping_t2815018315_StaticFields
{
public:
	// System.String[] System.Net.NetworkInformation.Ping::PingBinPaths
	StringU5BU5D_t1281789340* ___PingBinPaths_8;
	// System.String System.Net.NetworkInformation.Ping::PingBinPath
	String_t* ___PingBinPath_9;
	// System.Byte[] System.Net.NetworkInformation.Ping::default_buffer
	ByteU5BU5D_t4116647657* ___default_buffer_10;
	// System.Boolean System.Net.NetworkInformation.Ping::canSendPrivileged
	bool ___canSendPrivileged_11;

public:
	inline static int32_t get_offset_of_PingBinPaths_8() { return static_cast<int32_t>(offsetof(Ping_t2815018315_StaticFields, ___PingBinPaths_8)); }
	inline StringU5BU5D_t1281789340* get_PingBinPaths_8() const { return ___PingBinPaths_8; }
	inline StringU5BU5D_t1281789340** get_address_of_PingBinPaths_8() { return &___PingBinPaths_8; }
	inline void set_PingBinPaths_8(StringU5BU5D_t1281789340* value)
	{
		___PingBinPaths_8 = value;
		Il2CppCodeGenWriteBarrier((&___PingBinPaths_8), value);
	}

	inline static int32_t get_offset_of_PingBinPath_9() { return static_cast<int32_t>(offsetof(Ping_t2815018315_StaticFields, ___PingBinPath_9)); }
	inline String_t* get_PingBinPath_9() const { return ___PingBinPath_9; }
	inline String_t** get_address_of_PingBinPath_9() { return &___PingBinPath_9; }
	inline void set_PingBinPath_9(String_t* value)
	{
		___PingBinPath_9 = value;
		Il2CppCodeGenWriteBarrier((&___PingBinPath_9), value);
	}

	inline static int32_t get_offset_of_default_buffer_10() { return static_cast<int32_t>(offsetof(Ping_t2815018315_StaticFields, ___default_buffer_10)); }
	inline ByteU5BU5D_t4116647657* get_default_buffer_10() const { return ___default_buffer_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_default_buffer_10() { return &___default_buffer_10; }
	inline void set_default_buffer_10(ByteU5BU5D_t4116647657* value)
	{
		___default_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_buffer_10), value);
	}

	inline static int32_t get_offset_of_canSendPrivileged_11() { return static_cast<int32_t>(offsetof(Ping_t2815018315_StaticFields, ___canSendPrivileged_11)); }
	inline bool get_canSendPrivileged_11() const { return ___canSendPrivileged_11; }
	inline bool* get_address_of_canSendPrivileged_11() { return &___canSendPrivileged_11; }
	inline void set_canSendPrivileged_11(bool value)
	{
		___canSendPrivileged_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PING_T2815018315_H
#ifndef PINGCOMPLETEDEVENTARGS_T4089792803_H
#define PINGCOMPLETEDEVENTARGS_T4089792803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingCompletedEventArgs
struct  PingCompletedEventArgs_t4089792803  : public AsyncCompletedEventArgs_t1863481821
{
public:
	// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.PingCompletedEventArgs::reply
	PingReply_t1006004616 * ___reply_4;

public:
	inline static int32_t get_offset_of_reply_4() { return static_cast<int32_t>(offsetof(PingCompletedEventArgs_t4089792803, ___reply_4)); }
	inline PingReply_t1006004616 * get_reply_4() const { return ___reply_4; }
	inline PingReply_t1006004616 ** get_address_of_reply_4() { return &___reply_4; }
	inline void set_reply_4(PingReply_t1006004616 * value)
	{
		___reply_4 = value;
		Il2CppCodeGenWriteBarrier((&___reply_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGCOMPLETEDEVENTARGS_T4089792803_H
#ifndef PREFIXORIGIN_T3595255581_H
#define PREFIXORIGIN_T3595255581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PrefixOrigin
struct  PrefixOrigin_t3595255581 
{
public:
	// System.Int32 System.Net.NetworkInformation.PrefixOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrefixOrigin_t3595255581, ___value___1)); }
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
#endif // PREFIXORIGIN_T3595255581_H
#ifndef SUFFIXORIGIN_T2265911283_H
#define SUFFIXORIGIN_T2265911283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.SuffixOrigin
struct  SuffixOrigin_t2265911283 
{
public:
	// System.Int32 System.Net.NetworkInformation.SuffixOrigin::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SuffixOrigin_t2265911283, ___value___1)); }
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
#endif // SUFFIXORIGIN_T2265911283_H
#ifndef TCPSTATE_T4044211350_H
#define TCPSTATE_T4044211350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpState
struct  TcpState_t4044211350 
{
public:
	// System.Int32 System.Net.NetworkInformation.TcpState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TcpState_t4044211350, ___value___1)); }
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
#endif // TCPSTATE_T4044211350_H
#ifndef WIN32IPGLOBALSTATISTICS_T4153089801_H
#define WIN32IPGLOBALSTATISTICS_T4153089801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalStatistics
struct  Win32IPGlobalStatistics_t4153089801  : public IPGlobalStatistics_t1020027804
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IPSTATS System.Net.NetworkInformation.Win32IPGlobalStatistics::info
	Win32_MIB_IPSTATS_t21271030  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPGlobalStatistics_t4153089801, ___info_0)); }
	inline Win32_MIB_IPSTATS_t21271030  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IPSTATS_t21271030 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IPSTATS_t21271030  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPGLOBALSTATISTICS_T4153089801_H
#ifndef WIN32ICMPV4STATISTICS_T2631415787_H
#define WIN32ICMPV4STATISTICS_T2631415787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IcmpV4Statistics
struct  Win32IcmpV4Statistics_t2631415787  : public IcmpV4Statistics_t3304898107
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32IcmpV4Statistics::iin
	Win32_MIBICMPSTATS_t643360748  ___iin_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32IcmpV4Statistics::iout
	Win32_MIBICMPSTATS_t643360748  ___iout_1;

public:
	inline static int32_t get_offset_of_iin_0() { return static_cast<int32_t>(offsetof(Win32IcmpV4Statistics_t2631415787, ___iin_0)); }
	inline Win32_MIBICMPSTATS_t643360748  get_iin_0() const { return ___iin_0; }
	inline Win32_MIBICMPSTATS_t643360748 * get_address_of_iin_0() { return &___iin_0; }
	inline void set_iin_0(Win32_MIBICMPSTATS_t643360748  value)
	{
		___iin_0 = value;
	}

	inline static int32_t get_offset_of_iout_1() { return static_cast<int32_t>(offsetof(Win32IcmpV4Statistics_t2631415787, ___iout_1)); }
	inline Win32_MIBICMPSTATS_t643360748  get_iout_1() const { return ___iout_1; }
	inline Win32_MIBICMPSTATS_t643360748 * get_address_of_iout_1() { return &___iout_1; }
	inline void set_iout_1(Win32_MIBICMPSTATS_t643360748  value)
	{
		___iout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32ICMPV4STATISTICS_T2631415787_H
#ifndef WIN32TCPSTATISTICS_T1889610183_H
#define WIN32TCPSTATISTICS_T1889610183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32TcpStatistics
struct  Win32TcpStatistics_t1889610183  : public TcpStatistics_t3354500482
{
public:
	// System.Net.NetworkInformation.Win32_MIB_TCPSTATS System.Net.NetworkInformation.Win32TcpStatistics::info
	Win32_MIB_TCPSTATS_t1555608930  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32TcpStatistics_t1889610183, ___info_0)); }
	inline Win32_MIB_TCPSTATS_t1555608930  get_info_0() const { return ___info_0; }
	inline Win32_MIB_TCPSTATS_t1555608930 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_TCPSTATS_t1555608930  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32TCPSTATISTICS_T1889610183_H
#ifndef WIN32UDPSTATISTICS_T358088259_H
#define WIN32UDPSTATISTICS_T358088259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32UdpStatistics
struct  Win32UdpStatistics_t358088259  : public UdpStatistics_t827909905
{
public:
	// System.Net.NetworkInformation.Win32_MIB_UDPSTATS System.Net.NetworkInformation.Win32UdpStatistics::info
	Win32_MIB_UDPSTATS_t1540601281  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32UdpStatistics_t358088259, ___info_0)); }
	inline Win32_MIB_UDPSTATS_t1540601281  get_info_0() const { return ___info_0; }
	inline Win32_MIB_UDPSTATS_t1540601281 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_UDPSTATS_t1540601281  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32UDPSTATISTICS_T358088259_H
#ifndef WIN32_IP_ADDR_STRING_T1213417184_H
#define WIN32_IP_ADDR_STRING_T1213417184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1213417184 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	intptr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Next_0)); }
	inline intptr_t get_Next_0() const { return ___Next_0; }
	inline intptr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(intptr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1213417184_H
#ifndef WIN32_MIBICMPINFO_T1014864765_H
#define WIN32_MIBICMPINFO_T1014864765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPINFO
struct  Win32_MIBICMPINFO_t1014864765 
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32_MIBICMPINFO::InStats
	Win32_MIBICMPSTATS_t643360748  ___InStats_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32_MIBICMPINFO::OutStats
	Win32_MIBICMPSTATS_t643360748  ___OutStats_1;

public:
	inline static int32_t get_offset_of_InStats_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPINFO_t1014864765, ___InStats_0)); }
	inline Win32_MIBICMPSTATS_t643360748  get_InStats_0() const { return ___InStats_0; }
	inline Win32_MIBICMPSTATS_t643360748 * get_address_of_InStats_0() { return &___InStats_0; }
	inline void set_InStats_0(Win32_MIBICMPSTATS_t643360748  value)
	{
		___InStats_0 = value;
	}

	inline static int32_t get_offset_of_OutStats_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPINFO_t1014864765, ___OutStats_1)); }
	inline Win32_MIBICMPSTATS_t643360748  get_OutStats_1() const { return ___OutStats_1; }
	inline Win32_MIBICMPSTATS_t643360748 * get_address_of_OutStats_1() { return &___OutStats_1; }
	inline void set_OutStats_1(Win32_MIBICMPSTATS_t643360748  value)
	{
		___OutStats_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_MIBICMPINFO_T1014864765_H
#ifndef WIN32_MIBICMPSTATS_EX_T3467025201_H
#define WIN32_MIBICMPSTATS_EX_T3467025201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct  Win32_MIBICMPSTATS_EX_t3467025201 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Msgs
	uint32_t ___Msgs_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Errors
	uint32_t ___Errors_1;
	// System.UInt32[] System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Counts
	UInt32U5BU5D_t2770800703* ___Counts_2;

public:
	inline static int32_t get_offset_of_Msgs_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3467025201, ___Msgs_0)); }
	inline uint32_t get_Msgs_0() const { return ___Msgs_0; }
	inline uint32_t* get_address_of_Msgs_0() { return &___Msgs_0; }
	inline void set_Msgs_0(uint32_t value)
	{
		___Msgs_0 = value;
	}

	inline static int32_t get_offset_of_Errors_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3467025201, ___Errors_1)); }
	inline uint32_t get_Errors_1() const { return ___Errors_1; }
	inline uint32_t* get_address_of_Errors_1() { return &___Errors_1; }
	inline void set_Errors_1(uint32_t value)
	{
		___Errors_1 = value;
	}

	inline static int32_t get_offset_of_Counts_2() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3467025201, ___Counts_2)); }
	inline UInt32U5BU5D_t2770800703* get_Counts_2() const { return ___Counts_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Counts_2() { return &___Counts_2; }
	inline void set_Counts_2(UInt32U5BU5D_t2770800703* value)
	{
		___Counts_2 = value;
		Il2CppCodeGenWriteBarrier((&___Counts_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3467025201_marshaled_pinvoke
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3467025201_marshaled_com
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
#endif // WIN32_MIBICMPSTATS_EX_T3467025201_H
#ifndef WIN32_SOCKET_ADDRESS_T1936753419_H
#define WIN32_SOCKET_ADDRESS_T1936753419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct  Win32_SOCKET_ADDRESS_t1936753419 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::Sockaddr
	intptr_t ___Sockaddr_1;
	// System.Int32 System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::SockaddrLength
	int32_t ___SockaddrLength_2;

public:
	inline static int32_t get_offset_of_Sockaddr_1() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1936753419, ___Sockaddr_1)); }
	inline intptr_t get_Sockaddr_1() const { return ___Sockaddr_1; }
	inline intptr_t* get_address_of_Sockaddr_1() { return &___Sockaddr_1; }
	inline void set_Sockaddr_1(intptr_t value)
	{
		___Sockaddr_1 = value;
	}

	inline static int32_t get_offset_of_SockaddrLength_2() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1936753419, ___SockaddrLength_2)); }
	inline int32_t get_SockaddrLength_2() const { return ___SockaddrLength_2; }
	inline int32_t* get_address_of_SockaddrLength_2() { return &___SockaddrLength_2; }
	inline void set_SockaddrLength_2(int32_t value)
	{
		___SockaddrLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_SOCKET_ADDRESS_T1936753419_H
#ifndef IFA_IFU_T1794893192_H
#define IFA_IFU_T1794893192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifa_ifu
struct  ifa_ifu_t1794893192 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
			intptr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
			intptr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_ifu_broadaddr_0() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_broadaddr_0)); }
	inline intptr_t get_ifu_broadaddr_0() const { return ___ifu_broadaddr_0; }
	inline intptr_t* get_address_of_ifu_broadaddr_0() { return &___ifu_broadaddr_0; }
	inline void set_ifu_broadaddr_0(intptr_t value)
	{
		___ifu_broadaddr_0 = value;
	}

	inline static int32_t get_offset_of_ifu_dstaddr_1() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_dstaddr_1)); }
	inline intptr_t get_ifu_dstaddr_1() const { return ___ifu_dstaddr_1; }
	inline intptr_t* get_address_of_ifu_dstaddr_1() { return &___ifu_dstaddr_1; }
	inline void set_ifu_dstaddr_1(intptr_t value)
	{
		___ifu_dstaddr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFA_IFU_T1794893192_H
#ifndef IN6_ADDR_T3611791508_H
#define IN6_ADDR_T3611791508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.in6_addr
struct  in6_addr_t3611791508 
{
public:
	// System.Byte[] System.Net.NetworkInformation.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t3611791508, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T3611791508_H
#ifndef SOCKADDR_LL_T3978606313_H
#define SOCKADDR_LL_T3978606313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t3978606313 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t4116647657* ___sll_addr_6;

public:
	inline static int32_t get_offset_of_sll_family_0() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_family_0)); }
	inline uint16_t get_sll_family_0() const { return ___sll_family_0; }
	inline uint16_t* get_address_of_sll_family_0() { return &___sll_family_0; }
	inline void set_sll_family_0(uint16_t value)
	{
		___sll_family_0 = value;
	}

	inline static int32_t get_offset_of_sll_protocol_1() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_protocol_1)); }
	inline uint16_t get_sll_protocol_1() const { return ___sll_protocol_1; }
	inline uint16_t* get_address_of_sll_protocol_1() { return &___sll_protocol_1; }
	inline void set_sll_protocol_1(uint16_t value)
	{
		___sll_protocol_1 = value;
	}

	inline static int32_t get_offset_of_sll_ifindex_2() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_ifindex_2)); }
	inline int32_t get_sll_ifindex_2() const { return ___sll_ifindex_2; }
	inline int32_t* get_address_of_sll_ifindex_2() { return &___sll_ifindex_2; }
	inline void set_sll_ifindex_2(int32_t value)
	{
		___sll_ifindex_2 = value;
	}

	inline static int32_t get_offset_of_sll_hatype_3() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_hatype_3)); }
	inline uint16_t get_sll_hatype_3() const { return ___sll_hatype_3; }
	inline uint16_t* get_address_of_sll_hatype_3() { return &___sll_hatype_3; }
	inline void set_sll_hatype_3(uint16_t value)
	{
		___sll_hatype_3 = value;
	}

	inline static int32_t get_offset_of_sll_pkttype_4() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_pkttype_4)); }
	inline uint8_t get_sll_pkttype_4() const { return ___sll_pkttype_4; }
	inline uint8_t* get_address_of_sll_pkttype_4() { return &___sll_pkttype_4; }
	inline void set_sll_pkttype_4(uint8_t value)
	{
		___sll_pkttype_4 = value;
	}

	inline static int32_t get_offset_of_sll_halen_5() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_halen_5)); }
	inline uint8_t get_sll_halen_5() const { return ___sll_halen_5; }
	inline uint8_t* get_address_of_sll_halen_5() { return &___sll_halen_5; }
	inline void set_sll_halen_5(uint8_t value)
	{
		___sll_halen_5 = value;
	}

	inline static int32_t get_offset_of_sll_addr_6() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_addr_6)); }
	inline ByteU5BU5D_t4116647657* get_sll_addr_6() const { return ___sll_addr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_sll_addr_6() { return &___sll_addr_6; }
	inline void set_sll_addr_6(ByteU5BU5D_t4116647657* value)
	{
		___sll_addr_6 = value;
		Il2CppCodeGenWriteBarrier((&___sll_addr_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_pinvoke
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_com
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
#endif // SOCKADDR_LL_T3978606313_H
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
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef SOCKADDR_IN6_T2080844659_H
#define SOCKADDR_IN6_T2080844659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct  sockaddr_in6_t2080844659 
{
public:
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_len
	uint8_t ___sin6_len_0;
	// System.Byte System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_family
	uint8_t ___sin6_family_1;
	// System.UInt16 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_2;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_3;
	// System.Net.NetworkInformation.MacOsStructs.in6_addr System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_addr
	in6_addr_t1417766092  ___sin6_addr_4;
	// System.UInt32 System.Net.NetworkInformation.MacOsStructs.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_5;

public:
	inline static int32_t get_offset_of_sin6_len_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_len_0)); }
	inline uint8_t get_sin6_len_0() const { return ___sin6_len_0; }
	inline uint8_t* get_address_of_sin6_len_0() { return &___sin6_len_0; }
	inline void set_sin6_len_0(uint8_t value)
	{
		___sin6_len_0 = value;
	}

	inline static int32_t get_offset_of_sin6_family_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_family_1)); }
	inline uint8_t get_sin6_family_1() const { return ___sin6_family_1; }
	inline uint8_t* get_address_of_sin6_family_1() { return &___sin6_family_1; }
	inline void set_sin6_family_1(uint8_t value)
	{
		___sin6_family_1 = value;
	}

	inline static int32_t get_offset_of_sin6_port_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_port_2)); }
	inline uint16_t get_sin6_port_2() const { return ___sin6_port_2; }
	inline uint16_t* get_address_of_sin6_port_2() { return &___sin6_port_2; }
	inline void set_sin6_port_2(uint16_t value)
	{
		___sin6_port_2 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_flowinfo_3)); }
	inline uint32_t get_sin6_flowinfo_3() const { return ___sin6_flowinfo_3; }
	inline uint32_t* get_address_of_sin6_flowinfo_3() { return &___sin6_flowinfo_3; }
	inline void set_sin6_flowinfo_3(uint32_t value)
	{
		___sin6_flowinfo_3 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_addr_4)); }
	inline in6_addr_t1417766092  get_sin6_addr_4() const { return ___sin6_addr_4; }
	inline in6_addr_t1417766092 * get_address_of_sin6_addr_4() { return &___sin6_addr_4; }
	inline void set_sin6_addr_4(in6_addr_t1417766092  value)
	{
		___sin6_addr_4 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_5() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2080844659, ___sin6_scope_id_5)); }
	inline uint32_t get_sin6_scope_id_5() const { return ___sin6_scope_id_5; }
	inline uint32_t* get_address_of_sin6_scope_id_5() { return &___sin6_scope_id_5; }
	inline void set_sin6_scope_id_5(uint32_t value)
	{
		___sin6_scope_id_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_pinvoke
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_pinvoke ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct sockaddr_in6_t2080844659_marshaled_com
{
	uint8_t ___sin6_len_0;
	uint8_t ___sin6_family_1;
	uint16_t ___sin6_port_2;
	uint32_t ___sin6_flowinfo_3;
	in6_addr_t1417766092_marshaled_com ___sin6_addr_4;
	uint32_t ___sin6_scope_id_5;
};
#endif // SOCKADDR_IN6_T2080844659_H
#ifndef PINGEXCEPTION_T245080497_H
#define PINGEXCEPTION_T245080497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingException
struct  PingException_t245080497  : public InvalidOperationException_t56020091
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGEXCEPTION_T245080497_H
#ifndef PINGREPLY_T1006004616_H
#define PINGREPLY_T1006004616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingReply
struct  PingReply_t1006004616  : public RuntimeObject
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.PingReply::address
	IPAddress_t241777590 * ___address_0;
	// System.Byte[] System.Net.NetworkInformation.PingReply::buffer
	ByteU5BU5D_t4116647657* ___buffer_1;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.PingReply::options
	PingOptions_t3156337970 * ___options_2;
	// System.Int64 System.Net.NetworkInformation.PingReply::rtt
	int64_t ___rtt_3;
	// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.PingReply::status
	int32_t ___status_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(PingReply_t1006004616, ___address_0)); }
	inline IPAddress_t241777590 * get_address_0() const { return ___address_0; }
	inline IPAddress_t241777590 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t241777590 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(PingReply_t1006004616, ___buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(PingReply_t1006004616, ___options_2)); }
	inline PingOptions_t3156337970 * get_options_2() const { return ___options_2; }
	inline PingOptions_t3156337970 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(PingOptions_t3156337970 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((&___options_2), value);
	}

	inline static int32_t get_offset_of_rtt_3() { return static_cast<int32_t>(offsetof(PingReply_t1006004616, ___rtt_3)); }
	inline int64_t get_rtt_3() const { return ___rtt_3; }
	inline int64_t* get_address_of_rtt_3() { return &___rtt_3; }
	inline void set_rtt_3(int64_t value)
	{
		___rtt_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(PingReply_t1006004616, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINGREPLY_T1006004616_H
#ifndef TCPCONNECTIONINFORMATIONIMPL_T3711867821_H
#define TCPCONNECTIONINFORMATIONIMPL_T3711867821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.TcpConnectionInformationImpl
struct  TcpConnectionInformationImpl_t3711867821  : public TcpConnectionInformation_t457447727
{
public:
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::local
	IPEndPoint_t3791887218 * ___local_0;
	// System.Net.IPEndPoint System.Net.NetworkInformation.TcpConnectionInformationImpl::remote
	IPEndPoint_t3791887218 * ___remote_1;
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.TcpConnectionInformationImpl::state
	int32_t ___state_2;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t3711867821, ___local_0)); }
	inline IPEndPoint_t3791887218 * get_local_0() const { return ___local_0; }
	inline IPEndPoint_t3791887218 ** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(IPEndPoint_t3791887218 * value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_0), value);
	}

	inline static int32_t get_offset_of_remote_1() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t3711867821, ___remote_1)); }
	inline IPEndPoint_t3791887218 * get_remote_1() const { return ___remote_1; }
	inline IPEndPoint_t3791887218 ** get_address_of_remote_1() { return &___remote_1; }
	inline void set_remote_1(IPEndPoint_t3791887218 * value)
	{
		___remote_1 = value;
		Il2CppCodeGenWriteBarrier((&___remote_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(TcpConnectionInformationImpl_t3711867821, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCONNECTIONINFORMATIONIMPL_T3711867821_H
#ifndef UNIXNETWORKINTERFACE_T2401762829_H
#define UNIXNETWORKINTERFACE_T2401762829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t2401762829  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.UnixNetworkInterface::ipv4stats
	IPv4InterfaceStatistics_t3249312820 * ___ipv4stats_2;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3964383369 * ___ipproperties_3;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_4;
	// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::index
	int32_t ___index_5;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t1713852332 * ___addresses_6;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t4116647657* ___macAddress_7;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_8;

public:
	inline static int32_t get_offset_of_ipv4stats_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___ipv4stats_2)); }
	inline IPv4InterfaceStatistics_t3249312820 * get_ipv4stats_2() const { return ___ipv4stats_2; }
	inline IPv4InterfaceStatistics_t3249312820 ** get_address_of_ipv4stats_2() { return &___ipv4stats_2; }
	inline void set_ipv4stats_2(IPv4InterfaceStatistics_t3249312820 * value)
	{
		___ipv4stats_2 = value;
		Il2CppCodeGenWriteBarrier((&___ipv4stats_2), value);
	}

	inline static int32_t get_offset_of_ipproperties_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___ipproperties_3)); }
	inline IPInterfaceProperties_t3964383369 * get_ipproperties_3() const { return ___ipproperties_3; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ipproperties_3() { return &___ipproperties_3; }
	inline void set_ipproperties_3(IPInterfaceProperties_t3964383369 * value)
	{
		___ipproperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___ipproperties_3), value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_addresses_6() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___addresses_6)); }
	inline List_1_t1713852332 * get_addresses_6() const { return ___addresses_6; }
	inline List_1_t1713852332 ** get_address_of_addresses_6() { return &___addresses_6; }
	inline void set_addresses_6(List_1_t1713852332 * value)
	{
		___addresses_6 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_6), value);
	}

	inline static int32_t get_offset_of_macAddress_7() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___macAddress_7)); }
	inline ByteU5BU5D_t4116647657* get_macAddress_7() const { return ___macAddress_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_macAddress_7() { return &___macAddress_7; }
	inline void set_macAddress_7(ByteU5BU5D_t4116647657* value)
	{
		___macAddress_7 = value;
		Il2CppCodeGenWriteBarrier((&___macAddress_7), value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACE_T2401762829_H
#ifndef WIN32ICMPV6STATISTICS_T2631409137_H
#define WIN32ICMPV6STATISTICS_T2631409137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IcmpV6Statistics
struct  Win32IcmpV6Statistics_t2631409137  : public IcmpV6Statistics_t3428499003
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32IcmpV6Statistics::iin
	Win32_MIBICMPSTATS_EX_t3467025201  ___iin_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32IcmpV6Statistics::iout
	Win32_MIBICMPSTATS_EX_t3467025201  ___iout_1;

public:
	inline static int32_t get_offset_of_iin_0() { return static_cast<int32_t>(offsetof(Win32IcmpV6Statistics_t2631409137, ___iin_0)); }
	inline Win32_MIBICMPSTATS_EX_t3467025201  get_iin_0() const { return ___iin_0; }
	inline Win32_MIBICMPSTATS_EX_t3467025201 * get_address_of_iin_0() { return &___iin_0; }
	inline void set_iin_0(Win32_MIBICMPSTATS_EX_t3467025201  value)
	{
		___iin_0 = value;
	}

	inline static int32_t get_offset_of_iout_1() { return static_cast<int32_t>(offsetof(Win32IcmpV6Statistics_t2631409137, ___iout_1)); }
	inline Win32_MIBICMPSTATS_EX_t3467025201  get_iout_1() const { return ___iout_1; }
	inline Win32_MIBICMPSTATS_EX_t3467025201 * get_address_of_iout_1() { return &___iout_1; }
	inline void set_iout_1(Win32_MIBICMPSTATS_EX_t3467025201  value)
	{
		___iout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32ICMPV6STATISTICS_T2631409137_H
#ifndef WIN32_FIXED_INFO_T1299345856_H
#define WIN32_FIXED_INFO_T1299345856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1299345856  : public RuntimeObject
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_6;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_7;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_8;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_12;

public:
	inline static int32_t get_offset_of_HostName_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___HostName_4)); }
	inline String_t* get_HostName_4() const { return ___HostName_4; }
	inline String_t** get_address_of_HostName_4() { return &___HostName_4; }
	inline void set_HostName_4(String_t* value)
	{
		___HostName_4 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_4), value);
	}

	inline static int32_t get_offset_of_DomainName_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DomainName_5)); }
	inline String_t* get_DomainName_5() const { return ___DomainName_5; }
	inline String_t** get_address_of_DomainName_5() { return &___DomainName_5; }
	inline void set_DomainName_5(String_t* value)
	{
		___DomainName_5 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_5), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___CurrentDnsServer_6)); }
	inline intptr_t get_CurrentDnsServer_6() const { return ___CurrentDnsServer_6; }
	inline intptr_t* get_address_of_CurrentDnsServer_6() { return &___CurrentDnsServer_6; }
	inline void set_CurrentDnsServer_6(intptr_t value)
	{
		___CurrentDnsServer_6 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DnsServerList_7)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_7() const { return ___DnsServerList_7; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_7() { return &___DnsServerList_7; }
	inline void set_DnsServerList_7(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_7 = value;
	}

	inline static int32_t get_offset_of_NodeType_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___NodeType_8)); }
	inline int32_t get_NodeType_8() const { return ___NodeType_8; }
	inline int32_t* get_address_of_NodeType_8() { return &___NodeType_8; }
	inline void set_NodeType_8(int32_t value)
	{
		___NodeType_8 = value;
	}

	inline static int32_t get_offset_of_ScopeId_9() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___ScopeId_9)); }
	inline String_t* get_ScopeId_9() const { return ___ScopeId_9; }
	inline String_t** get_address_of_ScopeId_9() { return &___ScopeId_9; }
	inline void set_ScopeId_9(String_t* value)
	{
		___ScopeId_9 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_9), value);
	}

	inline static int32_t get_offset_of_EnableRouting_10() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableRouting_10)); }
	inline uint32_t get_EnableRouting_10() const { return ___EnableRouting_10; }
	inline uint32_t* get_address_of_EnableRouting_10() { return &___EnableRouting_10; }
	inline void set_EnableRouting_10(uint32_t value)
	{
		___EnableRouting_10 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_11() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableProxy_11)); }
	inline uint32_t get_EnableProxy_11() const { return ___EnableProxy_11; }
	inline uint32_t* get_address_of_EnableProxy_11() { return &___EnableProxy_11; }
	inline void set_EnableProxy_11(uint32_t value)
	{
		___EnableProxy_11 = value;
	}

	inline static int32_t get_offset_of_EnableDns_12() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableDns_12)); }
	inline uint32_t get_EnableDns_12() const { return ___EnableDns_12; }
	inline uint32_t* get_address_of_EnableDns_12() { return &___EnableDns_12; }
	inline void set_EnableDns_12(uint32_t value)
	{
		___EnableDns_12 = value;
	}
};

struct Win32_FIXED_INFO_t1299345856_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::fixed_info
	Win32_FIXED_INFO_t1299345856 * ___fixed_info_3;

public:
	inline static int32_t get_offset_of_fixed_info_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856_StaticFields, ___fixed_info_3)); }
	inline Win32_FIXED_INFO_t1299345856 * get_fixed_info_3() const { return ___fixed_info_3; }
	inline Win32_FIXED_INFO_t1299345856 ** get_address_of_fixed_info_3() { return &___fixed_info_3; }
	inline void set_fixed_info_3(Win32_FIXED_INFO_t1299345856 * value)
	{
		___fixed_info_3 = value;
		Il2CppCodeGenWriteBarrier((&___fixed_info_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_pinvoke
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_com
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
#endif // WIN32_FIXED_INFO_T1299345856_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#define WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3463526328  : public RuntimeObject
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t208902285  ___Alignment_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_6;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_7;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_8;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_9;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_10;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_11;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_12;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_13;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t4116647657* ___PhysicalAddress_14;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_15;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_16;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_17;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_18;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_19;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_20;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2770800703* ___ZoneIndices_21;

public:
	inline static int32_t get_offset_of_Alignment_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Alignment_4)); }
	inline AlignmentUnion_t208902285  get_Alignment_4() const { return ___Alignment_4; }
	inline AlignmentUnion_t208902285 * get_address_of_Alignment_4() { return &___Alignment_4; }
	inline void set_Alignment_4(AlignmentUnion_t208902285  value)
	{
		___Alignment_4 = value;
	}

	inline static int32_t get_offset_of_Next_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Next_5)); }
	inline intptr_t get_Next_5() const { return ___Next_5; }
	inline intptr_t* get_address_of_Next_5() { return &___Next_5; }
	inline void set_Next_5(intptr_t value)
	{
		___Next_5 = value;
	}

	inline static int32_t get_offset_of_AdapterName_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___AdapterName_6)); }
	inline String_t* get_AdapterName_6() const { return ___AdapterName_6; }
	inline String_t** get_address_of_AdapterName_6() { return &___AdapterName_6; }
	inline void set_AdapterName_6(String_t* value)
	{
		___AdapterName_6 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_6), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstUnicastAddress_7)); }
	inline intptr_t get_FirstUnicastAddress_7() const { return ___FirstUnicastAddress_7; }
	inline intptr_t* get_address_of_FirstUnicastAddress_7() { return &___FirstUnicastAddress_7; }
	inline void set_FirstUnicastAddress_7(intptr_t value)
	{
		___FirstUnicastAddress_7 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstAnycastAddress_8)); }
	inline intptr_t get_FirstAnycastAddress_8() const { return ___FirstAnycastAddress_8; }
	inline intptr_t* get_address_of_FirstAnycastAddress_8() { return &___FirstAnycastAddress_8; }
	inline void set_FirstAnycastAddress_8(intptr_t value)
	{
		___FirstAnycastAddress_8 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstMulticastAddress_9)); }
	inline intptr_t get_FirstMulticastAddress_9() const { return ___FirstMulticastAddress_9; }
	inline intptr_t* get_address_of_FirstMulticastAddress_9() { return &___FirstMulticastAddress_9; }
	inline void set_FirstMulticastAddress_9(intptr_t value)
	{
		___FirstMulticastAddress_9 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstDnsServerAddress_10)); }
	inline intptr_t get_FirstDnsServerAddress_10() const { return ___FirstDnsServerAddress_10; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_10() { return &___FirstDnsServerAddress_10; }
	inline void set_FirstDnsServerAddress_10(intptr_t value)
	{
		___FirstDnsServerAddress_10 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___DnsSuffix_11)); }
	inline String_t* get_DnsSuffix_11() const { return ___DnsSuffix_11; }
	inline String_t** get_address_of_DnsSuffix_11() { return &___DnsSuffix_11; }
	inline void set_DnsSuffix_11(String_t* value)
	{
		___DnsSuffix_11 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_11), value);
	}

	inline static int32_t get_offset_of_Description_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Description_12)); }
	inline String_t* get_Description_12() const { return ___Description_12; }
	inline String_t** get_address_of_Description_12() { return &___Description_12; }
	inline void set_Description_12(String_t* value)
	{
		___Description_12 = value;
		Il2CppCodeGenWriteBarrier((&___Description_12), value);
	}

	inline static int32_t get_offset_of_FriendlyName_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FriendlyName_13)); }
	inline String_t* get_FriendlyName_13() const { return ___FriendlyName_13; }
	inline String_t** get_address_of_FriendlyName_13() { return &___FriendlyName_13; }
	inline void set_FriendlyName_13(String_t* value)
	{
		___FriendlyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_13), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddress_14)); }
	inline ByteU5BU5D_t4116647657* get_PhysicalAddress_14() const { return ___PhysicalAddress_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysicalAddress_14() { return &___PhysicalAddress_14; }
	inline void set_PhysicalAddress_14(ByteU5BU5D_t4116647657* value)
	{
		___PhysicalAddress_14 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_14), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddressLength_15)); }
	inline uint32_t get_PhysicalAddressLength_15() const { return ___PhysicalAddressLength_15; }
	inline uint32_t* get_address_of_PhysicalAddressLength_15() { return &___PhysicalAddressLength_15; }
	inline void set_PhysicalAddressLength_15(uint32_t value)
	{
		___PhysicalAddressLength_15 = value;
	}

	inline static int32_t get_offset_of_Flags_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Flags_16)); }
	inline uint32_t get_Flags_16() const { return ___Flags_16; }
	inline uint32_t* get_address_of_Flags_16() { return &___Flags_16; }
	inline void set_Flags_16(uint32_t value)
	{
		___Flags_16 = value;
	}

	inline static int32_t get_offset_of_Mtu_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Mtu_17)); }
	inline uint32_t get_Mtu_17() const { return ___Mtu_17; }
	inline uint32_t* get_address_of_Mtu_17() { return &___Mtu_17; }
	inline void set_Mtu_17(uint32_t value)
	{
		___Mtu_17 = value;
	}

	inline static int32_t get_offset_of_IfType_18() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___IfType_18)); }
	inline int32_t get_IfType_18() const { return ___IfType_18; }
	inline int32_t* get_address_of_IfType_18() { return &___IfType_18; }
	inline void set_IfType_18(int32_t value)
	{
		___IfType_18 = value;
	}

	inline static int32_t get_offset_of_OperStatus_19() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___OperStatus_19)); }
	inline int32_t get_OperStatus_19() const { return ___OperStatus_19; }
	inline int32_t* get_address_of_OperStatus_19() { return &___OperStatus_19; }
	inline void set_OperStatus_19(int32_t value)
	{
		___OperStatus_19 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_20() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Ipv6IfIndex_20)); }
	inline int32_t get_Ipv6IfIndex_20() const { return ___Ipv6IfIndex_20; }
	inline int32_t* get_address_of_Ipv6IfIndex_20() { return &___Ipv6IfIndex_20; }
	inline void set_Ipv6IfIndex_20(int32_t value)
	{
		___Ipv6IfIndex_20 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_21() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___ZoneIndices_21)); }
	inline UInt32U5BU5D_t2770800703* get_ZoneIndices_21() const { return ___ZoneIndices_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ZoneIndices_21() { return &___ZoneIndices_21; }
	inline void set_ZoneIndices_21(UInt32U5BU5D_t2770800703* value)
	{
		___ZoneIndices_21 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke
{
	AlignmentUnion_t208902285  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	Il2CppChar* ___DnsSuffix_11;
	Il2CppChar* ___Description_12;
	Il2CppChar* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_com
{
	AlignmentUnion_t208902285  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	Il2CppChar* ___DnsSuffix_11;
	Il2CppChar* ___Description_12;
	Il2CppChar* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifndef WIN32_IP_ADAPTER_ANYCAST_ADDRESS_T513393589_H
#define WIN32_IP_ADAPTER_ANYCAST_ADDRESS_T513393589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS
struct  Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1383639798  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS::Next
	intptr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_ANYCAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1936753419  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1383639798  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1383639798 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1383639798  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1936753419  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1936753419 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1936753419  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_ANYCAST_ADDRESS_T513393589_H
#ifndef WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#define WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS
struct  Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1383639798  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Next
	intptr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_DNS_SERVER_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1936753419  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1383639798  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1383639798 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1383639798  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1936753419  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1936753419 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1936753419  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_DNS_SERVER_ADDRESS_T3053140100_H
#ifndef WIN32_IP_ADAPTER_INFO_T882755512_H
#define WIN32_IP_ADAPTER_INFO_T882755512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct  Win32_IP_ADAPTER_INFO_t882755512  : public RuntimeObject
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Next
	intptr_t ___Next_3;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::ComboIndex
	int32_t ___ComboIndex_4;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AdapterName
	String_t* ___AdapterName_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Description
	String_t* ___Description_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AddressLength
	uint32_t ___AddressLength_7;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Address
	ByteU5BU5D_t4116647657* ___Address_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Index
	uint32_t ___Index_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Type
	uint32_t ___Type_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpEnabled
	uint32_t ___DhcpEnabled_11;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::CurrentIpAddress
	intptr_t ___CurrentIpAddress_12;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::IpAddressList
	Win32_IP_ADDR_STRING_t1213417184  ___IpAddressList_13;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::GatewayList
	Win32_IP_ADDR_STRING_t1213417184  ___GatewayList_14;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpServer
	Win32_IP_ADDR_STRING_t1213417184  ___DhcpServer_15;
	// System.Boolean System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::HaveWins
	bool ___HaveWins_16;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::PrimaryWinsServer
	Win32_IP_ADDR_STRING_t1213417184  ___PrimaryWinsServer_17;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::SecondaryWinsServer
	Win32_IP_ADDR_STRING_t1213417184  ___SecondaryWinsServer_18;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseObtained
	int64_t ___LeaseObtained_19;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseExpires
	int64_t ___LeaseExpires_20;

public:
	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___Next_3)); }
	inline intptr_t get_Next_3() const { return ___Next_3; }
	inline intptr_t* get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(intptr_t value)
	{
		___Next_3 = value;
	}

	inline static int32_t get_offset_of_ComboIndex_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___ComboIndex_4)); }
	inline int32_t get_ComboIndex_4() const { return ___ComboIndex_4; }
	inline int32_t* get_address_of_ComboIndex_4() { return &___ComboIndex_4; }
	inline void set_ComboIndex_4(int32_t value)
	{
		___ComboIndex_4 = value;
	}

	inline static int32_t get_offset_of_AdapterName_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___AdapterName_5)); }
	inline String_t* get_AdapterName_5() const { return ___AdapterName_5; }
	inline String_t** get_address_of_AdapterName_5() { return &___AdapterName_5; }
	inline void set_AdapterName_5(String_t* value)
	{
		___AdapterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_5), value);
	}

	inline static int32_t get_offset_of_Description_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___Description_6)); }
	inline String_t* get_Description_6() const { return ___Description_6; }
	inline String_t** get_address_of_Description_6() { return &___Description_6; }
	inline void set_Description_6(String_t* value)
	{
		___Description_6 = value;
		Il2CppCodeGenWriteBarrier((&___Description_6), value);
	}

	inline static int32_t get_offset_of_AddressLength_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___AddressLength_7)); }
	inline uint32_t get_AddressLength_7() const { return ___AddressLength_7; }
	inline uint32_t* get_address_of_AddressLength_7() { return &___AddressLength_7; }
	inline void set_AddressLength_7(uint32_t value)
	{
		___AddressLength_7 = value;
	}

	inline static int32_t get_offset_of_Address_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___Address_8)); }
	inline ByteU5BU5D_t4116647657* get_Address_8() const { return ___Address_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_Address_8() { return &___Address_8; }
	inline void set_Address_8(ByteU5BU5D_t4116647657* value)
	{
		___Address_8 = value;
		Il2CppCodeGenWriteBarrier((&___Address_8), value);
	}

	inline static int32_t get_offset_of_Index_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___Index_9)); }
	inline uint32_t get_Index_9() const { return ___Index_9; }
	inline uint32_t* get_address_of_Index_9() { return &___Index_9; }
	inline void set_Index_9(uint32_t value)
	{
		___Index_9 = value;
	}

	inline static int32_t get_offset_of_Type_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___Type_10)); }
	inline uint32_t get_Type_10() const { return ___Type_10; }
	inline uint32_t* get_address_of_Type_10() { return &___Type_10; }
	inline void set_Type_10(uint32_t value)
	{
		___Type_10 = value;
	}

	inline static int32_t get_offset_of_DhcpEnabled_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___DhcpEnabled_11)); }
	inline uint32_t get_DhcpEnabled_11() const { return ___DhcpEnabled_11; }
	inline uint32_t* get_address_of_DhcpEnabled_11() { return &___DhcpEnabled_11; }
	inline void set_DhcpEnabled_11(uint32_t value)
	{
		___DhcpEnabled_11 = value;
	}

	inline static int32_t get_offset_of_CurrentIpAddress_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___CurrentIpAddress_12)); }
	inline intptr_t get_CurrentIpAddress_12() const { return ___CurrentIpAddress_12; }
	inline intptr_t* get_address_of_CurrentIpAddress_12() { return &___CurrentIpAddress_12; }
	inline void set_CurrentIpAddress_12(intptr_t value)
	{
		___CurrentIpAddress_12 = value;
	}

	inline static int32_t get_offset_of_IpAddressList_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___IpAddressList_13)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_IpAddressList_13() const { return ___IpAddressList_13; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_IpAddressList_13() { return &___IpAddressList_13; }
	inline void set_IpAddressList_13(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___IpAddressList_13 = value;
	}

	inline static int32_t get_offset_of_GatewayList_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___GatewayList_14)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_GatewayList_14() const { return ___GatewayList_14; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_GatewayList_14() { return &___GatewayList_14; }
	inline void set_GatewayList_14(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___GatewayList_14 = value;
	}

	inline static int32_t get_offset_of_DhcpServer_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___DhcpServer_15)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DhcpServer_15() const { return ___DhcpServer_15; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DhcpServer_15() { return &___DhcpServer_15; }
	inline void set_DhcpServer_15(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DhcpServer_15 = value;
	}

	inline static int32_t get_offset_of_HaveWins_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___HaveWins_16)); }
	inline bool get_HaveWins_16() const { return ___HaveWins_16; }
	inline bool* get_address_of_HaveWins_16() { return &___HaveWins_16; }
	inline void set_HaveWins_16(bool value)
	{
		___HaveWins_16 = value;
	}

	inline static int32_t get_offset_of_PrimaryWinsServer_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___PrimaryWinsServer_17)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_PrimaryWinsServer_17() const { return ___PrimaryWinsServer_17; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_PrimaryWinsServer_17() { return &___PrimaryWinsServer_17; }
	inline void set_PrimaryWinsServer_17(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___PrimaryWinsServer_17 = value;
	}

	inline static int32_t get_offset_of_SecondaryWinsServer_18() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___SecondaryWinsServer_18)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_SecondaryWinsServer_18() const { return ___SecondaryWinsServer_18; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_SecondaryWinsServer_18() { return &___SecondaryWinsServer_18; }
	inline void set_SecondaryWinsServer_18(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___SecondaryWinsServer_18 = value;
	}

	inline static int32_t get_offset_of_LeaseObtained_19() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___LeaseObtained_19)); }
	inline int64_t get_LeaseObtained_19() const { return ___LeaseObtained_19; }
	inline int64_t* get_address_of_LeaseObtained_19() { return &___LeaseObtained_19; }
	inline void set_LeaseObtained_19(int64_t value)
	{
		___LeaseObtained_19 = value;
	}

	inline static int32_t get_offset_of_LeaseExpires_20() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t882755512, ___LeaseExpires_20)); }
	inline int64_t get_LeaseExpires_20() const { return ___LeaseExpires_20; }
	inline int64_t* get_address_of_LeaseExpires_20() { return &___LeaseExpires_20; }
	inline void set_LeaseExpires_20(int64_t value)
	{
		___LeaseExpires_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t882755512_marshaled_pinvoke
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___GatewayList_14;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t882755512_marshaled_com
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___GatewayList_14;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
#endif // WIN32_IP_ADAPTER_INFO_T882755512_H
#ifndef WIN32_IP_ADAPTER_UNICAST_ADDRESS_T2418619029_H
#define WIN32_IP_ADAPTER_UNICAST_ADDRESS_T2418619029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
struct  Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1383639798  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Next
	intptr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1936753419  ___Address_2;
	// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PrefixOrigin
	int32_t ___PrefixOrigin_3;
	// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::SuffixOrigin
	int32_t ___SuffixOrigin_4;
	// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::DadState
	int32_t ___DadState_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::ValidLifetime
	uint32_t ___ValidLifetime_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::PreferredLifetime
	uint32_t ___PreferredLifetime_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::LeaseLifetime
	uint32_t ___LeaseLifetime_8;
	// System.Byte System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS::OnLinkPrefixLength
	uint8_t ___OnLinkPrefixLength_9;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1383639798  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1383639798 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1383639798  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1936753419  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1936753419 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1936753419  value)
	{
		___Address_2 = value;
	}

	inline static int32_t get_offset_of_PrefixOrigin_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___PrefixOrigin_3)); }
	inline int32_t get_PrefixOrigin_3() const { return ___PrefixOrigin_3; }
	inline int32_t* get_address_of_PrefixOrigin_3() { return &___PrefixOrigin_3; }
	inline void set_PrefixOrigin_3(int32_t value)
	{
		___PrefixOrigin_3 = value;
	}

	inline static int32_t get_offset_of_SuffixOrigin_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___SuffixOrigin_4)); }
	inline int32_t get_SuffixOrigin_4() const { return ___SuffixOrigin_4; }
	inline int32_t* get_address_of_SuffixOrigin_4() { return &___SuffixOrigin_4; }
	inline void set_SuffixOrigin_4(int32_t value)
	{
		___SuffixOrigin_4 = value;
	}

	inline static int32_t get_offset_of_DadState_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___DadState_5)); }
	inline int32_t get_DadState_5() const { return ___DadState_5; }
	inline int32_t* get_address_of_DadState_5() { return &___DadState_5; }
	inline void set_DadState_5(int32_t value)
	{
		___DadState_5 = value;
	}

	inline static int32_t get_offset_of_ValidLifetime_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___ValidLifetime_6)); }
	inline uint32_t get_ValidLifetime_6() const { return ___ValidLifetime_6; }
	inline uint32_t* get_address_of_ValidLifetime_6() { return &___ValidLifetime_6; }
	inline void set_ValidLifetime_6(uint32_t value)
	{
		___ValidLifetime_6 = value;
	}

	inline static int32_t get_offset_of_PreferredLifetime_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___PreferredLifetime_7)); }
	inline uint32_t get_PreferredLifetime_7() const { return ___PreferredLifetime_7; }
	inline uint32_t* get_address_of_PreferredLifetime_7() { return &___PreferredLifetime_7; }
	inline void set_PreferredLifetime_7(uint32_t value)
	{
		___PreferredLifetime_7 = value;
	}

	inline static int32_t get_offset_of_LeaseLifetime_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___LeaseLifetime_8)); }
	inline uint32_t get_LeaseLifetime_8() const { return ___LeaseLifetime_8; }
	inline uint32_t* get_address_of_LeaseLifetime_8() { return &___LeaseLifetime_8; }
	inline void set_LeaseLifetime_8(uint32_t value)
	{
		___LeaseLifetime_8 = value;
	}

	inline static int32_t get_offset_of_OnLinkPrefixLength_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029, ___OnLinkPrefixLength_9)); }
	inline uint8_t get_OnLinkPrefixLength_9() const { return ___OnLinkPrefixLength_9; }
	inline uint8_t* get_address_of_OnLinkPrefixLength_9() { return &___OnLinkPrefixLength_9; }
	inline void set_OnLinkPrefixLength_9(uint8_t value)
	{
		___OnLinkPrefixLength_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32_IP_ADAPTER_UNICAST_ADDRESS_T2418619029_H
#ifndef WIN32_IP_PER_ADAPTER_INFO_T4002330115_H
#define WIN32_IP_PER_ADAPTER_INFO_T4002330115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct  Win32_IP_PER_ADAPTER_INFO_t4002330115  : public RuntimeObject
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::AutoconfigEnabled
	uint32_t ___AutoconfigEnabled_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::AutoconfigActive
	uint32_t ___AutoconfigActive_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_3;

public:
	inline static int32_t get_offset_of_AutoconfigEnabled_0() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t4002330115, ___AutoconfigEnabled_0)); }
	inline uint32_t get_AutoconfigEnabled_0() const { return ___AutoconfigEnabled_0; }
	inline uint32_t* get_address_of_AutoconfigEnabled_0() { return &___AutoconfigEnabled_0; }
	inline void set_AutoconfigEnabled_0(uint32_t value)
	{
		___AutoconfigEnabled_0 = value;
	}

	inline static int32_t get_offset_of_AutoconfigActive_1() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t4002330115, ___AutoconfigActive_1)); }
	inline uint32_t get_AutoconfigActive_1() const { return ___AutoconfigActive_1; }
	inline uint32_t* get_address_of_AutoconfigActive_1() { return &___AutoconfigActive_1; }
	inline void set_AutoconfigActive_1(uint32_t value)
	{
		___AutoconfigActive_1 = value;
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t4002330115, ___CurrentDnsServer_2)); }
	inline intptr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline intptr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(intptr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t4002330115, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t4002330115_marshaled_pinvoke
{
	uint32_t ___AutoconfigEnabled_0;
	uint32_t ___AutoconfigActive_1;
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t4002330115_marshaled_com
{
	uint32_t ___AutoconfigEnabled_0;
	uint32_t ___AutoconfigActive_1;
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_3;
};
#endif // WIN32_IP_PER_ADAPTER_INFO_T4002330115_H
#ifndef WIN32_MIB_ICMP_EX_T2444676487_H
#define WIN32_MIB_ICMP_EX_T2444676487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct  Win32_MIB_ICMP_EX_t2444676487 
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::InStats
	Win32_MIBICMPSTATS_EX_t3467025201  ___InStats_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::OutStats
	Win32_MIBICMPSTATS_EX_t3467025201  ___OutStats_1;

public:
	inline static int32_t get_offset_of_InStats_0() { return static_cast<int32_t>(offsetof(Win32_MIB_ICMP_EX_t2444676487, ___InStats_0)); }
	inline Win32_MIBICMPSTATS_EX_t3467025201  get_InStats_0() const { return ___InStats_0; }
	inline Win32_MIBICMPSTATS_EX_t3467025201 * get_address_of_InStats_0() { return &___InStats_0; }
	inline void set_InStats_0(Win32_MIBICMPSTATS_EX_t3467025201  value)
	{
		___InStats_0 = value;
	}

	inline static int32_t get_offset_of_OutStats_1() { return static_cast<int32_t>(offsetof(Win32_MIB_ICMP_EX_t2444676487, ___OutStats_1)); }
	inline Win32_MIBICMPSTATS_EX_t3467025201  get_OutStats_1() const { return ___OutStats_1; }
	inline Win32_MIBICMPSTATS_EX_t3467025201 * get_address_of_OutStats_1() { return &___OutStats_1; }
	inline void set_OutStats_1(Win32_MIBICMPSTATS_EX_t3467025201  value)
	{
		___OutStats_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t2444676487_marshaled_pinvoke
{
	Win32_MIBICMPSTATS_EX_t3467025201_marshaled_pinvoke ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3467025201_marshaled_pinvoke ___OutStats_1;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t2444676487_marshaled_com
{
	Win32_MIBICMPSTATS_EX_t3467025201_marshaled_com ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3467025201_marshaled_com ___OutStats_1;
};
#endif // WIN32_MIB_ICMP_EX_T2444676487_H
#ifndef WIN32_MIB_IFROW_T851471770_H
#define WIN32_MIB_IFROW_T851471770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t851471770 
{
public:
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t3528271667* ___Name_3;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_4;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_5;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_7;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_8;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t4116647657* ___PhysAddr_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_22;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_23;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_24;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_25;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t4116647657* ___Descr_26;

public:
	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Name_3)); }
	inline CharU5BU5D_t3528271667* get_Name_3() const { return ___Name_3; }
	inline CharU5BU5D_t3528271667** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(CharU5BU5D_t3528271667* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___Name_3), value);
	}

	inline static int32_t get_offset_of_Index_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Index_4)); }
	inline int32_t get_Index_4() const { return ___Index_4; }
	inline int32_t* get_address_of_Index_4() { return &___Index_4; }
	inline void set_Index_4(int32_t value)
	{
		___Index_4 = value;
	}

	inline static int32_t get_offset_of_Type_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Type_5)); }
	inline int32_t get_Type_5() const { return ___Type_5; }
	inline int32_t* get_address_of_Type_5() { return &___Type_5; }
	inline void set_Type_5(int32_t value)
	{
		___Type_5 = value;
	}

	inline static int32_t get_offset_of_Mtu_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Mtu_6)); }
	inline int32_t get_Mtu_6() const { return ___Mtu_6; }
	inline int32_t* get_address_of_Mtu_6() { return &___Mtu_6; }
	inline void set_Mtu_6(int32_t value)
	{
		___Mtu_6 = value;
	}

	inline static int32_t get_offset_of_Speed_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Speed_7)); }
	inline uint32_t get_Speed_7() const { return ___Speed_7; }
	inline uint32_t* get_address_of_Speed_7() { return &___Speed_7; }
	inline void set_Speed_7(uint32_t value)
	{
		___Speed_7 = value;
	}

	inline static int32_t get_offset_of_PhysAddrLen_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddrLen_8)); }
	inline int32_t get_PhysAddrLen_8() const { return ___PhysAddrLen_8; }
	inline int32_t* get_address_of_PhysAddrLen_8() { return &___PhysAddrLen_8; }
	inline void set_PhysAddrLen_8(int32_t value)
	{
		___PhysAddrLen_8 = value;
	}

	inline static int32_t get_offset_of_PhysAddr_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddr_9)); }
	inline ByteU5BU5D_t4116647657* get_PhysAddr_9() const { return ___PhysAddr_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysAddr_9() { return &___PhysAddr_9; }
	inline void set_PhysAddr_9(ByteU5BU5D_t4116647657* value)
	{
		___PhysAddr_9 = value;
		Il2CppCodeGenWriteBarrier((&___PhysAddr_9), value);
	}

	inline static int32_t get_offset_of_AdminStatus_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___AdminStatus_10)); }
	inline uint32_t get_AdminStatus_10() const { return ___AdminStatus_10; }
	inline uint32_t* get_address_of_AdminStatus_10() { return &___AdminStatus_10; }
	inline void set_AdminStatus_10(uint32_t value)
	{
		___AdminStatus_10 = value;
	}

	inline static int32_t get_offset_of_OperStatus_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OperStatus_11)); }
	inline uint32_t get_OperStatus_11() const { return ___OperStatus_11; }
	inline uint32_t* get_address_of_OperStatus_11() { return &___OperStatus_11; }
	inline void set_OperStatus_11(uint32_t value)
	{
		___OperStatus_11 = value;
	}

	inline static int32_t get_offset_of_LastChange_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___LastChange_12)); }
	inline uint32_t get_LastChange_12() const { return ___LastChange_12; }
	inline uint32_t* get_address_of_LastChange_12() { return &___LastChange_12; }
	inline void set_LastChange_12(uint32_t value)
	{
		___LastChange_12 = value;
	}

	inline static int32_t get_offset_of_InOctets_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InOctets_13)); }
	inline int32_t get_InOctets_13() const { return ___InOctets_13; }
	inline int32_t* get_address_of_InOctets_13() { return &___InOctets_13; }
	inline void set_InOctets_13(int32_t value)
	{
		___InOctets_13 = value;
	}

	inline static int32_t get_offset_of_InUcastPkts_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUcastPkts_14)); }
	inline int32_t get_InUcastPkts_14() const { return ___InUcastPkts_14; }
	inline int32_t* get_address_of_InUcastPkts_14() { return &___InUcastPkts_14; }
	inline void set_InUcastPkts_14(int32_t value)
	{
		___InUcastPkts_14 = value;
	}

	inline static int32_t get_offset_of_InNUcastPkts_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InNUcastPkts_15)); }
	inline int32_t get_InNUcastPkts_15() const { return ___InNUcastPkts_15; }
	inline int32_t* get_address_of_InNUcastPkts_15() { return &___InNUcastPkts_15; }
	inline void set_InNUcastPkts_15(int32_t value)
	{
		___InNUcastPkts_15 = value;
	}

	inline static int32_t get_offset_of_InDiscards_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InDiscards_16)); }
	inline int32_t get_InDiscards_16() const { return ___InDiscards_16; }
	inline int32_t* get_address_of_InDiscards_16() { return &___InDiscards_16; }
	inline void set_InDiscards_16(int32_t value)
	{
		___InDiscards_16 = value;
	}

	inline static int32_t get_offset_of_InErrors_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InErrors_17)); }
	inline int32_t get_InErrors_17() const { return ___InErrors_17; }
	inline int32_t* get_address_of_InErrors_17() { return &___InErrors_17; }
	inline void set_InErrors_17(int32_t value)
	{
		___InErrors_17 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUnknownProtos_18)); }
	inline int32_t get_InUnknownProtos_18() const { return ___InUnknownProtos_18; }
	inline int32_t* get_address_of_InUnknownProtos_18() { return &___InUnknownProtos_18; }
	inline void set_InUnknownProtos_18(int32_t value)
	{
		___InUnknownProtos_18 = value;
	}

	inline static int32_t get_offset_of_OutOctets_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutOctets_19)); }
	inline int32_t get_OutOctets_19() const { return ___OutOctets_19; }
	inline int32_t* get_address_of_OutOctets_19() { return &___OutOctets_19; }
	inline void set_OutOctets_19(int32_t value)
	{
		___OutOctets_19 = value;
	}

	inline static int32_t get_offset_of_OutUcastPkts_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutUcastPkts_20)); }
	inline int32_t get_OutUcastPkts_20() const { return ___OutUcastPkts_20; }
	inline int32_t* get_address_of_OutUcastPkts_20() { return &___OutUcastPkts_20; }
	inline void set_OutUcastPkts_20(int32_t value)
	{
		___OutUcastPkts_20 = value;
	}

	inline static int32_t get_offset_of_OutNUcastPkts_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutNUcastPkts_21)); }
	inline int32_t get_OutNUcastPkts_21() const { return ___OutNUcastPkts_21; }
	inline int32_t* get_address_of_OutNUcastPkts_21() { return &___OutNUcastPkts_21; }
	inline void set_OutNUcastPkts_21(int32_t value)
	{
		___OutNUcastPkts_21 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutDiscards_22)); }
	inline int32_t get_OutDiscards_22() const { return ___OutDiscards_22; }
	inline int32_t* get_address_of_OutDiscards_22() { return &___OutDiscards_22; }
	inline void set_OutDiscards_22(int32_t value)
	{
		___OutDiscards_22 = value;
	}

	inline static int32_t get_offset_of_OutErrors_23() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutErrors_23)); }
	inline int32_t get_OutErrors_23() const { return ___OutErrors_23; }
	inline int32_t* get_address_of_OutErrors_23() { return &___OutErrors_23; }
	inline void set_OutErrors_23(int32_t value)
	{
		___OutErrors_23 = value;
	}

	inline static int32_t get_offset_of_OutQLen_24() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutQLen_24)); }
	inline int32_t get_OutQLen_24() const { return ___OutQLen_24; }
	inline int32_t* get_address_of_OutQLen_24() { return &___OutQLen_24; }
	inline void set_OutQLen_24(int32_t value)
	{
		___OutQLen_24 = value;
	}

	inline static int32_t get_offset_of_DescrLen_25() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___DescrLen_25)); }
	inline int32_t get_DescrLen_25() const { return ___DescrLen_25; }
	inline int32_t* get_address_of_DescrLen_25() { return &___DescrLen_25; }
	inline void set_DescrLen_25(int32_t value)
	{
		___DescrLen_25 = value;
	}

	inline static int32_t get_offset_of_Descr_26() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Descr_26)); }
	inline ByteU5BU5D_t4116647657* get_Descr_26() const { return ___Descr_26; }
	inline ByteU5BU5D_t4116647657** get_address_of_Descr_26() { return &___Descr_26; }
	inline void set_Descr_26(ByteU5BU5D_t4116647657* value)
	{
		___Descr_26 = value;
		Il2CppCodeGenWriteBarrier((&___Descr_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_pinvoke
{
	uint8_t ___Name_3[512];
	int32_t ___Index_4;
	int32_t ___Type_5;
	int32_t ___Mtu_6;
	uint32_t ___Speed_7;
	int32_t ___PhysAddrLen_8;
	uint8_t ___PhysAddr_9[8];
	uint32_t ___AdminStatus_10;
	uint32_t ___OperStatus_11;
	uint32_t ___LastChange_12;
	int32_t ___InOctets_13;
	int32_t ___InUcastPkts_14;
	int32_t ___InNUcastPkts_15;
	int32_t ___InDiscards_16;
	int32_t ___InErrors_17;
	int32_t ___InUnknownProtos_18;
	int32_t ___OutOctets_19;
	int32_t ___OutUcastPkts_20;
	int32_t ___OutNUcastPkts_21;
	int32_t ___OutDiscards_22;
	int32_t ___OutErrors_23;
	int32_t ___OutQLen_24;
	int32_t ___DescrLen_25;
	uint8_t ___Descr_26[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_com
{
	uint8_t ___Name_3[512];
	int32_t ___Index_4;
	int32_t ___Type_5;
	int32_t ___Mtu_6;
	uint32_t ___Speed_7;
	int32_t ___PhysAddrLen_8;
	uint8_t ___PhysAddr_9[8];
	uint32_t ___AdminStatus_10;
	uint32_t ___OperStatus_11;
	uint32_t ___LastChange_12;
	int32_t ___InOctets_13;
	int32_t ___InUcastPkts_14;
	int32_t ___InNUcastPkts_15;
	int32_t ___InDiscards_16;
	int32_t ___InErrors_17;
	int32_t ___InUnknownProtos_18;
	int32_t ___OutOctets_19;
	int32_t ___OutUcastPkts_20;
	int32_t ___OutNUcastPkts_21;
	int32_t ___OutDiscards_22;
	int32_t ___OutErrors_23;
	int32_t ___OutQLen_24;
	int32_t ___DescrLen_25;
	uint8_t ___Descr_26[256];
};
#endif // WIN32_MIB_IFROW_T851471770_H
#ifndef IFADDRS_T271199369_H
#define IFADDRS_T271199369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifaddrs
struct  ifaddrs_t271199369 
{
public:
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.Net.NetworkInformation.ifa_ifu System.Net.NetworkInformation.ifaddrs::ifa_ifu
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_ifu_5() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_ifu_5)); }
	inline ifa_ifu_t1794893192  get_ifa_ifu_5() const { return ___ifa_ifu_5; }
	inline ifa_ifu_t1794893192 * get_address_of_ifa_ifu_5() { return &___ifa_ifu_5; }
	inline void set_ifa_ifu_5(ifa_ifu_t1794893192  value)
	{
		___ifa_ifu_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T271199369_H
#ifndef SOCKADDR_IN6_T2790242023_H
#define SOCKADDR_IN6_T2790242023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t2790242023 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t3611791508  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;

public:
	inline static int32_t get_offset_of_sin6_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_family_0)); }
	inline uint16_t get_sin6_family_0() const { return ___sin6_family_0; }
	inline uint16_t* get_address_of_sin6_family_0() { return &___sin6_family_0; }
	inline void set_sin6_family_0(uint16_t value)
	{
		___sin6_family_0 = value;
	}

	inline static int32_t get_offset_of_sin6_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_port_1)); }
	inline uint16_t get_sin6_port_1() const { return ___sin6_port_1; }
	inline uint16_t* get_address_of_sin6_port_1() { return &___sin6_port_1; }
	inline void set_sin6_port_1(uint16_t value)
	{
		___sin6_port_1 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_flowinfo_2)); }
	inline uint32_t get_sin6_flowinfo_2() const { return ___sin6_flowinfo_2; }
	inline uint32_t* get_address_of_sin6_flowinfo_2() { return &___sin6_flowinfo_2; }
	inline void set_sin6_flowinfo_2(uint32_t value)
	{
		___sin6_flowinfo_2 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_addr_3)); }
	inline in6_addr_t3611791508  get_sin6_addr_3() const { return ___sin6_addr_3; }
	inline in6_addr_t3611791508 * get_address_of_sin6_addr_3() { return &___sin6_addr_3; }
	inline void set_sin6_addr_3(in6_addr_t3611791508  value)
	{
		___sin6_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_scope_id_4)); }
	inline uint32_t get_sin6_scope_id_4() const { return ___sin6_scope_id_4; }
	inline uint32_t* get_address_of_sin6_scope_id_4() { return &___sin6_scope_id_4; }
	inline void set_sin6_scope_id_4(uint32_t value)
	{
		___sin6_scope_id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_pinvoke
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_pinvoke ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_com
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_com ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
#endif // SOCKADDR_IN6_T2790242023_H
#ifndef LINUXNETWORKINTERFACE_T4095034716_H
#define LINUXNETWORKINTERFACE_T4095034716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t4095034716  : public UnixNetworkInterface_t2401762829
{
public:
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.LinuxNetworkInterface::type
	int32_t ___type_12;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_13;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_14;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_15;

public:
	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___type_12)); }
	inline int32_t get_type_12() const { return ___type_12; }
	inline int32_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(int32_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_iface_path_13() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_path_13)); }
	inline String_t* get_iface_path_13() const { return ___iface_path_13; }
	inline String_t** get_address_of_iface_path_13() { return &___iface_path_13; }
	inline void set_iface_path_13(String_t* value)
	{
		___iface_path_13 = value;
		Il2CppCodeGenWriteBarrier((&___iface_path_13), value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_14() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_operstate_path_14)); }
	inline String_t* get_iface_operstate_path_14() const { return ___iface_operstate_path_14; }
	inline String_t** get_address_of_iface_operstate_path_14() { return &___iface_operstate_path_14; }
	inline void set_iface_operstate_path_14(String_t* value)
	{
		___iface_operstate_path_14 = value;
		Il2CppCodeGenWriteBarrier((&___iface_operstate_path_14), value);
	}

	inline static int32_t get_offset_of_iface_flags_path_15() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_flags_path_15)); }
	inline String_t* get_iface_flags_path_15() const { return ___iface_flags_path_15; }
	inline String_t** get_address_of_iface_flags_path_15() { return &___iface_flags_path_15; }
	inline void set_iface_flags_path_15(String_t* value)
	{
		___iface_flags_path_15 = value;
		Il2CppCodeGenWriteBarrier((&___iface_flags_path_15), value);
	}
};

struct LinuxNetworkInterface_t4095034716_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.NetworkInformation.LinuxNetworkInterface::<>f__switch$map3
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3_16;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_16() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716_StaticFields, ___U3CU3Ef__switchU24map3_16)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3_16() const { return ___U3CU3Ef__switchU24map3_16; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3_16() { return &___U3CU3Ef__switchU24map3_16; }
	inline void set_U3CU3Ef__switchU24map3_16(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACE_T4095034716_H
#ifndef MACOSNETWORKINTERFACE_T3969281182_H
#define MACOSNETWORKINTERFACE_T3969281182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsNetworkInterface
struct  MacOsNetworkInterface_t3969281182  : public UnixNetworkInterface_t2401762829
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACE_T3969281182_H
#ifndef UNIXIPINTERFACEPROPERTIES_T1296234392_H
#define UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t1296234392  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.UnixIPInterfaceProperties::ipv4iface_properties
	IPv4InterfaceProperties_t4242495999 * ___ipv4iface_properties_0;
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t2401762829 * ___iface_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t1713852332 * ___addresses_2;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t2315030214 * ___dns_servers_3;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::gateways
	IPAddressCollection_t2315030214 * ___gateways_4;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t3738529785  ___last_parse_6;

public:
	inline static int32_t get_offset_of_ipv4iface_properties_0() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___ipv4iface_properties_0)); }
	inline IPv4InterfaceProperties_t4242495999 * get_ipv4iface_properties_0() const { return ___ipv4iface_properties_0; }
	inline IPv4InterfaceProperties_t4242495999 ** get_address_of_ipv4iface_properties_0() { return &___ipv4iface_properties_0; }
	inline void set_ipv4iface_properties_0(IPv4InterfaceProperties_t4242495999 * value)
	{
		___ipv4iface_properties_0 = value;
		Il2CppCodeGenWriteBarrier((&___ipv4iface_properties_0), value);
	}

	inline static int32_t get_offset_of_iface_1() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___iface_1)); }
	inline UnixNetworkInterface_t2401762829 * get_iface_1() const { return ___iface_1; }
	inline UnixNetworkInterface_t2401762829 ** get_address_of_iface_1() { return &___iface_1; }
	inline void set_iface_1(UnixNetworkInterface_t2401762829 * value)
	{
		___iface_1 = value;
		Il2CppCodeGenWriteBarrier((&___iface_1), value);
	}

	inline static int32_t get_offset_of_addresses_2() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___addresses_2)); }
	inline List_1_t1713852332 * get_addresses_2() const { return ___addresses_2; }
	inline List_1_t1713852332 ** get_address_of_addresses_2() { return &___addresses_2; }
	inline void set_addresses_2(List_1_t1713852332 * value)
	{
		___addresses_2 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_2), value);
	}

	inline static int32_t get_offset_of_dns_servers_3() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_servers_3)); }
	inline IPAddressCollection_t2315030214 * get_dns_servers_3() const { return ___dns_servers_3; }
	inline IPAddressCollection_t2315030214 ** get_address_of_dns_servers_3() { return &___dns_servers_3; }
	inline void set_dns_servers_3(IPAddressCollection_t2315030214 * value)
	{
		___dns_servers_3 = value;
		Il2CppCodeGenWriteBarrier((&___dns_servers_3), value);
	}

	inline static int32_t get_offset_of_gateways_4() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___gateways_4)); }
	inline IPAddressCollection_t2315030214 * get_gateways_4() const { return ___gateways_4; }
	inline IPAddressCollection_t2315030214 ** get_address_of_gateways_4() { return &___gateways_4; }
	inline void set_gateways_4(IPAddressCollection_t2315030214 * value)
	{
		___gateways_4 = value;
		Il2CppCodeGenWriteBarrier((&___gateways_4), value);
	}

	inline static int32_t get_offset_of_dns_suffix_5() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_suffix_5)); }
	inline String_t* get_dns_suffix_5() const { return ___dns_suffix_5; }
	inline String_t** get_address_of_dns_suffix_5() { return &___dns_suffix_5; }
	inline void set_dns_suffix_5(String_t* value)
	{
		___dns_suffix_5 = value;
		Il2CppCodeGenWriteBarrier((&___dns_suffix_5), value);
	}

	inline static int32_t get_offset_of_last_parse_6() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___last_parse_6)); }
	inline DateTime_t3738529785  get_last_parse_6() const { return ___last_parse_6; }
	inline DateTime_t3738529785 * get_address_of_last_parse_6() { return &___last_parse_6; }
	inline void set_last_parse_6(DateTime_t3738529785  value)
	{
		___last_parse_6 = value;
	}
};

struct UnixIPInterfaceProperties_t1296234392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t3657309853 * ___ns_7;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t3657309853 * ___search_8;

public:
	inline static int32_t get_offset_of_ns_7() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___ns_7)); }
	inline Regex_t3657309853 * get_ns_7() const { return ___ns_7; }
	inline Regex_t3657309853 ** get_address_of_ns_7() { return &___ns_7; }
	inline void set_ns_7(Regex_t3657309853 * value)
	{
		___ns_7 = value;
		Il2CppCodeGenWriteBarrier((&___ns_7), value);
	}

	inline static int32_t get_offset_of_search_8() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___search_8)); }
	inline Regex_t3657309853 * get_search_8() const { return ___search_8; }
	inline Regex_t3657309853 ** get_address_of_search_8() { return &___search_8; }
	inline void set_search_8(Regex_t3657309853 * value)
	{
		___search_8 = value;
		Il2CppCodeGenWriteBarrier((&___search_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifndef WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#define WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct  Win32IPInterfaceProperties2_t4152818631  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32IPInterfaceProperties2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328 * ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 ** get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328 * value)
	{
		___addr_0 = value;
		Il2CppCodeGenWriteBarrier((&___addr_0), value);
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifndef WIN32IPV4INTERFACEPROPERTIES_T112930786_H
#define WIN32IPV4INTERFACEPROPERTIES_T112930786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceProperties
struct  Win32IPv4InterfaceProperties_t112930786  : public IPv4InterfaceProperties_t4242495999
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::ainfo
	Win32_IP_ADAPTER_INFO_t882755512 * ___ainfo_0;
	// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::painfo
	Win32_IP_PER_ADAPTER_INFO_t4002330115 * ___painfo_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceProperties::mib
	Win32_MIB_IFROW_t851471770  ___mib_2;

public:
	inline static int32_t get_offset_of_ainfo_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceProperties_t112930786, ___ainfo_0)); }
	inline Win32_IP_ADAPTER_INFO_t882755512 * get_ainfo_0() const { return ___ainfo_0; }
	inline Win32_IP_ADAPTER_INFO_t882755512 ** get_address_of_ainfo_0() { return &___ainfo_0; }
	inline void set_ainfo_0(Win32_IP_ADAPTER_INFO_t882755512 * value)
	{
		___ainfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ainfo_0), value);
	}

	inline static int32_t get_offset_of_painfo_1() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceProperties_t112930786, ___painfo_1)); }
	inline Win32_IP_PER_ADAPTER_INFO_t4002330115 * get_painfo_1() const { return ___painfo_1; }
	inline Win32_IP_PER_ADAPTER_INFO_t4002330115 ** get_address_of_painfo_1() { return &___painfo_1; }
	inline void set_painfo_1(Win32_IP_PER_ADAPTER_INFO_t4002330115 * value)
	{
		___painfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___painfo_1), value);
	}

	inline static int32_t get_offset_of_mib_2() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceProperties_t112930786, ___mib_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib_2() const { return ___mib_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib_2() { return &___mib_2; }
	inline void set_mib_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPV4INTERFACEPROPERTIES_T112930786_H
#ifndef WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#define WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct  Win32IPv4InterfaceStatistics_t3096671123  : public IPv4InterfaceStatistics_t3249312820
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceStatistics::info
	Win32_MIB_IFROW_t851471770  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceStatistics_t3096671123, ___info_0)); }
	inline Win32_MIB_IFROW_t851471770  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IFROW_t851471770  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifndef WIN32IPV6INTERFACEPROPERTIES_T2331045636_H
#define WIN32IPV6INTERFACEPROPERTIES_T2331045636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv6InterfaceProperties
struct  Win32IPv6InterfaceProperties_t2331045636  : public IPv6InterfaceProperties_t263835045
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv6InterfaceProperties::mib
	Win32_MIB_IFROW_t851471770  ___mib_0;

public:
	inline static int32_t get_offset_of_mib_0() { return static_cast<int32_t>(offsetof(Win32IPv6InterfaceProperties_t2331045636, ___mib_0)); }
	inline Win32_MIB_IFROW_t851471770  get_mib_0() const { return ___mib_0; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib_0() { return &___mib_0; }
	inline void set_mib_0(Win32_MIB_IFROW_t851471770  value)
	{
		___mib_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPV6INTERFACEPROPERTIES_T2331045636_H
#ifndef WIN32NETWORKINTERFACE2_T2303857857_H
#define WIN32NETWORKINTERFACE2_T2303857857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t2303857857  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328 * ___addr_2;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_3;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_4;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t3096671123 * ___ip4stats_5;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t3964383369 * ___ip_if_props_6;

public:
	inline static int32_t get_offset_of_addr_2() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___addr_2)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_addr_2() const { return ___addr_2; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 ** get_address_of_addr_2() { return &___addr_2; }
	inline void set_addr_2(Win32_IP_ADAPTER_ADDRESSES_t3463526328 * value)
	{
		___addr_2 = value;
		Il2CppCodeGenWriteBarrier((&___addr_2), value);
	}

	inline static int32_t get_offset_of_mib4_3() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib4_3)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_3() const { return ___mib4_3; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_3() { return &___mib4_3; }
	inline void set_mib4_3(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_3 = value;
	}

	inline static int32_t get_offset_of_mib6_4() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib6_4)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_4() const { return ___mib6_4; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_4() { return &___mib6_4; }
	inline void set_mib6_4(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_4 = value;
	}

	inline static int32_t get_offset_of_ip4stats_5() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip4stats_5)); }
	inline Win32IPv4InterfaceStatistics_t3096671123 * get_ip4stats_5() const { return ___ip4stats_5; }
	inline Win32IPv4InterfaceStatistics_t3096671123 ** get_address_of_ip4stats_5() { return &___ip4stats_5; }
	inline void set_ip4stats_5(Win32IPv4InterfaceStatistics_t3096671123 * value)
	{
		___ip4stats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ip4stats_5), value);
	}

	inline static int32_t get_offset_of_ip_if_props_6() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip_if_props_6)); }
	inline IPInterfaceProperties_t3964383369 * get_ip_if_props_6() const { return ___ip_if_props_6; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ip_if_props_6() { return &___ip_if_props_6; }
	inline void set_ip_if_props_6(IPInterfaceProperties_t3964383369 * value)
	{
		___ip_if_props_6 = value;
		Il2CppCodeGenWriteBarrier((&___ip_if_props_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE2_T2303857857_H
#ifndef WIN32UNICASTIPADDRESSINFORMATION_T3383088377_H
#define WIN32UNICASTIPADDRESSINFORMATION_T3383088377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct  Win32UnicastIPAddressInformation_t3383088377  : public UnicastIPAddressInformation_t2439964334
{
public:
	// System.Int32 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::if_index
	int32_t ___if_index_0;
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS System.Net.NetworkInformation.Win32UnicastIPAddressInformation::info
	Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029  ___info_1;

public:
	inline static int32_t get_offset_of_if_index_0() { return static_cast<int32_t>(offsetof(Win32UnicastIPAddressInformation_t3383088377, ___if_index_0)); }
	inline int32_t get_if_index_0() const { return ___if_index_0; }
	inline int32_t* get_address_of_if_index_0() { return &___if_index_0; }
	inline void set_if_index_0(int32_t value)
	{
		___if_index_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(Win32UnicastIPAddressInformation_t3383088377, ___info_1)); }
	inline Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029  get_info_1() const { return ___info_1; }
	inline Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029 * get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(Win32_IP_ADAPTER_UNICAST_ADDRESS_t2418619029  value)
	{
		___info_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32UNICASTIPADDRESSINFORMATION_T3383088377_H
#ifndef LINUXIPINTERFACEPROPERTIES_T458874081_H
#define LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPInterfaceProperties
struct  LinuxIPInterfaceProperties_t458874081  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifndef MACOSIPINTERFACEPROPERTIES_T1282553291_H
#define MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPInterfaceProperties
struct  MacOsIPInterfaceProperties_t1282553291  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSIPINTERFACEPROPERTIES_T1282553291_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (MibIPGlobalStatistics_t3758853144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1500[1] = 
{
	MibIPGlobalStatistics_t3758853144::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (Win32IPGlobalStatistics_t4153089801), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1501[1] = 
{
	Win32IPGlobalStatistics_t4153089801::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (Win32_MIB_IPSTATS_t21271030)+ sizeof (RuntimeObject), sizeof(Win32_MIB_IPSTATS_t21271030 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1502[23] = 
{
	Win32_MIB_IPSTATS_t21271030::get_offset_of_Forwarding_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_DefaultTTL_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_InReceives_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_InHdrErrors_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_InAddrErrors_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_ForwDatagrams_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_InUnknownProtos_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_InDiscards_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_InDelivers_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_OutRequests_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_RoutingDiscards_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_OutDiscards_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_OutNoRoutes_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_ReasmTimeout_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_ReasmReqds_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_ReasmOks_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_ReasmFails_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_FragOks_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_FragFails_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_FragCreates_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_NumIf_20() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_NumAddr_21() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IPSTATS_t21271030::get_offset_of_NumRoutes_22() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (IPInterfaceProperties_t3964383369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (UnixIPInterfaceProperties_t1296234392), -1, sizeof(UnixIPInterfaceProperties_t1296234392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1504[9] = 
{
	UnixIPInterfaceProperties_t1296234392::get_offset_of_ipv4iface_properties_0(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_iface_1(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_addresses_2(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_servers_3(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_gateways_4(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_suffix_5(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_last_parse_6(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_ns_7(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_search_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (LinuxIPInterfaceProperties_t458874081), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (MacOsIPInterfaceProperties_t1282553291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (Win32IPInterfaceProperties2_t4152818631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1507[3] = 
{
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_addr_0(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib4_1(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib6_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (IPStatus_t2681468906)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1508[25] = 
{
	IPStatus_t2681468906::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (IPv4InterfaceProperties_t4242495999), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (UnixIPv4InterfaceProperties_t1849319670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1510[1] = 
{
	UnixIPv4InterfaceProperties_t1849319670::get_offset_of_iface_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (LinuxIPv4InterfaceProperties_t4058279570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (MacOsIPv4InterfaceProperties_t1234053671), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (Win32IPv4InterfaceProperties_t112930786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1513[3] = 
{
	Win32IPv4InterfaceProperties_t112930786::get_offset_of_ainfo_0(),
	Win32IPv4InterfaceProperties_t112930786::get_offset_of_painfo_1(),
	Win32IPv4InterfaceProperties_t112930786::get_offset_of_mib_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (Win32_IP_PER_ADAPTER_INFO_t4002330115), sizeof(Win32_IP_PER_ADAPTER_INFO_t4002330115_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1514[4] = 
{
	Win32_IP_PER_ADAPTER_INFO_t4002330115::get_offset_of_AutoconfigEnabled_0(),
	Win32_IP_PER_ADAPTER_INFO_t4002330115::get_offset_of_AutoconfigActive_1(),
	Win32_IP_PER_ADAPTER_INFO_t4002330115::get_offset_of_CurrentDnsServer_2(),
	Win32_IP_PER_ADAPTER_INFO_t4002330115::get_offset_of_DnsServerList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (IPv4InterfaceStatistics_t3249312820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (Win32IPv4InterfaceStatistics_t3096671123), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1516[1] = 
{
	Win32IPv4InterfaceStatistics_t3096671123::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (LinuxIPv4InterfaceStatistics_t1812025327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1517[1] = 
{
	LinuxIPv4InterfaceStatistics_t1812025327::get_offset_of_linux_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (MacOsIPv4InterfaceStatistics_t4027772578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1518[1] = 
{
	MacOsIPv4InterfaceStatistics_t4027772578::get_offset_of_macos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (IPv6InterfaceProperties_t263835045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (Win32IPv6InterfaceProperties_t2331045636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1520[1] = 
{
	Win32IPv6InterfaceProperties_t2331045636::get_offset_of_mib_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (IcmpV4Statistics_t3304898107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (MibIcmpV4Statistics_t4054347055), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1522[1] = 
{
	MibIcmpV4Statistics_t4054347055::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (Win32IcmpV4Statistics_t2631415787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1523[2] = 
{
	Win32IcmpV4Statistics_t2631415787::get_offset_of_iin_0(),
	Win32IcmpV4Statistics_t2631415787::get_offset_of_iout_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (Win32_MIBICMPINFO_t1014864765)+ sizeof (RuntimeObject), sizeof(Win32_MIBICMPINFO_t1014864765 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1524[2] = 
{
	Win32_MIBICMPINFO_t1014864765::get_offset_of_InStats_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPINFO_t1014864765::get_offset_of_OutStats_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (Win32_MIBICMPSTATS_t643360748)+ sizeof (RuntimeObject), sizeof(Win32_MIBICMPSTATS_t643360748 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1525[13] = 
{
	Win32_MIBICMPSTATS_t643360748::get_offset_of_Msgs_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_Errors_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_DestUnreachs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_TimeExcds_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_ParmProbs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_SrcQuenchs_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_Redirects_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_Echos_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_EchoReps_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_Timestamps_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_TimestampReps_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_AddrMasks_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_t643360748::get_offset_of_AddrMaskReps_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (IcmpV6Statistics_t3428499003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (MibIcmpV6Statistics_t1375101177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1527[1] = 
{
	MibIcmpV6Statistics_t1375101177::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (IcmpV6MessageTypes_t883225832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1528[15] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (Win32IcmpV6Statistics_t2631409137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1529[2] = 
{
	Win32IcmpV6Statistics_t2631409137::get_offset_of_iin_0(),
	Win32IcmpV6Statistics_t2631409137::get_offset_of_iout_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (Win32_MIB_ICMP_EX_t2444676487)+ sizeof (RuntimeObject), sizeof(Win32_MIB_ICMP_EX_t2444676487_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1530[2] = 
{
	Win32_MIB_ICMP_EX_t2444676487::get_offset_of_InStats_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_ICMP_EX_t2444676487::get_offset_of_OutStats_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (Win32_MIBICMPSTATS_EX_t3467025201)+ sizeof (RuntimeObject), sizeof(Win32_MIBICMPSTATS_EX_t3467025201_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1531[3] = 
{
	Win32_MIBICMPSTATS_EX_t3467025201::get_offset_of_Msgs_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_EX_t3467025201::get_offset_of_Errors_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIBICMPSTATS_EX_t3467025201::get_offset_of_Counts_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (ifa_ifu_t1794893192)+ sizeof (RuntimeObject), sizeof(ifa_ifu_t1794893192 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1532[2] = 
{
	ifa_ifu_t1794893192::get_offset_of_ifu_broadaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifa_ifu_t1794893192::get_offset_of_ifu_dstaddr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (ifaddrs_t271199369)+ sizeof (RuntimeObject), sizeof(ifaddrs_t271199369_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1533[7] = 
{
	ifaddrs_t271199369::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_ifu_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (sockaddr_in_t2786965223)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t2786965223 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1534[3] = 
{
	sockaddr_in_t2786965223::get_offset_of_sin_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_addr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (sockaddr_in6_t2790242023)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2790242023_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1535[5] = 
{
	sockaddr_in6_t2790242023::get_offset_of_sin6_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_flowinfo_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_scope_id_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (in6_addr_t3611791508)+ sizeof (RuntimeObject), sizeof(in6_addr_t3611791508_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1536[1] = 
{
	in6_addr_t3611791508::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (sockaddr_ll_t3978606313)+ sizeof (RuntimeObject), sizeof(sockaddr_ll_t3978606313_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1537[7] = 
{
	sockaddr_ll_t3978606313::get_offset_of_sll_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_protocol_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_ifindex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_hatype_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_pkttype_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_halen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_addr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (LinuxArpHardware_t827080684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1538[11] = 
{
	LinuxArpHardware_t827080684::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (ifaddrs_t2169824096)+ sizeof (RuntimeObject), sizeof(ifaddrs_t2169824096_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1539[7] = 
{
	ifaddrs_t2169824096::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_dstaddr_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t2169824096::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (sockaddr_t371844119)+ sizeof (RuntimeObject), sizeof(sockaddr_t371844119 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1540[2] = 
{
	sockaddr_t371844119::get_offset_of_sa_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_t371844119::get_offset_of_sa_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (sockaddr_in_t1317910171)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t1317910171 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1541[4] = 
{
	sockaddr_in_t1317910171::get_offset_of_sin_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t1317910171::get_offset_of_sin_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (in6_addr_t1417766092)+ sizeof (RuntimeObject), sizeof(in6_addr_t1417766092_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1542[1] = 
{
	in6_addr_t1417766092::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (sockaddr_in6_t2080844659)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2080844659_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1543[6] = 
{
	sockaddr_in6_t2080844659::get_offset_of_sin6_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_port_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_flowinfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_addr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2080844659::get_offset_of_sin6_scope_id_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (sockaddr_dl_t1317779094)+ sizeof (RuntimeObject), sizeof(sockaddr_dl_t1317779094_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1544[8] = 
{
	sockaddr_dl_t1317779094::get_offset_of_sdl_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_family_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_nlen_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_alen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_slen_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_dl_t1317779094::get_offset_of_sdl_data_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (MacOsArpHardware_t4198534184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1545[7] = 
{
	MacOsArpHardware_t4198534184::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (MulticastIPAddressInformation_t2475333396), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (MulticastIPAddressInformationImpl_t1150912933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1547[3] = 
{
	MulticastIPAddressInformationImpl_t1150912933::get_offset_of_address_0(),
	MulticastIPAddressInformationImpl_t1150912933::get_offset_of_is_dns_eligible_1(),
	MulticastIPAddressInformationImpl_t1150912933::get_offset_of_is_transient_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (MulticastIPAddressInformationCollection_t3111466650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1548[1] = 
{
	MulticastIPAddressInformationCollection_t3111466650::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (MulticastIPAddressInformationImplCollection_t3977501638), -1, sizeof(MulticastIPAddressInformationImplCollection_t3977501638_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1549[2] = 
{
	MulticastIPAddressInformationImplCollection_t3977501638_StaticFields::get_offset_of_Empty_1(),
	MulticastIPAddressInformationImplCollection_t3977501638::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (NetBiosNodeType_t3568904212)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1550[6] = 
{
	NetBiosNodeType_t3568904212::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (NetworkAvailabilityEventArgs_t1583703948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1551[1] = 
{
	NetworkAvailabilityEventArgs_t1583703948::get_offset_of_available_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (NetworkChange_t2716465732), -1, sizeof(NetworkChange_t2716465732_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1552[2] = 
{
	NetworkChange_t2716465732_StaticFields::get_offset_of_NetworkAddressChanged_0(),
	NetworkChange_t2716465732_StaticFields::get_offset_of_NetworkAvailabilityChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (NetworkInformationAccess_t3492676936)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1553[4] = 
{
	NetworkInformationAccess_t3492676936::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (NetworkInformationException_t2303982063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1554[1] = 
{
	NetworkInformationException_t2303982063::get_offset_of_error_code_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (NetworkInterface_t271883373), -1, sizeof(NetworkInterface_t271883373_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1555[2] = 
{
	NetworkInterface_t271883373_StaticFields::get_offset_of_windowsVer51_0(),
	NetworkInterface_t271883373_StaticFields::get_offset_of_runningOnUnix_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (UnixNetworkInterface_t2401762829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1556[7] = 
{
	UnixNetworkInterface_t2401762829::get_offset_of_ipv4stats_2(),
	UnixNetworkInterface_t2401762829::get_offset_of_ipproperties_3(),
	UnixNetworkInterface_t2401762829::get_offset_of_name_4(),
	UnixNetworkInterface_t2401762829::get_offset_of_index_5(),
	UnixNetworkInterface_t2401762829::get_offset_of_addresses_6(),
	UnixNetworkInterface_t2401762829::get_offset_of_macAddress_7(),
	UnixNetworkInterface_t2401762829::get_offset_of_type_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (LinuxNetworkInterface_t4095034716), -1, sizeof(LinuxNetworkInterface_t4095034716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1557[8] = 
{
	0,
	0,
	0,
	LinuxNetworkInterface_t4095034716::get_offset_of_type_12(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_path_13(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_operstate_path_14(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_flags_path_15(),
	LinuxNetworkInterface_t4095034716_StaticFields::get_offset_of_U3CU3Ef__switchU24map3_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { sizeof (MacOsNetworkInterface_t3969281182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1558[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (Win32NetworkInterface2_t2303857857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1559[5] = 
{
	Win32NetworkInterface2_t2303857857::get_offset_of_addr_2(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib4_3(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib6_4(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip4stats_5(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip_if_props_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (NetworkInterfaceComponent_t1400510776)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1560[3] = 
{
	NetworkInterfaceComponent_t1400510776::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (NetworkInterfaceType_t616418749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1561[26] = 
{
	NetworkInterfaceType_t616418749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (OperationalStatus_t2709089529)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1562[8] = 
{
	OperationalStatus_t2709089529::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (PhysicalAddress_t728503866), -1, sizeof(PhysicalAddress_t728503866_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1563[3] = 
{
	0,
	PhysicalAddress_t728503866_StaticFields::get_offset_of_None_1(),
	PhysicalAddress_t728503866::get_offset_of_bytes_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (Ping_t2815018315), -1, sizeof(Ping_t2815018315_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1564[11] = 
{
	0,
	0,
	0,
	0,
	Ping_t2815018315_StaticFields::get_offset_of_PingBinPaths_8(),
	Ping_t2815018315_StaticFields::get_offset_of_PingBinPath_9(),
	Ping_t2815018315_StaticFields::get_offset_of_default_buffer_10(),
	Ping_t2815018315_StaticFields::get_offset_of_canSendPrivileged_11(),
	Ping_t2815018315::get_offset_of_worker_12(),
	Ping_t2815018315::get_offset_of_user_async_state_13(),
	Ping_t2815018315::get_offset_of_PingCompleted_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (cap_user_header_t_t332549070)+ sizeof (RuntimeObject), sizeof(cap_user_header_t_t332549070 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1565[2] = 
{
	cap_user_header_t_t332549070::get_offset_of_version_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	cap_user_header_t_t332549070::get_offset_of_pid_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (cap_user_data_t_t1073178338)+ sizeof (RuntimeObject), sizeof(cap_user_data_t_t1073178338 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1566[3] = 
{
	cap_user_data_t_t1073178338::get_offset_of_effective_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	cap_user_data_t_t1073178338::get_offset_of_permitted_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	cap_user_data_t_t1073178338::get_offset_of_inheritable_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (IcmpMessage_t2301849922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1567[1] = 
{
	IcmpMessage_t2301849922::get_offset_of_bytes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (U3CSendAsyncU3Ec__AnonStorey6_t600207981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1568[5] = 
{
	U3CSendAsyncU3Ec__AnonStorey6_t600207981::get_offset_of_address_0(),
	U3CSendAsyncU3Ec__AnonStorey6_t600207981::get_offset_of_timeout_1(),
	U3CSendAsyncU3Ec__AnonStorey6_t600207981::get_offset_of_buffer_2(),
	U3CSendAsyncU3Ec__AnonStorey6_t600207981::get_offset_of_options_3(),
	U3CSendAsyncU3Ec__AnonStorey6_t600207981::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (PingCompletedEventArgs_t4089792803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1569[1] = 
{
	PingCompletedEventArgs_t4089792803::get_offset_of_reply_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (PingException_t245080497), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (PingOptions_t3156337970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1571[2] = 
{
	PingOptions_t3156337970::get_offset_of_ttl_0(),
	PingOptions_t3156337970::get_offset_of_dont_fragment_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (PingReply_t1006004616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1572[5] = 
{
	PingReply_t1006004616::get_offset_of_address_0(),
	PingReply_t1006004616::get_offset_of_buffer_1(),
	PingReply_t1006004616::get_offset_of_options_2(),
	PingReply_t1006004616::get_offset_of_rtt_3(),
	PingReply_t1006004616::get_offset_of_status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (PrefixOrigin_t3595255581)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1573[6] = 
{
	PrefixOrigin_t3595255581::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (SuffixOrigin_t2265911283)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1574[7] = 
{
	SuffixOrigin_t2265911283::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (TcpConnectionInformation_t457447727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (TcpConnectionInformationImpl_t3711867821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1576[3] = 
{
	TcpConnectionInformationImpl_t3711867821::get_offset_of_local_0(),
	TcpConnectionInformationImpl_t3711867821::get_offset_of_remote_1(),
	TcpConnectionInformationImpl_t3711867821::get_offset_of_state_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (TcpState_t4044211350)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1577[14] = 
{
	TcpState_t4044211350::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (TcpStatistics_t3354500482), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (MibTcpStatistics_t2831962491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1579[1] = 
{
	MibTcpStatistics_t2831962491::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (Win32TcpStatistics_t1889610183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1580[1] = 
{
	Win32TcpStatistics_t1889610183::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (Win32_MIB_TCPSTATS_t1555608930)+ sizeof (RuntimeObject), sizeof(Win32_MIB_TCPSTATS_t1555608930 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1581[15] = 
{
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_RtoAlgorithm_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_RtoMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_RtoMax_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_MaxConn_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_ActiveOpens_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_PassiveOpens_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_AttemptFails_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_EstabResets_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_CurrEstab_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_InSegs_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_OutSegs_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_RetransSegs_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_InErrs_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_OutRsts_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_TCPSTATS_t1555608930::get_offset_of_NumConns_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (UdpStatistics_t827909905), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (MibUdpStatistics_t3757832095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1583[1] = 
{
	MibUdpStatistics_t3757832095::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (Win32UdpStatistics_t358088259), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1584[1] = 
{
	Win32UdpStatistics_t358088259::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (Win32_MIB_UDPSTATS_t1540601281)+ sizeof (RuntimeObject), sizeof(Win32_MIB_UDPSTATS_t1540601281 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1585[5] = 
{
	Win32_MIB_UDPSTATS_t1540601281::get_offset_of_InDatagrams_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t1540601281::get_offset_of_NoPorts_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t1540601281::get_offset_of_InErrors_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t1540601281::get_offset_of_OutDatagrams_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_UDPSTATS_t1540601281::get_offset_of_NumAddrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (UnicastIPAddressInformation_t2439964334), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (Win32UnicastIPAddressInformation_t3383088377), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1587[2] = 
{
	Win32UnicastIPAddressInformation_t3383088377::get_offset_of_if_index_0(),
	Win32UnicastIPAddressInformation_t3383088377::get_offset_of_info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (LinuxUnicastIPAddressInformation_t1918660316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1588[1] = 
{
	LinuxUnicastIPAddressInformation_t1918660316::get_offset_of_address_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (UnicastIPAddressInformationCollection_t2190735649), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1589[1] = 
{
	UnicastIPAddressInformationCollection_t2190735649::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (UnicastIPAddressInformationImplCollection_t580319182), -1, sizeof(UnicastIPAddressInformationImplCollection_t580319182_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1590[2] = 
{
	UnicastIPAddressInformationImplCollection_t580319182_StaticFields::get_offset_of_Empty_1(),
	UnicastIPAddressInformationImplCollection_t580319182::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (Win32_FIXED_INFO_t1299345856), sizeof(Win32_FIXED_INFO_t1299345856_marshaled_pinvoke), sizeof(Win32_FIXED_INFO_t1299345856_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1591[13] = 
{
	0,
	0,
	0,
	Win32_FIXED_INFO_t1299345856_StaticFields::get_offset_of_fixed_info_3(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_HostName_4(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_DomainName_5(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_CurrentDnsServer_6(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_DnsServerList_7(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_NodeType_8(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_ScopeId_9(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableRouting_10(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableProxy_11(),
	Win32_FIXED_INFO_t1299345856::get_offset_of_EnableDns_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (AlignmentUnion_t208902285)+ sizeof (RuntimeObject), sizeof(AlignmentUnion_t208902285 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1592[3] = 
{
	AlignmentUnion_t208902285::get_offset_of_Alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t208902285::get_offset_of_Length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AlignmentUnion_t208902285::get_offset_of_IfIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (Win32_IP_ADAPTER_ADDRESSES_t3463526328), sizeof(Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1593[22] = 
{
	0,
	0,
	0,
	0,
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Alignment_4(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Next_5(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_AdapterName_6(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstUnicastAddress_7(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstAnycastAddress_8(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstMulticastAddress_9(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FirstDnsServerAddress_10(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_DnsSuffix_11(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Description_12(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_FriendlyName_13(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_PhysicalAddress_14(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_PhysicalAddressLength_15(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Flags_16(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Mtu_17(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_IfType_18(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_OperStatus_19(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_Ipv6IfIndex_20(),
	Win32_IP_ADAPTER_ADDRESSES_t3463526328::get_offset_of_ZoneIndices_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (Win32_IP_ADAPTER_INFO_t882755512), sizeof(Win32_IP_ADAPTER_INFO_t882755512_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1594[21] = 
{
	0,
	0,
	0,
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_Next_3(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_ComboIndex_4(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_AdapterName_5(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_Description_6(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_AddressLength_7(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_Address_8(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_Index_9(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_Type_10(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_DhcpEnabled_11(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_CurrentIpAddress_12(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_IpAddressList_13(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_GatewayList_14(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_DhcpServer_15(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_HaveWins_16(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_PrimaryWinsServer_17(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_SecondaryWinsServer_18(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_LeaseObtained_19(),
	Win32_IP_ADAPTER_INFO_t882755512::get_offset_of_LeaseExpires_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (Win32_MIB_IFROW_t851471770)+ sizeof (RuntimeObject), sizeof(Win32_MIB_IFROW_t851471770_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1595[27] = 
{
	0,
	0,
	0,
	Win32_MIB_IFROW_t851471770::get_offset_of_Name_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Index_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Type_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Mtu_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Speed_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_PhysAddrLen_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_PhysAddr_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_AdminStatus_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OperStatus_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_LastChange_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InOctets_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InUcastPkts_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InNUcastPkts_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InDiscards_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InErrors_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_InUnknownProtos_18() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutOctets_19() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutUcastPkts_20() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutNUcastPkts_21() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutDiscards_22() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutErrors_23() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_OutQLen_24() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_DescrLen_25() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_MIB_IFROW_t851471770::get_offset_of_Descr_26() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (Win32_IP_ADDR_STRING_t1213417184)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1596[4] = 
{
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_Next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_IpAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_IpMask_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADDR_STRING_t1213417184::get_offset_of_Context_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (Win32LengthFlagsUnion_t1383639798)+ sizeof (RuntimeObject), sizeof(Win32LengthFlagsUnion_t1383639798 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1597[4] = 
{
	0,
	0,
	Win32LengthFlagsUnion_t1383639798::get_offset_of_Length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32LengthFlagsUnion_t1383639798::get_offset_of_Flags_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1598[3] = 
{
	Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_ANYCAST_ADDRESS_t513393589::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100)+ sizeof (RuntimeObject), sizeof(Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1599[3] = 
{
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_LengthFlags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Win32_IP_ADAPTER_DNS_SERVER_ADDRESS_t3053140100::get_offset_of_Address_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
