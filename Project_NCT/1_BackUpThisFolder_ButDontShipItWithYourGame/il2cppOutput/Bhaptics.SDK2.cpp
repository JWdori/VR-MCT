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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>
struct List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>
struct List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData>
struct List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Bhaptics.SDK2.BhapticsDeviceUI[]
struct BhapticsDeviceUIU5BU5D_tE824195E6C9ABAAD9343903546F7E59CF72D34B7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Bhaptics.SDK2.Device[]
struct DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A;
// Bhaptics.SDK2.GlovePlayTime[]
struct GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8;
// Bhaptics.SDK2.GloveShapeValue[]
struct GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9;
// Bhaptics.SDK2.HapticDevice[]
struct HapticDeviceU5BU5D_t059B4175D33281F4E3E8770BF6B1B97CDAD54514;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Bhaptics.SDK2.MappingMetaData[]
struct MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Bhaptics.SDK2.PositionType[]
struct PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// Bhaptics.SDK2.AndroidHaptic
struct AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// Bhaptics.SDK2.AndroidUtils
struct AndroidUtils_t06E6370C972E3F025FC7D8CE03F365B7670C4BA7;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// Bhaptics.SDK2.BhapticsConfig
struct BhapticsConfig_t4A493D1FE7134826A14FFF52BE03E8D202E5A21A;
// Bhaptics.SDK2.BhapticsDeviceUI
struct BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE;
// Bhaptics.SDK2.BhapticsHelpers
struct BhapticsHelpers_tC6C5520C82D4337B2A75EBD1947575F89745DEFB;
// Bhaptics.SDK2.BhapticsLibrary
struct BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3;
// Bhaptics.SDK2.BhapticsSDK2
struct BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83;
// Bhaptics.SDK2.BhapticsSettings
struct BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22;
// Bhaptics.SDK2.BhapticsUI
struct BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Bhaptics.SDK2.DeployHttpMessage
struct DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7;
// Bhaptics.SDK2.DeployMessage
struct DeployMessage_t03B233BC9547A7DF310C00FDFFFDDDCE433C8A6C;
// Bhaptics.SDK2.Device
struct Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183;
// Bhaptics.SDK2.DeviceListMessage
struct DeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Bhaptics.SDK2.HapticDevice
struct HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Bhaptics.SDK2.IconSetting
struct IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Bhaptics.SDK2.MappingMessage
struct MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B;
// Bhaptics.SDK2.MappingMetaData
struct MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Bhaptics.SDK2.PositonIconSetting
struct PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Bhaptics.SDK2.bhaptics_library
struct bhaptics_library_t787B996B8E1646F230C64CB65B9BCF77EA86DD55;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01793EF08F35461796EA0A5F4E67477C7FF077C5;
IL2CPP_EXTERN_C String_t* _stringLiteral04DD2DF7ABB1CCABCD9F5762A813D52B7ABE21E6;
IL2CPP_EXTERN_C String_t* _stringLiteral06D75EAE571B7F951417C4BD94267815E689E136;
IL2CPP_EXTERN_C String_t* _stringLiteral18E0BE74583C2EDA6F0BB6D9B879168F785D750A;
IL2CPP_EXTERN_C String_t* _stringLiteral1D215336354689060C710F1E6E3000FC8840D86D;
IL2CPP_EXTERN_C String_t* _stringLiteral21AF401D54A069E066A9313533E7CF143D7B97E0;
IL2CPP_EXTERN_C String_t* _stringLiteral241CB8F68E6A171074F44FED9737EDE5BD45F4ED;
IL2CPP_EXTERN_C String_t* _stringLiteral2BBFBCCB1FA02509F70835959301C9DBCB5DABD1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C1B108D370DE634DA6FEC63ED69B9D9917AB577;
IL2CPP_EXTERN_C String_t* _stringLiteral2DE356065033147860C15FC617B36E505765DB47;
IL2CPP_EXTERN_C String_t* _stringLiteral32B1B5BC31D44B18AA1644A3D65D62E49574C1C9;
IL2CPP_EXTERN_C String_t* _stringLiteral332EB1CE470981513721D7B46A5736A11902C33C;
IL2CPP_EXTERN_C String_t* _stringLiteral397497D4AE930824042348635006D0154BBD9E16;
IL2CPP_EXTERN_C String_t* _stringLiteral3A6337BAF1FF69AE8A4EA46477893E005EAD5FD2;
IL2CPP_EXTERN_C String_t* _stringLiteral3AABC7DA5F2780738EF3FCE8E7E03691E2DD50AD;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF9AEDF456482BD9FF1FC3C194BFE6189E4D52A;
IL2CPP_EXTERN_C String_t* _stringLiteral3D2123A3B6BB3514FA00131DF7AD0A686B9B2148;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0CDDAAD19BBF94003C931580F8426E42278329;
IL2CPP_EXTERN_C String_t* _stringLiteral4D4EA719DB7D4D715ADBA2AFD3A8B297C1D8AADF;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF4316F9C969D7520B849437B5084188751ED4E;
IL2CPP_EXTERN_C String_t* _stringLiteral5024999BEEEDA5CA1AC0AE262FF8B4CE10FFF2B4;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral55944BB103DCAA9331194C9F9A5B52E745952303;
IL2CPP_EXTERN_C String_t* _stringLiteral570253F88E90C7BA74C253F223E308E59B6BDBB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1;
IL2CPP_EXTERN_C String_t* _stringLiteral5F77CB80F81876807E3370718BBE569F3359A889;
IL2CPP_EXTERN_C String_t* _stringLiteral6B973FB601C693F2F934EF8531CAB44A3EAB9943;
IL2CPP_EXTERN_C String_t* _stringLiteral701988E540BF9E34DC53DE376B5A3213C82A3A1D;
IL2CPP_EXTERN_C String_t* _stringLiteral73CEB7DED734BAD034A4E26EB4EAF7553023AAF3;
IL2CPP_EXTERN_C String_t* _stringLiteral772F1EE16BDB85CBB66F18532580DBBD399D00B9;
IL2CPP_EXTERN_C String_t* _stringLiteral78A85213ED25EDB0A8BC0A170FA96A7D440544B1;
IL2CPP_EXTERN_C String_t* _stringLiteral7DCE3AC13F2BDD58ADCF66858F51367AA7B64AB8;
IL2CPP_EXTERN_C String_t* _stringLiteral81D8FD4BF03F41CC485E59888656BD2F560153F5;
IL2CPP_EXTERN_C String_t* _stringLiteral834C5E7D044A649C197E433CFB06BF90D3F28400;
IL2CPP_EXTERN_C String_t* _stringLiteral86CEA500049008F0C387DB909A4EEF10B46989D6;
IL2CPP_EXTERN_C String_t* _stringLiteral872A703D270B2441C02E8AAFB9514CEFE3F552D0;
IL2CPP_EXTERN_C String_t* _stringLiteral87666120145D385F1B4433A1A62EC450E1A738AC;
IL2CPP_EXTERN_C String_t* _stringLiteral87B8BC37181E395185B9587D34E316567F1E9D59;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD9DB8B3223A2F2BCA9D8F14697E741652ACF09;
IL2CPP_EXTERN_C String_t* _stringLiteral90318F0C144D3A2D86A776F9129A87A594E357F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA32EACCE82D1C49B998F7C469FE014DEE8737D09;
IL2CPP_EXTERN_C String_t* _stringLiteralA8045E997F6A30602D5147099A2B221E2F630869;
IL2CPP_EXTERN_C String_t* _stringLiteralAA7652C413DDCECDA5CEEFD1F271621491C39158;
IL2CPP_EXTERN_C String_t* _stringLiteralAD2BBC5DEC8245A45FBFBFF88DC127E3874E61B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB61AFCCC91D63C4504BAD3799B945D85A68F7CD0;
IL2CPP_EXTERN_C String_t* _stringLiteralC032AFCED795A82B8F3769AB576C5C1D1F4D1083;
IL2CPP_EXTERN_C String_t* _stringLiteralC4DD244805873E68F23AECD46DEAC1DE122C4C35;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C5416B367C7AB0F029EE549B881C0987AA8A03;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0721EB476D8E0A383221ED51278EF4F855AD39;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF7B4903C033E13DDF078E88C4BC427A294C7FC;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A13142CA01F84E8B22AA58244DA99146FF5140;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C3106F45B1515B9DFBA3AEEFD78C9BA6DD3A14;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426;
IL2CPP_EXTERN_C String_t* _stringLiteralD9315DA782CF3937399D383C414D28CFD1FFA7F4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0D4ADB4827DFE816DCB5FC0F426D8EFA7FA798;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAAF728FBB5EB3ACF224F10BDA51C4E7943F8E50;
IL2CPP_EXTERN_C String_t* _stringLiteralDF8E24FCD4FA75A39933B84A0CD04C580B6B9208;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB5CBFBA742C6182719C9944D08ACBC80F3127D;
IL2CPP_EXTERN_C String_t* _stringLiteralE1639942374F5F9692BB86E27579D3772AFF1630;
IL2CPP_EXTERN_C String_t* _stringLiteralE4F9B3E96400274717E8290271327C9F3D6050EF;
IL2CPP_EXTERN_C String_t* _stringLiteralE8A045351381A58F206C53D8CBF221FD3A54BF60;
IL2CPP_EXTERN_C String_t* _stringLiteralEA69D811E0C285EFA63B0A6A06DD0DD2B6BFB825;
IL2CPP_EXTERN_C String_t* _stringLiteralF0086625FC01AC0161E43904A94043C121704B2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF4A92FADFB47C1A6B300C85CD21D1C45A260D913;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E59B6D141EBAA179423AC5CA396745A517A586;
IL2CPP_EXTERN_C String_t* _stringLiteralF64A2350393A3C6F7071EB4703EDF3F0841F5264;
IL2CPP_EXTERN_C String_t* _stringLiteralF9320834208179650EED8C624B153F3D48C8E4CD;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0233529891AD3C4596DCAF40F9160EEFFA482B;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsDeviceUI_ToLeft_m97ED75EE37633D7CF0652E65C8BDD318B39A0178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsDeviceUI_ToRight_m421FD867F2E486483527FB30FD10DEC86916E62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsUI_BackPage_m179F60B3BB65F9D3D4C40C6E67B57BAA92107F0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsUI_CloseHelpNotification_m29441463E51E3241B7052736EC60360AE410FCEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsUI_NextPage_m002135D2B1477011F0AF4E2D86271E16E1FCCE03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsUI_OnHelp_m910AFF8A009F8B03F9E8EAC697D2AF3E84ECE38A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BhapticsUI_OpenLink_m4F89133762CD8EDD6197708306459888D15A2BA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisDeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7_m65A78E5FE63AA99A26671F27EB093A105AB350E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisDeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48_mB2CF5657369D0EE15FB831F9FCA73BA0C9B004F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisDevice_tDF22C64E431DF603098C0E3F1D47C03A8098C183_m00F779534FCC8EDA2493F598FC74B13541DB36BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisMappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B_m96528CACA0BB87027EB371A245B5C11702CC0800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E3392699712485711EA14A1CD9A2D261C7B12DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m00B4BD1332EFF508E3090DB37C862685CD66E018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E617AF14FD1CFE483F7DF76E45079063862D31B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE4D4F415E617EE858858DE5311A3D71C594AB44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisBhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_mF55871489ACB93049FF5E5CB5351B57B1C366E01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_m263C1699378A292330BDE1BC59621C74839B3342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_mD7D65710B1F7FDA56DC4CBCDF6E3D1473069DD89_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A;
struct GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8;
struct GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCB02DD25D59F3D31F80AF91700B18FD1461A4127 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>
struct List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BhapticsDeviceUIU5BU5D_tE824195E6C9ABAAD9343903546F7E59CF72D34B7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>
struct List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HapticDeviceU5BU5D_t059B4175D33281F4E3E8770BF6B1B97CDAD54514* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData>
struct List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// Bhaptics.SDK2.AndroidUtils
struct AndroidUtils_t06E6370C972E3F025FC7D8CE03F365B7670C4BA7  : public RuntimeObject
{
};

// Bhaptics.SDK2.BhapticsConfig
struct BhapticsConfig_t4A493D1FE7134826A14FFF52BE03E8D202E5A21A  : public RuntimeObject
{
	// System.String Bhaptics.SDK2.BhapticsConfig::appId
	String_t* ___appId_0;
	// System.String Bhaptics.SDK2.BhapticsConfig::apiKey
	String_t* ___apiKey_1;
};

// Bhaptics.SDK2.BhapticsHelpers
struct BhapticsHelpers_tC6C5520C82D4337B2A75EBD1947575F89745DEFB  : public RuntimeObject
{
};

// Bhaptics.SDK2.BhapticsLibrary
struct BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3  : public RuntimeObject
{
};

// Bhaptics.SDK2.DeployHttpMessage
struct DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7  : public RuntimeObject
{
	// System.Boolean Bhaptics.SDK2.DeployHttpMessage::status
	bool ___status_0;
	// Bhaptics.SDK2.DeployMessage Bhaptics.SDK2.DeployHttpMessage::message
	DeployMessage_t03B233BC9547A7DF310C00FDFFFDDDCE433C8A6C* ___message_1;
};

// Bhaptics.SDK2.DeployMessage
struct DeployMessage_t03B233BC9547A7DF310C00FDFFFDDDCE433C8A6C  : public RuntimeObject
{
	// System.String Bhaptics.SDK2.DeployMessage::name
	String_t* ___name_0;
	// System.Int32 Bhaptics.SDK2.DeployMessage::version
	int32_t ___version_1;
};

// Bhaptics.SDK2.Device
struct Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183  : public RuntimeObject
{
	// System.Boolean Bhaptics.SDK2.Device::paired
	bool ___paired_0;
	// System.String Bhaptics.SDK2.Device::deviceName
	String_t* ___deviceName_1;
	// System.Int32 Bhaptics.SDK2.Device::position
	int32_t ___position_2;
	// System.Boolean Bhaptics.SDK2.Device::connected
	bool ___connected_3;
	// System.String Bhaptics.SDK2.Device::address
	String_t* ___address_4;
	// System.Int32 Bhaptics.SDK2.Device::battery
	int32_t ___battery_5;
	// System.Boolean Bhaptics.SDK2.Device::audioJackIn
	bool ___audioJackIn_6;
};

// Bhaptics.SDK2.DeviceListMessage
struct DeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48  : public RuntimeObject
{
	// Bhaptics.SDK2.Device[] Bhaptics.SDK2.DeviceListMessage::devices
	DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A* ___devices_0;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// Bhaptics.SDK2.HapticDevice
struct HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0  : public RuntimeObject
{
	// System.Boolean Bhaptics.SDK2.HapticDevice::IsPaired
	bool ___IsPaired_0;
	// System.Boolean Bhaptics.SDK2.HapticDevice::IsConnected
	bool ___IsConnected_1;
	// System.String Bhaptics.SDK2.HapticDevice::DeviceName
	String_t* ___DeviceName_2;
	// Bhaptics.SDK2.PositionType Bhaptics.SDK2.HapticDevice::Position
	int32_t ___Position_3;
	// System.String Bhaptics.SDK2.HapticDevice::Address
	String_t* ___Address_4;
	// Bhaptics.SDK2.PositionType[] Bhaptics.SDK2.HapticDevice::Candidates
	PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* ___Candidates_5;
	// System.Boolean Bhaptics.SDK2.HapticDevice::IsAudioJack
	bool ___IsAudioJack_6;
	// System.Int32 Bhaptics.SDK2.HapticDevice::Battery
	int32_t ___Battery_7;
};

// Bhaptics.SDK2.IconSetting
struct IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B  : public RuntimeObject
{
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::Vest
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___Vest_0;
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::Head
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___Head_1;
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::Arm
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___Arm_2;
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::Foot
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___Foot_3;
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::Hand
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___Hand_4;
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::GloveL
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___GloveL_5;
	// Bhaptics.SDK2.PositonIconSetting Bhaptics.SDK2.IconSetting::GloveR
	PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___GloveR_6;
};

// Bhaptics.SDK2.MappingMessage
struct MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B  : public RuntimeObject
{
	// System.Boolean Bhaptics.SDK2.MappingMessage::status
	bool ___status_0;
	// System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData> Bhaptics.SDK2.MappingMessage::message
	List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2* ___message_1;
};

// Bhaptics.SDK2.MappingMetaData
struct MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4  : public RuntimeObject
{
	// System.Int32 Bhaptics.SDK2.MappingMetaData::durationMillis
	int32_t ___durationMillis_0;
	// System.String Bhaptics.SDK2.MappingMetaData::key
	String_t* ___key_1;
	// System.String Bhaptics.SDK2.MappingMetaData::description
	String_t* ___description_2;
	// System.Boolean Bhaptics.SDK2.MappingMetaData::isAudio
	bool ___isAudio_3;
	// System.Int64 Bhaptics.SDK2.MappingMetaData::updateTime
	int64_t ___updateTime_4;
	// System.String[] Bhaptics.SDK2.MappingMetaData::positions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___positions_5;
};

// Bhaptics.SDK2.PositonIconSetting
struct PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F  : public RuntimeObject
{
	// UnityEngine.Sprite Bhaptics.SDK2.PositonIconSetting::connect
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___connect_0;
	// UnityEngine.Sprite Bhaptics.SDK2.PositonIconSetting::disconnect
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___disconnect_1;
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

// Bhaptics.SDK2.bhaptics_library
struct bhaptics_library_t787B996B8E1646F230C64CB65B9BCF77EA86DD55  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<Bhaptics.SDK2.HapticDevice>
struct Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// Bhaptics.SDK2.AndroidHaptic
struct AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.AndroidHaptic::deviceList
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* ___deviceList_8;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::AndroidJavaObjectPtr
	intptr_t ___AndroidJavaObjectPtr_9;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::InitializePtr
	intptr_t ___InitializePtr_10;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::InitializeRequestPermissionPtr
	intptr_t ___InitializeRequestPermissionPtr_11;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::PlayPtr
	intptr_t ___PlayPtr_12;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::PlayPosPtr
	intptr_t ___PlayPosPtr_13;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::PlayParamPtr
	intptr_t ___PlayParamPtr_14;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::PlayPosParamPtr
	intptr_t ___PlayPosParamPtr_15;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::StopIntPtr
	intptr_t ___StopIntPtr_16;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::StopByEventIdPtr
	intptr_t ___StopByEventIdPtr_17;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::StopAllPtr
	intptr_t ___StopAllPtr_18;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::SubmitRegisteredPtr
	intptr_t ___SubmitRegisteredPtr_19;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::SubmitRegisteredWithTimePtr
	intptr_t ___SubmitRegisteredWithTimePtr_20;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::RegisterPtr
	intptr_t ___RegisterPtr_21;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::RegisterReflectedPtr
	intptr_t ___RegisterReflectedPtr_22;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::PingPtr
	intptr_t ___PingPtr_23;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::PingAllPtr
	intptr_t ___PingAllPtr_24;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::IsRegisteredPtr
	intptr_t ___IsRegisteredPtr_25;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::IsPlayingPtr
	intptr_t ___IsPlayingPtr_26;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::IsPlayingAnythingPtr
	intptr_t ___IsPlayingAnythingPtr_27;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::IsPlayingByEventIdPtr
	intptr_t ___IsPlayingByEventIdPtr_28;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::IsPlayingByRequestIdPtr
	intptr_t ___IsPlayingByRequestIdPtr_29;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::ToggleStreamPtr
	intptr_t ___ToggleStreamPtr_30;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::IsStreamingEnablePtr
	intptr_t ___IsStreamingEnablePtr_31;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::GetStreamingHostsPtr
	intptr_t ___GetStreamingHostsPtr_32;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::ShowBluetoothPtr
	intptr_t ___ShowBluetoothPtr_33;
	// System.IntPtr Bhaptics.SDK2.AndroidHaptic::RefreshPairingInfoPtr
	intptr_t ___RefreshPairingInfoPtr_34;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// Bhaptics.SDK2.GlovePlayTime
struct GlovePlayTime_tCB6A4BC62B130CDF214E746C83CC5ADCED3131FE 
{
	// System.Int32 Bhaptics.SDK2.GlovePlayTime::value__
	int32_t ___value___2;
};

// Bhaptics.SDK2.GloveShapeValue
struct GloveShapeValue_t61B2F0A32043E818A9A5197B019045D8039E2801 
{
	// System.Int32 Bhaptics.SDK2.GloveShapeValue::value__
	int32_t ___value___2;
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

// Bhaptics.SDK2.PositionType
struct PositionType_t582BF291955BB80B5DF7D04F7834611DBC919B3E 
{
	// System.Int32 Bhaptics.SDK2.PositionType::value__
	int32_t ___value___2;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Bhaptics.SDK2.BhapticsSettings
struct BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String Bhaptics.SDK2.BhapticsSettings::appName
	String_t* ___appName_5;
	// System.String Bhaptics.SDK2.BhapticsSettings::appId
	String_t* ___appId_6;
	// System.String Bhaptics.SDK2.BhapticsSettings::apiKey
	String_t* ___apiKey_7;
	// System.Int32 Bhaptics.SDK2.BhapticsSettings::lastDeployVersion
	int32_t ___lastDeployVersion_8;
	// Bhaptics.SDK2.MappingMetaData[] Bhaptics.SDK2.BhapticsSettings::eventData
	MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* ___eventData_9;
	// System.String Bhaptics.SDK2.BhapticsSettings::defaultDeploy
	String_t* ___defaultDeploy_10;
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// Bhaptics.SDK2.BhapticsDeviceUI
struct BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Bhaptics.SDK2.BhapticsDeviceUI::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_8;
	// Bhaptics.SDK2.IconSetting Bhaptics.SDK2.BhapticsDeviceUI::widgetSetting
	IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* ___widgetSetting_9;
	// UnityEngine.Sprite Bhaptics.SDK2.BhapticsDeviceUI::TactsuitWiredIcon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___TactsuitWiredIcon_10;
	// UnityEngine.UI.Image Bhaptics.SDK2.BhapticsDeviceUI::batteryLowImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___batteryLowImage_11;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsDeviceUI::ConnectMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectMenu_12;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsDeviceUI::pingButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___pingButton_13;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsDeviceUI::lButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___lButton_14;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsDeviceUI::rButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___rButton_15;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsDeviceUI::wiredNotification
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___wiredNotification_16;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsDeviceUI::DisconnectMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DisconnectMenu_17;
	// Bhaptics.SDK2.HapticDevice Bhaptics.SDK2.BhapticsDeviceUI::device
	HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___device_18;
};

// Bhaptics.SDK2.BhapticsSDK2
struct BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Bhaptics.SDK2.BhapticsSDK2::autoRunBhapticsPlayer
	bool ___autoRunBhapticsPlayer_5;
	// System.Boolean Bhaptics.SDK2.BhapticsSDK2::autoRequestBluetoothPermission
	bool ___autoRequestBluetoothPermission_6;
	// Bhaptics.SDK2.BhapticsSettings Bhaptics.SDK2.BhapticsSDK2::bhapticsSettings
	BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* ___bhapticsSettings_7;
};

// Bhaptics.SDK2.BhapticsUI
struct BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Bhaptics.SDK2.BhapticsUI::intervalRefreshTime
	float ___intervalRefreshTime_4;
	// UnityEngine.RectTransform Bhaptics.SDK2.BhapticsUI::mainPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___mainPanel_5;
	// UnityEngine.Transform Bhaptics.SDK2.BhapticsUI::devicesContainer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___devicesContainer_6;
	// UnityEngine.Transform Bhaptics.SDK2.BhapticsUI::deviceListPageUi
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___deviceListPageUi_7;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsUI::deviceListNextPageButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___deviceListNextPageButton_8;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsUI::deviceListBackPageButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___deviceListBackPageButton_9;
	// UnityEngine.UI.Text Bhaptics.SDK2.BhapticsUI::deviceListPageText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___deviceListPageText_10;
	// Bhaptics.SDK2.BhapticsDeviceUI Bhaptics.SDK2.BhapticsUI::devicePrefab
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* ___devicePrefab_11;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsUI::noPairedDeviceUi
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___noPairedDeviceUi_12;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsUI::helpButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___helpButton_13;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsUI::bHapticsLinkButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___bHapticsLinkButton_14;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsUI::helpUi
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___helpUi_15;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsUI::helpDescriptionPC
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___helpDescriptionPC_16;
	// UnityEngine.GameObject Bhaptics.SDK2.BhapticsUI::helpDescriptionQuest
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___helpDescriptionQuest_17;
	// UnityEngine.UI.Button Bhaptics.SDK2.BhapticsUI::helpCloseButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___helpCloseButton_18;
	// System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI> Bhaptics.SDK2.BhapticsUI::controllers
	List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* ___controllers_19;
	// UnityEngine.BoxCollider Bhaptics.SDK2.BhapticsUI::mainPanelCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___mainPanelCollider_20;
	// UnityEngine.Vector2 Bhaptics.SDK2.BhapticsUI::defaultMainPanelSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___defaultMainPanelSize_21;
	// UnityEngine.Vector2 Bhaptics.SDK2.BhapticsUI::defaultDeviceContainerSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___defaultDeviceContainerSize_22;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::deviceListSize
	int32_t ___deviceListSize_23;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::deviceListPageIndex
	int32_t ___deviceListPageIndex_24;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::expandHeight
	int32_t ___expandHeight_25;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::expandDeviceCount
	int32_t ___expandDeviceCount_26;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::pageActivateDeviceCount
	int32_t ___pageActivateDeviceCount_27;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::pageExpandHeight
	int32_t ___pageExpandHeight_28;
	// System.Int32 Bhaptics.SDK2.BhapticsUI::maxPageIndex
	int32_t ___maxPageIndex_29;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>
struct List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BhapticsDeviceUIU5BU5D_tE824195E6C9ABAAD9343903546F7E59CF72D34B7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>

// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>
struct List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HapticDeviceU5BU5D_t059B4175D33281F4E3E8770BF6B1B97CDAD54514* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>

// System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData>
struct List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// Bhaptics.SDK2.AndroidUtils

// Bhaptics.SDK2.AndroidUtils

// Bhaptics.SDK2.BhapticsConfig

// Bhaptics.SDK2.BhapticsConfig

// Bhaptics.SDK2.BhapticsHelpers

// Bhaptics.SDK2.BhapticsHelpers

// Bhaptics.SDK2.BhapticsLibrary
struct BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields
{
	// System.Object Bhaptics.SDK2.BhapticsLibrary::Lock
	RuntimeObject* ___Lock_0;
	// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsLibrary::EmptyDevices
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* ___EmptyDevices_1;
	// Bhaptics.SDK2.AndroidHaptic Bhaptics.SDK2.BhapticsLibrary::android
	AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* ___android_2;
	// System.Boolean Bhaptics.SDK2.BhapticsLibrary::_initialized
	bool ____initialized_3;
	// System.Boolean Bhaptics.SDK2.BhapticsLibrary::isAvailable
	bool ___isAvailable_4;
	// System.Boolean Bhaptics.SDK2.BhapticsLibrary::isAvailableChecked
	bool ___isAvailableChecked_5;
};

// Bhaptics.SDK2.BhapticsLibrary

// Bhaptics.SDK2.DeployHttpMessage

// Bhaptics.SDK2.DeployHttpMessage

// Bhaptics.SDK2.DeployMessage

// Bhaptics.SDK2.DeployMessage

// Bhaptics.SDK2.Device

// Bhaptics.SDK2.Device

// Bhaptics.SDK2.DeviceListMessage

// Bhaptics.SDK2.DeviceListMessage

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// Bhaptics.SDK2.HapticDevice

// Bhaptics.SDK2.HapticDevice

// Bhaptics.SDK2.IconSetting

// Bhaptics.SDK2.IconSetting

// Bhaptics.SDK2.MappingMessage

// Bhaptics.SDK2.MappingMessage

// Bhaptics.SDK2.MappingMetaData

// Bhaptics.SDK2.MappingMetaData

// Bhaptics.SDK2.PositonIconSetting

// Bhaptics.SDK2.PositonIconSetting

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Bhaptics.SDK2.bhaptics_library

// Bhaptics.SDK2.bhaptics_library

// System.Collections.Generic.List`1/Enumerator<Bhaptics.SDK2.HapticDevice>

// System.Collections.Generic.List`1/Enumerator<Bhaptics.SDK2.HapticDevice>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// Bhaptics.SDK2.AndroidHaptic
struct AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields
{
	// UnityEngine.AndroidJavaObject Bhaptics.SDK2.AndroidHaptic::androidJavaObject
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject_0;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::PlayParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___PlayParams_1;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::PlayParamParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___PlayParamParams_2;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::EmptyParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyParams_3;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::IsPlayingParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___IsPlayingParams_4;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::StopByRequestIdParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___StopByRequestIdParams_5;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::StopByEventIdParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___StopByEventIdParams_6;
	// System.Object[] Bhaptics.SDK2.AndroidHaptic::PingParams
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___PingParams_7;
};

// Bhaptics.SDK2.AndroidHaptic

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Bhaptics.SDK2.GlovePlayTime

// Bhaptics.SDK2.GlovePlayTime

// Bhaptics.SDK2.GloveShapeValue

// Bhaptics.SDK2.GloveShapeValue

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Bhaptics.SDK2.PositionType

// Bhaptics.SDK2.PositionType

// UnityEngine.jvalue

// UnityEngine.jvalue

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// Bhaptics.SDK2.BhapticsSettings
struct BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields
{
	// Bhaptics.SDK2.BhapticsSettings Bhaptics.SDK2.BhapticsSettings::instance
	BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* ___instance_4;
};

// Bhaptics.SDK2.BhapticsSettings

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// Bhaptics.SDK2.BhapticsDeviceUI
struct BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields
{
	// System.String Bhaptics.SDK2.BhapticsDeviceUI::SelectHexColor
	String_t* ___SelectHexColor_4;
	// System.String Bhaptics.SDK2.BhapticsDeviceUI::SelectHoverHexColor
	String_t* ___SelectHoverHexColor_5;
	// System.String Bhaptics.SDK2.BhapticsDeviceUI::DisableHexColor
	String_t* ___DisableHexColor_6;
	// System.String Bhaptics.SDK2.BhapticsDeviceUI::DisableHoverHexColor
	String_t* ___DisableHoverHexColor_7;
};

// Bhaptics.SDK2.BhapticsDeviceUI

// Bhaptics.SDK2.BhapticsSDK2
struct BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_StaticFields
{
	// Bhaptics.SDK2.BhapticsSDK2 Bhaptics.SDK2.BhapticsSDK2::instance
	BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* ___instance_4;
};

// Bhaptics.SDK2.BhapticsSDK2

// Bhaptics.SDK2.BhapticsUI

// Bhaptics.SDK2.BhapticsUI

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Bhaptics.SDK2.Device[]
struct DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A  : public RuntimeArray
{
	ALIGN_FIELD (8) Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* m_Items[1];

