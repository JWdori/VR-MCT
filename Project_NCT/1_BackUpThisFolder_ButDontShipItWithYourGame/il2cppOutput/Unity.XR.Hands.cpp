#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF;
// System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>
struct Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A;
// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.UsageHint>
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>
struct List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB;
// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2;
// UnityEngine.InputSystem.InputProcessor`1<System.Int32>[]
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.InputSystem.XR.XRFeatureDescriptor[]
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor[]
struct XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.XR.Hands.OpenXR.HandTracking
struct HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.XR.Hands.MetaAimHand
struct MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA;
// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim
struct MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider
struct OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.XR.XRDeviceDescriptor
struct XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Hands.XRHandDevice
struct XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A;
// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C;
// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand
struct MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4;
// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater
struct SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548;

IL2CPP_EXTERN_C RuntimeClass* Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral054F6BD93AAC28754AEB100DE1CA059CDFC14E16;
IL2CPP_EXTERN_C String_t* _stringLiteral0674B42F7D88D3EA0BCF0B5FC180DF57438F8EC9;
IL2CPP_EXTERN_C String_t* _stringLiteral0C387225B67A83D965F84DB4DF76111FC8BD2B7F;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA152ABA17521EC9484A221999EDA5592453A41;
IL2CPP_EXTERN_C String_t* _stringLiteral0E7D869B16E460AD51992FAB10FA8FCCED680BB8;
IL2CPP_EXTERN_C String_t* _stringLiteral13470604989A63615629E5A680A0C0DB390CD529;
IL2CPP_EXTERN_C String_t* _stringLiteral1D99D50691F900D16B6D8AA0783B756EBE1332BB;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323;
IL2CPP_EXTERN_C String_t* _stringLiteral2182250D7DDE22F830F2A0834C27E0A29868276E;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7D72DA14836759F6BAC1923F799B94B72101E6;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF9BCC09D66EB5F886DEB2DAA25BB771FA33825;
IL2CPP_EXTERN_C String_t* _stringLiteral3345DF785672F85EB20CFA9D6A2A82057E3A2AFB;
IL2CPP_EXTERN_C String_t* _stringLiteral4CACDA8AE8C00180C674508D8949474DD4976FD2;
IL2CPP_EXTERN_C String_t* _stringLiteral516E58D11955F78EABB94B79869883CE0CAE54EE;
IL2CPP_EXTERN_C String_t* _stringLiteral51DBDE8A1CD6BB98C96C7CF2ED143A653A62E3A7;
IL2CPP_EXTERN_C String_t* _stringLiteral51DE197AFC3146D004089E251200E7103E6E2372;
IL2CPP_EXTERN_C String_t* _stringLiteral5984BB79BF688668638B9A1B07E25BCA1D5E06EB;
IL2CPP_EXTERN_C String_t* _stringLiteral59EFAED47E6BB69813A831156A32B2980E87D504;
IL2CPP_EXTERN_C String_t* _stringLiteral60C83712A0B3B65653383E649E78D58CBB799B93;
IL2CPP_EXTERN_C String_t* _stringLiteral644C3FA1584BA9B1C8A7F1D8066A89B2A4E70125;
IL2CPP_EXTERN_C String_t* _stringLiteral64FFABF13C25C0EF1E176CE7FD37C52DEEFF9E2B;
IL2CPP_EXTERN_C String_t* _stringLiteral652C7641E02C28378030955DF259BE76323D08CB;
IL2CPP_EXTERN_C String_t* _stringLiteral65BAE0D3B3524BC06F277C8BFEF758CCDF0279E3;
IL2CPP_EXTERN_C String_t* _stringLiteral68243321EFC3D795FCDA70B3A44A06BA2D751EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral69936452E9395972D64386DBAE62E5A9998E1AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral69E4F740C97470174ECFD4F81949131FAB76B2A0;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB840A7F92F5C66D924FB073059EB264E72EBCC;
IL2CPP_EXTERN_C String_t* _stringLiteral84A0A63BF57788A0131BE54DF578B5FBE7B1953E;
IL2CPP_EXTERN_C String_t* _stringLiteral95CF5A13CFF41BF1CC6489996E9F3CF30D440E31;
IL2CPP_EXTERN_C String_t* _stringLiteral97BD229F1B41C37BE502BF82084476CF5CA53097;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA6CDE7C85D7A1FC25497E02EF0D60823D611E5;
IL2CPP_EXTERN_C String_t* _stringLiteral9FB32CF2D4D6366E1B07BA0162C8F82AA0749F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA20E3AA8DB37AAF7EF454C2FFEB619F9AFF0C982;
IL2CPP_EXTERN_C String_t* _stringLiteralA3ECE8665FB735BA9B76F8A4B5E94328005373EC;
IL2CPP_EXTERN_C String_t* _stringLiteralAABC9ECF67D2D0B0E77C4240172A846364DF5D06;
IL2CPP_EXTERN_C String_t* _stringLiteralB164748AA6C4428305F0FBF9AC4C46A7B609E9A5;
IL2CPP_EXTERN_C String_t* _stringLiteralBADF8967184C7DBBCEBD42AB93222B2A0479587F;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF49C4E10C5F64C73256E009163D24496E38024;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EF93597679C277BA32488A121B6CDAD517FEAA;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3394B374230DAE26DD7F12A563AEF8B036A3DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1243A490E99DA8A46B280760F4B5F34E1502F7;
IL2CPP_EXTERN_C String_t* _stringLiteralCF9365357C2E2BF61B7BE130C9A11F039F455798;
IL2CPP_EXTERN_C String_t* _stringLiteralEC5A9BF83BEC7AE44AA25AF052BF2CA36062E606;
IL2CPP_EXTERN_C String_t* _stringLiteralED9B318008DA556DBA4308B013ED9BF3ECB48AFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC91683EF460A3E29CBB90BB1304E5887E3963B;
IL2CPP_EXTERN_C String_t* _stringLiteralF304C00847CFBC575AC47A2576A00253A34D3B49;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisMetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_mDA539F33F648C5CD01C59C01E2DAFC2B63D75A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputSystem_RegisterLayout_TisXRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_mD646F8CCFD8588E20F07C482A2CB64DC40F53E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m32A8A65B6BF3C963D0F776450E39D7331A689B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaHandTrackingAim_OnUpdatedHands_m6CC8B64FCEC70D804F3E9C2DCBD5BFF392B6E988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRFeature_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m95BA406D4B597296AE29BDCD382F584D021179CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisHandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_mB2BAA352374416658B609E49FE3A8E0F657AECB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetSubsystemDescriptors_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_mAE6E6315D76A8CB7D661864B75603CCD02310EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRHandDevice_OnUpdatedHands_mD778E501738F8AF4C866261F1C29B081DDDEF92A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com;
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D;
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC1F478E06582CFBF0D40EB4B361000CF11FF8F60 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>
struct List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
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

// UnityEngine.InputSystem.XR.XRDeviceDescriptor
struct XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.XR.XRDeviceDescriptor::deviceName
	String_t* ___deviceName_0;
	// System.String UnityEngine.InputSystem.XR.XRDeviceDescriptor::manufacturer
	String_t* ___manufacturer_1;
	// System.String UnityEngine.InputSystem.XR.XRDeviceDescriptor::serialNumber
	String_t* ___serialNumber_2;
	// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.InputSystem.XR.XRDeviceDescriptor::characteristics
	uint32_t ___characteristics_3;
	// System.Int32 UnityEngine.InputSystem.XR.XRDeviceDescriptor::deviceId
	int32_t ___deviceId_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor> UnityEngine.InputSystem.XR.XRDeviceDescriptor::inputFeatures
	List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* ___inputFeatures_5;
};

// UnityEngine.XR.Hands.XRHandJointIDUtility
struct XRHandJointIDUtility_tAA70C8FC6984E60821DF9999C04458CFEA1D6C27  : public RuntimeObject
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility
struct XRHandProviderUtility_t12641A6A290B7BC65F27A285274DCEE6E42C07FC  : public RuntimeObject
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater
struct SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548  : public RuntimeObject
{
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::m_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___m_Subsystem_0;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Int32>>
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues_2;
};

// Unity.Collections.NativeArray`1<System.Boolean>
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>
struct NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>
struct SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>
struct SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* ___U3CproviderU3Ek__BackingField_3;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	// System.String UnityEngine.InputSystem.XR.XRFeatureDescriptor::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.UsageHint> UnityEngine.InputSystem.XR.XRFeatureDescriptor::usageHints
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints_1;
	// UnityEngine.InputSystem.XR.FeatureType UnityEngine.InputSystem.XR.XRFeatureDescriptor::featureType
	int32_t ___featureType_2;
	// System.UInt32 UnityEngine.InputSystem.XR.XRFeatureDescriptor::customSize
	uint32_t ___customSize_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 
{
	// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
struct Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater/XRHandSubsystemPlayerLoopRunnerUpdateSystem
struct XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D 
{
	union
	{
		struct
		{
		};
		uint8_t XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D__padding[1];
	};
};

// UnityEngine.InputSystem.CommonUsages
struct CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78  : public RuntimeObject
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
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

// UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F 
{
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t* ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com
{
	Type_t* ___type_0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor
struct XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73  : public SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD
{
};

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider
struct XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996  : public SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284
{
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider
struct OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1  : public XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996
{
	// System.Boolean UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::m_IsValid
	bool ___m_IsValid_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 
{
	// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint> UnityEngine.XR.Hands.XRHand::m_Joints
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::m_RootPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::m_Handedness
	int32_t ___m_Handedness_2;
	// System.Boolean UnityEngine.XR.Hands.XRHand::<isTracked>k__BackingField
	bool ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Hands.XRHand
struct XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___m_Joints_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RootPose_1;
	int32_t ___m_Handedness_2;
	int32_t ___U3CisTrackedU3Ek__BackingField_3;
};

// UnityEngine.XR.Hands.XRHandJoint
struct XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 
{
	// System.Int32 UnityEngine.XR.Hands.XRHandJoint::m_IdAndHandedness
	int32_t ___m_IdAndHandedness_0;
	// UnityEngine.Pose UnityEngine.XR.Hands.XRHandJoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.Hands.XRHandJoint::m_Radius
	float ___m_Radius_2;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_LinearVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LinearVelocity_3;
	// UnityEngine.Vector3 UnityEngine.XR.Hands.XRHandJoint::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_4;
	// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::m_TrackingState
	int32_t ___m_TrackingState_5;
};

// System.Action`1<UnityEngine.XR.Hands.XRHand>
struct Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF  : public MulticastDelegate_t
{
};

// System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>
struct Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A  : public MulticastDelegate_t
{
};

// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>
struct Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl`1<System.Int32>
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	int32_t ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	int32_t ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	float ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	float ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack_24;
	// TValue UnityEngine.InputSystem.InputControl`1::m_CachedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue_25;
	// TValue UnityEngine.InputSystem.InputControl`1::m_UnprocessedCachedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue_26;
	// System.Boolean UnityEngine.InputSystem.InputControl`1::evaluateProcessorsEveryRead
	bool ___evaluateProcessorsEveryRead_27;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;
};

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Hands.XRHandSubsystem
struct XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C  : public SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2
{
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_LeftHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_LeftHand_4;
	// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::m_RightHand
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___m_RightHand_5;
	// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::m_JointsInLayout
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___m_JointsInLayout_6;
	// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::<updateSuccessFlags>k__BackingField
	int32_t ___U3CupdateSuccessFlagsU3Ek__BackingField_7;
	// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::updatedHands
	Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* ___updatedHands_8;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingAcquired
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingAcquired_9;
	// System.Action`1<UnityEngine.XR.Hands.XRHand> UnityEngine.XR.Hands.XRHandSubsystem::trackingLost
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* ___trackingLost_10;
	// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType> UnityEngine.XR.Hands.XRHandSubsystem::handsUpdated
	Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* ___handsUpdated_11;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7  : public InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A
{
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_30;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_31;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_32;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_33;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_34;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_35;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_36;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_37;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_38;
};

// UnityEngine.XR.Hands.OpenXR.HandTracking
struct HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater UnityEngine.XR.Hands.OpenXR.HandTracking::m_Updater
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* ___m_Updater_18;
};

// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB  : public InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61
{
};

// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim
struct MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1  : public InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_30;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CwU3Ek__BackingField_31;
};

// UnityEngine.InputSystem.TrackedDevice
struct TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::<trackingState>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CtrackingStateU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::<isTracked>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CisTrackedU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::<devicePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CdevicePositionU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::<deviceRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CdeviceRotationU3Ek__BackingField_47;
};

// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A  : public InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735
{
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CxU3Ek__BackingField_28;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CyU3Ek__BackingField_29;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CzU3Ek__BackingField_30;
};

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF  : public AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_39;
};

// UnityEngine.XR.Hands.MetaAimHand
struct MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA  : public TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::<indexPressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CindexPressedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::<middlePressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddlePressedU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::<ringPressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CringPressedU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::<littlePressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3ClittlePressedU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.Hands.MetaAimHand::<aimFlags>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CaimFlagsU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::<pinchStrengthIndex>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthIndexU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::<pinchStrengthMiddle>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthMiddleU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::<pinchStrengthRing>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthRingU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::<pinchStrengthLittle>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthLittleU3Ek__BackingField_59;
	// UnityEngine.XR.Hands.MetaAimFlags UnityEngine.XR.Hands.MetaAimHand::m_PreviousFlags
	uint64_t ___m_PreviousFlags_62;
	// System.Boolean UnityEngine.XR.Hands.MetaAimHand::m_WasTracked
	bool ___m_WasTracked_63;
	// System.Boolean UnityEngine.XR.Hands.MetaAimHand::m_WasIndexPressed
	bool ___m_WasIndexPressed_64;
	// System.Boolean UnityEngine.XR.Hands.MetaAimHand::m_WasMiddlePressed
	bool ___m_WasMiddlePressed_65;
	// System.Boolean UnityEngine.XR.Hands.MetaAimHand::m_WasRingPressed
	bool ___m_WasRingPressed_66;
	// System.Boolean UnityEngine.XR.Hands.MetaAimHand::m_WasLittlePressed
	bool ___m_WasLittlePressed_67;
};

// UnityEngine.XR.Hands.XRHandDevice
struct XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A  : public TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9
{
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::<gripPosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CgripPositionU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::<gripRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CgripRotationU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::<pokePosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CpokePositionU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::<pokeRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CpokeRotationU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::<pinchPosition>k__BackingField
	Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___U3CpinchPositionU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::<pinchRotation>k__BackingField
	QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___U3CpinchRotationU3Ek__BackingField_55;
	// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHandDevice::m_Handedness
	int32_t ___m_Handedness_57;
	// System.Boolean UnityEngine.XR.Hands.XRHandDevice::m_WasValid
	bool ___m_WasValid_58;
};

// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand
struct MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313  : public TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<indexPressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CindexPressedU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<middlePressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddlePressedU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<ringPressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CringPressedU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<littlePressed>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3ClittlePressedU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<aimFlags>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CaimFlagsU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<pinchStrengthIndex>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthIndexU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<pinchStrengthMiddle>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthMiddleU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<pinchStrengthRing>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthRingU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::<pinchStrengthLittle>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpinchStrengthLittleU3Ek__BackingField_57;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>
struct List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>
struct List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRHandSubsystemDescriptorU5BU5D_tFFB21130E13EAD398CFF46C06D2AF8490BDEB64A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.InputSystem.XR.XRDeviceDescriptor

// UnityEngine.InputSystem.XR.XRDeviceDescriptor

// UnityEngine.XR.Hands.XRHandJointIDUtility

// UnityEngine.XR.Hands.XRHandJointIDUtility

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater

// Unity.Collections.NativeArray`1<System.Boolean>

// Unity.Collections.NativeArray`1<System.Boolean>

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>

// Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>

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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.InputSystem.Layouts.InputDeviceDescription

// UnityEngine.InputSystem.Layouts.InputDeviceDescription

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.InputSystem.Utilities.InternedString

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt64

// System.UInt64

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.InputSystem.XR.XRFeatureDescriptor

// UnityEngine.InputSystem.XR.XRFeatureDescriptor

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater/XRHandSubsystemPlayerLoopRunnerUpdateSystem

// UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater/XRHandSubsystemPlayerLoopRunnerUpdateSystem

// UnityEngine.InputSystem.CommonUsages
struct CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Primary2DMotion
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Primary2DMotion_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Secondary2DMotion
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Secondary2DMotion_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::PrimaryAction
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___PrimaryAction_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::SecondaryAction
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___SecondaryAction_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::PrimaryTrigger
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___PrimaryTrigger_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::SecondaryTrigger
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___SecondaryTrigger_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Modifier
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Modifier_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Position
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Position_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Orientation
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Orientation_8;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Hatswitch
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Hatswitch_9;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Back
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Back_10;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Forward
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Forward_11;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Menu
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Menu_12;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Submit
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Submit_13;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Cancel
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Cancel_14;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Horizontal
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Horizontal_15;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Vertical
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Vertical_16;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Twist
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Twist_17;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Pressure
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Pressure_18;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::ScrollHorizontal
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___ScrollHorizontal_19;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::ScrollVertical
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___ScrollVertical_20;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::Point
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___Point_21;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::LowFreqMotor
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___LowFreqMotor_22;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::HighFreqMotor
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___HighFreqMotor_23;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::LeftHand
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___LeftHand_24;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::RightHand
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___RightHand_25;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.CommonUsages::BatteryStrength
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___BatteryStrength_26;
};

// UnityEngine.InputSystem.CommonUsages

// System.Delegate

// System.Delegate

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.LowLevel.PlayerLoopSystem

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor

// UnityEngine.XR.Hands.XRHandSubsystemDescriptor

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider

// UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider
struct OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields
{
	// System.String UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
};

// UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.XR.Hands.XRHand

// UnityEngine.XR.Hands.XRHand

// UnityEngine.XR.Hands.XRHandJoint

// UnityEngine.XR.Hands.XRHandJoint

// System.Action`1<UnityEngine.XR.Hands.XRHand>

// System.Action`1<UnityEngine.XR.Hands.XRHand>

// System.Action`2<System.Int32Enum,System.Int32Enum>

// System.Action`2<System.Int32Enum,System.Int32Enum>

// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>

// System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>

// System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>

// System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>

// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>

// System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.InputDevice

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55_StaticFields
{
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* ___s_RuntimeInstance_8;
};

// UnityEngine.XR.OpenXR.OpenXRSettings

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Hands.XRHandSubsystem

// UnityEngine.XR.Hands.XRHandSubsystem

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction

// UnityEngine.InputSystem.Controls.AxisControl

// UnityEngine.InputSystem.Controls.AxisControl

// UnityEngine.XR.Hands.OpenXR.HandTracking
struct HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields
{
	// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.OpenXR.HandTracking::s_Subsystem
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___s_Subsystem_19;
};

// UnityEngine.XR.Hands.OpenXR.HandTracking

// UnityEngine.InputSystem.Controls.IntegerControl

// UnityEngine.InputSystem.Controls.IntegerControl

// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim

// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim

// UnityEngine.InputSystem.Controls.QuaternionControl

// UnityEngine.InputSystem.Controls.QuaternionControl

// UnityEngine.InputSystem.TrackedDevice

// UnityEngine.InputSystem.TrackedDevice

// UnityEngine.InputSystem.Controls.Vector3Control

// UnityEngine.InputSystem.Controls.Vector3Control

// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_StaticFields
{
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_40;
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonReleaseThreshold
	float ___s_GlobalDefaultButtonReleaseThreshold_41;
};

// UnityEngine.InputSystem.Controls.ButtonControl

// UnityEngine.XR.Hands.MetaAimHand
struct MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields
{
	// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::<left>k__BackingField
	MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___U3CleftU3Ek__BackingField_48;
	// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::<right>k__BackingField
	MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___U3CrightU3Ek__BackingField_49;
};

// UnityEngine.XR.Hands.MetaAimHand

// UnityEngine.XR.Hands.XRHandDevice
struct XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields
{
	// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::<leftHand>k__BackingField
	XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___U3CleftHandU3Ek__BackingField_48;
	// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::<rightHand>k__BackingField
	XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___U3CrightHandU3Ek__BackingField_49;
};

// UnityEngine.XR.Hands.XRHandDevice

// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand

// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F m_Items[1];

	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.InputSystem.XR.XRFeatureDescriptor[]
struct XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7  : public RuntimeArray
{
	ALIGN_FIELD (8) XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 m_Items[1];

	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___usageHints_1), (void*)NULL);
		#endif
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___usageHints_1), (void*)NULL);
		#endif
	}
};


// TControl UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_gshared (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_gshared_inline (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.Int32>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, int32_t ___1_delta, double ___2_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.Boolean>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, bool ___1_delta, double ___2_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.Single>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, float ___1_delta, double ___2_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.UInt32Enum>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueDeltaStateEvent_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m6F9DF301445BD1589209CFFB24C991BB2C813B51_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, uint32_t ___1_delta, double ___2_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<UnityEngine.Vector3>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_delta, double ___2_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<UnityEngine.Quaternion>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_gshared (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_delta, double ___2_time, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_gshared (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C* __this, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<System.Object>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m7EB2124968FA6CF7D296DEF84B56419B5D879A3D_gshared (Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Hands.XRHand>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_gshared_inline (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Int32Enum,System.Int32Enum>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mC38093196E581A94792A991274264ED3EB9411F5_gshared_inline (Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, int32_t ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_gshared (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3_OnDestroy_m02737870B41A7EFE924EE780772C07819FCEEF53_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_gshared (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.LowLevel.PlayerLoopSystem>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_gshared (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.Hands.XRHandJoint>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657_gshared (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___0_nativeArray, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method) ;

// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.TrackedDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedDevice_FinishSetup_m8FE5D25BCB3BE51AA50D75C97265A8B8D39D0DC5 (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.ButtonControl>(System.String)
inline ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_indexPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_indexPressed_m20A95BFE12C76356DD88F7E6E39D4B05CEB354CE_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_middlePressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_middlePressed_m45391AEE1BB47316D25581981E81C647CD808EBD_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_ringPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_ringPressed_mAC39AB598E1C879706A5F6FFB23CF16A6421D2CF_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_littlePressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_littlePressed_mDE0A57FE49B9835102EBD95E3D10B8D4BA9A6B09_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.IntegerControl>(System.String)
inline IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_aimFlags(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_aimFlags_mACD4D90F668A73ADD47DE5DCACEDBA359E8A4369_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.AxisControl>(System.String)
inline AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthIndex(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthIndex_m23AAE44DED2CDEB4634CB1D1B48F95DD64656F9D_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthMiddle(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthMiddle_m225A4C5CD50BEB33182E8C4691BB780E21707CF4_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthRing(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthRing_m3CB061FE072D5878CA1BE1AF8233F163BB3ADD35_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthLittle(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthLittle_mC806FC951B704A07C218EC94CF71B335F3AEB53F_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::get_description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputDeviceDescription_get_capabilities_mEBF36ED5663709FCA039D1AEA87F6B6C404E76CD_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.XR.XRDeviceDescriptor UnityEngine.InputSystem.XR.XRDeviceDescriptor::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* XRDeviceDescriptor_FromJson_m03D93423116B9A644AE635ECE64E325273F0DC17 (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::SetDeviceUsage(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___0_device, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___1_usage, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Layouts.InputDeviceDescription::set_product(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputDeviceDescription_set_product_m7449178AB405AD172791ACF81AE7D38EFDBAE6BF_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Layouts.InputDeviceDescription::set_manufacturer(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputDeviceDescription_set_manufacturer_mDDC21FFBAA6CD78960A6160779DEF264F780D031_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.XR.XRDeviceDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDeviceDescriptor__ctor_mA72E4762F402013416E659F9388E29C3CE192F9A (XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>::.ctor()
inline void List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460 (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB*, const RuntimeMethod*))List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.XRFeatureDescriptor>::Add(T)
inline void List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB*, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, const RuntimeMethod*))List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_gshared_inline)(__this, ___0_item, method);
}
// System.String UnityEngine.InputSystem.XR.XRDeviceDescriptor::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRDeviceDescriptor_ToJson_m001767A3C8D8B4F8D36C6317298E380F4F306314 (XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Layouts.InputDeviceDescription::set_capabilities(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputDeviceDescription_set_capabilities_mAB1C9265029DBB0E4F7713854FB80893EBD59D88_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputSystem::AddDevice(UnityEngine.InputSystem.Layouts.InputDeviceDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputSystem_AddDevice_m8270203079B467F2AF733935FA8A6FE63A12C26D (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___0_description, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.Hands.MetaAimHand::get_aimFlags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* MetaAimHand_get_aimFlags_m532DE2D69445DBED377487D22678FFB7C87CD469_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.Int32>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
inline void InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, int32_t ___1_delta, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, int32_t, double, const RuntimeMethod*))InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57_gshared)(___0_control, ___1_delta, ___2_time, method);
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_indexPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_indexPressed_m3133A152A84D2CD7F87AE66149ACC30AA13C21F2_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.Boolean>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
inline void InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, bool ___1_delta, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, bool, double, const RuntimeMethod*))InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_gshared)(___0_control, ___1_delta, ___2_time, method);
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_middlePressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_middlePressed_mD8A9626F2ADE4D1755F96EC2D7ABA8E5DF2400F6_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_ringPressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_ringPressed_m8C95675EC31C22CD0AD5834F17B4EABB08B5CE6C_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_littlePressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_littlePressed_m675968AD2CFEC8EC1288EEFDBF31ACE7A6E7181F_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthIndex_m463981E78ADD7635AE6CB3F6FCE94F7BE735FE4D_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<System.Single>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
inline void InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, float ___1_delta, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, float, double, const RuntimeMethod*))InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_gshared)(___0_control, ___1_delta, ___2_time, method);
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthMiddle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthMiddle_m1AFC81B72E6C08805689FFFA8727EE03F282BD22_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthRing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthRing_mAE78EF0B061AC05154C4FC717A541A789ADB024B_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthLittle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthLittle_m64DD64C04E2598F83C41D818CCF7874042B9301D_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.TrackedDevice::get_isTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.TrackedDevice::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<UnityEngine.XR.InputTrackingState>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
inline void InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, uint32_t ___1_delta, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, uint32_t, double, const RuntimeMethod*))InputSystem_QueueDeltaStateEvent_TisUInt32Enum_t7B4F5C6C14D2C4B2A5927C59620BE3868714DACF_m6F9DF301445BD1589209CFFB24C991BB2C813B51_gshared)(___0_control, ___1_delta, ___2_time, method);
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.InputSystem.TrackedDevice::get_devicePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<UnityEngine.Vector3>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
inline void InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_delta, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, double, const RuntimeMethod*))InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_gshared)(___0_control, ___1_delta, ___2_time, method);
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.InputSystem.TrackedDevice::get_deviceRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueDeltaStateEvent<UnityEngine.Quaternion>(UnityEngine.InputSystem.InputControl,TDelta,System.Double)
inline void InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_delta, double ___2_time, const RuntimeMethod* method)
{
	((  void (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, double, const RuntimeMethod*))InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_gshared)(___0_control, ___1_delta, ___2_time, method);
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::UnityOpenXRHands_RetrieveMetaAim(System.Boolean,UnityEngine.XR.Hands.MetaAimFlags&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UnityOpenXRHands_RetrieveMetaAim_mE86F1A7489D57CA661072B01CD6049E4B15E964E (bool ___0_isLeft, uint64_t* ___1_aimFlags, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_aimPosePosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_aimPoseRotation, float* ___4_pinchStrengthIndex, float* ___5_pinchStrengthMiddle, float* ___6_pinchStrengthRing, float* ___7_pinchStrengthLittle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::UpdateHand(System.Boolean,UnityEngine.XR.Hands.MetaAimFlags,UnityEngine.Pose,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UpdateHand_m52AA7E1E561D919BB91EAC80710AD23E95AF970D (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, bool ___0_isHandRootTracked, uint64_t ___1_aimFlags, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_aimPose, float ___3_pinchIndex, float ___4_pinchMiddle, float ___5_pinchRing, float ___6_pinchLittle, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithProduct(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* __this, String_t* ___0_pattern, bool ___1_supportRegex, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher::WithManufacturer(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 InputDeviceMatcher_WithManufacturer_m1D657A87897B8EA1833248EF3D07E265DDE90F00 (InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* __this, String_t* ___0_pattern, bool ___1_supportRegex, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>::.ctor(T)
inline void Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C* __this, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C*, InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555, const RuntimeMethod*))Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<UnityEngine.XR.Hands.MetaAimHand>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisMetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_mDA539F33F648C5CD01C59C01E2DAFC2B63D75A76 (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___0_name, ___1_matches, method);
}
// System.Void UnityEngine.InputSystem.TrackedDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedDevice__ctor_mB27788B88E0EACB28065D20F6FE6E39AF391B375 (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02 (int32_t ___0_jointId, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHand::GetJoint(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::get_rootPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::get_handedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHand::get_isTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHand::set_isTracked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.Hands.XRHand::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void UnityEngine.XR.Hands.XRHand::.ctor(UnityEngine.XR.Hands.Handedness,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___0_handedness, int32_t ___1_allocator, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7 (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>::Dispose()
inline void NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27 (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6*, const RuntimeMethod*))NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.XRHand::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_gripPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_gripPosition_m431F2CFBD25245146DEC8B945BD8C2B72FE98447_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* (*) (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m5E81C3A512C444426EB15097CCF01D73CF1C614C_gshared)(__this, ___0_path, method);
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_gripRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_gripRotation_m4942C22DF118BCE3D05D2D1E8B82356D98513AE6_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pokePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pokePosition_m270B2A835D0A358EB2418EE5C34BF097D260F680_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pokeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pokeRotation_m1D1F7A2D8FC2536FFD9159232B1BCCBD1D3A67A7_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pinchPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pinchPosition_m892535CE6478DE7A07947A66467C63B97ED6F5C7_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pinchRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pinchRotation_m217DD112093DDB9430C3604C6F219910906A93F6_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m7EB2124968FA6CF7D296DEF84B56419B5D879A3D_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::OnUpdatedHands(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_OnUpdatedHands_mD778E501738F8AF4C866261F1C29B081DDDEF92A (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, int32_t ___1_updateSuccessFlags, int32_t ___2_updateType, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_leftHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_rightHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::get_gripPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_gripPosition_m6D8BB7D6EC1C3C523FD673E1B8C87BEF7CFEB27C_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::get_gripRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_gripRotation_mFA06B406143925D1C821A2034A84FDF52F4E3870_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::get_pokePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_pokePosition_m236F011AA0DE638CEBA04F21B85F5BD184EC3645_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::get_pokeRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_pokeRotation_m6AAAA63EAD64ECEA4DE89F1707C1180B5F78CA83_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::get_pinchPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_pinchPosition_mDE2F72E02CE6047FC3E10805DDBFB42273D02E9A_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::get_pinchRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_pinchRotation_m30BA19130704B12CE55181C4929E15260ABAFE80_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_Initialize_m9E1726F0421D00A4E8EDFC72522B69B90CD56633 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout<UnityEngine.XR.Hands.XRHandDevice>(System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
inline void InputSystem_RegisterLayout_TisXRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_mD646F8CCFD8588E20F07C482A2CB64DC40F53E06 (String_t* ___0_name, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___1_matches, const RuntimeMethod* method)
{
	((  void (*) (String_t*, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C, const RuntimeMethod*))InputSystem_RegisterLayout_TisRuntimeObject_m8B0CF2E33066D31E034869BE401DD185E2F04011_gshared)(___0_name, ___1_matches, method);
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHandJoint::get_handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_handedness_m939EE07D84EAFA251284D43B4E5FA21075CC2FA4 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetRadius(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, float* ___0_radius, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetLinearVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_linearVelocity, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_angularVelocity, const RuntimeMethod* method) ;
// System.String UnityEngine.Pose::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pose_ToString_m8C3203B81EB15980F16E07C63B6FBBEECE50A6EF (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.Hands.XRHandJoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::.ctor()
inline void SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7 (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::get_provider()
inline XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_inline (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	return ((  XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::set_updateSuccessFlags(UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandSubsystem_set_updateSuccessFlags_m3E10B3F255A29BA698114BBD603E42D8C32801BC_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::get_updateSuccessFlags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Hands.XRHand>::Invoke(T)
inline void Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_inline (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752*, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471, const RuntimeMethod*))Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_m7E17F0D4A856D31C4D71372AB75DFB2B8A375055_inline (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*, int32_t, int32_t, const RuntimeMethod*))Action_3_Invoke_mC38093196E581A94792A991274264ED3EB9411F5_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Void System.Action`2<UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType>::Invoke(T1,T2)
inline void Action_2_Invoke_m7A623BC79543095CAEA9BFBF393C402551C5744E_inline (Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* __this, int32_t ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF*, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86 (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility::CreateJoint(UnityEngine.XR.Hands.Handedness,UnityEngine.XR.Hands.XRHandJointTrackingState,UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Pose,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75 (int32_t ___0_handedness, int32_t ___1_trackingState, int32_t ___2_id, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___3_pose, float ___4_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_linearVelocity, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_angularVelocity, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::OnDestroy()
inline void SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6 (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE926FFDCD0BC2F75B118A7CCE6FBFA422A41E2B2*, const RuntimeMethod*))SubsystemWithProvider_3_OnDestroy_m02737870B41A7EFE924EE780772C07819FCEEF53_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Boolean>::Dispose()
inline void NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344 (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB*, const RuntimeMethod*))NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::.ctor(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor__ctor_m1562A286279394BEF901F8EDBA7D5D2A611AFB31 (XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8 (SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tD37C555A5B7A6CA2EE9994940AD4F333219EAABD*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F ___0_loop, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.LowLevel.PlayerLoopSystem>(T[]&,System.Int32)
inline void Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6 (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D**, int32_t, const RuntimeMethod*))Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_gshared)(___0_array, ___1_newSize, method);
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::get_leftHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_get_leftHand_mDDCFB299CEF49D677FE879FD6EC2CED49B39A122_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___0_device, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_leftHand(UnityEngine.XR.Hands.XRHandDevice)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_leftHand_m90D3310DC790C1570F9622A43BBC0E3133AE7B36_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::get_rightHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_get_rightHand_mBFB0E60D591755A38FECCAE7E99F1AC467D42C06_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_rightHand(UnityEngine.XR.Hands.XRHandDevice)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_rightHand_m6D14B038BDE83041F0995404CD8AE62B7E96F29E_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Update(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Update_m75E705D288BAB774736C504E119C7507847ACB77 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, int32_t ___0_updateType, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::EnsureDevicesCreated(UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_EnsureDevicesCreated_m1B55AA4F37DAA7D24E5BA6E657CF64F6E59E8C4E (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, int32_t ___0_updateSuccessFlags, int32_t ___1_updateType, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::Create(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.Handedness,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_Create_mB95FA6BCC5AD829A28E33D910D7427764CA231DB (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, int32_t ___1_handedness, int32_t ___2_updateSuccessFlags, int32_t ___3_updateType, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_OnUpdate_m8A13E22290DF48E9B736EC4C6BB8DAE0AA9464E3 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.Hands.XRHandSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2 (SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tE92B070330A06745C300EB6C7651296BF8647284*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_OnSystemChange_m8ABB325CA2AB769AC7895A4017D71863A295301B (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, uint64_t ___0_xrSystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_UnityOpenXRHands_OnSystemChange_mD599D74CC887BACC97BF6B2EC5F7D53DD641155D (uint64_t ___0_xrSystem, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_OnInstanceCreate_m8A79D0660AD16403FFEE29D92DDD867B3732109D (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, uint64_t ___0_xrInstance, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_xrGetInstanceProcAddr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenXRFeature_get_xrGetInstanceProcAddr_m956D5B547606D7621778AFA0283F86DCA949473C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnInstanceCreate(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTracking_UnityOpenXRHands_OnInstanceCreate_m903CCB5C25843DAEEE51C2A6622CB9F8B7A1452B (uint64_t ___0_xrInstance, intptr_t ___1_xrGetInstanceProcAddr, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_OnAppSpaceChange_m8DFDAC9043EF791C4CED63B18C149E27A7836B96 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, uint64_t ___0_xrSpace, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_UnityOpenXRHands_OnAppSpaceChange_mE6358A6F95422FB5CDF156B5F702A030B951DBFD (uint64_t ___0_xrSpace, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature_OnSessionCreate_m1687421C2B4816BF3A572AE9C74F183A3108F8F6 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_UnityOpenXRHands_OnSessionCreate_m3DEAEEEC790BB3DB4E81679198458FA604C14D5E (uint64_t ___0_xrSession, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>(System.Collections.Generic.List`1<T>)
inline void SubsystemManager_GetSubsystemDescriptors_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_mAE6E6315D76A8CB7D661864B75603CCD02310EDD (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* ___0_descriptors, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared)(___0_descriptors, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Hands.XRHandSubsystemDescriptor>::get_Count()
inline int32_t List_1_get_Count_m32A8A65B6BF3C963D0F776450E39D7331A689B27_inline (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OpenXRHandProvider_get_id_m0D80E52EDFCC3188976675E39137B2BA44B03975_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::CreateSubsystem<UnityEngine.XR.Hands.XRHandSubsystemDescriptor,UnityEngine.XR.Hands.XRHandSubsystem>(System.Collections.Generic.List`1<TDescriptor>,System.String)
inline void OpenXRFeature_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m95BA406D4B597296AE29BDCD382F584D021179CD (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143*, List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*, String_t*, const RuntimeMethod*))OpenXRFeature_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m8962B65060EE47BA2A88FE24CDED2724A6F3C51B_gshared)(__this, ___0_descriptors, ___1_id, method);
}
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::.ctor(UnityEngine.XR.Hands.XRHandSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater__ctor_mDFF3EED82E3F9CA7181F9C12537F4313D9A306C1 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Start_mEC50F9FCA9412717D6599F92D2A68A925C393ADD (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Destroy_mBC988E2883F74DF50B81AEEDA2A7C32AFDEC85A5 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Destroy_m8161D5B71C856F836660430CED8550AA17438BAF (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandTracking_UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr_mB65078581D0C93FCA5CB257E2EC79A087C367BE4 (intptr_t ___0_func, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::UnityOpenXRHands_ToggleMetaAim(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetaHandTrackingAim_UnityOpenXRHands_ToggleMetaAim_mBD6A5F22AE4AB824048A3B505485F3DBDA6DD880 (bool ___0_enable, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::CreateHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_CreateHands_m8E8379147535495ED70ADE53BAB86C3F2FCF04A0 (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::DestroyHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_DestroyHands_mEAB5B95CC8C179745E643770AC33388FEABBC1BE (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::CreateHand(UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_CreateHand_mF1109A9DEE13152B98B86958E9E5B9D165FB26BB (uint32_t ___0_extraCharacteristics, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_left(UnityEngine.XR.Hands.MetaAimHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_left_m419A1439F8F77D7FADDFCACB6438BE34733F4B45_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_right(UnityEngine.XR.Hands.MetaAimHand)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_right_m2FE64B96A9598F4F521D014D655A1E8D6974F2D5_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.MetaAimHand::UpdateHand(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UpdateHand_mAB539B5965183DFC833FDC2A9B870E60FBAE479C (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, bool ___0_isLeft, bool ___1_isHandRootTracked, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::UnityOpenXRHands_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_UnityOpenXRHands_Destroy_m27BA1C2D3CBDFB88C032033BB9BCC206FDF905BF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::UnityOpenXRHands_TryInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRHandProvider_UnityOpenXRHands_TryInitialize_m76A2E87894059C10E838F0D1F2AC8CD6C52A953C (const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.Hands.XRHandJoint>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657 (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657_gshared)(___0_nativeArray, method);
}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::UnityOpenXRHands_TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType,UnityEngine.Pose&,System.Void*,UnityEngine.Pose&,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRHandProvider_UnityOpenXRHands_TryUpdateHands_m1EB60471BB6266E5179001627DE87434F55AA996 (int32_t ___0_updateType, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_leftRootPose, void* ___2_leftHandJoints, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___3_rightRootPose, void* ___4_rightHandJoints, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRHandProvider_set_id_m8120E17C64F0006D372B535A04B223B63E9D41A9_inline (String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<UnityEngine.XR.Hands.OpenXR.HandTracking>()
inline HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* OpenXRSettings_GetFeature_TisHandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_mB2BAA352374416658B609E49FE3A8E0F657AECB9 (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::Register(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor_Register_m9C6273F6EAA053F684929058B9A1113261DFF95F (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemProvider__ctor_m404D9375A7F7A0C10412F8E63AA11453C0A6EFDD (XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityOpenXRHands_RetrieveMetaAim(int32_t, uint64_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, float*, float*, float*, float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityOpenXRHands_OnSystemChange(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityOpenXRHands_OnInstanceCreate(uint64_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityOpenXRHands_OnAppSpaceChange(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityOpenXRHands_OnSessionCreate(uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityOpenXRHands_ToggleMetaAim(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityOpenXRHands_TryInitialize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnityOpenXRHands_Destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityOpenXRHands_TryUpdateHands(int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, void*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, void*);
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
// System.Int32 UnityEngine.XR.Hands.XRHandJointIDUtility::ToIndex(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02 (int32_t ___0_jointId, const RuntimeMethod* method) 
{
	{
		// public static int ToIndex(this XRHandJointID jointId) => (int)jointId - 1;
		int32_t L_0 = ___0_jointId;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
	}
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::FromIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E (int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// public static XRHandJointID FromIndex(int index) => (XRHandJointID)(index + 1);
		int32_t L_0 = ___0_index;
		return (int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1)));
	}
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetFrontJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313 (int32_t ___0_fingerId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_fingerId;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0020;
			}
			case 3:
			{
				goto IL_0023;
			}
			case 4:
			{
				goto IL_0026;
			}
		}
	}
	{
		goto IL_0029;
	}

IL_001c:
	{
		// return XRHandJointID.ThumbMetacarpal;
		return (int32_t)(3);
	}

IL_001e:
	{
		// return XRHandJointID.IndexMetacarpal;
		return (int32_t)(7);
	}

IL_0020:
	{
		// return XRHandJointID.MiddleMetacarpal;
		return (int32_t)(((int32_t)12));
	}

IL_0023:
	{
		// return XRHandJointID.RingMetacarpal;
		return (int32_t)(((int32_t)17));
	}

IL_0026:
	{
		// return XRHandJointID.LittleMetacarpal;
		return (int32_t)(((int32_t)22));
	}

IL_0029:
	{
		// throw new ArgumentException(nameof(fingerId) + " must be a valid value!");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral516E58D11955F78EABB94B79869883CE0CAE54EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointIDUtility_GetFrontJointID_mDAAB2FBD81037762DB147BA18C1381192A2A7313_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJointIDUtility::GetBackJointID(UnityEngine.XR.Hands.XRHandFingerID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F (int32_t ___0_fingerId, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_fingerId;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0024;
			}
			case 4:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_002a;
	}

IL_001c:
	{
		// return XRHandJointID.ThumbTip;
		return (int32_t)(6);
	}

IL_001e:
	{
		// return XRHandJointID.IndexTip;
		return (int32_t)(((int32_t)11));
	}

IL_0021:
	{
		// return XRHandJointID.MiddleTip;
		return (int32_t)(((int32_t)16));
	}

IL_0024:
	{
		// return XRHandJointID.RingTip;
		return (int32_t)(((int32_t)21));
	}

IL_0027:
	{
		// return XRHandJointID.LittleTip;
		return (int32_t)(((int32_t)26));
	}

IL_002a:
	{
		// throw new ArgumentException(nameof(fingerId) + " must be a valid value!");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral516E58D11955F78EABB94B79869883CE0CAE54EE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRHandJointIDUtility_GetBackJointID_m944463FBA57D581AFBF5A68F7CA59FC1673F386F_RuntimeMethod_var)));
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
// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand left { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CleftU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_left(UnityEngine.XR.Hands.MetaAimHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_left_m419A1439F8F77D7FADDFCACB6438BE34733F4B45 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand left { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ___0_value;
		((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CleftU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CleftU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand right { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CrightU3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_right(UnityEngine.XR.Hands.MetaAimHand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_right_m2FE64B96A9598F4F521D014D655A1E8D6974F2D5 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand right { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ___0_value;
		((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CrightU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CrightU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_indexPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_indexPressed_m3133A152A84D2CD7F87AE66149ACC30AA13C21F2 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl indexPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CindexPressedU3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_indexPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_indexPressed_m20A95BFE12C76356DD88F7E6E39D4B05CEB354CE (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl indexPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CindexPressedU3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CindexPressedU3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_middlePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_middlePressed_mD8A9626F2ADE4D1755F96EC2D7ABA8E5DF2400F6 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl middlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CmiddlePressedU3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_middlePressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_middlePressed_m45391AEE1BB47316D25581981E81C647CD808EBD (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl middlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CmiddlePressedU3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiddlePressedU3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_ringPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_ringPressed_m8C95675EC31C22CD0AD5834F17B4EABB08B5CE6C (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl ringPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CringPressedU3Ek__BackingField_53;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_ringPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_ringPressed_mAC39AB598E1C879706A5F6FFB23CF16A6421D2CF (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl ringPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CringPressedU3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CringPressedU3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.MetaAimHand::get_littlePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_littlePressed_m675968AD2CFEC8EC1288EEFDBF31ACE7A6E7181F (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl littlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3ClittlePressedU3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_littlePressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_littlePressed_mDE0A57FE49B9835102EBD95E3D10B8D4BA9A6B09 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl littlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3ClittlePressedU3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClittlePressedU3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.Hands.MetaAimHand::get_aimFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* MetaAimHand_get_aimFlags_m532DE2D69445DBED377487D22678FFB7C87CD469 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerControl aimFlags { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = __this->___U3CaimFlagsU3Ek__BackingField_55;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_aimFlags(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_aimFlags_mACD4D90F668A73ADD47DE5DCACEDBA359E8A4369 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerControl aimFlags { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___0_value;
		__this->___U3CaimFlagsU3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaimFlagsU3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthIndex_m463981E78ADD7635AE6CB3F6FCE94F7BE735FE4D (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthIndex { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthIndexU3Ek__BackingField_56;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthIndex(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthIndex_m23AAE44DED2CDEB4634CB1D1B48F95DD64656F9D (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthIndex { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthIndexU3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthIndexU3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthMiddle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthMiddle_m1AFC81B72E6C08805689FFFA8727EE03F282BD22 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthMiddle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthMiddleU3Ek__BackingField_57;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthMiddle(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthMiddle_m225A4C5CD50BEB33182E8C4691BB780E21707CF4 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthMiddle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthMiddleU3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthMiddleU3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthRing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthRing_mAE78EF0B061AC05154C4FC717A541A789ADB024B (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthRing { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthRingU3Ek__BackingField_58;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthRing(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthRing_m3CB061FE072D5878CA1BE1AF8233F163BB3ADD35 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthRing { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthRingU3Ek__BackingField_58 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthRingU3Ek__BackingField_58), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.MetaAimHand::get_pinchStrengthLittle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthLittle_m64DD64C04E2598F83C41D818CCF7874042B9301D (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthLittle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthLittleU3Ek__BackingField_59;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::set_pinchStrengthLittle(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthLittle_mC806FC951B704A07C218EC94CF71B335F3AEB53F (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthLittle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthLittleU3Ek__BackingField_59 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthLittleU3Ek__BackingField_59), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_FinishSetup_m51C52DAE7FA4A48CCE58FC0998E06856E9FB376D (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7D72DA14836759F6BAC1923F799B94B72101E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DF9BCC09D66EB5F886DEB2DAA25BB771FA33825);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB840A7F92F5C66D924FB073059EB264E72EBCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97BD229F1B41C37BE502BF82084476CF5CA53097);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA6CDE7C85D7A1FC25497E02EF0D60823D611E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAABC9ECF67D2D0B0E77C4240172A846364DF5D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBADF8967184C7DBBCEBD42AB93222B2A0479587F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC5A9BF83BEC7AE44AA25AF052BF2CA36062E606);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF304C00847CFBC575AC47A2576A00253A34D3B49);
		s_Il2CppMethodInitialized = true;
	}
	XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* V_0 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// base.FinishSetup();
		TrackedDevice_FinishSetup_m8FE5D25BCB3BE51AA50D75C97265A8B8D39D0DC5(__this, NULL);
		// indexPressed = GetChildControl<ButtonControl>(nameof(indexPressed));
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0;
		L_0 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral97BD229F1B41C37BE502BF82084476CF5CA53097, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		MetaAimHand_set_indexPressed_m20A95BFE12C76356DD88F7E6E39D4B05CEB354CE_inline(__this, L_0, NULL);
		// middlePressed = GetChildControl<ButtonControl>(nameof(middlePressed));
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_1;
		L_1 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteral9CA6CDE7C85D7A1FC25497E02EF0D60823D611E5, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		MetaAimHand_set_middlePressed_m45391AEE1BB47316D25581981E81C647CD808EBD_inline(__this, L_1, NULL);
		// ringPressed = GetChildControl<ButtonControl>(nameof(ringPressed));
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_2;
		L_2 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteralEC5A9BF83BEC7AE44AA25AF052BF2CA36062E606, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		MetaAimHand_set_ringPressed_mAC39AB598E1C879706A5F6FFB23CF16A6421D2CF_inline(__this, L_2, NULL);
		// littlePressed = GetChildControl<ButtonControl>(nameof(littlePressed));
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_3;
		L_3 = InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044(__this, _stringLiteralF304C00847CFBC575AC47A2576A00253A34D3B49, InputControl_GetChildControl_TisButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF_m37B3269440E54D5C867480E334993426D47F9044_RuntimeMethod_var);
		MetaAimHand_set_littlePressed_mDE0A57FE49B9835102EBD95E3D10B8D4BA9A6B09_inline(__this, L_3, NULL);
		// aimFlags = GetChildControl<IntegerControl>(nameof(aimFlags));
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_4;
		L_4 = InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297(__this, _stringLiteral2DF9BCC09D66EB5F886DEB2DAA25BB771FA33825, InputControl_GetChildControl_TisIntegerControl_tA24544EFF42204852F638FF5147F754962C997AB_m87D5D6574BD57F88D41DDE18D17933360E255297_RuntimeMethod_var);
		MetaAimHand_set_aimFlags_mACD4D90F668A73ADD47DE5DCACEDBA359E8A4369_inline(__this, L_4, NULL);
		// pinchStrengthIndex = GetChildControl<AxisControl>(nameof(pinchStrengthIndex));
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_5;
		L_5 = InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841(__this, _stringLiteralAABC9ECF67D2D0B0E77C4240172A846364DF5D06, InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		MetaAimHand_set_pinchStrengthIndex_m23AAE44DED2CDEB4634CB1D1B48F95DD64656F9D_inline(__this, L_5, NULL);
		// pinchStrengthMiddle = GetChildControl<AxisControl>(nameof(pinchStrengthMiddle));
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_6;
		L_6 = InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841(__this, _stringLiteral7FB840A7F92F5C66D924FB073059EB264E72EBCC, InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		MetaAimHand_set_pinchStrengthMiddle_m225A4C5CD50BEB33182E8C4691BB780E21707CF4_inline(__this, L_6, NULL);
		// pinchStrengthRing = GetChildControl<AxisControl>(nameof(pinchStrengthRing));
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_7;
		L_7 = InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841(__this, _stringLiteral2A7D72DA14836759F6BAC1923F799B94B72101E6, InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		MetaAimHand_set_pinchStrengthRing_m3CB061FE072D5878CA1BE1AF8233F163BB3ADD35_inline(__this, L_7, NULL);
		// pinchStrengthLittle = GetChildControl<AxisControl>(nameof(pinchStrengthLittle));
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_8;
		L_8 = InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841(__this, _stringLiteralBADF8967184C7DBBCEBD42AB93222B2A0479587F, InputControl_GetChildControl_TisAxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7_mE395247B4A734866EFF7A908510EEF5B2CFE3841_RuntimeMethod_var);
		MetaAimHand_set_pinchStrengthLittle_mC806FC951B704A07C218EC94CF71B335F3AEB53F_inline(__this, L_8, NULL);
		// var deviceDescriptor = XRDeviceDescriptor.FromJson(description.capabilities);
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_9;
		L_9 = InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline(__this, NULL);
		V_1 = L_9;
		String_t* L_10;
		L_10 = InputDeviceDescription_get_capabilities_mEBF36ED5663709FCA039D1AEA87F6B6C404E76CD_inline((&V_1), NULL);
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_11;
		L_11 = XRDeviceDescriptor_FromJson_m03D93423116B9A644AE635ECE64E325273F0DC17(L_10, NULL);
		V_0 = L_11;
		// if (deviceDescriptor != null)
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_12 = V_0;
		if (!L_12)
		{
			goto IL_00e9;
		}
	}
	{
		// if ((deviceDescriptor.characteristics & InputDeviceCharacteristics.Left) != 0)
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_13 = V_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___characteristics_3;
		if (!((int32_t)((int32_t)L_14&((int32_t)256))))
		{
			goto IL_00d0;
		}
	}
	{
		// InputSystem.InputSystem.SetDeviceUsage(this, InputSystem.CommonUsages.LeftHand);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_15 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___LeftHand_24;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC(__this, L_15, NULL);
		return;
	}

IL_00d0:
	{
		// else if ((deviceDescriptor.characteristics & InputDeviceCharacteristics.Right) != 0)
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_16 = V_0;
		NullCheck(L_16);
		uint32_t L_17 = L_16->___characteristics_3;
		if (!((int32_t)((int32_t)L_17&((int32_t)512))))
		{
			goto IL_00e9;
		}
	}
	{
		// InputSystem.InputSystem.SetDeviceUsage(this, InputSystem.CommonUsages.RightHand);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_18 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___RightHand_25;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC(__this, L_18, NULL);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Hands.MetaAimHand UnityEngine.XR.Hands.MetaAimHand::CreateHand(UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_CreateHand_mF1109A9DEE13152B98B86958E9E5B9D165FB26BB (uint32_t ___0_extraCharacteristics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA152ABA17521EC9484A221999EDA5592453A41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3345DF785672F85EB20CFA9D6A2A82057E3A2AFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CACDA8AE8C00180C674508D8949474DD4976FD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51DBDE8A1CD6BB98C96C7CF2ED143A653A62E3A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59EFAED47E6BB69813A831156A32B2980E87D504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60C83712A0B3B65653383E649E78D58CBB799B93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64FFABF13C25C0EF1E176CE7FD37C52DEEFF9E2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65BAE0D3B3524BC06F277C8BFEF758CCDF0279E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84A0A63BF57788A0131BE54DF578B5FBE7B1953E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95CF5A13CFF41BF1CC6489996E9F3CF30D440E31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC1243A490E99DA8A46B280760F4B5F34E1502F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF9365357C2E2BF61B7BE130C9A11F039F455798);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED9B318008DA556DBA4308B013ED9BF3ECB48AFB);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var desc = new InputDeviceDescription
		// {
		//     product = k_MetaAimHandDeviceProductName,
		//     manufacturer = k_MetaAimHandDeviceManufacturerName,
		//     capabilities = new XRDeviceDescriptor
		//     {
		//         characteristics = InputDeviceCharacteristics.HandTracking | InputDeviceCharacteristics.TrackedDevice | extraCharacteristics,
		//         inputFeatures = new List<XRFeatureDescriptor>
		//         {
		//             new XRFeatureDescriptor
		//             {
		//                 name = "index_pressed",
		//                 featureType = FeatureType.Binary
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "middle_pressed",
		//                 featureType = FeatureType.Binary
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "ring_pressed",
		//                 featureType = FeatureType.Binary
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "little_pressed",
		//                 featureType = FeatureType.Binary
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "aim_flags",
		//                 featureType = FeatureType.DiscreteStates
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "aim_pose_position",
		//                 featureType = FeatureType.Axis3D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "aim_pose_rotation",
		//                 featureType = FeatureType.Rotation
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "pinch_strength_index",
		//                 featureType = FeatureType.Axis1D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "pinch_strength_middle",
		//                 featureType = FeatureType.Axis1D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "pinch_strength_ring",
		//                 featureType = FeatureType.Axis1D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "pinch_strength_little",
		//                 featureType = FeatureType.Axis1D
		//             }
		//         }
		//     }.ToJson()
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F));
		InputDeviceDescription_set_product_m7449178AB405AD172791ACF81AE7D38EFDBAE6BF_inline((&V_0), _stringLiteral95CF5A13CFF41BF1CC6489996E9F3CF30D440E31, NULL);
		InputDeviceDescription_set_manufacturer_mDDC21FFBAA6CD78960A6160779DEF264F780D031_inline((&V_0), _stringLiteral0CA152ABA17521EC9484A221999EDA5592453A41, NULL);
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_0 = (XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD*)il2cpp_codegen_object_new(XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRDeviceDescriptor__ctor_mA72E4762F402013416E659F9388E29C3CE192F9A(L_0, NULL);
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_1 = L_0;
		uint32_t L_2 = ___0_extraCharacteristics;
		NullCheck(L_1);
		L_1->___characteristics_3 = ((int32_t)(((int32_t)40)|(int32_t)L_2));
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_3 = L_1;
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_4 = (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB*)il2cpp_codegen_object_new(List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460(L_4, List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_5 = L_4;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral65BAE0D3B3524BC06F277C8BFEF758CCDF0279E3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral65BAE0D3B3524BC06F277C8BFEF758CCDF0279E3);
		(&V_1)->___featureType_2 = 1;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_5, L_6, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_7 = L_5;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral60C83712A0B3B65653383E649E78D58CBB799B93;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral60C83712A0B3B65653383E649E78D58CBB799B93);
		(&V_1)->___featureType_2 = 1;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_8 = V_1;
		NullCheck(L_7);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_7, L_8, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_9 = L_7;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteralCF9365357C2E2BF61B7BE130C9A11F039F455798;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteralCF9365357C2E2BF61B7BE130C9A11F039F455798);
		(&V_1)->___featureType_2 = 1;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_10 = V_1;
		NullCheck(L_9);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_9, L_10, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_11 = L_9;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral4CACDA8AE8C00180C674508D8949474DD4976FD2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral4CACDA8AE8C00180C674508D8949474DD4976FD2);
		(&V_1)->___featureType_2 = 1;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_11, L_12, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_13 = L_11;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral64FFABF13C25C0EF1E176CE7FD37C52DEEFF9E2B;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral64FFABF13C25C0EF1E176CE7FD37C52DEEFF9E2B);
		(&V_1)->___featureType_2 = 2;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_13, L_14, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_15 = L_13;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteralED9B318008DA556DBA4308B013ED9BF3ECB48AFB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteralED9B318008DA556DBA4308B013ED9BF3ECB48AFB);
		(&V_1)->___featureType_2 = 5;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_15, L_16, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_17 = L_15;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteralCC1243A490E99DA8A46B280760F4B5F34E1502F7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteralCC1243A490E99DA8A46B280760F4B5F34E1502F7);
		(&V_1)->___featureType_2 = 6;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_18 = V_1;
		NullCheck(L_17);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_17, L_18, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_19 = L_17;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral3345DF785672F85EB20CFA9D6A2A82057E3A2AFB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral3345DF785672F85EB20CFA9D6A2A82057E3A2AFB);
		(&V_1)->___featureType_2 = 3;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_20 = V_1;
		NullCheck(L_19);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_19, L_20, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_21 = L_19;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral59EFAED47E6BB69813A831156A32B2980E87D504;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral59EFAED47E6BB69813A831156A32B2980E87D504);
		(&V_1)->___featureType_2 = 3;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_22 = V_1;
		NullCheck(L_21);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_21, L_22, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_23 = L_21;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral51DBDE8A1CD6BB98C96C7CF2ED143A653A62E3A7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral51DBDE8A1CD6BB98C96C7CF2ED143A653A62E3A7);
		(&V_1)->___featureType_2 = 3;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_24 = V_1;
		NullCheck(L_23);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_23, L_24, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_25 = L_23;
		il2cpp_codegen_initobj((&V_1), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_1)->___name_0 = _stringLiteral84A0A63BF57788A0131BE54DF578B5FBE7B1953E;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___name_0), (void*)_stringLiteral84A0A63BF57788A0131BE54DF578B5FBE7B1953E);
		(&V_1)->___featureType_2 = 3;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_26 = V_1;
		NullCheck(L_25);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_25, L_26, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___inputFeatures_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___inputFeatures_5), (void*)L_25);
		NullCheck(L_3);
		String_t* L_27;
		L_27 = XRDeviceDescriptor_ToJson_m001767A3C8D8B4F8D36C6317298E380F4F306314(L_3, NULL);
		InputDeviceDescription_set_capabilities_mAB1C9265029DBB0E4F7713854FB80893EBD59D88_inline((&V_0), L_27, NULL);
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_28 = V_0;
		// return InputSystem.InputSystem.AddDevice(desc) as MetaAimHand;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_29;
		L_29 = InputSystem_AddDevice_m8270203079B467F2AF733935FA8A6FE63A12C26D(L_28, NULL);
		return ((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA*)IsInstClass((RuntimeObject*)L_29, MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::UpdateHand(System.Boolean,UnityEngine.XR.Hands.MetaAimFlags,UnityEngine.Pose,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UpdateHand_m52AA7E1E561D919BB91EAC80710AD23E95AF970D (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, bool ___0_isHandRootTracked, uint64_t ___1_aimFlags, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_aimPose, float ___3_pinchIndex, float ___4_pinchMiddle, float ___5_pinchRing, float ___6_pinchLittle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (aimFlags != m_PreviousFlags)
		uint64_t L_0 = ___1_aimFlags;
		uint64_t L_1 = __this->___m_PreviousFlags_62;
		if ((((int64_t)L_0) == ((int64_t)L_1)))
		{
			goto IL_0026;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(this.aimFlags, (int)aimFlags);
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_2;
		L_2 = MetaAimHand_get_aimFlags_m532DE2D69445DBED377487D22678FFB7C87CD469_inline(__this, NULL);
		uint64_t L_3 = ___1_aimFlags;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57(L_2, ((int32_t)L_3), (-1.0), InputSystem_QueueDeltaStateEvent_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57F6D1AFE94ACB20A1E16708876981F7005D8E57_RuntimeMethod_var);
		// m_PreviousFlags = aimFlags;
		uint64_t L_4 = ___1_aimFlags;
		__this->___m_PreviousFlags_62 = L_4;
	}

IL_0026:
	{
		// bool isIndexPressed = pinchIndex > pressThreshold;
		float L_5 = ___3_pinchIndex;
		V_0 = (bool)((((float)L_5) > ((float)(0.800000012f)))? 1 : 0);
		// if (isIndexPressed != m_WasIndexPressed)
		bool L_6 = V_0;
		bool L_7 = __this->___m_WasIndexPressed_64;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0055;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(indexPressed, isIndexPressed);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_8;
		L_8 = MetaAimHand_get_indexPressed_m3133A152A84D2CD7F87AE66149ACC30AA13C21F2_inline(__this, NULL);
		bool L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_8, L_9, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// m_WasIndexPressed = isIndexPressed;
		bool L_10 = V_0;
		__this->___m_WasIndexPressed_64 = L_10;
	}

IL_0055:
	{
		// bool isMiddlePressed = pinchMiddle > pressThreshold;
		float L_11 = ___4_pinchMiddle;
		V_1 = (bool)((((float)L_11) > ((float)(0.800000012f)))? 1 : 0);
		// if (isMiddlePressed != m_WasMiddlePressed)
		bool L_12 = V_1;
		bool L_13 = __this->___m_WasMiddlePressed_65;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0084;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(middlePressed, isMiddlePressed);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_14;
		L_14 = MetaAimHand_get_middlePressed_mD8A9626F2ADE4D1755F96EC2D7ABA8E5DF2400F6_inline(__this, NULL);
		bool L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_14, L_15, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// m_WasMiddlePressed = isMiddlePressed;
		bool L_16 = V_1;
		__this->___m_WasMiddlePressed_65 = L_16;
	}

IL_0084:
	{
		// bool isRingPressed = pinchRing > pressThreshold;
		float L_17 = ___5_pinchRing;
		V_2 = (bool)((((float)L_17) > ((float)(0.800000012f)))? 1 : 0);
		// if (isRingPressed != m_WasRingPressed)
		bool L_18 = V_2;
		bool L_19 = __this->___m_WasRingPressed_66;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_00b3;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(ringPressed, isRingPressed);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_20;
		L_20 = MetaAimHand_get_ringPressed_m8C95675EC31C22CD0AD5834F17B4EABB08B5CE6C_inline(__this, NULL);
		bool L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_20, L_21, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// m_WasRingPressed = isRingPressed;
		bool L_22 = V_2;
		__this->___m_WasRingPressed_66 = L_22;
	}

IL_00b3:
	{
		// bool isLittlePressed = pinchLittle > pressThreshold;
		float L_23 = ___6_pinchLittle;
		V_3 = (bool)((((float)L_23) > ((float)(0.800000012f)))? 1 : 0);
		// if (isLittlePressed != m_WasLittlePressed)
		bool L_24 = V_3;
		bool L_25 = __this->___m_WasLittlePressed_67;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_00e2;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(littlePressed, isLittlePressed);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_26;
		L_26 = MetaAimHand_get_littlePressed_m675968AD2CFEC8EC1288EEFDBF31ACE7A6E7181F_inline(__this, NULL);
		bool L_27 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_26, L_27, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// m_WasLittlePressed = isLittlePressed;
		bool L_28 = V_3;
		__this->___m_WasLittlePressed_67 = L_28;
	}

IL_00e2:
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(pinchStrengthIndex, pinchIndex);
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_29;
		L_29 = MetaAimHand_get_pinchStrengthIndex_m463981E78ADD7635AE6CB3F6FCE94F7BE735FE4D_inline(__this, NULL);
		float L_30 = ___3_pinchIndex;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A(L_29, L_30, (-1.0), InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(pinchStrengthMiddle, pinchMiddle);
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_31;
		L_31 = MetaAimHand_get_pinchStrengthMiddle_m1AFC81B72E6C08805689FFFA8727EE03F282BD22_inline(__this, NULL);
		float L_32 = ___4_pinchMiddle;
		InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A(L_31, L_32, (-1.0), InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(pinchStrengthRing, pinchRing);
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_33;
		L_33 = MetaAimHand_get_pinchStrengthRing_mAE78EF0B061AC05154C4FC717A541A789ADB024B_inline(__this, NULL);
		float L_34 = ___5_pinchRing;
		InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A(L_33, L_34, (-1.0), InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(pinchStrengthLittle, pinchLittle);
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_35;
		L_35 = MetaAimHand_get_pinchStrengthLittle_m64DD64C04E2598F83C41D818CCF7874042B9301D_inline(__this, NULL);
		float L_36 = ___6_pinchLittle;
		InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A(L_35, L_36, (-1.0), InputSystem_QueueDeltaStateEvent_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m895DB9D8BDF1622CC9E0437148843B4E93B5AE4A_RuntimeMethod_var);
		// if ((aimFlags & MetaAimFlags.Computed) == MetaAimFlags.None)
		uint64_t L_37 = ___1_aimFlags;
		if (((int64_t)((int64_t)L_37&((int64_t)1))))
		{
			goto IL_017a;
		}
	}
	{
		// if (m_WasTracked)
		bool L_38 = __this->___m_WasTracked_63;
		if (!L_38)
		{
			goto IL_0179;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, false);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_39;
		L_39 = TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_39, (bool)0, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.None);
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_40;
		L_40 = TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline(__this, NULL);
		InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0(L_40, 0, (-1.0), InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		// m_WasTracked = false;
		__this->___m_WasTracked_63 = (bool)0;
	}

IL_0179:
	{
		// return;
		return;
	}

IL_017a:
	{
		// if (isHandRootTracked)
		bool L_41 = ___0_isHandRootTracked;
		if (!L_41)
		{
			goto IL_01eb;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(devicePosition, aimPose.position);
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_42;
		L_42 = TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_43 = ___2_aimPose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43.___position_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7(L_42, L_44, (-1.0), InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(deviceRotation, aimPose.rotation);
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_45;
		L_45 = TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46 = ___2_aimPose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47 = L_46.___rotation_1;
		InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103(L_45, L_47, (-1.0), InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
		// if (!m_WasTracked)
		bool L_48 = __this->___m_WasTracked_63;
		if (L_48)
		{
			goto IL_01e3;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.Position | InputTrackingState.Rotation);
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_49;
		L_49 = TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0(L_49, 3, (-1.0), InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, true);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_50;
		L_50 = TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline(__this, NULL);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_50, (bool)1, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
	}

IL_01e3:
	{
		// m_WasTracked = true;
		__this->___m_WasTracked_63 = (bool)1;
		return;
	}

IL_01eb:
	{
		// else if (m_WasTracked)
		bool L_51 = __this->___m_WasTracked_63;
		if (!L_51)
		{
			goto IL_0224;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.None);
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_52;
		L_52 = TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0(L_52, 0, (-1.0), InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, false);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_53;
		L_53 = TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline(__this, NULL);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_53, (bool)0, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// m_WasTracked = false;
		__this->___m_WasTracked_63 = (bool)0;
	}

IL_0224:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::UpdateHand(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UpdateHand_mAB539B5965183DFC833FDC2A9B870E60FBAE479C (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, bool ___0_isLeft, bool ___1_isHandRootTracked, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// UnityOpenXRHands_RetrieveMetaAim(
		//     isLeft,
		//     out MetaAimFlags aimFlags,
		//     out Vector3 aimPosePosition,
		//     out Quaternion aimPoseRotation,
		//     out float pinchIndex,
		//     out float pinchMiddle,
		//     out float pinchRing,
		//     out float pinchLittle);
		bool L_0 = ___0_isLeft;
		MetaAimHand_UnityOpenXRHands_RetrieveMetaAim_mE86F1A7489D57CA661072B01CD6049E4B15E964E(L_0, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), NULL);
		// UpdateHand(
		//     isHandRootTracked,
		//     aimFlags,
		//     new Pose(aimPosePosition, aimPoseRotation),
		//     pinchIndex,
		//     pinchMiddle,
		//     pinchRing,
		//     pinchLittle);
		bool L_1 = ___1_isHandRootTracked;
		uint64_t L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_5), L_3, L_4, /*hidden argument*/NULL);
		float L_6 = V_3;
		float L_7 = V_4;
		float L_8 = V_5;
		float L_9 = V_6;
		MetaAimHand_UpdateHand_m52AA7E1E561D919BB91EAC80710AD23E95AF970D(__this, L_1, L_2, L_5, L_6, L_7, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::UnityOpenXRHands_RetrieveMetaAim(System.Boolean,UnityEngine.XR.Hands.MetaAimFlags&,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Single&,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UnityOpenXRHands_RetrieveMetaAim_mE86F1A7489D57CA661072B01CD6049E4B15E964E (bool ___0_isLeft, uint64_t* ___1_aimFlags, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_aimPosePosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___3_aimPoseRotation, float* ___4_pinchStrengthIndex, float* ___5_pinchStrengthMiddle, float* ___6_pinchStrengthRing, float* ___7_pinchStrengthLittle, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, float*, float*, float*, float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4 + sizeof(uint64_t*) + sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*) + sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*) + sizeof(float*) + sizeof(float*) + sizeof(float*) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_RetrieveMetaAim", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_RetrieveMetaAim)(static_cast<int32_t>(___0_isLeft), ___1_aimFlags, ___2_aimPosePosition, ___3_aimPoseRotation, ___4_pinchStrengthIndex, ___5_pinchStrengthMiddle, ___6_pinchStrengthRing, ___7_pinchStrengthLittle);
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___0_isLeft), ___1_aimFlags, ___2_aimPosePosition, ___3_aimPoseRotation, ___4_pinchStrengthIndex, ___5_pinchStrengthMiddle, ___6_pinchStrengthRing, ___7_pinchStrengthLittle);
	#endif

}
// System.Void UnityEngine.XR.Hands.MetaAimHand::RegisterLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_RegisterLayout_m51DBFF0D52C0ECDB6E60F0DBD4D4A07E33493A9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisMetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_mDA539F33F648C5CD01C59C01E2DAFC2B63D75A76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA152ABA17521EC9484A221999EDA5592453A41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95CF5A13CFF41BF1CC6489996E9F3CF30D440E31);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InputSystem.InputSystem.RegisterLayout<MetaAimHand>(
		//         matches: new InputDeviceMatcher()
		//         .WithProduct(k_MetaAimHandDeviceProductName)
		//         .WithManufacturer(k_MetaAimHandDeviceManufacturerName));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_1;
		L_1 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_0, _stringLiteral95CF5A13CFF41BF1CC6489996E9F3CF30D440E31, (bool)1, NULL);
		V_0 = L_1;
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_2;
		L_2 = InputDeviceMatcher_WithManufacturer_m1D657A87897B8EA1833248EF3D07E265DDE90F00((&V_0), _stringLiteral0CA152ABA17521EC9484A221999EDA5592453A41, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisMetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_mDA539F33F648C5CD01C59C01E2DAFC2B63D75A76((String_t*)NULL, L_3, InputSystem_RegisterLayout_TisMetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_mDA539F33F648C5CD01C59C01E2DAFC2B63D75A76_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::UpdateHand(UnityEngine.XR.Hands.MetaAimFlags,UnityEngine.Pose,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_UpdateHand_m48B284F5FDE93CF9274E071B6DEF173CCCA22616 (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, uint64_t ___0_aimFlags, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_aimPose, float ___2_pinchIndex, float ___3_pinchMiddle, float ___4_pinchRing, float ___5_pinchLittle, const RuntimeMethod* method) 
{
	{
		// UpdateHand(
		//     (aimFlags & MetaAimFlags.Valid) != MetaAimFlags.None,
		//     aimFlags,
		//     aimPose,
		//     pinchIndex,
		//     pinchMiddle,
		//     pinchRing,
		//     pinchLittle);
		uint64_t L_0 = ___0_aimFlags;
		uint64_t L_1 = ___0_aimFlags;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___1_aimPose;
		float L_3 = ___2_pinchIndex;
		float L_4 = ___3_pinchMiddle;
		float L_5 = ___4_pinchRing;
		float L_6 = ___5_pinchLittle;
		MetaAimHand_UpdateHand_m52AA7E1E561D919BB91EAC80710AD23E95AF970D(__this, (bool)((!(((uint64_t)((int64_t)((int64_t)L_0&((int64_t)2)))) <= ((uint64_t)((int64_t)0))))? 1 : 0), L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.MetaAimHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand__ctor_m310082900592A5B1873E3566BA1A92B207A1D59C (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		TrackedDevice__ctor_mB27788B88E0EACB28065D20F6FE6E39AF391B375(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.Hands.XRHand
IL2CPP_EXTERN_C void XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshal_pinvoke(const XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471& unmarshaled, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Joints_0 = unmarshaled.___m_Joints_0;
	marshaled.___m_RootPose_1 = unmarshaled.___m_RootPose_1;
	marshaled.___m_Handedness_2 = unmarshaled.___m_Handedness_2;
	marshaled.___U3CisTrackedU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CisTrackedU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshal_pinvoke_back(const XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke& marshaled, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471& unmarshaled)
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 unmarshaledm_Joints_temp_0;
	memset((&unmarshaledm_Joints_temp_0), 0, sizeof(unmarshaledm_Joints_temp_0));
	unmarshaledm_Joints_temp_0 = marshaled.___m_Joints_0;
	unmarshaled.___m_Joints_0 = unmarshaledm_Joints_temp_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 unmarshaledm_RootPose_temp_1;
	memset((&unmarshaledm_RootPose_temp_1), 0, sizeof(unmarshaledm_RootPose_temp_1));
	unmarshaledm_RootPose_temp_1 = marshaled.___m_RootPose_1;
	unmarshaled.___m_RootPose_1 = unmarshaledm_RootPose_temp_1;
	int32_t unmarshaledm_Handedness_temp_2 = 0;
	unmarshaledm_Handedness_temp_2 = marshaled.___m_Handedness_2;
	unmarshaled.___m_Handedness_2 = unmarshaledm_Handedness_temp_2;
	bool unmarshaledU3CisTrackedU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CisTrackedU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CisTrackedU3Ek__BackingField_3);
	unmarshaled.___U3CisTrackedU3Ek__BackingField_3 = unmarshaledU3CisTrackedU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Hands.XRHand
IL2CPP_EXTERN_C void XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshal_pinvoke_cleanup(XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.Hands.XRHand
IL2CPP_EXTERN_C void XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshal_com(const XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471& unmarshaled, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com& marshaled)
{
	marshaled.___m_Joints_0 = unmarshaled.___m_Joints_0;
	marshaled.___m_RootPose_1 = unmarshaled.___m_RootPose_1;
	marshaled.___m_Handedness_2 = unmarshaled.___m_Handedness_2;
	marshaled.___U3CisTrackedU3Ek__BackingField_3 = static_cast<int32_t>(unmarshaled.___U3CisTrackedU3Ek__BackingField_3);
}
IL2CPP_EXTERN_C void XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshal_com_back(const XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com& marshaled, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471& unmarshaled)
{
	NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 unmarshaledm_Joints_temp_0;
	memset((&unmarshaledm_Joints_temp_0), 0, sizeof(unmarshaledm_Joints_temp_0));
	unmarshaledm_Joints_temp_0 = marshaled.___m_Joints_0;
	unmarshaled.___m_Joints_0 = unmarshaledm_Joints_temp_0;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 unmarshaledm_RootPose_temp_1;
	memset((&unmarshaledm_RootPose_temp_1), 0, sizeof(unmarshaledm_RootPose_temp_1));
	unmarshaledm_RootPose_temp_1 = marshaled.___m_RootPose_1;
	unmarshaled.___m_RootPose_1 = unmarshaledm_RootPose_temp_1;
	int32_t unmarshaledm_Handedness_temp_2 = 0;
	unmarshaledm_Handedness_temp_2 = marshaled.___m_Handedness_2;
	unmarshaled.___m_Handedness_2 = unmarshaledm_Handedness_temp_2;
	bool unmarshaledU3CisTrackedU3Ek__BackingField_temp_3 = false;
	unmarshaledU3CisTrackedU3Ek__BackingField_temp_3 = static_cast<bool>(marshaled.___U3CisTrackedU3Ek__BackingField_3);
	unmarshaled.___U3CisTrackedU3Ek__BackingField_3 = unmarshaledU3CisTrackedU3Ek__BackingField_temp_3;
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Hands.XRHand
IL2CPP_EXTERN_C void XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshal_com_cleanup(XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471_marshaled_com& marshaled)
{
}
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.XRHand::GetJoint(UnityEngine.XR.Hands.XRHandJointID)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	{
		// public XRHandJoint GetJoint(XRHandJointID id) => m_Joints[id.ToIndex()];
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_0 = (&__this->___m_Joints_0);
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(L_1, NULL);
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, (L_0)->___m_Buffer_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C  XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035_AdjustorThunk (RuntimeObject* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 _returnValue;
	_returnValue = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035(_thisAdjusted, ___0_id, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.Hands.XRHand::get_rootPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Pose rootPose => m_RootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_RootPose_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHand::get_handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => m_Handedness;
		int32_t L_0 = __this->___m_Handedness_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHand::get_isTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public bool isTracked { get; internal set; }
		bool L_0 = __this->___U3CisTrackedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHand::set_isTracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isTracked { get; internal set; }
		bool L_0 = ___0_value;
		__this->___U3CisTrackedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_inline(_thisAdjusted, ___0_value, method);
}
// System.String UnityEngine.XR.Hands.XRHand::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69936452E9395972D64386DBAE62E5A9998E1AFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Handedness + " XRHand";
		int32_t* L_0 = (&__this->___m_Handedness_2);
		Il2CppFakeBox<int32_t> L_1(Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral69936452E9395972D64386DBAE62E5A9998E1AFF, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRHand_ToString_m16E035580DC75AAFAE5A68574F546AD7976B5508(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHand::.ctor(UnityEngine.XR.Hands.Handedness,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, int32_t ___0_handedness, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RootPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		__this->___m_RootPose_1 = L_0;
		// m_Handedness = handedness;
		int32_t L_1 = ___0_handedness;
		__this->___m_Handedness_2 = L_1;
		// m_Joints = new NativeArray<XRHandJoint>(XRHandJointID.EndMarker.ToIndex(), allocator);
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		int32_t L_3 = ___1_allocator;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B((&L_4), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m4D4FF733356743E02EAD58DD14113D5224D3DA3B_RuntimeMethod_var);
		__this->___m_Joints_0 = L_4;
		// isTracked = false;
		XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933_AdjustorThunk (RuntimeObject* __this, int32_t ___0_handedness, int32_t ___1_allocator, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933(_thisAdjusted, ___0_handedness, ___1_allocator, method);
}
// System.Void UnityEngine.XR.Hands.XRHand::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5 (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Joints.IsCreated)
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_0 = (&__this->___m_Joints_0);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7(L_0, NativeArray_1_get_IsCreated_m48FE77881C90E0F1BD2794B7465F8BA01704CFC7_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_Joints.Dispose();
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_2 = (&__this->___m_Joints_0);
		NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27(L_2, NativeArray_1_Dispose_mDF8F5DA3AD8CEE8A72380219639E85A040553D27_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471*>(__this + _offset);
	XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::get_leftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_get_leftHand_mDDCFB299CEF49D677FE879FD6EC2CED49B39A122 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice leftHand { get; internal set; }
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CleftHandU3Ek__BackingField_48;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_leftHand(UnityEngine.XR.Hands.XRHandDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_leftHand_m90D3310DC790C1570F9622A43BBC0E3133AE7B36 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice leftHand { get; internal set; }
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CleftHandU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CleftHandU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::get_rightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_get_rightHand_mBFB0E60D591755A38FECCAE7E99F1AC467D42C06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice rightHand { get; internal set; }
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CrightHandU3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_rightHand(UnityEngine.XR.Hands.XRHandDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_rightHand_m6D14B038BDE83041F0995404CD8AE62B7E96F29E (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice rightHand { get; internal set; }
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CrightHandU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CrightHandU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::get_gripPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_gripPosition_m6D8BB7D6EC1C3C523FD673E1B8C87BEF7CFEB27C (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control gripPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CgripPositionU3Ek__BackingField_50;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_gripPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_gripPosition_m431F2CFBD25245146DEC8B945BD8C2B72FE98447 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control gripPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CgripPositionU3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripPositionU3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::get_gripRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_gripRotation_mFA06B406143925D1C821A2034A84FDF52F4E3870 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl gripRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CgripRotationU3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_gripRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_gripRotation_m4942C22DF118BCE3D05D2D1E8B82356D98513AE6 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl gripRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CgripRotationU3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripRotationU3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::get_pokePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_pokePosition_m236F011AA0DE638CEBA04F21B85F5BD184EC3645 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pokePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CpokePositionU3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pokePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_pokePosition_m270B2A835D0A358EB2418EE5C34BF097D260F680 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pokePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CpokePositionU3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpokePositionU3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::get_pokeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_pokeRotation_m6AAAA63EAD64ECEA4DE89F1707C1180B5F78CA83 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pokeRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CpokeRotationU3Ek__BackingField_53;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pokeRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_pokeRotation_m1D1F7A2D8FC2536FFD9159232B1BCCBD1D3A67A7 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pokeRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CpokeRotationU3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpokeRotationU3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.Hands.XRHandDevice::get_pinchPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_pinchPosition_mDE2F72E02CE6047FC3E10805DDBFB42273D02E9A (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pinchPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CpinchPositionU3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pinchPosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_pinchPosition_m892535CE6478DE7A07947A66467C63B97ED6F5C7 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pinchPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CpinchPositionU3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchPositionU3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.Hands.XRHandDevice::get_pinchRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_pinchRotation_m30BA19130704B12CE55181C4929E15260ABAFE80 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pinchRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CpinchRotationU3Ek__BackingField_55;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::set_pinchRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_set_pinchRotation_m217DD112093DDB9430C3604C6F219910906A93F6 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pinchRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CpinchRotationU3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchRotationU3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_FinishSetup_m5D526926C4358C1A9EF8FC542BFE4380365679B7 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054F6BD93AAC28754AEB100DE1CA059CDFC14E16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13470604989A63615629E5A680A0C0DB390CD529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5984BB79BF688668638B9A1B07E25BCA1D5E06EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral644C3FA1584BA9B1C8A7F1D8066A89B2A4E70125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FB32CF2D4D6366E1B07BA0162C8F82AA0749F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB164748AA6C4428305F0FBF9AC4C46A7B609E9A5);
		s_Il2CppMethodInitialized = true;
	}
	XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* V_0 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// base.FinishSetup();
		TrackedDevice_FinishSetup_m8FE5D25BCB3BE51AA50D75C97265A8B8D39D0DC5(__this, NULL);
		// gripPosition = GetChildControl<Vector3Control>("gripPosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0;
		L_0 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral644C3FA1584BA9B1C8A7F1D8066A89B2A4E70125, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		XRHandDevice_set_gripPosition_m431F2CFBD25245146DEC8B945BD8C2B72FE98447_inline(__this, L_0, NULL);
		// gripRotation = GetChildControl<QuaternionControl>("gripRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_1;
		L_1 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteral13470604989A63615629E5A680A0C0DB390CD529, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		XRHandDevice_set_gripRotation_m4942C22DF118BCE3D05D2D1E8B82356D98513AE6_inline(__this, L_1, NULL);
		// pokePosition = GetChildControl<Vector3Control>("pokePosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_2;
		L_2 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral5984BB79BF688668638B9A1B07E25BCA1D5E06EB, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		XRHandDevice_set_pokePosition_m270B2A835D0A358EB2418EE5C34BF097D260F680_inline(__this, L_2, NULL);
		// pokeRotation = GetChildControl<QuaternionControl>("pokeRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_3;
		L_3 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteralB164748AA6C4428305F0FBF9AC4C46A7B609E9A5, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		XRHandDevice_set_pokeRotation_m1D1F7A2D8FC2536FFD9159232B1BCCBD1D3A67A7_inline(__this, L_3, NULL);
		// pinchPosition = GetChildControl<Vector3Control>("pinchPosition");
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_4;
		L_4 = InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418(__this, _stringLiteral054F6BD93AAC28754AEB100DE1CA059CDFC14E16, InputControl_GetChildControl_TisVector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A_mD3B77ED4A28875CD650D600E82A0E4C1E9EBD418_RuntimeMethod_var);
		XRHandDevice_set_pinchPosition_m892535CE6478DE7A07947A66467C63B97ED6F5C7_inline(__this, L_4, NULL);
		// pinchRotation = GetChildControl<QuaternionControl>("pinchRotation");
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_5;
		L_5 = InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4(__this, _stringLiteral9FB32CF2D4D6366E1B07BA0162C8F82AA0749F3A, InputControl_GetChildControl_TisQuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1_m6F3533847D96A9AD4363B88D2D912D7ADCE096C4_RuntimeMethod_var);
		XRHandDevice_set_pinchRotation_m217DD112093DDB9430C3604C6F219910906A93F6_inline(__this, L_5, NULL);
		// var deviceDescriptor = XRDeviceDescriptor.FromJson(description.capabilities);
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_6;
		L_6 = InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline(__this, NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = InputDeviceDescription_get_capabilities_mEBF36ED5663709FCA039D1AEA87F6B6C404E76CD_inline((&V_1), NULL);
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_8;
		L_8 = XRDeviceDescriptor_FromJson_m03D93423116B9A644AE635ECE64E325273F0DC17(L_7, NULL);
		V_0 = L_8;
		// if (deviceDescriptor != null)
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_9 = V_0;
		if (!L_9)
		{
			goto IL_00b6;
		}
	}
	{
		// if ((deviceDescriptor.characteristics & InputDeviceCharacteristics.Left) != 0)
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_10 = V_0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->___characteristics_3;
		if (!((int32_t)((int32_t)L_11&((int32_t)256))))
		{
			goto IL_009d;
		}
	}
	{
		// InputSystem.InputSystem.SetDeviceUsage(this, InputSystem.CommonUsages.LeftHand);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___LeftHand_24;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC(__this, L_12, NULL);
		return;
	}

IL_009d:
	{
		// else if ((deviceDescriptor.characteristics & InputDeviceCharacteristics.Right) != 0)
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_13 = V_0;
		NullCheck(L_13);
		uint32_t L_14 = L_13->___characteristics_3;
		if (!((int32_t)((int32_t)L_14&((int32_t)512))))
		{
			goto IL_00b6;
		}
	}
	{
		// InputSystem.InputSystem.SetDeviceUsage(this, InputSystem.CommonUsages.RightHand);
		il2cpp_codegen_runtime_class_init_inline(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_15 = ((CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t64965B2AAF01FEDD2C0216C34CEF31C651464D78_il2cpp_TypeInfo_var))->___RightHand_25;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_mEE432569109A001D84790EF9F5B3E69EC6BAB8EC(__this, L_15, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// UnityEngine.XR.Hands.XRHandDevice UnityEngine.XR.Hands.XRHandDevice::Create(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.Handedness,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_Create_mB95FA6BCC5AD829A28E33D910D7427764CA231DB (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, int32_t ___1_handedness, int32_t ___2_updateSuccessFlags, int32_t ___3_updateType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_OnUpdatedHands_mD778E501738F8AF4C866261F1C29B081DDDEF92A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0674B42F7D88D3EA0BCF0B5FC180DF57438F8EC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D99D50691F900D16B6D8AA0783B756EBE1332BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2182250D7DDE22F830F2A0834C27E0A29868276E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral652C7641E02C28378030955DF259BE76323D08CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68243321EFC3D795FCDA70B3A44A06BA2D751EDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF49C4E10C5F64C73256E009163D24496E38024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3394B374230DAE26DD7F12A563AEF8B036A3DF);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* V_1 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		// var extraCharacteristics = handedness == Handedness.Left ? InputDeviceCharacteristics.Left : InputDeviceCharacteristics.Right;
		int32_t L_0 = ___1_handedness;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((int32_t)512);
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)256);
	}

IL_0010:
	{
		V_0 = G_B3_0;
		// var desc = new InputDeviceDescription
		// {
		//     product = k_DeviceProductName,
		//     capabilities = new XRDeviceDescriptor
		//     {
		//         characteristics = InputDeviceCharacteristics.HandTracking | InputDeviceCharacteristics.TrackedDevice | extraCharacteristics,
		//         inputFeatures = new List<XRFeatureDescriptor>
		//         {
		//             new XRFeatureDescriptor
		//             {
		//                 name = "grip_position",
		//                 featureType = FeatureType.Axis3D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "grip_rotation",
		//                 featureType = FeatureType.Rotation
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "poke_position",
		//                 featureType = FeatureType.Axis3D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "poke_rotation",
		//                 featureType = FeatureType.Rotation
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "pinch_position",
		//                 featureType = FeatureType.Axis3D
		//             },
		//             new XRFeatureDescriptor
		//             {
		//                 name = "pinch_rotation",
		//                 featureType = FeatureType.Rotation
		//             }
		//         }
		//     }.ToJson()
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F));
		InputDeviceDescription_set_product_m7449178AB405AD172791ACF81AE7D38EFDBAE6BF_inline((&V_2), _stringLiteral68243321EFC3D795FCDA70B3A44A06BA2D751EDE, NULL);
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_1 = (XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD*)il2cpp_codegen_object_new(XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRDeviceDescriptor__ctor_mA72E4762F402013416E659F9388E29C3CE192F9A(L_1, NULL);
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_2 = L_1;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		L_2->___characteristics_3 = ((int32_t)(((int32_t)40)|(int32_t)L_3));
		XRDeviceDescriptor_t5263B53D64690896C88567A07464B309B1B1E4DD* L_4 = L_2;
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_5 = (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB*)il2cpp_codegen_object_new(List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460(L_5, List_1__ctor_mB5A115525F03F979B28964F23108C8C5312FC460_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_6 = L_5;
		il2cpp_codegen_initobj((&V_3), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_3)->___name_0 = _stringLiteral0674B42F7D88D3EA0BCF0B5FC180DF57438F8EC9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)_stringLiteral0674B42F7D88D3EA0BCF0B5FC180DF57438F8EC9);
		(&V_3)->___featureType_2 = 5;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_7 = V_3;
		NullCheck(L_6);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_6, L_7, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_8 = L_6;
		il2cpp_codegen_initobj((&V_3), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_3)->___name_0 = _stringLiteral2182250D7DDE22F830F2A0834C27E0A29868276E;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)_stringLiteral2182250D7DDE22F830F2A0834C27E0A29868276E);
		(&V_3)->___featureType_2 = 6;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_8, L_9, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_10 = L_8;
		il2cpp_codegen_initobj((&V_3), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_3)->___name_0 = _stringLiteral652C7641E02C28378030955DF259BE76323D08CB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)_stringLiteral652C7641E02C28378030955DF259BE76323D08CB);
		(&V_3)->___featureType_2 = 5;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_11 = V_3;
		NullCheck(L_10);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_10, L_11, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_12 = L_10;
		il2cpp_codegen_initobj((&V_3), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_3)->___name_0 = _stringLiteral1D99D50691F900D16B6D8AA0783B756EBE1332BB;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)_stringLiteral1D99D50691F900D16B6D8AA0783B756EBE1332BB);
		(&V_3)->___featureType_2 = 6;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_12, L_13, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_14 = L_12;
		il2cpp_codegen_initobj((&V_3), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_3)->___name_0 = _stringLiteralCA3394B374230DAE26DD7F12A563AEF8B036A3DF;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)_stringLiteralCA3394B374230DAE26DD7F12A563AEF8B036A3DF);
		(&V_3)->___featureType_2 = 5;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_14, L_15, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* L_16 = L_14;
		il2cpp_codegen_initobj((&V_3), sizeof(XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2));
		(&V_3)->___name_0 = _stringLiteralBCF49C4E10C5F64C73256E009163D24496E38024;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)_stringLiteralBCF49C4E10C5F64C73256E009163D24496E38024);
		(&V_3)->___featureType_2 = 6;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_inline(L_16, L_17, List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___inputFeatures_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___inputFeatures_5), (void*)L_16);
		NullCheck(L_4);
		String_t* L_18;
		L_18 = XRDeviceDescriptor_ToJson_m001767A3C8D8B4F8D36C6317298E380F4F306314(L_4, NULL);
		InputDeviceDescription_set_capabilities_mAB1C9265029DBB0E4F7713854FB80893EBD59D88_inline((&V_2), L_18, NULL);
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_19 = V_2;
		// var handDevice = InputSystem.InputSystem.AddDevice(desc) as XRHandDevice;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_20;
		L_20 = InputSystem_AddDevice_m8270203079B467F2AF733935FA8A6FE63A12C26D(L_19, NULL);
		V_1 = ((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A*)IsInstClass((RuntimeObject*)L_20, XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var));
		// if (handDevice != null)
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_21 = V_1;
		if (!L_21)
		{
			goto IL_015e;
		}
	}
	{
		// subsystem.updatedHands += handDevice.OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_22 = ___0_subsystem;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_23 = L_22;
		NullCheck(L_23);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_24 = L_23->___updatedHands_8;
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_25 = V_1;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_26 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_26, L_25, (intptr_t)((void*)XRHandDevice_OnUpdatedHands_mD778E501738F8AF4C866261F1C29B081DDDEF92A_RuntimeMethod_var), NULL);
		Delegate_t* L_27;
		L_27 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_24, L_26, NULL);
		NullCheck(L_23);
		L_23->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_27, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_27, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
		// handDevice.m_Handedness = handedness;
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_28 = V_1;
		int32_t L_29 = ___1_handedness;
		NullCheck(L_28);
		L_28->___m_Handedness_57 = L_29;
		// handDevice.OnUpdatedHands(subsystem, updateSuccessFlags, updateType);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_30 = V_1;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_31 = ___0_subsystem;
		int32_t L_32 = ___2_updateSuccessFlags;
		int32_t L_33 = ___3_updateType;
		NullCheck(L_30);
		XRHandDevice_OnUpdatedHands_mD778E501738F8AF4C866261F1C29B081DDDEF92A(L_30, L_31, L_32, L_33, NULL);
	}

IL_015e:
	{
		// return handDevice;
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_34 = V_1;
		return L_34;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::OnUpdatedHands(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_OnUpdatedHands_mD778E501738F8AF4C866261F1C29B081DDDEF92A (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, int32_t ___1_updateSuccessFlags, int32_t ___2_updateType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (m_Handedness == Handedness.Left)
		int32_t L_0 = __this->___m_Handedness_57;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// hand = subsystem.leftHand;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_1 = ___0_subsystem;
		NullCheck(L_1);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_2;
		L_2 = XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline(L_1, NULL);
		V_0 = L_2;
		// var success = XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose | XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints;
		V_6 = 3;
		// isValid = (updateSuccessFlags & success) == success;
		int32_t L_3 = ___1_updateSuccessFlags;
		int32_t L_4 = V_6;
		int32_t L_5 = V_6;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_4))) == ((int32_t)L_5))? 1 : 0);
		goto IL_0032;
	}

IL_001e:
	{
		// hand = subsystem.rightHand;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_6 = ___0_subsystem;
		NullCheck(L_6);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_7;
		L_7 = XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline(L_6, NULL);
		V_0 = L_7;
		// var success = XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose | XRHandSubsystem.UpdateSuccessFlags.RightHandJoints;
		V_7 = ((int32_t)12);
		// isValid = (updateSuccessFlags & success) == success;
		int32_t L_8 = ___1_updateSuccessFlags;
		int32_t L_9 = V_7;
		int32_t L_10 = V_7;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_8&(int32_t)L_9))) == ((int32_t)L_10))? 1 : 0);
	}

IL_0032:
	{
		// if (!m_WasValid && !isValid)
		bool L_11 = __this->___m_WasValid_58;
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		bool L_12 = V_1;
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (m_WasValid && !isValid)
		bool L_13 = __this->___m_WasValid_58;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_007b;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, false);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_15;
		L_15 = TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_15, (bool)0, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.None);
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_16;
		L_16 = TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline(__this, NULL);
		InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0(L_16, 0, (-1.0), InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		// m_WasValid = false;
		__this->___m_WasValid_58 = (bool)0;
		// return;
		return;
	}

IL_007b:
	{
		// if (!m_WasValid && isValid)
		bool L_17 = __this->___m_WasValid_58;
		bool L_18 = V_1;
		if (!((int32_t)(((((int32_t)L_17) == ((int32_t)0))? 1 : 0)&(int32_t)L_18)))
		{
			goto IL_00b9;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(isTracked, true);
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_19;
		L_19 = TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154(L_19, (bool)1, (-1.0), InputSystem_QueueDeltaStateEvent_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC7C188EAF2771209B80FA18F31A7FE494BFAC154_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(trackingState, InputTrackingState.Position | InputTrackingState.Rotation);
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_20;
		L_20 = TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline(__this, NULL);
		InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0(L_20, 3, (-1.0), InputSystem_QueueDeltaStateEvent_TisInputTrackingState_tCBE220E8A09D62DA1C6BD96F76943FE90F15778D_mF8073D5DBC894BF2551E67D740F75CFDC11CFDB0_RuntimeMethod_var);
		// m_WasValid = true;
		__this->___m_WasValid_58 = (bool)1;
	}

IL_00b9:
	{
		// if (hand.GetJoint(XRHandJointID.Wrist).TryGetPose(out var wristPose))
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_21;
		L_21 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&V_0), 1, NULL);
		V_8 = L_21;
		bool L_22;
		L_22 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&V_8), (&V_2), NULL);
		if (!L_22)
		{
			goto IL_0102;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(devicePosition, wristPose.position);
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_23;
		L_23 = TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24.___position_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7(L_23, L_25, (-1.0), InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(deviceRotation, wristPose.rotation);
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_26;
		L_26 = TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_27 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = L_27.___rotation_1;
		InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103(L_26, L_28, (-1.0), InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
	}

IL_0102:
	{
		// if (hand.GetJoint(XRHandJointID.Palm).TryGetPose(out var palmPose))
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_29;
		L_29 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&V_0), 2, NULL);
		V_8 = L_29;
		bool L_30;
		L_30 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&V_8), (&V_3), NULL);
		if (!L_30)
		{
			goto IL_014b;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(gripPosition, palmPose.position);
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_31;
		L_31 = XRHandDevice_get_gripPosition_m6D8BB7D6EC1C3C523FD673E1B8C87BEF7CFEB27C_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32.___position_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7(L_31, L_33, (-1.0), InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(gripRotation, palmPose.rotation);
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_34;
		L_34 = XRHandDevice_get_gripRotation_mFA06B406143925D1C821A2034A84FDF52F4E3870_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_35 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = L_35.___rotation_1;
		InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103(L_34, L_36, (-1.0), InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
	}

IL_014b:
	{
		// if (hand.GetJoint(XRHandJointID.IndexTip).TryGetPose(out var indexTipPose))
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_37;
		L_37 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&V_0), ((int32_t)11), NULL);
		V_8 = L_37;
		bool L_38;
		L_38 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&V_8), (&V_4), NULL);
		if (!L_38)
		{
			goto IL_0197;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(pokePosition, indexTipPose.position);
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_39;
		L_39 = XRHandDevice_get_pokePosition_m236F011AA0DE638CEBA04F21B85F5BD184EC3645_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_40 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = L_40.___position_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7(L_39, L_41, (-1.0), InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(pokeRotation, indexTipPose.rotation);
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_42;
		L_42 = XRHandDevice_get_pokeRotation_m6AAAA63EAD64ECEA4DE89F1707C1180B5F78CA83_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_43 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = L_43.___rotation_1;
		InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103(L_42, L_44, (-1.0), InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
	}

IL_0197:
	{
		// if (hand.GetJoint(XRHandJointID.ThumbTip).TryGetPose(out var thumbTipPose))
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_45;
		L_45 = XRHand_GetJoint_mDD5E7D4F45C9701AF8911EA4394F258CB5E68035((&V_0), 6, NULL);
		V_8 = L_45;
		bool L_46;
		L_46 = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E((&V_8), (&V_5), NULL);
		if (!L_46)
		{
			goto IL_01e2;
		}
	}
	{
		// InputSystem.InputSystem.QueueDeltaStateEvent(pinchPosition, thumbTipPose.position);
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_47;
		L_47 = XRHandDevice_get_pinchPosition_mDE2F72E02CE6047FC3E10805DDBFB42273D02E9A_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_48 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = L_48.___position_0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7(L_47, L_49, (-1.0), InputSystem_QueueDeltaStateEvent_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFF0CCDC30A5D62C6990D27B74ED270AD31881BD7_RuntimeMethod_var);
		// InputSystem.InputSystem.QueueDeltaStateEvent(pinchRotation, thumbTipPose.rotation);
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_50;
		L_50 = XRHandDevice_get_pinchRotation_m30BA19130704B12CE55181C4929E15260ABAFE80_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = L_51.___rotation_1;
		InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103(L_50, L_52, (-1.0), InputSystem_QueueDeltaStateEvent_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m14B468181A571FC5630CCFD6A589FC979C49F103_RuntimeMethod_var);
	}

IL_01e2:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice__cctor_mD1CCB26D93DB087256FEF452DE1E297EC3483FC1 (const RuntimeMethod* method) 
{
	{
		// static XRHandDevice() => Initialize();
		XRHandDevice_Initialize_m9E1726F0421D00A4E8EDFC72522B69B90CD56633(NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice_Initialize_m9E1726F0421D00A4E8EDFC72522B69B90CD56633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_RegisterLayout_TisXRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_mD646F8CCFD8588E20F07C482A2CB64DC40F53E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68243321EFC3D795FCDA70B3A44A06BA2D751EDE);
		s_Il2CppMethodInitialized = true;
	}
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// InputSystem.InputSystem.RegisterLayout<XRHandDevice>(
		//     matches: new InputDeviceMatcher()
		//     .WithProduct(k_DeviceProductName));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555* L_0 = (&V_0);
		il2cpp_codegen_initobj(L_0, sizeof(InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555));
		InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 L_1;
		L_1 = InputDeviceMatcher_WithProduct_mE94024C38110251CBECB493C7753D417FFC5FD2E(L_0, _stringLiteral68243321EFC3D795FCDA70B3A44A06BA2D751EDE, (bool)1, NULL);
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_mD369CAC1BA03979662923E5D5E9FAF1F98E252EB_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_TisXRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_mD646F8CCFD8588E20F07C482A2CB64DC40F53E06((String_t*)NULL, L_2, InputSystem_RegisterLayout_TisXRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_mD646F8CCFD8588E20F07C482A2CB64DC40F53E06_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandDevice__ctor_m87BE630B8E3697174BDA3444B15470D6A6AC0901 (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		TrackedDevice__ctor_mB27788B88E0EACB28065D20F6FE6E39AF391B375(__this, NULL);
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
// UnityEngine.XR.Hands.XRHandJointID UnityEngine.XR.Hands.XRHandJoint::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointID id => (XRHandJointID)(m_IdAndHandedness & ~k_IsRightHandBit);
		int32_t L_0 = __this->___m_IdAndHandedness_0;
		return (int32_t)(((int32_t)(L_0&((int32_t)2147483647LL))));
	}
}
IL2CPP_EXTERN_C  int32_t XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.Hands.Handedness UnityEngine.XR.Hands.XRHandJoint::get_handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_handedness_m939EE07D84EAFA251284D43B4E5FA21075CC2FA4 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => (m_IdAndHandedness & k_IsRightHandBit) != 0 ? Handedness.Right : Handedness.Left;
		int32_t L_0 = __this->___m_IdAndHandedness_0;
		if (((int32_t)(L_0&((int32_t)-2147483648LL))))
		{
			goto IL_0010;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0010:
	{
		return (int32_t)(2);
	}
}
IL2CPP_EXTERN_C  int32_t XRHandJoint_get_handedness_m939EE07D84EAFA251284D43B4E5FA21075CC2FA4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHandJoint_get_handedness_m939EE07D84EAFA251284D43B4E5FA21075CC2FA4(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.Hands.XRHandJointTrackingState UnityEngine.XR.Hands.XRHandJoint::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointTrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetRadius(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, float* ___0_radius, const RuntimeMethod* method) 
{
	{
		// if ((m_TrackingState & XRHandJointTrackingState.Radius) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&1)))
		{
			goto IL_0013;
		}
	}
	{
		// radius = 0.0f;
		float* L_1 = ___0_radius;
		*((float*)L_1) = (float)(0.0f);
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// radius = m_Radius;
		float* L_2 = ___0_radius;
		float L_3 = __this->___m_Radius_2;
		*((float*)L_2) = (float)L_3;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D_AdjustorThunk (RuntimeObject* __this, float* ___0_radius, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetRadius_m992C3DC67D51BCF5F949503D98178BE191D2526D(_thisAdjusted, ___0_radius, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((m_TrackingState & XRHandJointTrackingState.Pose) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&2)))
		{
			goto IL_0017;
		}
	}
	{
		// pose = Pose.identity;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = ___0_pose;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_1 = L_2;
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// pose = m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = ___0_pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = __this->___m_Pose_1;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_3 = L_4;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_pose, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetPose_m1AA1E69E7753E1CC4E64F8649751BF7D30CE113E(_thisAdjusted, ___0_pose, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetLinearVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_linearVelocity, const RuntimeMethod* method) 
{
	{
		// if ((m_TrackingState & XRHandJointTrackingState.LinearVelocity) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&4)))
		{
			goto IL_0017;
		}
	}
	{
		// linearVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___0_linearVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1 = L_2;
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// linearVelocity = m_LinearVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___0_linearVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_LinearVelocity_3;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_4;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_linearVelocity, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetLinearVelocity_m3BC24DBDEB210B51568D21317B1B3574A6B57F6B(_thisAdjusted, ___0_linearVelocity, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandJoint::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_angularVelocity, const RuntimeMethod* method) 
{
	{
		// if ((m_TrackingState & XRHandJointTrackingState.AngularVelocity) == XRHandJointTrackingState.None)
		int32_t L_0 = __this->___m_TrackingState_5;
		if (((int32_t)((int32_t)L_0&8)))
		{
			goto IL_0017;
		}
	}
	{
		// angularVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___0_angularVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1 = L_2;
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// angularVelocity = m_AngularVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___0_angularVelocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_AngularVelocity_4;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3 = L_4;
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_angularVelocity, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRHandJoint_TryGetAngularVelocity_mA486ED68AE5883EC4EE22A4403457E5F3F64CF63(_thisAdjusted, ___0_angularVelocity, method);
	return _returnValue;
}
// System.String UnityEngine.XR.Hands.XRHandJoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5 (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51DE197AFC3146D004089E251200E7103E6E2372);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//     "[{0} {1}] Pose: {2} | Radius: {3} | Linear Velocity: {4} | Angular Velocity: {5} | Tracking State: {6}",
		//     handedness, id, m_Pose.ToString("F4"), m_Radius.ToString("F4"), m_LinearVelocity.ToString("F4"), m_AngularVelocity.ToString("F4"), m_TrackingState);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int32_t L_2;
		L_2 = XRHandJoint_get_handedness_m939EE07D84EAFA251284D43B4E5FA21075CC2FA4(__this, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t L_6;
		L_6 = XRHandJoint_get_id_m22F4DAECB98383D196AA9549A8682B73270AB394(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(XRHandJointID_tC0BE8E1AC7717425649709BB62AAD56304FCC081_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_10 = (&__this->___m_Pose_1);
		String_t* L_11;
		L_11 = Pose_ToString_m8C3203B81EB15980F16E07C63B6FBBEECE50A6EF(L_10, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_9;
		float* L_13 = (&__this->___m_Radius_2);
		String_t* L_14;
		L_14 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_13, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___m_LinearVelocity_3);
		String_t* L_17;
		L_17 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1(L_16, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___m_AngularVelocity_4);
		String_t* L_20;
		L_20 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1(L_19, _stringLiteral1DA847B0C8711F8529FBC7BC20711A1361A8B323, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		int32_t L_22 = __this->___m_TrackingState_5;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(XRHandJointTrackingState_tFAA84D8000155CA6945B5402532B00365379D6DA_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral51DE197AFC3146D004089E251200E7103E6E2372, L_21, NULL);
		return L_25;
	}
}
IL2CPP_EXTERN_C  String_t* XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRHandJoint_ToString_m1DB56DCD567E7C649706D8E217B9D554C3F218F5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem__ctor_m426A5EE809B86700F493D593F066DCF77FB39ABA (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRHandSubsystem()
		SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7(__this, SubsystemWithProvider_3__ctor_mD0E3B3CB39454385FBAC584AFB5748BC7D5727D7_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_leftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand leftHand => m_LeftHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_LeftHand_4;
		return L_0;
	}
}
// UnityEngine.XR.Hands.XRHand UnityEngine.XR.Hands.XRHandSubsystem::get_rightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand rightHand => m_RightHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_RightHand_5;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<System.Boolean> UnityEngine.XR.Hands.XRHandSubsystem::get_jointsInLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB XRHandSubsystem_get_jointsInLayout_m4C3FFC2BE1D371669B3A0EE43E496D69AA20952A (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public NativeArray<bool> jointsInLayout => m_JointsInLayout;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_0 = __this->___m_JointsInLayout_6;
		return L_0;
	}
}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::get_updateSuccessFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public UpdateSuccessFlags updateSuccessFlags { get; protected set; }
		int32_t L_0 = __this->___U3CupdateSuccessFlagsU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::set_updateSuccessFlags(UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem_set_updateSuccessFlags_m3E10B3F255A29BA698114BBD603E42D8C32801BC (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public UpdateSuccessFlags updateSuccessFlags { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CupdateSuccessFlagsU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRHandSubsystem_TryUpdateHands_mC1614F031312013D3E5873B99881A75AEC936923 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, int32_t ___0_updateType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B6_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B5_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B11_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B10_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B16_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B15_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B21_0 = NULL;
	Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* G_B20_0 = NULL;
	{
		// if (!running)
		bool L_0;
		L_0 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return UpdateSuccessFlags.None;
		return (int32_t)(0);
	}

IL_000a:
	{
		// updateSuccessFlags = provider.TryUpdateHands(
		//     updateType,
		//     ref m_LeftHand.m_RootPose,
		//     m_LeftHand.m_Joints,
		//     ref m_RightHand.m_RootPose,
		//     m_RightHand.m_Joints);
		XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* L_1;
		L_1 = SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_inline(__this, SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		int32_t L_2 = ___0_updateType;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_3 = (&__this->___m_LeftHand_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&L_3->___m_RootPose_1);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_5 = (&__this->___m_LeftHand_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_6 = L_5->___m_Joints_0;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_7 = (&__this->___m_RightHand_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_8 = (&L_7->___m_RootPose_1);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_9 = (&__this->___m_RightHand_5);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_10 = L_9->___m_Joints_0;
		NullCheck(L_1);
		int32_t L_11;
		L_11 = VirtualFuncInvoker5< int32_t, int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 >::Invoke(9 /* UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>) */, L_1, L_2, L_4, L_6, L_8, L_10);
		XRHandSubsystem_set_updateSuccessFlags_m3E10B3F255A29BA698114BBD603E42D8C32801BC_inline(__this, L_11, NULL);
		// var wasLeftHandTracked = m_LeftHand.isTracked;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_12 = (&__this->___m_LeftHand_4);
		bool L_13;
		L_13 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(L_12, NULL);
		V_0 = L_13;
		// var success = UpdateSuccessFlags.LeftHandRootPose | UpdateSuccessFlags.LeftHandJoints;
		V_1 = 3;
		// m_LeftHand.isTracked = (updateSuccessFlags & success) == success;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_14 = (&__this->___m_LeftHand_4);
		int32_t L_15;
		L_15 = XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline(__this, NULL);
		int32_t L_16 = V_1;
		int32_t L_17 = V_1;
		XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_inline(L_14, (bool)((((int32_t)((int32_t)((int32_t)L_15&(int32_t)L_16))) == ((int32_t)L_17))? 1 : 0), NULL);
		// if (!wasLeftHandTracked && m_LeftHand.isTracked)
		bool L_18 = V_0;
		if (L_18)
		{
			goto IL_0095;
		}
	}
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_19 = (&__this->___m_LeftHand_4);
		bool L_20;
		L_20 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// trackingAcquired?.Invoke(m_LeftHand);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_21 = __this->___trackingAcquired_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_22 = L_21;
		G_B5_0 = L_22;
		if (L_22)
		{
			G_B6_0 = L_22;
			goto IL_0088;
		}
	}
	{
		goto IL_00bc;
	}

IL_0088:
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_23 = __this->___m_LeftHand_4;
		NullCheck(G_B6_0);
		Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_inline(G_B6_0, L_23, NULL);
		goto IL_00bc;
	}

IL_0095:
	{
		// else if (wasLeftHandTracked && !m_LeftHand.isTracked)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_25 = (&__this->___m_LeftHand_4);
		bool L_26;
		L_26 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(L_25, NULL);
		if (L_26)
		{
			goto IL_00bc;
		}
	}
	{
		// trackingLost?.Invoke(m_LeftHand);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_27 = __this->___trackingLost_10;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_28 = L_27;
		G_B10_0 = L_28;
		if (L_28)
		{
			G_B11_0 = L_28;
			goto IL_00b1;
		}
	}
	{
		goto IL_00bc;
	}

IL_00b1:
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_29 = __this->___m_LeftHand_4;
		NullCheck(G_B11_0);
		Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_inline(G_B11_0, L_29, NULL);
	}

IL_00bc:
	{
		// var wasRightHandTracked = m_RightHand.isTracked;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_30 = (&__this->___m_RightHand_5);
		bool L_31;
		L_31 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(L_30, NULL);
		V_2 = L_31;
		// success = UpdateSuccessFlags.RightHandRootPose | UpdateSuccessFlags.RightHandJoints;
		V_1 = ((int32_t)12);
		// m_RightHand.isTracked = (updateSuccessFlags & success) == success;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_32 = (&__this->___m_RightHand_5);
		int32_t L_33;
		L_33 = XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline(__this, NULL);
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_inline(L_32, (bool)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)L_34))) == ((int32_t)L_35))? 1 : 0), NULL);
		// if (!wasRightHandTracked && m_RightHand.isTracked)
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_010a;
		}
	}
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_37 = (&__this->___m_RightHand_5);
		bool L_38;
		L_38 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(L_37, NULL);
		if (!L_38)
		{
			goto IL_010a;
		}
	}
	{
		// trackingAcquired?.Invoke(m_RightHand);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_39 = __this->___trackingAcquired_9;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_40 = L_39;
		G_B15_0 = L_40;
		if (L_40)
		{
			G_B16_0 = L_40;
			goto IL_00fd;
		}
	}
	{
		goto IL_0131;
	}

IL_00fd:
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_41 = __this->___m_RightHand_5;
		NullCheck(G_B16_0);
		Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_inline(G_B16_0, L_41, NULL);
		goto IL_0131;
	}

IL_010a:
	{
		// else if (wasRightHandTracked && !m_RightHand.isTracked)
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_0131;
		}
	}
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_43 = (&__this->___m_RightHand_5);
		bool L_44;
		L_44 = XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline(L_43, NULL);
		if (L_44)
		{
			goto IL_0131;
		}
	}
	{
		// trackingLost?.Invoke(m_RightHand);
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_45 = __this->___trackingLost_10;
		Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* L_46 = L_45;
		G_B20_0 = L_46;
		if (L_46)
		{
			G_B21_0 = L_46;
			goto IL_0126;
		}
	}
	{
		goto IL_0131;
	}

IL_0126:
	{
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_47 = __this->___m_RightHand_5;
		NullCheck(G_B21_0);
		Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_inline(G_B21_0, L_47, NULL);
	}

IL_0131:
	{
		// if (updatedHands != null)
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_48 = __this->___updatedHands_8;
		if (!L_48)
		{
			goto IL_014c;
		}
	}
	{
		// updatedHands.Invoke(this, updateSuccessFlags, updateType);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_49 = __this->___updatedHands_8;
		int32_t L_50;
		L_50 = XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline(__this, NULL);
		int32_t L_51 = ___0_updateType;
		NullCheck(L_49);
		Action_3_Invoke_m7E17F0D4A856D31C4D71372AB75DFB2B8A375055_inline(L_49, __this, L_50, L_51, NULL);
	}

IL_014c:
	{
		// if (handsUpdated != null)
		Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* L_52 = __this->___handsUpdated_11;
		if (!L_52)
		{
			goto IL_0166;
		}
	}
	{
		// handsUpdated.Invoke(updateSuccessFlags, updateType);
		Action_2_tA93638A9D51C46813D719FA524415A74B9B2EADF* L_53 = __this->___handsUpdated_11;
		int32_t L_54;
		L_54 = XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline(__this, NULL);
		int32_t L_55 = ___0_updateType;
		NullCheck(L_53);
		Action_2_Invoke_m7A623BC79543095CAEA9BFBF393C402551C5744E_inline(L_53, L_54, L_55, NULL);
	}

IL_0166:
	{
		// return updateSuccessFlags;
		int32_t L_56;
		L_56 = XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline(__this, NULL);
		return L_56;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::OnCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem_OnCreate_m35A20B2AB7863D483252327A1769F674743F4359 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// m_JointsInLayout = new NativeArray<bool>(XRHandJointID.EndMarker.ToIndex(), Allocator.Persistent);
		int32_t L_0;
		L_0 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86((&L_1), L_0, 4, 1, /*hidden argument*/NativeArray_1__ctor_m262609CCB123CE8BB59524B83D08D2CFA8C33A86_RuntimeMethod_var);
		__this->___m_JointsInLayout_6 = L_1;
		// provider.GetHandLayout(m_JointsInLayout);
		XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* L_2;
		L_2 = SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_inline(__this, SubsystemWithProvider_3_get_provider_m1A5ABF165D4824458551B102F223B6FF699F12CD_RuntimeMethod_var);
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_3 = __this->___m_JointsInLayout_6;
		NullCheck(L_2);
		VirtualActionInvoker1< NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB >::Invoke(8 /* System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::GetHandLayout(Unity.Collections.NativeArray`1<System.Boolean>) */, L_2, L_3);
		// m_LeftHand = new XRHand(Handedness.Left, Allocator.Persistent);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933((&L_4), 1, 4, /*hidden argument*/NULL);
		__this->___m_LeftHand_4 = L_4;
		// m_RightHand = new XRHand(Handedness.Right, Allocator.Persistent);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_5;
		memset((&L_5), 0, sizeof(L_5));
		XRHand__ctor_mC7F80DF20FE3E7108763FB225D451D1D684A5933((&L_5), 2, 4, /*hidden argument*/NULL);
		__this->___m_RightHand_5 = L_5;
		// for (int jointIndex = XRHandJointID.BeginMarker.ToIndex(); jointIndex < XRHandJointID.EndMarker.ToIndex(); ++jointIndex)
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(1, NULL);
		V_0 = L_6;
		goto IL_00d0;
	}

IL_004b:
	{
		// if (!m_JointsInLayout[jointIndex])
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_7 = (&__this->___m_JointsInLayout_6);
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(bool, (L_7)->___m_Buffer_0, L_8);
		if (L_9)
		{
			goto IL_00cc;
		}
	}
	{
		// var id = XRHandJointIDUtility.FromIndex(jointIndex);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = XRHandJointIDUtility_FromIndex_m3A7C3DE3C3C5F89090C7B3B01B2E93ADC526BA2E(L_10, NULL);
		V_1 = L_11;
		// m_LeftHand.m_Joints[jointIndex] = XRHandProviderUtility.CreateJoint(
		//     Handedness.Left,
		//     XRHandJointTrackingState.WillNeverBeValid,
		//     id,
		//     Pose.identity);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_12 = (&__this->___m_LeftHand_4);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_13 = (&L_12->___m_Joints_0);
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16;
		L_16 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_19;
		L_19 = XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75(1, ((int32_t)16), L_15, L_16, (0.0f), L_17, L_18, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, (L_13)->___m_Buffer_0, L_14, (L_19));
		// m_RightHand.m_Joints[jointIndex] = XRHandProviderUtility.CreateJoint(
		//     Handedness.Right,
		//     XRHandJointTrackingState.WillNeverBeValid,
		//     id,
		//     Pose.identity);
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_20 = (&__this->___m_RightHand_5);
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6* L_21 = (&L_20->___m_Joints_0);
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24;
		L_24 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_27;
		L_27 = XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75(2, ((int32_t)16), L_23, L_24, (0.0f), L_25, L_26, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783, (L_21)->___m_Buffer_0, L_22, (L_27));
	}

IL_00cc:
	{
		// for (int jointIndex = XRHandJointID.BeginMarker.ToIndex(); jointIndex < XRHandJointID.EndMarker.ToIndex(); ++jointIndex)
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00d0:
	{
		// for (int jointIndex = XRHandJointID.BeginMarker.ToIndex(); jointIndex < XRHandJointID.EndMarker.ToIndex(); ++jointIndex)
		int32_t L_29 = V_0;
		int32_t L_30;
		L_30 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)27), NULL);
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystem_OnDestroy_m69D4CA97F814CE1DE89EE54107DB6E94335F1B90 (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDestroy();
		SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6(__this, SubsystemWithProvider_3_OnDestroy_mF4EC71DF350944365B3A06C80A3B10B11024B1D6_RuntimeMethod_var);
		// m_LeftHand.Dispose();
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_0 = (&__this->___m_LeftHand_4);
		XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5(L_0, NULL);
		// m_RightHand.Dispose();
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* L_1 = (&__this->___m_RightHand_5);
		XRHand_Dispose_mCDBEBDCC8FF815323680F5C3F7595F2BCE6D23B5(L_1, NULL);
		// m_JointsInLayout.Dispose();
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB* L_2 = (&__this->___m_JointsInLayout_6);
		NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344(L_2, NativeArray_1_Dispose_mF16E4FD33476D6947F979B1E1D9F901CE0A04344_RuntimeMethod_var);
		// }
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
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::Register(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor_Register_m9C6273F6EAA053F684929058B9A1113261DFF95F (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRHandSubsystemDescriptor(cinfo));
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_0 = ___0_cinfo;
		XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* L_1 = (XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73*)il2cpp_codegen_object_new(XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRHandSubsystemDescriptor__ctor_m1562A286279394BEF901F8EDBA7D5D2A611AFB31(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor::.ctor(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemDescriptor__ctor_m1562A286279394BEF901F8EDBA7D5D2A611AFB31 (XRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRHandSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8(__this, SubsystemDescriptorWithProvider_2__ctor_m432716B80E83A07AB52ED398264191D07F03E6D8_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// }
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
// Conversion methods for marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_pinvoke(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_pinvoke_back(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke& marshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_pinvoke_cleanup(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_com(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_com_back(const Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com& marshaled, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshal_com_cleanup(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		// int hashCode = id != null ? id.GetHashCode() : 0;
		String_t* L_0;
		L_0 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1;
		L_1 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// hashCode = hashCode * 486187739 + (providerType != null ? providerType.GetHashCode() : 0);
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply(G_B3_0, ((int32_t)486187739)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		Type_t* L_5;
		L_5 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		// hashCode = hashCode * 486187739 + (subsystemTypeOverride != null ? subsystemTypeOverride.GetHashCode() : 0);
		Type_t* L_7;
		L_7 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, (Type_t*)NULL, NULL);
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0)), ((int32_t)486187739)));
		if (L_8)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(G_B6_1, G_B6_0)), ((int32_t)486187739)));
			goto IL_0050;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_005b;
	}

IL_0050:
	{
		Type_t* L_9;
		L_9 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_9);
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
	}

IL_005b:
	{
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(G_B9_1, G_B9_0));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mAC2CF52DB8305CFB37D76942147668EF627C2B34(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return id == other.id &&
		//     providerType == other.providerType &&
		//     subsystemTypeOverride == other.subsystemTypeOverride;
		String_t* L_0;
		L_0 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline(__this, NULL);
		Type_t* L_7;
		L_7 = Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_7, NULL);
		return L_8;
	}

IL_003b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985_AdjustorThunk (RuntimeObject* __this, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_other, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985(__this, ((*(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*)((Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*)(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*)UnBox(L_1, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mD5D6A70EE41012FFB1C5887F641572915F9E4DF0(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo,UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m61389941533DB73A7548C2A2BDAC0782BFA10F42 (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_lhs, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo,UnityEngine.XR.Hands.XRHandSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mA91A989AC6CE5100F879B29DD0BE17EC64F0FCBF (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___0_lhs, Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator!=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_m64EF31C4E5AAC0DF8C422D129036DAC313FF1985((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility::CreateJoint(UnityEngine.XR.Hands.Handedness,UnityEngine.XR.Hands.XRHandJointTrackingState,UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Pose,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHandProviderUtility_CreateJoint_m821C313C0A76868D0E5BB50368DD0EF240237B75 (int32_t ___0_handedness, int32_t ___1_trackingState, int32_t ___2_id, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___3_pose, float ___4_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_linearVelocity, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___6_angularVelocity, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int idAndHandedness = (int)id;
		int32_t L_0 = ___2_id;
		V_0 = L_0;
		// if (handedness == Handedness.Right)
		int32_t L_1 = ___0_handedness;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_000e;
		}
	}
	{
		// idAndHandedness |= XRHandJoint.k_IsRightHandBit;
		int32_t L_2 = V_0;
		V_0 = ((int32_t)(L_2|((int32_t)-2147483648LL)));
	}

IL_000e:
	{
		// return new XRHandJoint
		// {
		//     m_TrackingState = trackingState,
		//     m_IdAndHandedness = idAndHandedness,
		//     m_Pose = pose,
		//     m_Radius = radius,
		//     m_LinearVelocity = linearVelocity,
		//     m_AngularVelocity = angularVelocity,
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		int32_t L_3 = ___1_trackingState;
		(&V_1)->___m_TrackingState_5 = L_3;
		int32_t L_4 = V_0;
		(&V_1)->___m_IdAndHandedness_0 = L_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5 = ___3_pose;
		(&V_1)->___m_Pose_1 = L_5;
		float L_6 = ___4_radius;
		(&V_1)->___m_Radius_2 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___5_linearVelocity;
		(&V_1)->___m_LinearVelocity_3 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___6_angularVelocity;
		(&V_1)->___m_AngularVelocity_4 = L_8;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.XR.Hands.XRHandJoint UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility::CreateJoint(UnityEngine.XR.Hands.XRHandJointTrackingState,UnityEngine.XR.Hands.XRHandJointID,UnityEngine.Pose,System.Single,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 XRHandProviderUtility_CreateJoint_m3DDFE9C41E64DD6EAA51C050A2FC3BC191A30371 (int32_t ___0_trackingState, int32_t ___1_id, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___2_pose, float ___3_radius, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___4_linearVelocity, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___5_angularVelocity, const RuntimeMethod* method) 
{
	XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new XRHandJoint
		// {
		//     m_TrackingState = trackingState,
		//     m_IdAndHandedness = (int)id,
		//     m_Pose = pose,
		//     m_Radius = radius,
		//     m_LinearVelocity = linearVelocity,
		//     m_AngularVelocity = angularVelocity,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783));
		int32_t L_0 = ___0_trackingState;
		(&V_0)->___m_TrackingState_5 = L_0;
		int32_t L_1 = ___1_id;
		(&V_0)->___m_IdAndHandedness_0 = L_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ___2_pose;
		(&V_0)->___m_Pose_1 = L_2;
		float L_3 = ___3_radius;
		(&V_0)->___m_Radius_2 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___4_linearVelocity;
		(&V_0)->___m_LinearVelocity_3 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___5_angularVelocity;
		(&V_0)->___m_AngularVelocity_4 = L_5;
		XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783 L_6 = V_0;
		return L_6;
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
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::.ctor(UnityEngine.XR.Hands.XRHandSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater__ctor_mDFF3EED82E3F9CA7181F9C12537F4313D9A306C1 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, const RuntimeMethod* method) 
{
	{
		// public SubsystemUpdater(XRHandSubsystem subsystem) => m_Subsystem = subsystem;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public SubsystemUpdater(XRHandSubsystem subsystem) => m_Subsystem = subsystem;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = ___0_subsystem;
		__this->___m_Subsystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Start_mEC50F9FCA9412717D6599F92D2A68A925C393ADD (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7EF93597679C277BA32488A121B6CDAD517FEAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC91683EF460A3E29CBB90BB1304E5887E3963B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_3 = NULL;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_7 = NULL;
	int32_t V_8 = 0;
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B23_0 = 0;
	{
		// int earlyUpdateStepIndex = -1;
		V_0 = (-1);
		// var playerLoop = UnityEngine.LowLevel.PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_0;
		L_0 = PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3(NULL);
		V_1 = L_0;
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		V_5 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		// if (playerLoop.subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_1 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_2 = L_1.___subSystemList_1;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		Type_t* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// earlyUpdateStepIndex = subSystemIndex;
		int32_t L_8 = V_5;
		V_0 = L_8;
		// break;
		goto IL_0047;
	}

IL_0035:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003b:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_10 = V_5;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_11 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_12 = L_11.___subSystemList_1;
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000d;
		}
	}

IL_0047:
	{
		// if (earlyUpdateStepIndex < 0)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError("Couldn't find PlayerLoop.EarlyUpdate step - XRHandSubsystem will not automatically update!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC7EF93597679C277BA32488A121B6CDAD517FEAA, NULL);
		// return;
		return;
	}

IL_0056:
	{
		// int xrUpdateIndex = -1;
		V_2 = (-1);
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		V_6 = 0;
		goto IL_0096;
	}

IL_005d:
	{
		// if (playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate.XRUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_14 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_15 = L_14.___subSystemList_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___subSystemList_1;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		Type_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		// xrUpdateIndex = subSystemIndex;
		int32_t L_23 = V_6;
		V_2 = L_23;
		// break;
		goto IL_00ad;
	}

IL_0090:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0096:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_25 = V_6;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_26 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_27 = L_26.___subSystemList_1;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___subSystemList_1;
		NullCheck(L_29);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_005d;
		}
	}

IL_00ad:
	{
		// if (xrUpdateIndex < 0)
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00bc;
		}
	}
	{
		// Debug.LogError("Couldn't find PlayerLoop.EarlyUpdate.XRUpdate step - XRHandSubsystem will not automatically update!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEFC91683EF460A3E29CBB90BB1304E5887E3963B, NULL);
		// return;
		return;
	}

IL_00bc:
	{
		// var systems = playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_31 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_32 = L_31.___subSystemList_1;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___subSystemList_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___subSystemList_1;
		V_3 = L_36;
		// if (systems != null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_37 = V_3;
		if (!L_37)
		{
			goto IL_0112;
		}
	}
	{
		// foreach (var system in systems)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_38 = V_3;
		V_7 = L_38;
		V_8 = 0;
		goto IL_010a;
	}

IL_00e4:
	{
		// foreach (var system in systems)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_39 = V_7;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		// if (system.type == typeof(XRHandSubsystemPlayerLoopRunnerUpdateSystem))
		Type_t* L_43 = L_42.___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0104;
		}
	}
	{
		// return;
		return;
	}

IL_0104:
	{
		int32_t L_47 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_010a:
	{
		// foreach (var system in systems)
		int32_t L_48 = V_8;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_49 = V_7;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_00e4;
		}
	}

IL_0112:
	{
		// var updatedSystems = new UnityEngine.LowLevel.PlayerLoopSystem[systems != null ? systems.Length + 1 : 1];
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_50 = V_3;
		if (L_50)
		{
			goto IL_0118;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_011d;
	}

IL_0118:
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_51 = V_3;
		NullCheck(L_51);
		G_B23_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_51)->max_length)), 1));
	}

IL_011d:
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_52 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)(PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)SZArrayNew(PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D_il2cpp_TypeInfo_var, (uint32_t)G_B23_0);
		V_4 = L_52;
		// if (systems != null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_53 = V_3;
		if (!L_53)
		{
			goto IL_0134;
		}
	}
	{
		// Array.Copy(systems, 0, updatedSystems, 1, systems.Length);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_54 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_55 = V_4;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_56 = V_3;
		NullCheck(L_56);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_54, 0, (RuntimeArray*)L_55, 1, ((int32_t)(((RuntimeArray*)L_56)->max_length)), NULL);
	}

IL_0134:
	{
		// updatedSystems[0] = new UnityEngine.LowLevel.PlayerLoopSystem
		// {
		//     type = typeof(XRHandSubsystemPlayerLoopRunnerUpdateSystem),
		//     updateDelegate = () => OnUpdate()
		// };
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_57 = V_4;
		il2cpp_codegen_initobj((&V_9), sizeof(PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		(&V_9)->___type_0 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_9)->___type_0), (void*)L_59);
		UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4* L_60 = (UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4*)il2cpp_codegen_object_new(UpdateFunction_t1C48B7EECBE47AC123A9D9D7D9D2A9EE951C56C4_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		UpdateFunction__ctor_m0D1D766F22D02176396DA6745A60EA046EE8227B(L_60, __this, (intptr_t)((void*)SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6_RuntimeMethod_var), NULL);
		(&V_9)->___updateDelegate_2 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_9)->___updateDelegate_2), (void*)L_60);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_61 = V_9;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F)L_61);
		// Application.onBeforeRender += OnBeforeRender;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_62 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_62, __this, (intptr_t)((void*)SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var), NULL);
		Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394(L_62, NULL);
		// playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList = updatedSystems;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_63 = V_1;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_64 = L_63.___subSystemList_1;
		int32_t L_65 = V_0;
		NullCheck(L_64);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_66 = ((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___subSystemList_1;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_68 = V_4;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___subSystemList_1 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___subSystemList_1), (void*)L_68);
		// UnityEngine.LowLevel.PlayerLoop.SetPlayerLoop(playerLoop);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_69 = V_1;
		PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B(L_69, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// Application.onBeforeRender -= OnBeforeRender;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961_RuntimeMethod_var), NULL);
		Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24(L_0, NULL);
		// var playerLoop = UnityEngine.LowLevel.PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_1;
		L_1 = PlayerLoop_GetCurrentPlayerLoop_mDC8CBE388799E9CF78200030C101875B1ABD4BA3(NULL);
		V_0 = L_1;
		// int earlyUpdateStepIndex = -1;
		V_1 = (-1);
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		V_5 = 0;
		goto IL_004c;
	}

IL_001e:
	{
		// if (playerLoop.subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_2 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_3 = L_2.___subSystemList_1;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		Type_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (EarlyUpdate_t3FEEF0153D8D192317CEFD9EE3F3E1573955095B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// earlyUpdateStepIndex = subSystemIndex;
		int32_t L_9 = V_5;
		V_1 = L_9;
		// break;
		goto IL_0058;
	}

IL_0046:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_10 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004c:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList.Length; ++subSystemIndex)
		int32_t L_11 = V_5;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_12 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_13 = L_12.___subSystemList_1;
		NullCheck(L_13);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_0058:
	{
		// if (earlyUpdateStepIndex < 0)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// return;
		return;
	}

IL_005d:
	{
		// int xrUpdateIndex = -1;
		V_2 = (-1);
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		V_6 = 0;
		goto IL_009d;
	}

IL_0064:
	{
		// if (playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[subSystemIndex].type == typeof(UnityEngine.PlayerLoop.EarlyUpdate.XRUpdate))
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_15 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_16 = L_15.___subSystemList_1;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___subSystemList_1;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		Type_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (XRUpdate_tDF532E307AA39BCF2FB4780E252EC0CCE1C124B9_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		// xrUpdateIndex = subSystemIndex;
		int32_t L_24 = V_6;
		V_2 = L_24;
		// break;
		goto IL_00b4;
	}

IL_0097:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009d:
	{
		// for (int subSystemIndex = 0; subSystemIndex < playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList.Length; ++subSystemIndex)
		int32_t L_26 = V_6;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_27 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_28 = L_27.___subSystemList_1;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___subSystemList_1;
		NullCheck(L_30);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0064;
		}
	}

IL_00b4:
	{
		// if (xrUpdateIndex < 0)
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00b9;
		}
	}
	{
		// return;
		return;
	}

IL_00b9:
	{
		// int indexOfOurType = -1;
		V_3 = (-1);
		// var systems = playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_32 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_33 = L_32.___subSystemList_1;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_35 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___subSystemList_1;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___subSystemList_1;
		V_4 = L_37;
		// if (systems == null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_38 = V_4;
		if (L_38)
		{
			goto IL_00de;
		}
	}
	{
		// return;
		return;
	}

IL_00de:
	{
		// for (int systemIndex = 0; systemIndex < systems.Length; ++systemIndex)
		V_7 = 0;
		goto IL_010d;
	}

IL_00e3:
	{
		// if (systems[systemIndex].type == typeof(XRHandSubsystemPlayerLoopRunnerUpdateSystem))
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_39 = V_4;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		Type_t* L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___type_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (XRHandSubsystemPlayerLoopRunnerUpdateSystem_tBDF73E4711FEED8CA13CBE79E4EAEFB92E67494D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0107;
		}
	}
	{
		// indexOfOurType = systemIndex;
		int32_t L_45 = V_7;
		V_3 = L_45;
		// break;
		goto IL_0115;
	}

IL_0107:
	{
		// for (int systemIndex = 0; systemIndex < systems.Length; ++systemIndex)
		int32_t L_46 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_010d:
	{
		// for (int systemIndex = 0; systemIndex < systems.Length; ++systemIndex)
		int32_t L_47 = V_7;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_48 = V_4;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_00e3;
		}
	}

IL_0115:
	{
		// if (indexOfOurType < 0)
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_011a;
		}
	}
	{
		// return;
		return;
	}

IL_011a:
	{
		// if (indexOfOurType == 0 && systems.Length == 1)
		int32_t L_50 = V_3;
		if (L_50)
		{
			goto IL_0129;
		}
	}
	{
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_51 = V_4;
		NullCheck(L_51);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0129;
		}
	}
	{
		// systems = null;
		V_4 = (PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D*)NULL;
		goto IL_0147;
	}

IL_0129:
	{
		// else if (indexOfOurType < systems.Length - 1)
		int32_t L_52 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_53 = V_4;
		NullCheck(L_53);
		if ((((int32_t)L_52) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_53)->max_length)), 1)))))
		{
			goto IL_0147;
		}
	}
	{
		// Array.Copy(systems, indexOfOurType + 1, systems, indexOfOurType, systems.Length - indexOfOurType - 1);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_54 = V_4;
		int32_t L_55 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_56 = V_4;
		int32_t L_57 = V_3;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_58 = V_4;
		NullCheck(L_58);
		int32_t L_59 = V_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)), (RuntimeArray*)L_56, L_57, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_58)->max_length)), L_59)), 1)), NULL);
	}

