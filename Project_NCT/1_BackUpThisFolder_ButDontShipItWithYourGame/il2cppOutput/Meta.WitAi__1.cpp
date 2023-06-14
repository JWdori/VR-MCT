#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Meta.WitAi.CallbackHandlers.ConfidenceRange[]
struct ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.String
struct String_t;
// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B;
// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32;
// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E;
// Meta.WitAi.VoiceService
struct VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1;
// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C;
// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581;
// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098;
// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
IL2CPP_EXTERN_C String_t* _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Meta.WitAi.CallbackHandlers.FormattedValueEvents
struct FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.FormattedValueEvents::format
	String_t* ___format_0;
	// Meta.WitAi.CallbackHandlers.ValueEvent Meta.WitAi.CallbackHandlers.FormattedValueEvents::onFormattedValueEvent
	ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* ___onFormattedValueEvent_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// Meta.WitAi.CallbackHandlers.ValuePathMatcher
struct ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E  : public RuntimeObject
{
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::path
	String_t* ___path_0;
	// Meta.WitAi.Data.WitValue Meta.WitAi.CallbackHandlers.ValuePathMatcher::witValueReference
	WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* ___witValueReference_1;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::contentRequired
	bool ___contentRequired_2;
	// Meta.WitAi.CallbackHandlers.MatchMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchMethod
	int32_t ___matchMethod_3;
	// Meta.WitAi.CallbackHandlers.ComparisonMethod Meta.WitAi.CallbackHandlers.ValuePathMatcher::comparisonMethod
	int32_t ___comparisonMethod_4;
	// System.String Meta.WitAi.CallbackHandlers.ValuePathMatcher::matchValue
	String_t* ___matchValue_5;
	// System.Double Meta.WitAi.CallbackHandlers.ValuePathMatcher::floatingPointComparisonTolerance
	double ___floatingPointComparisonTolerance_6;
	// System.Boolean Meta.WitAi.CallbackHandlers.ValuePathMatcher::allowConfidenceOverlap
	bool ___allowConfidenceOverlap_7;
	// Meta.WitAi.CallbackHandlers.ConfidenceRange[] Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidenceRanges
	ConfidenceRangeU5BU5D_t436B72D1C2A21AE91F57767E7CCA104C79700583* ___confidenceRanges_8;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::pathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___pathReference_9;
	// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::confidencePathReference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___confidencePathReference_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Meta.WitAi.Json.WitResponseNode
struct WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C  : public RuntimeObject
{
};

// Meta.WitAi.WitResponseReference
struct WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581  : public RuntimeObject
{
	// Meta.WitAi.WitResponseReference Meta.WitAi.WitResponseReference::child
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___child_0;
	// System.String Meta.WitAi.WitResponseReference::path
	String_t* ___path_1;
};

// UnityEngine.Events.UnityEvent`1<System.String[]>
struct UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// Meta.WitAi.CallbackHandlers.MultiValueEvent
struct MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06  : public UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// Meta.WitAi.Utilities.StringEvent
struct StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.CallbackHandlers.ValueEvent
struct ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Meta.WitAi.Data.WitValue
struct WitValue_t62896259CA1F095F305381482D891DC0E1ED1092  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Meta.WitAi.Data.WitValue::path
	String_t* ___path_4;
	// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::reference
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ___reference_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Meta.WitAi.CallbackHandlers.WitResponseHandler
struct WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.VoiceService Meta.WitAi.CallbackHandlers.WitResponseHandler::Voice
	VoiceService_t601CB0E6879961EC1F8179A8E20EB9DD7AF6A82E* ___Voice_4;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::ValidateEarly
	bool ___ValidateEarly_5;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitResponseHandler::_validated
	bool ____validated_6;
};

// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
struct WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098  : public WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1
{
	// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::searchText
	String_t* ___searchText_7;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::exactMatch
	bool ___exactMatch_8;
	// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::useRegex
	bool ___useRegex_9;
	// Meta.WitAi.Utilities.StringEvent Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::onUtteranceMatched
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* ___onUtteranceMatched_10;
	// System.Text.RegularExpressions.Regex Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___regex_11;
};

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// Meta.WitAi.CallbackHandlers.FormattedValueEvents

// Meta.WitAi.CallbackHandlers.FormattedValueEvents

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Meta.WitAi.CallbackHandlers.ValuePathMatcher

// Meta.WitAi.CallbackHandlers.ValuePathMatcher

// Meta.WitAi.Json.WitResponseNode

// Meta.WitAi.Json.WitResponseNode

// Meta.WitAi.WitResponseReference

// Meta.WitAi.WitResponseReference

// UnityEngine.Events.UnityEvent`1<System.String[]>

// UnityEngine.Events.UnityEvent`1<System.String[]>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Int32

// System.Int32

// System.Void

// System.Void

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// Meta.WitAi.CallbackHandlers.MultiValueEvent

