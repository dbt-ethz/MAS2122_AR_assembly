#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData>
struct Dictionary_2_tDFD5C82D651ED4D409463D8451BCDAC820BD8DF5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// ActivateGrabbing
struct ActivateGrabbing_tC13D9D70F9C9A40E424A5E55D61E21DB1DEF975B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.UI.ConstraintManager
struct ConstraintManager_tB498067CBB26F32CD31DF74EA479B4285C57E6A7;
// DisplayUnits
struct DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646;
// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager
struct ElasticsManager_t7D7D96A5422F53A58169958B43DAC2B9F25E5FA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic
struct ITransformSmoothingLogic_tE1FA33BA714A25BC34BDEBD26E64C4C5FB196B12;
// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent
struct ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306;
// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic
struct ManipulationMoveLogic_t1FB747DF8994FCA077D69C7EE7357990E3CB2977;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic
struct TwoHandRotateLogic_t4E8257EF107292C2CD281ED21146185B012FA8E6;
// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic
struct TwoHandScaleLogic_tDC987BEC1856D0C731F738711E979B1EEDF9D392;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral7F391E96818718EBA0C4638CF3840ACE12DEC46F;
IL2CPP_EXTERN_C String_t* _stringLiteral9DED6EBF688871F96ED848EBA046DA0B3CD61CB2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603_m3272FE00EB034C29992B53EC3455DD3A336AE793_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags
struct ManipulationHandFlags_t0D3858BF3502CED537AF36600D4B25C2FB48A63F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ManipulationHandFlags_t0D3858BF3502CED537AF36600D4B25C2FB48A63F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags
struct TransformFlags_tEC5583E2C1259EA9F01E6ABF6B5810E4B1A53EC9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TransformFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TransformFlags_tEC5583E2C1259EA9F01E6ABF6B5810E4B1A53EC9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType
struct ReleaseBehaviorType_tE1AAEC25A22A3B1FE3CA1CD12981200646E8BE23 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReleaseBehaviorType_tE1AAEC25A22A3B1FE3CA1CD12981200646E8BE23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType
struct RotateInOneHandType_t5E4CCD61785EB785AA1C15ECDA44C6104449A14D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotateInOneHandType_t5E4CCD61785EB785AA1C15ECDA44C6104449A14D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ActivateGrabbing
struct ActivateGrabbing_tC13D9D70F9C9A40E424A5E55D61E21DB1DEF975B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator ActivateGrabbing::manipulater
	ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * ___manipulater_4;

public:
	inline static int32_t get_offset_of_manipulater_4() { return static_cast<int32_t>(offsetof(ActivateGrabbing_tC13D9D70F9C9A40E424A5E55D61E21DB1DEF975B, ___manipulater_4)); }
	inline ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * get_manipulater_4() const { return ___manipulater_4; }
	inline ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 ** get_address_of_manipulater_4() { return &___manipulater_4; }
	inline void set_manipulater_4(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * value)
	{
		___manipulater_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manipulater_4), (void*)value);
	}
};


// DisplayUnits
struct DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 DisplayUnits::currentIndex
	int32_t ___currentIndex_4;
	// UnityEngine.GameObject DisplayUnits::currentUnit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentUnit_5;
	// UnityEngine.GameObject DisplayUnits::previousUnit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___previousUnit_6;
	// UnityEngine.GameObject DisplayUnits::parent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parent_7;
	// System.Int32 DisplayUnits::listLength
	int32_t ___listLength_8;