	inline Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Bhaptics.SDK2.PositionType[]
struct PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
// Bhaptics.SDK2.MappingMetaData[]
struct MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9  : public RuntimeArray
{
	ALIGN_FIELD (8) MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4* m_Items[1];

	inline MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		m_Items[index] = value;
	}
};
// Bhaptics.SDK2.GlovePlayTime[]
struct GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Bhaptics.SDK2.GloveShapeValue[]
struct GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Bhaptics.SDK2.MappingMessage>(System.String)
inline MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* JsonUtility_FromJson_TisMappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B_m96528CACA0BB87027EB371A245B5C11702CC0800 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// T UnityEngine.JsonUtility::FromJson<Bhaptics.SDK2.DeployHttpMessage>(System.String)
inline DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7* JsonUtility_FromJson_TisDeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7_m65A78E5FE63AA99A26671F27EB093A105AB350E8 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.BhapticsHelpers::AngleDir(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsHelpers_AngleDir_mA97E8B0F2D2367993ABE01E6A37569EE1596E8EB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fwd, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetDir, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_up, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>::.ctor()
inline void List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.JsonUtility::FromJson<Bhaptics.SDK2.Device>(System.String)
inline Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* JsonUtility_FromJson_TisDevice_tDF22C64E431DF603098C0E3F1D47C03A8098C183_m00F779534FCC8EDA2493F598FC74B13541DB36BF (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// Bhaptics.SDK2.HapticDevice Bhaptics.SDK2.BhapticsHelpers::Convert(Bhaptics.SDK2.Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* BhapticsHelpers_Convert_mC940D14FA70DB64DB22EF22BA0934082E7753894 (Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* ___0_d, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>::Add(T)
inline void List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_inline (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* __this, HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*, HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Bhaptics.SDK2.HapticDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticDevice__ctor_m4A9742DFFA0E26789734E297B31BE3038F35DE30 (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* __this, const RuntimeMethod* method) ;
// Bhaptics.SDK2.PositionType Bhaptics.SDK2.BhapticsHelpers::ToDeviceType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsHelpers_ToDeviceType_m8DC67B93C36899A7C631FB626D01345AB260D162 (int32_t ___0_type, const RuntimeMethod* method) ;
// Bhaptics.SDK2.PositionType[] Bhaptics.SDK2.BhapticsHelpers::ToCandidates(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* BhapticsHelpers_ToCandidates_m118C881E52EFA99F5FC1817E00562B1EB8600644 (int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// Bhaptics.SDK2.BhapticsSettings Bhaptics.SDK2.BhapticsSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* BhapticsSettings_get_Instance_mF900E911DD4DFFC33DF4D9656146BDF7F57DE8E7 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsLibrary::GetDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsLibrary_GetDevices_m2A0E415820293AF2405FB9158C2465D9E6B46022 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>::get_Count()
inline int32_t List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String Bhaptics.SDK2.BhapticsSettings::get_AppId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_AppId_mB2CC73C871D1DCC0703A4557213B1E74B79AC532_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String Bhaptics.SDK2.BhapticsSettings::get_ApiKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_ApiKey_m71FAC9C8A23BB8F44F623E82645B29744553968D_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) ;
// System.String Bhaptics.SDK2.BhapticsSettings::get_DefaultDeploy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_DefaultDeploy_m2B1A71ECEB64A9968128C76522817EB401840D13_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::Initialize(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_Initialize_mEE4D8022C566F29C2F7C8E28B2E7131F4AD89549 (String_t* ___0_appId, String_t* ___1_apiKey, String_t* ___2_json, bool ___3_autoRequestBluetoothPermission, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsBhapticsAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsBhapticsAvailable_mCE06525D8F10ABD067F3A9ACA4B47EC20B4A0F5B (bool ___0_isAutoRunPlayer, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsLibrary::OnApplicationFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_OnApplicationFocus_mB9F59228F5452556C0F7EAC29D6ABB136A72D8C8 (const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsLibrary::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_OnApplicationPause_m1F87D93A59C6018909CD954E946DAA0475196E16 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsLibrary::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_Destroy_m074997FF86ADFDD30B578C04727323EA2D4116EB (const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsLibrary::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_OnApplicationQuit_m9BBDF12F6E8D9B8FC50CE105075D663A9DE85924 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsSettings::LoadInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_LoadInstance_m29DF90A62D7D954936A05F7017C4BA1AB110A26F (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String Bhaptics.SDK2.BhapticsSettings::get_AppName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_AppName_mB8AB03A6A0E99989AE4E919324F7353307B8351D_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<Bhaptics.SDK2.BhapticsSettings>(System.String)
inline BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* Resources_Load_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_m263C1699378A292330BDE1BC59621C74839B3342 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.ScriptableObject::CreateInstance<Bhaptics.SDK2.BhapticsSettings>()
inline BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* ScriptableObject_CreateInstance_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_mD7D65710B1F7FDA56DC4CBCDF6E3D1473069DD89 (const RuntimeMethod* method)
{
	return ((  BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B (intptr_t ___0_javaClass, String_t* ___1_methodName, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.AndroidHaptic::GetDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* AndroidHaptic_GetDevices_m4A9860D79031E13280C8C3FCD9DAA67FA2BA0B55 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void Bhaptics.SDK2.AndroidHaptic::CallNativeVoidMethod(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, intptr_t ___0_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_param, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String[]>(System.String,System.Object[])
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsHelpers::ConvertToBhapticsDevices(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsHelpers_ConvertToBhapticsDevices_m4BEF6A21710EE9990EFCA230AB91FF83E3B67012 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_deviceJson, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::CallNativeBoolMethod(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, intptr_t ___0_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_param, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::CallNativeIntMethod(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_CallNativeIntMethod_m6E3358006A268AFA8D008AA97A63D9E136EC6E2E (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, intptr_t ___0_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_param, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidUtils::CallNativeVoidMethod(System.IntPtr,System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_CallNativeVoidMethod_m66D608CE027E80F63B68BB449DF655E0D5826482 (intptr_t ___0_androidObjPtr, intptr_t ___1_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_param, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidUtils::CallNativeBoolMethod(System.IntPtr,System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidUtils_CallNativeBoolMethod_m5B42B3831AC47F8D0543BBF4D6E10912391523F9 (intptr_t ___0_androidObjPtr, intptr_t ___1_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_param, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidUtils::CallNativeIntMethod(System.IntPtr,System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidUtils_CallNativeIntMethod_mFC749A33065B045395BCCB9A43458ED501B463B9 (intptr_t ___0_androidObjPtr, intptr_t ___1_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_param, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___1_jniArgs, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidJNI::CallBooleanMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNI::CallIntMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741 (intptr_t ___0_obj, intptr_t ___1_methodID, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___2_args, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsBhapticsAvailableForce(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsBhapticsAvailableForce_m4F45AF9A5EFAE916B74104C6E3B5FBA5FC33C211 (bool ___0_isAutoRunPlayer, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::RefreshPairing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_RefreshPairing_m3AA10F48C4ECEA2B6731300E001ACF4FB2BCCFD9 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::CheckBhapticsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_CheckBhapticsAvailable_m0D9273E2D3247E1700D287B985EFA6E17949CD63 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayerInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayerInstalled_m527B5750B0265E5FBAAFB32464EEF4FE714C08C6 (const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayerRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayerRunning_mEE931E2302DAFB703CDBE69B503786D5F94BC094 (const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::launchPlayer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_launchPlayer_mC60FF9B51FBD17E3BFB05593011ECED2C875D9BF (bool ___0_b, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic__ctor_m97411DCD141E29F20C7AA8515BF65C7007332F4E (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::InitializeWithPermission(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_InitializeWithPermission_mA85D6C6FB50DC940254873626B7BD566CA2A931E (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_workspaceId, String_t* ___1_sdkKey, String_t* ___2_json, bool ___3_requestPermission, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::wsIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_wsIsConnected_mC8E3CE320D6745ED912B66271D481311555FD673 (const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::registryAndInit(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_registryAndInit_mA1C7E539AD9BC774CF53EE3EFA4E522032BA0CC0 (String_t* ___0_sdkAPIKey, String_t* ___1_workspaceId, String_t* ___2_initData, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_Dispose_m3AF58719044DBCE68502E1099E08E1CDEB952340 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.bhaptics_library::wsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bhaptics_library_wsClose_m2B713DF088C805183F49C387AB203F81D3BC72F6 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsLibrary::GetConnectedDevices(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsLibrary_GetConnectedDevices_mA57A43243FB64A2118EB6FFE1A5558D98D22360D (int32_t ___0_pos, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_Play_mC9BB0028891DF56F21536A7AF65C328A7F5541AD (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.bhaptics_library::play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_play_m781AA5C817747DA5FEC7C2C52FA56555C2231447 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayParam(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayParam_mCF7E4C68FEC88B2141E64E3479C95464C058D072 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.bhaptics_library::playPosParam(System.String,System.Int32,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playPosParam_mAEA493B7959A4C7BF24EBC3E44E6A508533BB0FF (String_t* ___0_key, int32_t ___1_position, float ___2_intensity, float ___3_duration, float ___4_angleX, float ___5_offsetY, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayMotors(System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayMotors_mB43FF0B9F28AE69D5B047A1B12816BD81CBC26D0 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motors, int32_t ___2_durationMillis, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.bhaptics_library::playDot(System.Int32,System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playDot_m3CCC59396717F92C6E9221A3AEB17559938A3F05 (int32_t ___0_position, int32_t ___1_durationMillis, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_motors, int32_t ___3_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayGlove(System.Int32,System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayGlove_m344740B1FE36160BA7CADE215EF3C4413CF944AA (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motors, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_playTimeValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_shapeValues, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.bhaptics_library::playWaveform(System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playWaveform_mFD99DF33FBC613F9C1FD1594EED0DA7B0C41919A (int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motorValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_playTimeValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_shapeValues, int32_t ___4_motorLen, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayPath(System.Int32,System.Single[],System.Single[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayPath_m4E2810CBA9B0F94FD0FA8893B5585E8D567B5835 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_position, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_xValues, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_yValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_intensityValues, int32_t ___4_duration, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.bhaptics_library::playPath(System.Int32,System.Single[],System.Single[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playPath_mF5E92ECF4BA05C3305AB607673E580029DBA9FA5 (int32_t ___0_position, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_xValues, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_yValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_intensityValues, int32_t ___4_Len, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayLoop(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayLoop_mE8170F088DF56B17A8DF67A5A766A67A6F2E81C8 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, int32_t ___5_interval, int32_t ___6_maxCount, const RuntimeMethod* method) ;
// System.Int32 Bhaptics.SDK2.bhaptics_library::playLoop(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playLoop_m101D6DA5DDD7E23F93480149ED54AC4EB97AD1A7 (String_t* ___0_key, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, int32_t ___5_interval, int32_t ___6_maxCount, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::StopByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_StopByEventId_m51A9C22C060654E8340CB2BA4FA5506DE951DF14 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::stopByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_stopByEventId_m73622D4CF4E191294963B22F7D12EEE336FF9172 (String_t* ___0_eventId, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::StopByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_StopByRequestId_mD9E3CA3D17043C6AF4B3E594E0970D2E140977EE (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_stop_mB70237BEF6C8D0122C5B021D7BDD14138528427B (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_Stop_m40A6EBAC5B7AD84E66830E1608FFB12A6EE72F25 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::stopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_stopAll_mA694C2E0E7FB26C2FFF039B67806C4791B82ADE1 (const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsPlaying_m88FC33CBCDEF3010A689F95811D736C3B4C87700 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlaying_m90CFDC06DB7922F8DC88092FEEBF4A95EB919152 (const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsPlayingByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsPlayingByEventId_m23B4498B9513AACE0985F5347BCEEF3B2D8247CE (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayingByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayingByEventId_m2C613045E7397316F94251F00528303A714D9D90 (String_t* ___0_eventId, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsPlayingByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsPlayingByRequestId_mE0460125762A3932AA0511257AD0660FC16D6487 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_requestId, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayingByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayingByRequestId_m5B2B973F0D1C2D5414F46E287F726A68D4B7E47C (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.bhaptics_library::GetDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* bhaptics_library_GetDevices_mEE731D38475609C7082356F097F9DD91AB12F6DE (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>::GetEnumerator()
inline Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F (*) (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Bhaptics.SDK2.HapticDevice>::Dispose()
inline void Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513 (Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Bhaptics.SDK2.HapticDevice>::get_Current()
inline HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_inline (Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F* __this, const RuntimeMethod* method)
{
	return ((  HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* (*) (Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Bhaptics.SDK2.HapticDevice>::MoveNext()
inline bool Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770 (Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::Ping(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_Ping_m6A5A1232B32BFB9A9C4381BA45689A6BB19D7143 (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_targetDevice, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::Ping(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_Ping_mD7A238AFECD9423FCFE70798B2A6FB2E8314A3D4 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::ping(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_ping_m69DBE2626F8ED1E99725C55805DC39CFCFD09EE0 (String_t* ___0_address, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::PingAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_PingAll_m7EE55B5A5CFD9BD6274C3E9C05096CB9C9D00B8F (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::pingAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_pingAll_mF74095D895365B64F744A3F730C109AACA78DB3B (const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.AndroidHaptic::TogglePosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_TogglePosition_mA4EDDC6A652E597B33523556FAEE7027130978BF (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_address, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.bhaptics_library::swapPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_swapPosition_m6367FC3768BC196EAB0E0EFF432419428F2D0C55 (String_t* ___0_address, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_StopAll_m084EFDBEA116B263235711BD3E4DBDE3D3821D99 (const RuntimeMethod* method) ;
// System.IntPtr Bhaptics.SDK2.bhaptics_library::getDeviceInfoJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t bhaptics_library_getDeviceInfoJson_m3EF3330554DDB53D390322F7FBBBE4B3D76CAB45 (const RuntimeMethod* method) ;
// System.String Bhaptics.SDK2.bhaptics_library::PtrToStringUtf8(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* bhaptics_library_PtrToStringUtf8_mCB824D8D2749CFFD2900E9C7E590E00EFF4C5ECD (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Bhaptics.SDK2.DeviceListMessage>(System.String)
inline DeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48* JsonUtility_FromJson_TisDeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48_mB2CF5657369D0EE15FB831F9FCA73BA0C9B004F8 (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  DeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___0_json, method);
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsHelpers::Convert(Bhaptics.SDK2.Device[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsHelpers_Convert_m91DA9F1B94A0A07391504F7B1114CBFEB8EDDD0E (DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A* ___0_deviceJson, const RuntimeMethod* method) ;
// System.IntPtr Bhaptics.SDK2.bhaptics_library::bHapticsGetHapticMappings(System.String,System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t bhaptics_library_bHapticsGetHapticMappings_m60554EEA7F29C9019B5628E5DDD218D891A660C2 (String_t* ___0_apiKey, String_t* ___1_appId, int32_t ___2_lastVersion, int32_t* ___3_status, const RuntimeMethod* method) ;
// Bhaptics.SDK2.MappingMessage Bhaptics.SDK2.MappingMessage::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* MappingMessage_CreateFromJSON_m0954F3969E49784E665FDFEC995657BB2BF0BADB (String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData>::.ctor()
inline void List_1__ctor_m00B4BD1332EFF508E3090DB37C862685CD66E018 (List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.IntPtr Bhaptics.SDK2.bhaptics_library::bHapticsGetHapticMessage(System.String,System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t bhaptics_library_bHapticsGetHapticMessage_m4A647DD96020C88079B1C3B61BACA6CD9E041554 (String_t* ___0_apiKey, String_t* ___1_appId, int32_t ___2_lastVersion, int32_t* ___3_status, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_m40222A943AEA82FBFAC5D4881CABD56DFFBA7085 (intptr_t ___0_ptr, int32_t ___1_ofs, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::UpdateIcon(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_UpdateIcon_m2402C81102A299C597D0D48BCEA4AE36C2352C3C (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_d, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::RenderConnectMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_RenderConnectMenu_m174D51DA23415C25A10CABB3E79798D83FC41FC1 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::RenderDisconnectMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_RenderDisconnectMenu_mDBFACD9FF396E0C348A2F1C3B756A0462B1499B1 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::UpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_UpdateButtons_mAE86ED4FB09898C95E43E7FFE04272674551B14D (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.BhapticsDeviceUI::IsLeft(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsDeviceUI_IsLeft_m7C34703598911651EFF2E1703397197D85BD618A (int32_t ___0_pos, const RuntimeMethod* method) ;
// System.Boolean Bhaptics.SDK2.BhapticsDeviceUI::IsRight(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsDeviceUI_IsRight_m5F8AE03F8352C66E6430363C5EF599E11122FCCE (int32_t ___0_pos, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::ChangeButtonColor(UnityEngine.UI.Button,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_ChangeButtonColor_mC9F259809919F1E9CDE29A00D829833918435A61 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_targetButton, bool ___1_isSelect, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Sprite Bhaptics.SDK2.BhapticsDeviceUI::GetSprite(Bhaptics.SDK2.PositonIconSetting,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___0_icon, bool ___1_connected, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsLibrary::TogglePosition(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_TogglePosition_m6FD1B2E88BB7C1FCFF9D2CE676424D1CC7BC0B7E (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_targetDevice, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D (String_t* ___0_htmlString, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_color, const RuntimeMethod* method) ;
// UnityEngine.Color Bhaptics.SDK2.BhapticsDeviceUI::ToColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BhapticsDeviceUI_ToColor_mDF150724394E3BBDEFB0D82464A99B6425335027 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, String_t* ___0_hex, const RuntimeMethod* method) ;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_normalColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_highlightedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_pressedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<Bhaptics.SDK2.BhapticsDeviceUI>(T,UnityEngine.Transform)
inline BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* Object_Instantiate_TisBhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_mF55871489ACB93049FF5E5CB5351B57B1C366E01 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* (*) (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>::Add(T)
inline void List_1_Add_m4E3392699712485711EA14A1CD9A2D261C7B12DA_inline (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* __this, BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4*, BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, float ___2_repeatRate, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void Bhaptics.SDK2.BhapticsUI::SetActiveHelpGameObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_SetActiveHelpGameObject_m99AC352E99EE250D5D659168C4DA3C44222F334F (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, bool ___0_value, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>::get_Item(System.Int32)
inline BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914 (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* (*) (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice>::get_Item(System.Int32)
inline HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* List_1_get_Item_mE4D4F415E617EE858858DE5311A3D71C594AB44E (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* (*) (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::RefreshDevice(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_RefreshDevice_mA2B76A0731ADC027EE873EC46ABFD62757D9D6BA (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Bhaptics.SDK2.BhapticsDeviceUI>::.ctor()
inline void List_1__ctor_m8E617AF14FD1CFE483F7DF76E45079063862D31B (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL registryAndInit(char*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL registryAndInitHost(char*, char*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL wsIsConnected();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C void CDECL wsClose();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL reInitMessage(char*, char*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL play(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL playPosParam(char*, int32_t, float, float, float, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL stop(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL stopByEventId(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL stopAll();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL isPlaying();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL isPlayingByRequestId(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL isPlayingByEventId(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL isbHapticsConnected(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ping(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL pingAll();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL swapPosition(char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL getDeviceInfoJson();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL isPlayerInstalled();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL isPlayerRunning();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL launchPlayer(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL bHapticsGetHapticMessage(char*, char*, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL bHapticsGetHapticMappings(char*, char*, int32_t, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL playDot(int32_t, int32_t, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL playWaveform(int32_t, int32_t*, int32_t*, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL playPath(int32_t, float*, float*, int32_t*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL playLoop(char*, float, float, float, float, int32_t, int32_t);
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
// System.Void Bhaptics.SDK2.Device::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Device__ctor_m62A2CC4C504965932D1EA897DDF3D287BF684F19 (Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.MappingMetaData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingMetaData__ctor_m12C669282DC3AD5B32863CBEBB516E8C9E3FDC14 (MappingMetaData_tBF0E49D07DA481CD645ADEE6837BE3109056FBC4* __this, const RuntimeMethod* method) 
{
	{
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
// Bhaptics.SDK2.MappingMessage Bhaptics.SDK2.MappingMessage::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* MappingMessage_CreateFromJSON_m0954F3969E49784E665FDFEC995657BB2BF0BADB (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisMappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B_m96528CACA0BB87027EB371A245B5C11702CC0800_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<MappingMessage>(jsonString);
		String_t* L_0 = ___0_jsonString;
		MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* L_1;
		L_1 = JsonUtility_FromJson_TisMappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B_m96528CACA0BB87027EB371A245B5C11702CC0800(L_0, JsonUtility_FromJson_TisMappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B_m96528CACA0BB87027EB371A245B5C11702CC0800_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Bhaptics.SDK2.MappingMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MappingMessage__ctor_mE39EA0381F62D816B92EF906D2990EBEEF01D622 (MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.DeployMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeployMessage__ctor_mC5A1A8305301E23366D59AD22CFD08BC168CCE32 (DeployMessage_t03B233BC9547A7DF310C00FDFFFDDDCE433C8A6C* __this, const RuntimeMethod* method) 
{
	{
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
// Bhaptics.SDK2.DeployHttpMessage Bhaptics.SDK2.DeployHttpMessage::CreateFromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7* DeployHttpMessage_CreateFromJSON_mFB835FBA6962CDC33B62F18A8FAEA3EF11B6C0FC (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisDeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7_m65A78E5FE63AA99A26671F27EB093A105AB350E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.FromJson<DeployHttpMessage>(jsonString);
		String_t* L_0 = ___0_jsonString;
		DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7* L_1;
		L_1 = JsonUtility_FromJson_TisDeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7_m65A78E5FE63AA99A26671F27EB093A105AB350E8(L_0, JsonUtility_FromJson_TisDeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7_m65A78E5FE63AA99A26671F27EB093A105AB350E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Bhaptics.SDK2.DeployHttpMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeployHttpMessage__ctor_m10A72A4111B4D56CC19CD63909D460DB7795914B (DeployHttpMessage_tC259B57A031A0FD862A92397C9FFAA2CB77F77B7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.HapticDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticDevice__ctor_m4A9742DFFA0E26789734E297B31BE3038F35DE30 (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.DeviceListMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceListMessage__ctor_m537D0AD2EC4A3F4BF9497A4555A46B9C595930C4 (DeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48* __this, const RuntimeMethod* method) 
{
	{
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
// System.Single Bhaptics.SDK2.BhapticsHelpers::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BhapticsHelpers_Angle_mAF14599E7F49C7D2EC2681D38B3E87409B288FE4 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fwd, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetDir, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var fwd2d = new Vector3(fwd.x, 0, fwd.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_fwd;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_fwd;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, (0.0f), L_3, /*hidden argument*/NULL);
		// var targetDir2d = new Vector3(targetDir.x, 0, targetDir.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_targetDir;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_targetDir;
		float L_8 = L_7.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_6, (0.0f), L_8, NULL);
		// float angle = Vector3.Angle(fwd2d, targetDir2d);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10;
		L_10 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_4, L_9, NULL);
		V_1 = L_10;
		// if (AngleDir(fwd, targetDir, Vector3.up) == -1)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_fwd;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_targetDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		int32_t L_14;
		L_14 = BhapticsHelpers_AngleDir_mA97E8B0F2D2367993ABE01E6A37569EE1596E8EB(L_11, L_12, L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_005e;
		}
	}
	{
		// angle = 360.0f - angle;
		float L_15 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract((360.0f), L_15));
		// if (angle > 359.9999f)
		float L_16 = V_1;
		if ((!(((float)L_16) > ((float)(359.999908f)))))
		{
			goto IL_005c;
		}
	}
	{
		// angle -= 360.0f;
		float L_17 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_17, (360.0f)));
	}

IL_005c:
	{
		// return angle;
		float L_18 = V_1;
		return L_18;
	}

IL_005e:
	{
		// return angle;
		float L_19 = V_1;
		return L_19;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsHelpers::AngleDir(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsHelpers_AngleDir_mA97E8B0F2D2367993ABE01E6A37569EE1596E8EB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fwd, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetDir, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_up, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// Vector3 perp = Vector3.Cross(fwd, targetDir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_fwd;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_targetDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_0, L_1, NULL);
		// float dir = Vector3.Dot(perp, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_up;
		float L_4;
		L_4 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// if (dir > 0.0)
		float L_5 = V_0;
		if ((!(((double)((double)L_5)) > ((double)(0.0)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_001d:
	{
		// if (dir < 0.0)
		float L_6 = V_0;
		if ((!(((double)((double)L_6)) < ((double)(0.0)))))
		{
			goto IL_002c;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_002c:
	{
		// return 0;
		return 0;
	}
}
// System.String Bhaptics.SDK2.BhapticsHelpers::ErrorCodeToMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BhapticsHelpers_ErrorCodeToMessage_m70304610CF46C85F4D08FFB00700D64A95DB5468 (int32_t ___0_code, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04DD2DF7ABB1CCABCD9F5762A813D52B7ABE21E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397497D4AE930824042348635006D0154BBD9E16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0CDDAAD19BBF94003C931580F8426E42278329);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A85213ED25EDB0A8BC0A170FA96A7D440544B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86CEA500049008F0C387DB909A4EEF10B46989D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61AFCCC91D63C4504BAD3799B945D85A68F7CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C3106F45B1515B9DFBA3AEEFD78C9BA6DD3A14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4A92FADFB47C1A6B300C85CD21D1C45A260D913);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_code;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0041;
			}
		}
	}
	{
		int32_t L_1 = ___0_code;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)100))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_2 = ___0_code;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)999))))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0053;
	}

IL_0029:
	{
		// return "BHAPTICS_SETTINGS_SUCCESS";
		return _stringLiteral78A85213ED25EDB0A8BC0A170FA96A7D440544B1;
	}

IL_002f:
	{
		// return "NETWORK_ERROR";
		return _stringLiteral86CEA500049008F0C387DB909A4EEF10B46989D6;
	}

IL_0035:
	{
		// return "API_KEY_INVALID";
		return _stringLiteralF4A92FADFB47C1A6B300C85CD21D1C45A260D913;
	}

IL_003b:
	{
		// return "APP_ID_INVALID";
		return _stringLiteral4B0CDDAAD19BBF94003C931580F8426E42278329;
	}

IL_0041:
	{
		// return "APPLICATION_NOT_DEPLOY";
		return _stringLiteralB61AFCCC91D63C4504BAD3799B945D85A68F7CD0;
	}

IL_0047:
	{
		// return "NOT_CHANGED";
		return _stringLiteral04DD2DF7ABB1CCABCD9F5762A813D52B7ABE21E6;
	}

IL_004d:
	{
		// return "UNKNOWN_ISSUES";
		return _stringLiteral397497D4AE930824042348635006D0154BBD9E16;
	}

IL_0053:
	{
		// return "UNKNOWN CODE";
		return _stringLiteralD4C3106F45B1515B9DFBA3AEEFD78C9BA6DD3A14;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsHelpers::ConvertToBhapticsDevices(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsHelpers_ConvertToBhapticsDevices_m4BEF6A21710EE9990EFCA230AB91FF83E3B67012 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_deviceJson, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisDevice_tDF22C64E431DF603098C0E3F1D47C03A8098C183_m00F779534FCC8EDA2493F598FC74B13541DB36BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_0 = NULL;
	int32_t V_1 = 0;
	Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* V_2 = NULL;
	{
		// var res = new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_0 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_0, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		V_0 = L_0;
		// for (var i = 0; i < deviceJson.Length; i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		// var device = JsonUtility.FromJson<Device>(deviceJson[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_deviceJson;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_5;
		L_5 = JsonUtility_FromJson_TisDevice_tDF22C64E431DF603098C0E3F1D47C03A8098C183_m00F779534FCC8EDA2493F598FC74B13541DB36BF(L_4, JsonUtility_FromJson_TisDevice_tDF22C64E431DF603098C0E3F1D47C03A8098C183_m00F779534FCC8EDA2493F598FC74B13541DB36BF_RuntimeMethod_var);
		V_2 = L_5;
		// res.Add(Convert(device));
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_6 = V_0;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_7 = V_2;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_8;
		L_8 = BhapticsHelpers_Convert_mC940D14FA70DB64DB22EF22BA0934082E7753894(L_7, NULL);
		NullCheck(L_6);
		List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_inline(L_6, L_8, List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
		// for (var i = 0; i < deviceJson.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		// for (var i = 0; i < deviceJson.Length; i++)
		int32_t L_10 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = ___0_deviceJson;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return res;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_12 = V_0;
		return L_12;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsHelpers::Convert(Bhaptics.SDK2.Device[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsHelpers_Convert_m91DA9F1B94A0A07391504F7B1114CBFEB8EDDD0E (DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A* ___0_deviceJson, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var res = new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_0 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_0, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		V_0 = L_0;
		// for (var i = 0; i < deviceJson.Length; i++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000a:
	{
		// res.Add(Convert(deviceJson[i]));
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_1 = V_0;
		DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A* L_2 = ___0_deviceJson;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6;
		L_6 = BhapticsHelpers_Convert_mC940D14FA70DB64DB22EF22BA0934082E7753894(L_5, NULL);
		NullCheck(L_1);
		List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_inline(L_1, L_6, List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
		// for (var i = 0; i < deviceJson.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001c:
	{
		// for (var i = 0; i < deviceJson.Length; i++)
		int32_t L_8 = V_1;
		DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A* L_9 = ___0_deviceJson;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// return res;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_10 = V_0;
		return L_10;
	}
}
// Bhaptics.SDK2.HapticDevice Bhaptics.SDK2.BhapticsHelpers::Convert(Bhaptics.SDK2.Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* BhapticsHelpers_Convert_mC940D14FA70DB64DB22EF22BA0934082E7753894 (Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var isConnected = d.connected;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_0 = ___0_d;
		NullCheck(L_0);
		bool L_1 = L_0->___connected_3;
		V_0 = L_1;
		// return new HapticDevice()
		// {
		//     IsPaired = d.paired,
		//     IsConnected = isConnected,
		//     Address = d.address,
		//     Position = ToDeviceType(d.position),
		//     DeviceName = d.deviceName,
		//     Candidates = ToCandidates(d.position),
		//     Battery = d.battery,
		//     IsAudioJack = d.audioJackIn,
		// };
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_2 = (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0*)il2cpp_codegen_object_new(HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HapticDevice__ctor_m4A9742DFFA0E26789734E297B31BE3038F35DE30(L_2, NULL);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_3 = L_2;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_4 = ___0_d;
		NullCheck(L_4);
		bool L_5 = L_4->___paired_0;
		NullCheck(L_3);
		L_3->___IsPaired_0 = L_5;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = L_3;
		bool L_7 = V_0;
		NullCheck(L_6);
		L_6->___IsConnected_1 = L_7;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_8 = L_6;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_9 = ___0_d;
		NullCheck(L_9);
		String_t* L_10 = L_9->___address_4;
		NullCheck(L_8);
		L_8->___Address_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___Address_4), (void*)L_10);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_11 = L_8;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_12 = ___0_d;
		NullCheck(L_12);
		int32_t L_13 = L_12->___position_2;
		int32_t L_14;
		L_14 = BhapticsHelpers_ToDeviceType_m8DC67B93C36899A7C631FB626D01345AB260D162(L_13, NULL);
		NullCheck(L_11);
		L_11->___Position_3 = L_14;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_15 = L_11;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_16 = ___0_d;
		NullCheck(L_16);
		String_t* L_17 = L_16->___deviceName_1;
		NullCheck(L_15);
		L_15->___DeviceName_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___DeviceName_2), (void*)L_17);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_18 = L_15;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_19 = ___0_d;
		NullCheck(L_19);
		int32_t L_20 = L_19->___position_2;
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_21;
		L_21 = BhapticsHelpers_ToCandidates_m118C881E52EFA99F5FC1817E00562B1EB8600644(L_20, NULL);
		NullCheck(L_18);
		L_18->___Candidates_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Candidates_5), (void*)L_21);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_22 = L_18;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_23 = ___0_d;
		NullCheck(L_23);
		int32_t L_24 = L_23->___battery_5;
		NullCheck(L_22);
		L_22->___Battery_7 = L_24;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_25 = L_22;
		Device_tDF22C64E431DF603098C0E3F1D47C03A8098C183* L_26 = ___0_d;
		NullCheck(L_26);
		bool L_27 = L_26->___audioJackIn_6;
		NullCheck(L_25);
		L_25->___IsAudioJack_6 = L_27;
		return L_25;
	}
}
// Bhaptics.SDK2.PositionType[] Bhaptics.SDK2.BhapticsHelpers::ToCandidates(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* BhapticsHelpers_ToCandidates_m118C881E52EFA99F5FC1817E00562B1EB8600644 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_0063;
			}
			case 5:
			{
				goto IL_0072;
			}
			case 6:
			{
				goto IL_0081;
			}
			case 7:
			{
				goto IL_0090;
			}
			case 8:
			{
				goto IL_009f;
			}
			case 9:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_00b5;
	}

IL_0033:
	{
		// return new PositionType[] { PositionType.Head };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_1 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)1);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)3);
		return L_2;
	}

IL_003e:
	{
		// return new PositionType[] { PositionType.Vest };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_3 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)1);
		return L_3;
	}

IL_0045:
	{
		// return new PositionType[] { PositionType.ForearmL, PositionType.ForearmR };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_4 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)2);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		return L_6;
	}

IL_0054:
	{
		// return new PositionType[] { PositionType.ForearmL, PositionType.ForearmR };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_7 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)2);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		return L_9;
	}

IL_0063:
	{
		// return new PositionType[] { PositionType.HandL, PositionType.HandR };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_10 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)2);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)4);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)5);
		return L_12;
	}

IL_0072:
	{
		// return new PositionType[] { PositionType.HandL, PositionType.HandR };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_13 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)2);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)4);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)5);
		return L_15;
	}

IL_0081:
	{
		// return new PositionType[] { PositionType.FootR, PositionType.FootL };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_16 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)2);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)6);
		return L_18;
	}

IL_0090:
	{
		// return new PositionType[] { PositionType.FootR, PositionType.FootL };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_19 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)2);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_21 = L_20;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)6);
		return L_21;
	}

IL_009f:
	{
		// return new PositionType[] { PositionType.GloveL };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_22 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)1);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)8);
		return L_23;
	}

IL_00aa:
	{
		// return new PositionType[] { PositionType.GloveL };
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_24 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)1);
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_25 = L_24;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)8);
		return L_25;
	}

IL_00b5:
	{
		// return new PositionType[0];
		PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8* L_26 = (PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8*)SZArrayNew(PositionTypeU5BU5D_tFC36BFA9F0327E4FD064DCF0AE162268EA70B0D8_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_26;
	}
}
// Bhaptics.SDK2.PositionType Bhaptics.SDK2.BhapticsHelpers::ToDeviceType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsHelpers_ToDeviceType_m8DC67B93C36899A7C631FB626D01345AB260D162 (int32_t ___0_type, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_0038;
			}
			case 5:
			{
				goto IL_003a;
			}
			case 6:
			{
				goto IL_003c;
			}
			case 7:
			{
				goto IL_003e;
			}
			case 8:
			{
				goto IL_0040;
			}
			case 9:
			{
				goto IL_0042;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0030:
	{
		// return PositionType.Vest;
		return (int32_t)(0);
	}

IL_0032:
	{
		// return PositionType.ForearmL;
		return (int32_t)(1);
	}

IL_0034:
	{
		// return PositionType.ForearmR;
		return (int32_t)(2);
	}

IL_0036:
	{
		// return PositionType.Head;
		return (int32_t)(3);
	}

IL_0038:
	{
		// return PositionType.HandL;
		return (int32_t)(4);
	}

IL_003a:
	{
		// return PositionType.HandR;
		return (int32_t)(5);
	}

IL_003c:
	{
		// return PositionType.FootL;
		return (int32_t)(6);
	}

IL_003e:
	{
		// return PositionType.FootR;
		return (int32_t)(7);
	}

IL_0040:
	{
		// return PositionType.GloveL;
		return (int32_t)(8);
	}

IL_0042:
	{
		// return PositionType.GloveR;
		return (int32_t)(((int32_t)9));
	}

IL_0045:
	{
		// return PositionType.Vest;
		return (int32_t)(0);
	}
}
// System.Void Bhaptics.SDK2.BhapticsHelpers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsHelpers__ctor_m6B70720EBD77C6ECCA19F422B9EBA752925BD262 (BhapticsHelpers_tC6C5520C82D4337B2A75EBD1947575F89745DEFB* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.BhapticsSDK2::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSDK2_Awake_mA32ACF6A6CDEF354A7A61FE26048A181F1F05A21 (BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81D8FD4BF03F41CC485E59888656BD2F560153F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral834C5E7D044A649C197E433CFB06BF90D3F28400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872A703D270B2441C02E8AAFB9514CEFE3F552D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4F9B3E96400274717E8290271327C9F3D6050EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9320834208179650EED8C624B153F3D48C8E4CD);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_0 = NULL;
	bool V_1 = false;
	{
		// if (instance != null)
		BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* L_0 = ((BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// DestroyImmediate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(__this, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// instance = this;
		((BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// bhapticsSettings = BhapticsSettings.Instance;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_2;
		L_2 = BhapticsSettings_get_Instance_mF900E911DD4DFFC33DF4D9656146BDF7F57DE8E7(NULL);
		__this->___bhapticsSettings_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bhapticsSettings_7), (void*)L_2);
		// var hapticDevices = BhapticsLibrary.GetDevices();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_3;
		L_3 = BhapticsLibrary_GetDevices_m2A0E415820293AF2405FB9158C2465D9E6B46022(NULL);
		V_0 = L_3;
		// Debug.LogFormat("[bHaptics] devices {0}", hapticDevices.Count);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_6, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral834C5E7D044A649C197E433CFB06BF90D3F28400, L_5, NULL);
		// if (string.IsNullOrEmpty(bhapticsSettings.AppId))
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_10 = __this->___bhapticsSettings_7;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = BhapticsSettings_get_AppId_mB2CC73C871D1DCC0703A4557213B1E74B79AC532_inline(L_10, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		// Debug.LogErrorFormat("[bHaptics] Please set API_ID.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralE4F9B3E96400274717E8290271327C9F3D6050EF, L_13, NULL);
		// return;
		return;
	}

IL_0071:
	{
		// Debug.LogFormat("[bHaptics] {0} {1}", bhapticsSettings.AppId, bhapticsSettings.ApiKey);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_16 = __this->___bhapticsSettings_7;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = BhapticsSettings_get_AppId_mB2CC73C871D1DCC0703A4557213B1E74B79AC532_inline(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_19 = __this->___bhapticsSettings_7;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = BhapticsSettings_get_ApiKey_m71FAC9C8A23BB8F44F623E82645B29744553968D_inline(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralF9320834208179650EED8C624B153F3D48C8E4CD, L_18, NULL);
		// BhapticsLibrary.Initialize(bhapticsSettings.AppId, bhapticsSettings.ApiKey, bhapticsSettings.DefaultDeploy, autoRequestBluetoothPermission);
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_21 = __this->___bhapticsSettings_7;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = BhapticsSettings_get_AppId_mB2CC73C871D1DCC0703A4557213B1E74B79AC532_inline(L_21, NULL);
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_23 = __this->___bhapticsSettings_7;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = BhapticsSettings_get_ApiKey_m71FAC9C8A23BB8F44F623E82645B29744553968D_inline(L_23, NULL);
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_25 = __this->___bhapticsSettings_7;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = BhapticsSettings_get_DefaultDeploy_m2B1A71ECEB64A9968128C76522817EB401840D13_inline(L_25, NULL);
		bool L_27 = __this->___autoRequestBluetoothPermission_6;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = BhapticsLibrary_Initialize_mEE4D8022C566F29C2F7C8E28B2E7131F4AD89549(L_22, L_24, L_26, L_27, NULL);
		// var playerSetup = BhapticsLibrary.IsBhapticsAvailable(autoRunBhapticsPlayer);
		bool L_29 = __this->___autoRunBhapticsPlayer_5;
		bool L_30;
		L_30 = BhapticsLibrary_IsBhapticsAvailable_mCE06525D8F10ABD067F3A9ACA4B47EC20B4A0F5B(L_29, NULL);
		V_1 = L_30;
		// Debug.LogFormat("[bHaptics] player IsBhapticsAvailable {0}", playerSetup);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
		bool L_33 = V_1;
		bool L_34 = L_33;
		RuntimeObject* L_35 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral872A703D270B2441C02E8AAFB9514CEFE3F552D0, L_32, NULL);
		// Debug.LogFormat("[bHaptics] Initialized. ");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36;
		L_36 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral81D8FD4BF03F41CC485E59888656BD2F560153F5, L_36, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSDK2::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSDK2_OnApplicationFocus_m214CC8CE5E4F75824A1CC6CDB926DEE3CF5E00B1 (BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* __this, bool ___0_pauseStatus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pauseStatus)
		bool L_0 = ___0_pauseStatus;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// BhapticsLibrary.OnApplicationFocus();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_OnApplicationFocus_mB9F59228F5452556C0F7EAC29D6ABB136A72D8C8(NULL);
		return;
	}

IL_0009:
	{
		// BhapticsLibrary.OnApplicationPause();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_OnApplicationPause_m1F87D93A59C6018909CD954E946DAA0475196E16(NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSDK2::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSDK2_OnDestroy_m9F4BC3742A0084753EEB70E9B3A41B808703B233 (BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance.GetInstanceID() == this.GetInstanceID())
		BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* L_0 = ((BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_0, NULL);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		// BhapticsLibrary.Destroy();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_Destroy_m074997FF86ADFDD30B578C04727323EA2D4116EB(NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSDK2::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSDK2_OnApplicationQuit_m5C5BF3CD92449702D247C42E9687D84E1047A526 (BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BhapticsLibrary.OnApplicationQuit();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_OnApplicationQuit_m9BBDF12F6E8D9B8FC50CE105075D663A9DE85924(NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSDK2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSDK2__ctor_mA8B23114C70761A46348D8F196ECD8F0B3FA858A (BhapticsSDK2_t59E75215987C845F40D2ED38A474154B9BE6EE83* __this, const RuntimeMethod* method) 
{
	{
		// private bool autoRequestBluetoothPermission = true;
		__this->___autoRequestBluetoothPermission_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Bhaptics.SDK2.BhapticsConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsConfig__ctor_mED24781752B834CDC4C857509C02303C9F5A0C36 (BhapticsConfig_t4A493D1FE7134826A14FFF52BE03E8D202E5A21A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string appId = "";
		__this->___appId_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appId_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public string apiKey = "";
		__this->___apiKey_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKey_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// Bhaptics.SDK2.BhapticsSettings Bhaptics.SDK2.BhapticsSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* BhapticsSettings_get_Instance_mF900E911DD4DFFC33DF4D9656146BDF7F57DE8E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadInstance();
		BhapticsSettings_LoadInstance_m29DF90A62D7D954936A05F7017C4BA1AB110A26F(NULL);
		// return instance;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_0 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.String Bhaptics.SDK2.BhapticsSettings::get_AppName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_AppName_mB8AB03A6A0E99989AE4E919324F7353307B8351D (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return appName;
		String_t* L_0 = __this->___appName_5;
		return L_0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::set_AppName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_set_AppName_mED42458B93A10624568D057333F3E7CD0C47D7D4 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// appName = value;
		String_t* L_0 = ___0_value;
		__this->___appName_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appName_5), (void*)L_0);
		// }
		return;
	}
}
// System.String Bhaptics.SDK2.BhapticsSettings::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_AppId_mB2CC73C871D1DCC0703A4557213B1E74B79AC532 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return appId;
		String_t* L_0 = __this->___appId_6;
		return L_0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_set_AppId_m488AA4B5E998B95A269DA87FFB15748EE8C1E1ED (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// appId = value;
		String_t* L_0 = ___0_value;
		__this->___appId_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appId_6), (void*)L_0);
		// }
		return;
	}
}
// System.String Bhaptics.SDK2.BhapticsSettings::get_ApiKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_ApiKey_m71FAC9C8A23BB8F44F623E82645B29744553968D (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return apiKey;
		String_t* L_0 = __this->___apiKey_7;
		return L_0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::set_ApiKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_set_ApiKey_m53DEFE1AF083225F1A5884BAE6FFA85F0AD9A921 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// apiKey = value;
		String_t* L_0 = ___0_value;
		__this->___apiKey_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKey_7), (void*)L_0);
		// }
		return;
	}
}
// Bhaptics.SDK2.MappingMetaData[] Bhaptics.SDK2.BhapticsSettings::get_EventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* BhapticsSettings_get_EventData_m84B09D92F32164A2ED99F455F5B8CE6317BCE505 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return eventData;
		MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* L_0 = __this->___eventData_9;
		return L_0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::set_EventData(Bhaptics.SDK2.MappingMetaData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_set_EventData_m675B2A743053213D6B5C231460DE921DBD16BF6A (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* ___0_value, const RuntimeMethod* method) 
{
	{
		// eventData = value;
		MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9* L_0 = ___0_value;
		__this->___eventData_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventData_9), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsSettings::get_LastDeployVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsSettings_get_LastDeployVersion_m7FF165CC53D14A983AFE9FE5F119107A8DC490D6 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return lastDeployVersion;
		int32_t L_0 = __this->___lastDeployVersion_8;
		return L_0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::set_LastDeployVersion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_set_LastDeployVersion_m35010011D007CEE1D2E53AE011C6460BF1F46E57 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// lastDeployVersion = value;
		int32_t L_0 = ___0_value;
		__this->___lastDeployVersion_8 = L_0;
		// }
		return;
	}
}
// System.String Bhaptics.SDK2.BhapticsSettings::get_DefaultDeploy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_DefaultDeploy_m2B1A71ECEB64A9968128C76522817EB401840D13 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return defaultDeploy;
		String_t* L_0 = __this->___defaultDeploy_10;
		return L_0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::set_DefaultDeploy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_set_DefaultDeploy_mDBAD6487008FA44D827776B52BF3939F9147E0DB (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// defaultDeploy = value;
		String_t* L_0 = ___0_value;
		__this->___defaultDeploy_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultDeploy_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::VerifyScriptableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_VerifyScriptableObject_m6560F3A8EABC6EE6EF9F55499871ECFC490B2A05 (const RuntimeMethod* method) 
{
	{
		// LoadInstance();
		BhapticsSettings_LoadInstance_m29DF90A62D7D954936A05F7017C4BA1AB110A26F(NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::ResetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_ResetInstance_m1ECB0CE372ED185ED5B35A4913E13F95D0679245 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F77CB80F81876807E3370718BBE569F3359A889);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_0 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Debug.LogFormat("[bHaptics] Reset App Setup: {0}", instance.AppName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_4 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BhapticsSettings_get_AppName_mB8AB03A6A0E99989AE4E919324F7353307B8351D_inline(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral5F77CB80F81876807E3370718BBE569F3359A889, L_3, NULL);
		// instance.appName = "";
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_6 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		L_6->___appName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___appName_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// instance.appId = "";
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_7 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_7);
		L_7->___appId_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___appId_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// instance.apiKey = "";
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_8 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_8);
		L_8->___apiKey_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___apiKey_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// instance.eventData = null;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_9 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		L_9->___eventData_9 = (MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___eventData_9), (void*)(MappingMetaDataU5BU5D_t034386B0A7A8E3ED1CD6DBBFA2255E47B909E9A9*)NULL);
		// instance.lastDeployVersion = -1;
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_10 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_10);
		L_10->___lastDeployVersion_8 = (-1);
		// instance.defaultDeploy = "";
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_11 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_11);
		L_11->___defaultDeploy_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___defaultDeploy_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::LoadInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings_LoadInstance_m29DF90A62D7D954936A05F7017C4BA1AB110A26F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_m263C1699378A292330BDE1BC59621C74839B3342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_mD7D65710B1F7FDA56DC4CBCDF6E3D1473069DD89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral701988E540BF9E34DC53DE376B5A3213C82A3A1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DD244805873E68F23AECD46DEAC1DE122C4C35);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_0 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogFormat("[bHaptics] Load BhapticsSettings.asset");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralC4DD244805873E68F23AECD46DEAC1DE122C4C35, L_2, NULL);
		// instance = Resources.Load<BhapticsSettings>("BhapticsSettings");
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_3;
		L_3 = Resources_Load_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_m263C1699378A292330BDE1BC59621C74839B3342(_stringLiteral701988E540BF9E34DC53DE376B5A3213C82A3A1D, Resources_Load_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_m263C1699378A292330BDE1BC59621C74839B3342_RuntimeMethod_var);
		((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4), (void*)L_3);
		// if (instance == null)
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_4 = ((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// instance = CreateInstance<BhapticsSettings>();
		BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* L_6;
		L_6 = ScriptableObject_CreateInstance_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_mD7D65710B1F7FDA56DC4CBCDF6E3D1473069DD89(ScriptableObject_CreateInstance_TisBhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_mD7D65710B1F7FDA56DC4CBCDF6E3D1473069DD89_RuntimeMethod_var);
		((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22_il2cpp_TypeInfo_var))->___instance_4), (void*)L_6);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsSettings__ctor_mFE01E8A807A44D959F187C2338E4D75EF46A48F5 (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string appName = "";
		__this->___appName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appName_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] private string appId = "";
		__this->___appId_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appId_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] private string apiKey = "";
		__this->___apiKey_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apiKey_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] private int lastDeployVersion = -1;
		__this->___lastDeployVersion_8 = (-1);
		// [HideInInspector, SerializeField] private string defaultDeploy = "";
		__this->___defaultDeploy_10 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultDeploy_10), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Bhaptics.SDK2.AndroidHaptic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic__ctor_m97411DCD141E29F20C7AA8515BF65C7007332F4E (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01793EF08F35461796EA0A5F4E67477C7FF077C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D215336354689060C710F1E6E3000FC8840D86D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D4EA719DB7D4D715ADBA2AFD3A8B297C1D8AADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5024999BEEEDA5CA1AC0AE262FF8B4CE10FFF2B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55944BB103DCAA9331194C9F9A5B52E745952303);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570253F88E90C7BA74C253F223E308E59B6BDBB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B973FB601C693F2F934EF8531CAB44A3EAB9943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73CEB7DED734BAD034A4E26EB4EAF7553023AAF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral772F1EE16BDB85CBB66F18532580DBBD399D00B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DCE3AC13F2BDD58ADCF66858F51367AA7B64AB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87666120145D385F1B4433A1A62EC450E1A738AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87B8BC37181E395185B9587D34E316567F1E9D59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90318F0C144D3A2D86A776F9129A87A594E357F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA32EACCE82D1C49B998F7C469FE014DEE8737D09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA7652C413DDCECDA5CEEFD1F271621491C39158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD2BBC5DEC8245A45FBFBFF88DC127E3874E61B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0721EB476D8E0A383221ED51278EF4F855AD39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A13142CA01F84E8B22AA58244DA99146FF5140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0D4ADB4827DFE816DCB5FC0F426D8EFA7FA798);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAAF728FBB5EB3ACF224F10BDA51C4E7943F8E50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF8E24FCD4FA75A39933B84A0CD04C580B6B9208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB5CBFBA742C6182719C9944D08ACBC80F3127D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// public AndroidHaptic()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_1;
		// androidJavaObject =
		//     new AndroidJavaObject("com.bhaptics.bhapticsunity.BhapticsManagerWrapper", currentActivity);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_5, _stringLiteralCF0721EB476D8E0A383221ED51278EF4F855AD39, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0), (void*)L_5);
		// AndroidJavaObjectPtr = androidJavaObject.GetRawObject();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_6, NULL);
		__this->___AndroidJavaObjectPtr_9 = L_7;
		// InitializePtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "initialize");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_8);
		intptr_t L_9;
		L_9 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_8, NULL);
		intptr_t L_10;
		L_10 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_9, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, NULL);
		__this->___InitializePtr_10 = L_10;
		// InitializeRequestPermissionPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "initializeWithPermissionOption");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_11, NULL);
		intptr_t L_13;
		L_13 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_12, _stringLiteral7DCE3AC13F2BDD58ADCF66858F51367AA7B64AB8, NULL);
		__this->___InitializeRequestPermissionPtr_11 = L_13;
		// PlayPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "play");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_14);
		intptr_t L_15;
		L_15 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_14, NULL);
		intptr_t L_16;
		L_16 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_15, _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8, NULL);
		__this->___PlayPtr_12 = L_16;
		// PlayPosPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "playPos");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_17);
		intptr_t L_18;
		L_18 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_17, NULL);
		intptr_t L_19;
		L_19 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_18, _stringLiteralD4A13142CA01F84E8B22AA58244DA99146FF5140, NULL);
		__this->___PlayPosPtr_13 = L_19;
		// PlayParamPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "playParam");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_20);
		intptr_t L_21;
		L_21 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_20, NULL);
		intptr_t L_22;
		L_22 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_21, _stringLiteralDF8E24FCD4FA75A39933B84A0CD04C580B6B9208, NULL);
		__this->___PlayParamPtr_14 = L_22;
		// PlayPosParamPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "playPosParam");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_23);
		intptr_t L_24;
		L_24 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_23, NULL);
		intptr_t L_25;
		L_25 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_24, _stringLiteral73CEB7DED734BAD034A4E26EB4EAF7553023AAF3, NULL);
		__this->___PlayPosParamPtr_15 = L_25;
		// StopIntPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "stopInt");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_26);
		intptr_t L_27;
		L_27 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_26, NULL);
		intptr_t L_28;
		L_28 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_27, _stringLiteral90318F0C144D3A2D86A776F9129A87A594E357F1, NULL);
		__this->___StopIntPtr_16 = L_28;
		// StopByEventIdPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "stopByEventId");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_29);
		intptr_t L_30;
		L_30 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_29, NULL);
		intptr_t L_31;
		L_31 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_30, _stringLiteral87666120145D385F1B4433A1A62EC450E1A738AC, NULL);
		__this->___StopByEventIdPtr_17 = L_31;
		// StopAllPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "stopAll");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_32);
		intptr_t L_33;
		L_33 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_32, NULL);
		intptr_t L_34;
		L_34 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_33, _stringLiteral772F1EE16BDB85CBB66F18532580DBBD399D00B9, NULL);
		__this->___StopAllPtr_18 = L_34;
		// ToggleStreamPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "toggleStreamingEnable");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_35 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_35);
		intptr_t L_36;
		L_36 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_35, NULL);
		intptr_t L_37;
		L_37 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_36, _stringLiteral01793EF08F35461796EA0A5F4E67477C7FF077C5, NULL);
		__this->___ToggleStreamPtr_30 = L_37;
		// SubmitRegisteredPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "submitRegistered");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_38);
		intptr_t L_39;
		L_39 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_38, NULL);
		intptr_t L_40;
		L_40 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_39, _stringLiteral4D4EA719DB7D4D715ADBA2AFD3A8B297C1D8AADF, NULL);
		__this->___SubmitRegisteredPtr_19 = L_40;
		// SubmitRegisteredWithTimePtr =
		//     AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "submitRegisteredWithTime");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_41);
		intptr_t L_42;
		L_42 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_41, NULL);
		intptr_t L_43;
		L_43 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_42, _stringLiteralAA7652C413DDCECDA5CEEFD1F271621491C39158, NULL);
		__this->___SubmitRegisteredWithTimePtr_20 = L_43;
		// RegisterPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "register");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_44 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_44);
		intptr_t L_45;
		L_45 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_44, NULL);
		intptr_t L_46;
		L_46 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_45, _stringLiteralD6CFAA9A8F507F384B1008F247D2327A3D2F1426, NULL);
		__this->___RegisterPtr_21 = L_46;
		// RegisterReflectedPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "registerReflected");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_47 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_47);
		intptr_t L_48;
		L_48 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_47, NULL);
		intptr_t L_49;
		L_49 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_48, _stringLiteralDA0D4ADB4827DFE816DCB5FC0F426D8EFA7FA798, NULL);
		__this->___RegisterReflectedPtr_22 = L_49;
		// PingPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "ping");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_50 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_50);
		intptr_t L_51;
		L_51 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_50, NULL);
		intptr_t L_52;
		L_52 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_51, _stringLiteralAD2BBC5DEC8245A45FBFBFF88DC127E3874E61B2, NULL);
		__this->___PingPtr_23 = L_52;
		// PingAllPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "pingAll");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_53);
		intptr_t L_54;
		L_54 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_53, NULL);
		intptr_t L_55;
		L_55 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_54, _stringLiteral1D215336354689060C710F1E6E3000FC8840D86D, NULL);
		__this->___PingAllPtr_24 = L_55;
		// IsRegisteredPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "isRegistered");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_56 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_56);
		intptr_t L_57;
		L_57 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_56, NULL);
		intptr_t L_58;
		L_58 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_57, _stringLiteralDFB5CBFBA742C6182719C9944D08ACBC80F3127D, NULL);
		__this->___IsRegisteredPtr_25 = L_58;
		// IsPlayingPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "isPlaying");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_59 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_59);
		intptr_t L_60;
		L_60 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_59, NULL);
		intptr_t L_61;
		L_61 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_60, _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1, NULL);
		__this->___IsPlayingPtr_26 = L_61;
		// IsPlayingAnythingPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "isAnythingPlaying");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_62 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_62);
		intptr_t L_63;
		L_63 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_62, NULL);
		intptr_t L_64;
		L_64 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_63, _stringLiteralDAAF728FBB5EB3ACF224F10BDA51C4E7943F8E50, NULL);
		__this->___IsPlayingAnythingPtr_27 = L_64;
		// IsPlayingByEventIdPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "isPlayingByEventId");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_65 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_65);
		intptr_t L_66;
		L_66 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_65, NULL);
		intptr_t L_67;
		L_67 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_66, _stringLiteral5024999BEEEDA5CA1AC0AE262FF8B4CE10FFF2B4, NULL);
		__this->___IsPlayingByEventIdPtr_28 = L_67;
		// IsPlayingByRequestIdPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "isPlayingByRequestId");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_68 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_68);
		intptr_t L_69;
		L_69 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_68, NULL);
		intptr_t L_70;
		L_70 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_69, _stringLiteral55944BB103DCAA9331194C9F9A5B52E745952303, NULL);
		__this->___IsPlayingByRequestIdPtr_29 = L_70;
		// IsStreamingEnablePtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "isStreamingEnable");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_71 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_71);
		intptr_t L_72;
		L_72 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_71, NULL);
		intptr_t L_73;
		L_73 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_72, _stringLiteral6B973FB601C693F2F934EF8531CAB44A3EAB9943, NULL);
		__this->___IsStreamingEnablePtr_31 = L_73;
		// GetStreamingHostsPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "getStreamingHosts");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_74 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_74);
		intptr_t L_75;
		L_75 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_74, NULL);
		intptr_t L_76;
		L_76 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_75, _stringLiteral570253F88E90C7BA74C253F223E308E59B6BDBB8, NULL);
		__this->___GetStreamingHostsPtr_32 = L_76;
		// ShowBluetoothPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "showBluetoothSetting");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_77 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_77);
		intptr_t L_78;
		L_78 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_77, NULL);
		intptr_t L_79;
		L_79 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_78, _stringLiteralA32EACCE82D1C49B998F7C469FE014DEE8737D09, NULL);
		__this->___ShowBluetoothPtr_33 = L_79;
		// RefreshPairingInfoPtr = AndroidJNIHelper.GetMethodID(androidJavaObject.GetRawClass(), "refreshPairing");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_80 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		NullCheck(L_80);
		intptr_t L_81;
		L_81 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_80, NULL);
		intptr_t L_82;
		L_82 = AndroidJNIHelper_GetMethodID_m5D0526B2FE20191F966D72521647D686980EE06B(L_81, _stringLiteral87B8BC37181E395185B9587D34E316567F1E9D59, NULL);
		__this->___RefreshPairingInfoPtr_34 = L_82;
		// }
		goto IL_02f0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d0;
		}
		throw e;
	}

CATCH_02d0:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogErrorFormat("AndroidHaptic {0} {1} ", e.Message, e);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84 = L_83;
		Exception_t* L_85 = V_1;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_85);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_86);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_86);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_87 = L_84;
		Exception_t* L_88 = V_1;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, L_88);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_88);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FD9DB8B3223A2F2BCA9D8F14697E741652ACF09)), L_87, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02f0;
	}// end catch (depth: 1)

IL_02f0:
	{
		// deviceList = GetDevices();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_89;
		L_89 = AndroidHaptic_GetDevices_m4A9860D79031E13280C8C3FCD9DAA67FA2BA0B55(__this, NULL);
		__this->___deviceList_8 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceList_8), (void*)L_89);
		// }
		return;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::CheckBhapticsAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_CheckBhapticsAvailable_m0D9273E2D3247E1700D287B985EFA6E17949CD63 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8A045351381A58F206C53D8CBF221FD3A54BF60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// bool result = androidJavaObject.Call<bool>("isBhapticsUser");
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_3;
		L_3 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_1, _stringLiteralE8A045351381A58F206C53D8CBF221FD3A54BF60, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// return result;
		return L_3;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::RefreshPairing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_RefreshPairing_m3AA10F48C4ECEA2B6731300E001ACF4FB2BCCFD9 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
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
		// CallNativeVoidMethod(RefreshPairingInfoPtr, EmptyParams);
		intptr_t L_1 = __this->___RefreshPairingInfoPtr_34;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3;
		AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.AndroidHaptic::GetDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* AndroidHaptic_GetDevices_m4A9860D79031E13280C8C3FCD9DAA67FA2BA0B55 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18E0BE74583C2EDA6F0BB6D9B879168F785D750A);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// string[] result = androidJavaObject.Call<string[]>("getDeviceList");
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00(L_0, _stringLiteral18E0BE74583C2EDA6F0BB6D9B879168F785D750A, L_1, AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var);
		V_0 = L_2;
		// deviceList = BhapticsHelpers.ConvertToBhapticsDevices(result);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_4;
		L_4 = BhapticsHelpers_ConvertToBhapticsDevices_m4BEF6A21710EE9990EFCA230AB91FF83E3B67012(L_3, NULL);
		__this->___deviceList_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceList_8), (void*)L_4);
		// return deviceList;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_5 = __this->___deviceList_8;
		V_1 = L_5;
		goto IL_0033;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{// begin catch(System.Exception)
		// catch (Exception e)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002d;
	}// end catch (depth: 1)

IL_002d:
	{
		// return new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_6 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_6, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		return L_6;
	}

IL_0033:
	{
		// }
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_7 = V_1;
		return L_7;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::Initialize(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_Initialize_mD65CF45D8C63EED698000DA3B2652FDE76B6F474 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_workspaceId, String_t* ___1_sdkKey, String_t* ___2_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC032AFCED795A82B8F3769AB576C5C1D1F4D1083);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("[bHaptics] Initialize() {0} {1}", workspaceId, json);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_workspaceId;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___2_json;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralC032AFCED795A82B8F3769AB576C5C1D1F4D1083, L_3, NULL);
		// CallNativeVoidMethod(InitializePtr, new object[] { workspaceId, sdkKey, json });
		intptr_t L_5 = __this->___InitializePtr_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		String_t* L_8 = ___0_workspaceId;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___1_sdkKey;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		String_t* L_12 = ___2_json;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760(__this, L_5, L_11, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::InitializeWithPermission(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_InitializeWithPermission_mA85D6C6FB50DC940254873626B7BD566CA2A931E (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_workspaceId, String_t* ___1_sdkKey, String_t* ___2_json, bool ___3_requestPermission, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D75EAE571B7F951417C4BD94267815E689E136);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	intptr_t G_B2_3;
	memset((&G_B2_3), 0, sizeof(G_B2_3));
	AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* G_B2_4 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	intptr_t G_B1_3;
	memset((&G_B1_3), 0, sizeof(G_B1_3));
	AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	intptr_t G_B3_4;
	memset((&G_B3_4), 0, sizeof(G_B3_4));
	AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* G_B3_5 = NULL;
	{
		// Debug.LogFormat("[bHaptics] InitializeWithPermission() {0} {1}", workspaceId, json);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___0_workspaceId;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___2_json;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral06D75EAE571B7F951417C4BD94267815E689E136, L_3, NULL);
		// CallNativeVoidMethod(InitializeRequestPermissionPtr, new object[] { workspaceId, sdkKey, json, requestPermission ? 1 : 0 });
		intptr_t L_5 = __this->___InitializeRequestPermissionPtr_11;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		String_t* L_8 = ___0_workspaceId;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		String_t* L_10 = ___1_sdkKey;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		String_t* L_12 = ___2_json;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		bool L_14 = ___3_requestPermission;
		G_B1_0 = 3;
		G_B1_1 = L_13;
		G_B1_2 = L_13;
		G_B1_3 = L_5;
		G_B1_4 = __this;
		if (L_14)
		{
			G_B2_0 = 3;
			G_B2_1 = L_13;
			G_B2_2 = L_13;
			G_B2_3 = L_5;
			G_B2_4 = __this;
			goto IL_003a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_003b:
	{
		int32_t L_15 = G_B3_0;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, L_16);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)L_16);
		NullCheck(G_B3_5);
		AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760(G_B3_5, G_B3_4, G_B3_3, NULL);
		// }
		return;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsConnect_m7777B1D7375112805DB6AD6385DAF1E2A7D031DF (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsPlaying_m88FC33CBCDEF3010A689F95811D736C3B4C87700 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// return CallNativeBoolMethod(IsPlayingAnythingPtr, EmptyParams);
		intptr_t L_1 = __this->___IsPlayingAnythingPtr_27;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3;
		bool L_3;
		L_3 = AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsPlayingByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsPlayingByEventId_m23B4498B9513AACE0985F5347BCEEF3B2D8247CE (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// IsPlayingParams[0] = eventId;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___IsPlayingParams_4;
		String_t* L_2 = ___0_eventId;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		// return CallNativeBoolMethod(IsPlayingByEventIdPtr, IsPlayingParams);
		intptr_t L_3 = __this->___IsPlayingByEventIdPtr_28;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___IsPlayingParams_4;
		bool L_5;
		L_5 = AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB(__this, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::IsPlayingByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_IsPlayingByRequestId_mE0460125762A3932AA0511257AD0660FC16D6487 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_requestId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// IsPlayingParams[0] = requestId;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___IsPlayingParams_4;
		int32_t L_2 = ___0_requestId;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		// return CallNativeBoolMethod(IsPlayingByRequestIdPtr, IsPlayingParams);
		intptr_t L_5 = __this->___IsPlayingByRequestIdPtr_29;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___IsPlayingParams_4;
		bool L_7;
		L_7 = AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB(__this, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::RefreshPairingInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_RefreshPairingInfo_mE96504AADEEC158111C6407CA505406F79B34D9A (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
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
		// CallNativeVoidMethod(RefreshPairingInfoPtr, EmptyParams);
		intptr_t L_1 = __this->___RefreshPairingInfoPtr_34;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3;
		AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_Play_mC9BB0028891DF56F21536A7AF65C328A7F5541AD (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// PlayParams[0] = eventId;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParams_1;
		String_t* L_2 = ___0_eventId;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		// return CallNativeIntMethod(PlayPtr, PlayParams);
		intptr_t L_3 = __this->___PlayPtr_12;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParams_1;
		int32_t L_5;
		L_5 = AndroidHaptic_CallNativeIntMethod_m6E3358006A268AFA8D008AA97A63D9E136EC6E2E(__this, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayParam(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayParam_mCF7E4C68FEC88B2141E64E3479C95464C058D072 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// int pos = (int)0;
		V_0 = 0;
		// PlayParamParams[0] = eventId;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		String_t* L_2 = ___0_eventId;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		// PlayParamParams[1] = pos;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		// PlayParamParams[2] = intensity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		float L_8 = ___1_intensity;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		// PlayParamParams[3] = duration;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		float L_12 = ___2_duration;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		// PlayParamParams[4] = angleX;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		float L_16 = ___3_angleX;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_18);
		// PlayParamParams[5] = offsetY;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		float L_20 = ___4_offsetY;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_22);
		// return CallNativeIntMethod(PlayPosParamPtr, PlayParamParams);
		intptr_t L_23 = __this->___PlayPosParamPtr_15;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2;
		int32_t L_25;
		L_25 = AndroidHaptic_CallNativeIntMethod_m6E3358006A268AFA8D008AA97A63D9E136EC6E2E(__this, L_23, L_24, NULL);
		return L_25;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayMotors(System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayMotors_mB43FF0B9F28AE69D5B047A1B12816BD81CBC26D0 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motors, int32_t ___2_durationMillis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA69D811E0C285EFA63B0A6A06DD0DD2B6BFB825);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// return androidJavaObject.Call<int>("playMotors", position, durationMillis, motors);
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_position;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		int32_t L_8 = ___2_durationMillis;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_motors;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		NullCheck(L_1);
		int32_t L_13;
		L_13 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteralEA69D811E0C285EFA63B0A6A06DD0DD2B6BFB825, L_11, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_13;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayGlove(System.Int32,System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayGlove_m344740B1FE36160BA7CADE215EF3C4413CF944AA (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motors, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_playTimeValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_shapeValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A6337BAF1FF69AE8A4EA46477893E005EAD5FD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// return androidJavaObject.Call<int>("playGlove", position, motors, playTimeValues, shapeValues, 6);
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_position;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___1_motors;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___2_playTimeValues;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___3_shapeValues;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		int32_t L_14 = 6;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_15);
		NullCheck(L_1);
		int32_t L_16;
		L_16 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteral3A6337BAF1FF69AE8A4EA46477893E005EAD5FD2, L_13, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_16;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayPath(System.Int32,System.Single[],System.Single[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayPath_m4E2810CBA9B0F94FD0FA8893B5585E8D567B5835 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_position, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_xValues, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_yValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_intensityValues, int32_t ___4_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B1B5BC31D44B18AA1644A3D65D62E49574C1C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFF7B4903C033E13DDF078E88C4BC427A294C7FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// androidJavaObject.Call("submitPath", "key?", position, xValues, yValues, intensityValues, duration);
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralCFF7B4903C033E13DDF078E88C4BC427A294C7FC);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralCFF7B4903C033E13DDF078E88C4BC427A294C7FC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___0_position;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___1_xValues;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___2_yValues;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___3_intensityValues;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		int32_t L_15 = ___4_duration;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_17);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteral32B1B5BC31D44B18AA1644A3D65D62E49574C1C9, L_14, NULL);
		// return -1;
		return (-1);
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::PlayLoop(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_PlayLoop_mE8170F088DF56B17A8DF67A5A766A67A6F2E81C8 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, int32_t ___5_interval, int32_t ___6_maxCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9315DA782CF3937399D383C414D28CFD1FFA7F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// return androidJavaObject.Call<int>("playLoop", eventId, intensity, duration, angleX, offsetY, interval, maxCount);
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_eventId;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		float L_6 = ___1_intensity;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = ___2_duration;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		float L_14 = ___3_angleX;
		float L_15 = L_14;
		RuntimeObject* L_16 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		float L_18 = ___4_offsetY;
		float L_19 = L_18;
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = ___5_interval;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		int32_t L_26 = ___6_maxCount;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		NullCheck(L_1);
		int32_t L_29;
		L_29 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_1, _stringLiteralD9315DA782CF3937399D383C414D28CFD1FFA7F4, L_25, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_29;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::StopByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_StopByRequestId_mD9E3CA3D17043C6AF4B3E594E0970D2E140977EE (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// StopByRequestIdParams[0] = key;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByRequestIdParams_5;
		int32_t L_2 = ___0_key;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		// return CallNativeBoolMethod(StopIntPtr, StopByRequestIdParams);
		intptr_t L_5 = __this->___StopIntPtr_16;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByRequestIdParams_5;
		bool L_7;
		L_7 = AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB(__this, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::StopByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_StopByEventId_m51A9C22C060654E8340CB2BA4FA5506DE951DF14 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
	}
	try
	{// begin try (depth: 1)
		// StopByEventIdParams[0] = eventId;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByEventIdParams_6;
		String_t* L_2 = ___0_eventId;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		// return CallNativeBoolMethod(StopByEventIdPtr, StopByEventIdParams);
		intptr_t L_3 = __this->___StopByEventIdPtr_17;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByEventIdParams_6;
		bool L_5;
		L_5 = AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB(__this, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{// begin catch(System.Exception)
		// catch (Exception e)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// }
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_Stop_m40A6EBAC5B7AD84E66830E1608FFB12A6EE72F25 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (androidJavaObject != null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	try
	{// begin try (depth: 1)
		// return CallNativeBoolMethod(StopAllPtr, EmptyParams);
		intptr_t L_1 = __this->___StopAllPtr_18;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3;
		bool L_3;
		L_3 = AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB(__this, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0020;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (Exception e)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001e;
	}// end catch (depth: 1)

IL_001e:
	{
		// return false;
		return (bool)0;
	}

IL_0020:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_Dispose_m3AF58719044DBCE68502E1099E08E1CDEB952340 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8045E997F6A30602D5147099A2B221E2F630869);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject != null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// androidJavaObject.Call("quit");
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralA8045E997F6A30602D5147099A2B221E2F630869, L_2, NULL);
		// androidJavaObject = null;
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::TogglePosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_TogglePosition_mA4EDDC6A652E597B33523556FAEE7027130978BF (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral241CB8F68E6A171074F44FED9737EDE5BD45F4ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
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
		// if (androidJavaObject != null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// androidJavaObject.Call("togglePosition", address);
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___0_address;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral241CB8F68E6A171074F44FED9737EDE5BD45F4ED, L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::PingAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_PingAll_m7EE55B5A5CFD9BD6274C3E9C05096CB9C9D00B8F (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
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
		// CallNativeVoidMethod(PingAllPtr, EmptyParams);
		intptr_t L_1 = __this->___PingAllPtr_24;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3;
		AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::Ping(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_Ping_mD7A238AFECD9423FCFE70798B2A6FB2E8314A3D4 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, String_t* ___0_address, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
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
		// PingParams[0] = address;
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PingParams_7;
		String_t* L_2 = ___0_address;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		// CallNativeVoidMethod(PingPtr, PingParams);
		intptr_t L_3 = __this->___PingPtr_23;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PingParams_7;
		AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760(__this, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::CallNativeVoidMethod(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic_CallNativeVoidMethod_mD099CCC6CDB6EE1F6E483C00D11104A286283760 (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, intptr_t ___0_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
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
		// AndroidUtils.CallNativeVoidMethod(AndroidJavaObjectPtr, methodPtr, param);
		intptr_t L_1 = __this->___AndroidJavaObjectPtr_9;
		intptr_t L_2 = ___0_methodPtr;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_param;
		AndroidUtils_CallNativeVoidMethod_m66D608CE027E80F63B68BB449DF655E0D5826482(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidHaptic::CallNativeBoolMethod(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidHaptic_CallNativeBoolMethod_mDBF129C08AED66304AD702CDC82DBB32056E90DB (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, intptr_t ___0_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// return AndroidUtils.CallNativeBoolMethod(AndroidJavaObjectPtr, methodPtr, param);
		intptr_t L_1 = __this->___AndroidJavaObjectPtr_9;
		intptr_t L_2 = ___0_methodPtr;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_param;
		bool L_4;
		L_4 = AndroidUtils_CallNativeBoolMethod_m5B42B3831AC47F8D0543BBF4D6E10912391523F9(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidHaptic::CallNativeIntMethod(System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidHaptic_CallNativeIntMethod_m6E3358006A268AFA8D008AA97A63D9E136EC6E2E (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* __this, intptr_t ___0_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (androidJavaObject == null)
		il2cpp_codegen_runtime_class_init_inline(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___androidJavaObject_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// return AndroidUtils.CallNativeIntMethod(AndroidJavaObjectPtr, methodPtr, param);
		intptr_t L_1 = __this->___AndroidJavaObjectPtr_9;
		intptr_t L_2 = ___0_methodPtr;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_param;
		int32_t L_4;
		L_4 = AndroidUtils_CallNativeIntMethod_mFC749A33065B045395BCCB9A43458ED501B463B9(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Bhaptics.SDK2.AndroidHaptic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidHaptic__cctor_mA96BB763D3E7E5F44978B8ABDDA0F3BC20DA3E5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object[] PlayParams = new object[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParams_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParams_1), (void*)L_0);
		// private static readonly object[] PlayParamParams = new object[6];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PlayParamParams_2), (void*)L_1);
		// private static readonly object[] EmptyParams = new object[0];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___EmptyParams_3), (void*)L_2);
		// private static readonly object[] IsPlayingParams = new object[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___IsPlayingParams_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___IsPlayingParams_4), (void*)L_3);
		// private static readonly object[] StopByRequestIdParams = new object[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByRequestIdParams_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByRequestIdParams_5), (void*)L_4);
		// private static readonly object[] StopByEventIdParams = new object[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByEventIdParams_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___StopByEventIdParams_6), (void*)L_5);
		// private static readonly object[] PingParams = new object[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PingParams_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_StaticFields*)il2cpp_codegen_static_fields_for(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var))->___PingParams_7), (void*)L_6);
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
// System.Void Bhaptics.SDK2.AndroidUtils::CallNativeVoidMethod(System.IntPtr,System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils_CallNativeVoidMethod_m66D608CE027E80F63B68BB449DF655E0D5826482 (intptr_t ___0_androidObjPtr, intptr_t ___1_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_param, const RuntimeMethod* method) 
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// jvalue[] args = AndroidJNIHelper.CreateJNIArgArray(param);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___2_param;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				// AndroidJNIHelper.DeleteJNIArgArray(param, args);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_param;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_2, L_3, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// AndroidJNI.CallVoidMethod(androidObjPtr, methodPtr, args);
				intptr_t L_4 = ___0_androidObjPtr;
				intptr_t L_5 = ___1_methodPtr;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
				AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48(L_4, L_5, L_6, NULL);
				// }
				goto IL_001c;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0011_1;
				}
				throw e;
			}

CATCH_0011_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_001c;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Boolean Bhaptics.SDK2.AndroidUtils::CallNativeBoolMethod(System.IntPtr,System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidUtils_CallNativeBoolMethod_m5B42B3831AC47F8D0543BBF4D6E10912391523F9 (intptr_t ___0_androidObjPtr, intptr_t ___1_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_param, const RuntimeMethod* method) 
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// jvalue[] args = AndroidJNIHelper.CreateJNIArgArray(param);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___2_param;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_0, NULL);
		V_0 = L_1;
		// bool res = false;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				// AndroidJNIHelper.DeleteJNIArgArray(param, args);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_param;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_2, L_3, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// res = AndroidJNI.CallBooleanMethod(androidObjPtr, methodPtr, args);
				intptr_t L_4 = ___0_androidObjPtr;
				intptr_t L_5 = ___1_methodPtr;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
				bool L_7;
				L_7 = AndroidJNI_CallBooleanMethod_m78FC31B29854285F1164C75974AB463FE5716F84(L_4, L_5, L_6, NULL);
				V_1 = L_7;
				// }
				goto IL_001f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0014_1;
				}
				throw e;
			}

CATCH_0014_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_001f;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// return res;
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 Bhaptics.SDK2.AndroidUtils::CallNativeIntMethod(System.IntPtr,System.IntPtr,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidUtils_CallNativeIntMethod_mFC749A33065B045395BCCB9A43458ED501B463B9 (intptr_t ___0_androidObjPtr, intptr_t ___1_methodPtr, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_param, const RuntimeMethod* method) 
{
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// jvalue[] args = AndroidJNIHelper.CreateJNIArgArray(param);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___2_param;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_1;
		L_1 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_0, NULL);
		V_0 = L_1;
		// int res = -1;
		V_1 = (-1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				// AndroidJNIHelper.DeleteJNIArgArray(param, args);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_param;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_3 = V_0;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_2, L_3, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// res = AndroidJNI.CallIntMethod(androidObjPtr, methodPtr, args);
				intptr_t L_4 = ___0_androidObjPtr;
				intptr_t L_5 = ___1_methodPtr;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_0;
				int32_t L_7;
				L_7 = AndroidJNI_CallIntMethod_mD1299CB9F99E26D2734A0F02D376DE6EF49F1741(L_4, L_5, L_6, NULL);
				V_1 = L_7;
				// }
				goto IL_001f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0014_1;
				}
				throw e;
			}

CATCH_0014_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_001f;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// return res;
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Bhaptics.SDK2.AndroidUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidUtils__ctor_mEF09E1080ADFD0F5C7C19B255932FB67309DA7DD (AndroidUtils_t06E6370C972E3F025FC7D8CE03F365B7670C4BA7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsBhapticsAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsBhapticsAvailable_mCE06525D8F10ABD067F3A9ACA4B47EC20B4A0F5B (bool ___0_isAutoRunPlayer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isAvailableChecked)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailableChecked_5;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return isAvailable;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_1 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		return L_1;
	}

IL_000d:
	{
		// return IsBhapticsAvailableForce(isAutoRunPlayer);
		bool L_2 = ___0_isAutoRunPlayer;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BhapticsLibrary_IsBhapticsAvailableForce_m4F45AF9A5EFAE916B74104C6E3B5FBA5FC33C211(L_2, NULL);
		return L_3;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsBhapticsAvailableForce(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsBhapticsAvailableForce_m4F45AF9A5EFAE916B74104C6E3B5FBA5FC33C211 (bool ___0_isAutoRunPlayer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BBFBCCB1FA02509F70835959301C9DBCB5DABD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C5416B367C7AB0F029EE549B881C0987AA8A03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0050;
		}
	}
	{
		// if (android == null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_1 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogErrorFormat("[bHaptics] IsBhapticsAvailable() android object not initialized.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral2BBFBCCB1FA02509F70835959301C9DBCB5DABD1, L_2, NULL);
		// isAvailable = false;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4 = (bool)0;
		// return isAvailable;
		bool L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		return L_3;
	}

IL_002b:
	{
		// android.RefreshPairing();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_4 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_4);
		AndroidHaptic_RefreshPairing_m3AA10F48C4ECEA2B6731300E001ACF4FB2BCCFD9(L_4, NULL);
		// isAvailable = android.CheckBhapticsAvailable();
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_5 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = AndroidHaptic_CheckBhapticsAvailable_m0D9273E2D3247E1700D287B985EFA6E17949CD63(L_5, NULL);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4 = L_6;
		// isAvailableChecked = true;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailableChecked_5 = (bool)1;
		// return isAvailable;
		bool L_7 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		return L_7;
	}

IL_0050:
	{
		// if (!bhaptics_library.isPlayerInstalled())
		bool L_8;
		L_8 = bhaptics_library_isPlayerInstalled_m527B5750B0265E5FBAAFB32464EEF4FE714C08C6(NULL);
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		// isAvailable = false;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4 = (bool)0;
		// isAvailableChecked = true;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailableChecked_5 = (bool)1;
		// return isAvailable;
		bool L_9 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		return L_9;
	}

IL_0069:
	{
		// if (!bhaptics_library.isPlayerRunning() && isAutoRunPlayer)
		bool L_10;
		L_10 = bhaptics_library_isPlayerRunning_mEE931E2302DAFB703CDBE69B503786D5F94BC094(NULL);
		bool L_11 = ___0_isAutoRunPlayer;
		if (!((int32_t)(((((int32_t)L_10) == ((int32_t)0))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_008b;
		}
	}
	{
		// Debug.LogFormat("[bHaptics] bHaptics Player(PC) is not running, so try launch it.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralC7C5416B367C7AB0F029EE549B881C0987AA8A03, L_12, NULL);
		// bhaptics_library.launchPlayer(true);
		bool L_13;
		L_13 = bhaptics_library_launchPlayer_mC60FF9B51FBD17E3BFB05593011ECED2C875D9BF((bool)1, NULL);
	}

IL_008b:
	{
		// isAvailable = true;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4 = (bool)1;
		// isAvailableChecked = true;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailableChecked_5 = (bool)1;
		// return isAvailable;
		bool L_14 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		return L_14;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::Initialize(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_Initialize_mEE4D8022C566F29C2F7C8E28B2E7131F4AD89549 (String_t* ___0_appId, String_t* ___1_apiKey, String_t* ___2_json, bool ___3_autoRequestBluetoothPermission, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DE356065033147860C15FC617B36E505765DB47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AABC7DA5F2780738EF3FCE8E7E03691E2DD50AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E59B6D141EBAA179423AC5CA396745A517A586);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___Lock_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (_initialized)
				il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
				bool L_4 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->____initialized_3;
				if (!L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				// return false;
				V_2 = (bool)0;
				goto IL_009e;
			}

IL_001e_1:
			{
				// _initialized = true;
				il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
				((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->____initialized_3 = (bool)1;
				// }
				goto IL_0030;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_006c;
		}
	}
	{
		// if (android == null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_6 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (L_6)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.Log("[bHaptics] BhapticsLibrary - Initialize ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2DE356065033147860C15FC617B36E505765DB47, NULL);
		// android = new AndroidHaptic();
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_7 = (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676*)il2cpp_codegen_object_new(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AndroidHaptic__ctor_m97411DCD141E29F20C7AA8515BF65C7007332F4E(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2), (void*)L_7);
		// android.InitializeWithPermission(appId, apiKey, json, autoRequestBluetoothPermission);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_8 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		String_t* L_9 = ___0_appId;
		String_t* L_10 = ___1_apiKey;
		String_t* L_11 = ___2_json;
		bool L_12 = ___3_autoRequestBluetoothPermission;
		NullCheck(L_8);
		AndroidHaptic_InitializeWithPermission_mA85D6C6FB50DC940254873626B7BD566CA2A931E(L_8, L_9, L_10, L_11, L_12, NULL);
		// _initialized = true;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->____initialized_3 = (bool)1;
		// return true;
		return (bool)1;
	}

IL_006a:
	{
		// return false;
		return (bool)0;
	}

IL_006c:
	{
		// if (bhaptics_library.wsIsConnected())
		bool L_13;
		L_13 = bhaptics_library_wsIsConnected_mC8E3CE320D6745ED912B66271D481311555FD673(NULL);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// Debug.Log("[bHaptics] BhapticsLibrary - connection already opened");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF4E59B6D141EBAA179423AC5CA396745A517A586, NULL);
	}

IL_007d:
	{
		// Debug.LogFormat("[bHaptics] BhapticsLibrary - Initialize() {0} {1}", apiKey, appId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		String_t* L_16 = ___1_apiKey;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		String_t* L_18 = ___0_appId;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral3AABC7DA5F2780738EF3FCE8E7E03691E2DD50AD, L_17, NULL);
		// return bhaptics_library.registryAndInit(apiKey, appId, json);
		String_t* L_19 = ___1_apiKey;
		String_t* L_20 = ___0_appId;
		String_t* L_21 = ___2_json;
		bool L_22;
		L_22 = bhaptics_library_registryAndInit_mA1C7E539AD9BC774CF53EE3EFA4E522032BA0CC0(L_19, L_20, L_21, NULL);
		return L_22;
	}

IL_009e:
	{
		// }
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_Destroy_m074997FF86ADFDD30B578C04727323EA2D4116EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D2123A3B6BB3514FA00131DF7AD0A686B9B2148);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_1 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// android.Dispose();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_2);
		AndroidHaptic_Dispose_m3AF58719044DBCE68502E1099E08E1CDEB952340(L_2, NULL);
		// android = null;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2 = (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2), (void*)(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676*)NULL);
	}

IL_0020:
	{
		// return;
		return;
	}

IL_0021:
	{
		// Debug.LogFormat("[bHaptics] Destroy()");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral3D2123A3B6BB3514FA00131DF7AD0A686B9B2148, L_3, NULL);
		// bhaptics_library.wsClose();
		bhaptics_library_wsClose_m2B713DF088C805183F49C387AB203F81D3BC72F6(NULL);
		// _initialized = false;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->____initialized_3 = (bool)0;
		// }
		return;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsConnect(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsConnect_mBA10F76908273F2EF19C94C28F39C511881E31BC (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// return GetConnectedDevices(type).Count > 0;
		int32_t L_1 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_2;
		L_2 = BhapticsLibrary_GetConnectedDevices_mA57A43243FB64A2118EB6FFE1A5558D98D22360D(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_2, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsLibrary::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsLibrary_Play_m0EFA16773DD6BE9D8F237E2336939F2235CE6AE5 (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// if (eventId == null || eventId.Equals(string.Empty))
		String_t* L_1 = ___0_eventId;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_eventId;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return -1;
		return (-1);
	}

IL_001b:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_6 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// return android.Play(eventId);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_7 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		String_t* L_8 = ___0_eventId;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = AndroidHaptic_Play_mC9BB0028891DF56F21536A7AF65C328A7F5541AD(L_7, L_8, NULL);
		return L_9;
	}

IL_0037:
	{
		// return -1;
		return (-1);
	}

IL_0039:
	{
		// return bhaptics_library.play(eventId);
		String_t* L_10 = ___0_eventId;
		int32_t L_11;
		L_11 = bhaptics_library_play_m781AA5C817747DA5FEC7C2C52FA56555C2231447(L_10, NULL);
		return L_11;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsLibrary::PlayParam(System.String,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsLibrary_PlayParam_m5CC634B5CC8701F1969E153467976CBC54B4F45A (String_t* ___0_eventId, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// if (eventId == null || eventId.Equals(string.Empty))
		String_t* L_1 = ___0_eventId;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_eventId;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return -1;
		return (-1);
	}

IL_001b:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_003e;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_6 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// return android.PlayParam(eventId, intensity, duration, angleX, offsetY);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_7 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		String_t* L_8 = ___0_eventId;
		float L_9 = ___1_intensity;
		float L_10 = ___2_duration;
		float L_11 = ___3_angleX;
		float L_12 = ___4_offsetY;
		NullCheck(L_7);
		int32_t L_13;
		L_13 = AndroidHaptic_PlayParam_mCF7E4C68FEC88B2141E64E3479C95464C058D072(L_7, L_8, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_003c:
	{
		// return -1;
		return (-1);
	}

IL_003e:
	{
		// return bhaptics_library.playPosParam(eventId, 0, intensity, duration, angleX, offsetY);
		String_t* L_14 = ___0_eventId;
		float L_15 = ___1_intensity;
		float L_16 = ___2_duration;
		float L_17 = ___3_angleX;
		float L_18 = ___4_offsetY;
		int32_t L_19;
		L_19 = bhaptics_library_playPosParam_mAEA493B7959A4C7BF24EBC3E44E6A508533BB0FF(L_14, 0, L_15, L_16, L_17, L_18, NULL);
		return L_19;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsLibrary::PlayMotors(System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsLibrary_PlayMotors_m9EA7BF22688BC707D3CB58AC37012A1B1E59141C (int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motors, int32_t ___2_durationMillis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// return android.PlayMotors(position, motors, durationMillis);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		int32_t L_4 = ___0_position;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_motors;
		int32_t L_6 = ___2_durationMillis;
		NullCheck(L_3);
		int32_t L_7;
		L_7 = AndroidHaptic_PlayMotors_mB43FF0B9F28AE69D5B047A1B12816BD81CBC26D0(L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0027:
	{
		// return -1;
		return (-1);
	}

IL_0029:
	{
		// return bhaptics_library.playDot(position, durationMillis, motors, motors.Length);
		int32_t L_8 = ___0_position;
		int32_t L_9 = ___2_durationMillis;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ___1_motors;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___1_motors;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = bhaptics_library_playDot_m3CCC59396717F92C6E9221A3AEB17559938A3F05(L_8, L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		return L_12;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsLibrary::PlayWaveform(Bhaptics.SDK2.PositionType,System.Int32[],Bhaptics.SDK2.GlovePlayTime[],Bhaptics.SDK2.GloveShapeValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsLibrary_PlayWaveform_mC5D53CC2966119C93E5115E06D59B289DA1D6D64 (int32_t ___0_positionType, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motorValues, GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8* ___2_playTimeValues, GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9* ___3_shapeValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0233529891AD3C4596DCAF40F9160EEFFA482B);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// if (motorValues.Length != 6 || playTimeValues.Length != 6 || shapeValues.Length != 6)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___1_motorValues;
		NullCheck(L_1);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((uint32_t)6))))
		{
			goto IL_001b;
		}
	}
	{
		GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8* L_2 = ___2_playTimeValues;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)6))))
		{
			goto IL_001b;
		}
	}
	{
		GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9* L_3 = ___3_shapeValues;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((int32_t)6)))
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		// Debug.LogError("[bHaptics] BhapticsLibrary - PlayWaveform() 'motorValues, playTimeValues, shapeValues' necessarily require 6 values each.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFC0233529891AD3C4596DCAF40F9160EEFFA482B, NULL);
		// return -1;
		return (-1);
	}

IL_0027:
	{
		// var playTimes = new int[playTimeValues.Length];
		GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8* L_4 = ___2_playTimeValues;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_0 = L_5;
		// var shapeVals = new int[shapeValues.Length];
		GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9* L_6 = ___3_shapeValues;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		V_1 = L_7;
		// for (int i = 0; i < playTimes.Length; i++)
		V_2 = 0;
		goto IL_0047;
	}

IL_003d:
	{
		// playTimes[i] = (int)playTimeValues[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = V_2;
		GlovePlayTimeU5BU5D_t818794EB2FD093E04BE9247E3FD72B4F4EC886E8* L_10 = ___2_playTimeValues;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_13);
		// for (int i = 0; i < playTimes.Length; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0047:
	{
		// for (int i = 0; i < playTimes.Length; i++)
		int32_t L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		// for (int i = 0; i < shapeVals.Length; i++)
		V_3 = 0;
		goto IL_005b;
	}

IL_0051:
	{
		// shapeVals[i] = (int)shapeValues[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_1;
		int32_t L_18 = V_3;
		GloveShapeValueU5BU5D_t601A530E1887566B5ECDF39E3E433DF4B78F42F9* L_19 = ___3_shapeValues;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (int32_t)(L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_22);
		// for (int i = 0; i < shapeVals.Length; i++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005b:
	{
		// for (int i = 0; i < shapeVals.Length; i++)
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_26;
		L_26 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0082;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_27 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_27)
		{
			goto IL_0080;
		}
	}
	{
		// return android.PlayGlove((int)positionType, motorValues, playTimes, shapeVals);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_28 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		int32_t L_29 = ___0_positionType;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ___1_motorValues;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		NullCheck(L_28);
		int32_t L_33;
		L_33 = AndroidHaptic_PlayGlove_m344740B1FE36160BA7CADE215EF3C4413CF944AA(L_28, L_29, L_30, L_31, L_32, NULL);
		return L_33;
	}

IL_0080:
	{
		// return -1;
		return (-1);
	}

IL_0082:
	{
		// return bhaptics_library.playWaveform((int)positionType, motorValues, playTimes, shapeVals, 6);
		int32_t L_34 = ___0_positionType;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = ___1_motorValues;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_1;
		int32_t L_38;
		L_38 = bhaptics_library_playWaveform_mFD99DF33FBC613F9C1FD1594EED0DA7B0C41919A(L_34, L_35, L_36, L_37, 6, NULL);
		return L_38;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsLibrary::PlayPath(System.Int32,System.Single[],System.Single[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsLibrary_PlayPath_m93E5E9D17F14CFC3D16648568CC2E078F3F438E4 (int32_t ___0_position, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_xValues, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_yValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_intensityValues, int32_t ___4_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_002c;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// return android.PlayPath(position, xValues, yValues, intensityValues, duration);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		int32_t L_4 = ___0_position;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___1_xValues;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___2_yValues;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = ___3_intensityValues;
		int32_t L_8 = ___4_duration;
		NullCheck(L_3);
		int32_t L_9;
		L_9 = AndroidHaptic_PlayPath_m4E2810CBA9B0F94FD0FA8893B5585E8D567B5835(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_002a:
	{
		// return -1;
		return (-1);
	}

IL_002c:
	{
		// return bhaptics_library.playPath(position, xValues, yValues, intensityValues, duration);
		int32_t L_10 = ___0_position;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = ___1_xValues;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___2_yValues;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___3_intensityValues;
		int32_t L_14 = ___4_duration;
		int32_t L_15;
		L_15 = bhaptics_library_playPath_mF5E92ECF4BA05C3305AB607673E580029DBA9FA5(L_10, L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Bhaptics.SDK2.BhapticsLibrary::PlayLoop(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BhapticsLibrary_PlayLoop_m9C9A696802BE82294CE3ACDD5DC71BE66F2D9793 (String_t* ___0_eventId, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, int32_t ___5_interval, int32_t ___6_maxCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0009:
	{
		// if (eventId == null || eventId.Equals(string.Empty))
		String_t* L_1 = ___0_eventId;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_eventId;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return -1;
		return (-1);
	}

IL_001b:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0042;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_6 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		// return android.PlayLoop(eventId, intensity, duration, angleX, offsetY, interval, maxCount);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_7 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		String_t* L_8 = ___0_eventId;
		float L_9 = ___1_intensity;
		float L_10 = ___2_duration;
		float L_11 = ___3_angleX;
		float L_12 = ___4_offsetY;
		int32_t L_13 = ___5_interval;
		int32_t L_14 = ___6_maxCount;
		NullCheck(L_7);
		int32_t L_15;
		L_15 = AndroidHaptic_PlayLoop_mE8170F088DF56B17A8DF67A5A766A67A6F2E81C8(L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_0040:
	{
		// return -1;
		return (-1);
	}

IL_0042:
	{
		// return bhaptics_library.playLoop(eventId, intensity, duration, angleX, offsetY, interval, maxCount);
		String_t* L_16 = ___0_eventId;
		float L_17 = ___1_intensity;
		float L_18 = ___2_duration;
		float L_19 = ___3_angleX;
		float L_20 = ___4_offsetY;
		int32_t L_21 = ___5_interval;
		int32_t L_22 = ___6_maxCount;
		int32_t L_23;
		L_23 = bhaptics_library_playLoop_m101D6DA5DDD7E23F93480149ED54AC4EB97AD1A7(L_16, L_17, L_18, L_19, L_20, L_21, L_22, NULL);
		return L_23;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::StopByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_StopByEventId_m60790693CBEE1D2752CEA918B9E4602EFE4B4702 (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return android.StopByEventId(eventId);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		String_t* L_4 = ___0_eventId;
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidHaptic_StopByEventId_m51A9C22C060654E8340CB2BA4FA5506DE951DF14(L_3, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// return bhaptics_library.stopByEventId(eventId);
		String_t* L_6 = ___0_eventId;
		bool L_7;
		L_7 = bhaptics_library_stopByEventId_m73622D4CF4E191294963B22F7D12EEE336FF9172(L_6, NULL);
		return L_7;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::StopInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_StopInt_m23ABFF5994372AA95FA910259BFA4F794D0F1736 (int32_t ___0_requestId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return android.StopByRequestId(requestId);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		int32_t L_4 = ___0_requestId;
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidHaptic_StopByRequestId_mD9E3CA3D17043C6AF4B3E594E0970D2E140977EE(L_3, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// return bhaptics_library.stop(requestId);
		int32_t L_6 = ___0_requestId;
		bool L_7;
		L_7 = bhaptics_library_stop_mB70237BEF6C8D0122C5B021D7BDD14138528427B(L_6, NULL);
		return L_7;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::StopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_StopAll_m084EFDBEA116B263235711BD3E4DBDE3D3821D99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0026;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return android.Stop();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = AndroidHaptic_Stop_m40A6EBAC5B7AD84E66830E1608FFB12A6EE72F25(L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// return bhaptics_library.stopAll();
		bool L_5;
		L_5 = bhaptics_library_stopAll_mA694C2E0E7FB26C2FFF039B67806C4791B82ADE1(NULL);
		return L_5;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsPlaying_m569AB0906BBD001F2DB6189C508B58AFB5A0D926 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0026;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// return android.IsPlaying();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_3);
		bool L_4;
		L_4 = AndroidHaptic_IsPlaying_m88FC33CBCDEF3010A689F95811D736C3B4C87700(L_3, NULL);
		return L_4;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// return bhaptics_library.isPlaying();
		bool L_5;
		L_5 = bhaptics_library_isPlaying_m90CFDC06DB7922F8DC88092FEEBF4A95EB919152(NULL);
		return L_5;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsPlayingByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsPlayingByEventId_m5BF31EC66FD4D43EFFAA734B0B58E8CBDFAF454F (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return android.IsPlayingByEventId(eventId);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		String_t* L_4 = ___0_eventId;
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidHaptic_IsPlayingByEventId_m23B4498B9513AACE0985F5347BCEEF3B2D8247CE(L_3, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// return bhaptics_library.isPlayingByEventId(eventId);
		String_t* L_6 = ___0_eventId;
		bool L_7;
		L_7 = bhaptics_library_isPlayingByEventId_m2C613045E7397316F94251F00528303A714D9D90(L_6, NULL);
		return L_7;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsLibrary::IsPlayingByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsLibrary_IsPlayingByRequestId_m28C126D2BFDC5E5B69B2B57EF607E96586B07E7F (int32_t ___0_requestId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0009:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return android.IsPlayingByRequestId(requestId);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		int32_t L_4 = ___0_requestId;
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidHaptic_IsPlayingByRequestId_mE0460125762A3932AA0511257AD0660FC16D6487(L_3, L_4, NULL);
		return L_5;
	}

IL_0025:
	{
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// return bhaptics_library.isPlayingByRequestId(requestId);
		int32_t L_6 = ___0_requestId;
		bool L_7;
		L_7 = bhaptics_library_isPlayingByRequestId_m5B2B973F0D1C2D5414F46E287F726A68D4B7E47C(L_6, NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsLibrary::GetDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsLibrary_GetDevices_m2A0E415820293AF2405FB9158C2465D9E6B46022 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return EmptyDevices;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_1 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___EmptyDevices_1;
		return L_1;
	}

IL_000d:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_002e;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return android.GetDevices();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_4 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_4);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_5;
		L_5 = AndroidHaptic_GetDevices_m4A9860D79031E13280C8C3FCD9DAA67FA2BA0B55(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return EmptyDevices;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_6 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___EmptyDevices_1;
		return L_6;
	}

IL_002e:
	{
		// return bhaptics_library.GetDevices();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_7;
		L_7 = bhaptics_library_GetDevices_mEE731D38475609C7082356F097F9DD91AB12F6DE(NULL);
		return L_7;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsLibrary::GetConnectedDevices(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsLibrary_GetConnectedDevices_mA57A43243FB64A2118EB6FFE1A5558D98D22360D (int32_t ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_0 = NULL;
	Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F V_1;
	memset((&V_1), 0, sizeof(V_1));
	HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* V_2 = NULL;
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return EmptyDevices;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_1 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___EmptyDevices_1;
		return L_1;
	}

IL_000d:
	{
		// var pairedDeviceList = new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_2 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_2, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		V_0 = L_2;
		// var devices = GetDevices();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_3;
		L_3 = BhapticsLibrary_GetDevices_m2A0E415820293AF2405FB9158C2465D9E6B46022(NULL);
		// foreach (var device in devices)
		NullCheck(L_3);
		Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F L_4;
		L_4 = List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C(L_3, List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513((&V_1), Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0020_1:
			{
				// foreach (var device in devices)
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_5;
				L_5 = Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_inline((&V_1), Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var);
				V_2 = L_5;
				// if (device.IsPaired && device.Position == pos && device.IsConnected)
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = V_2;
				NullCheck(L_6);
				bool L_7 = L_6->___IsPaired_0;
				if (!L_7)
				{
					goto IL_0048_1;
				}
			}
			{
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_8 = V_2;
				NullCheck(L_8);
				int32_t L_9 = L_8->___Position_3;
				int32_t L_10 = ___0_pos;
				if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
				{
					goto IL_0048_1;
				}
			}
			{
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_11 = V_2;
				NullCheck(L_11);
				bool L_12 = L_11->___IsConnected_1;
				if (!L_12)
				{
					goto IL_0048_1;
				}
			}
			{
				// pairedDeviceList.Add(device);
				List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_13 = V_0;
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_14 = V_2;
				NullCheck(L_13);
				List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_inline(L_13, L_14, List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
			}

IL_0048_1:
			{
				// foreach (var device in devices)
				bool L_15;
				L_15 = Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770((&V_1), Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// return pairedDeviceList;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_16 = V_0;
		return L_16;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.BhapticsLibrary::GetPairedDevices(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* BhapticsLibrary_GetPairedDevices_mF9AB45858B26A36EDBA7666B5C6CF7B04B874030 (int32_t ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_0 = NULL;
	Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F V_1;
	memset((&V_1), 0, sizeof(V_1));
	HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* V_2 = NULL;
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return EmptyDevices;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_1 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___EmptyDevices_1;
		return L_1;
	}

IL_000d:
	{
		// var res = new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_2 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_2, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		V_0 = L_2;
		// var devices = GetDevices();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_3;
		L_3 = BhapticsLibrary_GetDevices_m2A0E415820293AF2405FB9158C2465D9E6B46022(NULL);
		// foreach (var device in devices)
		NullCheck(L_3);
		Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F L_4;
		L_4 = List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C(L_3, List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513((&V_1), Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_0020_1:
			{
				// foreach (var device in devices)
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_5;
				L_5 = Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_inline((&V_1), Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var);
				V_2 = L_5;
				// if (device.IsPaired && device.Position == pos)
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = V_2;
				NullCheck(L_6);
				bool L_7 = L_6->___IsPaired_0;
				if (!L_7)
				{
					goto IL_0040_1;
				}
			}
			{
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_8 = V_2;
				NullCheck(L_8);
				int32_t L_9 = L_8->___Position_3;
				int32_t L_10 = ___0_pos;
				if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
				{
					goto IL_0040_1;
				}
			}
			{
				// res.Add(device);
				List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_11 = V_0;
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_inline(L_11, L_12, List_1_Add_m29ED7FE09B7C1FE5E224C1FD534EF52C742CD766_RuntimeMethod_var);
			}

IL_0040_1:
			{
				// foreach (var device in devices)
				bool L_13;
				L_13 = Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770((&V_1), Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		// return res;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_14 = V_0;
		return L_14;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::Ping(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_Ping_mE566936105F44D7977FAD6F837A391483F63D319 (int32_t ___0_pos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
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
		// var currentDevices = GetConnectedDevices(pos);
		int32_t L_1 = ___0_pos;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_2;
		L_2 = BhapticsLibrary_GetConnectedDevices_mA57A43243FB64A2118EB6FFE1A5558D98D22360D(L_1, NULL);
		// foreach (var device in currentDevices)
		NullCheck(L_2);
		Enumerator_tAA7CA9618297A71B603D28E11FBF2C66AE33D74F L_3;
		L_3 = List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C(L_2, List_1_GetEnumerator_m5DE47CB65E2DAC81B7196FBD6BC42796A2B0219C_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513((&V_0), Enumerator_Dispose_m4E31CE76FCE4BAF68018B63E276BAFAD17782513_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0016_1:
			{
				// foreach (var device in currentDevices)
				HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_4;
				L_4 = Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_inline((&V_0), Enumerator_get_Current_mD74E091F27328C4FAA9EF8FFD133876D648DB263_RuntimeMethod_var);
				// Ping(device);
				il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
				BhapticsLibrary_Ping_m6A5A1232B32BFB9A9C4381BA45689A6BB19D7143(L_4, NULL);
			}

IL_0022_1:
			{
				// foreach (var device in currentDevices)
				bool L_5;
				L_5 = Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770((&V_0), Enumerator_MoveNext_mEDEF3DC9626905C803F1314B27A0DCCEA7E1D770_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::Ping(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_Ping_m6A5A1232B32BFB9A9C4381BA45689A6BB19D7143 (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_targetDevice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
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
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// android.Ping(targetDevice.Address);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_4 = ___0_targetDevice;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Address_4;
		NullCheck(L_3);
		AndroidHaptic_Ping_mD7A238AFECD9423FCFE70798B2A6FB2E8314A3D4(L_3, L_5, NULL);
	}

IL_0028:
	{
		// return;
		return;
	}

IL_0029:
	{
		// bhaptics_library.ping(targetDevice.Address);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = ___0_targetDevice;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Address_4;
		bool L_8;
		L_8 = bhaptics_library_ping_m69DBE2626F8ED1E99725C55805DC39CFCFD09EE0(L_7, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::PingAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_PingAll_m584F8B6E4E81CEF38A231DF58AB04ED06A8CD912 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
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
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0023;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// android.PingAll();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		NullCheck(L_3);
		AndroidHaptic_PingAll_m7EE55B5A5CFD9BD6274C3E9C05096CB9C9D00B8F(L_3, NULL);
	}

IL_0022:
	{
		// return;
		return;
	}

IL_0023:
	{
		// bhaptics_library.pingAll();
		bool L_4;
		L_4 = bhaptics_library_pingAll_mF74095D895365B64F744A3F730C109AACA78DB3B(NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::TogglePosition(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_TogglePosition_m6FD1B2E88BB7C1FCFF9D2CE676424D1CC7BC0B7E (HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_targetDevice, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isAvailable)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4;
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
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (android != null)
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_2 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// android.TogglePosition(targetDevice.Address);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676* L_3 = ((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_4 = ___0_targetDevice;
		NullCheck(L_4);
		String_t* L_5 = L_4->___Address_4;
		NullCheck(L_3);
		AndroidHaptic_TogglePosition_mA4EDDC6A652E597B33523556FAEE7027130978BF(L_3, L_5, NULL);
	}

IL_0028:
	{
		// return;
		return;
	}

IL_0029:
	{
		// bhaptics_library.swapPosition(targetDevice.Address);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = ___0_targetDevice;
		NullCheck(L_6);
		String_t* L_7 = L_6->___Address_4;
		bool L_8;
		L_8 = bhaptics_library_swapPosition_m6367FC3768BC196EAB0E0EFF432419428F2D0C55(L_7, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::OnApplicationFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_OnApplicationFocus_mB9F59228F5452556C0F7EAC29D6ABB136A72D8C8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IsBhapticsAvailableForce(false);
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BhapticsLibrary_IsBhapticsAvailableForce_m4F45AF9A5EFAE916B74104C6E3B5FBA5FC33C211((bool)0, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_OnApplicationPause_m1F87D93A59C6018909CD954E946DAA0475196E16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAll();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BhapticsLibrary_StopAll_m084EFDBEA116B263235711BD3E4DBDE3D3821D99(NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary_OnApplicationQuit_m9BBDF12F6E8D9B8FC50CE105075D663A9DE85924 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_Destroy_m074997FF86ADFDD30B578C04727323EA2D4116EB(NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary__ctor_m9CB821D2C0183AC834D78C993414024516811E4C (BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsLibrary::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsLibrary__cctor_m264CCA9BCDD9335C65B2C11F141FF89CF744A6CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___Lock_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___Lock_0), (void*)L_0);
		// private static readonly List<HapticDevice> EmptyDevices = new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_1 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_1, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___EmptyDevices_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___EmptyDevices_1), (void*)L_1);
		// private static AndroidHaptic android = null;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2 = (AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___android_2), (void*)(AndroidHaptic_tFEE446D4A3E971D9CD2A000CF4D382CADA095676*)NULL);
		// private static bool _initialized = false;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->____initialized_3 = (bool)0;
		// private static bool isAvailable = false;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailable_4 = (bool)0;
		// private static bool isAvailableChecked = false;
		((BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var))->___isAvailableChecked_5 = (bool)0;
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
// System.Boolean Bhaptics.SDK2.bhaptics_library::registryAndInit(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_registryAndInit_mA1C7E539AD9BC774CF53EE3EFA4E522032BA0CC0 (String_t* ___0_sdkAPIKey, String_t* ___1_workspaceId, String_t* ___2_initData, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "registryAndInit", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_sdkAPIKey' to native representation
	char* ____0_sdkAPIKey_marshaled = NULL;
	____0_sdkAPIKey_marshaled = il2cpp_codegen_marshal_string(___0_sdkAPIKey);

	// Marshaling of parameter '___1_workspaceId' to native representation
	char* ____1_workspaceId_marshaled = NULL;
	____1_workspaceId_marshaled = il2cpp_codegen_marshal_string(___1_workspaceId);

	// Marshaling of parameter '___2_initData' to native representation
	char* ____2_initData_marshaled = NULL;
	____2_initData_marshaled = il2cpp_codegen_marshal_string(___2_initData);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(registryAndInit)(____0_sdkAPIKey_marshaled, ____1_workspaceId_marshaled, ____2_initData_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_sdkAPIKey_marshaled, ____1_workspaceId_marshaled, ____2_initData_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_sdkAPIKey' native representation
	il2cpp_codegen_marshal_free(____0_sdkAPIKey_marshaled);
	____0_sdkAPIKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_workspaceId' native representation
	il2cpp_codegen_marshal_free(____1_workspaceId_marshaled);
	____1_workspaceId_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_initData' native representation
	il2cpp_codegen_marshal_free(____2_initData_marshaled);
	____2_initData_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::registryAndInitHost(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_registryAndInitHost_m2B878592EFA76ED9073C8C07F0B730234CAC87C2 (String_t* ___0_sdkAPIKey, String_t* ___1_workspaceId, String_t* ___2_initData, String_t* ___3_url, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "registryAndInitHost", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_sdkAPIKey' to native representation
	char* ____0_sdkAPIKey_marshaled = NULL;
	____0_sdkAPIKey_marshaled = il2cpp_codegen_marshal_string(___0_sdkAPIKey);

	// Marshaling of parameter '___1_workspaceId' to native representation
	char* ____1_workspaceId_marshaled = NULL;
	____1_workspaceId_marshaled = il2cpp_codegen_marshal_string(___1_workspaceId);

	// Marshaling of parameter '___2_initData' to native representation
	char* ____2_initData_marshaled = NULL;
	____2_initData_marshaled = il2cpp_codegen_marshal_string(___2_initData);

	// Marshaling of parameter '___3_url' to native representation
	char* ____3_url_marshaled = NULL;
	____3_url_marshaled = il2cpp_codegen_marshal_string(___3_url);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(registryAndInitHost)(____0_sdkAPIKey_marshaled, ____1_workspaceId_marshaled, ____2_initData_marshaled, ____3_url_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_sdkAPIKey_marshaled, ____1_workspaceId_marshaled, ____2_initData_marshaled, ____3_url_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_sdkAPIKey' native representation
	il2cpp_codegen_marshal_free(____0_sdkAPIKey_marshaled);
	____0_sdkAPIKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_workspaceId' native representation
	il2cpp_codegen_marshal_free(____1_workspaceId_marshaled);
	____1_workspaceId_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_initData' native representation
	il2cpp_codegen_marshal_free(____2_initData_marshaled);
	____2_initData_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_url' native representation
	il2cpp_codegen_marshal_free(____3_url_marshaled);
	____3_url_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::wsIsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_wsIsConnected_mC8E3CE320D6745ED912B66271D481311555FD673 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "wsIsConnected", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wsIsConnected)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Bhaptics.SDK2.bhaptics_library::wsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bhaptics_library_wsClose_m2B713DF088C805183F49C387AB203F81D3BC72F6 (const RuntimeMethod* method) 
{
	typedef void (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "wsClose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	reinterpret_cast<PInvokeFunc>(wsClose)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Boolean Bhaptics.SDK2.bhaptics_library::reInitMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_reInitMessage_m0354D66B1F910F380B253C5EB0C483E8E82E4315 (String_t* ___0_sdkAPIKey, String_t* ___1_workspaceId, String_t* ___2_initData, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "reInitMessage", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_sdkAPIKey' to native representation
	char* ____0_sdkAPIKey_marshaled = NULL;
	____0_sdkAPIKey_marshaled = il2cpp_codegen_marshal_string(___0_sdkAPIKey);

	// Marshaling of parameter '___1_workspaceId' to native representation
	char* ____1_workspaceId_marshaled = NULL;
	____1_workspaceId_marshaled = il2cpp_codegen_marshal_string(___1_workspaceId);

	// Marshaling of parameter '___2_initData' to native representation
	char* ____2_initData_marshaled = NULL;
	____2_initData_marshaled = il2cpp_codegen_marshal_string(___2_initData);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reInitMessage)(____0_sdkAPIKey_marshaled, ____1_workspaceId_marshaled, ____2_initData_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_sdkAPIKey_marshaled, ____1_workspaceId_marshaled, ____2_initData_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_sdkAPIKey' native representation
	il2cpp_codegen_marshal_free(____0_sdkAPIKey_marshaled);
	____0_sdkAPIKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_workspaceId' native representation
	il2cpp_codegen_marshal_free(____1_workspaceId_marshaled);
	____1_workspaceId_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_initData' native representation
	il2cpp_codegen_marshal_free(____2_initData_marshaled);
	____2_initData_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Int32 Bhaptics.SDK2.bhaptics_library::play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_play_m781AA5C817747DA5FEC7C2C52FA56555C2231447 (String_t* ___0_key, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "play", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(play)(____0_key_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_key_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return returnValue;
}
// System.Int32 Bhaptics.SDK2.bhaptics_library::playPosParam(System.String,System.Int32,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playPosParam_mAEA493B7959A4C7BF24EBC3E44E6A508533BB0FF (String_t* ___0_key, int32_t ___1_position, float ___2_intensity, float ___3_duration, float ___4_angleX, float ___5_offsetY, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, int32_t, float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t) + sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "playPosParam", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(playPosParam)(____0_key_marshaled, ___1_position, ___2_intensity, ___3_duration, ___4_angleX, ___5_offsetY);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_key_marshaled, ___1_position, ___2_intensity, ___3_duration, ___4_angleX, ___5_offsetY);
	#endif

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return returnValue;
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::stop(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_stop_mB70237BEF6C8D0122C5B021D7BDD14138528427B (int32_t ___0_key, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "stop", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(stop)(___0_key);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_key);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::stopByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_stopByEventId_m73622D4CF4E191294963B22F7D12EEE336FF9172 (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "stopByEventId", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_eventId' to native representation
	char* ____0_eventId_marshaled = NULL;
	____0_eventId_marshaled = il2cpp_codegen_marshal_string(___0_eventId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(stopByEventId)(____0_eventId_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_eventId_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_eventId' native representation
	il2cpp_codegen_marshal_free(____0_eventId_marshaled);
	____0_eventId_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::stopAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_stopAll_mA694C2E0E7FB26C2FFF039B67806C4791B82ADE1 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "stopAll", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(stopAll)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlaying_m90CFDC06DB7922F8DC88092FEEBF4A95EB919152 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "isPlaying", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isPlaying)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayingByRequestId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayingByRequestId_m5B2B973F0D1C2D5414F46E287F726A68D4B7E47C (int32_t ___0_key, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "isPlayingByRequestId", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isPlayingByRequestId)(___0_key);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_key);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayingByEventId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayingByEventId_m2C613045E7397316F94251F00528303A714D9D90 (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "isPlayingByEventId", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_eventId' to native representation
	char* ____0_eventId_marshaled = NULL;
	____0_eventId_marshaled = il2cpp_codegen_marshal_string(___0_eventId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isPlayingByEventId)(____0_eventId_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_eventId_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_eventId' native representation
	il2cpp_codegen_marshal_free(____0_eventId_marshaled);
	____0_eventId_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::isbHapticsConnected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isbHapticsConnected_m7052548864AF7FEED4D1F863431EEE81F7A1C1A3 (int32_t ___0_position, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "isbHapticsConnected", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isbHapticsConnected)(___0_position);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_position);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::ping(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_ping_m69DBE2626F8ED1E99725C55805DC39CFCFD09EE0 (String_t* ___0_address, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "ping", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_address' to native representation
	char* ____0_address_marshaled = NULL;
	____0_address_marshaled = il2cpp_codegen_marshal_string(___0_address);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ping)(____0_address_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_address_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_address' native representation
	il2cpp_codegen_marshal_free(____0_address_marshaled);
	____0_address_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::pingAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_pingAll_mF74095D895365B64F744A3F730C109AACA78DB3B (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "pingAll", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(pingAll)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::swapPosition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_swapPosition_m6367FC3768BC196EAB0E0EFF432419428F2D0C55 (String_t* ___0_address, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "swapPosition", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_address' to native representation
	char* ____0_address_marshaled = NULL;
	____0_address_marshaled = il2cpp_codegen_marshal_string(___0_address);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(swapPosition)(____0_address_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_address_marshaled);
	#endif

	// Marshaling cleanup of parameter '___0_address' native representation
	il2cpp_codegen_marshal_free(____0_address_marshaled);
	____0_address_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.IntPtr Bhaptics.SDK2.bhaptics_library::getDeviceInfoJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t bhaptics_library_getDeviceInfoJson_m3EF3330554DDB53D390322F7FBBBE4B3D76CAB45 (const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "getDeviceInfoJson", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(getDeviceInfoJson)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayerInstalled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayerInstalled_m527B5750B0265E5FBAAFB32464EEF4FE714C08C6 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "isPlayerInstalled", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isPlayerInstalled)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::isPlayerRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_isPlayerRunning_mEE931E2302DAFB703CDBE69B503786D5F94BC094 (const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "isPlayerRunning", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(isPlayerRunning)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Boolean Bhaptics.SDK2.bhaptics_library::launchPlayer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool bhaptics_library_launchPlayer_mC60FF9B51FBD17E3BFB05593011ECED2C875D9BF (bool ___0_b, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "launchPlayer", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(launchPlayer)(static_cast<int32_t>(___0_b));
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<int32_t>(___0_b));
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Bhaptics.SDK2.bhaptics_library::bHapticsGetHapticMessage(System.String,System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t bhaptics_library_bHapticsGetHapticMessage_m4A647DD96020C88079B1C3B61BACA6CD9E041554 (String_t* ___0_apiKey, String_t* ___1_appId, int32_t ___2_lastVersion, int32_t* ___3_status, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*, char*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "bHapticsGetHapticMessage", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_apiKey' to native representation
	char* ____0_apiKey_marshaled = NULL;
	____0_apiKey_marshaled = il2cpp_codegen_marshal_string(___0_apiKey);

	// Marshaling of parameter '___1_appId' to native representation
	char* ____1_appId_marshaled = NULL;
	____1_appId_marshaled = il2cpp_codegen_marshal_string(___1_appId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(bHapticsGetHapticMessage)(____0_apiKey_marshaled, ____1_appId_marshaled, ___2_lastVersion, ___3_status);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_apiKey_marshaled, ____1_appId_marshaled, ___2_lastVersion, ___3_status);
	#endif

	// Marshaling cleanup of parameter '___0_apiKey' native representation
	il2cpp_codegen_marshal_free(____0_apiKey_marshaled);
	____0_apiKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_appId' native representation
	il2cpp_codegen_marshal_free(____1_appId_marshaled);
	____1_appId_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Bhaptics.SDK2.bhaptics_library::bHapticsGetHapticMappings(System.String,System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t bhaptics_library_bHapticsGetHapticMappings_m60554EEA7F29C9019B5628E5DDD218D891A660C2 (String_t* ___0_apiKey, String_t* ___1_appId, int32_t ___2_lastVersion, int32_t* ___3_status, const RuntimeMethod* method) 
{
	typedef intptr_t (CDECL *PInvokeFunc) (char*, char*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "bHapticsGetHapticMappings", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_apiKey' to native representation
	char* ____0_apiKey_marshaled = NULL;
	____0_apiKey_marshaled = il2cpp_codegen_marshal_string(___0_apiKey);

	// Marshaling of parameter '___1_appId' to native representation
	char* ____1_appId_marshaled = NULL;
	____1_appId_marshaled = il2cpp_codegen_marshal_string(___1_appId);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(bHapticsGetHapticMappings)(____0_apiKey_marshaled, ____1_appId_marshaled, ___2_lastVersion, ___3_status);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____0_apiKey_marshaled, ____1_appId_marshaled, ___2_lastVersion, ___3_status);
	#endif

	// Marshaling cleanup of parameter '___0_apiKey' native representation
	il2cpp_codegen_marshal_free(____0_apiKey_marshaled);
	____0_apiKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_appId' native representation
	il2cpp_codegen_marshal_free(____1_appId_marshaled);
	____1_appId_marshaled = NULL;

	return returnValue;
}
// System.Int32 Bhaptics.SDK2.bhaptics_library::playDot(System.Int32,System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playDot_m3CCC59396717F92C6E9221A3AEB17559938A3F05 (int32_t ___0_position, int32_t ___1_durationMillis, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_motors, int32_t ___3_size, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, int32_t, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "playDot", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___2_motors' to native representation
	int32_t* ____2_motors_marshaled = NULL;
	if (___2_motors != NULL)
	{
		____2_motors_marshaled = reinterpret_cast<int32_t*>((___2_motors)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(playDot)(___0_position, ___1_durationMillis, ____2_motors_marshaled, ___3_size);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_position, ___1_durationMillis, ____2_motors_marshaled, ___3_size);
	#endif

	return returnValue;
}
// System.Int32 Bhaptics.SDK2.bhaptics_library::playWaveform(System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playWaveform_mFD99DF33FBC613F9C1FD1594EED0DA7B0C41919A (int32_t ___0_position, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_motorValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_playTimeValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_shapeValues, int32_t ___4_motorLen, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, int32_t*, int32_t*, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "playWaveform", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_motorValues' to native representation
	int32_t* ____1_motorValues_marshaled = NULL;
	if (___1_motorValues != NULL)
	{
		____1_motorValues_marshaled = reinterpret_cast<int32_t*>((___1_motorValues)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_playTimeValues' to native representation
	int32_t* ____2_playTimeValues_marshaled = NULL;
	if (___2_playTimeValues != NULL)
	{
		____2_playTimeValues_marshaled = reinterpret_cast<int32_t*>((___2_playTimeValues)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_shapeValues' to native representation
	int32_t* ____3_shapeValues_marshaled = NULL;
	if (___3_shapeValues != NULL)
	{
		____3_shapeValues_marshaled = reinterpret_cast<int32_t*>((___3_shapeValues)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(playWaveform)(___0_position, ____1_motorValues_marshaled, ____2_playTimeValues_marshaled, ____3_shapeValues_marshaled, ___4_motorLen);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_position, ____1_motorValues_marshaled, ____2_playTimeValues_marshaled, ____3_shapeValues_marshaled, ___4_motorLen);
	#endif

	return returnValue;
}
// System.Int32 Bhaptics.SDK2.bhaptics_library::playPath(System.Int32,System.Single[],System.Single[],System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playPath_mF5E92ECF4BA05C3305AB607673E580029DBA9FA5 (int32_t ___0_position, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___1_xValues, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_yValues, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_intensityValues, int32_t ___4_Len, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, float*, float*, int32_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "playPath", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___1_xValues' to native representation
	float* ____1_xValues_marshaled = NULL;
	if (___1_xValues != NULL)
	{
		____1_xValues_marshaled = reinterpret_cast<float*>((___1_xValues)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___2_yValues' to native representation
	float* ____2_yValues_marshaled = NULL;
	if (___2_yValues != NULL)
	{
		____2_yValues_marshaled = reinterpret_cast<float*>((___2_yValues)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_intensityValues' to native representation
	int32_t* ____3_intensityValues_marshaled = NULL;
	if (___3_intensityValues != NULL)
	{
		____3_intensityValues_marshaled = reinterpret_cast<int32_t*>((___3_intensityValues)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(playPath)(___0_position, ____1_xValues_marshaled, ____2_yValues_marshaled, ____3_intensityValues_marshaled, ___4_Len);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_position, ____1_xValues_marshaled, ____2_yValues_marshaled, ____3_intensityValues_marshaled, ___4_Len);
	#endif

	return returnValue;
}
// System.Int32 Bhaptics.SDK2.bhaptics_library::playLoop(System.String,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t bhaptics_library_playLoop_m101D6DA5DDD7E23F93480149ED54AC4EB97AD1A7 (String_t* ___0_key, float ___1_intensity, float ___2_duration, float ___3_angleX, float ___4_offsetY, int32_t ___5_interval, int32_t ___6_maxCount, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, float, float, float, float, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_bhaptics_library_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("bhaptics_library"), "playLoop", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_bhaptics_library_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(playLoop)(____0_key_marshaled, ___1_intensity, ___2_duration, ___3_angleX, ___4_offsetY, ___5_interval, ___6_maxCount);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_key_marshaled, ___1_intensity, ___2_duration, ___3_angleX, ___4_offsetY, ___5_interval, ___6_maxCount);
	#endif

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return returnValue;
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.HapticDevice> Bhaptics.SDK2.bhaptics_library::GetDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* bhaptics_library_GetDevices_mEE731D38475609C7082356F097F9DD91AB12F6DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisDeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48_mB2CF5657369D0EE15FB831F9FCA73BA0C9B004F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C1B108D370DE634DA6FEC63ED69B9D9917AB577);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1639942374F5F9692BB86E27579D3772AFF1630);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// IntPtr ptr = getDeviceInfoJson();
		intptr_t L_0;
		L_0 = bhaptics_library_getDeviceInfoJson_m3EF3330554DDB53D390322F7FBBBE4B3D76CAB45(NULL);
		// var devicesStr = PtrToStringUtf8(ptr);
		String_t* L_1;
		L_1 = bhaptics_library_PtrToStringUtf8_mCB824D8D2749CFFD2900E9C7E590E00EFF4C5ECD(L_0, NULL);
		V_0 = L_1;
		// if (devicesStr.Length == 0)
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogFormat("[bHaptics] GetDevices() empty. {0}", devicesStr);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralE1639942374F5F9692BB86E27579D3772AFF1630, L_5, NULL);
		// return new List<HapticDevice>();
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_7 = (List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903*)il2cpp_codegen_object_new(List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C(L_7, List_1__ctor_m0659D51BE2BB3DC504FB96894C0F8F9405644F3C_RuntimeMethod_var);
		return L_7;
	}

IL_002d:
	{
		// var hapticDevices = JsonUtility.FromJson<DeviceListMessage>("{\"devices\":" + devicesStr + "}");
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral2C1B108D370DE634DA6FEC63ED69B9D9917AB577, L_8, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		DeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48* L_10;
		L_10 = JsonUtility_FromJson_TisDeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48_mB2CF5657369D0EE15FB831F9FCA73BA0C9B004F8(L_9, JsonUtility_FromJson_TisDeviceListMessage_t1AE1268B59541DF1E242F4A0ADC0DD4615BD6B48_mB2CF5657369D0EE15FB831F9FCA73BA0C9B004F8_RuntimeMethod_var);
		// return BhapticsHelpers.Convert(hapticDevices.devices);
		NullCheck(L_10);
		DeviceU5BU5D_t8BF62FE8B1C5AA41A00949D1295DCCE774B74D3A* L_11 = L_10->___devices_0;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_12;
		L_12 = BhapticsHelpers_Convert_m91DA9F1B94A0A07391504F7B1114CBFEB8EDDD0E(L_11, NULL);
		return L_12;
	}
}
// System.Collections.Generic.List`1<Bhaptics.SDK2.MappingMetaData> Bhaptics.SDK2.bhaptics_library::EditorGetEventList(System.String,System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2* bhaptics_library_EditorGetEventList_mB97CECFDFE6CE66A6284FEFD4EFE9AD03D08F63D (String_t* ___0_appId, String_t* ___1_apiKey, int32_t ___2_lastVersion, int32_t* ___3_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m00B4BD1332EFF508E3090DB37C862685CD66E018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF4316F9C969D7520B849437B5084188751ED4E);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var bytes = bHapticsGetHapticMappings(apiKey, appId, lastVersion, out int code);
		String_t* L_0 = ___1_apiKey;
		String_t* L_1 = ___0_appId;
		int32_t L_2 = ___2_lastVersion;
		intptr_t L_3;
		L_3 = bhaptics_library_bHapticsGetHapticMappings_m60554EEA7F29C9019B5628E5DDD218D891A660C2(L_0, L_1, L_2, (&V_1), NULL);
		V_0 = L_3;
		// status = code;
		int32_t* L_4 = ___3_status;
		int32_t L_5 = V_1;
		*((int32_t*)L_4) = (int32_t)L_5;
		// if (code == 0)
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		// string str = PtrToStringUtf8(bytes);
		intptr_t L_7 = V_0;
		String_t* L_8;
		L_8 = bhaptics_library_PtrToStringUtf8_mCB824D8D2749CFFD2900E9C7E590E00EFF4C5ECD(L_7, NULL);
		// var mappingMessage = MappingMessage.CreateFromJSON(str);
		MappingMessage_t881D42E9DB20D48E0723ACDE01C43C6F9CBF796B* L_9;
		L_9 = MappingMessage_CreateFromJSON_m0954F3969E49784E665FDFEC995657BB2BF0BADB(L_8, NULL);
		// return mappingMessage.message;
		NullCheck(L_9);
		List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2* L_10 = L_9->___message_1;
		return L_10;
	}

IL_0022:
	{
		// Debug.LogFormat("EditorGetEventList {0}", status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		int32_t* L_13 = ___3_status;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral4FF4316F9C969D7520B849437B5084188751ED4E, L_12, NULL);
		// return new List<MappingMetaData>();
		List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2* L_17 = (List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2*)il2cpp_codegen_object_new(List_1_t99F8788B92A4C364094830FF3548D2CA6419B8E2_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_m00B4BD1332EFF508E3090DB37C862685CD66E018(L_17, List_1__ctor_m00B4BD1332EFF508E3090DB37C862685CD66E018_RuntimeMethod_var);
		return L_17;
	}
}
// System.String Bhaptics.SDK2.bhaptics_library::EditorGetSettings(System.String,System.String,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* bhaptics_library_EditorGetSettings_mABC0A94258D4B7A01301670868AA32B193C85A7B (String_t* ___0_appId, String_t* ___1_apiKey, int32_t ___2_lastVersion, int32_t* ___3_status2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var bytes = bHapticsGetHapticMessage(apiKey, appId, lastVersion, out int status);
		String_t* L_0 = ___1_apiKey;
		String_t* L_1 = ___0_appId;
		int32_t L_2 = ___2_lastVersion;
		intptr_t L_3;
		L_3 = bhaptics_library_bHapticsGetHapticMessage_m4A647DD96020C88079B1C3B61BACA6CD9E041554(L_0, L_1, L_2, (&V_1), NULL);
		V_0 = L_3;
		// status2 = status;
		int32_t* L_4 = ___3_status2;
		int32_t L_5 = V_1;
		*((int32_t*)L_4) = (int32_t)L_5;
		// if (status == 0)
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0018;
		}
	}
	{
		// string str = PtrToStringUtf8(bytes);
		intptr_t L_7 = V_0;
		String_t* L_8;
		L_8 = bhaptics_library_PtrToStringUtf8_mCB824D8D2749CFFD2900E9C7E590E00EFF4C5ECD(L_7, NULL);
		// return str;
		return L_8;
	}

IL_0018:
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.String Bhaptics.SDK2.bhaptics_library::PtrToStringUtf8(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* bhaptics_library_PtrToStringUtf8_mCB824D8D2749CFFD2900E9C7E590E00EFF4C5ECD (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (ptr == IntPtr.Zero)
		intptr_t L_0 = ___0_ptr;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_0013:
	{
		// int len = 0;
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		// len++;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001b:
	{
		// while (Marshal.ReadByte(ptr, len) != 0)
		intptr_t L_4 = ___0_ptr;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		uint8_t L_6;
		L_6 = Marshal_ReadByte_m40222A943AEA82FBFAC5D4881CABD56DFFBA7085(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0017;
		}
	}
	{
		// if (len == 0)
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_002d:
	{
		// byte[] array = new byte[len];
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		// Marshal.Copy(ptr, array, 0, len);
		intptr_t L_10 = ___0_ptr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_10, L_11, 0, L_12, NULL);
		// return System.Text.Encoding.UTF8.GetString(array);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_13, L_14);
		return L_15;
	}
}
// System.Void Bhaptics.SDK2.bhaptics_library::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bhaptics_library__ctor_mFF2E019116FB350C65493CDD07795DFB40D17903 (bhaptics_library_t787B996B8E1646F230C64CB65B9BCF77EA86DD55* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.PositonIconSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositonIconSetting__ctor_mE6E2ED5FDC81AAB63483A1EC21E2EB701B90A10D (PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.IconSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IconSetting__ctor_m0C11F98CD0EC3FE524D3827F4CD1E48408EAC8DA (IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_Awake_m795F618CED96DAE35CEDD272C12DEADAA8EEF9E5 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_ToLeft_m97ED75EE37633D7CF0652E65C8BDD318B39A0178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_ToRight_m421FD867F2E486483527FB30FD10DEC86916E62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pingButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___pingButton_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// pingButton.onClick.AddListener(Ping);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___pingButton_13;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
	}

IL_002a:
	{
		// if (lButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___lButton_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// lButton.onClick.AddListener(ToLeft);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___lButton_14;
		NullCheck(L_7);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_8;
		L_8 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)BhapticsDeviceUI_ToLeft_m97ED75EE37633D7CF0652E65C8BDD318B39A0178_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
	}

IL_0054:
	{
		// if (rButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___rButton_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// rButton.onClick.AddListener(ToRight);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___rButton_15;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)BhapticsDeviceUI_ToRight_m421FD867F2E486483527FB30FD10DEC86916E62C_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::RefreshDevice(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_RefreshDevice_mA2B76A0731ADC027EE873EC46ABFD62757D9D6BA (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_d, const RuntimeMethod* method) 
{
	{
		// device = d;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_0 = ___0_d;
		__this->___device_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___device_18), (void*)L_0);
		// if (device == null)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_1 = __this->___device_18;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// if (!gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_0035:
	{
		// UpdateIcon(d);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = ___0_d;
		BhapticsDeviceUI_UpdateIcon_m2402C81102A299C597D0D48BCEA4AE36C2352C3C(__this, L_6, NULL);
		// if (d.IsConnected)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_7 = ___0_d;
		NullCheck(L_7);
		bool L_8 = L_7->___IsConnected_1;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// RenderConnectMenu();
		BhapticsDeviceUI_RenderConnectMenu_m174D51DA23415C25A10CABB3E79798D83FC41FC1(__this, NULL);
		return;
	}

IL_004b:
	{
		// RenderDisconnectMenu();
		BhapticsDeviceUI_RenderDisconnectMenu_mDBFACD9FF396E0C348A2F1C3B756A0462B1499B1(__this, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::RenderConnectMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_RenderConnectMenu_m174D51DA23415C25A10CABB3E79798D83FC41FC1 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	{
		// ConnectMenu.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConnectMenu_12;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// DisconnectMenu.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DisconnectMenu_17;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// batteryLowImage.gameObject.SetActive(device.Battery < 20 && device.Battery >= 0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___batteryLowImage_11;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_6 = __this->___device_18;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Battery_7;
		G_B1_0 = L_5;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)20))))
		{
			G_B2_0 = L_5;
			goto IL_004f;
		}
	}
	{
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_8 = __this->___device_18;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Battery_7;
		G_B3_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0050;
	}

IL_004f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0050:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_1, (bool)G_B3_0, NULL);
		// UpdateButtons();
		BhapticsDeviceUI_UpdateButtons_mAE86ED4FB09898C95E43E7FFE04272674551B14D(__this, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::RenderDisconnectMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_RenderDisconnectMenu_mDBFACD9FF396E0C348A2F1C3B756A0462B1499B1 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	{
		// ConnectMenu.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConnectMenu_12;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// DisconnectMenu.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DisconnectMenu_17;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// batteryLowImage.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___batteryLowImage_11;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::UpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_UpdateButtons_mAE86ED4FB09898C95E43E7FFE04272674551B14D (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (device.IsAudioJack)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_0 = __this->___device_18;
		NullCheck(L_0);
		bool L_1 = L_0->___IsAudioJack_6;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// wiredNotification.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___wiredNotification_16;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// pingButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___pingButton_13;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// rButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___rButton_15;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// lButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___lButton_14;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// return;
		return;
	}

IL_004d:
	{
		// wiredNotification.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___wiredNotification_16;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// if (IsLeft(device.Position) || IsRight(device.Position))
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_10 = __this->___device_18;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Position_3;
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = BhapticsDeviceUI_IsLeft_m7C34703598911651EFF2E1703397197D85BD618A(L_11, NULL);
		if (L_12)
		{
			goto IL_007d;
		}
	}
	{
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_13 = __this->___device_18;
		NullCheck(L_13);
		int32_t L_14 = L_13->___Position_3;
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = BhapticsDeviceUI_IsRight_m5F8AE03F8352C66E6430363C5EF599E11122FCCE(L_14, NULL);
		if (!L_15)
		{
			goto IL_00df;
		}
	}

IL_007d:
	{
		// pingButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___pingButton_13;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// lButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___lButton_14;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// rButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___rButton_15;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// var isLeft = IsLeft(device.Position);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_22 = __this->___device_18;
		NullCheck(L_22);
		int32_t L_23 = L_22->___Position_3;
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = BhapticsDeviceUI_IsLeft_m7C34703598911651EFF2E1703397197D85BD618A(L_23, NULL);
		V_0 = L_24;
		// ChangeButtonColor(lButton, isLeft);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___lButton_14;
		bool L_26 = V_0;
		BhapticsDeviceUI_ChangeButtonColor_mC9F259809919F1E9CDE29A00D829833918435A61(__this, L_25, L_26, NULL);
		// ChangeButtonColor(rButton, !isLeft);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___rButton_15;
		bool L_28 = V_0;
		BhapticsDeviceUI_ChangeButtonColor_mC9F259809919F1E9CDE29A00D829833918435A61(__this, L_27, (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_00df:
	{
		// pingButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___pingButton_13;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// lButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31 = __this->___lButton_14;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_31, NULL);
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)0, NULL);
		// rButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33 = __this->___rButton_15;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// ChangeButtonColor(pingButton, true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_35 = __this->___pingButton_13;
		BhapticsDeviceUI_ChangeButtonColor_mC9F259809919F1E9CDE29A00D829833918435A61(__this, L_35, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::UpdateIcon(Bhaptics.SDK2.HapticDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_UpdateIcon_m2402C81102A299C597D0D48BCEA4AE36C2352C3C (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* ___0_d, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (d.Position)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_0 = ___0_d;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_3;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_00bd;
			}
			case 3:
			{
				goto IL_0126;
			}
			case 4:
			{
				goto IL_009a;
			}
			case 5:
			{
				goto IL_009a;
			}
			case 6:
			{
				goto IL_0077;
			}
			case 7:
			{
				goto IL_0077;
			}
			case 8:
			{
				goto IL_00e0;
			}
			case 9:
			{
				goto IL_0103;
			}
		}
	}
	{
		goto IL_0149;
	}

IL_003a:
	{
		// if (d.IsAudioJack)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_3 = ___0_d;
		NullCheck(L_3);
		bool L_4 = L_3->___IsAudioJack_6;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// icon.sprite = TactsuitWiredIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___icon_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___TactsuitWiredIcon_10;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// return;
		return;
	}

IL_0054:
	{
		// icon.sprite = GetSprite(widgetSetting.Vest, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_8 = __this->___widgetSetting_9;
		NullCheck(L_8);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_9 = L_8->___Vest_0;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_10 = ___0_d;
		NullCheck(L_10);
		bool L_11 = L_10->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_9, L_11, NULL);
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_12, NULL);
		// break;
		return;
	}

IL_0077:
	{
		// icon.sprite = GetSprite(widgetSetting.Foot, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_14 = __this->___widgetSetting_9;
		NullCheck(L_14);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_15 = L_14->___Foot_3;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_16 = ___0_d;
		NullCheck(L_16);
		bool L_17 = L_16->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18;
		L_18 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_15, L_17, NULL);
		NullCheck(L_13);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_13, L_18, NULL);
		// break;
		return;
	}

IL_009a:
	{
		// icon.sprite = GetSprite(widgetSetting.Hand, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_20 = __this->___widgetSetting_9;
		NullCheck(L_20);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_21 = L_20->___Hand_4;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_22 = ___0_d;
		NullCheck(L_22);
		bool L_23 = L_22->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24;
		L_24 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_21, L_23, NULL);
		NullCheck(L_19);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_19, L_24, NULL);
		// break;
		return;
	}

IL_00bd:
	{
		// icon.sprite = GetSprite(widgetSetting.Arm, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_26 = __this->___widgetSetting_9;
		NullCheck(L_26);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_27 = L_26->___Arm_2;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_28 = ___0_d;
		NullCheck(L_28);
		bool L_29 = L_28->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_30;
		L_30 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_27, L_29, NULL);
		NullCheck(L_25);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_25, L_30, NULL);
		// break;
		return;
	}

IL_00e0:
	{
		// icon.sprite = GetSprite(widgetSetting.GloveL, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_32 = __this->___widgetSetting_9;
		NullCheck(L_32);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_33 = L_32->___GloveL_5;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_34 = ___0_d;
		NullCheck(L_34);
		bool L_35 = L_34->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36;
		L_36 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_33, L_35, NULL);
		NullCheck(L_31);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_36, NULL);
		// break;
		return;
	}

IL_0103:
	{
		// icon.sprite = GetSprite(widgetSetting.GloveR, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_38 = __this->___widgetSetting_9;
		NullCheck(L_38);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_39 = L_38->___GloveR_6;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_40 = ___0_d;
		NullCheck(L_40);
		bool L_41 = L_40->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_42;
		L_42 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_39, L_41, NULL);
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_42, NULL);
		// break;
		return;
	}

IL_0126:
	{
		// icon.sprite = GetSprite(widgetSetting.Head, d.IsConnected);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___icon_8;
		IconSetting_t715B7C1B76209FF34BFEEC35DFDB8F9E6A9E589B* L_44 = __this->___widgetSetting_9;
		NullCheck(L_44);
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_45 = L_44->___Head_1;
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_46 = ___0_d;
		NullCheck(L_46);
		bool L_47 = L_46->___IsConnected_1;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_48;
		L_48 = BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7(__this, L_45, L_47, NULL);
		NullCheck(L_43);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_43, L_48, NULL);
		// break;
		return;
	}

IL_0149:
	{
		// icon.sprite = null;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49 = __this->___icon_8;
		NullCheck(L_49);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_49, (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL, NULL);
		// }
		return;
	}
}
// UnityEngine.Sprite Bhaptics.SDK2.BhapticsDeviceUI::GetSprite(Bhaptics.SDK2.PositonIconSetting,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* BhapticsDeviceUI_GetSprite_m1D9A32B9EC667FAFDA7C31672F607D91BBB230F7 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* ___0_icon, bool ___1_connected, const RuntimeMethod* method) 
{
	{
		// if (icon == null)
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_0 = ___0_icon;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
	}

IL_0005:
	{
		// return connected ? icon.connect : icon.disconnect;
		bool L_1 = ___1_connected;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_2 = ___0_icon;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___disconnect_1;
		return L_3;
	}

IL_000f:
	{
		PositonIconSetting_t76D7981A83EF9EAC0AB12F042CE21D90E8F1938F* L_4 = ___0_icon;
		NullCheck(L_4);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = L_4->___connect_0;
		return L_5;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::Ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (device == null)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_0 = __this->___device_18;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// BhapticsLibrary.Ping(device);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_1 = __this->___device_18;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_Ping_m6A5A1232B32BFB9A9C4381BA45689A6BB19D7143(L_1, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::ToLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_ToLeft_m97ED75EE37633D7CF0652E65C8BDD318B39A0178 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (device == null)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_0 = __this->___device_18;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (IsRight(device.Position))
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_1 = __this->___device_18;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_3;
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BhapticsDeviceUI_IsRight_m5F8AE03F8352C66E6430363C5EF599E11122FCCE(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// BhapticsLibrary.TogglePosition(device);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_4 = __this->___device_18;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_TogglePosition_m6FD1B2E88BB7C1FCFF9D2CE676424D1CC7BC0B7E(L_4, NULL);
		return;
	}

IL_0027:
	{
		// Ping();
		BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118(__this, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::ToRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_ToRight_m421FD867F2E486483527FB30FD10DEC86916E62C (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (device == null)
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_0 = __this->___device_18;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (IsLeft(device.Position))
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_1 = __this->___device_18;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Position_3;
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BhapticsDeviceUI_IsLeft_m7C34703598911651EFF2E1703397197D85BD618A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// BhapticsLibrary.TogglePosition(device);
		HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_4 = __this->___device_18;
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		BhapticsLibrary_TogglePosition_m6FD1B2E88BB7C1FCFF9D2CE676424D1CC7BC0B7E(L_4, NULL);
		return;
	}

IL_0027:
	{
		// Ping();
		BhapticsDeviceUI_Ping_m0C9998D0A273BC8A046BF97CB22F2D1798DDD118(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Color Bhaptics.SDK2.BhapticsDeviceUI::ToColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BhapticsDeviceUI_ToColor_mDF150724394E3BBDEFB0D82464A99B6425335027 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, String_t* ___0_hex, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color res = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		V_0 = L_0;
		// if (ColorUtility.TryParseHtmlString(hex, out res))
		String_t* L_1 = ___0_hex;
		bool L_2;
		L_2 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(L_1, (&V_0), NULL);
		// return res;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		return L_3;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::ChangeButtonColor(UnityEngine.UI.Button,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI_ChangeButtonColor_mC9F259809919F1E9CDE29A00D829833918435A61 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___0_targetButton, bool ___1_isSelect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* G_B2_0 = NULL;
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* G_B3_1 = NULL;
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* G_B5_0 = NULL;
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* G_B6_1 = NULL;
	{
		// var defaultColor = ToColor(isSelect ? SelectHexColor : DisableHexColor);
		bool L_0 = ___1_isSelect;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		String_t* L_1 = ((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___DisableHexColor_6;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		String_t* L_2 = ((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___SelectHexColor_4;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = BhapticsDeviceUI_ToColor_mDF150724394E3BBDEFB0D82464A99B6425335027(G_B3_1, G_B3_0, NULL);
		V_0 = L_3;
		// var hoverColor = ToColor(isSelect ? SelectHoverHexColor : DisableHoverHexColor);
		bool L_4 = ___1_isSelect;
		G_B4_0 = __this;
		if (L_4)
		{
			G_B5_0 = __this;
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		String_t* L_5 = ((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___DisableHoverHexColor_7;
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		goto IL_0026;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		String_t* L_6 = ((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___SelectHoverHexColor_5;
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0026:
	{
		NullCheck(G_B6_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = BhapticsDeviceUI_ToColor_mDF150724394E3BBDEFB0D82464A99B6425335027(G_B6_1, G_B6_0, NULL);
		V_1 = L_7;
		// var buttonColors = targetButton.colors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = ___0_targetButton;
		NullCheck(L_8);
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_9;
		L_9 = Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline(L_8, NULL);
		V_2 = L_9;
		// buttonColors.normalColor = defaultColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_2), L_10, NULL);
		// buttonColors.highlightedColor = hoverColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_1;
		ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_2), L_11, NULL);
		// buttonColors.pressedColor = defaultColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_2), L_12, NULL);
		// targetButton.colors = buttonColors;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = ___0_targetButton;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_14 = V_2;
		NullCheck(L_13);
		Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsDeviceUI::IsLeft(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsDeviceUI_IsLeft_m7C34703598911651EFF2E1703397197D85BD618A (int32_t ___0_pos, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_pos;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___0_pos;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 4)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0022;
			}
			case 3:
			{
				goto IL_0024;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_0022:
	{
		// return true;
		return (bool)1;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Bhaptics.SDK2.BhapticsDeviceUI::IsRight(Bhaptics.SDK2.PositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BhapticsDeviceUI_IsRight_m5F8AE03F8352C66E6430363C5EF599E11122FCCE (int32_t ___0_pos, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_pos;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___0_pos;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 5)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0022;
			}
			case 3:
			{
				goto IL_0024;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_0022:
	{
		// return true;
		return (bool)1;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI__ctor_m012694554CF78C651D234E9441A7C68D8BC613B9 (BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsDeviceUI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsDeviceUI__cctor_m800C5DF161A703104B14BAA7D8978D1FD6A714D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral332EB1CE470981513721D7B46A5736A11902C33C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AF9AEDF456482BD9FF1FC3C194BFE6189E4D52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0086625FC01AC0161E43904A94043C121704B2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64A2350393A3C6F7071EB4703EDF3F0841F5264);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string SelectHexColor = "#5267F9FF";
		((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___SelectHexColor_4 = _stringLiteralF0086625FC01AC0161E43904A94043C121704B2A;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___SelectHexColor_4), (void*)_stringLiteralF0086625FC01AC0161E43904A94043C121704B2A);
		// private static string SelectHoverHexColor = "#697CFFFF";
		((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___SelectHoverHexColor_5 = _stringLiteral332EB1CE470981513721D7B46A5736A11902C33C;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___SelectHoverHexColor_5), (void*)_stringLiteral332EB1CE470981513721D7B46A5736A11902C33C);
		// private static string DisableHexColor = "#525466FF";
		((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___DisableHexColor_6 = _stringLiteralF64A2350393A3C6F7071EB4703EDF3F0841F5264;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___DisableHexColor_6), (void*)_stringLiteralF64A2350393A3C6F7071EB4703EDF3F0841F5264);
		// private static string DisableHoverHexColor = "#63646FFF";
		((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___DisableHoverHexColor_7 = _stringLiteral3AF9AEDF456482BD9FF1FC3C194BFE6189E4D52A;
		Il2CppCodeGenWriteBarrier((void**)(&((BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_StaticFields*)il2cpp_codegen_static_fields_for(BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_il2cpp_TypeInfo_var))->___DisableHoverHexColor_7), (void*)_stringLiteral3AF9AEDF456482BD9FF1FC3C194BFE6189E4D52A);
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
// System.Void Bhaptics.SDK2.BhapticsUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_Start_mB2DC3142DEB2C7F13712493372F56A38A4F35F01 (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsUI_BackPage_m179F60B3BB65F9D3D4C40C6E67B57BAA92107F0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsUI_CloseHelpNotification_m29441463E51E3241B7052736EC60360AE410FCEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsUI_NextPage_m002135D2B1477011F0AF4E2D86271E16E1FCCE03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsUI_OnHelp_m910AFF8A009F8B03F9E8EAC697D2AF3E84ECE38A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsUI_OpenLink_m4F89133762CD8EDD6197708306459888D15A2BA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E3392699712485711EA14A1CD9A2D261C7B12DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisBhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_mF55871489ACB93049FF5E5CB5351B57B1C366E01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* V_1 = NULL;
	{
		// for (int i = 0; i < deviceListSize; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// var go = Instantiate(devicePrefab, devicesContainer.transform);
		BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_0 = __this->___devicePrefab_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___devicesContainer_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_3;
		L_3 = Object_Instantiate_TisBhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_mF55871489ACB93049FF5E5CB5351B57B1C366E01(L_0, L_2, Object_Instantiate_TisBhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE_mF55871489ACB93049FF5E5CB5351B57B1C366E01_RuntimeMethod_var);
		V_1 = L_3;
		// go.gameObject.SetActive(false);
		BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// controllers.Add(go);
		List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* L_6 = __this->___controllers_19;
		BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_m4E3392699712485711EA14A1CD9A2D261C7B12DA_inline(L_6, L_7, List_1_Add_m4E3392699712485711EA14A1CD9A2D261C7B12DA_RuntimeMethod_var);
		// for (int i = 0; i < deviceListSize; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < deviceListSize; i++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___deviceListSize_23;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// InvokeRepeating("Refresh", 1f, intervalRefreshTime);
		float L_11 = __this->___intervalRefreshTime_4;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676, (1.0f), L_11, NULL);
		// if (helpButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___helpButton_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		// helpButton.onClick.AddListener(OnHelp);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___helpButton_13;
		NullCheck(L_14);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_15;
		L_15 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_14, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)BhapticsUI_OnHelp_m910AFF8A009F8B03F9E8EAC697D2AF3E84ECE38A_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_15, L_16, NULL);
	}

IL_0080:
	{
		// if (helpCloseButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___helpCloseButton_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		// helpCloseButton.onClick.AddListener(CloseHelpNotification);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = __this->___helpCloseButton_18;
		NullCheck(L_19);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_20;
		L_20 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_19, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_21, __this, (intptr_t)((void*)BhapticsUI_CloseHelpNotification_m29441463E51E3241B7052736EC60360AE410FCEA_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_20, L_21, NULL);
	}

IL_00aa:
	{
		// if (bHapticsLinkButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___bHapticsLinkButton_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00d4;
		}
	}
	{
		// bHapticsLinkButton.onClick.AddListener(OpenLink);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = __this->___bHapticsLinkButton_14;
		NullCheck(L_24);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_25;
		L_25 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_24, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, __this, (intptr_t)((void*)BhapticsUI_OpenLink_m4F89133762CD8EDD6197708306459888D15A2BA9_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_25, L_26, NULL);
	}

IL_00d4:
	{
		// if (deviceListNextPageButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___deviceListNextPageButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00fe;
		}
	}
	{
		// deviceListNextPageButton.onClick.AddListener(NextPage);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = __this->___deviceListNextPageButton_8;
		NullCheck(L_29);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_30;
		L_30 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_29, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_31, __this, (intptr_t)((void*)BhapticsUI_NextPage_m002135D2B1477011F0AF4E2D86271E16E1FCCE03_RuntimeMethod_var), NULL);
		NullCheck(L_30);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_30, L_31, NULL);
	}

IL_00fe:
	{
		// if (deviceListBackPageButton != null)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = __this->___deviceListBackPageButton_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_0128;
		}
	}
	{
		// deviceListBackPageButton.onClick.AddListener(BackPage);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34 = __this->___deviceListBackPageButton_9;
		NullCheck(L_34);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_35;
		L_35 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_34, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_36 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_36, __this, (intptr_t)((void*)BhapticsUI_BackPage_m179F60B3BB65F9D3D4C40C6E67B57BAA92107F0F_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_35, L_36, NULL);
	}

IL_0128:
	{
		// if (mainPanel != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_37 = __this->___mainPanel_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_0158;
		}
	}
	{
		// defaultMainPanelSize = mainPanel.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_39 = __this->___mainPanel_5;
		NullCheck(L_39);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_39, NULL);
		__this->___defaultMainPanelSize_21 = L_40;
		// mainPanelCollider = mainPanel.GetComponent<BoxCollider>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41 = __this->___mainPanel_5;
		NullCheck(L_41);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_42;
		L_42 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(L_41, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->___mainPanelCollider_20 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainPanelCollider_20), (void*)L_42);
	}

IL_0158:
	{
		// if (devicesContainer != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___devicesContainer_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_44)
		{
			goto IL_0172;
		}
	}
	{
		// defaultDeviceContainerSize = defaultMainPanelSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = __this->___defaultMainPanelSize_21;
		__this->___defaultDeviceContainerSize_22 = L_45;
	}

IL_0172:
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_OnDestroy_mF89E74669B4513F5630A7ECBD5CF2BEBE2E22997 (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelInvoke("Refresh");
		MonoBehaviour_CancelInvoke_m268FFD58AFF64C07FD4C9B9B8B85F58BD86F3A01(__this, _stringLiteralF4C0D1BF72BE78A6F462ED9ACB0137E09DD4E676, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_Refresh_m4C8169B204CED8943495CED1C5A617C6AE9484FB (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE4D4F415E617EE858858DE5311A3D71C594AB44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var devices = BhapticsLibrary.GetDevices();
		il2cpp_codegen_runtime_class_init_inline(BhapticsLibrary_t6D53129F57794028041361553964454541AC97A3_il2cpp_TypeInfo_var);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_0;
		L_0 = BhapticsLibrary_GetDevices_m2A0E415820293AF2405FB9158C2465D9E6B46022(NULL);
		V_0 = L_0;
		// maxPageIndex = Mathf.FloorToInt(devices.Count / (float)deviceListSize);
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_1, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		int32_t L_3 = __this->___deviceListSize_23;
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(((float)L_2)/((float)L_3))), NULL);
		__this->___maxPageIndex_29 = L_4;
		// if (devices.Count == 0)
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_5, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_00e1;
		}
	}
	{
		// noPairedDeviceUi.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___noPairedDeviceUi_12;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// var deviceContainerRect = devicesContainer as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___devicesContainer_6;
		// deviceContainerRect.sizeDelta = defaultDeviceContainerSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___defaultDeviceContainerSize_22;
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_8, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_8, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_9, NULL);
		// mainPanel.sizeDelta = defaultMainPanelSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___mainPanel_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___defaultMainPanelSize_21;
		NullCheck(L_10);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_10, L_11, NULL);
		// mainPanelCollider.center = new Vector3(0f, -mainPanel.sizeDelta.y * 0.5f, 0f);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_12 = __this->___mainPanelCollider_20;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___mainPanel_5;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		float L_15 = L_14.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), ((float)il2cpp_codegen_multiply(((-L_15)), (0.5f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_12, L_16, NULL);
		// mainPanelCollider.size = new Vector3(mainPanel.sizeDelta.x, mainPanel.sizeDelta.y, 1f);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_17 = __this->___mainPanelCollider_20;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = __this->___mainPanel_5;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_18, NULL);
		float L_20 = L_19.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = __this->___mainPanel_5;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_21, NULL);
		float L_23 = L_22.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_20, L_23, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_17, L_24, NULL);
		// deviceListPageIndex = 0;
		__this->___deviceListPageIndex_24 = 0;
		// deviceListPageUi.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___deviceListPageUi_7;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		goto IL_02a2;
	}

IL_00e1:
	{
		// Vector2 currentExpandSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_27;
		// if (devices.Count >= pageActivateDeviceCount)
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_28, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		int32_t L_30 = __this->___pageActivateDeviceCount_27;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_01ad;
		}
	}
	{
		// currentExpandSize = new Vector2(0f, expandHeight * (pageActivateDeviceCount - expandDeviceCount) + pageExpandHeight);
		int32_t L_31 = __this->___expandHeight_25;
		int32_t L_32 = __this->___pageActivateDeviceCount_27;
		int32_t L_33 = __this->___expandDeviceCount_26;
		int32_t L_34 = __this->___pageExpandHeight_28;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.0f), ((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_31, ((int32_t)il2cpp_codegen_subtract(L_32, L_33)))), L_34))), NULL);
		// deviceListPageUi.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___deviceListPageUi_7;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)1, NULL);
		// deviceListPageText.text = (deviceListPageIndex + 1) + " / " + (maxPageIndex + 1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->___deviceListPageText_10;
		int32_t L_38 = __this->___deviceListPageIndex_24;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		int32_t L_40 = __this->___maxPageIndex_29;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_42;
		L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_39, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_41, NULL);
		NullCheck(L_37);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_42);
		// deviceListBackPageButton.interactable = deviceListPageIndex != 0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_43 = __this->___deviceListBackPageButton_9;
		int32_t L_44 = __this->___deviceListPageIndex_24;
		NullCheck(L_43);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_43, (bool)((!(((uint32_t)L_44) <= ((uint32_t)0)))? 1 : 0), NULL);
		// deviceListNextPageButton.interactable = deviceListPageIndex != maxPageIndex;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_45 = __this->___deviceListNextPageButton_8;
		int32_t L_46 = __this->___deviceListPageIndex_24;
		int32_t L_47 = __this->___maxPageIndex_29;
		NullCheck(L_45);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_45, (bool)((((int32_t)((((int32_t)L_46) == ((int32_t)L_47))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// if (deviceListPageIndex > maxPageIndex)
		int32_t L_48 = __this->___deviceListPageIndex_24;
		int32_t L_49 = __this->___maxPageIndex_29;
		if ((((int32_t)L_48) <= ((int32_t)L_49)))
		{
			goto IL_01f6;
		}
	}
	{
		// deviceListPageIndex = 0;
		__this->___deviceListPageIndex_24 = 0;
		goto IL_01f6;
	}

IL_01ad:
	{
		// if (devices.Count >= expandDeviceCount)
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_50, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		int32_t L_52 = __this->___expandDeviceCount_26;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_01de;
		}
	}
	{
		// currentExpandSize = new Vector2(0f, expandHeight * (1 + devices.Count - expandDeviceCount));
		int32_t L_53 = __this->___expandHeight_25;
		List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_54, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
		int32_t L_56 = __this->___expandDeviceCount_26;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), (0.0f), ((float)((int32_t)il2cpp_codegen_multiply(L_53, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(1, L_55)), L_56))))), NULL);
	}

IL_01de:
	{
		// deviceListPageIndex = 0;
		__this->___deviceListPageIndex_24 = 0;
		// deviceListPageUi.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___deviceListPageUi_7;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
	}

IL_01f6:
	{
		// var deviceContainerRect = devicesContainer as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = __this->___devicesContainer_6;
		// deviceContainerRect.sizeDelta = defaultDeviceContainerSize + currentExpandSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = __this->___defaultDeviceContainerSize_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_60, L_61, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_59, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_59, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_62, NULL);
		// mainPanel.sizeDelta = defaultMainPanelSize + currentExpandSize;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_63 = __this->___mainPanel_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = __this->___defaultMainPanelSize_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_64, L_65, NULL);
		NullCheck(L_63);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_63, L_66, NULL);
		// mainPanelCollider.center = new Vector3(0f, -mainPanel.sizeDelta.y * 0.5f, 0f);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_67 = __this->___mainPanelCollider_20;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = __this->___mainPanel_5;
		NullCheck(L_68);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_68, NULL);
		float L_70 = L_69.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), (0.0f), ((float)il2cpp_codegen_multiply(((-L_70)), (0.5f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_67, L_71, NULL);
		// mainPanelCollider.size = new Vector3(mainPanel.sizeDelta.x, mainPanel.sizeDelta.y, 1f);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_72 = __this->___mainPanelCollider_20;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = __this->___mainPanel_5;
		NullCheck(L_73);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_73, NULL);
		float L_75 = L_74.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_76 = __this->___mainPanel_5;
		NullCheck(L_76);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		L_77 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_76, NULL);
		float L_78 = L_77.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_79), L_75, L_78, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_72);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_72, L_79, NULL);
		// noPairedDeviceUi.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___noPairedDeviceUi_12;
		NullCheck(L_80);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_80, (bool)0, NULL);
		// SetActiveHelpGameObject(false);
		BhapticsUI_SetActiveHelpGameObject_m99AC352E99EE250D5D659168C4DA3C44222F334F(__this, (bool)0, NULL);
	}

IL_02a2:
	{
		// for (int i = 0; i < deviceListSize; i++)
		V_3 = 0;
		goto IL_0311;
	}

IL_02a6:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (i <= devices.Count - 1)
			int32_t L_81 = V_3;
			List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_82 = V_0;
			NullCheck(L_82);
			int32_t L_83;
			L_83 = List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_inline(L_82, List_1_get_Count_mF7A60479D7541BC23DF5648FC681AF2E4CCA0F51_RuntimeMethod_var);
			if ((((int32_t)L_81) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, 1)))))
			{
				goto IL_02da_1;
			}
		}
		{
			// controllers[i].RefreshDevice(devices[i + deviceListPageIndex * deviceListSize]);
			List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* L_84 = __this->___controllers_19;
			int32_t L_85 = V_3;
			NullCheck(L_84);
			BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_86;
			L_86 = List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914(L_84, L_85, List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914_RuntimeMethod_var);
			List_1_tCF6B4498C489B1F33CA594436B2CE01C3D9B3903* L_87 = V_0;
			int32_t L_88 = V_3;
			int32_t L_89 = __this->___deviceListPageIndex_24;
			int32_t L_90 = __this->___deviceListSize_23;
			NullCheck(L_87);
			HapticDevice_t56016082238999FEED131314B2DC3461F3D5D2D0* L_91;
			L_91 = List_1_get_Item_mE4D4F415E617EE858858DE5311A3D71C594AB44E(L_87, ((int32_t)il2cpp_codegen_add(L_88, ((int32_t)il2cpp_codegen_multiply(L_89, L_90)))), List_1_get_Item_mE4D4F415E617EE858858DE5311A3D71C594AB44E_RuntimeMethod_var);
			NullCheck(L_86);
			BhapticsDeviceUI_RefreshDevice_mA2B76A0731ADC027EE873EC46ABFD62757D9D6BA(L_86, L_91, NULL);
			goto IL_02f1_1;
		}

IL_02da_1:
		{
			// controllers[i].gameObject.SetActive(false);
			List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* L_92 = __this->___controllers_19;
			int32_t L_93 = V_3;
			NullCheck(L_92);
			BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_94;
			L_94 = List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914(L_92, L_93, List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914_RuntimeMethod_var);
			NullCheck(L_94);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95;
			L_95 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_94, NULL);
			NullCheck(L_95);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)0, NULL);
		}

IL_02f1_1:
		{
			// }
			goto IL_030d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02f3;
		}
		throw e;
	}

CATCH_02f3:
	{// begin catch(System.Exception)
		// catch (System.Exception e)
		// controllers[i].gameObject.SetActive(false);
		List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* L_96 = __this->___controllers_19;
		int32_t L_97 = V_3;
		NullCheck(L_96);
		BhapticsDeviceUI_t8D9F31A15CD7C01881B4C807F84A61DC861DDEAE* L_98;
		L_98 = List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914(L_96, L_97, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_get_Item_m76A7DA401FCC60D6E70767E66E407AE53DB2A914_RuntimeMethod_var)));
		NullCheck(L_98);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99;
		L_99 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_98, NULL);
		NullCheck(L_99);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_99, (bool)0, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_030d;
	}// end catch (depth: 1)

IL_030d:
	{
		// for (int i = 0; i < deviceListSize; i++)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0311:
	{
		// for (int i = 0; i < deviceListSize; i++)
		int32_t L_101 = V_3;
		int32_t L_102 = __this->___deviceListSize_23;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_02a6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::OnHelp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_OnHelp_m910AFF8A009F8B03F9E8EAC697D2AF3E84ECE38A (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	{
		// SetActiveHelpGameObject(true);
		BhapticsUI_SetActiveHelpGameObject_m99AC352E99EE250D5D659168C4DA3C44222F334F(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::CloseHelpNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_CloseHelpNotification_m29441463E51E3241B7052736EC60360AE410FCEA (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	{
		// SetActiveHelpGameObject(false);
		BhapticsUI_SetActiveHelpGameObject_m99AC352E99EE250D5D659168C4DA3C44222F334F(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::OpenLink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_OpenLink_m4F89133762CD8EDD6197708306459888D15A2BA9 (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21AF401D54A069E066A9313533E7CF143D7B97E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://www.bhaptics.com/support/download");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral21AF401D54A069E066A9313533E7CF143D7B97E0, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::NextPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_NextPage_m002135D2B1477011F0AF4E2D86271E16E1FCCE03 (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	{
		// deviceListPageIndex = Mathf.Clamp(deviceListPageIndex + 1, 0, maxPageIndex);
		int32_t L_0 = __this->___deviceListPageIndex_24;
		int32_t L_1 = __this->___maxPageIndex_29;
		int32_t L_2;
		L_2 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_0, 1)), 0, L_1, NULL);
		__this->___deviceListPageIndex_24 = L_2;
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::BackPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_BackPage_m179F60B3BB65F9D3D4C40C6E67B57BAA92107F0F (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	{
		// deviceListPageIndex = Mathf.Clamp(deviceListPageIndex - 1, 0, maxPageIndex);
		int32_t L_0 = __this->___deviceListPageIndex_24;
		int32_t L_1 = __this->___maxPageIndex_29;
		int32_t L_2;
		L_2 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_subtract(L_0, 1)), 0, L_1, NULL);
		__this->___deviceListPageIndex_24 = L_2;
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::SetActiveHelpGameObject(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI_SetActiveHelpGameObject_m99AC352E99EE250D5D659168C4DA3C44222F334F (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// helpUi.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___helpUi_15;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_002e;
		}
	}
	{
		// helpDescriptionQuest.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___helpDescriptionQuest_17;
		bool L_4 = ___0_value;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// helpDescriptionPC.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___helpDescriptionPC_16;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// helpDescriptionQuest.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___helpDescriptionQuest_17;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// helpDescriptionPC.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___helpDescriptionPC_16;
		bool L_8 = ___0_value;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Bhaptics.SDK2.BhapticsUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BhapticsUI__ctor_m8D760BD62243DEAFD65E832104338097FF3DF3E9 (BhapticsUI_tE3E9AFE0516B83C74170EA58C187628962431A56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E617AF14FD1CFE483F7DF76E45079063862D31B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float intervalRefreshTime = 1f;
		__this->___intervalRefreshTime_4 = (1.0f);
		// private List<BhapticsDeviceUI> controllers = new List<BhapticsDeviceUI>();
		List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4* L_0 = (List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4*)il2cpp_codegen_object_new(List_1_t5D64FFE01EAF2F3B11E116A7AACC3A2A1E2DCCD4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8E617AF14FD1CFE483F7DF76E45079063862D31B(L_0, List_1__ctor_m8E617AF14FD1CFE483F7DF76E45079063862D31B_RuntimeMethod_var);
		__this->___controllers_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controllers_19), (void*)L_0);
		// private int deviceListSize = 5;
		__this->___deviceListSize_23 = 5;
		// private int expandHeight = 78;
		__this->___expandHeight_25 = ((int32_t)78);
		// private int expandDeviceCount = 4;
		__this->___expandDeviceCount_26 = 4;
		// private int pageActivateDeviceCount = 6;
		__this->___pageActivateDeviceCount_27 = 6;
		// private int pageExpandHeight = 28;
		__this->___pageExpandHeight_28 = ((int32_t)28);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_AppId_mB2CC73C871D1DCC0703A4557213B1E74B79AC532_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return appId;
		String_t* L_0 = __this->___appId_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_ApiKey_m71FAC9C8A23BB8F44F623E82645B29744553968D_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return apiKey;
		String_t* L_0 = __this->___apiKey_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_DefaultDeploy_m2B1A71ECEB64A9968128C76522817EB401840D13_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return defaultDeploy;
		String_t* L_0 = __this->___defaultDeploy_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BhapticsSettings_get_AppName_mB8AB03A6A0E99989AE4E919324F7353307B8351D_inline (BhapticsSettings_t9C5CC432A1D6D6A5621BACCDF3D409C0DACE1F22* __this, const RuntimeMethod* method) 
{
	{
		// return appName;
		String_t* L_0 = __this->___appName_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 Selectable_get_colors_mB53E365D02351D4B64084295C4B2A7AF2DEC4750_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// public ColorBlock        colors            { get { return m_Colors; } set { if (SetPropertyUtility.SetStruct(ref m_Colors, value))            OnSetProperty(); } }
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_0 = __this->___m_Colors_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_NormalColor_0 = L_0;
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_HighlightedColor_1 = L_0;
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_PressedColor_2 = L_0;
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