// Meta.WitAi.CallbackHandlers.MultiValueEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// Meta.WitAi.Utilities.StringEvent

// Meta.WitAi.Utilities.StringEvent

// Meta.WitAi.CallbackHandlers.ValueEvent

// Meta.WitAi.CallbackHandlers.ValueEvent

// Meta.WitAi.Data.WitValue

// Meta.WitAi.Data.WitValue

// Meta.WitAi.CallbackHandlers.WitResponseHandler

// Meta.WitAi.CallbackHandlers.WitResponseHandler

// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher

// Meta.WitAi.CallbackHandlers.WitUtteranceMatcher
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<System.String[]>::.ctor()
inline void UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t477222AA4CE1BE0F15900D352218F0A842BF5EFD*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.WitResultUtilities::GetWitResponseReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// Meta.WitAi.WitResponseReference Meta.WitAi.Data.WitValue::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521 (WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.Utilities.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3 (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.CallbackHandlers.WitResponseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609 (WitResponseHandler_t3BD2BF0058605CE13CD87228A0BBB9CDAFC74AF1* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Meta.WitAi.CallbackHandlers.MultiValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiValueEvent__ctor_m8B3EB1BCB05AC78C773AD743D9D1BAE3F11595F6 (MultiValueEvent_t00CB59BD55FD6C3F27DABCC7A9A5A3394E717C06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D(__this, UnityEvent_1__ctor_mA1CAC73F82FF0E8BC4870AEBF137B7F72614957D_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.ValueEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7 (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void Meta.WitAi.CallbackHandlers.FormattedValueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormattedValueEvents__ctor_m4F5464C9A565D08A0E4FAFCC55DD1B6444CEBD91 (FormattedValueEvents_t0D0D440F35C91FAA243428A4B45156402090018C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueEvent onFormattedValueEvent = new ValueEvent();
		ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32* L_0 = (ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32*)il2cpp_codegen_object_new(ValueEvent_t7E99BC212C04EA8B32FFF6900F7AEC1C55A2AC32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValueEvent__ctor_m870BC4590DAF54F220D66CAFCC1B1F7A8D692BC7(L_0, NULL);
		__this->___onFormattedValueEvent_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onFormattedValueEvent_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_ConfidenceReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_ConfidenceReference_m2D4B1E2F00437CEC9E4E3ECCCEB19058DDE9B382 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B4_0 = NULL;
	WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_0 = __this->___confidencePathReference_10;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (null != confidencePathReference) return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_1 = __this->___confidencePathReference_10;
		return L_1;
	}

IL_000f:
	{
		// var confidencePath = Reference?.path;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_2;
		L_2 = ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97(__this, NULL);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		String_t* L_4 = G_B4_0->___path_1;
		G_B5_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B5_0;
		// if (!string.IsNullOrEmpty(confidencePath))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		// confidencePath = confidencePath.Substring(0, confidencePath.LastIndexOf("."));
		String_t* L_7 = V_0;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_8, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_9, NULL);
		V_0 = L_10;
		// confidencePath += ".confidence";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralBFC27499BD5186964D062DE5FE7C222AE471C53E, NULL);
		V_0 = L_12;
		// confidencePathReference = WitResultUtilities.GetWitResponseReference(confidencePath);
		String_t* L_13 = V_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_14;
		L_14 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_13, NULL);
		__this->___confidencePathReference_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___confidencePathReference_10), (void*)L_14);
	}

IL_0055:
	{
		// return confidencePathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_15 = __this->___confidencePathReference_10;
		return L_15;
	}
}
// Meta.WitAi.WitResponseReference Meta.WitAi.CallbackHandlers.ValuePathMatcher::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* ValuePathMatcher_get_Reference_m6808DF8159190FC28164BFC885B56EBCEF4B0F97 (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_0 = __this->___witValueReference_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (witValueReference) return witValueReference.Reference;
		WitValue_t62896259CA1F095F305381482D891DC0E1ED1092* L_2 = __this->___witValueReference_1;
		NullCheck(L_2);
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_3;
		L_3 = WitValue_get_Reference_m235DE334635AE00B4D91508074C9FEEE6983A521(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// if (null == pathReference || pathReference.path != path)
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_4 = __this->___pathReference_9;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_5 = __this->___pathReference_9;
		NullCheck(L_5);
		String_t* L_6 = L_5->___path_1;
		String_t* L_7 = __this->___path_0;
		bool L_8;
		L_8 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}

IL_0039:
	{
		// pathReference = WitResultUtilities.GetWitResponseReference(path);
		String_t* L_9 = __this->___path_0;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_10;
		L_10 = WitResultUtilities_GetWitResponseReference_m1C6C4F70C12A0D48CA263069DC326994DCB5FA60(L_9, NULL);
		__this->___pathReference_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pathReference_9), (void*)L_10);
	}