public:
	inline static int32_t get_offset_of_currentIndex_4() { return static_cast<int32_t>(offsetof(DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646, ___currentIndex_4)); }
	inline int32_t get_currentIndex_4() const { return ___currentIndex_4; }
	inline int32_t* get_address_of_currentIndex_4() { return &___currentIndex_4; }
	inline void set_currentIndex_4(int32_t value)
	{
		___currentIndex_4 = value;
	}

	inline static int32_t get_offset_of_currentUnit_5() { return static_cast<int32_t>(offsetof(DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646, ___currentUnit_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentUnit_5() const { return ___currentUnit_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentUnit_5() { return &___currentUnit_5; }
	inline void set_currentUnit_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentUnit_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUnit_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousUnit_6() { return static_cast<int32_t>(offsetof(DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646, ___previousUnit_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_previousUnit_6() const { return ___previousUnit_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_previousUnit_6() { return &___previousUnit_6; }
	inline void set_previousUnit_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___previousUnit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousUnit_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646, ___parent_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_parent_7() const { return ___parent_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}

	inline static int32_t get_offset_of_listLength_8() { return static_cast<int32_t>(offsetof(DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646, ___listLength_8)); }
	inline int32_t get_listLength_8() const { return ___listLength_8; }
	inline int32_t* get_address_of_listLength_8() { return &___listLength_8; }
	inline void set_listLength_8(int32_t value)
	{
		___listLength_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator
struct ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::hostTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hostTransform_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::manipulationType
	int32_t ___manipulationType_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TransformFlags Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::twoHandedManipulationType
	int32_t ___twoHandedManipulationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::allowFarManipulation
	bool ___allowFarManipulation_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::useForcesForNearManipulation
	bool ___useForcesForNearManipulation_8;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeNear
	int32_t ___oneHandRotationModeNear_9;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/RotateInOneHandType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::oneHandRotationModeFar
	int32_t ___oneHandRotationModeFar_10;
	// Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/ReleaseBehaviorType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::releaseBehavior
	int32_t ___releaseBehavior_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::transformSmoothingLogicType
	SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * ___transformSmoothingLogicType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingFar
	bool ___smoothingFar_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingNear
	bool ___smoothingNear_14;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLerpTime
	float ___moveLerpTime_15;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLerpTime
	float ___rotateLerpTime_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLerpTime
	float ___scaleLerpTime_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::enableConstraints
	bool ___enableConstraints_18;
	// Microsoft.MixedReality.Toolkit.UI.ConstraintManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::constraintsManager
	ConstraintManager_tB498067CBB26F32CD31DF74EA479B4285C57E6A7 * ___constraintsManager_19;
	// Microsoft.MixedReality.Toolkit.Experimental.Physics.ElasticsManager Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::elasticsManager
	ElasticsManager_t7D7D96A5422F53A58169958B43DAC2B9F25E5FA1 * ___elasticsManager_20;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationStarted
	ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * ___onManipulationStarted_21;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onManipulationEnded
	ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * ___onManipulationEnded_22;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverEntered
	ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * ___onHoverEntered_23;
	// Microsoft.MixedReality.Toolkit.UI.ManipulationEvent Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::onHoverExited
	ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * ___onHoverExited_24;
	// Microsoft.MixedReality.Toolkit.Physics.ManipulationMoveLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::moveLogic
	ManipulationMoveLogic_t1FB747DF8994FCA077D69C7EE7357990E3CB2977 * ___moveLogic_25;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandScaleLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::scaleLogic
	TwoHandScaleLogic_tDC987BEC1856D0C731F738711E979B1EEDF9D392 * ___scaleLogic_26;
	// Microsoft.MixedReality.Toolkit.Physics.TwoHandRotateLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rotateLogic
	TwoHandRotateLogic_t4E8257EF107292C2CD281ED21146185B012FA8E6 * ___rotateLogic_27;
	// Microsoft.MixedReality.Toolkit.Utilities.ITransformSmoothingLogic Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::smoothingLogic
	RuntimeObject* ___smoothingLogic_28;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.UI.ObjectManipulator/PointerData> Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::pointerIdToPointerMap
	Dictionary_2_tDFD5C82D651ED4D409463D8451BCDAC820BD8DF5 * ___pointerIdToPointerMap_29;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::objectToGripRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___objectToGripRotation_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isNearManipulation
	bool ___isNearManipulation_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isManipulationStarted
	bool ___isManipulationStarted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::isSmoothing
	bool ___isSmoothing_33;
	// UnityEngine.Rigidbody Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rigidBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidBody_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasGravity
	bool ___wasGravity_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::wasKinematic
	bool ___wasKinematic_36;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::leftHandRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftHandRotation_37;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.UI.ObjectManipulator::rightHandRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightHandRotation_38;

public:
	inline static int32_t get_offset_of_hostTransform_4() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___hostTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hostTransform_4() const { return ___hostTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hostTransform_4() { return &___hostTransform_4; }
	inline void set_hostTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hostTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_manipulationType_5() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___manipulationType_5)); }
	inline int32_t get_manipulationType_5() const { return ___manipulationType_5; }
	inline int32_t* get_address_of_manipulationType_5() { return &___manipulationType_5; }
	inline void set_manipulationType_5(int32_t value)
	{
		___manipulationType_5 = value;
	}

	inline static int32_t get_offset_of_twoHandedManipulationType_6() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___twoHandedManipulationType_6)); }
	inline int32_t get_twoHandedManipulationType_6() const { return ___twoHandedManipulationType_6; }
	inline int32_t* get_address_of_twoHandedManipulationType_6() { return &___twoHandedManipulationType_6; }
	inline void set_twoHandedManipulationType_6(int32_t value)
	{
		___twoHandedManipulationType_6 = value;
	}

	inline static int32_t get_offset_of_allowFarManipulation_7() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___allowFarManipulation_7)); }
	inline bool get_allowFarManipulation_7() const { return ___allowFarManipulation_7; }
	inline bool* get_address_of_allowFarManipulation_7() { return &___allowFarManipulation_7; }
	inline void set_allowFarManipulation_7(bool value)
	{
		___allowFarManipulation_7 = value;
	}

	inline static int32_t get_offset_of_useForcesForNearManipulation_8() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___useForcesForNearManipulation_8)); }
	inline bool get_useForcesForNearManipulation_8() const { return ___useForcesForNearManipulation_8; }
	inline bool* get_address_of_useForcesForNearManipulation_8() { return &___useForcesForNearManipulation_8; }
	inline void set_useForcesForNearManipulation_8(bool value)
	{
		___useForcesForNearManipulation_8 = value;
	}

	inline static int32_t get_offset_of_oneHandRotationModeNear_9() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___oneHandRotationModeNear_9)); }
	inline int32_t get_oneHandRotationModeNear_9() const { return ___oneHandRotationModeNear_9; }
	inline int32_t* get_address_of_oneHandRotationModeNear_9() { return &___oneHandRotationModeNear_9; }
	inline void set_oneHandRotationModeNear_9(int32_t value)
	{
		___oneHandRotationModeNear_9 = value;
	}

	inline static int32_t get_offset_of_oneHandRotationModeFar_10() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___oneHandRotationModeFar_10)); }
	inline int32_t get_oneHandRotationModeFar_10() const { return ___oneHandRotationModeFar_10; }
	inline int32_t* get_address_of_oneHandRotationModeFar_10() { return &___oneHandRotationModeFar_10; }
	inline void set_oneHandRotationModeFar_10(int32_t value)
	{
		___oneHandRotationModeFar_10 = value;
	}

	inline static int32_t get_offset_of_releaseBehavior_11() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___releaseBehavior_11)); }
	inline int32_t get_releaseBehavior_11() const { return ___releaseBehavior_11; }
	inline int32_t* get_address_of_releaseBehavior_11() { return &___releaseBehavior_11; }
	inline void set_releaseBehavior_11(int32_t value)
	{
		___releaseBehavior_11 = value;
	}

	inline static int32_t get_offset_of_transformSmoothingLogicType_12() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___transformSmoothingLogicType_12)); }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * get_transformSmoothingLogicType_12() const { return ___transformSmoothingLogicType_12; }
	inline SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E ** get_address_of_transformSmoothingLogicType_12() { return &___transformSmoothingLogicType_12; }
	inline void set_transformSmoothingLogicType_12(SystemType_t82325BD837C1E903F236C2282E72378ED2E2892E * value)
	{
		___transformSmoothingLogicType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformSmoothingLogicType_12), (void*)value);
	}

	inline static int32_t get_offset_of_smoothingFar_13() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___smoothingFar_13)); }
	inline bool get_smoothingFar_13() const { return ___smoothingFar_13; }
	inline bool* get_address_of_smoothingFar_13() { return &___smoothingFar_13; }
	inline void set_smoothingFar_13(bool value)
	{
		___smoothingFar_13 = value;
	}

	inline static int32_t get_offset_of_smoothingNear_14() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___smoothingNear_14)); }
	inline bool get_smoothingNear_14() const { return ___smoothingNear_14; }
	inline bool* get_address_of_smoothingNear_14() { return &___smoothingNear_14; }
	inline void set_smoothingNear_14(bool value)
	{
		___smoothingNear_14 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_15() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___moveLerpTime_15)); }
	inline float get_moveLerpTime_15() const { return ___moveLerpTime_15; }
	inline float* get_address_of_moveLerpTime_15() { return &___moveLerpTime_15; }
	inline void set_moveLerpTime_15(float value)
	{
		___moveLerpTime_15 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_16() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___rotateLerpTime_16)); }
	inline float get_rotateLerpTime_16() const { return ___rotateLerpTime_16; }
	inline float* get_address_of_rotateLerpTime_16() { return &___rotateLerpTime_16; }
	inline void set_rotateLerpTime_16(float value)
	{
		___rotateLerpTime_16 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_17() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___scaleLerpTime_17)); }
	inline float get_scaleLerpTime_17() const { return ___scaleLerpTime_17; }
	inline float* get_address_of_scaleLerpTime_17() { return &___scaleLerpTime_17; }
	inline void set_scaleLerpTime_17(float value)
	{
		___scaleLerpTime_17 = value;
	}

	inline static int32_t get_offset_of_enableConstraints_18() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___enableConstraints_18)); }
	inline bool get_enableConstraints_18() const { return ___enableConstraints_18; }
	inline bool* get_address_of_enableConstraints_18() { return &___enableConstraints_18; }
	inline void set_enableConstraints_18(bool value)
	{
		___enableConstraints_18 = value;
	}

	inline static int32_t get_offset_of_constraintsManager_19() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___constraintsManager_19)); }
	inline ConstraintManager_tB498067CBB26F32CD31DF74EA479B4285C57E6A7 * get_constraintsManager_19() const { return ___constraintsManager_19; }
	inline ConstraintManager_tB498067CBB26F32CD31DF74EA479B4285C57E6A7 ** get_address_of_constraintsManager_19() { return &___constraintsManager_19; }
	inline void set_constraintsManager_19(ConstraintManager_tB498067CBB26F32CD31DF74EA479B4285C57E6A7 * value)
	{
		___constraintsManager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constraintsManager_19), (void*)value);
	}

	inline static int32_t get_offset_of_elasticsManager_20() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___elasticsManager_20)); }
	inline ElasticsManager_t7D7D96A5422F53A58169958B43DAC2B9F25E5FA1 * get_elasticsManager_20() const { return ___elasticsManager_20; }
	inline ElasticsManager_t7D7D96A5422F53A58169958B43DAC2B9F25E5FA1 ** get_address_of_elasticsManager_20() { return &___elasticsManager_20; }
	inline void set_elasticsManager_20(ElasticsManager_t7D7D96A5422F53A58169958B43DAC2B9F25E5FA1 * value)
	{
		___elasticsManager_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elasticsManager_20), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationStarted_21() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___onManipulationStarted_21)); }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * get_onManipulationStarted_21() const { return ___onManipulationStarted_21; }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 ** get_address_of_onManipulationStarted_21() { return &___onManipulationStarted_21; }
	inline void set_onManipulationStarted_21(ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * value)
	{
		___onManipulationStarted_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationStarted_21), (void*)value);
	}

	inline static int32_t get_offset_of_onManipulationEnded_22() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___onManipulationEnded_22)); }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * get_onManipulationEnded_22() const { return ___onManipulationEnded_22; }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 ** get_address_of_onManipulationEnded_22() { return &___onManipulationEnded_22; }
	inline void set_onManipulationEnded_22(ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * value)
	{
		___onManipulationEnded_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onManipulationEnded_22), (void*)value);
	}

	inline static int32_t get_offset_of_onHoverEntered_23() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___onHoverEntered_23)); }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * get_onHoverEntered_23() const { return ___onHoverEntered_23; }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 ** get_address_of_onHoverEntered_23() { return &___onHoverEntered_23; }
	inline void set_onHoverEntered_23(ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * value)
	{
		___onHoverEntered_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoverEntered_23), (void*)value);
	}

	inline static int32_t get_offset_of_onHoverExited_24() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___onHoverExited_24)); }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * get_onHoverExited_24() const { return ___onHoverExited_24; }
	inline ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 ** get_address_of_onHoverExited_24() { return &___onHoverExited_24; }
	inline void set_onHoverExited_24(ManipulationEvent_t6E5AE632D0B5A8CF4AB1228F6B29181CB2B14306 * value)
	{
		___onHoverExited_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHoverExited_24), (void*)value);
	}

	inline static int32_t get_offset_of_moveLogic_25() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___moveLogic_25)); }
	inline ManipulationMoveLogic_t1FB747DF8994FCA077D69C7EE7357990E3CB2977 * get_moveLogic_25() const { return ___moveLogic_25; }
	inline ManipulationMoveLogic_t1FB747DF8994FCA077D69C7EE7357990E3CB2977 ** get_address_of_moveLogic_25() { return &___moveLogic_25; }
	inline void set_moveLogic_25(ManipulationMoveLogic_t1FB747DF8994FCA077D69C7EE7357990E3CB2977 * value)
	{
		___moveLogic_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveLogic_25), (void*)value);
	}

	inline static int32_t get_offset_of_scaleLogic_26() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___scaleLogic_26)); }
	inline TwoHandScaleLogic_tDC987BEC1856D0C731F738711E979B1EEDF9D392 * get_scaleLogic_26() const { return ___scaleLogic_26; }
	inline TwoHandScaleLogic_tDC987BEC1856D0C731F738711E979B1EEDF9D392 ** get_address_of_scaleLogic_26() { return &___scaleLogic_26; }
	inline void set_scaleLogic_26(TwoHandScaleLogic_tDC987BEC1856D0C731F738711E979B1EEDF9D392 * value)
	{
		___scaleLogic_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleLogic_26), (void*)value);
	}

	inline static int32_t get_offset_of_rotateLogic_27() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___rotateLogic_27)); }
	inline TwoHandRotateLogic_t4E8257EF107292C2CD281ED21146185B012FA8E6 * get_rotateLogic_27() const { return ___rotateLogic_27; }
	inline TwoHandRotateLogic_t4E8257EF107292C2CD281ED21146185B012FA8E6 ** get_address_of_rotateLogic_27() { return &___rotateLogic_27; }
	inline void set_rotateLogic_27(TwoHandRotateLogic_t4E8257EF107292C2CD281ED21146185B012FA8E6 * value)
	{
		___rotateLogic_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateLogic_27), (void*)value);
	}

	inline static int32_t get_offset_of_smoothingLogic_28() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___smoothingLogic_28)); }
	inline RuntimeObject* get_smoothingLogic_28() const { return ___smoothingLogic_28; }
	inline RuntimeObject** get_address_of_smoothingLogic_28() { return &___smoothingLogic_28; }
	inline void set_smoothingLogic_28(RuntimeObject* value)
	{
		___smoothingLogic_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smoothingLogic_28), (void*)value);
	}

	inline static int32_t get_offset_of_pointerIdToPointerMap_29() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___pointerIdToPointerMap_29)); }
	inline Dictionary_2_tDFD5C82D651ED4D409463D8451BCDAC820BD8DF5 * get_pointerIdToPointerMap_29() const { return ___pointerIdToPointerMap_29; }
	inline Dictionary_2_tDFD5C82D651ED4D409463D8451BCDAC820BD8DF5 ** get_address_of_pointerIdToPointerMap_29() { return &___pointerIdToPointerMap_29; }
	inline void set_pointerIdToPointerMap_29(Dictionary_2_tDFD5C82D651ED4D409463D8451BCDAC820BD8DF5 * value)
	{
		___pointerIdToPointerMap_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerIdToPointerMap_29), (void*)value);
	}

	inline static int32_t get_offset_of_objectToGripRotation_30() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___objectToGripRotation_30)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_objectToGripRotation_30() const { return ___objectToGripRotation_30; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_objectToGripRotation_30() { return &___objectToGripRotation_30; }
	inline void set_objectToGripRotation_30(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___objectToGripRotation_30 = value;
	}

	inline static int32_t get_offset_of_isNearManipulation_31() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___isNearManipulation_31)); }
	inline bool get_isNearManipulation_31() const { return ___isNearManipulation_31; }
	inline bool* get_address_of_isNearManipulation_31() { return &___isNearManipulation_31; }
	inline void set_isNearManipulation_31(bool value)
	{
		___isNearManipulation_31 = value;
	}

	inline static int32_t get_offset_of_isManipulationStarted_32() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___isManipulationStarted_32)); }
	inline bool get_isManipulationStarted_32() const { return ___isManipulationStarted_32; }
	inline bool* get_address_of_isManipulationStarted_32() { return &___isManipulationStarted_32; }
	inline void set_isManipulationStarted_32(bool value)
	{
		___isManipulationStarted_32 = value;
	}

	inline static int32_t get_offset_of_isSmoothing_33() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___isSmoothing_33)); }
	inline bool get_isSmoothing_33() const { return ___isSmoothing_33; }
	inline bool* get_address_of_isSmoothing_33() { return &___isSmoothing_33; }
	inline void set_isSmoothing_33(bool value)
	{
		___isSmoothing_33 = value;
	}

	inline static int32_t get_offset_of_rigidBody_34() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___rigidBody_34)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidBody_34() const { return ___rigidBody_34; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidBody_34() { return &___rigidBody_34; }
	inline void set_rigidBody_34(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidBody_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_34), (void*)value);
	}

	inline static int32_t get_offset_of_wasGravity_35() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___wasGravity_35)); }
	inline bool get_wasGravity_35() const { return ___wasGravity_35; }
	inline bool* get_address_of_wasGravity_35() { return &___wasGravity_35; }
	inline void set_wasGravity_35(bool value)
	{
		___wasGravity_35 = value;
	}

	inline static int32_t get_offset_of_wasKinematic_36() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___wasKinematic_36)); }
	inline bool get_wasKinematic_36() const { return ___wasKinematic_36; }
	inline bool* get_address_of_wasKinematic_36() { return &___wasKinematic_36; }
	inline void set_wasKinematic_36(bool value)
	{
		___wasKinematic_36 = value;
	}

	inline static int32_t get_offset_of_leftHandRotation_37() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___leftHandRotation_37)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftHandRotation_37() const { return ___leftHandRotation_37; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftHandRotation_37() { return &___leftHandRotation_37; }
	inline void set_leftHandRotation_37(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftHandRotation_37 = value;
	}

	inline static int32_t get_offset_of_rightHandRotation_38() { return static_cast<int32_t>(offsetof(ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603, ___rightHandRotation_38)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightHandRotation_38() const { return ___rightHandRotation_38; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightHandRotation_38() { return &___rightHandRotation_38; }
	inline void set_rightHandRotation_38(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightHandRotation_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.UI.ObjectManipulator>()
inline ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * Component_GetComponent_TisObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603_m3272FE00EB034C29992B53EC3455DD3A336AE793 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
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
// System.Void ActivateGrabbing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateGrabbing_Start_m3FCF3E02E1D23C3ECFC3202DC3A2A3132113FF08 (ActivateGrabbing_tC13D9D70F9C9A40E424A5E55D61E21DB1DEF975B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603_m3272FE00EB034C29992B53EC3455DD3A336AE793_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manipulater = this.GetComponent<ObjectManipulator>();
		ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * L_0;
		L_0 = Component_GetComponent_TisObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603_m3272FE00EB034C29992B53EC3455DD3A336AE793(__this, /*hidden argument*/Component_GetComponent_TisObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603_m3272FE00EB034C29992B53EC3455DD3A336AE793_RuntimeMethod_var);
		__this->set_manipulater_4(L_0);
		// }
		return;
	}
}
// System.Void ActivateGrabbing::ActivateTrueFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateGrabbing_ActivateTrueFalse_m08E0BD363B3B941CFE55CCD5360FC6EBF8648948 (ActivateGrabbing_tC13D9D70F9C9A40E424A5E55D61E21DB1DEF975B * __this, const RuntimeMethod* method)
{
	{
		// manipulater.enabled = !manipulater.enabled;
		ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * L_0 = __this->get_manipulater_4();
		ObjectManipulator_tFF6ABCD9F9411E6099F8714B4F798FC3FE987603 * L_1 = __this->get_manipulater_4();
		NullCheck(L_1);
		bool L_2;
		L_2 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActivateGrabbing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActivateGrabbing__ctor_m96BF529096E75964389ADF710572A3B655325B42 (ActivateGrabbing_tC13D9D70F9C9A40E424A5E55D61E21DB1DEF975B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DisplayUnits::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayUnits_Start_mAF680A481D0CE28F4998DCCF8C37022DF567265E (DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Transform child in transform.Find("units"))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0018:
		{
			// foreach (Transform child in transform.Find("units"))
			RuntimeObject* L_3 = V_0;
			NullCheck(L_3);
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			// listLength += 1;
			int32_t L_5 = __this->get_listLength_8();
			__this->set_listLength_8(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		}

IL_0032:
		{
			// foreach (Transform child in transform.Find("units"))
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0018;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// parent = GameObject.Find("units");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4, /*hidden argument*/NULL);
		__this->set_parent_7(L_11);
		// }
		return;
	}
}
// System.Void DisplayUnits::displayOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayUnits_displayOnOff_m21BD7C2961C38755A0DB7CC8507EFC4C0C74AA05 (DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646 * __this, const RuntimeMethod* method)
{
	{
		// parent.SetActive(!parent.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_parent_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_parent_7();
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisplayUnits::GoNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayUnits_GoNext_mB10C3EC7C8E32E47A7304CB357515FB37F15AD74 (DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F391E96818718EBA0C4638CF3840ACE12DEC46F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (currentIndex >= listLength) Debug.Log("It is already the last unit!");
		int32_t L_0 = __this->get_currentIndex_4();
		int32_t L_1 = __this->get_listLength_8();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		// if (currentIndex >= listLength) Debug.Log("It is already the last unit!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7F391E96818718EBA0C4638CF3840ACE12DEC46F, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		// currentIndex += 1;
		int32_t L_2 = __this->get_currentIndex_4();
		__this->set_currentIndex_4(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// if (currentIndex > 1)
		int32_t L_3 = __this->get_currentIndex_4();
		if ((((int32_t)L_3) <= ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		// previousUnit = currentUnit;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_currentUnit_5();
		__this->set_previousUnit_6(L_4);
	}

IL_003c:
	{
		// string currentName = currentIndex.ToString();
		int32_t* L_5 = __this->get_address_of_currentIndex_4();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// currentUnit = this.transform.Find("units").Find(currentName).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_7, _stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4, /*hidden argument*/NULL);
		String_t* L_9 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		__this->set_currentUnit_5(L_11);
		// currentUnit.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_currentUnit_5();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisplayUnits::GoPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayUnits_GoPrevious_m3B6BDCD36432829776E93E071E6B52DFDC1673B5 (DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DED6EBF688871F96ED848EBA046DA0B3CD61CB2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (currentIndex <= 1) Debug.Log("It is already the first unit!");
		int32_t L_0 = __this->get_currentIndex_4();
		if ((((int32_t)L_0) > ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		// if (currentIndex <= 1) Debug.Log("It is already the first unit!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9DED6EBF688871F96ED848EBA046DA0B3CD61CB2, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		// currentUnit.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_currentUnit_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// currentIndex -= 1;
		int32_t L_2 = __this->get_currentIndex_4();
		__this->set_currentIndex_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		// currentUnit = previousUnit;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_previousUnit_6();
		__this->set_currentUnit_5(L_3);
		// if (currentIndex > 1)
		int32_t L_4 = __this->get_currentIndex_4();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		// string previousName = (currentIndex - 1).ToString();
		int32_t L_5 = __this->get_currentIndex_4();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
		// previousUnit = this.transform.Find("units").Find(previousName).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_7, _stringLiteral234FA063FA291928312282091F9E3E0C3A6F1CC4, /*hidden argument*/NULL);
		String_t* L_9 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		__this->set_previousUnit_6(L_11);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void DisplayUnits::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayUnits__ctor_mBDD97BE237F59B473BE2A0873E76F693CC9A5C4C (DisplayUnits_tE216E11CD66BE9CDE9CD88ED32C005DF09A09646 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