IL_0147:
	{
		// if (systems != null)
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_60 = V_4;
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		// Array.Resize(ref systems, systems.Length - 1);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_61 = V_4;
		NullCheck(L_61);
		Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6((&V_4), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_61)->max_length)), 1)), Array_Resize_TisPlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F_m5BB1CBC9B67A2E7CA14456F1490145E7F68FA8C6_RuntimeMethod_var);
	}

IL_0158:
	{
		// playerLoop.subSystemList[earlyUpdateStepIndex].subSystemList[xrUpdateIndex].subSystemList = systems;
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_62 = V_0;
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_63 = L_62.___subSystemList_1;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___subSystemList_1;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		PlayerLoopSystemU5BU5D_t07C04E53AAC3CDA17603E8BA1B41D7E1AC083C6D* L_67 = V_4;
		((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___subSystemList_1 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___subSystemList_1), (void*)L_67);
		// UnityEngine.LowLevel.PlayerLoop.SetPlayerLoop(playerLoop);
		PlayerLoopSystem_t8AED6BF1C8A309CAA6FF71AC91DD33BDDFF7CF1F L_68 = V_0;
		PlayerLoop_SetPlayerLoop_m7D2DB1287D886B0AC17C24F86C897C82A813D01B(L_68, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Destroy_mBC988E2883F74DF50B81AEEDA2A7C32AFDEC85A5 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A(__this, NULL);
		// m_Subsystem = null;
		__this->___m_Subsystem_0 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystem_0), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
		// if (XRHandDevice.leftHand != null)
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0;
		L_0 = XRHandDevice_get_leftHand_mDDCFB299CEF49D677FE879FD6EC2CED49B39A122_inline(NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// InputSystem.InputSystem.RemoveDevice(XRHandDevice.leftHand);
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_1;
		L_1 = XRHandDevice_get_leftHand_mDDCFB299CEF49D677FE879FD6EC2CED49B39A122_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858(L_1, NULL);
		// XRHandDevice.leftHand = null;
		XRHandDevice_set_leftHand_m90D3310DC790C1570F9622A43BBC0E3133AE7B36_inline((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A*)NULL, NULL);
	}

IL_0024:
	{
		// if (XRHandDevice.rightHand != null)
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_2;
		L_2 = XRHandDevice_get_rightHand_mBFB0E60D591755A38FECCAE7E99F1AC467D42C06_inline(NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// InputSystem.InputSystem.RemoveDevice(XRHandDevice.rightHand);
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_3;
		L_3 = XRHandDevice_get_rightHand_mBFB0E60D591755A38FECCAE7E99F1AC467D42C06_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858(L_3, NULL);
		// XRHandDevice.rightHand = null;
		XRHandDevice_set_rightHand_m6D14B038BDE83041F0995404CD8AE62B7E96F29E_inline((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A*)NULL, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_OnUpdate_m8A13E22290DF48E9B736EC4C6BB8DAE0AA9464E3 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// Update(XRHandSubsystem.UpdateType.Dynamic);
		SubsystemUpdater_Update_m75E705D288BAB774736C504E119C7507847ACB77(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_OnBeforeRender_m8197633FEEFED52E2B7B10974936B381026E0961 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// Update(XRHandSubsystem.UpdateType.BeforeRender);
		SubsystemUpdater_Update_m75E705D288BAB774736C504E119C7507847ACB77(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::Update(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_Update_m75E705D288BAB774736C504E119C7507847ACB77 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, int32_t ___0_updateType, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var updateSuccessFlags = m_Subsystem.TryUpdateHands(updateType);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = __this->___m_Subsystem_0;
		int32_t L_1 = ___0_updateType;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(14 /* UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.XRHandSubsystem::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType) */, L_0, L_1);
		V_0 = L_2;
		// if (updateSuccessFlags != XRHandSubsystem.UpdateSuccessFlags.None)
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// EnsureDevicesCreated(updateSuccessFlags, updateType);
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_updateType;
		SubsystemUpdater_EnsureDevicesCreated_m1B55AA4F37DAA7D24E5BA6E657CF64F6E59E8C4E(__this, L_4, L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::EnsureDevicesCreated(UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_EnsureDevicesCreated_m1B55AA4F37DAA7D24E5BA6E657CF64F6E59E8C4E (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, int32_t ___0_updateSuccessFlags, int32_t ___1_updateType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (XRHandDevice.leftHand == null)
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0;
		L_0 = XRHandDevice_get_leftHand_mDDCFB299CEF49D677FE879FD6EC2CED49B39A122_inline(NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// XRHandDevice.leftHand = XRHandDevice.Create(m_Subsystem, Handedness.Left, updateSuccessFlags, updateType);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_1 = __this->___m_Subsystem_0;
		int32_t L_2 = ___0_updateSuccessFlags;
		int32_t L_3 = ___1_updateType;
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_4;
		L_4 = XRHandDevice_Create_mB95FA6BCC5AD829A28E33D910D7427764CA231DB(L_1, 1, L_2, L_3, NULL);
		XRHandDevice_set_leftHand_m90D3310DC790C1570F9622A43BBC0E3133AE7B36_inline(L_4, NULL);
	}

IL_001a:
	{
		// if (XRHandDevice.rightHand == null)
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_5;
		L_5 = XRHandDevice_get_rightHand_mBFB0E60D591755A38FECCAE7E99F1AC467D42C06_inline(NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		// XRHandDevice.rightHand = XRHandDevice.Create(m_Subsystem, Handedness.Right, updateSuccessFlags, updateType);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_6 = __this->___m_Subsystem_0;
		int32_t L_7 = ___0_updateSuccessFlags;
		int32_t L_8 = ___1_updateType;
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_9;
		L_9 = XRHandDevice_Create_mB95FA6BCC5AD829A28E33D910D7427764CA231DB(L_6, 2, L_7, L_8, NULL);
		XRHandDevice_set_rightHand_m6D14B038BDE83041F0995404CD8AE62B7E96F29E_inline(L_9, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandProviderUtility/SubsystemUpdater::<Start>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemUpdater_U3CStartU3Eb__1_0_m009D2083697D415FE96B0F05E5F11E3747E9D1C6 (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* __this, const RuntimeMethod* method) 
{
	{
		// updateDelegate = () => OnUpdate()
		SubsystemUpdater_OnUpdate_m8A13E22290DF48E9B736EC4C6BB8DAE0AA9464E3(__this, NULL);
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
// System.Void UnityEngine.XR.Hands.ProviderImplementation.XRHandSubsystemProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRHandSubsystemProvider__ctor_m404D9375A7F7A0C10412F8E63AA11453C0A6EFDD (XRHandSubsystemProvider_t29FF95FDBBF36BCA83900425EEB9562C6BA31996* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2(__this, SubsystemProvider_1__ctor_m210E580A88518CBE851A9E461B86F5F407B2F3C2_RuntimeMethod_var);
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
// UnityEngine.XR.Hands.XRHandSubsystem UnityEngine.XR.Hands.OpenXR.HandTracking::get_subsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* HandTracking_get_subsystem_mA0D9634CF584038C614D828B9EA545DADEB685F8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandSubsystem subsystem => s_Subsystem;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_OnSystemChange_m0990B95FA3DC8CC3176561DE115A54F9C9B4CDFE (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, uint64_t ___0_xrSystem, const RuntimeMethod* method) 
{
	{
		// base.OnSystemChange(xrSystem);
		uint64_t L_0 = ___0_xrSystem;
		OpenXRFeature_OnSystemChange_m8ABB325CA2AB769AC7895A4017D71863A295301B(__this, L_0, NULL);
		// UnityOpenXRHands_OnSystemChange(xrSystem);
		uint64_t L_1 = ___0_xrSystem;
		HandTracking_UnityOpenXRHands_OnSystemChange_mD599D74CC887BACC97BF6B2EC5F7D53DD641155D(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.OpenXR.HandTracking::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTracking_OnInstanceCreate_m151CA60753AEA1A614063902C1C530C3D4D26988 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, uint64_t ___0_xrInstance, const RuntimeMethod* method) 
{
	{
		// if (!base.OnInstanceCreate(xrInstance))
		uint64_t L_0 = ___0_xrInstance;
		bool L_1;
		L_1 = OpenXRFeature_OnInstanceCreate_m8A79D0660AD16403FFEE29D92DDD867B3732109D(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// return UnityOpenXRHands_OnInstanceCreate(xrInstance, xrGetInstanceProcAddr);
		uint64_t L_2 = ___0_xrInstance;
		intptr_t L_3;
		L_3 = OpenXRFeature_get_xrGetInstanceProcAddr_m956D5B547606D7621778AFA0283F86DCA949473C(NULL);
		bool L_4;
		L_4 = HandTracking_UnityOpenXRHands_OnInstanceCreate_m903CCB5C25843DAEEE51C2A6622CB9F8B7A1452B(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_OnAppSpaceChange_mA5A7406B823B2102675467AB35B47C99A8793634 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, uint64_t ___0_xrSpace, const RuntimeMethod* method) 
{
	{
		// base.OnAppSpaceChange(xrSpace);
		uint64_t L_0 = ___0_xrSpace;
		OpenXRFeature_OnAppSpaceChange_m8DFDAC9043EF791C4CED63B18C149E27A7836B96(__this, L_0, NULL);
		// UnityOpenXRHands_OnAppSpaceChange(xrSpace);
		uint64_t L_1 = ___0_xrSpace;
		HandTracking_UnityOpenXRHands_OnAppSpaceChange_mE6358A6F95422FB5CDF156B5F702A030B951DBFD(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_OnSessionCreate_m6B62EFA5EECEC0E28360FD90FAF9D75963AA8BF8 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32A8A65B6BF3C963D0F776450E39D7331A689B27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRFeature_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m95BA406D4B597296AE29BDCD382F584D021179CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetSubsystemDescriptors_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_mAE6E6315D76A8CB7D661864B75603CCD02310EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E7D869B16E460AD51992FAB10FA8FCCED680BB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3ECE8665FB735BA9B76F8A4B5E94328005373EC);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* V_0 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B4_0 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B3_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B9_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B6_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B5_0 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B8_0 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B7_0 = NULL;
	{
		// base.OnSessionCreate(xrSession);
		uint64_t L_0 = ___0_xrSession;
		OpenXRFeature_OnSessionCreate_m1687421C2B4816BF3A572AE9C74F183A3108F8F6(__this, L_0, NULL);
		// UnityOpenXRHands_OnSessionCreate(xrSession);
		uint64_t L_1 = ___0_xrSession;
		HandTracking_UnityOpenXRHands_OnSessionCreate_m3DEAEEEC790BB3DB4E81679198458FA604C14D5E(L_1, NULL);
		// var descriptors = new List<XRHandSubsystemDescriptor>();
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_2 = (List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6*)il2cpp_codegen_object_new(List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E(L_2, List_1__ctor_m602711FCB3B8551951989E9BAA76587A6075680E_RuntimeMethod_var);
		V_0 = L_2;
		// SubsystemManager.GetSubsystemDescriptors(descriptors);
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_mAE6E6315D76A8CB7D661864B75603CCD02310EDD(L_3, SubsystemManager_GetSubsystemDescriptors_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_mAE6E6315D76A8CB7D661864B75603CCD02310EDD_RuntimeMethod_var);
		// if (descriptors.Count < 1)
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m32A8A65B6BF3C963D0F776450E39D7331A689B27_inline(L_4, List_1_get_Count_m32A8A65B6BF3C963D0F776450E39D7331A689B27_RuntimeMethod_var);
		if ((((int32_t)L_5) >= ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		// return;
		return;
	}

IL_0023:
	{
		// CreateSubsystem<XRHandSubsystemDescriptor, XRHandSubsystem>(descriptors, OpenXRHandProvider.id);
		List_1_t5C034992EE369F50EA54FF7867E707BBB1EC72E6* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = OpenXRHandProvider_get_id_m0D80E52EDFCC3188976675E39137B2BA44B03975_inline(NULL);
		OpenXRFeature_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m95BA406D4B597296AE29BDCD382F584D021179CD(__this, L_6, L_7, OpenXRFeature_CreateSubsystem_TisXRHandSubsystemDescriptor_tAA2BE61B3F0591B2679C510BA4880412AEBF0C73_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m95BA406D4B597296AE29BDCD382F584D021179CD_RuntimeMethod_var);
		// s_Subsystem = XRGeneralSettings.Instance?.Manager?.activeLoader?.GetLoadedSubsystem<XRHandSubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_8;
		L_8 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_9 = L_8;
		G_B3_0 = L_9;
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_003b;
		}
	}
	{
		G_B9_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0058;
	}

IL_003b:
	{
		NullCheck(G_B4_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_10;
		L_10 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(G_B4_0, NULL);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_11 = L_10;
		G_B5_0 = L_11;
		if (L_11)
		{
			G_B6_0 = L_11;
			goto IL_0047;
		}
	}
	{
		G_B9_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0058;
	}

IL_0047:
	{
		NullCheck(G_B6_0);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_12;
		L_12 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(G_B6_0, NULL);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_13 = L_12;
		G_B7_0 = L_13;
		if (L_13)
		{
			G_B8_0 = L_13;
			goto IL_0053;
		}
	}
	{
		G_B9_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0058;
	}

IL_0053:
	{
		NullCheck(G_B8_0);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_14;
		L_14 = GenericVirtualFuncInvoker0< XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var, G_B8_0);
		G_B9_0 = L_14;
	}

IL_0058:
	{
		((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19 = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19), (void*)G_B9_0);
		// if (s_Subsystem == null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_15 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		if (L_15)
		{
			goto IL_007e;
		}
	}
	{
		// Debug.LogError($"Failed to find descriptor '{OpenXRHandProvider.id}' - HandTracking OpenXR feature will not do anything!");
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = OpenXRHandProvider_get_id_m0D80E52EDFCC3188976675E39137B2BA44B03975_inline(NULL);
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA3ECE8665FB735BA9B76F8A4B5E94328005373EC, L_16, _stringLiteral0E7D869B16E460AD51992FAB10FA8FCCED680BB8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
		// return;
		return;
	}

IL_007e:
	{
		// m_Updater = new XRHandProviderUtility.SubsystemUpdater(s_Subsystem);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_18 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_19 = (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548*)il2cpp_codegen_object_new(SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		SubsystemUpdater__ctor_mDFF3EED82E3F9CA7181F9C12537F4313D9A306C1(L_19, L_18, NULL);
		__this->___m_Updater_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Updater_18), (void*)L_19);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::OnSubsystemStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_OnSubsystemStart_m8BCA7E911E43868617664BF02D175532FEAC49C8 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Subsystem == null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_0 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// s_Subsystem.Start();
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_1 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		NullCheck(L_1);
		SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644(L_1, NULL);
		// m_Updater.Start();
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_2 = __this->___m_Updater_18;
		NullCheck(L_2);
		SubsystemUpdater_Start_mEC50F9FCA9412717D6599F92D2A68A925C393ADD(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_OnSubsystemStop_mE9D3D85D0119A14B9930EF5BE0B8C1863E4A6AFB (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B2_0 = NULL;
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B1_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B5_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B4_0 = NULL;
	{
		// m_Updater?.Stop();
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_0 = __this->___m_Updater_18;
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		SubsystemUpdater_Stop_m8AFC122B06A8C7E35BB7B534081B48F7F96FFA2A(G_B2_0, NULL);
	}

IL_0011:
	{
		// s_Subsystem?.Stop();
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		NullCheck(G_B5_0);
		SubsystemWithProvider_Stop_mB22AB4811D2636FCB317C0E54E8A7139D81A8E16(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::OnSubsystemDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_OnSubsystemDestroy_m612D5BB9D384D024DB82D825A100EFD8717BE051 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B2_0 = NULL;
	SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* G_B1_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B5_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B4_0 = NULL;
	{
		// m_Updater?.Destroy();
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_0 = __this->___m_Updater_18;
		SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		SubsystemUpdater_Destroy_mBC988E2883F74DF50B81AEEDA2A7C32AFDEC85A5(G_B2_0, NULL);
	}

IL_0011:
	{
		// m_Updater = null;
		__this->___m_Updater_18 = (SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Updater_18), (void*)(SubsystemUpdater_t59BCE7E7B38E867C0FBDBBA8579C37C08BF26548*)NULL);
		// s_Subsystem?.Destroy();
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_2 = ((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0023;
		}
	}
	{
		goto IL_0028;
	}

IL_0023:
	{
		NullCheck(G_B5_0);
		SubsystemWithProvider_Destroy_m8161D5B71C856F836660430CED8550AA17438BAF(G_B5_0, NULL);
	}

IL_0028:
	{
		// s_Subsystem = null;
		((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19 = (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_StaticFields*)il2cpp_codegen_static_fields_for(HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_il2cpp_TypeInfo_var))->___s_Subsystem_19), (void*)(XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)NULL);
		// }
		return;
	}
}
// System.IntPtr UnityEngine.XR.Hands.OpenXR.HandTracking::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandTracking_HookGetInstanceProcAddr_m284254357731ED231653F683116AF5582541B7C6 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, intptr_t ___0_func, const RuntimeMethod* method) 
{
	{
		// => UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr(func);
		intptr_t L_0 = ___0_func;
		intptr_t L_1;
		L_1 = HandTracking_UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr_mB65078581D0C93FCA5CB257E2EC79A087C367BE4(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnSystemChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_UnityOpenXRHands_OnSystemChange_mD599D74CC887BACC97BF6B2EC5F7D53DD641155D (uint64_t ___0_xrSystem, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_OnSystemChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_OnSystemChange)(___0_xrSystem);
	#else
	il2cppPInvokeFunc(___0_xrSystem);
	#endif

}
// System.Boolean UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnInstanceCreate(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTracking_UnityOpenXRHands_OnInstanceCreate_m903CCB5C25843DAEEE51C2A6622CB9F8B7A1452B (uint64_t ___0_xrInstance, intptr_t ___1_xrGetInstanceProcAddr, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint64_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_OnInstanceCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_OnInstanceCreate)(___0_xrInstance, ___1_xrGetInstanceProcAddr);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_xrInstance, ___1_xrGetInstanceProcAddr);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnAppSpaceChange(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_UnityOpenXRHands_OnAppSpaceChange_mE6358A6F95422FB5CDF156B5F702A030B951DBFD (uint64_t ___0_xrSpace, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_OnAppSpaceChange", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_OnAppSpaceChange)(___0_xrSpace);
	#else
	il2cppPInvokeFunc(___0_xrSpace);
	#endif

}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_OnSessionCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking_UnityOpenXRHands_OnSessionCreate_m3DEAEEEC790BB3DB4E81679198458FA604C14D5E (uint64_t ___0_xrSession, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_OnSessionCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_OnSessionCreate)(___0_xrSession);
	#else
	il2cppPInvokeFunc(___0_xrSession);
	#endif

}
// System.IntPtr UnityEngine.XR.Hands.OpenXR.HandTracking::UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandTracking_UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr_mB65078581D0C93FCA5CB257E2EC79A087C367BE4 (intptr_t ___0_func, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_intercept_xrWaitFrame_xrGetInstanceProcAddr)(___0_func);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___0_func);
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.Hands.OpenXR.HandTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTracking__ctor_m2B76B40E8946100FED0FF7E26C531FB01514F1A0 (HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::OnSubsystemStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_OnSubsystemStart_m667C86B11705064A404FCB076B30526F8F989445 (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaHandTrackingAim_OnUpdatedHands_m6CC8B64FCEC70D804F3E9C2DCBD5BFF392B6E988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69E4F740C97470174ECFD4F81949131FAB76B2A0);
		s_Il2CppMethodInitialized = true;
	}
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* V_0 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B3_0 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B2_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B8_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B5_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B4_0 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B7_0 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B6_0 = NULL;
	{
		// if (UnityOpenXRHands_ToggleMetaAim(true))
		bool L_0;
		L_0 = MetaHandTrackingAim_UnityOpenXRHands_ToggleMetaAim_mBD6A5F22AE4AB824048A3B505485F3DBDA6DD880((bool)1, NULL);
		if (!L_0)
		{
			goto IL_005e;
		}
	}
	{
		// CreateHands();
		MetaHandTrackingAim_CreateHands_m8E8379147535495ED70ADE53BAB86C3F2FCF04A0(__this, NULL);
		// var subsystem = XRGeneralSettings.Instance?.Manager?.activeLoader?.GetLoadedSubsystem<XRHandSubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1;
		L_1 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_001a;
		}
	}
	{
		G_B8_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0037;
	}

IL_001a:
	{
		NullCheck(G_B3_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(G_B3_0, NULL);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0026;
		}
	}
	{
		G_B8_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0037;
	}

IL_0026:
	{
		NullCheck(G_B5_0);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(G_B5_0, NULL);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_6 = L_5;
		G_B6_0 = L_6;
		if (L_6)
		{
			G_B7_0 = L_6;
			goto IL_0032;
		}
	}
	{
		G_B8_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B7_0);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7;
		L_7 = GenericVirtualFuncInvoker0< XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var, G_B7_0);
		G_B8_0 = L_7;
	}

IL_0037:
	{
		V_0 = G_B8_0;
		// if (subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// subsystem.updatedHands += OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_9 = V_0;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_10 = L_9;
		NullCheck(L_10);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_11 = L_10->___updatedHands_8;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_12 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_12, __this, (intptr_t)((void*)MetaHandTrackingAim_OnUpdatedHands_m6CC8B64FCEC70D804F3E9C2DCBD5BFF392B6E988_RuntimeMethod_var), NULL);
		Delegate_t* L_13;
		L_13 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_11, L_12, NULL);
		NullCheck(L_10);
		L_10->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_13, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_13, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
		return;
	}

IL_005e:
	{
		// Debug.LogError("Couldn't enable Meta aim retrieval in plugin - please ensure you enabled the Hand Tracking Subsystem feature in the OpenXR project settings.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral69E4F740C97470174ECFD4F81949131FAB76B2A0, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::OnSubsystemStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_OnSubsystemStop_m661F74A7CE1B602E75E4D325971E563291762124 (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaHandTrackingAim_OnUpdatedHands_m6CC8B64FCEC70D804F3E9C2DCBD5BFF392B6E988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* V_0 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B2_0 = NULL;
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* G_B1_0 = NULL;
	XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* G_B7_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B4_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* G_B3_0 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B6_0 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* G_B5_0 = NULL;
	{
		// UnityOpenXRHands_ToggleMetaAim(false);
		bool L_0;
		L_0 = MetaHandTrackingAim_UnityOpenXRHands_ToggleMetaAim_mBD6A5F22AE4AB824048A3B505485F3DBDA6DD880((bool)0, NULL);
		// var subsystem = XRGeneralSettings.Instance?.Manager?.activeLoader?.GetLoadedSubsystem<XRHandSubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1;
		L_1 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		G_B7_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0030;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(G_B2_0, NULL);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001f;
		}
	}
	{
		G_B7_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0030;
	}

IL_001f:
	{
		NullCheck(G_B4_0);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(G_B4_0, NULL);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B7_0 = ((XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C*)(NULL));
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B6_0);
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_7;
		L_7 = GenericVirtualFuncInvoker0< XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C_m57CC878CA85F7B10470C1F9691CC4A5936D5BEB1_RuntimeMethod_var, G_B6_0);
		G_B7_0 = L_7;
	}

IL_0030:
	{
		V_0 = G_B7_0;
		// if (subsystem != null)
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// subsystem.updatedHands -= OnUpdatedHands;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_9 = V_0;
		XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* L_10 = L_9;
		NullCheck(L_10);
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_11 = L_10->___updatedHands_8;
		Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997* L_12 = (Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)il2cpp_codegen_object_new(Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_3__ctor_m3AB504B4A53E26F38ACFEC08DD59973F0169F14B(L_12, __this, (intptr_t)((void*)MetaHandTrackingAim_OnUpdatedHands_m6CC8B64FCEC70D804F3E9C2DCBD5BFF392B6E988_RuntimeMethod_var), NULL);
		Delegate_t* L_13;
		L_13 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_11, L_12, NULL);
		NullCheck(L_10);
		L_10->___updatedHands_8 = ((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_13, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___updatedHands_8), (void*)((Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997*)Castclass((RuntimeObject*)L_13, Action_3_t7D778238CD0A45B8368B3EAC4062AD2D477E1997_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		// DestroyHands();
		MetaHandTrackingAim_DestroyHands_mEAB5B95CC8C179745E643770AC33388FEABBC1BE(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::CreateHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_CreateHands_m8E8379147535495ED70ADE53BAB86C3F2FCF04A0 (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) 
{
	{
		// if (Hands.MetaAimHand.left == null)
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0;
		L_0 = MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4_inline(NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// Hands.MetaAimHand.left = Hands.MetaAimHand.CreateHand(InputDeviceCharacteristics.Left);
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_1;
		L_1 = MetaAimHand_CreateHand_mF1109A9DEE13152B98B86958E9E5B9D165FB26BB(((int32_t)256), NULL);
		MetaAimHand_set_left_m419A1439F8F77D7FADDFCACB6438BE34733F4B45_inline(L_1, NULL);
	}

IL_0016:
	{
		// if (Hands.MetaAimHand.right == null)
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_2;
		L_2 = MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818_inline(NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// Hands.MetaAimHand.right = Hands.MetaAimHand.CreateHand(InputDeviceCharacteristics.Right);
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_3;
		L_3 = MetaAimHand_CreateHand_mF1109A9DEE13152B98B86958E9E5B9D165FB26BB(((int32_t)512), NULL);
		MetaAimHand_set_right_m2FE64B96A9598F4F521D014D655A1E8D6974F2D5_inline(L_3, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::DestroyHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_DestroyHands_mEAB5B95CC8C179745E643770AC33388FEABBC1BE (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Hands.MetaAimHand.left != null)
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0;
		L_0 = MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// InputSystem.InputSystem.RemoveDevice(Hands.MetaAimHand.left);
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_1;
		L_1 = MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858(L_1, NULL);
		// Hands.MetaAimHand.left = null;
		MetaAimHand_set_left_m419A1439F8F77D7FADDFCACB6438BE34733F4B45_inline((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA*)NULL, NULL);
	}

IL_0017:
	{
		// if (Hands.MetaAimHand.right != null)
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_2;
		L_2 = MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818_inline(NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// InputSystem.InputSystem.RemoveDevice(Hands.MetaAimHand.right);
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_3;
		L_3 = MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_mBA895DEE9FCFC53AC9040DE72860D95ABFB5E858(L_3, NULL);
		// Hands.MetaAimHand.right = null;
		MetaAimHand_set_right_m2FE64B96A9598F4F521D014D655A1E8D6974F2D5_inline((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA*)NULL, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::OnUpdatedHands(UnityEngine.XR.Hands.XRHandSubsystem,UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags,UnityEngine.XR.Hands.XRHandSubsystem/UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim_OnUpdatedHands_m6CC8B64FCEC70D804F3E9C2DCBD5BFF392B6E988 (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* ___0_subsystem, int32_t ___1_successFlags, int32_t ___2_updateType, const RuntimeMethod* method) 
{
	{
		// if ((successFlags & (XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose | XRHandSubsystem.UpdateSuccessFlags.LeftHandJoints)) != 0)
		int32_t L_0 = ___1_successFlags;
		if (!((int32_t)((int32_t)L_0&3)))
		{
			goto IL_0016;
		}
	}
	{
		// Hands.MetaAimHand.left.UpdateHand(true, (successFlags & XRHandSubsystem.UpdateSuccessFlags.LeftHandRootPose) != 0);
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_1;
		L_1 = MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4_inline(NULL);
		int32_t L_2 = ___1_successFlags;
		NullCheck(L_1);
		MetaAimHand_UpdateHand_mAB539B5965183DFC833FDC2A9B870E60FBAE479C(L_1, (bool)1, (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&1))) <= ((uint32_t)0)))? 1 : 0), NULL);
	}

IL_0016:
	{
		// if ((successFlags & (XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose | XRHandSubsystem.UpdateSuccessFlags.RightHandJoints)) != 0)
		int32_t L_3 = ___1_successFlags;
		if (!((int32_t)((int32_t)L_3&((int32_t)12))))
		{
			goto IL_002d;
		}
	}
	{
		// Hands.MetaAimHand.right.UpdateHand(false, (successFlags & XRHandSubsystem.UpdateSuccessFlags.RightHandRootPose) != 0);
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_4;
		L_4 = MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818_inline(NULL);
		int32_t L_5 = ___1_successFlags;
		NullCheck(L_4);
		MetaAimHand_UpdateHand_mAB539B5965183DFC833FDC2A9B870E60FBAE479C(L_4, (bool)0, (bool)((!(((uint32_t)((int32_t)((int32_t)L_5&4))) <= ((uint32_t)0)))? 1 : 0), NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::UnityOpenXRHands_ToggleMetaAim(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MetaHandTrackingAim_UnityOpenXRHands_ToggleMetaAim_mBD6A5F22AE4AB824048A3B505485F3DBDA6DD880 (bool ___0_enable, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_ToggleMetaAim", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_ToggleMetaAim)(static_cast<int32_t>(___0_enable));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___0_enable));
	#endif

	return static_cast<bool>(returnValue);
}
// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::get_leftHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* MetaHandTrackingAim_get_leftHand_mFA896DC4D2585EA9F16AED4522DF9349E8E66110 (const RuntimeMethod* method) 
{
	{
		// public static MetaAimHand leftHand => null;
		return (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313*)NULL;
	}
}
// UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::get_rightHand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* MetaHandTrackingAim_get_rightHand_m2E07B2E021CE416101D67E0F29C3900B513CA4CC (const RuntimeMethod* method) 
{
	{
		// public static MetaAimHand rightHand => null;
		return (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313*)NULL;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaHandTrackingAim__ctor_m8B8B31A5532AB37CC72128BF2AD6B8294497E5CA (MetaHandTrackingAim_tF033F668DE2818AABC72B2609279A379771515BA* __this, const RuntimeMethod* method) 
{
	{
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
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
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_indexPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_indexPressed_mAE7C52FA2A168D05BA72A40E21E510ACCEFFB896 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl indexPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CindexPressedU3Ek__BackingField_49;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_indexPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_indexPressed_m6AEC4B58FF45D5AF83892CC3FB56261B83D41A0B (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl indexPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CindexPressedU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CindexPressedU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_middlePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_middlePressed_m2DBFC7C0467A6BC1690651381D1DDFB4F7685258 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl middlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CmiddlePressedU3Ek__BackingField_50;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_middlePressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_middlePressed_mC29833511238270785A140D29A3B3D5F1405B742 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl middlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CmiddlePressedU3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiddlePressedU3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_ringPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_ringPressed_m83CB36D7BEC346D74576F01B26C06A6E70A2E4C1 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl ringPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CringPressedU3Ek__BackingField_51;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_ringPressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_ringPressed_m4737A990062E761929EFB96E27E7E73BB67BF0F4 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl ringPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CringPressedU3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CringPressedU3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_littlePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_littlePressed_mB5C80ABCCA6F328557C27ADCEBFC5615A8158D5B (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl littlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3ClittlePressedU3Ek__BackingField_52;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_littlePressed(UnityEngine.InputSystem.Controls.ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_littlePressed_mAC806BCA91424D3C3C46DC54356947C0E7109D78 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl littlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3ClittlePressedU3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClittlePressedU3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_aimFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* MetaAimHand_get_aimFlags_mBDD3E89DE1CBA8ED91E1AA14C96BA7B11FAC40E3 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerControl aimFlags { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = __this->___U3CaimFlagsU3Ek__BackingField_53;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_aimFlags(UnityEngine.InputSystem.Controls.IntegerControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_aimFlags_mB7602ACCC29BB3B925B24449A3A17B0163076975 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerControl aimFlags { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___0_value;
		__this->___U3CaimFlagsU3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaimFlagsU3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_pinchStrengthIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthIndex_m59C205811186562A8B8142FC59BF104B63A268EA (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthIndex { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthIndexU3Ek__BackingField_54;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_pinchStrengthIndex(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthIndex_mDCAB5B13692B06EC4AE6CF6B94753E741DC9FF4F (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthIndex { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthIndexU3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthIndexU3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_pinchStrengthMiddle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthMiddle_m42961C680CD7B22F21BAB0729478F011A680FB7C (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthMiddle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthMiddleU3Ek__BackingField_55;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_pinchStrengthMiddle(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthMiddle_mA4DF6E5DAAA33D7E1889DB0213B991BA36CCE921 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthMiddle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthMiddleU3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthMiddleU3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_pinchStrengthRing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthRing_m73E009DBEC1FAAD97859A7A7E7FF4B80898E54B8 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthRing { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthRingU3Ek__BackingField_56;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_pinchStrengthRing(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthRing_m197EB83375370B88E2540D14929CFA000CB5952D (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthRing { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthRingU3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthRingU3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::get_pinchStrengthLittle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthLittle_m38D69291CA8B95630C0F908F91086EA2D89445B2 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthLittle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthLittleU3Ek__BackingField_57;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::set_pinchStrengthLittle(UnityEngine.InputSystem.Controls.AxisControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthLittle_mF78F2F366BE7E61EA95AD102B217E6C09B02E781 (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthLittle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthLittleU3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthLittleU3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand_FinishSetup_mC2C67FAEFBA74E31C87DA2CEB35459C065BEFF6C (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		// protected override void FinishSetup() => base.FinishSetup();
		TrackedDevice_FinishSetup_m8FE5D25BCB3BE51AA50D75C97265A8B8D39D0DC5(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.MetaHandTrackingAim/MetaAimHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaAimHand__ctor_mF3E884E4E480AD6ACA8EECAC37292640034E53FF (MetaAimHand_tB69004BB52BF88B465365746B842E0F30C79F313* __this, const RuntimeMethod* method) 
{
	{
		TrackedDevice__ctor_mB27788B88E0EACB28065D20F6FE6E39AF391B375(__this, NULL);
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
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_Start_m0897CE942C86014DB94522D8F73961388444C41F (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_Stop_mFB41489D269F664DF7F0BF8079CC56E08078128E (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_Destroy_mCB77DF95A5255AA796D78682DD3D8ECCCA1D3888 (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityOpenXRHands_Destroy();
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		OpenXRHandProvider_UnityOpenXRHands_Destroy_m27BA1C2D3CBDFB88C032033BB9BCC206FDF905BF(NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::GetHandLayout(Unity.Collections.NativeArray`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_GetHandLayout_mE864E29B6FAF465A24D841AED9BBA912282E8ACD (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1* __this, NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___0_handJointsInLayout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C387225B67A83D965F84DB4DF76111FC8BD2B7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!UnityOpenXRHands_TryInitialize())
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = OpenXRHandProvider_UnityOpenXRHands_TryInitialize_m76A2E87894059C10E838F0D1F2AC8CD6C52A953C(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogError("OpenXR hand provider failed to initialize - no data will be tracked or surfaced!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0C387225B67A83D965F84DB4DF76111FC8BD2B7F, NULL);
		// return;
		return;
	}

IL_0012:
	{
		// handJointsInLayout[XRHandJointID.Palm.ToIndex()] = true;
		int32_t L_1;
		L_1 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(2, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_1, ((bool)1));
		// handJointsInLayout[XRHandJointID.Wrist.ToIndex()] = true;
		int32_t L_2;
		L_2 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(1, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_2, ((bool)1));
		// handJointsInLayout[XRHandJointID.ThumbMetacarpal.ToIndex()] = true;
		int32_t L_3;
		L_3 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(3, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_3, ((bool)1));
		// handJointsInLayout[XRHandJointID.ThumbProximal.ToIndex()] = true;
		int32_t L_4;
		L_4 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(4, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_4, ((bool)1));
		// handJointsInLayout[XRHandJointID.ThumbDistal.ToIndex()] = true;
		int32_t L_5;
		L_5 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(5, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_5, ((bool)1));
		// handJointsInLayout[XRHandJointID.ThumbTip.ToIndex()] = true;
		int32_t L_6;
		L_6 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(6, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_6, ((bool)1));
		// handJointsInLayout[XRHandJointID.IndexMetacarpal.ToIndex()] = true;
		int32_t L_7;
		L_7 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(7, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_7, ((bool)1));
		// handJointsInLayout[XRHandJointID.IndexProximal.ToIndex()] = true;
		int32_t L_8;
		L_8 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(8, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_8, ((bool)1));
		// handJointsInLayout[XRHandJointID.IndexIntermediate.ToIndex()] = true;
		int32_t L_9;
		L_9 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)9), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_9, ((bool)1));
		// handJointsInLayout[XRHandJointID.IndexDistal.ToIndex()] = true;
		int32_t L_10;
		L_10 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)10), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_10, ((bool)1));
		// handJointsInLayout[XRHandJointID.IndexTip.ToIndex()] = true;
		int32_t L_11;
		L_11 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)11), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_11, ((bool)1));
		// handJointsInLayout[XRHandJointID.MiddleMetacarpal.ToIndex()] = true;
		int32_t L_12;
		L_12 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)12), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_12, ((bool)1));
		// handJointsInLayout[XRHandJointID.MiddleProximal.ToIndex()] = true;
		int32_t L_13;
		L_13 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)13), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_13, ((bool)1));
		// handJointsInLayout[XRHandJointID.MiddleIntermediate.ToIndex()] = true;
		int32_t L_14;
		L_14 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)14), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_14, ((bool)1));
		// handJointsInLayout[XRHandJointID.MiddleDistal.ToIndex()] = true;
		int32_t L_15;
		L_15 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)15), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_15, ((bool)1));
		// handJointsInLayout[XRHandJointID.MiddleTip.ToIndex()] = true;
		int32_t L_16;
		L_16 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)16), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_16, ((bool)1));
		// handJointsInLayout[XRHandJointID.RingMetacarpal.ToIndex()] = true;
		int32_t L_17;
		L_17 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)17), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_17, ((bool)1));
		// handJointsInLayout[XRHandJointID.RingProximal.ToIndex()] = true;
		int32_t L_18;
		L_18 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)18), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_18, ((bool)1));
		// handJointsInLayout[XRHandJointID.RingIntermediate.ToIndex()] = true;
		int32_t L_19;
		L_19 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)19), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_19, ((bool)1));
		// handJointsInLayout[XRHandJointID.RingDistal.ToIndex()] = true;
		int32_t L_20;
		L_20 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)20), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_20, ((bool)1));
		// handJointsInLayout[XRHandJointID.RingTip.ToIndex()] = true;
		int32_t L_21;
		L_21 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)21), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_21, ((bool)1));
		// handJointsInLayout[XRHandJointID.LittleMetacarpal.ToIndex()] = true;
		int32_t L_22;
		L_22 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)22), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_22, ((bool)1));
		// handJointsInLayout[XRHandJointID.LittleProximal.ToIndex()] = true;
		int32_t L_23;
		L_23 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)23), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_23, ((bool)1));
		// handJointsInLayout[XRHandJointID.LittleIntermediate.ToIndex()] = true;
		int32_t L_24;
		L_24 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)24), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_24, ((bool)1));
		// handJointsInLayout[XRHandJointID.LittleDistal.ToIndex()] = true;
		int32_t L_25;
		L_25 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)25), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_25, ((bool)1));
		// handJointsInLayout[XRHandJointID.LittleTip.ToIndex()] = true;
		int32_t L_26;
		L_26 = XRHandJointIDUtility_ToIndex_mBF5EC77C077B14029F71E64F112F37544BFD9E02(((int32_t)26), NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(bool, ((&___0_handJointsInLayout))->___m_Buffer_0, L_26, ((bool)1));
		// m_IsValid = true;
		__this->___m_IsValid_1 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>,UnityEngine.Pose&,Unity.Collections.NativeArray`1<UnityEngine.XR.Hands.XRHandJoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRHandProvider_TryUpdateHands_m9FDC58249167C488AC8A1831BB8A773D92309883 (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1* __this, int32_t ___0_updateType, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_leftHandRootPose, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___2_leftHandJoints, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___3_rightHandRootPose, NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 ___4_rightHandJoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_IsValid)
		bool L_0 = __this->___m_IsValid_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return XRHandSubsystem.UpdateSuccessFlags.None;
		return (int32_t)(0);
	}

IL_000a:
	{
		// return UnityOpenXRHands_TryUpdateHands(
		//     updateType,
		//     ref leftHandRootPose,
		//     leftHandJoints.GetUnsafePtr(),
		//     ref rightHandRootPose,
		//     rightHandJoints.GetUnsafePtr());
		int32_t L_1 = ___0_updateType;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = ___1_leftHandRootPose;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_3 = ___2_leftHandJoints;
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657(L_3, NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657_RuntimeMethod_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = ___3_rightHandRootPose;
		NativeArray_1_t8B168617F2E2FBA4473810E911C21C95E6A2E9F6 L_6 = ___4_rightHandJoints;
		void* L_7;
		L_7 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657(L_6, NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783_m1E2E63B19D150D90E32C60E007D0750D77B7A657_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = OpenXRHandProvider_UnityOpenXRHands_TryUpdateHands_m1EB60471BB6266E5179001627DE87434F55AA996(L_1, L_2, L_4, L_5, L_7, NULL);
		return L_8;
	}
}
// System.String UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenXRHandProvider_get_id_m0D80E52EDFCC3188976675E39137B2BA44B03975 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal string id { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_set_id_m8120E17C64F0006D372B535A04B223B63E9D41A9 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal string id { get; private set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		((OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider__cctor_mBEDD926A231AF84C5EB3654AB15E7F2850B47CD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA20E3AA8DB37AAF7EF454C2FFEB619F9AFF0C982);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static OpenXRHandProvider() => id = "OpenXR Hands";
		OpenXRHandProvider_set_id_m8120E17C64F0006D372B535A04B223B63E9D41A9_inline(_stringLiteralA20E3AA8DB37AAF7EF454C2FFEB619F9AFF0C982, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_Register_m9E2E14436D7D9A9E2D66234B029F1187DE867A0D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisHandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_mB2BAA352374416658B609E49FE3A8E0F657AECB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* V_0 = NULL;
	HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* V_1 = NULL;
	Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var settings = OpenXRSettings.Instance;
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m0F645DB8A0ECC1325AD730F18479BCDCB92D1920(NULL);
		V_0 = L_0;
		// if (settings == null)
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// var feature = settings.GetFeature<HandTracking>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_3 = V_0;
		NullCheck(L_3);
		HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* L_4;
		L_4 = OpenXRSettings_GetFeature_TisHandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_mB2BAA352374416658B609E49FE3A8E0F657AECB9(L_3, OpenXRSettings_GetFeature_TisHandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C_mB2BAA352374416658B609E49FE3A8E0F657AECB9_RuntimeMethod_var);
		V_1 = L_4;
		// if (feature != null && feature.enabled)
		HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		HandTracking_tC2FD340EA418BDFE2F2435F814F2A8108F88D19C* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD(L_7, NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// var handsSubsystemCinfo = new XRHandSubsystemDescriptor.Cinfo
		// {
		//     id = id,
		//     providerType = typeof(OpenXRHandProvider)
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81));
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = OpenXRHandProvider_get_id_m0D80E52EDFCC3188976675E39137B2BA44B03975_inline(NULL);
		Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline((&V_2), L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline((&V_2), L_11, NULL);
		Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81 L_12 = V_2;
		// XRHandSubsystemDescriptor.Register(handsSubsystemCinfo);
		XRHandSubsystemDescriptor_Register_m9C6273F6EAA053F684929058B9A1113261DFF95F(L_12, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::UnityOpenXRHands_TryInitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRHandProvider_UnityOpenXRHands_TryInitialize_m76A2E87894059C10E838F0D1F2AC8CD6C52A953C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_TryInitialize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_TryInitialize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::UnityOpenXRHands_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider_UnityOpenXRHands_Destroy_m27BA1C2D3CBDFB88C032033BB9BCC206FDF905BF (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_Destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// UnityEngine.XR.Hands.XRHandSubsystem/UpdateSuccessFlags UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::UnityOpenXRHands_TryUpdateHands(UnityEngine.XR.Hands.XRHandSubsystem/UpdateType,UnityEngine.Pose&,System.Void*,UnityEngine.Pose&,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRHandProvider_UnityOpenXRHands_TryUpdateHands_m1EB60471BB6266E5179001627DE87434F55AA996 (int32_t ___0_updateType, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_leftRootPose, void* ___2_leftHandJoints, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___3_rightRootPose, void* ___4_rightHandJoints, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, void*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*) + sizeof(void*) + sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("UnityOpenXRHands"), "UnityOpenXRHands_TryUpdateHands", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_UnityOpenXRHands_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityOpenXRHands_TryUpdateHands)(___0_updateType, ___1_leftRootPose, ___2_leftHandJoints, ___3_rightRootPose, ___4_rightHandJoints);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_updateType, ___1_leftRootPose, ___2_leftHandJoints, ___3_rightRootPose, ___4_rightHandJoints);
	#endif

	return returnValue;
}
// System.Void UnityEngine.XR.Hands.OpenXR.OpenXRHandProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRHandProvider__ctor_m5C81B18B8E2B2FC4381B21DD5987C0148A9C7752 (OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1* __this, const RuntimeMethod* method) 
{
	{
		XRHandSubsystemProvider__ctor_m404D9375A7F7A0C10412F8E63AA11453C0A6EFDD(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_indexPressed_m20A95BFE12C76356DD88F7E6E39D4B05CEB354CE_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl indexPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CindexPressedU3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CindexPressedU3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_middlePressed_m45391AEE1BB47316D25581981E81C647CD808EBD_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl middlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CmiddlePressedU3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmiddlePressedU3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_ringPressed_mAC39AB598E1C879706A5F6FFB23CF16A6421D2CF_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl ringPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3CringPressedU3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CringPressedU3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_littlePressed_mDE0A57FE49B9835102EBD95E3D10B8D4BA9A6B09_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ButtonControl littlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = ___0_value;
		__this->___U3ClittlePressedU3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ClittlePressedU3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_aimFlags_mACD4D90F668A73ADD47DE5DCACEDBA359E8A4369_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerControl aimFlags { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = ___0_value;
		__this->___U3CaimFlagsU3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaimFlagsU3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthIndex_m23AAE44DED2CDEB4634CB1D1B48F95DD64656F9D_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthIndex { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthIndexU3Ek__BackingField_56 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthIndexU3Ek__BackingField_56), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthMiddle_m225A4C5CD50BEB33182E8C4691BB780E21707CF4_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthMiddle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthMiddleU3Ek__BackingField_57 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthMiddleU3Ek__BackingField_57), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthRing_m3CB061FE072D5878CA1BE1AF8233F163BB3ADD35_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthRing { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthRingU3Ek__BackingField_58 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthRingU3Ek__BackingField_58), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_pinchStrengthLittle_mC806FC951B704A07C218EC94CF71B335F3AEB53F_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthLittle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = ___0_value;
		__this->___U3CpinchStrengthLittleU3Ek__BackingField_59 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchStrengthLittleU3Ek__BackingField_59), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) 
{
	{
		// public InputDeviceDescription description => m_Description;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_0 = __this->___m_Description_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputDeviceDescription_get_capabilities_mEBF36ED5663709FCA039D1AEA87F6B6C404E76CD_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Capabilities;
		String_t* L_0 = __this->___m_Capabilities_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputDeviceDescription_set_product_m7449178AB405AD172791ACF81AE7D38EFDBAE6BF_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Product = value;
		String_t* L_0 = ___0_value;
		__this->___m_Product_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Product_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputDeviceDescription_set_manufacturer_mDDC21FFBAA6CD78960A6160779DEF264F780D031_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Manufacturer = value;
		String_t* L_0 = ___0_value;
		__this->___m_Manufacturer_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Manufacturer_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputDeviceDescription_set_capabilities_mAB1C9265029DBB0E4F7713854FB80893EBD59D88_inline (InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Capabilities = value;
		String_t* L_0 = ___0_value;
		__this->___m_Capabilities_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Capabilities_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* MetaAimHand_get_aimFlags_m532DE2D69445DBED377487D22678FFB7C87CD469_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerControl aimFlags { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = __this->___U3CaimFlagsU3Ek__BackingField_55;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_indexPressed_m3133A152A84D2CD7F87AE66149ACC30AA13C21F2_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl indexPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CindexPressedU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_middlePressed_mD8A9626F2ADE4D1755F96EC2D7ABA8E5DF2400F6_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl middlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CmiddlePressedU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_ringPressed_m8C95675EC31C22CD0AD5834F17B4EABB08B5CE6C_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl ringPressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CringPressedU3Ek__BackingField_53;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* MetaAimHand_get_littlePressed_m675968AD2CFEC8EC1288EEFDBF31ACE7A6E7181F_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl littlePressed { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3ClittlePressedU3Ek__BackingField_54;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthIndex_m463981E78ADD7635AE6CB3F6FCE94F7BE735FE4D_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthIndex { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthIndexU3Ek__BackingField_56;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthMiddle_m1AFC81B72E6C08805689FFFA8727EE03F282BD22_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthMiddle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthMiddleU3Ek__BackingField_57;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthRing_mAE78EF0B061AC05154C4FC717A541A789ADB024B_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthRing { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthRingU3Ek__BackingField_58;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* MetaAimHand_get_pinchStrengthLittle_m64DD64C04E2598F83C41D818CCF7874042B9301D_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* __this, const RuntimeMethod* method) 
{
	{
		// public AxisControl pinchStrengthLittle { get; private set; }
		AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* L_0 = __this->___U3CpinchStrengthLittleU3Ek__BackingField_59;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* TrackedDevice_get_isTracked_m0ACE3CF86BDFE28D1E6C52460285B7F97B4C7419_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public ButtonControl isTracked { get; private set; }
		ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* L_0 = __this->___U3CisTrackedU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* TrackedDevice_get_trackingState_m6E39667A7F4D0671E0E4A60E7750706FF427E819_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerControl trackingState { get; private set; }
		IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* L_0 = __this->___U3CtrackingStateU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* TrackedDevice_get_devicePosition_mF2A0B044A244D1A63ECD32AE48E42E3F24F0E84D_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CdevicePositionU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* TrackedDevice_get_deviceRotation_m1A3BD5236736A1D4B5A60EDF72F231AA0A6FEF17_inline (TrackedDevice_t9B8AC60AAD52E906174449ED57660F3F8A3599E9* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CdeviceRotationU3Ek__BackingField_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRHand_get_rootPose_m4F34E7F55AEBFD2FF7491364ADB00B27BF86F1A5_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Pose rootPose => m_RootPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_RootPose_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHand_get_handedness_m87563F81CAF693404C49463EAC73DA29D517F752_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness handedness => m_Handedness;
		int32_t L_0 = __this->___m_Handedness_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRHand_get_isTracked_mDFC9D4FDE271E2DC90D5459B1A6EA304F97B7428_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, const RuntimeMethod* method) 
{
	{
		// public bool isTracked { get; internal set; }
		bool L_0 = __this->___U3CisTrackedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHand_set_isTracked_mEB395885839D65BA5779FD9DD74D830ACBDE0628_inline (XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool isTracked { get; internal set; }
		bool L_0 = ___0_value;
		__this->___U3CisTrackedU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_gripPosition_m431F2CFBD25245146DEC8B945BD8C2B72FE98447_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control gripPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CgripPositionU3Ek__BackingField_50 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripPositionU3Ek__BackingField_50), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_gripRotation_m4942C22DF118BCE3D05D2D1E8B82356D98513AE6_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl gripRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CgripRotationU3Ek__BackingField_51 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CgripRotationU3Ek__BackingField_51), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pokePosition_m270B2A835D0A358EB2418EE5C34BF097D260F680_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pokePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CpokePositionU3Ek__BackingField_52 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpokePositionU3Ek__BackingField_52), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pokeRotation_m1D1F7A2D8FC2536FFD9159232B1BCCBD1D3A67A7_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pokeRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CpokeRotationU3Ek__BackingField_53 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpokeRotationU3Ek__BackingField_53), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pinchPosition_m892535CE6478DE7A07947A66467C63B97ED6F5C7_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pinchPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = ___0_value;
		__this->___U3CpinchPositionU3Ek__BackingField_54 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchPositionU3Ek__BackingField_54), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_pinchRotation_m217DD112093DDB9430C3604C6F219910906A93F6_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pinchRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = ___0_value;
		__this->___U3CpinchRotationU3Ek__BackingField_55 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpinchRotationU3Ek__BackingField_55), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_leftHand_mD3B931E5129348FEE34C3965A0CF8E62A0CFFB97_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand leftHand => m_LeftHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_LeftHand_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 XRHandSubsystem_get_rightHand_mDE333FDF35460E1A06BE051AF9C2144B7053ED3C_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public XRHand rightHand => m_RightHand;
		XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 L_0 = __this->___m_RightHand_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_gripPosition_m6D8BB7D6EC1C3C523FD673E1B8C87BEF7CFEB27C_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control gripPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CgripPositionU3Ek__BackingField_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_gripRotation_mFA06B406143925D1C821A2034A84FDF52F4E3870_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl gripRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CgripRotationU3Ek__BackingField_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_pokePosition_m236F011AA0DE638CEBA04F21B85F5BD184EC3645_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pokePosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CpokePositionU3Ek__BackingField_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_pokeRotation_m6AAAA63EAD64ECEA4DE89F1707C1180B5F78CA83_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pokeRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CpokeRotationU3Ek__BackingField_53;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* XRHandDevice_get_pinchPosition_mDE2F72E02CE6047FC3E10805DDBFB42273D02E9A_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3Control pinchPosition { get; private set; }
		Vector3Control_t32D7E4836F56C2FDC61BF0D96ED455DEFA6C949A* L_0 = __this->___U3CpinchPositionU3Ek__BackingField_54;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* XRHandDevice_get_pinchRotation_m30BA19130704B12CE55181C4929E15260ABAFE80_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* __this, const RuntimeMethod* method) 
{
	{
		// public QuaternionControl pinchRotation { get; private set; }
		QuaternionControl_t18A2F742850FC2FD82A1F980A35C188A29F1A0B1* L_0 = __this->___U3CpinchRotationU3Ek__BackingField_55;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandJoint_get_trackingState_mD1202D64E796D92C38FA87BD02DFBD58AF5E4696_inline (XRHandJoint_tDB955774276659AFD2294D516FC8A76A51E94783* __this, const RuntimeMethod* method) 
{
	{
		// public XRHandJointTrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandSubsystem_set_updateSuccessFlags_m3E10B3F255A29BA698114BBD603E42D8C32801BC_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public UpdateSuccessFlags updateSuccessFlags { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CupdateSuccessFlagsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHandSubsystem_get_updateSuccessFlags_m66704207828389ECD27842273995A60239F8D1C2_inline (XRHandSubsystem_t0EB20D332ADF52A334449A240A3FDD6844EEA92C* __this, const RuntimeMethod* method) 
{
	{
		// public UpdateSuccessFlags updateSuccessFlags { get; protected set; }
		int32_t L_0 = __this->___U3CupdateSuccessFlagsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mDE761606420EBD236F32C2DE1A35A57E9B213236_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mD7D9F4BD395059F04E9191E609621E8C24A45CC3_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m202418365F311AB9DD45E63D6830867C76FCDE4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m06346C96717EB03644F6A1D07F922AED52B4E312_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m17C35A2C89EBCAD9286D73F9A3AF610B7FF64A4C_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mEE9363B14C9632DD23E25A482DECB393B28E1169_inline (Cinfo_t54937489C8009C9FC12A5574A0C0A5DFFEB41E81* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_get_leftHand_mDDCFB299CEF49D677FE879FD6EC2CED49B39A122_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice leftHand { get; internal set; }
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CleftHandU3Ek__BackingField_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_leftHand_m90D3310DC790C1570F9622A43BBC0E3133AE7B36_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice leftHand { get; internal set; }
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CleftHandU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CleftHandU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* XRHandDevice_get_rightHand_mBFB0E60D591755A38FECCAE7E99F1AC467D42C06_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice rightHand { get; internal set; }
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CrightHandU3Ek__BackingField_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRHandDevice_set_rightHand_m6D14B038BDE83041F0995404CD8AE62B7E96F29E_inline (XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRHandDevice rightHand { get; internal set; }
		XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var);
		((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CrightHandU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_StaticFields*)il2cpp_codegen_static_fields_for(XRHandDevice_tBD6C2AF0E1D10908826050615401F637D7B7FA0A_il2cpp_TypeInfo_var))->___U3CrightHandU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OpenXRHandProvider_get_id_m0D80E52EDFCC3188976675E39137B2BA44B03975_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal string id { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_get_left_m0E99853A17B9E8F930121D4F15A04DA6B667A1D4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand left { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CleftU3Ek__BackingField_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_left_m419A1439F8F77D7FADDFCACB6438BE34733F4B45_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand left { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ___0_value;
		((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CleftU3Ek__BackingField_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CleftU3Ek__BackingField_48), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* MetaAimHand_get_right_mA1156C57D7B39F069FBAEA7D1B8E90FC97CD1818_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand right { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CrightU3Ek__BackingField_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaAimHand_set_right_m2FE64B96A9598F4F521D014D655A1E8D6974F2D5_inline (MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MetaAimHand right { get; set; }
		MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA* L_0 = ___0_value;
		((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CrightU3Ek__BackingField_49 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_StaticFields*)il2cpp_codegen_static_fields_for(MetaAimHand_t032A58BAD3A5F9E9234DCE813FF38E45FFCA7ACA_il2cpp_TypeInfo_var))->___U3CrightU3Ek__BackingField_49), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OpenXRHandProvider_set_id_m8120E17C64F0006D372B535A04B223B63E9D41A9_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal string id { get; private set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var);
		((OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRHandProvider_t2C7AE9EA8D6684D804E1EA6CE4060638FFDCEDC1_il2cpp_TypeInfo_var))->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m50157FAAF8FE0562A862140A17AD2B1097B078E7_gshared_inline (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* __this, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ___0_item, const RuntimeMethod* method) 
{
	XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_1 = (XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		XRFeatureDescriptorU5BU5D_tBB735747E74DA05050B124BFE3525E40EC4114A7* L_6 = V_0;
		int32_t L_7 = V_1;
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2)L_8);
		return;
	}

IL_0034:
	{
		XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 L_9 = ___0_item;
		((  void (*) (List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB*, XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m837A3425C5ACC1668A36725C68884FAE8EA82735_gshared_inline (Action_1_tEACFE9A51FCD1C277802D684B9FCD40906039752* __this, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, XRHand_t42370E2B19E7613E9C8FFA4A4B749C91FF021471, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mC38093196E581A94792A991274264ED3EB9411F5_gshared_inline (Action_3_tC91FC800177E916F453E3699E82BA62A10797E2A* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_mF6BE8B768C3DA33BE3281D8F143C0FB02E720366_gshared_inline (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, int32_t ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