IL_004a:
	{
		// return pathReference;
		WitResponseReference_t7B74D84BF98481046E19F0CE0EB5A3F4203D2581* L_11 = __this->___pathReference_9;
		return L_11;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.ValuePathMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValuePathMatcher__ctor_m217C778A08D77714D81C3168B0DEFA6A9075613C (ValuePathMatcher_t2058BD1F2F9C5A162DFBD3FE61BD97F2D840E35E* __this, const RuntimeMethod* method) 
{
	{
		// public bool contentRequired = true;
		__this->___contentRequired_2 = (bool)1;
		// public double floatingPointComparisonTolerance = .0001f;
		__this->___floatingPointComparisonTolerance_6 = (9.9999997473787516E-05);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnValidateResponse(Meta.WitAi.Json.WitResponseNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WitUtteranceMatcher_OnValidateResponse_m2551E293B3A7FCCEE25F5252D8177CBB2C0D7125 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_response, bool ___1_isEarlyResponse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_response;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// if (!IsMatch(text))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// return "Required utterance does not match";
		return _stringLiteral30F03FEA1314DE8FA093A051C30C5B7CD90359B0;
	}

IL_0020:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseInvalid(Meta.WitAi.Json.WitResponseNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseInvalid_m298720942103F62B7413E24A7CB99B544406DA0E (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_response, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// protected override void OnResponseInvalid(WitResponseNode response, string error){}
		return;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::OnResponseSuccess(Meta.WitAi.Json.WitResponseNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher_OnResponseSuccess_mD0D71280596EB5A9DAA364A89918326221411165 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* ___0_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B2_0 = NULL;
	StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* G_B1_0 = NULL;
	{
		// var text = response["text"].Value;
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_0 = ___0_response;
		NullCheck(L_0);
		WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C* L_1;
		L_1 = VirtualFuncInvoker1< WitResponseNode_t1BFF810F15B21416F5F6D0A1CAAF03CEF942038C*, String_t* >::Invoke(7 /* Meta.WitAi.Json.WitResponseNode Meta.WitAi.Json.WitResponseNode::get_Item(System.String) */, L_0, _stringLiteralBFCC6EE94F1B7AA05A04750903E25F93A7188AE0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Meta.WitAi.Json.WitResponseNode::get_Value() */, L_1);
		V_0 = L_2;
		// onUtteranceMatched?.Invoke(text);
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_3 = __this->___onUtteranceMatched_10;
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B2_0, L_5, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitUtteranceMatcher_IsMatch_mB8EE7E23D6CD96D97E11182F23A97E5484143817 (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	{
		// if (useRegex)
		bool L_0 = __this->___useRegex_9;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// if (null == regex)
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = __this->___regex_11;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// regex = new Regex(searchText, RegexOptions.Compiled | RegexOptions.IgnoreCase);
		String_t* L_2 = __this->___searchText_7;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_3, L_2, ((int32_t)9), NULL);
		__this->___regex_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___regex_11), (void*)L_3);
	}

IL_0023:
	{
		// var match = regex.Match(text);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_4 = __this->___regex_11;
		String_t* L_5 = ___0_text;
		NullCheck(L_4);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_6;
		L_6 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_4, L_5, NULL);
		V_0 = L_6;
		// if (match.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_7, NULL);
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// if (exactMatch && match.Value == text)
		bool L_9 = __this->___exactMatch_8;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_10, NULL);
		String_t* L_12 = ___0_text;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// return true;
		return (bool)1;
	}

IL_0051:
	{
		// else if (exactMatch && text.ToLower() == searchText.ToLower())
		bool L_14 = __this->___exactMatch_8;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_15 = ___0_text;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_15, NULL);
		String_t* L_17 = __this->___searchText_7;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0073;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0073:
	{
		// else if (text.ToLower().Contains(searchText.ToLower()))
		String_t* L_20 = ___0_text;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_20, NULL);
		String_t* L_22 = __this->___searchText_7;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_22, NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_008d;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_008d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Meta.WitAi.CallbackHandlers.WitUtteranceMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WitUtteranceMatcher__ctor_m4C14137AA9E9CCE83EA0033E58813FD8FA07D59B (WitUtteranceMatcher_t61084ECD5166E15FF9C36660DCD7A42241EAB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private bool exactMatch = true;
		__this->___exactMatch_8 = (bool)1;
		// [SerializeField] private StringEvent onUtteranceMatched = new StringEvent();
		StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B* L_0 = (StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B*)il2cpp_codegen_object_new(StringEvent_tC948A866B2D2C1ECC0783ABC07A4B876C8E28B5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEvent__ctor_mC31F214D17DD41F033445DF11C6B8DE61C3731A3(L_0, NULL);
		__this->___onUtteranceMatched_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onUtteranceMatched_10), (void*)L_0);
		WitResponseHandler__ctor_mA92FB5CA1D631E9FDEB631D826AB0945A3E6D609(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
